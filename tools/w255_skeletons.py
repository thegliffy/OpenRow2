import csv, json, os, re, collections

os.chdir('/home/gliffy/OpenRow2')

live = json.load(open('agent/live_functions252.json'))
byaddr = {f['addr']: f['name'] for f in live['functions']}
byname = {}
for f in live['functions']:
    byname.setdefault(f['name'], []).append(f['addr'])

rows = [r for r in csv.reader(open('agent/w254_source_files.csv', newline='')) if r and r[0] != 'source_file']
byfile = collections.defaultdict(list)
for f, fn, n in rows:
    byfile[f].append(fn)

# skeleton TUs: >=10 members
tus = {f: fns for f, fns in byfile.items() if len(fns) >= 10}
print("TUs with >=10 members:", len(tus), "total members:", sum(len(v) for v in tus.values()))

# corpus of unnamed bodies for call-graph attach
corpus = []
for ln in open('agent/w233_bodies.jsonl'):
    try:
        d = json.loads(ln)
    except Exception:
        continue
    body = d.get('c') or d.get('body') or ''
    if isinstance(body, dict):
        body = body.get('c', '')
    corpus.append((d.get('a') or d.get('addr'), body))
print("corpus bodies:", len(corpus))

# all live named set for exclusivity check
allnamed = set(byname)
tokre = re.compile(r'[A-Za-z_][A-Za-z0-9_:]{2,}')

# resolve seed spelling -> live addr once, per function
def live_addr(fn):
    addrs = byname.get(fn, [])
    if addrs:
        return addrs[0]
    for alt in ('eON_' + fn, 'eOn_' + fn, fn.replace('eON_', 'eOn_')):
        if alt in byname:
            return byname[alt][0]
    return None

# precompute body token sets once
bodytoks = [(a, set(tokre.findall(b))) for a, b in corpus if b]

attached = collections.defaultdict(list)
for f, fns in tus.items():
    members = {live_addr(fn) for fn in fns}
    members.discard(None)
    # seed spellings map for mention->addr via name set intersected with body tokens
    seeds = set(fns)
    for a, toks in bodytoks:
        if a is None or a in members or not toks:
            continue
        hit = toks & seeds
        ms = {live_addr(nm) for nm in hit}
        ms.discard(None)
        if ms and ms <= members:
            attached[f].append(a)

# emit skeletons
os.makedirs('recovered', exist_ok=True)
for f, fns in sorted(tus.items(), key=lambda kv: -len(kv[1])):
    rel = f.split('eon2-sr2/')[-1]
    outpath = os.path.join('recovered', rel)
    os.makedirs(os.path.dirname(outpath), exist_ok=True)
    lines = []
    lines.append(f"// Recovered source skeleton: {rel}")
    lines.append("// Source path from baked debug strings (seeds/string_refs.csv); members are")
    lines.append("// functions that reference it. Not compiled \u2014 membership ledger only.")
    lines.append("")
    lines.append(f"// === members ({len(fns)}) ===")
    for fn in sorted(fns):
        addrs = byname.get(fn, [])
        if not addrs:
            for alt in ('eON_' + fn, 'eOn_' + fn, fn.replace('eON_', 'eOn_')):
                if alt in byname:
                    addrs = byname[alt]; break
        lines.append(f"//   {fn}  @0x{addrs[0]}" if addrs else f"//   {fn}  @?")
    if attached[f]:
        lines.append("")
        lines.append(f"// === unnamed helpers attached (call-graph exclusive to this TU: {len(attached[f])}) ===")
        for a in sorted(attached[f]):
            lines.append(f"//   FUN_00{a[2:] if a.startswith('00') else a}@{a}")
    open(outpath, 'w').write("\n".join(lines) + "\n")
    print("wrote", outpath, len(fns), "members,", len(attached[f]), "attached")

json.dump({f: attached[f] for f in tus}, open('/tmp/w255_attached.json', 'w'), indent=0)

# comment targets: every member + attached helper, with the relative source path
with open('/tmp/w255_targets.tsv', 'w') as fh:
    for f, fns in tus.items():
        rel = f.split('eon2-sr2/')[-1]
        for fn in fns:
            a = live_addr(fn)
            if a:
                fh.write(f"{a}\t{rel}\n")
        for a in attached[f]:
            fh.write(f"{a}\t{rel}\n")
print("comment targets:", sum(1 for _ in open('/tmp/w255_targets.tsv')))
