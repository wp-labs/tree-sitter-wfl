# wasm assets

浏览器端使用的 parser wasm 固定放在这里：

- `editor/wasm/tree-sitter-wfl.wasm`
- `editor/wasm/tree-sitter-wfg.wasm`
- `editor/wasm/tree-sitter-wfs.wasm`

生成方式：

```bash
npm run build:wasm
```

校验当前产物：

```bash
npm run validate:wasm
```

说明：

- `wfl` 从当前仓库根 grammar 构建。
- `wfg` / `wfs` 默认从相邻仓库 `../tree-sitter-wfg`、`../tree-sitter-wfs` 构建。
- 也可以通过环境变量 `TREE_SITTER_WFG_DIR`、`TREE_SITTER_WFS_DIR` 显式指定来源目录。
