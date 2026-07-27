; WFS Syntax Highlighting (tree-sitter native)

[
  "window"
  "stream"
  "stream_tag"
  "time"
  "over"
  "fields"
] @keyword

(comment) @comment
(string) @string
(duration) @number

[ "{" "}" "[" "]" ] @punctuation.bracket
[ ":" "," "=" "/" ] @punctuation.delimiter

[
  "array"
  "chars"
  "digit"
  "float"
  "bool"
  "time"
  "ip"
  "hex"
] @type.builtin

(object_type) @type.builtin

(window_declaration name: (identifier) @function.definition)
(field_declaration name: (_) @property)
(field_declaration type: (_) @type)
(time_attribute (identifier) @property)
(stream_attribute (string) @string.special)
(quoted_identifier) @string.special

(identifier) @variable
