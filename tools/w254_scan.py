import csv, collections, re, os

os.chdir('/home/gliffy/OpenRow2')
rows = list(csv.reader(open('seeds/string_refs.csv', newline='')))
rows = [r for r in rows if len(r) >= 3]
print("total string_ref rows:", len(rows))

# rows whose string looks like a source file path
srcpat = re.compile(r'\.(c|cpp|cxx|h|hpp)$', re.I)
srcrefs = [r for r in rows if srcpat.search(r[0])]
print("source-path-string rows:", len(srcrefs))

# group by source file -> named functions (skip FUN_ placeholders)
byfile = collections.defaultdict(set)
for s, fn, addr in srcrefs:
    if fn and not fn.startswith('FUN_'):
        byfile[s].add(fn)
print("source files with >=1 named fn:", len(byfile))
named_total = sum(len(v) for v in byfile.values())
print("named fns tied to a source file:", named_total)

# district prefix stats
def prefix(fn):
    if '::' in fn: return fn.split('::')[0]
    m = re.match(r'^(eON_|eOn_|VPFS_|mixer|waveOut|d3d9device_|OGLC_)', fn)
    return m.group(0) if m else '(other)'
dist = collections.Counter()
for f, fns in byfile.items():
    for fn in fns:
        dist[prefix(fn)] += 1
for p, c in dist.most_common(25):
    print(f"{p:30s} {c}")

# save full mapping
with open('agent/w254_source_files.csv', 'w', newline='') as fh:
    w = csv.writer(fh)
    w.writerow(['source_file', 'function', 'n_funcs_in_file'])
    for f in sorted(byfile):
        for fn in sorted(byfile[f]):
            w.writerow([f, fn, len(byfile[f])])
print("wrote agent/w254_source_files.csv")
