//! This crate provides Wfl language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
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
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_wfl() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_wfl() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

// Uncomment these to include any queries that this grammar contains

pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    use tree_sitter::{Parser, Query};

    fn parse_ok(source: &str) -> String {
        let mut parser = Parser::new();
        parser
            .set_language(&super::language())
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

    #[test]
    fn test_can_load_grammar() {
        let mut parser = Parser::new();
        parser
            .set_language(&super::language())
            .expect("Error loading Wfl grammar");
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
    fn test_highlights_query_compiles() {
        Query::new(&super::language(), super::HIGHLIGHTS_QUERY)
            .expect("highlights query should compile");
    }
}
