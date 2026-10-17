# Fate/Unlimited Codes

[![Audit](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/audit.yml/badge.svg)](https://github.com/Harskov/fate-unlimited-codes-jp/actions/workflows/audit.yml)
[![Code](https://bytematch.dev/Harskov/fate-unlimited-codes-jp.svg?label=Code&measure=matched_code_percent&category=game)](https://bytematch.dev/Harskov/fate-unlimited-codes-jp)
[![Functions](https://bytematch.dev/Harskov/fate-unlimited-codes-jp.svg?label=Functions&measure=matched_functions&category=game)](https://bytematch.dev/Harskov/fate-unlimited-codes-jp)

A decompilation of Fate/Unlimited Codes (PlayStation 2). It builds the following release:

| Release | Region | Executable | SHA-1 | Size |
|---|---|---|---|---|
| Fate/Unlimited Codes | Japan | `SLPM_551.08` | `825b867ecf30b761b8261a528e86101aa4bc03ca` | 4231984 bytes |

**This repository contains no game assets**: no original file, no extracted asset, no decompiler output and no reference
P-code or assembly. Building it needs your own copy of the game. The source was written function by function, much of it
with AI assistance, and accepted only when the pinned toolchain rebuilt it to match the original; see
[How the source was made](#how-the-source-was-made-and-the-ai-disclosure).

## Building

You need Linux x86-64 (WSL2 on Windows works), Python 3.9 or newer, git, and your own copy of the game.

1. Clone this repository.
2. Copy the executable the table names from your disc (it sits beside `SYSTEM.CNF`) to `orig/<SERIAL>/<SERIAL>`, for example `orig/SLPM_551.08/SLPM_551.08`; its SHA-1 must be the one in the table.
3. `python3 -m pip install -r requirements.txt` installs splat and ninja.
4. `python3 configure.py` checks each copy it finds against `config/<SERIAL>/checksum.sha1`, downloads the pinned tools into `tools/` (each checked against the sha256 in `config/<SERIAL>/build.json`), splits each executable with splat, and writes `build.ninja` and `objdiff.json`.
5. `ninja` compiles every matched C file with the pinned compiler (`mwcps2-3.0.1b151-050317` with `-O4,p`), assembles the rest, links, and checks that each rebuilt executable's loaded image equals the original's byte for byte (`check: OK`).

## Progress

**703 of 5830 game functions are matched** (5,458 of 560,195 instructions, 0.97 %). 4 of the matched and 8 of all game functions carry a name whose evidence a script checked; so do 4 of 208 types, 54 of 387 members the matched code reaches, 0 of 263 globals the matched code reaches; 5830 functions carry a subsystem label. Every name and its evidence: [docs/NAMES.md](docs/NAMES.md).

| Milestone | Status | Exit judged on |
|---|---|---|
| M1 Contributable | done | public-build.json ok=True; matched outside their unit: 0 |
| M2 Identified | done | name pass closed: True; unlabelled game functions: 0; review pending: 0 |
| M3 Platform boundary | current | 29/318 platform functions matched; PLATFORM.md present |
| M4 Core | later | 27/141 core functions matched; FORMATS.md missing |
| M5 Gameplay | later | 647/5371 gameplay functions matched |
| M6 Complete | later | 703/5830 game functions matched; check ok=True |
| M7 Documented | later | docs.py check ok=None (never run) |
| M8 Behaviour-verified | not required | last behaviour compare ok=None at never |
| M9 Reverse-engineered | later | names without checked evidence: 0; matches since the last name pass: 11; named types with two layouts: 0 |

The milestones and why they come in this order: [ROADMAP.md](ROADMAP.md).

The same reports are tracked on [ByteMatch](https://bytematch.dev/Harskov/fate-unlimited-codes-jp): the report workflow uploads it on every push (`SLPM_551.08_report`).

## How the source was made, and the AI disclosure

The source here was written function by function and accepted only when the pinned toolchain rebuilt it to match the
original under the project's criterion (the compiled code must be byte for byte the original's). Much of it was drafted with AI assistance (Claude, and the
batch lane's models); every accepted function was rebuilt and compared by the tooling on the maintainer's machine, and
the commit that adds a function carries a credit line naming who wrote it (`Co-Authored-By: Claude <noreply@anthropic.com>`
for the operator's model, `Assisted-by: <model> (batch)` for the batch lane). A name — of a function, a type, a struct member
or a global — is written only after a script has checked each fact it cites against the code (a string, an SDK prototype, a
library symbol, a checked caller, what the matched code does with a member) and every word of the name against those facts;
otherwise the systematic placeholder stays. [docs/NAMES.md](docs/NAMES.md) lists every name with its evidence, so each one can
be checked again. A function marked `// !FAKE:` matches
through an implausible form and is listed as readability debt in [ROADMAP.md](ROADMAP.md).

## Platform: PlayStation 2 (Metrowerks CodeWarrior)

The game is a PS2 executable for the Emotion Engine (a MIPS R5900). The source under `src/` is C (C++ where the original
was) that the game's own compiler, Metrowerks CodeWarrior for PS2 (`mwcps2-3.0.1b151-050317` with `-O4,p`), compiles back to the same machine
code; a function not yet written stays an `INCLUDE_ASM` line that pulls in splat's disassembly of it, split from your own
copy at build time. A function is accepted when its compiled `.text` is byte for byte the original's, and the whole
executable is rebuilt and its loaded image compared after every change.



To work on a function, open the repository folder in [objdiff](https://github.com/encounter/objdiff): `objdiff.json`
pairs every C file with splat's disassembly of the same range. [decomp.me](https://decomp.me) has the same compiler for
trying a single function.

Generated from the match records at every change, never edited by hand: `symbols/<SERIAL>.txt` (every function's name
and address, for Ghidra's `ImportSymbolsScript.py`), `symbols/<SERIAL>.sym` (the same for the PCSX2 debugger) and
`symbols/<SERIAL>.subsystems.tsv` (each function's subsystem label), one set per release at that release's addresses;
`config/<SERIAL>/symbols-evidence.tsv` (the evidence behind every name); [PLATFORM.md](PLATFORM.md) (the SDK functions,
IOP modules, VU microprograms and hardware registers the game uses, and the functions that use them).


## Contributing

See [CONTRIBUTING.md](CONTRIBUTING.md): the layout, the toolchain, the naming rule, the readability lint and what the
maintainer's tooling does with a merged pull request.

## Layout

`src/` the source in the layout the toolchain consumes (one file per unit; a function not yet accepted is a reference
line) · `docs/` the architecture, the subsystem pages, the code map and `NAMES.md` (every name and its evidence) · `config/<SERIAL>/` each release's splat configuration, symbol map, checksums and tool pins · `include/` the shared headers and types · `orig/<SERIAL>/` where your copy of the executable goes (gitignored) · `symbols/` the symbol map with its evidence · `tools/` the contributor copies of the lint and the check ·
`progress/report.json` the progress report.

## License

The source in this repository is dedicated to the public domain under CC0 1.0 Universal (see LICENSE). The game itself is not
covered: nothing of it is here.
