# tree-sitter-wfl

[Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for **WFL (WarpLabs Language)** — a domain-specific language for stream processing rules, windowed aggregations, and anomaly detection.

## Overview

WFL defines event-driven processing rules that match patterns across data streams within time windows. It supports multi-stage pipelines, complex event joins, scoring, entity tracking, and a built-in test framework.

## Language Structure

A WFL file consists of `use` declarations, `rule` definitions, and `test` blocks:

```wfl
use "path/to/module"

rule my_rule {
    meta { ... }
    events { ... }
    match <...> { ... } -> score(...)
    entity(...)
    yield target@v1(...)
}

test my_test for my_rule {
    input { ... }
    expect { ... }
}
```

## Language Features

### Use Declarations

Import external modules:

```wfl
use "rules/detection.wfl"
use "lib/common.wfl"
```

### Rule Declaration

The core construct defining a stream processing rule:

```wfl
rule brute_force {
    meta {
        author = "security-team";
        severity = "high";
    }

    events {
        login: auth_stream && status == "failed"
    }

    match <login.src_ip : 5m> {
        on event {
            login.src_ip | count >= 10;
        }
        on close {
            login.src_ip | distinct | count >= 3;
        }
        derive {
            fail_rate = login.src_ip | count / login.src_ip | distinct | count;
        }
    } -> score {
        frequency = login.src_ip | count @0.6;
        diversity = login.username | distinct | count @0.4;
    }

    entity("account", login.username)
    yield(reason = "brute_force", count = login.src_ip | count)
}
```

### Events Block

Declare event sources with optional filter conditions:

```wfl
events {
    login: auth_stream && status == "failed"
    dns: dns_stream
    http: web_stream && method == "POST"
}
```

### Match Clause

Define windowed processing with match parameters, event/close handlers, and derived fields:

```wfl
match <login.src_ip : 5m : tumble> {
    on event {
        login.src_ip | count >= 10;
    }
    on close {
        login.src_ip | distinct | count >= 5;
    }
}
```

**Window types:**
- `5m` — sliding window (default)
- `5m : fixed` — fixed interval window (non-overlapping)
- `session(30m)` — session window (gap-based)

**Duration units:** `s` (seconds), `m` (minutes), `h` (hours), `d` (days).

**Pipe chain:** Apply transforms and measures to event fields:

```wfl
// transform | measure comparison value
login.src_ip | distinct | count >= 5;
login.bytes | sum > 1000000;
login.latency | avg > 500;
```

Transforms: `distinct`.
Measures: `count`, `sum`, `avg`, `min`, `max`.

### OR Branches

Match steps support alternative branches with `||`:

```wfl
on event {
    fast: login.src_ip && latency < 100 | count >= 20
    || slow: login.src_ip && latency >= 100 | count >= 5;
}
```

### Derive Block

Create computed values for use in scoring and yield:

```wfl
derive {
    fail_rate = @total_attempts / @unique_users;
    risk_level = if @fail_rate > 0.8 then 1.0 else 0.5;
}
```

Derived values are referenced with `@name` syntax.

### Score Output

Single score:

```wfl
-> score(login.src_ip | count * 10)
```

Weighted multi-factor scoring:

```wfl
-> score {
    frequency = login.src_ip | count @0.6;
    spread = login.username | distinct | count @0.4;
}
```

### Multi-Stage Pipelines

Chain processing stages with `|>`:

```wfl
match <login.src_ip : 5m : tumble> {
    on event { login.src_ip | count >= 10; }
} -> score(login.src_ip | count)
|>
match <: session(30m)> {
    on event { login.src_ip | count >= 3; }
} -> score(login.src_ip | sum)
entity("account", login.username)
yield(reason = "sustained_brute_force")
```

### Join Clause

Enrich events with data from other windows:

```wfl
match <login.src_ip : 5m : tumble> {
    on event { login.src_ip | count >= 10; }
}
join geo_db snapshot on login.src_ip == geo_db.ip
join threat_intel asof within 24h on login.src_ip == threat_intel.indicator
    && login.dst_ip == threat_intel.target
```

Join modes: `snapshot` (point-in-time lookup), `asof [within dur]` (temporal lookup).

### Entity Clause

Track per-entity state for anomaly detection:

```wfl
entity("account", login.username)
entity("ip_address", fmt("{}", login.src_ip))
```

### Yield Clause

Emit output with named fields:

```wfl
yield(reason = "brute_force", count = login.src_ip | count, score = @risk_level)
yield alert_stream@v1(severity = "high", source = login.src_ip)
```

### Key Block

Explicit key mapping for multi-source rules with different field names:

```wfl
match <sip : 5m> {
    key {
        sip = fail.src_ip;
        sip = scan.src_addr;
    }
    on event { ... }
} -> score(...)
```

### Limits Clause

Optional resource budget declaration per rule:

```wfl
rule example {
    ...
    limits {
        max_memory = "128MB";
        max_instances = 10000;
        max_throttle = "1000/m";
        on_exceed = "throttle";
    }
}
```

### Conv Clause (Post-processing)

Optional post-processing of results:

```wfl
conv {
    sort(score) | top(10);
    dedup(entity_id);
    where(score > 0.5);
}
```

Operations: `sort`, `top`, `dedup`, `where`.

### Test Block

Built-in testing framework for rule validation:

```wfl
test test_brute_force for brute_force {
    input {
        row(login, src_ip = "10.0.0.1", username = "admin", status = "failed");
        row(login, src_ip = "10.0.0.1", username = "root", status = "failed");
        tick(1m);
        row(login, src_ip = "10.0.0.1", username = "admin", status = "failed");
    }
    expect {
        hits >= 1;
        hit[0].score >= 50;
        hit[0].entity_type == "account";
        hit[0].entity_id == "admin";
        hit[0].field("reason") == "brute_force";
        hit[0].close_reason == "timeout";
    }
    options {
        close_trigger = timeout;
        eval_mode = strict;
    }
}
```

### Expressions

Full expression system with operator precedence:

| Precedence | Operators | Description |
|:---:|---|---|
| 1 | `\|\|` | Logical OR |
| 2 | `&&` | Logical AND |
| 3 | `==` `!=` `<` `>` `<=` `>=` `in` `not in` | Comparison / set membership |
| 4 | `+` `-` | Addition |
| 5 | `*` `/` `%` | Multiplication |
| 6 | `-` (unary) | Negation |
| 7 | `\|` | Pipe |
| 8 | `.` `[]` | Member access |

**Ternary:** `if expr then expr else expr`

**Variables:** `$VAR` or `${VAR:default_value}` for runtime substitution.

**Built-in functions:** `count`, `sum`, `avg`, `min`, `max`, `distinct`, `fmt`, `baseline`, `window.has`, `hit`, `contains`, `regex_match`, `len`, `lower`, `upper`, `time_diff`, `time_bucket`, `coalesce`, `try`, `collect_set`, `collect_list`, `first`, `last`, `stddev`, `percentile`.

## Usage

### Rust

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter = ">=0.22.6"
tree-sitter-wfl = "0.0.1"
```

```rust
let language = tree_sitter_wfl::language();
let mut parser = tree_sitter::Parser::new();
parser.set_language(&language).unwrap();

let source = r#"rule example {
    events { e: stream }
    match <e.id : 5m> {
        on event { e.id | count >= 1; }
    } -> score(1)
    entity("test", e.id)
    yield(reason = "test")
}"#;
let tree = parser.parse(source, None).unwrap();
println!("{}", tree.root_node().to_sexp());
```

### Node.js

```javascript
const Parser = require("tree-sitter");
const WFL = require("tree-sitter-wfl");

const parser = new Parser();
parser.setLanguage(WFL);

const tree = parser.parse(`rule example {
    events { e: stream }
    match <e.id : 5m> {
        on event { e.id | count >= 1; }
    } -> score(1)
    entity("test", e.id)
    yield(reason = "test")
}`);
console.log(tree.rootNode.toString());
```

### Python

```python
import tree_sitter_wfl

language = tree_sitter_wfl.language()
```

### Go

```go
import tree_sitter_wfl "github.com/tree-sitter/tree-sitter-wfl"

language := tree_sitter.NewLanguage(tree_sitter_wfl.Language())
```

### Swift

Add via Swift Package Manager using `Package.swift`.

## Development

### Prerequisites

- [Node.js](https://nodejs.org/) (for `tree-sitter-cli`)
- [Rust toolchain](https://rustup.rs/) (for building the Rust binding)

### Building

```bash
# Install dependencies
npm install

# Generate the parser from grammar.js
npx tree-sitter generate

# Run tests
npx tree-sitter test

# Build the Rust binding
cargo build

# Run Rust tests
cargo test

# Build C library
make
```

### Project Structure

```
tree-sitter-wfl/
├── grammar.js              # Grammar definition
├── queries/
│   └── highlights.scm      # Syntax highlighting queries
├── bindings/
│   ├── rust/                # Rust binding
│   ├── node/                # Node.js binding
│   ├── python/              # Python binding
│   ├── go/                  # Go binding
│   ├── c/                   # C header and pkg-config
│   └── swift/               # Swift binding
├── src/
│   ├── parser.c             # Generated parser
│   ├── grammar.json         # Generated grammar schema
│   └── node-types.json      # AST node type definitions
├── Cargo.toml               # Rust package manifest
├── package.json             # Node.js package manifest
├── pyproject.toml           # Python package manifest
├── Package.swift            # Swift package manifest
└── Makefile                 # C library build rules
```

## Editor Support

### Zed

The `queries/highlights.scm` file provides syntax highlighting for the [Zed editor](https://zed.dev/). See the companion Zed extension for integration.

## License

Apache License 2.0 — see [LICENSE](LICENSE) for details.
