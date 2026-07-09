pub fn format(content: &str) -> Result<String, WfsFormatError> {
    WfsFormatter::new().format(content)
}

pub fn format_with_indent(content: &str, indent: usize) -> Result<String, WfsFormatError> {
    WfsFormatter::with_indent(indent).format(content)
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

        let normalized = content.replace("\r\n", "\n").replace('\r', "\n");
        let mut out = String::new();
        let mut indent_level = 0usize;
        let mut last_blank = false;

        for raw_line in normalized.lines() {
            let trimmed = raw_line.trim();
            if trimmed.is_empty() {
                if !last_blank && !out.is_empty() {
                    out.push('\n');
                }
                last_blank = true;
                continue;
            }

            let leading_closers = leading_closing_braces(trimmed);
            indent_level = indent_level.saturating_sub(leading_closers);

            out.push_str(&" ".repeat(indent_level * self.indent));
            out.push_str(trimmed);
            out.push('\n');
            last_blank = false;

            let (open_count, close_count) = brace_delta(trimmed);
            indent_level += open_count;
            indent_level = indent_level.saturating_sub(close_count.saturating_sub(leading_closers));
        }

        if !out.ends_with('\n') {
            out.push('\n');
        }
        Ok(out)
    }

    pub fn format_or_original(&self, content: &str) -> String {
        self.format(content).unwrap_or_else(|_| content.to_string())
    }
}

fn validate_structure(content: &str) -> Result<(), WfsFormatError> {
    let normalized = content.replace("\r\n", "\n").replace('\r', "\n");
    let mut stack: Vec<usize> = Vec::new();
    let mut in_string = false;
    let mut escaped = false;
    let mut in_comment = false;
    let mut line = 1usize;
    let chars: Vec<char> = normalized.chars().collect();
    let mut i = 0usize;

    while i < chars.len() {
        let ch = chars[i];

        if in_comment {
            if ch == '\n' {
                in_comment = false;
                line += 1;
            }
            i += 1;
            continue;
        }

        if in_string {
            if escaped {
                escaped = false;
            } else if ch == '\\' {
                escaped = true;
            } else if ch == '"' {
                in_string = false;
            } else if ch == '\n' {
                line += 1;
            }
            i += 1;
            continue;
        }

        if ch == '/' && i + 1 < chars.len() && chars[i + 1] == '/' {
            in_comment = true;
            i += 2;
            continue;
        }

        match ch {
            '"' => in_string = true,
            '{' => stack.push(line),
            '}' => {
                if stack.pop().is_none() {
                    return Err(WfsFormatError::UnexpectedClosing { line });
                }
            }
            '\n' => line += 1,
            _ => {}
        }
        i += 1;
    }

    if in_string {
        return Err(WfsFormatError::UnclosedString { line });
    }

    if let Some(open_line) = stack.pop() {
        return Err(WfsFormatError::UnclosedBrace { line: open_line });
    }

    Ok(())
}

fn leading_closing_braces(line: &str) -> usize {
    let mut count = 0usize;
    for ch in line.chars() {
        if ch == '}' {
            count += 1;
        } else {
            break;
        }
    }
    count
}

fn brace_delta(line: &str) -> (usize, usize) {
    let mut open_count = 0usize;
    let mut close_count = 0usize;
    let mut in_string = false;
    let mut escaped = false;
    let chars: Vec<char> = line.chars().collect();
    let mut i = 0usize;

    while i < chars.len() {
        let ch = chars[i];
        if in_string {
            if escaped {
                escaped = false;
            } else if ch == '\\' {
                escaped = true;
            } else if ch == '"' {
                in_string = false;
            }
            i += 1;
            continue;
        }

        if ch == '/' && i + 1 < chars.len() && chars[i + 1] == '/' {
            break;
        }

        match ch {
            '"' => in_string = true,
            '{' => open_count += 1,
            '}' => close_count += 1,
            _ => {}
        }
        i += 1;
    }

    (open_count, close_count)
}

#[derive(Debug)]
pub enum WfsFormatError {
    UnclosedString { line: usize },
    UnclosedBrace { line: usize },
    UnexpectedClosing { line: usize },
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
        }
    }
}

impl std::error::Error for WfsFormatError {}

#[cfg(test)]
mod tests {
    use super::{format, format_or_original, format_with_indent, WfsFormatError};

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

    #[test]
    fn formats_sample_wfs() {
        assert_eq!(format(NETWORK_WFS).unwrap(), NETWORK_WFS);
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
}
