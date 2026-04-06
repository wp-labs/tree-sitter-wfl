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
  ],

  rules: {
    source_file: ($) =>
      seq(
        repeat($.use_declaration),
        repeat(choice($.pattern_declaration, $.rule_declaration, $.test_block)),
      ),

    comment: (_$) => token(seq("//", /.*/)),

    use_declaration: ($) => seq("use", $.string),

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
          repeat1(seq("|>", $.non_scoring_stage)),
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
        $.on_event_block,
        optional($.close_block),
        "}",
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
        "(",
        $.named_argument,
        repeat(seq(",", $.named_argument)),
        ")",
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
        field("value", choice($.identifier, $.string)),
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
        $.function_call,
        $.aggregate_pipe_expression,
        $.field_reference,
        $.parenthesized_expression,
      ),

    parenthesized_expression: ($) => seq("(", $.expression, ")"),

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

    number: (_$) => token(/\d+(\.\d+)?/),

    string: (_$) =>
      token(seq('"', repeat(choice(/[^"\\]/, /\\./)), '"')),

    boolean: (_$) => choice("true", "false"),

    duration: (_$) => token(/\d+(ms|[smhd])/),

    identifier: (_$) =>
      token(choice(
        seq(
          choice(
            /[a-mo-zA-Z_][a-zA-Z0-9_]*/,
            /l[a-tv-zA-Z_][a-zA-Z0-9_]*/,
            /li[a-mo-zA-Z0-9_][a-zA-Z0-9_]*/,
            /lim[a-np-zA-Z0-9_][a-zA-Z0-9_]*/,
            /limi[a-s-zA-Z0-9_][a-zA-Z0-9_]*/,
            /limit[a-qs-zA-Z0-9_][a-zA-Z0-9_]*/,
            /limits[0-9_][a-zA-Z0-9_]*/,
          ),
        ),
      )),
  },
});
