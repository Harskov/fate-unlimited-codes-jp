#!/usr/bin/env python3
"""For each data symbol given, list the functions that reference it and any strings those functions also reference."""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import xref_scan as xs
funcs, _ = xs.load_text()
strtab = xs.load_strings()
for target in sys.argv[1:]:
    users = [n for n, f in funcs.items() if target in f["syms"]]
    print(f"### {target}: {len(users)} referencing function(s) in asm")
    for n in sorted(users):
        f = funcs[n]
        s = sorted({strtab[x] for x in f["syms"] if x in strtab})
        print(f"   {n} [{f['file']}] insns={f['n']} calls={len(f['calls'])}" + (f"  STRINGS: {s[:8]}" if s else ""))
    print()
