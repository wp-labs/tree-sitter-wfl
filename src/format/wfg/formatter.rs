pub fn format(content: &str) -> Result<String, WfgFormatError> {
    WfgFormatter::new().format(content)
}

pub fn format_with_indent(content: &str, indent: usize) -> Result<String, WfgFormatError> {
    WfgFormatter::with_indent(indent).format(content)
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
        Self { indent: 4 }
    }

    pub fn with_indent(indent: usize) -> Self {
        Self {
            indent: indent.max(1),
        }
    }

    pub fn format(&self, content: &str) -> Result<String, WfgFormatError> {
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

            let leading_closers = leading_closing_tokens(trimmed);
            indent_level = indent_level.saturating_sub(leading_closers);

            out.push_str(&" ".repeat(indent_level * self.indent));
            out.push_str(trimmed);
            out.push('\n');
            last_blank = false;

            let (open_count, close_count) = structural_delta(trimmed);
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

fn validate_structure(content: &str) -> Result<(), WfgFormatError> {
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
                    return Err(WfgFormatError::UnexpectedClosing { line });
                }
            }
            '\n' => line += 1,
            _ => {}
        }
        i += 1;
    }

    if in_string {
        return Err(WfgFormatError::UnclosedString { line });
    }

    if let Some(open_line) = stack.pop() {
        return Err(WfgFormatError::UnclosedBrace { line: open_line });
    }

    Ok(())
}

fn leading_closing_tokens(line: &str) -> usize {
    let mut count = 0usize;
    for ch in line.chars() {
        if matches!(ch, '}' | ')' | ']') {
            count += 1;
        } else {
            break;
        }
    }
    count
}

fn structural_delta(line: &str) -> (usize, usize) {
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
            '{' | '(' | '[' => open_count += 1,
            '}' | ')' | ']' => close_count += 1,
            _ => {}
        }
        i += 1;
    }

    (open_count, close_count)
}

#[derive(Debug)]
pub enum WfgFormatError {
    UnclosedString { line: usize },
    UnclosedBrace { line: usize },
    UnexpectedClosing { line: usize },
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
        }
    }
}

impl std::error::Error for WfgFormatError {}

#[cfg(test)]
mod tests {
    use super::{format, format_or_original, format_with_indent, WfgFormatError};

    const NETWORK_WFG: &str = r#"use "../../schemas/network/network.wfs"
use "../../rules/rat_propagation/rat_propagation.wfl"

#[duration=10s]
scenario sandbox<seed=42> {
  traffic { stream auth_events gen 5/s }

  injection {
    hit<100%> for rat_propagation_auth auth_events {
      sip seq {
        use(result="success", service="ssh", dport=22, dip="192.168.1.10") with(10)
      }
    }
  }
}
"#;

    const WFUSION_SCENARIO_WFG: &str = r#"use "../schemas/auth.wfs"
use "../rules/ssh_brute_force_alert.wfl"

#[duration=1m]
scenario ssh_brute_force_alert_case<seed=42> {
    traffic {
        stream xy_system_ssh_log gen 10/s
    }

    injection {
        hit<30%> xy_system_ssh_log {
            source_ip seq {
                use(tenant_id="tenant01", event_category="auth", operation="failed_login", outcome="failed", observer_product="sshd", target_host="ent-bas-zerotrust-01", target_user="root") with(25)
            }
        }
    }

    expect {
        hit(ssh_brute_force_alert) >= 70%
    }
}
"#;

    #[test]
    fn formats_sample_wfg() {
        let formatted = format(NETWORK_WFG).unwrap();
        assert!(formatted.contains("#[duration=10s]\nscenario sandbox<seed=42> {\n"));
        assert!(formatted.contains("    traffic { stream auth_events gen 5/s }\n"));
        assert!(formatted.contains("        hit<100%> for rat_propagation_auth auth_events {\n"));
        assert!(formatted.contains("                use(result=\"success\", service=\"ssh\", dport=22, dip=\"192.168.1.10\") with(10)\n"));
    }

    #[test]
    fn formats_wfusion_scenario() {
        let formatted = format(WFUSION_SCENARIO_WFG).unwrap();
        assert!(formatted.contains("scenario ssh_brute_force_alert_case<seed=42> {\n"));
        assert!(formatted.contains("    traffic {\n        stream xy_system_ssh_log gen 10/s\n    }\n"));
        assert!(formatted.contains("        hit<30%> xy_system_ssh_log {\n"));
        assert!(formatted.contains("                use(tenant_id=\"tenant01\", event_category=\"auth\", operation=\"failed_login\", outcome=\"failed\", observer_product=\"sshd\", target_host=\"ent-bas-zerotrust-01\", target_user=\"root\") with(25)\n"));
    }

    #[test]
    fn formats_indentation() {
        let input = "scenario x {\ntraffic {\nstream a gen 1/s\n}\n}\n";
        let expected = "scenario x {\n    traffic {\n        stream a gen 1/s\n    }\n}\n";
        assert_eq!(format(input).unwrap(), expected);
    }

    #[test]
    fn supports_custom_indent_and_fallback() {
        let input = "scenario x {\ntraffic {\nstream a gen 1/s\n}\n}\n";
        let formatted = format_with_indent(input, 2).unwrap();
        assert!(formatted.contains("\n  traffic {\n"));
        assert_eq!(format_or_original("scenario x {"), "scenario x {");
    }

    #[test]
    fn reports_unclosed_brace() {
        let err = format("scenario x {").unwrap_err();
        assert!(matches!(err, WfgFormatError::UnclosedBrace { .. }));
    }
}
