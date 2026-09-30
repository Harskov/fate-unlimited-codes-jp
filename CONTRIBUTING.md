# Contributing

Contributions are welcome: matched functions, names and types backed by evidence, header
clean-ups and fixes.

## Compiler

Pinned: compiler `mwcps2-3.0.1b151-050317` with flags `-O4,p`. Every function is compiled with exactly these; they change
only when the calibration is redone, and this line is updated with them.

## Where to start

The current milestone selects from 312 functions labelled platform (labels platform (ledger)). The smallest 40, which are the easiest place to start:

| Function | Address | Size | Segment |
|---|---|---|---|
| `func_00348DA0` | 0x00348DA0 | 24 | game_01 |
| `func_00349390` | 0x00349390 | 24 | game_01 |
| `func_003494F0` | 0x003494F0 | 24 | game_01 |
| `func_0034DD10` | 0x0034DD10 | 24 | game_01 |
| `func_0034EA20` | 0x0034EA20 | 24 | game_01 |
| `func_00351EF0` | 0x00351EF0 | 24 | game_01 |
| `func_0021F320` | 0x0021F320 | 32 | game_00 |
| `func_0021F370` | 0x0021F370 | 32 | game_00 |
| `func_00220EC0` | 0x00220EC0 | 32 | game_00 |
| `func_002535E0` | 0x002535E0 | 36 | game_00 |
| `func_00355250` | 0x00355250 | 36 | game_02 |
| `func_0021DF20` | 0x0021DF20 | 44 | game_00 |
| `func_0021F340` | 0x0021F340 | 48 | game_00 |
| `func_00220E50` | 0x00220E50 | 52 | game_00 |
| `func_0020A650` | 0x0020A650 | 60 | game_00 |
| `func_00220C90` | 0x00220C90 | 64 | game_00 |
| `func_00255550` | 0x00255550 | 64 | game_00 |
| `func_0015A7C0` | 0x0015A7C0 | 68 | game_00 |
| `func_0021FC50` | 0x0021FC50 | 68 | game_00 |
| `func_0021FCA0` | 0x0021FCA0 | 68 | game_00 |
| `func_0021CD70` | 0x0021CD70 | 72 | game_00 |
| `func_00255450` | 0x00255450 | 72 | game_00 |
| `func_0021D5F0` | 0x0021D5F0 | 80 | game_00 |
| `func_0021FC00` | 0x0021FC00 | 80 | game_00 |
| `func_00253590` | 0x00253590 | 80 | game_00 |
| `func_00220670` | 0x00220670 | 84 | game_00 |
| `func_002206D0` | 0x002206D0 | 84 | game_00 |
| `func_00302978` | 0x00302978 | 84 | game_01 |
| `func_00244EB0` | 0x00244EB0 | 88 | game_00 |
| `func_002D5EB0` | 0x002D5EB0 | 88 | game_render |
| `func_002202F0` | 0x002202F0 | 92 | game_00 |
| `func_00302888` | 0x00302888 | 92 | game_01 |
| `func_0020BDF0` | 0x0020BDF0 | 96 | game_00 |
| `func_0015AF20` | 0x0015AF20 | 100 | game_00 |
| `func_002F6F10` | 0x002F6F10 | 100 | game_01 |
| `func_002D61B8` | 0x002D61B8 | 104 | game_render |
| `func_0030B350` | 0x0030B350 | 104 | game_01 |
| `func_00252A60` | 0x00252A60 | 108 | game_00 |
| `func_0020A3D0` | 0x0020A3D0 | 112 | game_00 |
| `func_0019ADE0` | 0x0019ADE0 | 116 | game_00 |

Build the repository first (README, "Building"); objdiff then shows each file's diff
against the original.

## A matched function

- The object compiled from your C has `.text` byte-identical to the original function
  (objdiff score 100). A 99 % is work in progress: open an issue or a draft pull request
  with the score and a decomp.me link instead.
- Put the C in place of the function's `INCLUDE_ASM(...)` line when a translation unit under
  `src/<segment>/` holds it (`unit_<ADDR>.c`, or `.cpp` for C++); a function no unit file
  holds yet goes in a new `src/<segment>/<function>.c`, and the maintainer's next run moves it
  into its unit. Use the shared types in `include/` (`common.h`, `types.h`) instead of
  re-declaring them.
- Write it the way a person would have: no second struct laid over an element address, no
  byte arithmetic to reach a field, no `*(int *)&x`, no inline asm, no `do { } while (0)`,
  no permuter output left as it came out, no comments about how the match was found.
  `python3 tools/lint_c.py --repo . <file>` exits 0 on it. The exceptions are the four
  instruction forms the compiler has no other source form for: a VU0 macro-mode block
  (`asm { }` of `lqc2`/`v*`/`sqc2` over `register` locals, with the `mfc1`/`qmtc2` pair
  that moves a float into it, and a `nop` or `.set noreorder`/`.set reorder` where the
  original has no hazard nop); a VU0 function that returns a float, written whole as a
  CodeWarrior asm function (`asm f32 f(...) { ... qmfc2 a0, vf2 / jr ra / mtc1 a0, f0 }`,
  because a block's `mtc1` never reaches the return's delay slot); an inline float-to-int
  conversion (`asm { cvt.w.s f, f / mfc1 i, f }`); and the SDK's
  `ExitHandler()`/`EI()`/`DI()` (`asm { sync / ei }`). The lint reports them as advisory,
  and a comment above the block names the operation.
- Format with the repository's `.clang-format`.

## Names and types

A name or a struct field is added only with evidence: a referenced string, an SDK call
pattern, a cross-reference from a named caller. Say what the evidence is in the pull
request and in a short comment above the function. Without evidence the systematic name
(`func_00123456`, `D_0052ABCD`, `unk_XX`) stays; a placeholder is better than a wrong name.

## How a pull request is handled

`ninja` runs the whole-executable check on your machine before you open the pull request.
The maintainer's pipeline then rebuilds every function in the pull request with the pinned
compiler, records the result, and rebuilds and compares the whole executable. A pull
request is merged as a match when both are byte-identical. `README.md`, `CONTRIBUTING.md`,
`ROADMAP.md`, `PLATFORM.md`, `symbols/` and `progress/report.json` are generated from the
pipeline's records, so please do not edit them by hand; open an issue if something in them
is wrong.

## AI-assisted contributions

This repository is itself produced with language models (see the README). Contributions
made with AI assistance are welcome on the same terms as any other: say so in the pull
request, name the tool, and make sure you can explain every change. The byte match is the
gate; readable C and evidence-backed names are what make it done.

## Two markers you may see

A `register` local kept only so the compiler allocates the way the original did, and a
body marked `// !FAKE: <what a programmer would have written>` — C kept only because it
matches — are readability debt, not finished source. `tools/lint_c.py` reports both
(`register-pin`, `fake-body`), the maintainer's pipeline publishes their counts in
`ROADMAP.md`, and a pull request that replaces one with plain C that still matches is
welcome. A `// !FAKE:` without its reason fails the lint.

## Never commit

The disc, the executable, extracted files, disassembly, compiled objects or build
output. The `.gitignore` refuses most of it; please do not force it in.
