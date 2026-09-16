#!/usr/bin/env python3
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import xref_scan as xs
funcs, _ = xs.load_text()
strtab = xs.load_strings()
for t in sys.argv[1:]:
    f = funcs.get(t)
    if not f: print(f"### {t}: not in asm (linked C)"); continue
    s = sorted({strtab[x] for x in f["syms"] if x in strtab})
    print(f"### {t} [{f['file']}] insns={f['n']}")
    print(f"  calls: {', '.join(sorted(f['calls']))}")
    print(f"  strings: {s}")
    ds = sorted(x for x in f["syms"] if x not in strtab)
    print(f"  syms: {', '.join(ds[:40])}")
    print()
