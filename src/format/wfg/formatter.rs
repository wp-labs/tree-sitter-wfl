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
        Ok(format_lines(content, self.indent, false, true))
    }

    pub fn format_or_original(&self, content: &str) -> String {
        self.format(content).unwrap_or_else(|_| content.to_string())
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
        assert!(formatted.contains("      use(tenant_id=\"tenant01\", event_category=\"auth\", operation=\"failed_login\", outcome=\"failed\", observer_product=\"sshd\", target_host=\"ent-bas-zerotrust-01\", target_user=\"root\") x 25\n"));
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
