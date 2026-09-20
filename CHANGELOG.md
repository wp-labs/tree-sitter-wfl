# Changelog

All notable changes to this grammar, its generated parsers and its queries are documented in this
file. Entries are grouped by date.

## [2026-09-21]

### WFG (`.wfg`) grammar

- Aligned the WFG syntax with `warp-fusion/docs/design/wfg-design.md`: `background` /
  `inject` blocks, `hit<[field:]N> for RULE STREAM { use(...) x N; spread D }`,
  `without(preds) [within D]`, `join <window> as <key> { ... }`,
  `replay <window> { use from "..." }`, `entity <window>.<field> zipf(...)` and inline JSON
  values (`use({...})` / `use([...])`).
- Removed the legacy WFG surface from the grammar (`traffic`, `injection`,
  `<field> seq { ... }`, `use(...) with(N)`, `not(...) within(...)`, `expect { ... }`,
  percentage quotas); the corresponding nodes (`traffic_block`, `injection_case`, `seq_block`,
  `use_statement`, `scenario_expect_statement`, `percentage`) are gone.
- `use_declaration` now exposes a `path` field, in both the top-level grammar and the
  standalone WFG grammar.
- Added the standalone WFG grammar source at `../tree-sitter-wfg` (the path
  `scripts/build-wasm.mjs` resolves) and regenerated `src/parsers/wfg/*` from it; its node
  names now match the top-level `scenario_*` rules.
- Added `test/corpus/wfg.txt` cases covering `background` / `inject` / `replay` / `without` /
  `join` / inline JSON, updated the WFG Rust binding tests and the `.wfg` formatter fixtures,
  and updated `queries/highlights.scm` / `queries/wfl/highlights.scm` /
  `queries/wfg/highlights.scm` for the new keywords and node names.
- Rewrote `docs/wfg-design.md` as the tree-sitter-side note (grammar layout, node names,
  removed syntax) that points at the authoritative design document.
- Verified the tracked `.wfg` corpus (`wf-rules` 4, `wf-conf-example` 1, `wf-examples` 35)
  parses cleanly with both the top-level and the standalone grammar; the last two
  `traffic { ... }` files were migrated to `background { ... }` upstream.

## [2026-07-24]

- Updated WFL reference docs for `join(...)`, `join_by(...)`, and `sha1_n(...)`.
- Documented `collect_set` / `collect_list` / `first` / `last` alias field sample semantics and the 1024 retained-value cap.

## [2026-07-10]

- Added WFL structured output literals: `object { ... }` and `array [...]`.
- Added WFS structured field types: `object`, bare `array`, and typed `array/T`.
- Updated generated parsers and node types for the top-level WFL grammar and standalone WFS grammar.
- Updated highlight queries for WFL/WFS structured keywords and object item fields.
- Added corpus and Rust binding tests for structured WFL yield values and WFS structured field declarations.
