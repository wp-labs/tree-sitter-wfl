; WFL Syntax Highlighting Queries

; ── Keywords ──
[
  "use"
  "rule"
  "meta"
  "events"
  "match"
  "join"
  "yield"
  "entity"
  "conv"
  "contract"
  "on"
  "event"
  "close"
  "derive"
  "score"
  "given"
  "expect"
  "options"
  "if"
  "then"
  "else"
  "in"
  "not"
  "for"
  "row"
  "tick"
  "hits"
  "hit"
  "snapshot"
  "asof"
] @keyword

; ── Boolean literals ──
(boolean) @constant.builtin

; ── Operators ──
(comparison_operator) @operator
[
  "+"
  "-"
  "*"
  "/"
  "%"
  "&&"
  "||"
  "|"
  "|>"
  "->"
] @operator

; ── Score weight @ sign ──
(score_item "@" @punctuation.special)

; ── Punctuation ──
[ "(" ")" "{" "}" "[" "]" "<" ">" ] @punctuation.bracket
[ "," ";" ":" "." ] @punctuation.delimiter

; ── Comments ──
(comment) @comment

; ── String literals ──
(string) @string

; ── Number literals ──
(number) @number

; ── Duration literals ──
(duration) @number

; ── Variables ($VAR, ${VAR:default}) ──
(variable) @variable.special

; ── Derive references (@name) ──
(derive_reference) @variable.special

; ── close_reason ──
(close_reason_ref) @variable.builtin

; ── Rule name ──
(rule_declaration name: (identifier) @function.definition)

; ── Contract name ──
(contract_block name: (identifier) @function.definition)
(contract_block rule: (identifier) @function)

; ── Window references in events ──
(event_declaration
  alias: (identifier) @variable
  window: (identifier) @type)

; ── Join window ──
(join_clause window: (identifier) @type)

; ── Yield target ──
(yield_clause target: (identifier) @type)

; ── Entity type ──
(entity_clause type: (identifier) @type)

; ── Transform functions (distinct) ──
(transform) @function.builtin

; ── Measure functions ──
(measure) @function.builtin

; ── Generic function calls (before builtins so builtins override) ──
(function_call
  function: (identifier) @function)

; ── Method-style function calls ──
(function_call
  object: (identifier) @type
  method: (identifier) @function.method)

; ── Built-in function calls (last = wins) ──
(function_call
  function: (identifier) @function.builtin
  (#match? @function.builtin "^(count|sum|avg|min|max|distinct|fmt|baseline|has|hit|contains|regex_match|len|lower|upper|time_diff|time_bucket|collect_set|collect_list|first|last|stddev|percentile)$"))
(function_call
  function: (identifier) @function)

; ── Field references ──
(field_reference
  object: (identifier) @variable
  field: (identifier) @property)

; ── Named arguments in yield ──
(named_argument name: (identifier) @property)

; ── Meta keys ──
(meta_entry key: (identifier) @property)

; ── Score item name ──
(score_item name: (identifier) @property)

; ── Derive item name ──
(derive_item name: (identifier) @property)

; ── Conv operations ──
[
  "sort"
  "top"
  "dedup"
  "where"
] @function.builtin

; ── Option keys ──
(option_entry key: (identifier) @property)

; ── Plain identifiers (fallback) ──
(identifier) @variable
