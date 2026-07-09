pub fn format(content: &str) -> Result<String, WflFormatError> {
    WflFormatter::new().format(content)
}

pub fn format_with_indent(content: &str, indent: usize) -> Result<String, WflFormatError> {
    WflFormatter::with_indent(indent).format(content)
}

pub fn format_or_original(content: &str) -> String {
    WflFormatter::new().format_or_original(content)
}

pub struct WflFormatter {
    indent: usize,
}

impl Default for WflFormatter {
    fn default() -> Self {
        Self::new()
    }
}

impl WflFormatter {
    pub fn new() -> Self {
        Self { indent: 4 }
    }

    pub fn with_indent(indent: usize) -> Self {
        Self {
            indent: indent.max(1),
        }
    }

    pub fn format(&self, content: &str) -> Result<String, WflFormatError> {
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

fn validate_structure(content: &str) -> Result<(), WflFormatError> {
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
                    return Err(WflFormatError::UnexpectedClosing { line });
                }
            }
            '\n' => line += 1,
            _ => {}
        }
        i += 1;
    }

    if in_string {
        return Err(WflFormatError::UnclosedString { line });
    }

    if let Some(open_line) = stack.pop() {
        return Err(WflFormatError::UnclosedBrace { line: open_line });
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
pub enum WflFormatError {
    UnclosedString { line: usize },
    UnclosedBrace { line: usize },
    UnexpectedClosing { line: usize },
}

impl std::fmt::Display for WflFormatError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            WflFormatError::UnclosedString { line } => {
                write!(f, "line {}: string literal is not closed", line)
            }
            WflFormatError::UnclosedBrace { line } => {
                write!(f, "line {}: unclosed brace", line)
            }
            WflFormatError::UnexpectedClosing { line } => {
                write!(f, "line {}: unexpected closing brace", line)
            }
        }
    }
}

impl std::error::Error for WflFormatError {}

#[cfg(test)]
mod tests {
    use super::{format, format_or_original, format_with_indent, WflFormatError};

    const RAT_PROPAGATION_WFL: &str = r#"use "network.wfs"

// 远控木马扩散检测
//
// 攻击链路：扫描内网 → 成功登录 → 数据传输
//
// 多别名事件：
//   scan  : conn_events 中低字节连接（扫描特征：dport 22|445|3389 + bytes_out < 1000）
//   login : auth_events 中成功登录
//   xfer  : conn_events 中大量数据传输（bytes_out >= 10000）
//
// 多步匹配：
//   step 1: scan 事件触发
//   step 2: login 事件触发（必须在 scan 之后）
//   step 3: xfer 事件触发（必须在 login 之后）
//   close: 至少攻击 3 个以上不同目标才告警

rule rat_propagation {
    events {
        scan  : conn_events && (dport == 22 || dport == 445 || dport == 3389) && bytes_out < 1000
        login : auth_events && result == "success"
        xfer  : conn_events && bytes_out >= 10000
    }
    match<sip,dip:5m> {
        on event {
            scan | count >= 1;
            login | count >= 1;
            xfer | count >= 1;
        }
    } -> score(95.0)
    entity(ip, scan.sip)
    yield security_alerts (
        sip = scan.sip,
        dip = scan.dip,
        alert_type = "rat_propagation",
        detail = "scan -> login -> xfer on multiple hosts"
    )
}

rule rat_propagation_auth {
    events {
        login : auth_events && result == "success"
    }
    match<sip,dip:5s> {
        on event {
            login | count >= 10;
        }
    } -> score(95.0)
    entity(ip, login.sip)
    yield security_alerts (
        sip = login.sip,
        dip = login.dip,
        alert_type = "rat_propagation",
        detail = "brute-force login: 10+ successes from single source"
    )
}

// ---------------------------------------------------------------------------
// 测试用例
// ---------------------------------------------------------------------------

// 完整攻击链：扫描 → 登录 → 数据传输，3 个目标 — 应该告警
test full_chain_detected for rat_propagation {
  input {
    // 目标 B — 扫描
    row(scan, sip = "10.0.0.99", dip = "192.168.1.10", dport = "22", bytes_out = "100", event_time = "2026-01-01T00:00:00Z");
    // 目标 B — 登录成功
    row(login, sip = "10.0.0.99", dip = "192.168.1.10", dport = "22", service = "ssh", user = "root", result = "success", event_time = "2026-01-01T00:01:00Z");
    // 目标 B — 数据传输
    row(xfer, sip = "10.0.0.99", dip = "192.168.1.10", dport = "22", bytes_out = "50000", event_time = "2026-01-01T00:02:00Z");

    // 目标 C — 扫描
    row(scan, sip = "10.0.0.99", dip = "192.168.1.20", dport = "445", bytes_out = "200", event_time = "2026-01-01T00:03:00Z");
    // 目标 C — 登录成功
    row(login, sip = "10.0.0.99", dip = "192.168.1.20", dport = "445", service = "smb", result = "success", event_time = "2026-01-01T00:04:00Z");
    // 目标 C — 数据传输
    row(xfer, sip = "10.0.0.99", dip = "192.168.1.20", dport = "445", bytes_out = "200000", event_time = "2026-01-01T00:05:00Z");

    // 目标 D — 扫描
    row(scan, sip = "10.0.0.99", dip = "192.168.1.30", dport = "3389", bytes_out = "150", event_time = "2026-01-01T00:06:00Z");
    // 目标 D — 登录成功
    row(login, sip = "10.0.0.99", dip = "192.168.1.30", dport = "3389", service = "rdp", result = "success", event_time = "2026-01-01T00:07:00Z");
    // 目标 D — 数据传输
    row(xfer, sip = "10.0.0.99", dip = "192.168.1.30", dport = "3389", bytes_out = "150000", event_time = "2026-01-01T00:08:00Z");
  }
  expect { hits == 3; }
}
"#;

    #[test]
    fn formats_sample_wfl() {
        let formatted = format(RAT_PROPAGATION_WFL).unwrap();
        assert!(formatted.contains("rule rat_propagation {\n    events {\n"));
        assert!(formatted.contains("    yield security_alerts (\n        sip = scan.sip,\n"));
        assert!(formatted.contains("test full_chain_detected for rat_propagation {\n    input {\n"));
        assert!(formatted.contains("    expect { hits == 3; }\n"));
    }

    #[test]
    fn formats_indentation() {
        let input = "rule x {\nevents {\na : stream\n}\n}\n";
        let expected = "rule x {\n    events {\n        a : stream\n    }\n}\n";
        assert_eq!(format(input).unwrap(), expected);
    }

    #[test]
    fn supports_custom_indent_and_fallback() {
        let input = "rule x {\nevents {\na : stream\n}\n}\n";
        let formatted = format_with_indent(input, 2).unwrap();
        assert!(formatted.contains("\n  events {\n"));
        assert_eq!(format_or_original("rule x {"), "rule x {");
    }

    #[test]
    fn reports_unclosed_brace() {
        let err = format("rule x {").unwrap_err();
        assert!(matches!(err, WflFormatError::UnclosedBrace { .. }));
    }
}
