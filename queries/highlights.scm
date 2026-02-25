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
  "test"
  "on"
  "and"
  "event"
  "close"
  "derive"
  "score"
  "input"
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
  "within"
  "key"
  "limits"
  "fixed"
  "session"
  "field"
  "origin"
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

; ── Yield version @ sign ──
(yield_target "@" @punctuation.special)

; ── Version tag ──
(version_tag) @constant

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

; ── Quoted identifiers (`field.name`) ──
(quoted_ident) @string.special

; ── Rule name ──
(rule_declaration name: (identifier) @function.definition)

; ── Test name ──
(test_block name: (identifier) @function.definition)
(test_block rule: (identifier) @function)

; ── Window references in events ──
(event_declaration
  alias: (identifier) @variable
  window: (identifier) @type)

; ── Join window ──
(join_clause window: (identifier) @type)

; ── Yield target ──
(yield_target window: (identifier) @type)

; ── Entity type ──
(entity_clause type: (identifier) @type)

; ── Key block logical key names ──
(key_item logical: (identifier) @property)

; ── Limits clause keys ──
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
  (#match? @function.builtin "^(count|sum|avg|min|max|distinct|fmt|baseline|has|hit|contains|regex_match|len|lower|upper|time_diff|time_bucket|collect_set|collect_list|first|last|stddev|percentile|coalesce|try)$"))
(function_call
  function: (identifier) @function)

; ── Field references ──
(field_reference
  object: (identifier) @variable
  field: (identifier) @property)

; ── Named arguments in yield ──
(named_argument name: (yield_field) @property)

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

; ── Limits item keys ──
[
  "max_memory"
  "max_instances"
  "max_throttle"
  "on_exceed"
] @property

; ── Option keys ──
(option_entry key: (identifier) @property)

; ── Plain identifiers (fallback) ──
(identifier) @variable
