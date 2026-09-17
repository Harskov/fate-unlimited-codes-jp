# Fate/Unlimited Codes (Japan) SLPM_551.08 — matching decompilation

[![Progress report](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/report.yml/badge.svg)](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/report.yml)
[![Code progress](https://decomp.dev/Harskov/fate-unlimited-codes-jp.svg?mode=shield&measure=code&label=Code)](https://decomp.dev/Harskov/fate-unlimited-codes-jp)

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
| game_00 | game | 3246 | 41 | 5 | 3200 | 0 | 2128 (0.2%) |
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
| **total** | | 8234 | 41 | 9 | 5845 | 2339 | 2128 / 2608780 |

Matched by the operator: 37; by the external lane (MatchRunner): 4 in 2 batch(es) (last 2026-09-11-002).

Steps run: 8; last run: 2026-09-16-008-consolidate; build check: ok; compiler: mwcps2-3.0.1b151-050317; regenerated 2026-09-17T04:16:44Z.
<!-- progress-table:end -->

## Building and verifying

Nothing from the game is in this repository: no disc, no executable, no
extracted assets, no disassembly, no compiled objects. To build you need your
own copy of the disc; the toolchain (Metrowerks CodeWarrior for PS2, run under
wibo, plus splat and objdiff) is fetched by the project's bootstrap and pinned
in `tools/manifest.json`. The pinned compiler and flags are in
`config/compiler.json`; any function's C can be verified independently by
compiling it with that compiler and diffing the object against the original.

How progress is measured: a function counts as matched only when its compiled
`.text` is byte-identical to the original (objdiff score 100); the record in
`ledger/functions.jsonl` carries the object's sha256, the C's sha256, the
compiler id and the flags. After every step the full ELF is rebuilt and its
loaded memory image compared with the original (`build/check.json`).

Disclosure: this decompilation is AI-assisted. C is proposed by language models
and accepted only when it compiles byte-identical; every run's report and
friction log are committed under `runs/`. See `CONTRIBUTING.md` to contribute.

## Progress reporting

Progress is published the way the decompilation community tracks it, through
[decomp.dev](https://decomp.dev): `tools/objdiff_report.py` writes an objdiff (v2)
report from `ledger/functions.jsonl`, and the `Progress report` workflow generates it
on every push to `main`, validates it with `objdiff-cli` and uploads it as the
`<BOOT2 file>_report` artifact decomp.dev consumes. The ledger is the evidence behind
every number: a function is recorded as matched only after the pinned compiler
rebuilt its C byte-identical on the maintainer's machine, where the disc is, so the
workflow needs nothing from the game. To regenerate the report locally:

```sh
python3 tools/objdiff_report.py --repo . --out build/report.json
```

`matched_code` counts byte-identical functions; `complete_code` counts those linked
into the rebuilt ELF whose loaded image equals the original's (`build/check.json`).
Categories: game code, SDK and libc.

## License

The C source, headers, configuration and records in this repository are under
the MIT License (`LICENSE`). The game is not: it remains the property of its
rightsholders and is not distributed here.

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
