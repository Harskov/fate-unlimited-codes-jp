# Run 2026-09-19-013-ghidra-hints — ghidra-hints

- Target: fate-unlimited-codes-jp
- Step: ghidra-hints (S5) — **override**: named in chat
- Started: 2026-09-19T04:19:44Z · Finished: 2026-09-19T04:35:54Z
- Commit: the commit whose message starts `run 2026-09-19-013-ghidra-hints:` (git log --grep)

## What changed

- Ledger: no status changes.
- S5 is the first step that leaves the operator's VM, and the two machines do not have the same network: the cloud sandbox has the JDK 21 that ASSUMPTION A4 only hoped for (21.0.10, pre-installed - A4 holds) but its egress policy refuses github.com, while the VM reaches github.com and has no JDK 21. The step therefore ran split across both: the 543 MB Ghidra 12.1.3 archive and the 0.9 MB ghidra-emotionengine-reloaded v2.1.37 extension were downloaded on the VM, split into 190 MB parts for the staging cap, reassembled and sha256-verified in the sandbox, analysed there (111 s of auto-analysis, language r5900:LE:32:default, 1 decompile failure out of 7123), and the 37 MB result came back as a 3.2 MB tarball. The decisive judgment of the run is not the export but where it may live: K3 §8 says to commit reference/ghidra/, and remediation 12 had already gitignored reference/xrefs-index.json and naming-census.json because they hold decoded game strings lifted from the ELF. The Ghidra exports are that same class and more of it - 7122 machine-lifted C files, 10098 decoded strings, a 142747-edge xref graph - so they are gitignored (reference/ghidra/* with !reference/ghidra/MANIFEST.json, added to this target and to templates/target-repo/.gitignore) and MANIFEST.json is the committed record, carrying the Ghidra and extension versions, both archive sha256s, the ELF sha1 (825b867e..., matching config/target.json) and the counts. Re-running S5 regenerates the rest. The hint set covers the target well: 7251 of the 8234 ledger entries are function starts to Ghidra too, 7110 have decompiler C, and 93 of the 94 matched functions have a hint - so S8 naming has machine-checkable evidence for the first time, where run 008's census could only report 0 of N. The coverage table also ranks the unmatched functions by incoming calls, which is the S6 batch-selection use K3 §8 names: func_0015D130 (996 calls), func_002235A0 (833), func_001D4E60 (783) are the densest. Two gaps the next remediation round should close: the export script does not exist in the toolkit (169 lines of ExportHints.java written from scratch this run, left in the run folder), and neither does the two-machine transfer procedure.

## Build check

`check.json`: ok = **True**, checked 2026-09-19T04:35:46Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

n/a

## Proposed next step

S8 consolidate — 31 matches since the last consolidate (threshold 25)
- note: external lane: 17 runner batch(es), 33 matched, $1.09 in state/runner-steps.jsonl (never a step of a run)

## Friction filed

4 entries (major 3, minor 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [major/environment] github.com blocked by egress policy in the cloud sandbox (S5's designated lane)
- F-2 [major/doctrine-gap] K3 §8 says commit the Ghidra exports; publication hygiene forbids them in a public repo
- F-3 [major/tool-gap] S5 has no export script and no transfer procedure in the toolkit
- F-4 [minor/toolchain-drift] DefinedDataIterator.definedStrings does not exist in Ghidra 12.1.3
