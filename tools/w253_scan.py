import json, collections, csv

live = json.load(open('/home/gliffy/OpenRow2/agent/live_functions252.json'))
byaddr = {f['addr']: f['name'] for f in live['functions']}

# string refs csv: string,function_name,function_entry
rows = list(csv.reader(open('/home/gliffy/OpenRow2/seeds/string_refs.csv', newline='')))
clusters = collections.defaultdict(set)
for r in rows:
    if len(r) < 3:
        continue
    clusters[r[0]].add(r[2])

# the Open-lead shared strings from README + note scans
keys = [k for k in clusters if any(p in k for p in ('GetSampleFunction', 'SetForcedOpenGLDisplay', 'clipboard', 'Clipboard', 'HGLOBAL', 'GlobalAlloc', 'Cursor', 'cursor', 'DrawPrimitive', 'VirtualFree', 'DirectSoundNotify', 'DirectSoundCapture8', 'DirectInputEffect'))]
for k in sorted(set(keys)):
    funs = sorted(a for a in clusters[k] if a.startswith('FUN_') or a in byaddr)
    unnamed = [a for a in clusters[k] if byaddr.get(a, '').startswith('FUN_')]
    if unnamed:
        print(f"SHARED STRING with FUN_ referrer: {k[:70]}")
        for a in sorted(clusters[k]):
            print(f"    {a} = {byaddr.get(a, '?')}")
