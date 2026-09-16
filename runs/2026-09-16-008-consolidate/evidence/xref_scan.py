#!/usr/bin/env python3
"""Ad-hoc xref/string evidence scanner for S8 (run 2026-09-16-008).
Parses asm/*.s into functions, builds a string table from the data .s files, and
reports for each requested function: callers, callees, referenced data symbols,
and the strings each caller references. See FRICTION F-2 (tool-gap)."""
import json, os, re, sys, glob

ASM = "asm"
glab = re.compile(r'^glabel\s+(\S+)')
jal  = re.compile(r'\bjal\s+(\S+)')
sym  = re.compile(r'%(?:hi|lo)\(([A-Za-z_][A-Za-z0-9_]*)\)')
wordline = re.compile(r'^\s*/\*\s*\S+\s+([0-9A-Fa-f]{8})\s+([0-9A-Fa-f]{8})\s*\*/\s*\.word')
byteline = re.compile(r'^\s*/\*\s*\S+\s+([0-9A-Fa-f]{8})\s*\*/\s*\.byte\s+0x([0-9A-Fa-f]{2})')
dlab = re.compile(r'^dlabel\s+(\S+)')

def load_text():
    funcs = {}          # name -> dict(file, calls set, syms set, lines)
    order = []
    for path in sorted(glob.glob(os.path.join(ASM, "*.s"))):
        cur = None
        for line in open(path, errors="replace"):
            m = glab.match(line)
            if m:
                cur = {"name": m.group(1), "file": os.path.basename(path),
                       "calls": set(), "syms": set(), "n": 0}
                funcs[cur["name"]] = cur; order.append(cur["name"]); continue
            if cur is None: continue
            cur["n"] += 1
            j = jal.search(line)
            if j: cur["calls"].add(j.group(1))
            for s in sym.findall(line): cur["syms"].add(s)
    return funcs, order

def load_strings():
    """symbol -> decoded ascii, for data labels whose bytes look like text."""
    out = {}
    for path in sorted(glob.glob(os.path.join(ASM, "data", "*.s"))):
        cur = None; buf = bytearray()
        for line in open(path, errors="replace"):
            m = dlab.match(line)
            if m:
                if cur and buf: out.setdefault(cur, bytes(buf))
                cur = m.group(1); buf = bytearray(); continue
            if cur is None: continue
            w = wordline.match(line)
            if w:
                # the raw column is big-endian text; .word operand is byte-swapped
                buf += bytes.fromhex(w.group(2)); continue
            b = byteline.match(line)
            if b:
                buf += bytes.fromhex(b.group(2)); continue
        if cur and buf: out.setdefault(cur, bytes(buf))
    res = {}
    for k, v in out.items():
        v = v[:96]
        txt = ""
        for ch in v:
            if ch == 0: break
            if 32 <= ch < 127: txt += chr(ch)
            else: txt = ""; break
        if len(txt) >= 4: res[k] = txt
    return res

def strings_in(f, strtab):
    return sorted({strtab[s] for s in f["syms"] if s in strtab})

def main():
    funcs, order = load_text()
    strtab = load_strings()
    callers = {}
    for name, f in funcs.items():
        for c in f["calls"]:
            callers.setdefault(c, set()).add(name)
    targets = sys.argv[1:]
    if not targets:
        json.dump({"functions": len(funcs), "strings": len(strtab)}, sys.stdout, indent=1); return
    for t in targets:
        f = funcs.get(t)
        print(f"### {t}  file={f['file'] if f else '?'}  insns={f['n'] if f else 0}")
        cs = sorted(callers.get(t, []))
        print(f"  callers ({len(cs)}): {', '.join(cs) if cs else 'none in asm (linked C callers not seen)'}")
        if f:
            print(f"  callees: {', '.join(sorted(f['calls'])) or 'none'}")
            print(f"  syms:    {', '.join(sorted(f['syms'])) or 'none'}")
        for c in cs[:8]:
            cf = funcs[c]
            st = strings_in(cf, strtab)
            print(f"    caller {c} [{cf['file']}] calls={len(cf['calls'])} strings={st[:6] if st else '-'}")
        print()

if __name__ == "__main__":
    main()
