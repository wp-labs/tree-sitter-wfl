/// <reference types="tree-sitter-cli/dsl" />

const PREC = {
  OR: 1,
  AND: 2,
  COMPARE: 3,
  ADD: 4,
  MUL: 5,
  UNARY: 6,
  PIPE: 7,
  MEMBER: 8,
};

module.exports = grammar({
  name: "wfl",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$.primary, $.field_reference],
    // 角括号值形态内 `$var` 可经 variable 或 field_reference 双解释。
    [$.preset_angle_value, $.field_reference],
  ],

  rules: {
    source_file: ($) =>
      seq(
        repeat($.use_declaration),
        repeat(
          choice(
            $.window_declaration,
            $.pattern_declaration,
            $.preset_declaration,
            $.list_declaration,
            $.rule_declaration,
            $.test_block,
            $.scenario_declaration,
          ),
        ),
      ),

    comment: (_$) => token(seq("//", /.*/)),

    use_declaration: ($) => seq("use", $.string),

    window_declaration: ($) =>
      seq(
        "window",
        field("name", $.identifier),
        "{",
        repeat($.window_attribute),
        $.fields_block,
        "}",
      ),

    window_attribute: ($) =>
      choice($.stream_attribute, $.time_attribute, $.over_attribute),

    stream_attribute: ($) =>
      seq("stream_tag", "=", choice($.string, $.string_array)),

    string_array: ($) =>
      seq("[", $.string, repeat(seq(",", $.string)), "]"),

    time_attribute: ($) => seq("time", "=", $.identifier),

    over_attribute: ($) =>
      seq("over", "=", choice($.duration, "0")),

    fields_block: ($) =>
      seq("fields", "{", repeat($.field_declaration), "}"),

    field_declaration: ($) =>
      seq(
        field("name", $.field_name),
        ":",
        field("type", $.field_type),
      ),

    field_name: ($) =>
      choice($.dotted_identifier, $.quoted_identifier, $.identifier),

    dotted_identifier: ($) =>
      seq($.identifier, ".", $.identifier, repeat(seq(".", $.identifier))),

    quoted_identifier: (_$) =>
      token(seq("`", /[^`]+/, "`")),

    field_type: ($) =>
      choice($.array_type, $.object_type, $.base_type),

    array_type: ($) => seq("array", optional(seq("/", $.base_type))),

    object_type: (_$) => "object",

    base_type: (_$) =>
      choice("chars", "digit", "float", "bool", "time", "ip", "hex"),

    pattern_declaration: ($) =>
      seq(
        "pattern",
        field("name", $.identifier),
        "(",
        field("param", $.identifier),
        repeat(seq(",", field("param", $.identifier))),
        ")",
        "{",
        $.match_clause,
        "->",
        $.score_call,
        "}",
      ),

    // `yield preset <name> [<p1, p2 = default, ...>] (name = expr, ...)` —
    // 顶层输出模板声明（通常集中 _global.wfl）。
    preset_declaration: ($) =>
      seq(
        "yield",
        "preset",
        field("name", $.identifier),
        optional($.preset_param_list),
        seq(
          "(",
          $.named_argument,
          repeat(seq(",", $.named_argument)),
          optional(","),
          ")",
        ),
      ),

    // `<severity, source = "wfusion">` — 参数声明（可带默认值）。默认值与
    // 引用实参按 winnow angle-body 语义收窄为「括号安全表达式」——角括号段内
    // 不解析裸比较 `>`（比较请包进 `( )`）。
    preset_param_list: ($) =>
      seq(
        "<",
        $.preset_param,
        repeat(seq(",", $.preset_param)),
        ">",
      ),

    preset_param: ($) =>
      seq(
        field("name", $.identifier),
        optional(seq("=", field("default", $.preset_angle_value))),
      ),

    // 角括号段内允许的值形态（原子/括号包裹，无顶层裸比较）。
    preset_angle_value: ($) =>
      choice(
        $.string,
        $.number,
        $.boolean,
        $.identifier,
        $.variable,
        $.derive_reference,
        $.field_reference,
        $.function_call,
        $.parenthesized_expression,
      ),

    // `name = (item, ...)` — 顶层命名字面列表（issue #73），须在规则之前。
    list_declaration: ($) =>
      seq(
        field("name", $.identifier),
        "=",
        "(",
        $.expression,
        repeat(seq(",", $.expression)),
        optional(","),
        ")",
      ),

    rule_declaration: ($) =>
      seq(
        "rule",
        field("name", $.identifier),
        "{",
        optional($.meta_block),
        $.events_block,
        $.rule_flow,
        $.entity_clause,
        $.yield_clause,
        optional($.conv_clause),
        optional($.limits_clause),
        "}",
      ),

    rule_flow: ($) =>
      choice(
        seq($.pattern_invocation, repeat($.join_clause)),
        $.stage_chain,
        $.stats_clause,
      ),

    meta_block: ($) => seq("meta", "{", repeat($.meta_entry), "}"),

    meta_entry: ($) =>
      seq(field("key", $.identifier), "=", field("value", $.string)),

    events_block: ($) =>
      seq("events", "{", repeat1($.event_declaration), "}"),

    event_declaration: ($) =>
      seq(
        field("alias", $.identifier),
        ":",
        field("window", $.identifier),
        optional(seq("&&", $.expression)),
      ),

    stage_chain: ($) =>
      choice(
        $.final_stage,
        seq(
          $.non_scoring_stage,
          repeat(seq("|>", $.non_scoring_stage)),
          "|>",
          $.final_stage,
        ),
      ),

    non_scoring_stage: ($) =>
      seq(choice($.match_clause, $.each_clause), repeat($.join_clause)),

    final_stage: ($) =>
      seq(
        choice($.match_clause, $.each_clause),
        "->",
        $.score_call,
        repeat($.join_clause),
      ),

    each_clause: ($) =>
      seq(
        "on",
        "each",
        field("alias", $.identifier),
        optional(seq("where", field("filter", $.expression))),
      ),

    match_clause: ($) =>
      seq(
        "match",
        "<",
        $.match_params,
        ">",
        "{",
        optional($.key_block),
        choice(
          seq($.on_event_block, optional($.close_block)),
          $.on_event_mode_block,
        ),
        "}",
      ),

    // `on event seq [consec] [skip = ...] { ... }` — ordered + within/not/consec/skip
    // `on event any { ... }` — unordered co-occurrence
    on_event_mode_block: ($) =>
      seq(
        "on",
        "event",
        field("mode", choice("seq", "any")),
        optional("consec"),
        optional(seq("skip", "=", choice("past_last", "to_next"))),
        "{",
        repeat1($.seq_rule_step),
        "}",
      ),

    // One seq-mode step: `[not] (has <alias> [&& expr] | step_branch) [within dur] ;`
    seq_rule_step: ($) =>
      seq(
        optional("not"),
        choice(
          seq(
            "has",
            field("alias", $.identifier),
            optional(seq("&&", $.expression)),
          ),
          $.step_branch,
        ),
        optional(seq("within", $.duration)),
        ";",
      ),

    match_params: ($) =>
      seq(
        optional(
          seq($.field_reference, repeat(seq(",", $.field_reference))),
        ),
        ":",
        $.window_spec,
      ),

    window_spec: ($) =>
      choice(
        seq(choice($.duration, $.variable), ":", "fixed"),
        seq("session", "(", choice($.duration, $.variable), ")"),
        $.duration,
        $.variable,
      ),

    key_block: ($) =>
      seq("key", "{", repeat1($.key_item), "}"),

    key_item: ($) =>
      seq(
        field("logical", $.identifier),
        "=",
        field("source", $.field_reference),
        ";",
      ),

    on_event_block: ($) =>
      seq("on", "event", "{", repeat1($.match_step), "}"),

    close_block: ($) => choice($.on_close_block, $.and_close_block),

    on_close_block: ($) =>
      seq("on", "close", "{", repeat1($.match_step), "}"),

    and_close_block: ($) =>
      seq("and", "close", "{", repeat1($.match_step), "}"),

    // `stats<dur[:fixed|session]> [group by (k1, ...)] [tier f [<b1, <b2]]
    // { m1; m2; ... }` — 声明式窗口统计规则体（无 score/join/conv）。
    stats_clause: ($) =>
      seq(
        "stats",
        "<",
        choice($.duration, $.variable),
        optional(seq(":", choice("fixed", "session"))),
        ">",
        optional($.stats_group_by),
        optional($.stats_tier),
        "{",
        repeat(seq($.stats_measure, ";")),
        optional($.stats_measure),
        "}",
      ),

    stats_group_by: ($) =>
      seq(
        "group",
        "by",
        "(",
        optional(seq($.expression, repeat(seq(",", $.expression)))),
        ")",
      ),

    // `tier f [<b1, <b2, ... ]` — 数值区间分档（可空边界列表）。
    stats_tier: ($) =>
      seq(
        "tier",
        $.field_reference,
        "[",
        optional(
          seq($.tier_bound, repeat(seq(",", $.tier_bound))),
        ),
        "]",
      ),

    tier_bound: ($) => seq(choice("<", "<="), $.number),

    // `b | count as n;` / `b | avg(b.price) as p [where expr]`
    stats_measure: ($) =>
      seq(
        field("alias", $.identifier),
        "|",
        $.stats_agg,
        "as",
        field("label", $.identifier),
        optional(seq("where", $.expression)),
      ),

    stats_agg: ($) =>
      choice(
        "count",
        seq(
          choice("sum", "avg", "min", "max", "distinct_count", "last"),
          "(",
          $.field_reference,
          ")",
        ),
        seq("top", "(", $.number, ",", $.field_reference, ")"),
      ),

    match_step: ($) =>
      seq($.step_branch, repeat(seq("||", $.step_branch)), ";"),

    step_branch: ($) =>
      seq(
        optional(seq(field("label", $.identifier), ":")),
        $.source_expression,
        optional(seq("&&", $.expression)),
        $.pipe_chain,
      ),

    source_expression: ($) =>
      seq(
        field("source", choice($.identifier, $.variable)),
        optional(
          choice(
            seq(".", field("field", $.identifier)),
            seq("[", $.string, "]"),
          ),
        ),
      ),

    pipe_chain: ($) =>
      seq(
        repeat(seq("|", $.transform)),
        "|",
        $.measure,
        $.comparison_operator,
        $.primary,
      ),

    transform: (_$) => "distinct",

    measure: (_$) => choice("count", "sum", "avg", "min", "max"),

    score_call: ($) => seq("score", "(", $.expression, ")"),

    pattern_invocation: ($) =>
      seq(
        field("pattern", $.identifier),
        "(",
        $.pattern_argument,
        repeat(seq(",", $.pattern_argument)),
        ")",
      ),

    pattern_argument: ($) =>
      choice(
        $.field_reference,
        $.duration,
        $.number,
        $.string,
      ),

    join_clause: ($) =>
      seq(
        "join",
        field("window", $.identifier),
        $.join_mode,
        "on",
        $.join_condition,
        repeat(seq("&&", $.join_condition)),
      ),

    join_mode: ($) =>
      choice(
        "snapshot",
        seq("asof", optional(seq("within", $.duration))),
        "anti",
      ),

    join_condition: ($) =>
      seq($.field_reference, "==", $.field_reference),

    entity_clause: ($) =>
      seq(
        "entity",
        "(",
        field("type", choice($.identifier, $.string)),
        ",",
        field("id", $.expression),
        ")",
      ),

    yield_clause: ($) =>
      seq(
        "yield",
        $.yield_target,
        optional(
          seq(":", $.yield_preset_ref, repeat(seq(",", $.yield_preset_ref))),
        ),
        "(",
        $.named_argument,
        repeat(seq(",", $.named_argument)),
        optional(","),
        ")",
      ),

    // `base_alerts<"high">` — 调用 preset 引用（可带位置实参列表）。
    yield_preset_ref: ($) =>
      seq(
        field("preset", $.identifier),
        optional(
          seq(
            "<",
            optional(seq($.preset_angle_value, repeat(seq(",", $.preset_angle_value)))),
            ">",
          ),
        ),
      ),

    yield_target: ($) =>
      seq(
        field("target", $.identifier),
        optional(seq("@", field("version", $.version_tag))),
      ),

    version_tag: (_$) => token(seq("v", /\d+/)),

    named_argument: ($) =>
      seq(
        field("name", $.yield_field),
        "=",
        field("value", $.expression),
      ),

    yield_field: ($) =>
      choice(
        seq($.identifier, ".", $.identifier, repeat(seq(".", $.identifier))),
        $.quoted_ident,
        $.identifier,
      ),

    quoted_ident: (_$) => token(seq("`", /[^`]+/, "`")),

    conv_clause: ($) =>
      seq("conv", "{", repeat1($.conv_chain), "}"),

    conv_chain: ($) =>
      seq($.conv_step, repeat(seq("|", $.conv_step)), ";"),

    conv_step: ($) =>
      seq(
        field("op", choice("sort", "top", "dedup", "where")),
        "(",
        optional(seq($.expression, repeat(seq(",", $.expression)))),
        ")",
      ),

    limits_clause: ($) =>
      seq("limits", "{", repeat1($.limit_item), "}"),

    limit_item: ($) =>
      seq(
        field("key", choice("max_memory", "max_instances", "max_throttle", "on_exceed")),
        "=",
        field("value", choice($.string, $.number, $.identifier)),
        ";",
      ),

    test_block: ($) =>
      seq(
        "test",
        field("name", $.identifier),
        "for",
        field("rule", $.identifier),
        "{",
        $.input_block,
        $.expect_block,
        optional($.options_block),
        "}",
      ),

    scenario_declaration: ($) =>
      seq(
        repeat($.scenario_attribute),
        "scenario",
        field("name", $.identifier),
        optional($.scenario_inline_annotations),
        "{",
        repeat($.scenario_body_item),
        "}",
      ),

    scenario_body_item: ($) =>
      choice($.traffic_block, $.injection_block, $.scenario_expect_block),

    scenario_attribute: ($) => seq("#[", $.attribute_list, "]"),

    scenario_inline_annotations: ($) => seq("<", $.attribute_list, ">"),

    attribute_list: ($) =>
      seq($.attribute, repeat(seq(",", $.attribute))),

    attribute: ($) =>
      seq(field("key", $.identifier), "=", field("value", $.attribute_value)),

    attribute_value: ($) =>
      choice($.string, $.number, $.duration, $.boolean, $.identifier),

    traffic_block: ($) =>
      seq("traffic", "{", repeat1($.traffic_stream), "}"),

    traffic_stream: ($) =>
      seq(
        "stream",
        field("stream", $.identifier),
        "gen",
        field("rate", $.rate_expression),
        optional(";"),
      ),

    rate_expression: ($) =>
      choice($.rate, $.wave_rate, $.burst_rate, $.timeline_rate),

    wave_rate: ($) =>
      seq(
        "wave",
        "(",
        "base",
        "=",
        field("base", $.rate),
        ",",
        "amp",
        "=",
        field("amp", $.rate),
        ",",
        "period",
        "=",
        field("period", $.duration),
        optional(seq(",", "shape", "=", field("shape", $.identifier))),
        ")",
      ),

    burst_rate: ($) =>
      seq(
        "burst",
        "(",
        "base",
        "=",
        field("base", $.rate),
        ",",
        "peak",
        "=",
        field("peak", $.rate),
        ",",
        "every",
        "=",
        field("every", $.duration),
        ",",
        "hold",
        "=",
        field("hold", $.duration),
        ")",
      ),

    timeline_rate: ($) =>
      seq("timeline", "{", repeat1($.timeline_segment), "}"),

    timeline_segment: ($) =>
      seq(
        field("start", $.duration),
        "..",
        field("end", $.duration),
        "=",
        field("rate", $.rate),
        optional(";"),
      ),

    injection_block: ($) =>
      seq("injection", "{", repeat($.injection_case), "}"),

    injection_case: ($) =>
      seq(
        field("mode", $.injection_mode),
        "<",
        field("percent", $.percentage),
        ">",
        optional(seq("for", field("rule", $.identifier))),
        field("stream", $.identifier),
        "{",
        $.seq_block,
        "}",
      ),

    injection_mode: (_$) => choice("hit", "near_miss", "miss"),

    seq_block: ($) =>
      seq(
        field("entity", $.identifier),
        "seq",
        "{",
        repeat1($.seq_step),
        "}",
      ),

    seq_step: ($) => choice($.seq_use_step, $.seq_not_step),

    seq_use_step: ($) =>
      seq(
        optional("then"),
        "use",
        "(",
        optional($.field_predicate_list),
        ")",
        "with",
        "(",
        field("count", $.number),
        optional(seq(",", field("within", $.duration))),
        ")",
      ),

    seq_not_step: ($) =>
      seq(
        "not",
        "(",
        optional($.field_predicate_list),
        ")",
        "within",
        "(",
        field("within", $.duration),
        ")",
      ),

    field_predicate_list: ($) =>
      seq($.field_predicate, repeat(seq(",", $.field_predicate))),

    field_predicate: ($) =>
      seq(field("field", $.identifier), "=", field("value", $.attribute_value)),

    scenario_expect_block: ($) =>
      seq("expect", "{", repeat($.scenario_expect_statement), "}"),

    scenario_expect_statement: ($) =>
      seq(
        field("metric", $.expect_metric),
        "(",
        field("rule", $.identifier),
        ")",
        $.comparison_operator,
        field("value", choice($.percentage, $.duration, $.number)),
        optional(";"),
      ),

    expect_metric: (_$) =>
      choice("hit", "near_miss", "miss", "precision", "recall", "fpr", "latency_p95"),

    input_block: ($) =>
      seq("input", "{", repeat($.input_statement), "}"),

    input_statement: ($) =>
      choice(
        seq(
          "row",
          "(",
          field("alias", $.identifier),
          ",",
          $.field_assignment,
          repeat(seq(",", $.field_assignment)),
          ")",
          ";",
        ),
        seq("tick", "(", $.duration, ")", ";"),
      ),

    field_assignment: ($) =>
      seq(
        field("field", choice($.identifier, $.string)),
        "=",
        field("value", $.expression),
      ),

    expect_block: ($) =>
      seq("expect", "{", repeat($.expect_statement), "}"),

    expect_statement: ($) =>
      choice(
        seq("hits", $.comparison_operator, $.number, ";"),
        seq("hit", "[", $.number, "]", ".", $.hit_assertion, ";"),
      ),

    hit_assertion: ($) =>
      choice(
        seq("score", $.comparison_operator, $.number),
        seq("close_reason", "==", $.string),
        seq("origin", "==", $.string),
        seq("entity_type", "==", $.string),
        seq("entity_id", "==", $.string),
        seq(
          "field",
          "(",
          $.string,
          ")",
          $.comparison_operator,
          $.expression,
        ),
      ),

    options_block: ($) =>
      seq("options", "{", repeat($.option_entry), "}"),

    option_entry: ($) =>
      seq(
        field("key", $.identifier),
        "=",
        field("value", choice($.identifier, $.string, $.number)),
        ";",
      ),

    expression: ($) =>
      choice(
        $.binary_expression,
        $.unary_expression,
        $.if_expression,
        $.in_expression,
        $.not_in_expression,
        $.primary,
      ),

    binary_expression: ($) =>
      choice(
        prec.left(
          PREC.OR,
          seq(
            field("left", $.expression),
            field("operator", "||"),
            field("right", $.expression),
          ),
        ),
        prec.left(
          PREC.AND,
          seq(
            field("left", $.expression),
            field("operator", "&&"),
            field("right", $.expression),
          ),
        ),
        prec.left(
          PREC.COMPARE,
          seq(
            field("left", $.expression),
            field("operator", $.comparison_operator),
            field("right", $.expression),
          ),
        ),
        prec.left(
          PREC.ADD,
          seq(
            field("left", $.expression),
            field("operator", choice("+", "-")),
            field("right", $.expression),
          ),
        ),
        prec.left(
          PREC.MUL,
          seq(
            field("left", $.expression),
            field("operator", choice("*", "/", "%")),
            field("right", $.expression),
          ),
        ),
      ),

    unary_expression: ($) =>
      prec(PREC.UNARY, seq("-", $.expression)),

    if_expression: ($) =>
      prec.right(
        seq("if", $.expression, "then", $.expression, "else", $.expression),
      ),

    in_expression: ($) =>
      prec(
        PREC.COMPARE,
        seq(
          $.expression,
          "in",
          "(",
          $.expression,
          repeat(seq(",", $.expression)),
          ")",
        ),
      ),

    not_in_expression: ($) =>
      prec(
        PREC.COMPARE,
        seq(
          $.expression,
          "not",
          "in",
          "(",
          $.expression,
          repeat(seq(",", $.expression)),
          ")",
        ),
      ),

    primary: ($) =>
      choice(
        $.number,
        $.string,
        $.boolean,
        $.duration,
        $.variable,
        $.derive_reference,
        $.close_reason_ref,
        $.object_expression,
        $.array_expression,
        $.function_call,
        $.aggregate_pipe_expression,
        $.field_reference,
        $.parenthesized_expression,
      ),

    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    object_expression: ($) =>
      seq("object", "{", repeat($.object_item), "}"),

    object_item: ($) =>
      seq(
        field("target", $.object_targets),
        optional(seq(":", field("type", $.field_type))),
        "=",
        field("value", $.expression),
        optional(";"),
      ),

    object_targets: ($) =>
      seq($.identifier, repeat(seq(",", $.identifier))),

    array_expression: ($) =>
      seq(
        "array",
        "[",
        optional(seq($.expression, repeat(seq(",", $.expression)), optional(","))),
        "]",
      ),

    field_reference: ($) =>
      choice(
        prec(
          PREC.MEMBER,
          seq(field("object", choice($.identifier, $.variable)), ".", field("field", $.identifier)),
        ),
        prec(
          PREC.MEMBER,
          seq(field("object", choice($.identifier, $.variable)), "[", $.string, "]"),
        ),
        $.identifier,
        $.variable,
      ),

    function_call: ($) =>
      choice(
        prec(
          PREC.MEMBER,
          seq(
            field("object", $.identifier),
            ".",
            field("method", $.identifier),
            "(",
            optional(seq($.expression, repeat(seq(",", $.expression)))),
            ")",
          ),
        ),
        seq(
          field("function", $.identifier),
          "(",
          optional(seq($.expression, repeat(seq(",", $.expression)))),
          ")",
        ),
      ),

    aggregate_pipe_expression: ($) =>
      prec.left(
        PREC.PIPE,
        seq(
          field("source", $.identifier),
          optional(
            choice(
              seq(".", field("field", $.identifier)),
              seq("[", $.string, "]"),
            ),
          ),
          repeat(seq("|", $.transform)),
          "|",
          $.measure,
        ),
      ),

    derive_reference: (_$) => token(seq("@", /[a-zA-Z_][a-zA-Z0-9_]*/)),

    close_reason_ref: (_$) => "close_reason",

    variable: (_$) =>
      token(
        choice(
          seq("$", "{", /[a-zA-Z_][a-zA-Z0-9_]*/, optional(seq(":", /[^}]*/)), "}"),
          seq("$", /[a-zA-Z_][a-zA-Z0-9_]*/),
        ),
      ),

    comparison_operator: (_$) =>
      choice("==", "!=", "<", ">", "<=", ">="),

    percentage: (_$) => token(/\d+(\.\d+)?%/),

    rate: (_$) => token(/\d+(\.\d+)?\/[smh]/),

    number: (_$) => token(/\d+(\.\d+)?/),

    string: (_$) =>
      token(seq('"', repeat(choice(/[^"\\]/, /\\./)), '"')),

    boolean: (_$) => choice("true", "false"),

    duration: (_$) => token(/\d+(ms|[smhd])/),

    identifier: (_$) => token(/[a-zA-Z_][a-zA-Z0-9_]*/),
  },
});
