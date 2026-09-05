# fate-unlimited-codes-jp — matching decompilation

Target repository of the Decompilation Assistant (PS2) project. One step of the
decompilation is performed per run; the state lives in this tree
(`config/`, `ledger/`, `state/`, `runs/`). The disc, the ELF and generated
assembly are not committed; `bootstrap.sh` and `extract_elf.py` recreate
them from the user's disc.

## Progress

<!-- progress-table:start -->
| Segment | Kind | Functions | Matched | Wip | Asm | Library | Bytes matched |
|---|---|---|---|---|---|---|---|
| image | unclassified | 3 | 3 | 0 | 0 | 0 | 140 (100.0%) |
| **total** | | 3 | 3 | 0 | 0 | 0 | 140 / 140 |

Steps run: 3; last run: 2026-09-05-003-calibrate; build check: ok; compiler: mwcps2-3.0.1b151-050317; regenerated 2026-09-05T20:22:19Z.
<!-- progress-table:end -->

## Layout

| Path | Holds |
|---|---|
| `config/` | `target.json` (extracted facts), `compiler.json` (pinned compiler + flags), `policy.json` (step budgets), `<slug>.yaml` (splat) |
| `tools/` | toolchain (gitignored except `manifest.json`) |
| `disc/` | boot ELF and extracted disc files (gitignored) |
| `asm/` | splat output (gitignored) |
| `src/`, `include/` | matched C and headers |
| `ledger/` | `functions.jsonl`, `segments.json` |
| `state/` | `steps.jsonl` |
| `runs/` | one folder per run: `RUN-STATE.json`, `RUN-REPORT.md`, `FRICTION-REPORT.md`, step tables |
| `wip/` | per-function work folders (`target.s` gitignored) |
| `reference/` | hints (Ghidra exports), never source |
| `build/` | build outputs and `check.json` (gitignored) |
c
