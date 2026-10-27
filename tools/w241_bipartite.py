#!/usr/bin/env python3
"""Wave 241: bipartite call-set matching — parsed vendor source fn (unused name) whose complete
call token set (libc included, all source callees ledger-resolvable) equals exactly one unnamed
binary body's call token set, with >=1 ledger-vendor anchor call. All hits for hand-read."""
import subprocess, re, collections, json, os
W='/home/gliffy/OpenRow2/vendor'
CALL=re.compile(r'\b([a-z_][a-z0-9_]{2,})\s*\(')
CALLB=re.compile(r'\b([a-z_][a-z0-9_]{2,}|FUN_[0-9a-f]{6,}|[a-z_][a-z0-9_]+\[\])\s*\(')
DEF=re.compile(r'^([a-z_][a-z0-9_]*\*?\s+)*([a-z_][a-z0-9_]+)\s*\(([^)]*)\)\s*\r?\n(?:[ \t]*[a-zA-Z_].*;\s*\r?\n)*\{', re.M)
DEFPF=re.compile(r'^PNG_FUNCTION\([^,]+,\s*\n?([a-z_][a-z0-9_]+)\s*,\s*\(([^)]*)\)[^)]*\)\s*\r?\n(?:[ \t]*[a-zA-Z_].*;\s*\r?\n)*\{', re.M|re.S)
def tree(tag,cwd): return subprocess.run(['git','ls-tree','-r','--name-only',tag],capture_output=True,cwd=cwd).stdout.decode().split()
def show(tag,p,cwd): return subprocess.run(['git','show',f'{tag}:{p}'],capture_output=True,cwd=cwd).stdout.decode('utf-8','replace')
def parse(root,tag,paths):
    out={}
    for p in paths:
        t=show(tag,p,root)
        ms=[(m.group(2),m.end()) for m in DEF.finditer(t)]+[(m.group(1),m.end()) for m in DEFPF.finditer(t)]
        for fn,end in ms:
            i=t.find('{',end-1);depth=0;j=i
            while j<len(t):
                if t[j]=='{':depth+=1
                elif t[j]=='}':
                    depth-=1
                    if depth==0:break
                j+=1
            body=t[i:j+1]
            calls={c for c in CALL.findall(body)}
            out.setdefault(fn,[]).append({'path':p,'body':body,'calls':calls,'multi':False})
    for v in out.values():
        if len(v)>1:
            for x in v: x['multi']=True
    return {k:v[0] for k,v in out.items() if len(v)==1}
SRC={}
for root,tag,paths in [
    (W+'/libpng','libpng-1.6.16-signed',[p for p in tree('libpng-1.6.16-signed',W+'/libpng') if '/' not in p and p.endswith('.c')]),
    (W+'/zlib','v1.2.3.4',[p for p in tree('v1.2.3.4',W+'/zlib') if '/' not in p and p.endswith('.c')]),
    (W+'/gcc','releases/gcc-4.3.4',[p for p in tree('releases/gcc-4.3.4',W+'/gcc') if p.startswith(('libstdc++-v3/src/','libstdc++-v3/libsupc++/')) and p.endswith(('.cc','.cpp'))]),
]:
    for fn,v in parse(root,tag,paths).items():
        SRC.setdefault((os.path.basename(root),fn),v)
led={}
for line in open('/home/gliffy/OpenRow2/seeds/functions.csv'):
    parts=line.rstrip('\r\n').split(',',1)
    if len(parts)==2 and not parts[1].startswith('FUN_'): led[parts[1]]=parts[0]
bodies={}
for f in ['/home/gliffy/OpenRow2/agent/w233_bodies.jsonl','/tmp/w234_anchbodies.json','/tmp/w235_bodies.json']:
    if not os.path.exists(f): continue
    if f.endswith('jsonl'):
        for line in open(f):
            j=json.loads(line)
            c=j.get('c')
            if isinstance(c,str) and c.strip().startswith('{'):
                try: c=json.loads(c).get('c','')
                except: pass
            bodies[j['addr']]=c or ''
    else:
        d=json.load(open(f))
        for a,c in d.items():
            try: c=json.loads(c).get('c',c)
            except: pass
            bodies[a]=c
# restrict bodies to unnamed
live=json.load(open('/home/gliffy/OpenRow2/agent/live_functions235.json'))
funcs=live['functions'] if isinstance(live,dict) else live
liveaddr={f['addr'] for f in funcs if f['name'].startswith('FUN_')}
bodies={a:c for a,c in bodies.items() if a in liveaddr and c}
print('src parsed:',len(SRC),'ledger names:',len(led),'unnamed bodies:',len(bodies))
bcalls={a:sorted(set(CALLB.findall(c))) for a,c in bodies.items()}
hits=[]
for k,v in SRC.items():
    if k[1] in led: continue
    sig=v['calls']
    if not sig: continue
    if not (sig & set(led)): continue  # need >=1 anchor call
    match=[a for a,cs in bcalls.items() if set(cs)==sig]
    if len(match)==1:
        hits.append((k[0],k[1],match[0],sorted(sig)))
print('HITS:',len(hits))
for h in hits: print(h)
json.dump(hits,open('/tmp/w241_hits.json','w'))
