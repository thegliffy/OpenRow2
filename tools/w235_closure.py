#!/usr/bin/env python3
"""Wave 235: closure iteration. FWD (fixed gate, all anchors) + REV (fixed: unique unused-name source caller, binary callers of anchor == exactly one unnamed)."""
import subprocess, re, collections, json, time, os, sys
W='/home/gliffy/OpenRow2/vendor'
MCP='/home/gliffy/.hermes/bin/mcp-use'
REJECT={('libpng','png_flush'),('libpng','png_set_gamma_fixed'),('libpng','check_location'),('libpng','png_inflate_claim')}
def tree(tag,cwd): return subprocess.run(['git','ls-tree','-r','--name-only',tag],capture_output=True,cwd=cwd).stdout.decode().split()
def show(tag,p,cwd): return subprocess.run(['git','show',f'{tag}:{p}'],capture_output=True,cwd=cwd).stdout.decode('utf-8','replace')
DEF=re.compile(r'^([a-z_][a-z0-9_]*\*?\s+)*([a-z_][a-z0-9_]+)\s*\(([^)]*)\)\s*\r?\n(?:[ \t]*[a-zA-Z_].*;\s*\r?\n)*\{', re.M)
DEFPF=re.compile(r'^PNG_FUNCTION\([^,]+,\s*\n?([a-z_][a-z0-9_]+)\s*,\s*\(([^)]*)\)[^)]*\)\s*\r?\n(?:[ \t]*[a-zA-Z_].*;\s*\r?\n)*\{', re.M|re.S)
def parse(root,tag,paths):
    out={}
    for p in paths:
        t=show(tag,p,root)
        ms=[(m.group(2),m.end()) for m in DEF.finditer(t)]+[(m.group(1),m.end()) for m in DEFPF.finditer(t)]
        for fn,end in ms:
            i=t.find('{',end-1)
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
    e,n=line.rstrip('\r\n').split(',',1)
    if not n.startswith('FUN_'): led[n]=e
used_names=set(led)
parsed_used={k for k in SRC if k[1] in used_names}
parsed_unused={k for k in SRC if k[1] not in used_names}
print('parsed:',len(SRC),'anchors:',len(parsed_used),'unused:',len(parsed_unused))
def mcp(tool,**kw):
    r=subprocess.run([MCP,'openrow2',tool]+[f'{k}={v}' for k,v in kw.items()],capture_output=True,text=True,timeout=120)
    try: return json.loads(r.stdout)
    except: return {}
def body_of(addr):
    d=mcp('decompile',target=addr)
    try: return d['content'][0]['text']
    except: return json.dumps(d)
hits=[]
cache='/tmp/w235_bodies.json'
CACHE=json.load(open(cache)) if os.path.exists(cache) else {}
def cached_body(addr):
    if addr not in CACHE:
        CACHE[addr]=body_of(addr); time.sleep(0.25)
    return CACHE[addr]
# REV (fixed): unique unused-name source caller of a used anchor; binary callers(anchor)==exactly one unnamed
rev=collections.defaultdict(set)
for k in SRC:  # k = source caller (candidate, unused name)
    for c in SRC[k]['calls']:  # c = source callee (must be a used anchor)
        if k in parsed_unused and c in used_names:
            rev[k].add(c)
n=0
for cand,callers in rev.items():
    if len(callers)!=1: continue
    if cand in REJECT: continue
    anchor=callers.pop(); ad=led[anchor]
    d=mcp('callers',target=ad); time.sleep(0.25); n+=1
    cls=[c.get('caller','') for c in d.get('callers',[]) if c.get('caller','').startswith('FUN_')]
    named=[c for c in d.get('callers',[]) if not c.get('caller','').startswith('FUN_')]
    if len(cls)==1 and len(named)==0:
        hits.append(('REV',cand[0],cand[1],cls[0],anchor))
print('rev queried:',n)
# FWD: anchor source body -> exactly one unused parsed callee; binary anchor body -> exactly one FUN_ call
m=0
for anchor in sorted(parsed_used):
    vend=anchor[0]
    ucs={c for c in SRC[anchor]['calls'] if (vend,c) in SRC and (vend,c) in parsed_unused}
    if len(ucs)!=1: continue
    cand=(vend,list(ucs)[0])
    if cand in REJECT: continue
    ad=led[anchor[1]]
    b=cached_body(ad); m+=1
    fcalls=sorted({'FUN_'+x.lower() for x in re.findall(r'\bFUN_([0-9a-f]{6,})\s*\(', b)})
    if len(fcalls)==1:
        hits.append(('FWD',vend,cand[1],fcalls[0],anchor[1]))
json.dump(CACHE,open(cache,'w'))
print('fwd queried:',m,'hits:',len(hits))
for h in hits: print(h)
json.dump(hits,open('/tmp/w235_hits.json','w'))
