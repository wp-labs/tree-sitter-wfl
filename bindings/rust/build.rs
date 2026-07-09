fn main() {
    compile_parser("tree-sitter-wfl", "src", "src/parser.c");
    compile_parser("tree-sitter-wfg", "src/parsers/wfg", "src/parsers/wfg/parser.c");
    compile_parser("tree-sitter-wfs", "src/parsers/wfs", "src/parsers/wfs/parser.c");
}

fn compile_parser(lib_name: &str, include_dir: &str, parser_path: &str) {
    let mut c_config = cc::Build::new();
    c_config.std("c11").include(include_dir).file(parser_path);

    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8");

    println!("cargo:rerun-if-changed={parser_path}");
    c_config.compile(lib_name);
}
