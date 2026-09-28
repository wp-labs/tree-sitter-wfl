use crate::format::structure::{format_lines, validate_delimiters, DelimiterError};

pub fn format(content: &str) -> Result<String, WfgFormatError> {
    WfgFormatter::new().format(content)
}

pub fn format_with_indent(content: &str, indent: usize) -> Result<String, WfgFormatError> {
    WfgFormatter::with_indent(indent).format(content)
}

pub fn format_syntax_tree(content: &str) -> Result<String, WfgFormatError> {
    WfgFormatter::new().format_syntax_tree(content)
}

pub fn format_or_original(content: &str) -> String {
    WfgFormatter::new().format_or_original(content)
}

pub struct WfgFormatter {
    indent: usize,
}

impl Default for WfgFormatter {
    fn default() -> Self {
        Self::new()
    }
}

impl WfgFormatter {
    pub fn new() -> Self {
        Self { indent: 2 }
    }

    pub fn with_indent(indent: usize) -> Self {
        Self {
            indent: indent.max(1),
        }
    }

    pub fn format(&self, content: &str) -> Result<String, WfgFormatError> {
        validate_structure(content)?;
        self.format_validated(content)
    }

    pub fn format_syntax_tree(&self, content: &str) -> Result<String, WfgFormatError> {
        validate_structure(content)?;
        validate_syntax_tree(content)?;
        self.format_validated(content)
    }

    fn format_validated(&self, content: &str) -> Result<String, WfgFormatError> {
        let content = normalize_layout(content);
        Ok(format_lines(&content, self.indent, false, true))
    }

    pub fn format_or_original(&self, content: &str) -> String {
        self.format(content).unwrap_or_else(|_| content.to_string())
    }
}

fn normalize_layout(content: &str) -> String {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&crate::language_wfg())
        .expect("bundled WFG language must load");
    let Some(tree) = parser.parse(content, None) else {
        return content.to_string();
    };
    let root = tree.root_node();
    if root.has_error() {
        return content.to_string();
    }

    let mut edits = Vec::new();
    collect_layout_boundaries(root, content, &mut edits);
    edits.sort_by(|left, right| right.0.cmp(&left.0).then_with(|| right.1.cmp(&left.1)));
    edits.dedup();

    let mut normalized = content.to_string();
    for (start, end, replacement) in edits {
        normalized.replace_range(start..end, &replacement);
    }
    normalized
}

fn collect_layout_boundaries(
    node: tree_sitter::Node<'_>,
    source: &str,
    edits: &mut Vec<(usize, usize, String)>,
) {
    match node.kind() {
        "json_object" => collect_delimited_list_boundaries(node, source, "json_pair", "}", edits),
        "json_array" => collect_delimited_list_boundaries(node, source, "json_value", "]", edits),
        "json_pair" => collect_json_pair_spacing(node, source, edits),
        "predicate_group" => collect_long_predicate_boundaries(node, source, edits),
        _ => {}
    }

    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        collect_layout_boundaries(child, source, edits);
    }
}

fn collect_delimited_list_boundaries(
    node: tree_sitter::Node<'_>,
    source: &str,
    item_kind: &str,
    closing_kind: &str,
    edits: &mut Vec<(usize, usize, String)>,
) {
    let mut item_count = 0usize;
    let mut closing_byte = None;
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        if child.kind() == item_kind {
            item_count += 1;
            push_newline_if_inline(source, child.start_byte(), edits);
        } else if child.kind() == closing_kind {
            closing_byte = Some(child.start_byte());
        }
    }

    if item_count > 0 {
        if let Some(byte) = closing_byte {
            push_newline_if_inline(source, byte, edits);
        }
    }
}

fn collect_json_pair_spacing(
    node: tree_sitter::Node<'_>,
    source: &str,
    edits: &mut Vec<(usize, usize, String)>,
) {
    let Some(value) = node.child_by_field_name("value") else {
        return;
    };
    let mut colon_end = None;
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        if child.kind() == ":" {
            colon_end = Some(child.end_byte());
            break;
        }
    }

    let Some(start) = colon_end else {
        return;
    };
    let end = value.start_byte();
    let gap = &source[start..end];
    if gap.chars().all(char::is_whitespace) && gap != " " {
        edits.push((start, end, " ".to_string()));
    }
}

fn collect_long_predicate_boundaries(
    node: tree_sitter::Node<'_>,
    source: &str,
    edits: &mut Vec<(usize, usize, String)>,
) {
    let text = &source[node.byte_range()];
    if !text.lines().any(|line| line.len() > 100) {
        return;
    }

    let mut list = None;
    let mut closing_byte = None;
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        if child.kind() == "field_predicate_list" {
            list = Some(child);
        } else if child.kind() == ")" {
            closing_byte = Some(child.start_byte());
        }
    }

    if let Some(list) = list {
        let mut cursor = list.walk();
        for predicate in list.children(&mut cursor) {
            if predicate.kind() == "field_predicate" {
                push_newline_if_inline(source, predicate.start_byte(), edits);
            }
        }
    }
    if let Some(byte) = closing_byte {
        push_newline_if_inline(source, byte, edits);
    }
}

fn push_newline_if_inline(source: &str, byte: usize, edits: &mut Vec<(usize, usize, String)>) {
    let line_start = source[..byte].rfind('\n').map_or(0, |newline| newline + 1);
    if !source[line_start..byte].trim().is_empty() {
        edits.push((byte, byte, "\n".to_string()));
    }
}

fn validate_syntax_tree(content: &str) -> Result<(), WfgFormatError> {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&crate::language_wfg())
        .expect("bundled WFG language must load");
    let tree = parser
        .parse(content, None)
        .expect("parser must produce a tree");
    if let Some(point) = first_syntax_error(tree.root_node()) {
        return Err(WfgFormatError::Syntax {
            line: point.row + 1,
            column: point.column + 1,
        });
    }
    Ok(())
}

fn first_syntax_error(node: tree_sitter::Node<'_>) -> Option<tree_sitter::Point> {
    if node.is_error() || node.is_missing() {
        return Some(node.start_position());
    }
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        if child.has_error() || child.is_missing() {
            if let Some(point) = first_syntax_error(child) {
                return Some(point);
            }
        }
    }
    None
}

fn validate_structure(content: &str) -> Result<(), WfgFormatError> {
    validate_delimiters(content).map_err(|error| match error {
        DelimiterError::UnclosedString { line } => WfgFormatError::UnclosedString { line },
        DelimiterError::UnclosedDelimiter {
            delimiter: '{',
            line,
        } => WfgFormatError::UnclosedBrace { line },
        DelimiterError::UnexpectedClosing {
            delimiter: '}',
            line,
        } => WfgFormatError::UnexpectedClosing { line },
        error => WfgFormatError::Structure {
            message: error.to_string(),
        },
    })
}

#[derive(Debug)]
pub enum WfgFormatError {
    UnclosedString { line: usize },
    UnclosedBrace { line: usize },
    UnexpectedClosing { line: usize },
    Structure { message: String },
    Syntax { line: usize, column: usize },
}

impl std::fmt::Display for WfgFormatError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            WfgFormatError::UnclosedString { line } => {
                write!(f, "line {}: string literal is not closed", line)
            }
            WfgFormatError::UnclosedBrace { line } => {
                write!(f, "line {}: unclosed brace", line)
            }
            WfgFormatError::UnexpectedClosing { line } => {
                write!(f, "line {}: unexpected closing brace", line)
            }
            WfgFormatError::Structure { message } => f.write_str(message),
            WfgFormatError::Syntax { line, column } => {
                write!(f, "line {}, column {}: invalid WFG syntax", line, column)
            }
        }
    }
}

impl std::error::Error for WfgFormatError {}

#[cfg(test)]
mod tests {
    use super::{
        format, format_or_original, format_syntax_tree, format_with_indent, WfgFormatError,
    };

    const NETWORK_WFG: &str = r#"use "../../schemas/network/network.wfs"
use "../../rules/rat_propagation/rat_propagation.wfl"

#[duration=10s]
scenario sandbox<seed=42> {
  background { stream auth_events gen 5/s }

  inject {
    hit<sip: 100> for rat_propagation_auth auth_events {
      use(result="success", service="ssh", dport=22, dip="192.168.1.10") x 10
    }
  }
}
"#;

    const WFUSION_SCENARIO_WFG: &str = r#"use "../schemas/auth.wfs"
use "../rules/ssh_brute_force_alert.wfl"

#[duration=1m]
scenario ssh_brute_force_alert_case<seed=42> {
    background {
        stream xy_system_ssh_log gen 10/s
    }

    inject {
        hit<source_ip: 25> for ssh_brute_force_alert xy_system_ssh_log {
            use(tenant_id="tenant01", event_category="auth", operation="failed_login", outcome="failed", observer_product="sshd", target_host="ent-bas-zerotrust-01", target_user="root") x 25
        }
    }
}
"#;

    #[test]
    fn formats_sample_wfg() {
        let formatted = format(NETWORK_WFG).unwrap();
        assert!(formatted.contains("#[duration=10s]\nscenario sandbox<seed=42> {\n"));
        assert!(formatted.contains("  background { stream auth_events gen 5/s }\n"));
        assert!(formatted.contains("    hit<sip: 100> for rat_propagation_auth auth_events {\n"));
        assert!(formatted.contains(
            "      use(result=\"success\", service=\"ssh\", dport=22, dip=\"192.168.1.10\") x 10\n"
        ));
    }

    #[test]
    fn formats_wfusion_scenario() {
        let formatted = format(WFUSION_SCENARIO_WFG).unwrap();
        assert!(formatted.contains("scenario ssh_brute_force_alert_case<seed=42> {\n"));
        assert!(formatted.contains("  background {\n    stream xy_system_ssh_log gen 10/s\n  }\n"));
        assert!(formatted
            .contains("    hit<source_ip: 25> for ssh_brute_force_alert xy_system_ssh_log {\n"));
        assert!(formatted.contains(
            "      use(\n        tenant_id=\"tenant01\",\n        event_category=\"auth\",\n"
        ));
        assert!(formatted.contains("        target_user=\"root\"\n      ) x 25\n"));
    }

    #[test]
    fn formats_inline_json_with_nested_indentation() {
        let input = r#"scenario inline<seed=42> {
  background { stream auth_events gen 1/s }
  inject {
    hit<sip: 1> for rat_propagation_auth auth_events {
      use({"meta":{"tenant":"t","source":{"vendor":"x"}},"items":[1,2]}) x 1
    }
  }
}
"#;
        let expected = r#"scenario inline<seed=42> {
  background { stream auth_events gen 1/s }
  inject {
    hit<sip: 1> for rat_propagation_auth auth_events {
      use({
        "meta": {
          "tenant": "t",
          "source": {
            "vendor": "x"
          }
        },
        "items": [
          1,
          2
        ]
      }) x 1
    }
  }
}
"#;

        let formatted = format_syntax_tree(input).unwrap();
        assert_eq!(formatted, expected);
        assert_eq!(format_syntax_tree(&formatted).unwrap(), formatted);
    }

    #[test]
    fn formats_indentation() {
        let input = "scenario x {\nbackground {\nstream a gen 1/s\n}\n}\n";
        let expected = "scenario x {\n  background {\n    stream a gen 1/s\n  }\n}\n";
        assert_eq!(format(input).unwrap(), expected);
    }

    #[test]
    fn supports_custom_indent_and_fallback() {
        let input = "scenario x {\nbackground {\nstream a gen 1/s\n}\n}\n";
        let formatted = format_with_indent(input, 2).unwrap();
        assert!(formatted.contains("\n  background {\n"));
        assert_eq!(format_or_original("scenario x {"), "scenario x {");
    }

    #[test]
    fn reports_unclosed_brace() {
        let err = format("scenario x {").unwrap_err();
        assert!(matches!(err, WfgFormatError::UnclosedBrace { .. }));
    }

    #[test]
    fn syntax_tree_formatter_rejects_invalid_scenarios() {
        let err = format_syntax_tree("scenario {\n    traffic {}\n}\n").unwrap_err();
        assert!(matches!(err, WfgFormatError::Syntax { .. }));
        assert!(format_syntax_tree(WFUSION_SCENARIO_WFG).is_ok());
    }
}
