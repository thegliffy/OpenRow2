#!/usr/bin/env python3
"""Wave 234: source-graph closure (REV + FWD) across all three vendor clones at pinned tags."""
import subprocess, re, collections, json, time, os
W='/home/gliffy/OpenRow2/vendor'
MCP='/home/gliffy/.hermes/bin/mcp-use'
def tree(tag,cwd): return subprocess.run(['git','ls-tree','-r','--name-only',tag],capture_output=True,cwd=cwd).stdout.decode().split()
def show(tag,p,cwd): return subprocess.run(['git','show',f'{tag}:{p}'],capture_output=True,cwd=cwd).stdout.decode('utf-8','replace')
DEF=re.compile(r'^([a-z_][a-z0-9_]*\*?\s+)*([a-z_][a-z0-9_]+)\s*\(([^)]*)\)\s*\r?\n(?:[ \t]*[a-zA-Z_].*;\s*\r?\n)*\{', re.M)
def parse(root,tag,paths):
    out={}
    for p in paths:
        t=show(tag,p,root)
        for m in DEF.finditer(t):
            fn=m.group(2); i=t.find('{',m.end()-1)
            depth=0;j=i
            while j<len(t):
                if t[j]=='{':depth+=1
                elif t[j]=='}':
                    depth-=1
                    if depth==0:break
                j+=1
            body=t[i:j+1]
            calls={c for c in re.findall(r'\b([a-z_][a-z0-9_]{3,})\s*\(', body)}
            out.setdefault(fn,[]).append({'path':p,'body':body,'calls':calls})
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
    e,n=line.rstrip('\r\n').split(',',1); led.setdefault(n,e)
def mcp(tool,**kw):
    r=subprocess.run([MCP,'openrow2',tool]+[f'{k}={v}' for k,v in kw.items()],capture_output=True,text=True,timeout=120)
    try: return json.loads(r.stdout)
    except: return {}
def body_of(addr):
    d=mcp('decompile',target=addr)
    return (d.get('content',[{}])[0].get('text','') if 'content' in d else json.dumps(d))
CACHE={}
hits=[]
used_names={n for n in led if not n.startswith('FUN_')}
parsed_used={k for k in SRC if k[1] in used_names}
parsed_unused={k for k in SRC if k[1] not in used_names}
print('parsed:', len(SRC), 'anchors(used):', len(parsed_used), 'unused:', len(parsed_unused))
cache_f='/tmp/w234_anchbodies.json'
CACHE=json.load(open(cache_f)) if os.path.exists(cache_f) else CACHE
# REV: anchors with exactly one parsed source caller (unused name)
rev=collections.defaultdict(set)
for k in SRC:
    for c in SRC[k]['calls']:
        if (k[0],c) in SRC and k in parsed_used and (k[0],c) in parsed_unused:
            rev[(k[0],c)].add(k)
n=0
for cand,callers in rev.items():
    if len(callers)!=1: continue
    anchor=callers.pop()
    ad=led[anchor[1]]
    d=mcp('callers',target=ad); time.sleep(0.3); n+=1
    cls=[c['caller'] for c in d.get('callers',[]) if c['caller'] and c['caller'].startswith('FUN_')]
    if len(d.get('callers',[]))==1 and len(cls)==1:
        hits.append(('REV',cand[0],cand[1],cls[0],anchor))
print('rev queried:',n)
# FWD: anchors whose source callees include exactly one unused-name parsed fn AND binary body calls exactly one FUN_
m=0
for anchor in sorted(parsed_used):
    vend=anchor[0]
    ucs={c for c in SRC[anchor]['calls'] if (vend,c) in parsed_unused}
    if len(ucs)!=1: continue
    ad=led[anchor[1]]
    if ad not in CACHE:
        CACHE[ad]=body_of(ad); time.sleep(0.3); m+=1
    b=CACHE[ad]
    fcalls=sorted({f'FUN_{x.lower()}' for x in re.findall(r'\b(FUN_[0-9a-f]{6,})\s*\(', b)})
    if len(fcalls)==1:
        hits.append(('FWD',vend,list(ucs)[0],fcalls[0],anchor))
json.dump(CACHE,open(cache_f,'w'))
print('fwd queried:',m)
for h in hits: print(h)
json.dump(hits, open('/tmp/w234_hits.json','w'))
print('HITS:', len(hits))
