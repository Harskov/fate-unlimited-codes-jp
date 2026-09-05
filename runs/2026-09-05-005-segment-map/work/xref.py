import re, json, sys, collections
asm='targets/fate-unlimited-codes-jp/asm/main.s'
fre=re.compile(r'^glabel (func_[0-9A-F]{8})')
ere=re.compile(r'^endlabel ')
dre=re.compile(r'%(?:hi|lo|gp_rel)\((D_[0-9A-F]{8}|func_[0-9A-F]{8})\)')
jre=re.compile(r'^\s*/\*[^*]*\*/\s+jal\s+(func_[0-9A-F]{8})')
cur=None
refs=collections.defaultdict(set)     # func -> set of data addrs
calls=collections.defaultdict(set)    # func -> set of callee addrs
callers=collections.defaultdict(set)  # callee -> callers
order=[]
for line in open(asm, errors='replace'):
    if line.startswith('glabel func_'):
        m=fre.match(line); cur=m.group(1); order.append(cur); continue
    if line.startswith('endlabel'):
        cur=None; continue
    if cur is None: continue
    m=jre.match(line)
    if m:
        calls[cur].add(m.group(1)); callers[m.group(1)].add(cur)
    for m in dre.finditer(line):
        s=m.group(1)
        if s.startswith('D_'): refs[cur].add(int(s[2:],16))
        else:
            calls[cur].add(s); callers[s].add(cur)
out={'order':order,
     'refs':{k:sorted(v) for k,v in refs.items()},
     'calls':{k:sorted(v) for k,v in calls.items()},
     'callers':{k:sorted(v) for k,v in callers.items()}}
json.dump(out, open('targets/fate-unlimited-codes-jp/runs/2026-09-05-005-segment-map/work/xref.json','w'))
print('funcs',len(order),'with refs',len(refs),'with calls',len(calls))
