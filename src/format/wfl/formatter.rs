pub fn format(content: &str) -> Result<String, WflFormatError> {
    WflFormatter::new().format(content)
}

pub fn format_with_indent(content: &str, indent: usize) -> Result<String, WflFormatError> {
    WflFormatter::with_indent(indent).format(content)
}

/// Format only syntactically valid WFL, using the tree-sitter tree as the
/// validation boundary before whitespace is rewritten.
pub fn format_syntax_tree(content: &str) -> Result<String, WflFormatError> {
    WflFormatter::new().format_syntax_tree(content)
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
        let expanded = expand_long_named_arguments(content, 100).unwrap_or_else(|| content.to_string());
        self.format_validated(&expanded)
    }

    pub fn format_syntax_tree(&self, content: &str) -> Result<String, WflFormatError> {
        validate_structure(content)?;
        validate_syntax_tree(content)?;
        let expanded = expand_long_named_arguments(content, 100).unwrap_or_else(|| content.to_string());
        self.format_validated(&expanded)
    }

    fn format_validated(&self, content: &str) -> Result<String, WflFormatError> {

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

fn expand_long_named_arguments(content: &str, max_width: usize) -> Option<String> {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&crate::language_wfl()).ok()?;
    let tree = parser.parse(content, None)?;
    if tree.root_node().has_error() {
        return None;
    }

    let mut replacements = Vec::new();
    collect_long_named_arguments(
        tree.root_node(),
        content,
        max_width,
        &mut replacements,
    );
    if replacements.is_empty() {
        return Some(content.to_string());
    }

    let mut result = content.to_string();
    for (start, end, replacement) in replacements.into_iter().rev() {
        result.replace_range(start..end, &replacement);
    }
    Some(result)
}

fn collect_long_named_arguments(
    node: tree_sitter::Node<'_>,
    source: &str,
    max_width: usize,
    replacements: &mut Vec<(usize, usize, String)>,
) {
    if node.kind() == "named_argument" {
        let text = &source[node.byte_range()];
        let exceeds_width = text.lines().enumerate().any(|(line_index, line)| {
            let prefix = if line_index == 0 {
                node.start_position().column
            } else {
                0
            };
            prefix + line.len() > max_width
        });
        if text.contains('\n') || exceeds_width {
            if let (Some(name), Some(value)) = (
                node.child_by_field_name("name"),
                node.child_by_field_name("value"),
            ) {
                let name = source[name.byte_range()].trim();
                let prefix = format!("{name} = ");
                let rendered = render_expression(value, source, prefix.len(), max_width);
                replacements.push((
                    node.start_byte(),
                    node.end_byte(),
                    format!("{prefix}{rendered}"),
                ));
            }
        }
        return;
    }

    let mut cursor = node.walk();
    for child in node.named_children(&mut cursor) {
        collect_long_named_arguments(child, source, max_width, replacements);
    }
}

fn render_expression(
    node: tree_sitter::Node<'_>,
    source: &str,
    prefix_width: usize,
    max_width: usize,
) -> String {
    let node = unwrap_expression(node);
    let flat = source[node.byte_range()].trim();
    if !flat.contains('\n') && prefix_width + flat.len() <= max_width {
        return flat.to_string();
    }
    if node.kind() != "function_call" {
        return flat.to_string();
    }

    let open = flat.find('(').unwrap_or(flat.len());
    let head = &flat[..open];
    let arguments = function_arguments(node);

    // Keep a thin wrapper attached to a nested call. This produces compact
    // forms such as `sha1_n(join_by(` without flattening join_by's arguments.
    if arguments.len() == 2 && unwrap_expression(arguments[0]).kind() == "function_call" {
        let nested =
            render_expression(arguments[0], source, prefix_width + head.len() + 1, max_width);
        if nested.contains('\n') {
            let mut lines = nested.lines();
            let first = lines.next().unwrap_or_default();
            let mut output = format!("{head}({first}");
            let rest: Vec<&str> = lines.collect();
            for (index, line) in rest.iter().enumerate() {
                output.push('\n');
                output.push_str(line);
                if index + 1 == rest.len() {
                    output.push_str(", ");
                    output.push_str(source[arguments[1].byte_range()].trim());
                }
            }
            output.push(')');
            return output;
        }
    }

    let mut output = format!("{head}(");
    for (index, argument) in arguments.iter().enumerate() {
        output.push('\n');
        output.push_str(&render_expression(*argument, source, 0, max_width));
        if index + 1 != arguments.len() {
            output.push(',');
        }
    }
    output.push('\n');
    output.push(')');
    output
}

fn unwrap_expression(mut node: tree_sitter::Node<'_>) -> tree_sitter::Node<'_> {
    while matches!(node.kind(), "expression" | "primary") && node.named_child_count() == 1 {
        node = node.named_child(0).expect("single named child must exist");
    }
    node
}

fn function_arguments(node: tree_sitter::Node<'_>) -> Vec<tree_sitter::Node<'_>> {
    let function = node.child_by_field_name("function");
    let object = node.child_by_field_name("object");
    let method = node.child_by_field_name("method");
    let mut cursor = node.walk();
    node.named_children(&mut cursor)
        .filter(|child| {
            !function.is_some_and(|field| field.id() == child.id())
                && !object.is_some_and(|field| field.id() == child.id())
                && !method.is_some_and(|field| field.id() == child.id())
        })
        .collect()
}

fn validate_syntax_tree(content: &str) -> Result<(), WflFormatError> {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&crate::language_wfl())
        .expect("bundled WFL language must load");
    let tree = parser.parse(content, None).expect("parser must produce a tree");
    if let Some(point) = first_syntax_error(tree.root_node()) {
        return Err(WflFormatError::Syntax {
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
    let mut brace_open_count = 0usize;
    let mut brace_close_count = 0usize;
    let mut has_group_open = false;
    let mut has_group_close = false;
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
            '{' => brace_open_count += 1,
            '}' => brace_close_count += 1,
            '(' | '[' => has_group_open = true,
            ')' | ']' => has_group_close = true,
            _ => {}
        }
        i += 1;
    }

    (
        brace_open_count + usize::from(has_group_open),
        brace_close_count + usize::from(has_group_close),
    )
}

#[derive(Debug)]
pub enum WflFormatError {
    UnclosedString { line: usize },
    UnclosedBrace { line: usize },
    UnexpectedClosing { line: usize },
    Syntax { line: usize, column: usize },
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
            WflFormatError::Syntax { line, column } => {
                write!(f, "line {}, column {}: invalid WFL syntax", line, column)
            }
        }
    }
}

impl std::error::Error for WflFormatError {}

#[cfg(test)]
mod tests {
    use super::{
        expand_long_named_arguments, format, format_or_original, format_syntax_tree,
        format_with_indent, WflFormatError,
    };

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

    const WFUSION_ALERT_WFL: &str = r#"use "auth.wfs"

rule ssh_brute_force_alert {
    events {
        s : xy_system_ssh_log
            && event_category == "auth"
            && operation in ("failed_login", "authenticate")
            && isnotnull(source_ip)
            && is_blank(target_host) == false
    }

    match<tenant_id,source_ip,target_host,target_user:1m:fixed> {
        on event { s | count >= 3; }
    } -> score(
        if count(s) >= 1000 then 100.0
        else if lower(default_if_blank(s.target_user, "unknown")) in ("root", "admin", "administrator") then 73.0
        else 65.0
    )

    entity(ip, s.source_ip)

    yield security_alerts (
        alert_id = concat(
            "alert_",
            sha1(
                fmt(
                    "{}|{}|{}",
                    s.tenant_id,
                    s.source_ip,
                    strftime(now(), "%Y-%m-%d %H:%M:%S%.3f")
                )
            )
        ),
        source_systems = split("sdm-rule-engine", ","),
        target_user = default_if_blank(s.target_user, "unknown")
    )

    limits {
        max_memory = "64MB";
        max_instances = 10000;
        on_exceed = throttle;
    }
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
    fn formats_wfusion_alert_rule() {
        let formatted = format(WFUSION_ALERT_WFL).unwrap();
        assert!(formatted.contains("rule ssh_brute_force_alert {\n    events {\n"));
        assert!(formatted.contains("        s : xy_system_ssh_log\n"));
        assert!(formatted.contains("        if count(s) >= 1000 then 100.0\n"));
        assert!(formatted.contains("        alert_id = concat(\n"));
        assert!(formatted.contains("        on_exceed = throttle;\n"));
    }

    #[test]
    fn formats_global_yield_preset() {
        let input = r#"yield preset base_alerts (
alert_id = concat("alert_", @__wfu_id),
created_time = strftime(@emit_time),
)
"#;
        let formatted = format_syntax_tree(input).unwrap();
        assert!(formatted.contains("yield preset base_alerts (\n"));
        assert!(formatted.contains("    alert_id = concat(\"alert_\", @__wfu_id),\n"));
        assert!(formatted.contains("    created_time = strftime(@emit_time),\n"));
        assert_eq!(format_syntax_tree(&formatted).unwrap(), formatted);
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

    #[test]
    fn syntax_tree_formatter_rejects_incomplete_rules() {
        let err = format_syntax_tree("rule x {\n    events { a : stream }\n}\n").unwrap_err();
        assert!(matches!(err, WflFormatError::Syntax { .. }));
        assert!(format_syntax_tree(WFUSION_ALERT_WFL).is_ok());
    }

    #[test]
    fn expands_long_nested_function_assignments() {
        let input = r#"use "events.wfs"

rule compact {
    events { s : events }
    match<tenant_id:1m> { on event { s | count >= 1; } } -> score(80)
    entity(ip, s.source_ip)
    yield alerts : base_alerts (
        merge_id = concat("merge_", sha1_n(join_by("|", lower(coalesce(s.tenant_id, "")), "sdm-kunai-ioc-001", lower(coalesce(s.target_host, "")), lower(coalesce(s.target_domain, ""))), 16))
    )
}
"#;
        let formatted = format_syntax_tree(input).unwrap();
        assert!(
            expand_long_named_arguments(input, 100)
                .unwrap()
                .contains("merge_id = concat(\n"),
            "expression expansion did not run for:\n{}",
            {
                let mut parser = tree_sitter::Parser::new();
                parser.set_language(&crate::language_wfl()).unwrap();
                parser.parse(input, None).unwrap().root_node().to_sexp()
            }
        );
        assert!(formatted.contains(
            r#"        merge_id = concat(
            "merge_",
            sha1_n(join_by(
                "|",
                lower(coalesce(s.tenant_id, "")),
                "sdm-kunai-ioc-001",
                lower(coalesce(s.target_host, "")),
                lower(coalesce(s.target_domain, ""))
            ), 16)
        )"#
        ), "formatted output:\n{formatted}");
        assert_eq!(format_syntax_tree(&formatted).unwrap(), formatted);

        let awkward_multiline = input.replace(
            r#"merge_id = concat("merge_", sha1_n(join_by("|", lower(coalesce(s.tenant_id, "")), "sdm-kunai-ioc-001", lower(coalesce(s.target_host, "")), lower(coalesce(s.target_domain, ""))), 16))"#,
            r#"merge_id = concat(
            "merge_",sha1_n(join_by("|",
                lower(coalesce(s.tenant_id, "")),
                "sdm-kunai-ioc-001",
                lower(coalesce(s.target_host, "")),
                lower(coalesce(s.target_domain, ""))), 16)
        )"#,
        );
        assert_eq!(format_syntax_tree(&awkward_multiline).unwrap(), formatted);
    }

}
