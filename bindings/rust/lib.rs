//! This crate provides WFL, WFG, and WFS language support for the
//! [tree-sitter][] parsing library.
//!
//! The default [language][language func] and [format][format func] exports target WFL.
//! Use the explicit `*_wfg` and `*_wfs` variants for the sibling grammars, and
//! `language_wfl` / `format_wfl` when you want the WFL choice to be explicit at
//! the call site.
//!
//! Typically, you will use the [language][language func] function to add this
//! language to a tree-sitter [Parser][], and then use the parser to parse some
//! code:
//!
//! ```
//! let code = r#"
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(&tree_sitter_wfl::language()).expect("Error loading Wfl grammar");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [format func]: fn.format.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

#[path = "../../src/format/mod.rs"]
mod format;

extern "C" {
    fn tree_sitter_wfl() -> Language;
    fn tree_sitter_wfg() -> Language;
    fn tree_sitter_wfs() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_wfl() }
}

/// Get the tree-sitter [Language][] for the WFL grammar.
pub fn language_wfl() -> Language {
    language()
}

/// Get the tree-sitter [Language][] for the WFG grammar.
pub fn language_wfg() -> Language {
    unsafe { tree_sitter_wfg() }
}

/// Get the tree-sitter [Language][] for the WFS grammar.
pub fn language_wfs() -> Language {
    unsafe { tree_sitter_wfs() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");
pub const WFL_NODE_TYPES: &str = NODE_TYPES;
pub const WFG_NODE_TYPES: &str = include_str!("../../src/parsers/wfg/node-types.json");
pub const WFS_NODE_TYPES: &str = include_str!("../../src/parsers/wfs/node-types.json");

pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");
pub const WFL_HIGHLIGHTS_QUERY: &str = HIGHLIGHTS_QUERY;
pub const WFG_HIGHLIGHTS_QUERY: &str = include_str!("../../queries/wfg/highlights.scm");
pub const WFS_HIGHLIGHTS_QUERY: &str = include_str!("../../queries/wfs/highlights.scm");

pub const COMPLETION_BUNDLE: &str = include_str!("../../completions/wfl/completion.bundle.json");
pub const WFL_COMPLETION_BUNDLE: &str = COMPLETION_BUNDLE;
pub const WFG_COMPLETION_BUNDLE: &str = include_str!("../../completions/wfg/completion.bundle.json");
pub const WFS_COMPLETION_BUNDLE: &str = include_str!("../../completions/wfs/completion.bundle.json");

pub const EDITOR_ASSET_MANIFEST: &str = include_str!("../../editor/asset-manifest.json");
pub const WFL_EDITOR_ASSET_MANIFEST: &str = EDITOR_ASSET_MANIFEST;
pub const WFG_EDITOR_ASSET_MANIFEST: &str = include_str!("../../editor/wfg/asset-manifest.json");
pub const WFS_EDITOR_ASSET_MANIFEST: &str = include_str!("../../editor/wfs/asset-manifest.json");
// pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

pub use format::{format, format_or_original, format_with_indent, WflFormatError, WflFormatter};
pub use format::{
    format as format_wfl,
    format_or_original as format_wfl_or_original,
    format_with_indent as format_wfl_with_indent,
};
pub use format::wfg::{
    format as format_wfg,
    format_or_original as format_wfg_or_original,
    format_with_indent as format_wfg_with_indent,
    WfgFormatError,
    WfgFormatter,
};
pub use format::wfs::{
    format as format_wfs,
    format_or_original as format_wfs_or_original,
    format_with_indent as format_wfs_with_indent,
    WfsFormatError,
    WfsFormatter,
};

#[cfg(test)]
mod tests {
    use tree_sitter::{Language, Parser, Query};

    fn parse_ok_with(language: Language, source: &str) -> String {
        let mut parser = Parser::new();
        parser
            .set_language(&language)
            .expect("Error loading Wfl grammar");
        let tree = parser.parse(source, None).expect("tree should be produced");
        let root = tree.root_node();
        assert!(
            !root.has_error(),
            "unexpected parse error:\n{}",
            root.to_sexp()
        );
        root.to_sexp()
    }

    fn parse_ok(source: &str) -> String {
        parse_ok_with(super::language(), source)
    }

    #[test]
    fn test_can_load_grammars() {
        let mut parser = Parser::new();
        parser
            .set_language(&super::language())
            .expect("Error loading Wfl grammar");
        parser
            .set_language(&super::language_wfg())
            .expect("Error loading Wfg grammar");
        parser
            .set_language(&super::language_wfs())
            .expect("Error loading Wfs grammar");
    }

    #[test]
    fn test_highlights_queries_compile() {
        Query::new(&super::language(), super::WFL_HIGHLIGHTS_QUERY)
            .expect("wfl highlights query should compile");
        Query::new(&super::language_wfg(), super::WFG_HIGHLIGHTS_QUERY)
            .expect("wfg highlights query should compile");
        Query::new(&super::language_wfs(), super::WFS_HIGHLIGHTS_QUERY)
            .expect("wfs highlights query should compile");
    }

    #[test]
    fn test_editor_manifests_exported() {
        assert!(super::WFL_EDITOR_ASSET_MANIFEST.contains("\"language_id\": \"wfl\""));
        assert!(super::WFL_EDITOR_ASSET_MANIFEST.contains("\"file_extensions\": [\"wfl\"]"));
        assert!(super::WFL_EDITOR_ASSET_MANIFEST.contains("\"parser_wasm\": \"editor/wasm/tree-sitter-wfl.wasm\""));
        assert!(super::WFL_EDITOR_ASSET_MANIFEST.contains("\"highlights_query\": \"queries/wfl/highlights.scm\""));
        assert!(super::WFL_EDITOR_ASSET_MANIFEST.contains("\"completion_bundle\": \"completions/wfl/completion.bundle.json\""));

        assert!(super::WFG_EDITOR_ASSET_MANIFEST.contains("\"language_id\": \"wfg\""));
        assert!(super::WFG_EDITOR_ASSET_MANIFEST.contains("\"file_extensions\": [\"wfg\"]"));
        assert!(super::WFG_EDITOR_ASSET_MANIFEST.contains("\"parser_wasm\": \"editor/wasm/tree-sitter-wfg.wasm\""));
        assert!(super::WFG_EDITOR_ASSET_MANIFEST.contains("\"highlights_query\": \"queries/wfg/highlights.scm\""));
        assert!(super::WFG_EDITOR_ASSET_MANIFEST.contains("\"completion_bundle\": \"completions/wfg/completion.bundle.json\""));

        assert!(super::WFS_EDITOR_ASSET_MANIFEST.contains("\"language_id\": \"wfs\""));
        assert!(super::WFS_EDITOR_ASSET_MANIFEST.contains("\"file_extensions\": [\"wfs\"]"));
        assert!(super::WFS_EDITOR_ASSET_MANIFEST.contains("\"parser_wasm\": \"editor/wasm/tree-sitter-wfs.wasm\""));
        assert!(super::WFS_EDITOR_ASSET_MANIFEST.contains("\"highlights_query\": \"queries/wfs/highlights.scm\""));
        assert!(super::WFS_EDITOR_ASSET_MANIFEST.contains("\"completion_bundle\": \"completions/wfs/completion.bundle.json\""));
    }

    #[test]
    fn test_completion_bundles_exported() {
        assert!(super::WFL_COMPLETION_BUNDLE.contains("\"language\": \"wfl\""));
        assert!(super::WFG_COMPLETION_BUNDLE.contains("\"language\": \"wfg\""));
        assert!(super::WFS_COMPLETION_BUNDLE.contains("\"language\": \"wfs\""));
    }

    #[test]
    fn test_alignment_samples_parse() {
        let pattern = r#"
pattern burst(alias, key, win, threshold) {
    match<${key}:${win}> {
        on event { ${alias} | count >= ${threshold}; }
    } -> score(50.0)
}

rule brute_force {
    events { e : auth_events }
    burst(e, sip, 5m, 5)
    entity(ip, e.sip)
    yield out (x = e.sip)
}
"#;
        let pattern_tree = parse_ok(pattern);
        assert!(pattern_tree.contains("pattern_declaration"));
        assert!(pattern_tree.contains("pattern_invocation"));

        let on_each = r#"
rule enrich_each_event {
    events { e : auth_events }
    on each e where e.action == "failed" -> score(70.0)
    entity(ip, e.sip)
    yield enriched_events@v2 (
        ip = e.sip,
        risk = if e.action == "failed" then "high" else "low"
    )
}
"#;
        let on_each_tree = parse_ok(on_each);
        assert!(on_each_tree.contains("each_clause"));
        assert!(on_each_tree.contains("yield_target"));

        let session = r#"
rule session_rule {
    events { req : dns_query  resp : dns_response }
    match<query_id:session(30m)> {
        on event {
            req | count >= 1;
        }
        and close {
            resp && close_reason == "timeout" | count == 0;
        }
    } -> score(50.0)
    entity(ip, req.sip)
    yield out@v2 (x = req.sip)
    limits {
        on_exceed = drop_oldest;
    }
}
"#;
        let session_tree = parse_ok(session);
        assert!(session_tree.contains("and_close_block"));
        assert!(session_tree.contains("version_tag"));
        assert!(session_tree.contains("limit_item"));
    }

    #[test]
    fn test_current_wfl_surface_parse() {
        let pipeline = r#"
rule repeated_fail_bursts {
    events { e : auth_events && action == "failed" }
    match<sip,username:5m:fixed> {
        on event { e | count >= 1; }
        and close { burst: e | count >= 3; }
    }
    |> match<sip:30m:fixed> {
        on event { _in | count >= 1; }
        and close { users: _in.username | distinct | count >= 2; }
    } -> score(85.0)
    entity(ip, _in.sip)
    yield security_alerts (
        sip = _in.sip,
        fail_count = 2,
        message = fmt("{} multi-user fail bursts", _in.sip)
    )
}
"#;
        let pipeline_tree = parse_ok(pipeline);
        assert!(pipeline_tree.contains("stage_chain"));
        assert!(pipeline_tree.contains("non_scoring_stage"));
        assert!(pipeline_tree.contains("final_stage"));

        let anti_join = r#"
rule anti_join_rule {
    meta { contract_version = "1" }
    events { e : auth_events && startswith(e.action, "fail") }
    match<e.sip:5m> {
        key { sip = e.sip; }
        on event { e.action | distinct | count >= 2; }
    } -> score(if e.action == "failed" then 90 else 10)
    join scanner_whitelist anti on e.sip == scanner_whitelist.sip
    entity(ip, e.sip)
    yield alerts@v1 (
        risk = @score,
        actions = collect_set(e.action),
        action_count = mvcount(collect_set(e.action))
    )
    limits { max_instances = 100; on_exceed = throttle; }
}

test anti_join_case for anti_join_rule {
    input {
        row(e, sip = "10.0.0.1", action = "failed");
        tick(5m);
    }
    expect { hits >= 0; }
    options {
        close_trigger = timeout;
        eval_mode = strict;
        permutation = shuffle;
        runs = 20;
    }
}
"#;
        let anti_tree = parse_ok(anti_join);
        assert!(anti_tree.contains("join_mode"));
        assert!(anti_tree.contains("derive_reference"));
        assert!(anti_tree.contains("options_block"));
        assert!(anti_tree.contains("option_entry"));
    }

    #[test]
    fn test_wfg_scenario_parse() {
        let scenario = r#"
use "../schemas/security.wfs"
use "../rules/brute_force.wfl"

#[duration=10m]
scenario brute_force_detect<seed=42> {
    traffic {
        stream auth_events gen 100/s
        stream auth_events gen wave(base=80/s, amp=40/s, period=2m, shape=sine)
    }

    injection {
        hit<30%> auth_events {
            user seq {
                use(login="failed") with(3, 1m)
                use(action="port_scan") with(1, 1m)
            }
        }

        near_miss<10%> auth_events {
            user seq {
                use(login="failed") with(2, 1m)
            }
        }
    }

    expect {
        hit(brute_force_detect) >= 95%
        near_miss(brute_force_detect) <= 10%
        miss(brute_force_detect) <= 1%
    }
}
"#;
        let scenario_tree = parse_ok_with(super::language_wfg(), scenario);
        assert!(scenario_tree.contains("scenario_declaration"));
        assert!(scenario_tree.contains("traffic_block"));
        assert!(scenario_tree.contains("injection_case"));
        assert!(scenario_tree.contains("sequence_block"));
        assert!(scenario_tree.contains("use_statement"));
        assert!(scenario_tree.contains("expect_statement"));
    }

    #[test]
    fn test_wfs_window_parse() {
        let schema = r#"
window auth_events {
    stream = ["auth/login", "auth/logout"]
    time = event_time
    over = 5m
    fields {
        sip: ip
        user.name: chars
        `event-type`: chars
        labels: array/chars
        success: bool
    }
}
"#;
        let schema_tree = parse_ok_with(super::language_wfs(), schema);
        assert!(schema_tree.contains("window_declaration"));
        assert!(schema_tree.contains("stream_attribute"));
        assert!(schema_tree.contains("fields_block"));
        assert!(schema_tree.contains("field_declaration"));
        assert!(schema_tree.contains("array_type"));
    }

    #[test]
    fn test_structured_wfs_surface_parse() {
        let schema = r#"
window security_alerts {
    fields {
        risk_context: object
        tags: array
        scores: array/float
        ports: array/digit
    }
}
"#;
        let schema_tree = parse_ok_with(super::language_wfs(), schema);
        assert!(schema_tree.contains("object_type"));
        assert!(schema_tree.contains("array_type"));
    }

    #[test]
    fn test_structured_wfl_surface_parse() {
        let source = r#"
window security_alerts {
    fields {
        risk_context: object
        tags: array
        scores: array/float
        ports: array/digit
    }
}

rule structured_output {
    events { e : auth_events }
    match<e.sip:5m> {
        on event { e | count >= 1; }
    } -> score(50.0)
    entity(ip, e.sip)
    yield security_alerts (
        risk_context = object {
            score: float = @score;
            tags: array = array ["bruteforce", e.action];
            ports: array/digit = array [22, 2222,];
            geo: object = object { country = e.country };
        },
        tags = array [],
        scores = array [@score, 1.5, 1],
        ports = array [22, 2222,]
    )
}
"#;
        let source_tree = parse_ok_with(super::language_wfl(), source);
        assert!(source_tree.contains("object_expression"));
        assert!(source_tree.contains("array_expression"));
        assert!(source_tree.contains("object_type"));
        assert!(source_tree.contains("array_type"));
    }

}
