# Changelog

## Unreleased

- Updated WFL reference docs for `join(...)`, `join_by(...)`, and `sha1_n(...)`.
- Documented `collect_set` / `collect_list` / `first` / `last` alias field sample semantics and the 1024 retained-value cap.
- Added WFL structured output literals: `object { ... }` and `array [...]`.
- Added WFS structured field types: `object`, bare `array`, and typed `array/T`.
- Updated generated parsers and node types for the top-level WFL grammar and standalone WFS grammar.
- Updated highlight queries for WFL/WFS structured keywords and object item fields.
- Added corpus and Rust binding tests for structured WFL yield values and WFS structured field declarations.
