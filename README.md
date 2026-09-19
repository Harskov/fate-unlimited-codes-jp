# Fate/Unlimited Codes (Japan)

[![Progress report](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/report.yml/badge.svg)](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/report.yml)
[![Code](https://decomp.dev/Harskov/fate-unlimited-codes-jp.svg?mode=shield&measure=code&label=Code)](https://decomp.dev/Harskov/fate-unlimited-codes-jp)

A work-in-progress matching decompilation of *Fate/Unlimited Codes* for the PlayStation 2
(NTSC-J, `SLPM_551.08`): C source that the game's original compiler, Metrowerks
CodeWarrior for PS2, turns back into the same machine code.

This repository does **not** contain any game assets or assembly whatsoever. An existing
copy of the game is required.

## AI disclosure

This decompilation is produced with language models. Claude (Anthropic) writes most of
the C; a second, cheaper model proposes matches for simpler functions through a local
tool. Every commit that adds or changes C names the model that wrote it in a credit line
(`Co-Authored-By: Claude` or `Assisted-by: <model>`). A function counts as matched only
when the pinned compiler rebuilds it byte-identical to the original, and the whole
executable is rebuilt and compared after every change. Names are given only with cited
evidence (a referenced string, an SDK call pattern, a named caller); without it the
systematic name (`func_00123456`, `D_0052ABCD`) stays, and struct fields stay `unk_XX`.

## Supported versions

| Version | Executable | SHA-1 |
|---|---|---|
| NTSC-J | `SLPM_551.08` | `825b867ecf30b761b8261a528e86101aa4bc03ca` |

## Progress

**138 of 5891** game functions are matched (0.33 % of the game code by size), and 1 game functions carry a name backed by evidence. 2343 SDK and runtime-library functions are identified as library code and are not counted.

The per-function report is on [decomp.dev](https://decomp.dev/Harskov/fate-unlimited-codes-jp).

## Building

A standalone build (`configure.py` + `ninja`) is not published in this repository yet;
the full build currently runs in the maintainer's pipeline, which rebuilds the whole
executable after every change and compares it with the original. Until the build is
here, any function can be checked on its own:

1. Copy `SLPM_551.08` from your disc to `orig/SLPM_551.08/SLPM_551.08` and check it:
   `sha1sum -c config/SLPM_551.08/checksum.sha1`.
2. Compile the function's file under `src/` with the pinned compiler and flags
   (compiler `mwcps2-3.0.1b151-050317` with flags `-O4,p`), for example on [decomp.me](https://decomp.me), and diff the
   object against the function in your executable with
   [objdiff](https://github.com/encounter/objdiff). The splat configuration in
   `config/SLPM_551.08/` gives every function's address and segment.

## Contributing

See [CONTRIBUTING.md](CONTRIBUTING.md). Pull requests with plain, readable C are welcome.

## Layout

| Path | Holds |
|---|---|
| `src/` | matched C, one folder per segment of the executable |
| `include/` | shared headers and types |
| `config/SLPM_551.08/` | splat configuration, `symbol_addrs.txt`, `checksum.sha1` |
| `orig/SLPM_551.08/` | where your copy of the executable goes (gitignored) |
| `progress/report.json` | the objdiff progress report uploaded to decomp.dev |
| `tools/lint_c.py` | the readability check every matched file passes |

## License

The C source, headers and configuration are under the MIT License (`LICENSE`). The game
remains the property of its rightsholders and is not distributed here.
