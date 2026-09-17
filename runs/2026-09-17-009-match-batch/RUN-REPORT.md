# Run 2026-09-17-009-match-batch — match-batch

- Target: fate-unlimited-codes-jp
- Step: match-batch (S6) — proposed by next_step.py
- Started: 2026-09-17T04:07:25Z · Finished: 2026-09-17T04:16:59Z
- Commit: the commit whose message starts `run 2026-09-17-009-match-batch:` (git log --grep)

## What changed

- Ledger: matched 30 → 41 (+11), wip 8 → 9 (+1), asm 5857 → 5845 (-12).
- Eleven of the twelve batch functions matched byte-identical; ten of them on the first attempt. The batch was dominated by small accessors around the 0x18-stride table at D_0051D890 (func_001A35D0, func_001A3560) and by leaf arithmetic (func_001A36A0, func_00175B80, func_001A27C0, func_001A2930), which the existing header and K1 section 6 item 9 covered directly. Two functions needed real work. func_001A3600 went 96.0 -> 99.75 -> 99.75 -> 100: the first edit was the known incomplete-type trick for an absolutely addressed global (extern int D_005239C8[] rather than extern int D_005239C8, K1 section 3), the second was declaration order swapping the two loop constants between a1 and a2, and the last was the operand order of the three-operand mult, which only came out right when the quotient sum was assigned to its own local instead of written inline - filed as F-1 because K1 section 6 does not cover it. func_00176140 is the one parked function and the substantive finding of this run: it is a dense switch on kind 34..42 dispatched through jtbl_004FEA50, and the C reproduces every instruction word the ELF holds (attempt-1.o.text.bin carries 27002010 and the 1C/18/14/10/0C/08/04-000010 branch words exactly as target.s quotes them), but mwcc necessarily generates its own local jump table in the object's .rodata, so the two lui/addiu rows carry a different relocation symbol and objdiff stops at 99.77. That ceiling is structural, not a defect in the C; closing it needs the rodata region holding jtbl_004FEA50 to be produced by this translation unit, which is an S7 data-migrate question and is filed as F-3. While diagnosing it, F-2 turned up: match.py prepare assembles target.s with the jlabel macro marking the jump-table targets global, so ee-as leaves 0xffff PC16 placeholders in target.o and objdiff reports six branch rows as differences that do not exist in the ELF - a future run reading those rows at face value would rewrite correct C. I judge the batch decisive on the ten first-attempt matches: the table header and the exemplars are carrying this segment well, and the parked function is the first of a class (compiler-generated switch tables) that the project has no procedure for yet.

## Build check

`check.json`: ok = **True**, checked 2026-09-17T04:16:43Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

| function | addr | size | attempt scores | status | best |
|---|---|---|---|---|---|
| func_001A36A0 | 0x001A36A0 | 36 | 100 -> 100 | matched | 100 |
| func_001A3600 | 0x001A3600 | 160 | 96 -> 99.75 -> 99.75 -> 100 -> 100 | matched | 100 |
| func_001A35D0 | 0x001A35D0 | 36 | 100 -> 100 | matched | 100 |
| func_001A3560 | 0x001A3560 | 32 | 100 -> 100 | matched | 100 |
| func_00176140 | 0x00176140 | 176 | 99.7727 | wip | 99.7727 |
| func_001A2E20 | 0x001A2E20 | 60 | 100 -> 100 | matched | 100 |
| func_00175B80 | 0x00175B80 | 20 | 100 -> 100 | matched | 100 |
| func_00175B10 | 0x00175B10 | 100 | 100 -> 100 | matched | 100 |
| func_0019A9A0 | 0x0019A9A0 | 132 | 100 -> 100 | matched | 100 |
| func_0019AA30 | 0x0019AA30 | 48 | 100 -> 100 | matched | 100 |
| func_001A2930 | 0x001A2930 | 8 | 100 -> 100 | matched | 100 |
| func_001A27C0 | 0x001A27C0 | 16 | 100 -> 100 | matched | 100 |

## Proposed next step

S6 match-batch — 5854 game function(s) still asm/wip; batch size 12
- note: external lane: 2 runner batch(es), 4 matched, $0.24 in state/runner-steps.jsonl (never a step of a run)

## Friction filed

3 entries (major 2, papercut 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [papercut/doc-gap] three-operand mult rs/rt order not covered by K1
- F-2 [major/false-signal] target.o keeps unresolved PC16 relocations on jlabel branch targets, so objdiff rows show false branch diffs
- F-3 [major/doctrine-gap] no procedure for a dense switch whose jump table lives in a foreign rodata segment
