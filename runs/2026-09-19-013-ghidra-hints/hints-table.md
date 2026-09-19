# S5 ghidra-hints — export table (fate-unlimited-codes-jp)

Run 2026-09-19-013-ghidra-hints. Ghidra 12.1.3 PUBLIC + ghidra-emotionengine-reloaded v2.1.37, language `r5900:LE:32:default`.

## Exports

| Export | Count | Size | Published |
|---|---|---|---|
| `functions.json` | 7263 | 0.9 MB | gitignored |
| `xrefs.json` | 142747 | 17.7 MB | gitignored |
| `strings.json` | 10098 | 1.2 MB | gitignored |
| `decomp/<addr>.c` | 7122 | 11.4 MB | gitignored |
| `MANIFEST.json` | — | — | committed |

## Coverage against the ledger

| Measure | Count |
|---|---|
| ledger functions | 8234 |
| ledger entry addresses Ghidra also calls a function start | 7251 |
| ledger functions with a decompiler C file | 7110 |
| Ghidra function starts with no ledger entry | 12 |
| matched (94) with a Ghidra hint | 93 |
| defined strings | 10098 |
| distinct functions referencing a string | 8525 |

## Highest call-xref density among still-unmatched functions (S6 batch candidates)

| Function | Address | Incoming calls | Status | Decompiler C |
|---|---|---|---|---|
| func_0015D130 | 0x0015D130 | 996 | asm | yes |
| func_002235A0 | 0x002235A0 | 833 | asm | yes |
| func_001D4E60 | 0x001D4E60 | 783 | asm | yes |
| func_0032D780 | 0x0032D780 | 692 | asm | yes |
| func_0022FF80 | 0x0022FF80 | 654 | asm | yes |
| func_00223250 | 0x00223250 | 585 | asm | yes |
| func_0032D3C0 | 0x0032D3C0 | 481 | asm | yes |
| func_0015EE20 | 0x0015EE20 | 417 | asm | yes |
| func_00252370 | 0x00252370 | 402 | asm | yes |
| func_0016CFD0 | 0x0016CFD0 | 393 | asm | yes |
| func_002DA5C8 | 0x002DA5C8 | 353 | asm | yes |
| func_00165EA0 | 0x00165EA0 | 353 | asm | yes |
| func_0015F060 | 0x0015F060 | 285 | asm | yes |
| func_0020D070 | 0x0020D070 | 276 | asm | yes |
| func_002DA690 | 0x002DA690 | 257 | asm | yes |

Ledger status counts: asm 5769, library 2339, matched 94, wip 32.

No decoded game string is reproduced here; the exports themselves stay out of git (see MANIFEST.json `publication`).
