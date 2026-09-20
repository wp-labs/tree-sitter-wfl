# WFG 设计（tree-sitter 侧说明）

> **权威文档**：`.wfg` 的语法、语义、校验错误码与落地状态以
> `warp-fusion/docs/design/wfg-design.md` 为准，本文件只做 **tree-sitter 侧**的落点说明：
> 语法在 grammar 里长什么样、对应哪些节点名、哪些旧语法已被移除。
>
> 实现侧（`wfgen` 的解析器 / AST / 生成器）同样以该权威文档为准；本文与它**不构成两份规范**，
> 如有冲突以权威文档为准。

## 1. 本仓的落点

| 落点 | 说明 |
|---|---|
| `grammar.js` 的 `scenario_declaration` 一簇 | 顶层 WFL 语法里的 `.wfg` 场景面（与 `.wfl` / `.wfs` 同文件类型共用一份 grammar） |
| `src/parsers/wfg/` | **独立** `.wfg` grammar 的产物（`language_wfg()` + `.wfg` 编辑器高亮）；源码在 `../tree-sitter-wfg/grammar.js` |
| `queries/wfg/highlights.scm` | `.wfg` 高亮（针对独立 grammar 的节点名） |
| `queries/highlights.scm` / `queries/wfl/highlights.scm` | 顶层 grammar 高亮（含 `.wfg` 关键字与节点名） |
| `test/corpus/wfg.txt` | 顶层 grammar 的 `.wfg` 语料 |

两份 grammar 的节点名保持一致（见 §3），因此两套 query 可以互相参照。

## 2. EBNF（与权威文档对齐）

```ebnf
scenario_file    = { use_decl } , [ scenario_attrs ] , scenario_decl ;

use_decl         = "use" , STRING ;

scenario_attrs   = "#[" , anno_list , "]" ;
anno_list        = anno_item , { "," , anno_item } ;
anno_item        = IDENT , "=" , value ;

scenario_decl    = "scenario" , IDENT , [ "<" , anno_list , ">" ] , "{" ,
                     background_block ,
                     [ inject_block ] ,
                     { replay_stmt } ,
                   "}" ;

background_block = "background" , "{" , { ( stream_stmt | entity_stmt ) } , "}" ;
stream_stmt      = "stream" , IDENT , "gen" , rate_expr , [ ";" ] ;
entity_stmt      = "entity" , IDENT , "." , IDENT , "zipf" , "(" , zipf_args , ")" , [ ";" ] ;
zipf_args        = "pool" , "=" , INTEGER , { "," , zipf_arg } ;
zipf_arg         = ( "exponent" | "fresh" ) , "=" , NUMBER ;

rate_expr        = rate_const | wave_expr | burst_expr | timeline_expr ;
rate_const       = NUMBER , "/" , ( "s" | "m" | "h" ) ;
wave_expr        = "wave(" , "base=" , rate_const , "," , "amp=" , rate_const , "," ,
                   "period=" , DURATION , [ "," , "shape=" , shape_kw ] , ")" ;
burst_expr       = "burst(" , "base=" , rate_const , "," , "peak=" , rate_const , "," ,
                   "every=" , DURATION , "," , "hold=" , DURATION , ")" ;
timeline_expr    = "timeline" , "{" , { DURATION , ".." , DURATION , "=" , rate_const , [ ";" ] } , "}" ;
shape_kw         = "sine" | "triangle" | "square" ;

inject_block     = "inject" , "{" , { inject_case } , "}" ;
inject_case      = mode_kw , "<" , [ IDENT , ":" ] , INTEGER , ">" ,
                   "for" , IDENT , IDENT , "{" , { step | spread_stmt } , "}" ;
mode_kw          = "hit" | "near_miss" | "miss" ;
spread_stmt      = "spread" , DURATION , [ ";" ] ;

step             = use_step | without_step | join_block ;
use_step         = [ "then" ] , "use" , value_source , "x" , INTEGER , [ ";" ] ;
without_step     = [ "then" ] , "without" , "(" , pred_list , ")" ,
                   [ "within" , DURATION ] , [ ";" ] ;
join_block       = "join" , IDENT , "as" , IDENT , "{" , { use_step } , "}" ;
value_source     = "(" , pred_list , ")"
                 | "(" , json_object , ")"
                 | "from" , STRING ;
pred_list        = pred , { "," , pred } ;
pred             = IDENT , "=" , value ;

replay_stmt      = "replay" , IDENT , "{" , "use" , "from" , STRING , [ ";" ] , "}" ;

value            = STRING | NUMBER | DURATION | "true" | "false" | "null"
                 | json_object | json_array ;
```

要点：

- 上面 EBNF 是**规范顺序**；grammar 层与 `wfgen` 的解析循环一致，允许 `background` / `inject` / `replay`
  按任意顺序出现（`background` / `inject` 是单例块，重复报 VN32）。
- 注释只支持 `//`；`#` 不是注释，`#[...]` 是场景注解，`<...>` 是场景内联注解。
- 合法的注解键只有 `duration`（`#[duration=10m]`）与 `seed`（`scenario name<seed=N>`）；
  键名与值类型的白名单由 `wfgen` 的 VN29 校验（grammar 层不限制）。
- `for RULE` **必填**。
- `value_source` 的三种形态：`use(preds)`、`use({json})`（顶层键即字段）、`use from "file"`。
- `x N` 是"每个实体在该步骤上的条数"。
- `spread D`、`without(preds) [within D]`、`join <window> as <key>` 见权威文档 §3.5 / §3.8 / §9。
- `replay` 只接受文件来源（`use from`），**不写** `x N`。

## 3. 节点名（可供 query / 编辑器使用）

| 语法 | 节点 / 字段 |
|---|---|
| `use "f"` | `use_declaration` |
| `scenario N<seed=1> { … }` | `scenario_declaration` `name:`, `scenario_inline_annotations` |
| `#[duration=10m]` | `scenario_attribute` → `attribute_list` → `attribute` `key:` / `value:` |
| `background { … }` | `background_block` → `background_stream` `stream:` `rate:` / `entity_distribution` `window:` `field:` |
| `zipf(pool=1000, …)` | `zipf_argument_list` → `zipf_argument` `key:` `value:` |
| `gen wave(…)` / `burst(…)` / `timeline { … }` | `rate_expression` → `wave_rate` / `burst_rate` / `timeline_rate`（`timeline_segment`） |
| `inject { … }` | `inject_block` → `inject_case` `mode:` `entity_count:` `rule:` `stream:` |
| `hit<sip: 500>` | `inject_mode`，`entity_selector` `field:` |
| `use(...) x 12` | `use_step` `count:` → `value_source` → `predicate_group` / `inline_json_group` / `file_source` `file:` |
| `without(...) within 5m` | `without_step` `within:` |
| `join W as K { … }` | `join_block` `window:` `key:` |
| `spread 10m` | `spread_statement` `duration:` |
| `replay W { use from "f" }` | `replay_statement` `window:` |
| 内联 JSON | `json_object` / `json_pair` `key:` `value:` / `json_array` / `json_string` / `json_number` / `json_null` |

## 4. 已移除的旧语法

以下旧形态**不再有语法支持**（解析报错），与权威文档 §5.1 的 `VN20` 口径一致：

| 旧写法 | 现写法 |
|---|---|
| `traffic { … }` | `background { … }` |
| `injection { … }` | `inject { … }` |
| `hit<30%>`（配额百分比） | `hit<sip: 500>`（显式实体数） |
| `<field> seq { … }` | 实体字段写在用例头，步骤直接列在体内 |
| `use(...) with(N)` | `use(...) x N` |
| `not(...) within(...)` | `without(...) [within D]` |
| `expect { … }` | 断言由模式承担（`hit` / `near_miss` / `miss`） |
| `oracle { … }` | 已删除（容差固定） |

因此 grammar 里不再有 `traffic_block` / `injection_case` / `seq_block` / `use_statement` /
`expect_block`（场景侧）等节点；`expect_block` 仅保留在 `.wfl` 的 `test` 块里。
