use crate::format::structure::{format_lines, validate_delimiters, DelimiterError};

pub fn format(content: &str) -> Result<String, WfsFormatError> {
    WfsFormatter::new().format(content)
}

pub fn format_with_indent(content: &str, indent: usize) -> Result<String, WfsFormatError> {
    WfsFormatter::with_indent(indent).format(content)
}

pub fn format_syntax_tree(content: &str) -> Result<String, WfsFormatError> {
    WfsFormatter::new().format_syntax_tree(content)
}

pub fn format_or_original(content: &str) -> String {
    WfsFormatter::new().format_or_original(content)
}

pub struct WfsFormatter {
    indent: usize,
}

impl Default for WfsFormatter {
    fn default() -> Self {
        Self::new()
    }
}

impl WfsFormatter {
    pub fn new() -> Self {
        Self { indent: 4 }
    }

    pub fn with_indent(indent: usize) -> Self {
        Self {
            indent: indent.max(1),
        }
    }

    pub fn format(&self, content: &str) -> Result<String, WfsFormatError> {
        validate_structure(content)?;
        self.format_validated(content)
    }

    pub fn format_syntax_tree(&self, content: &str) -> Result<String, WfsFormatError> {
        validate_structure(content)?;
        validate_syntax_tree(content)?;
        self.format_validated(content)
    }

    fn format_validated(&self, content: &str) -> Result<String, WfsFormatError> {
        let content = split_inline_field_declarations(content);
        Ok(format_lines(&content, self.indent, false, false))
    }

    pub fn format_or_original(&self, content: &str) -> String {
        self.format(content).unwrap_or_else(|_| content.to_string())
    }
}

fn split_inline_field_declarations(content: &str) -> String {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&crate::language_wfs())
        .expect("bundled WFS language must load");
    let Some(tree) = parser.parse(content, None) else {
        return content.to_string();
    };
    let root = tree.root_node();
    if root.has_error() {
        return content.to_string();
    }

    let mut edits = Vec::new();
    collect_inline_field_boundaries(root, content, &mut edits);
    edits.sort_by(|left, right| right.0.cmp(&left.0).then_with(|| right.1.cmp(&left.1)));
    edits.dedup();

    let mut formatted = content.to_string();
    for (start, end, replacement) in edits {
        formatted.replace_range(start..end, &replacement);
    }
    formatted
}

fn collect_inline_field_boundaries(
    node: tree_sitter::Node<'_>,
    content: &str,
    edits: &mut Vec<(usize, usize, String)>,
) {
    match node.kind() {
        "window_declaration" => {
            let mut cursor = node.walk();
            for child in node.children(&mut cursor) {
                if matches!(child.kind(), "window_attribute" | "fields_block") {
                    push_newline_if_inline(content, child.start_byte(), edits);
                } else if child.kind() == "}" {
                    push_newline_if_inline(content, child.start_byte(), edits);
                }
            }
        }
        "fields_block" => {
            let mut cursor = node.walk();
            for child in node.children(&mut cursor) {
                if child.kind() == "field_declaration" {
                    push_newline_if_inline(content, child.start_byte(), edits);
                    normalize_field_colon_spacing(child, content, edits);
                } else if child.kind() == "}" {
                    push_newline_if_inline(content, child.start_byte(), edits);
                }
            }
        }
        "string_array" => {
            let mut item_bytes = Vec::new();
            let mut closing_byte = None;
            let mut cursor = node.walk();
            for child in node.children(&mut cursor) {
                if child.kind() == "string" {
                    item_bytes.push(child.start_byte());
                } else if child.kind() == "]" {
                    closing_byte = Some(child.start_byte());
                }
            }
            if item_bytes.len() > 1 {
                for byte in item_bytes {
                    push_newline_if_inline(content, byte, edits);
                }
                if let Some(byte) = closing_byte {
                    push_newline_if_inline(content, byte, edits);
                }
            }
        }
        _ => {}
    }

    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        collect_inline_field_boundaries(child, content, edits);
    }
}

fn normalize_field_colon_spacing(
    node: tree_sitter::Node<'_>,
    content: &str,
    edits: &mut Vec<(usize, usize, String)>,
) {
    let Some(field_type) = node.child_by_field_name("type") else {
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

    let end = field_type.start_byte();
    let gap = &content[start..end];
    if gap.chars().all(char::is_whitespace) && gap != " " {
        edits.push((start, end, " ".to_string()));
    }
}

fn has_non_whitespace_on_line_before(content: &str, byte: usize) -> bool {
    let line_start = content[..byte].rfind('\n').map_or(0, |newline| newline + 1);
    !content[line_start..byte].trim().is_empty()
}

fn push_newline_if_inline(content: &str, byte: usize, edits: &mut Vec<(usize, usize, String)>) {
    if has_non_whitespace_on_line_before(content, byte) {
        edits.push((byte, byte, "\n".to_string()));
    }
}

fn validate_syntax_tree(content: &str) -> Result<(), WfsFormatError> {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&crate::language_wfs())
        .expect("bundled WFS language must load");
    let tree = parser
        .parse(content, None)
        .expect("parser must produce a tree");
    if let Some(point) = first_syntax_error(tree.root_node()) {
        return Err(WfsFormatError::Syntax {
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

fn validate_structure(content: &str) -> Result<(), WfsFormatError> {
    validate_delimiters(content).map_err(|error| match error {
        DelimiterError::UnclosedString { line } => WfsFormatError::UnclosedString { line },
        DelimiterError::UnclosedDelimiter {
            delimiter: '{',
            line,
        } => WfsFormatError::UnclosedBrace { line },
        DelimiterError::UnexpectedClosing {
            delimiter: '}',
            line,
        } => WfsFormatError::UnexpectedClosing { line },
        error => WfsFormatError::Structure {
            message: error.to_string(),
        },
    })
}

#[derive(Debug)]
pub enum WfsFormatError {
    UnclosedString { line: usize },
    UnclosedBrace { line: usize },
    UnexpectedClosing { line: usize },
    Structure { message: String },
    Syntax { line: usize, column: usize },
}

impl std::fmt::Display for WfsFormatError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            WfsFormatError::UnclosedString { line } => {
                write!(f, "line {}: string literal is not closed", line)
            }
            WfsFormatError::UnclosedBrace { line } => {
                write!(f, "line {}: unclosed brace", line)
            }
            WfsFormatError::UnexpectedClosing { line } => {
                write!(f, "line {}: unexpected closing brace", line)
            }
            WfsFormatError::Structure { message } => f.write_str(message),
            WfsFormatError::Syntax { line, column } => {
                write!(f, "line {}, column {}: invalid WFS syntax", line, column)
            }
        }
    }
}

impl std::error::Error for WfsFormatError {}

#[cfg(test)]
mod tests {
    use super::{
        format, format_or_original, format_syntax_tree, format_with_indent, WfsFormatError,
    };

    const NETWORK_WFS: &str = r#"window conn_events {
    stream = "netflow"
    time = event_time
    over = 30m
    fields {
        sip: ip
        dip: ip
        dport: digit
        bytes_out: digit
        protocol: chars
        event_time: time
    }
}

window conn_events_tcp {
    stream = "netflow_tcp"
    time = event_time
    over = 30m
    fields {
        sip: ip
        dip: ip
        dport: digit
        bytes_out: digit
        protocol: chars
        event_time: time
    }
}

window auth_events {
    stream = "auth_events"
    time = event_time
    over = 30m
    fields {
        sip: ip
        dip: ip
        dport: digit
        service: chars
        user: chars
        result: chars
        event_time: time
    }
}

window security_alerts {
    over = 0
    fields {
        sip: ip
        dip: ip
        alert_type: chars
        detail: chars
    }
}
"#;

    const WFUSION_AUTH_WFS: &str = r#"window xy_system_ssh_log {
    stream_tag = "xy_system_ssh_log"
    time = occur_time
    over = 2h
    fields {
        tenant_id: chars
        source_ip: ip
        target_host: chars
        target_user: chars
        whitelist_hit: chars
    }
}

window other_logs {
    stream_tag = [
        "xy_system_audit_log",
        "xy_system_network_log"
    ]
    time = occur_time
    over = 2h
    fields {
        tenant_id: chars
        source_ip: ip
    }
}
"#;

    #[test]
    fn formats_sample_wfs() {
        assert_eq!(format(NETWORK_WFS).unwrap(), NETWORK_WFS);
    }

    #[test]
    fn formats_wfusion_schema_with_stream_tag() {
        assert_eq!(format(WFUSION_AUTH_WFS).unwrap(), WFUSION_AUTH_WFS);
    }

    #[test]
    fn splits_inline_attributes_arrays_and_fields_with_stable_indentation() {
        let input = r#"window inline {
    stream_tag = ["audit", "network"] time = occur_time over = 2h fields { tenant_id: chars alert_id: chars}}
"#;
        let expected = r#"window inline {
    stream_tag = [
        "audit",
        "network"
    ]
    time = occur_time
    over = 2h
    fields {
        tenant_id: chars
        alert_id: chars
    }
}
"#;

        let formatted = format_syntax_tree(input).unwrap();
        assert_eq!(formatted, expected);
        assert_eq!(format_syntax_tree(&formatted).unwrap(), formatted);
    }

    #[test]
    fn formats_indentation() {
        let input = "window x {\nfields {\na: chars\n}\n}\n";
        let expected = "window x {\n    fields {\n        a: chars\n    }\n}\n";
        assert_eq!(format(input).unwrap(), expected);
    }

    #[test]
    fn supports_custom_indent_and_fallback() {
        let input = "window x {\nfields {\na: chars\n}\n}\n";
        let formatted = format_with_indent(input, 2).unwrap();
        assert!(formatted.contains("\n  fields {\n"));
        assert_eq!(format_or_original("window x {"), "window x {");
    }

    #[test]
    fn reports_unclosed_brace() {
        let err = format("window x {").unwrap_err();
        assert!(matches!(err, WfsFormatError::UnclosedBrace { .. }));
    }

    #[test]
    fn syntax_tree_formatter_rejects_invalid_schemas() {
        let err = format_syntax_tree("window {\n    fields {}\n}\n").unwrap_err();
        assert!(matches!(err, WfsFormatError::Syntax { .. }));
        assert!(format_syntax_tree(WFUSION_AUTH_WFS).is_ok());
    }
}
