# Fate/Unlimited Codes (Japan)

[![Progress report](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/report.yml/badge.svg)](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/report.yml)
[![Code](https://decomp.dev/Harskov/fate-unlimited-codes-jp.svg?mode=shield&measure=code&label=Code)](https://decomp.dev/Harskov/fate-unlimited-codes-jp)

A work-in-progress matching decompilation of *Fate/Unlimited Codes* for the PlayStation 2
(NTSC-J, `SLPM_551.08`): C source that the game's original compiler, Metrowerks
CodeWarrior for PS2, turns back into the same machine code.

This repository does **not** contain any game assets or assembly whatsoever. An existing
copy of the game is required.

## AI disclosure

This decompilation is produced with language models. Claude (Anthropic) writes the C.
For part of September 2026 a second, cheaper model also proposed matches for simpler
functions through a local tool; that lane is retired. Every commit that adds or changes C
names the model that wrote it in a credit line (`Co-Authored-By: Claude` or
`Assisted-by: <model>`). A function counts as matched only
when the pinned compiler rebuilds it byte-identical to the original, and the whole
executable is rebuilt and compared after every change. Names are given only with cited
evidence (a referenced string, an SDK call pattern, a named caller); without it the
systematic name (`func_00123456`, `D_0052ABCD`) stays, and struct fields stay `unk_XX`.

## Supported versions

| Version | Executable | SHA-1 |
|---|---|---|
| NTSC-J | `SLPM_551.08` | `825b867ecf30b761b8261a528e86101aa4bc03ca` |

## Progress

**9,492 of 2,251,036 bytes of game code are matched (0.42 %)**: 160 of 5891 game functions. 1 game functions and 58 of 2343 SDK and runtime functions carry a name backed by evidence; 21 structs are typed in shared headers. SDK and runtime-library code is identified as such and not counted as game code.

| Milestone | Status | Exit judged on |
|---|---|---|
| M1 Contributable | current | public build not recorded (no layout, never); 160 matched function(s) still in per-function files; units map absent |
| M2 Identified | pending | 0 complete name-pass run(s); 0 of 5891 game functions labelled |
| M3 Platform boundary | pending | 0 of 0 function(s) labelled platform matched (0 of 0 bytes); PLATFORM.md present — no function carries the label yet (a name-pass labels them) |
| M4 Core | pending | 0 of 0 function(s) labelled core matched (0 of 0 bytes); FORMATS.md missing — no function carries the label yet (a name-pass labels them) |
| M5 Gameplay | pending | 0 of 0 function(s) labelled gameplay matched (0 of 0 bytes) — no function carries the label yet (a name-pass labels them) |
| M6 Complete | pending | 9492 of 2251036 game bytes matched; check ok |

The milestones and why they come in this order: [ROADMAP.md](ROADMAP.md).

The per-function report is on [decomp.dev](https://decomp.dev/Harskov/fate-unlimited-codes-jp).

## Building

You need Linux x86-64 (WSL2 on Windows works), Python 3.8 or newer, git, and your own
copy of the game.

1. Copy `SLPM_551.08` from your disc to `orig/SLPM_551.08/SLPM_551.08`.
2. `python3 -m pip install -r requirements.txt` installs splat and ninja.
3. `python3 configure.py` checks your copy against `config/SLPM_551.08/checksum.sha1`,
   downloads the pinned tools into `tools/` (each checked against the sha256 in
   `config/SLPM_551.08/build.json`), splits the executable into `asm/` with splat, and
   writes `build.ninja` and `objdiff.json`.
4. `ninja` compiles every matched C file with the pinned compiler (compiler `mwcps2-3.0.1b151-050317` with flags `-O4,p`),
   assembles the rest, links, and checks that the rebuilt executable's loaded image
   equals the original's byte for byte.

To work on a function, open the repository folder in
[objdiff](https://github.com/encounter/objdiff): `objdiff.json` pairs every C file with
splat's disassembly of the same range. [decomp.me](https://decomp.me) has the same
compiler for trying a single function.

## Symbols and documentation

Generated from the match records at every change, never edited by hand:

- `symbols/SLPM_551.08.txt`: every function's name and address, for Ghidra's
  `ImportSymbolsScript.py`; `symbols/SLPM_551.08.sym`: the same for the PCSX2 debugger;
  `symbols/SLPM_551.08.subsystems.tsv`: each function's subsystem label.
- `config/SLPM_551.08/symbols-evidence.tsv`: the evidence behind every name.
- [PLATFORM.md](PLATFORM.md): the SDK functions, IOP modules, VU microprograms and
  hardware registers the game uses, and the functions that use them.
- [ROADMAP.md](ROADMAP.md): the milestones, why they come in this order, and where the
  project stands.

## Contributing

See [CONTRIBUTING.md](CONTRIBUTING.md). Pull requests with plain, readable C are welcome.

## Layout

| Path | Holds |
|---|---|
| `src/` | matched C, one folder per segment of the executable |
| `include/` | shared headers and types |
| `config/SLPM_551.08/` | splat configuration, `symbol_addrs.txt`, `checksum.sha1`, the tool pins (`build.json`), `symbols-evidence.tsv` |
| `orig/SLPM_551.08/` | where your copy of the executable goes (gitignored) |
| `configure.py`, `requirements.txt` | the build set-up |
| `tools/` | `dps2build.py` (the build graph), `download_tool.py`, `check.py`, and `lint_c.py`, the readability check every matched file passes; the downloaded tools land here too (gitignored) |
| `symbols/` | the symbol map for Ghidra and PCSX2, and the subsystem labels |
| `progress/report.json` | the objdiff progress report uploaded to decomp.dev |

## License

The C source, headers and configuration are under the MIT License (`LICENSE`). The game
remains the property of its rightsholders and is not distributed here.
