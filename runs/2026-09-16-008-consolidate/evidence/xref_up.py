#!/usr/bin/env python3
"""Walk up the call graph from a function; report strings referenced at each level."""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import xref_scan as xs

funcs, _ = xs.load_text()
strtab = xs.load_strings()
callers = {}
for name, f in funcs.items():
    for c in f["calls"]:
        callers.setdefault(c, set()).add(name)

def strings_of(n):
    f = funcs.get(n)
    return sorted({strtab[s] for s in f["syms"] if s in strtab}) if f else []

for t in sys.argv[1:]:
    print(f"### {t}")
    seen = {t}; level = [t]
    for d in range(1, 5):
        nxt = []
        for n in level:
            for c in sorted(callers.get(n, [])):
                if c not in seen:
                    seen.add(c); nxt.append(c)
        if not nxt:
            print(f"  depth {d}: no further callers"); break
        shown = ", ".join(nxt[:14]) if len(nxt) <= 14 else f"{len(nxt)} functions"
        print(f"  depth {d}: {shown}")
        for c in nxt:
            s = strings_of(c)
            if s: print(f"      {c} strings: {s[:8]}")
        level = nxt
        if len(level) > 150:
            print("      (fan-out too wide, stopping)"); break
    print()
