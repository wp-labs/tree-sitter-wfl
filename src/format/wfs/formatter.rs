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
        Ok(format_lines(content, self.indent, false, false))
    }

    pub fn format_or_original(&self, content: &str) -> String {
        self.format(content).unwrap_or_else(|_| content.to_string())
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
