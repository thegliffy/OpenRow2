#!/usr/bin/env python3
import subprocess, os, json, csv, collections, time
os.chdir('/home/gliffy/OpenRow2')
MU='/home/gliffy/.hermes/bin/mcp-use'
live={f['addr']:f['name'] for f in json.load(open('agent/live_functions216.json'))['functions']}
named={a:n for a,n in live.items() if not (n.startswith('FUN_') or n.startswith('thunk_'))}
lines=collections.defaultdict(set)
for r in csv.DictReader(open('seeds/string_refs.csv')):
    a=r['function_entry'].strip()
    if a and r['string'].strip(): lines[a].add(r['string'].strip())
own=collections.defaultdict(set)
for r in csv.DictReader(open('seeds/string_refs.csv')): own[r['string'].strip()].add(r['function_entry'].strip())
targets=sorted(named.keys(), key=lambda a:int(a,16))
tierB=[a for a in targets if lines[a]]
print("tierB targets (named with seed strings):",len(tierB),flush=True)
out={}
t0=time.time()
for i,a in enumerate(tierB):
    p=f'decomp/verify/{a}.json'
    if os.path.exists(p) and os.path.getsize(p)>30:
        body=open(p).read()
    else:
        r=subprocess.run([MU,'openrow2','decompile','target='+a],capture_output=True,text=True)
        try: body=json.loads(r.stdout)['c']
        except: body=''
        open(p,'w').write(body)
        time.sleep(0.35)
    have=[s for s in lines[a] if s in body]
    uniq=[s for s in lines[a] if own[s]=={a}]
    if uniq and not any(s in body for s in uniq): status='UNIQ_NOT_IN_BODY'
    elif have: status='OK'
    else: status='NO_HIT'
    out[a]=status
    if (i+1)%250==0:
        json.dump(out,open('agent/verify_full_progress.json','w'))
        print(f"{i+1}/{len(tierB)} {time.time()-t0:.0f}s",flush=True)
json.dump(out,open('agent/verify_full.json','w'))
c=collections.Counter(out.values()); print("FINAL:",dict(c))
print("done")
