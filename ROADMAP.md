# Roadmap — Fate/Unlimited Codes (Japan)

The end goal is recompilation, which needs a complete matching decompilation. Until the decompilation is complete, the project is useful through what it explains and through how easily others can join, so the milestones are ordered by what helps other people soonest and by what a recompilation needs first. Each has an exit that is a file or a record, not a judgment. Generated from `config/milestones.json` and the match records; never edited by hand.

| # | Milestone | Status | Why here | Exit |
|---|---|---|---|---|
| M1 | Contributable | done | Nobody can help until they can build. | A fresh clone plus the disc builds and ninja passes checksum.sha1 (state/public-build.json, written by public_build.py check); every matched function lives in its translation unit's file. |
| M2 | Identified | done | Needs no compiling. Ghidra and PCSX2 users, modders, translators and every later contributor benefit at once, and it makes the later milestones selectable. | A name-pass step closed complete and every game function carries a subsystem label; the symbol map and symbols-evidence.tsv are published. |
| M3 | Platform boundary | current | The layer a recompilation replaces has to be understood first; it is also what emulator and patch authors ask about. | Every function labelled platform is matched; PLATFORM.md (generated) lists the SDK functions used, IRX modules, VU microprograms, DMA channels and the inline-asm and u128 sites. |
| M4 | Core | pending | Modders and translators need file formats and text, and a recompilation needs asset loading early. | Every function labelled core is matched; its structs sit in shared headers and FORMATS.md (generated from header comments) covers each format with evidence. |
| M5 | Gameplay | pending | The bulk of the work, in an order that keeps each subsystem whole. | Every function labelled gameplay/<subsystem> is matched, subsystem by subsystem. |
| M6 | Complete | pending | The precondition for the recompilation phase, which is a separate decision. | Bytes matched is 100 % and build/check.json is green. |

## M1 Contributable

The public repository builds from a clean clone, uses the translation-unit layout, and ships objdiff.json.

Now: public build ok (translation-unit, 2026-09-30T20:58:45Z); 0 matched function(s) still in per-function files; units map present.

## M2 Identified

SDK library functions named by signature, a whole-program naming pass run, every game function labelled with its subsystem, a public symbol map exported.

Now: 2 complete name-pass run(s); 5831 of 5831 game functions labelled.

## M3 Platform boundary

The game's wrappers over the SDK and hardware matched and typed: GS/DMA/VIF packet building, VU0 macro mode and COP2, VU1 microprogram uploads, CD and file streaming, pad, memory card, sound, IOP RPC.

Now: 6 of 318 function(s) labelled platform matched (504 of 404876 bytes); PLATFORM.md present.

## M4 Core

Boot and main loop, the scene or state machine, memory allocators, the file and archive loader, decompression, text and font.

Now: 13 of 142 function(s) labelled core matched (384 of 26576 bytes); FORMATS.md missing.

## M5 Gameplay

Gameplay subsystem by subsystem, most-called first, with data migrated alongside.

Now: 188 of 5371 function(s) labelled gameplay matched (10232 of 1809332 bytes).

## M6 Complete

Every game function matched and the data migrated.

Now: 11120 of 2240784 game bytes matched; check ok.

## Bank rate by function size

2,780 of 560,196 game-code instruction words are matched. Matching gets harder with size; the table says where the project stands on that curve.

| Size (instructions) | Functions | Matched | Bank rate |
|---|---|---|---|
| 0-50 | 3595 | 204 | 5.7 % |
| 51-120 | 1127 | 1 | 0.1 % |
| 121-200 | 435 | 2 | 0.5 % |
| >200 | 674 | 0 | 0.0 % |

Pool realization — of the instructions a match batch drew, the share it banked: 100.0 %, 92.7 %, 91.9 %, 31.1 %, 38.9 % over the last 5 batches (latest 2026-09-30).

Readability debt: 0 matched function(s) keep a `register` pin and 0 carry a `// !FAKE:` body (see CONTRIBUTING.md); a pull request that replaces one with plain C that still matches is welcome.

