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

  rules: {
    source_file: ($) =>
      seq(
        repeat($.use_declaration),
        repeat(choice($.rule_declaration, $.test_block)),
      ),

    // ── Comments ──
    comment: (_$) => token(seq("//", /.*/)),

    // ── Use declarations ──
    use_declaration: ($) => seq("use", $.string),

    // ── Rule declaration ──
    rule_declaration: ($) =>
      seq(
        "rule",
        field("name", $.identifier),
        "{",
        optional($.meta_block),
        $.events_block,
        $.stage_chain,
        optional($.limits_clause),
        "}",
      ),

    // ── Meta block ──
    meta_block: ($) => seq("meta", "{", repeat($.meta_entry), "}"),

    meta_entry: ($) =>
      seq(field("key", $.identifier), "=", field("value", $.string)),

    // ── Events block ──
    events_block: ($) =>
      seq("events", "{", repeat1($.event_declaration), "}"),

    event_declaration: ($) =>
      seq(
        field("alias", $.identifier),
        ":",
        field("window", $.identifier),
        optional(seq("&&", $.expression)),
      ),

    // ── Stage chain (supports |> pipeline for L3) ──
    stage_chain: ($) =>
      seq(
        $.stage,
        repeat(seq("|>", $.stage)),
        $.entity_clause,
        $.yield_clause,
        optional($.conv_clause),
      ),

    stage: ($) =>
      seq($.match_clause, repeat($.join_clause)),

    // ── Match clause ──
    // on_event and on_close/and_close are both optional individually,
    // but at least one must be present (enforced by semantic check, not grammar).
    // -> score_output is optional for intermediate pipeline stages.
    match_clause: ($) =>
      seq(
        "match",
        "<",
        $.match_params,
        ">",
        "{",
        optional($.key_block),
        optional($.on_event_block),
        optional(choice($.on_close_block, $.and_close_block)),
        optional($.derive_block),
        "}",
        optional(seq("->", $.score_output)),
      ),

    match_params: ($) =>
      seq(
        optional(seq($.field_reference, repeat(seq(",", $.field_reference)))),
        ":",
        $.window_spec,
      ),

    window_spec: ($) =>
      choice(
        seq($.duration, ":", "fixed"),
        seq("session", "(", $.duration, ")"),
        $.duration,
      ),

    // ── Key block (explicit key mapping for multi-source) ──
    key_block: ($) =>
      seq("key", "{", repeat1($.key_item), "}"),

    key_item: ($) =>
      seq(
        field("logical", $.identifier),
        "=",
        field("source", $.field_reference),
        ";",
      ),

    // ── On event / on close / and close blocks ──
    // on close = OR mode (event path and close path trigger independently)
    // and close = AND mode (both paths must satisfy to trigger on close)
    on_event_block: ($) =>
      seq("on", "event", "{", repeat1($.match_step), "}"),

    on_close_block: ($) =>
      seq("on", "close", "{", repeat1($.match_step), "}"),

    and_close_block: ($) =>
      seq("and", "close", "{", repeat1($.match_step), "}"),

    // ── Derive block ──
    derive_block: ($) =>
      seq("derive", "{", repeat1($.derive_item), "}"),

    derive_item: ($) =>
      seq(
        field("name", $.identifier),
        "=",
        field("value", $.expression),
        ";",
      ),

    // ── Match step (with OR branches via ||) ──
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
        field("source", $.identifier),
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

    // ── Score output ──
    score_output: ($) => choice($.score_call, $.score_block),

    score_call: ($) => seq("score", "(", $.expression, ")"),

    score_block: ($) =>
      seq("score", "{", repeat1($.score_item), "}"),

    score_item: ($) =>
      seq(
        field("name", $.identifier),
        "=",
        field("value", $.expression),
        "@",
        field("weight", $.number),
        ";",
      ),

    // ── Join clause ──
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
      ),

    join_condition: ($) =>
      seq($.field_reference, "==", $.field_reference),

    // ── Entity clause ──
    entity_clause: ($) =>
      seq(
        "entity",
        "(",
        field("type", choice($.identifier, $.string)),
        ",",
        field("id", $.expression),
        ")",
      ),

    // ── Yield clause ──
    yield_clause: ($) =>
      seq(
        "yield",
        optional($.yield_target),
        "(",
        $.named_argument,
        repeat(seq(",", $.named_argument)),
        ")",
      ),

    yield_target: ($) =>
      seq(
        field("window", $.identifier),
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

    // ── Conv clause (L3) ──
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

    // ── Limits clause ──
    limits_clause: ($) =>
      seq("limits", "{", repeat1($.limit_item), "}"),

    limit_item: ($) =>
      seq(
        field("key", choice("max_memory", "max_instances", "max_throttle", "on_exceed")),
        "=",
        field("value", choice($.string, $.number)),
        ";",
      ),

    // ── Test block ──
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
        seq(
          "hit",
          "[",
          $.number,
          "]",
          ".",
          $.hit_assertion,
          ";",
        ),
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
        field("value", choice($.identifier, $.string)),
        ";",
      ),

    // ── Expressions ──
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
        seq($.expression, "in", "(", $.expression, repeat(seq(",", $.expression)), ")"),
      ),

    not_in_expression: ($) =>
      prec(
        PREC.COMPARE,
        seq($.expression, "not", "in", "(", $.expression, repeat(seq(",", $.expression)), ")"),
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
        $.function_call,
        $.aggregate_pipe_expression,
        $.field_reference,
        $.parenthesized_expression,
      ),

    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    // ── Field references ──
    field_reference: ($) =>
      choice(
        prec(
          PREC.MEMBER,
          seq(field("object", $.identifier), ".", field("field", $.identifier)),
        ),
        prec(
          PREC.MEMBER,
          seq(field("object", $.identifier), "[", $.string, "]"),
        ),
        $.identifier,
      ),

    // ── Function calls ──
    function_call: ($) =>
      choice(
        // method-style: window.has(...)
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
        // regular: func(...)
        seq(
          field("function", $.identifier),
          "(",
          optional(seq($.expression, repeat(seq(",", $.expression)))),
          ")",
        ),
      ),

    // ── Aggregate pipe expression ──
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

    // ── Derive reference: @name ──
    derive_reference: (_$) => token(seq("@", /[a-zA-Z_][a-zA-Z0-9_]*/)),

    // ── close_reason ──
    close_reason_ref: (_$) => "close_reason",

    // ── Variables: $VAR and ${VAR:default} ──
    variable: (_$) =>
      token(
        choice(
          seq("$", "{", /[a-zA-Z_][a-zA-Z0-9_]*/, optional(seq(":", /[^}]*/)), "}"),
          seq("$", /[a-zA-Z_][a-zA-Z0-9_]*/),
        ),
      ),

    // ── Comparison operators ──
    comparison_operator: (_$) =>
      choice("==", "!=", "<", ">", "<=", ">="),

    // ── Literals ──
    number: (_$) => token(/\d+(\.\d+)?/),

    string: (_$) =>
      token(seq('"', repeat(choice(/[^"\\]/, /\\./)), '"')),

    boolean: (_$) => choice("true", "false"),

    duration: (_$) => token(/\d+[smhd]/),

    // ── Identifier ──
    // Use negative lookbehind/lookahead to exclude keywords
    identifier: (_$) =>
      token(choice(
        // Exclude keywords that would conflict
        seq(
          choice(
            /[a-mo-zA-Z_][a-zA-Z0-9_]*/,  // doesn't start with 'l'
            /l[a-tv-zA-Z_][a-zA-Z0-9_]*/,  // starts with 'l' but not 'li'
            /li[a-mo-zA-Z0-9_][a-zA-Z0-9_]*/,  // starts with 'li' but not 'lim'
            /lim[a-np-zA-Z0-9_][a-zA-Z0-9_]*/,  // starts with 'lim' but not 'limi'
            /limi[a-s-zA-Z0-9_][a-zA-Z0-9_]*/,  // starts with 'limi' but not 'limit'
            /limit[a-qs-zA-Z0-9_][a-zA-Z0-9_]*/,  // starts with 'limit' but not 'limits'
            /limits[0-9_][a-zA-Z0-9_]*/,  // starts with 'limits' but followed by digit/underscore
          ),
        ),
      )),
  },
});
