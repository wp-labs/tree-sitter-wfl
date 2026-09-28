#[derive(Debug)]
pub(crate) enum DelimiterError {
    UnclosedString {
        line: usize,
    },
    UnclosedQuotedIdentifier {
        line: usize,
    },
    UnclosedDelimiter {
        delimiter: char,
        line: usize,
    },
    UnexpectedClosing {
        delimiter: char,
        line: usize,
    },
    MismatchedDelimiter {
        opening: char,
        closing: char,
        line: usize,
    },
}

impl std::fmt::Display for DelimiterError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::UnclosedString { line } => {
                write!(f, "line {line}: string literal is not closed")
            }
            Self::UnclosedQuotedIdentifier { line } => {
                write!(f, "line {line}: quoted identifier is not closed")
            }
            Self::UnclosedDelimiter { delimiter, line } => {
                write!(f, "line {line}: `{delimiter}` is not closed")
            }
            Self::UnexpectedClosing { delimiter, line } => {
                write!(f, "line {line}: unexpected closing `{delimiter}`")
            }
            Self::MismatchedDelimiter {
                opening,
                closing,
                line,
            } => write!(f, "line {line}: `{closing}` does not close `{opening}`"),
        }
    }
}

pub(crate) fn validate_delimiters(content: &str) -> Result<(), DelimiterError> {
    let normalized = content.replace("\r\n", "\n").replace('\r', "\n");
    let chars: Vec<char> = normalized.chars().collect();
    let mut stack: Vec<(char, usize)> = Vec::new();
    let mut in_string = false;
    let mut string_start = 1usize;
    let mut in_quoted_identifier = false;
    let mut quoted_identifier_start = 1usize;
    let mut escaped = false;
    let mut in_comment = false;
    let mut line = 1usize;
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

        if in_quoted_identifier {
            if ch == '`' {
                in_quoted_identifier = false;
            } else if ch == '\n' {
                line += 1;
            }
            i += 1;
            continue;
        }

        if ch == '/' && chars.get(i + 1) == Some(&'/') {
            in_comment = true;
            i += 2;
            continue;
        }

        match ch {
            '"' => {
                in_string = true;
                string_start = line;
            }
            '`' => {
                in_quoted_identifier = true;
                quoted_identifier_start = line;
            }
            '{' | '(' | '[' => stack.push((ch, line)),
            '}' | ')' | ']' => {
                let Some((opening, _)) = stack.pop() else {
                    return Err(DelimiterError::UnexpectedClosing {
                        delimiter: ch,
                        line,
                    });
                };
                if !is_matching_pair(opening, ch) {
                    return Err(DelimiterError::MismatchedDelimiter {
                        opening,
                        closing: ch,
                        line,
                    });
                }
            }
            '\n' => line += 1,
            _ => {}
        }
        i += 1;
    }

    if in_string {
        return Err(DelimiterError::UnclosedString { line: string_start });
    }
    if in_quoted_identifier {
        return Err(DelimiterError::UnclosedQuotedIdentifier {
            line: quoted_identifier_start,
        });
    }

    if let Some((delimiter, open_line)) = stack.pop() {
        return Err(DelimiterError::UnclosedDelimiter {
            delimiter,
            line: open_line,
        });
    }

    Ok(())
}

fn is_matching_pair(opening: char, closing: char) -> bool {
    matches!((opening, closing), ('{', '}') | ('(', ')') | ('[', ']'))
}

pub(crate) fn format_lines(
    content: &str,
    indent: usize,
    collapse_group_delimiters: bool,
    collapse_use_value_wrapper: bool,
) -> String {
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

        let leading_closers = leading_closing_tokens(
            trimmed,
            collapse_group_delimiters,
            collapse_use_value_wrapper,
        );
        indent_level = indent_level.saturating_sub(leading_closers);

        out.push_str(&" ".repeat(indent_level * indent));
        out.push_str(trimmed);
        out.push('\n');
        last_blank = false;

        let (open_count, close_count) = structural_delta(
            trimmed,
            collapse_group_delimiters,
            collapse_use_value_wrapper,
        );
        indent_level += open_count;
        indent_level = indent_level.saturating_sub(close_count.saturating_sub(leading_closers));
    }

    if !out.ends_with('\n') {
        out.push('\n');
    }
    out
}

fn leading_closing_tokens(
    line: &str,
    collapse_group_delimiters: bool,
    collapse_use_value_wrapper: bool,
) -> usize {
    let mut count = 0usize;
    let mut has_group_closer = false;
    let mut chars = line.chars().peekable();

    if collapse_use_value_wrapper && (line.starts_with("})") || line.starts_with("])")) {
        count += 1;
        chars.next();
        chars.next();
    }

    while let Some(ch) = chars.next() {
        match ch {
            '}' => count += 1,
            ')' | ']' if collapse_group_delimiters => has_group_closer = true,
            ')' | ']' => count += 1,
            _ => break,
        }
    }

    count + usize::from(has_group_closer)
}

fn structural_delta(
    line: &str,
    collapse_group_delimiters: bool,
    collapse_use_value_wrapper: bool,
) -> (usize, usize) {
    let chars: Vec<char> = line.chars().collect();
    let mut open_count = 0usize;
    let mut close_count = 0usize;
    let mut has_group_open = false;
    let mut has_group_close = false;
    let mut in_string = false;
    let mut in_quoted_identifier = false;
    let mut escaped = false;
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

        if in_quoted_identifier {
            if ch == '`' {
                in_quoted_identifier = false;
            }
            i += 1;
            continue;
        }

        if ch == '/' && chars.get(i + 1) == Some(&'/') {
            break;
        }

        if ch == '"' {
            in_string = true;
            i += 1;
            continue;
        }
        if ch == '`' {
            in_quoted_identifier = true;
            i += 1;
            continue;
        }

        let use_value_open = collapse_use_value_wrapper
            && ch == '('
            && matches!(chars.get(i + 1), Some('{' | '['))
            && chars[..i].ends_with(&['u', 's', 'e']);
        let use_value_close = collapse_use_value_wrapper
            && ch == ')'
            && i > 0
            && matches!(chars[i - 1], '}' | ']')
            && (line.trim_start().starts_with("})") || line.trim_start().starts_with("])"));

        match ch {
            '{' => open_count += 1,
            '}' => close_count += 1,
            '(' | '[' if collapse_group_delimiters => has_group_open = true,
            ')' | ']' if collapse_group_delimiters => has_group_close = true,
            '(' if use_value_open => {}
            ')' if use_value_close => {}
            '(' | '[' => open_count += 1,
            ')' | ']' => close_count += 1,
            _ => {}
        }
        i += 1;
    }

    (
        open_count + usize::from(has_group_open),
        close_count + usize::from(has_group_close),
    )
}
