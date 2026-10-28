import csv, json, os, subprocess, sys, time

os.chdir('/home/gliffy/OpenRow2')
MU = '/home/gliffy/.hermes/bin/mcp-use'

live = json.load(open('agent/live_functions252.json'))
byname = {}
for f in live['functions']:
    byname.setdefault(f['name'], []).append(f['addr'])

rows = [r for r in csv.reader(open('agent/w254_source_files.csv', newline='')) if r and r[0] != 'source_file']
import re as _re
_srcpat = _re.compile(r'\.(c|cpp|cxx|h|hpp)$', _re.I)
seedaddr = {}
for r in csv.reader(open('seeds/string_refs.csv', newline='')):
    if len(r) >= 3 and _srcpat.search(r[0]):
        seedaddr.setdefault(r[1], r[2])
byfile = {}
for f, fn, n in rows:
    byfile.setdefault(f, []).append(fn)

att = json.load(open('/tmp/w255_attached.json'))

# corpus bodies for unnamed helpers
corpus = {}
for ln in open('agent/w233_bodies.jsonl'):
    try:
        d = json.loads(ln)
        inner = json.loads(d['c']) if isinstance(d.get('c'), str) else d.get('c')
        if isinstance(inner, dict) and inner.get('c'):
            corpus[d['addr'].lstrip('0').rjust(8,'0')] = inner['c']
    except Exception:
        pass

# hot TUs validated live in wave 257
HOT = ['synchronisationPrimitives.cpp','mem_vm.cpp','tinyxml.cpp','tinyxmlparser.cpp',
       'direct3ddevice9imp.cpp','vpfs.cpp','vpfsdb.cpp','winsock.cpp']

def live_addr(fn):
    addrs = byname.get(fn, [])
    if addrs: return addrs[0]
    for alt in ('eON_' + fn, 'eOn_' + fn, fn.replace('eON_', 'eOn_')):
        if alt in byname: return byname[alt][0]
    return seedaddr.get(fn)

def decompile(a):
    for attempt in range(3):
        try:
            out = subprocess.run([MU, 'openrow2', 'decompile', f'target={a}'],
                                 capture_output=True, text=True, timeout=120)
            j = json.loads(out.stdout)
            if j.get('c'): return j['c']
        except Exception as e:
            pass
        time.sleep(2)
    return None

cache_f = '/tmp/w258_bodies.json'
cache = json.load(open(cache_f)) if os.path.exists(cache_f) else {}

tus = {f: fns for f, fns in byfile.items() if any(f.endswith(h) for h in HOT)}
total = sum(len(v) for v in tus.values())
print(f"hot TUs: {len(tus)}, named members: {total}, corpus bodies: {len(corpus)}")

done = 0
for f, fns in sorted(tus.items(), key=lambda kv: -len(kv[1])):
    rel = f.split('eon2-sr2/')[-1]
    lines = []
    lines.append(f"// Recovered source: {rel}")
    lines.append("// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile")
    lines.append("// for call-graph-attached unnamed helpers. Not compiled — recovery draft.")
    lines.append("")
    for fn in sorted(fns):
        a = live_addr(fn)
        body = None
        if a:
            key = a.lstrip('0').rjust(8,'0')
            if key in cache:
                body = cache[key]
            else:
                body = decompile(key)
                if body: cache[key] = body
        lines.append(f"// --- {fn} @0x{a or '?'} ---")
        if body:
            lines.append(body.strip('\n'))
        else:
            lines.append(f"// (decompile unavailable for 0x{a})")
        lines.append("")
    for a in sorted(att.get(f, [])):
        key = a.lstrip('0').rjust(8,'0')
        lines.append(f"// --- attached helper FUN_00{key[2:]} @0x{a} (call-graph exclusive to this TU) ---")
        if key in corpus:
            lines.append(corpus[key].strip('\n'))
        else:
            lines.append("// (no corpus body)")
        lines.append("")
    json.dump(cache, open(cache_f, 'w'))
    open(os.path.join('recovered', rel), 'w').write("\n".join(lines) + "\n")
    done += len(fns)
    nb = sum(1 for fn in fns if live_addr(fn) and live_addr(fn).lstrip('0').rjust(8,'0') in cache)
    print(f"wrote recovered/{rel}: {len(fns)} members ({nb} bodies), {len(att.get(f,[]))} attached")
print("DONE")
