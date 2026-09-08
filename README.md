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
| crt0 | game | 4 | 0 | 0 | 4 | 0 | 0 (0.0%) |
| sdk_dma_graph | sdk | 216 | 0 | 1 | 0 | 215 | 0 (0.0%) |
| sdk_kernel | sdk | 82 | 0 | 0 | 0 | 82 | 0 (0.0%) |
| sdk_stdio | sdk | 63 | 0 | 0 | 0 | 63 | 0 (0.0%) |
| sdk_loadfile | sdk | 77 | 0 | 0 | 0 | 77 | 0 (0.0%) |
| sdk_mc | sdk | 74 | 0 | 0 | 0 | 74 | 0 (0.0%) |
| sdk_ipu | sdk | 116 | 0 | 1 | 0 | 115 | 0 (0.0%) |
| sdk_pad_scf | sdk | 78 | 0 | 0 | 0 | 78 | 0 (0.0%) |
| libc | libc | 139 | 0 | 1 | 0 | 138 | 0 (0.0%) |
| libm | libc | 56 | 0 | 0 | 0 | 56 | 0 (0.0%) |
| cri_adx | sdk | 1430 | 0 | 1 | 0 | 1429 | 0 (0.0%) |
| game_00 | game | 3246 | 24 | 4 | 3218 | 0 | 1248 (0.1%) |
| game_render | game | 1056 | 0 | 0 | 1056 | 0 | 0 (0.0%) |
| game_01 | game | 834 | 0 | 0 | 834 | 0 | 0 (0.0%) |
| sdk_cdvd | sdk | 12 | 0 | 0 | 0 | 12 | 0 (0.0%) |
| game_02 | game | 205 | 0 | 0 | 205 | 0 | 0 (0.0%) |
| game_model | game | 546 | 0 | 0 | 546 | 0 | 0 (0.0%) |
| data_00 | data | 0 | 0 | 0 | 0 | 0 | 0 |
| data_sdk | data | 0 | 0 | 0 | 0 | 0 | 0 |
| data_01 | data | 0 | 0 | 0 | 0 | 0 | 0 |
| rodata_str | rodata | 0 | 0 | 0 | 0 | 0 | 0 |
| main_bss | bss | 0 | 0 | 0 | 0 | 0 | 0 |
| **total** | | 8234 | 24 | 8 | 5863 | 2339 | 1248 / 2608780 |

Steps run: 6; last run: 2026-09-08-006-match-batch; build check: ok; compiler: mwcps2-3.0.1b151-050317; regenerated 2026-09-08T05:21:42Z.
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
