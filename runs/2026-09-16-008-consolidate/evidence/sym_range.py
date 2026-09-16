import sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import xref_scan as xs
funcs, _ = xs.load_text()
lo, hi = int(sys.argv[1], 16), int(sys.argv[2], 16)
hits = {}
for n, f in funcs.items():
    for s in f["syms"]:
        m = re.match(r'^[A-Za-z]+_([0-9A-Fa-f]{8})$', s)
        if m and lo <= int(m.group(1), 16) <= hi:
            hits.setdefault(s, set()).add(n)
for s in sorted(hits):
    print(s, "->", ", ".join(sorted(hits[s])))
