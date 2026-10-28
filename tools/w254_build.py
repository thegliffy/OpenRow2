import csv, collections, re, os

os.chdir('/home/gliffy/OpenRow2')
rows = list(csv.reader(open('agent/w254_source_files.csv', newline='')))
rows = rows[1:]

byfile = collections.defaultdict(list)
for f, fn, n in rows:
    byfile[f].append(fn)

SHIM = re.compile(r'^(eON_|eOn_|VPFS_|mixer|waveOut|waveIn|OGLC_|d3d9device_|Dsp|D3D9)')

# files in shim districts, sorted by function count
shimfiles = []
for f, fns in byfile.items():
    shimfn = [x for x in fns if SHIM.match(x)]
    if shimfn:
        shimfiles.append((f, sorted(shimfn), sorted(set(fns) - set(shimfn))))
shimfiles.sort(key=lambda t: -len(t[1]))

out = []
out.append("# Wave 254 — source recovery, named shim districts")
out.append("")
out.append("Start of the source-recovery tier (post-park lane). Evidence basis:")
out.append("`seeds/string_refs.csv` rows where the string is a real source-file path")
out.append("(\u00b7c/\u00b7cpp/\u00b7h) \u2014 2,052 rows, 132 distinct files, 776 named functions.")
out.append("Full machine-readable mapping: `agent/w254_source_files.csv`.")
out.append("")
out.append("Below: shim-district files (eON_*/VPFS_*/mixer*/waveOut*/OGLC_*/d3d9device_*/Dsp*)")
out.append("with the named functions each source file evidences. No new renames \u2014 this")
out.append("recovers file membership for districts already named through prior waves.")
out.append("")
for f, shimfn, other in shimfiles:
    out.append(f"## {f} ({len(shimfn)} shim fns{', +' + str(len(other)) + ' other' if other else ''})")
    for fn in shimfn:
        out.append(f"- {fn}")
    if other:
        out.append("")
        out.append("Other named fns in same file: " + ", ".join(other))
    out.append("")
open('tools/decomp_notes_wave254_source_recovery_shim.md', 'w').write("\n".join(out) + "\n")
print(f"shim files with evidence: {len(shimfiles)}")
print(f"total shim fns tied: {sum(len(s) for _, s, _ in shimfiles)}")
