#!/usr/bin/env python3
"""Wave 233: whole-DB feature join. Binary body features must be a subset of
exactly one source function's features, with >=1 source-unique feature."""
import json, re, collections, sys
def feats(text):
    lits=set(re.findall(r'"([^"\n]{4,})"', text))
    consts=set(int(x,16) if x.lower().startswith('0x') else int(x) for x in re.findall(r'\b(?:0[xX][0-9a-fA-F]+|\d{2,})\b', text))
    return lits, consts
src=json.load(open('/tmp/w233_sources.json'))
idx=json.load(open('/tmp/w233_index.json'))
lit_u={k:v[0] for k,v in idx['lit'].items()}
con_u={k:v[0] for k,v in idx['con'].items()}
led={}
for line in open('/home/gliffy/OpenRow2/seeds/functions.csv'):
    e,n=line.rstrip('\r\n').split(',',1); led[e]=n
cands=collections.defaultdict(lambda: collections.defaultdict(set))
n=0
for line in open('/home/gliffy/OpenRow2/agent/w233_bodies.jsonl'):
    n+=1
    try: j=json.loads(line)
    except: continue
    c=j.get('c')
    if not c: continue
    if c.strip().startswith('{'):
        try: c=json.loads(c).get('c','')
        except: pass
    L,C=feats(c)
    if not (L or C): continue
    for l in L:
        if l in lit_u: cands[lit_u[l]]['via'].add('L:'+l[:40]); cands[lit_u[l]]['addrs'].add(j['addr'])
    for cc in C:
        s=str(cc)
        if s in con_u: cands[con_u[s]]['via'].add('C:'+s); cands[con_u[s]]['addrs'].add(j['addr'])
# also exact-subset pass: binary features fully inside one source fn's parsed feature lists
srcset={fn:(set(v[0]['lits']), set(str(x) for x in v[0]['consts'])) for fn,v in src.items()}
addr_features={}
for line in open('/home/gliffy/OpenRow2/agent/w233_bodies.jsonl'):
    try: j=json.loads(line)
    except: continue
    c=j.get('c') or ''
    if c.strip().startswith('{'):
        try: c=json.loads(c).get('c','')
        except: c=''
    L,C=feats(c)
    if L or C: addr_features[j['addr']]=(L,{str(x) for x in C})
subset_hits=[]
for addr,(L,C) in addr_features.items():
    if len(L)+len(C)<2: continue
    ok=set()
    for fn,(SL,SC) in srcset.items():
        if (not L or L<=SL) and (not C or C<=SC) and ((L&SL) or (C&SC)): ok.add(fn)
    if len(ok)==1: subset_hits.append((addr,list(ok)[0],sorted(L)[:2],sorted(C)[:3]))
print('seed-join candidate groups:', len(cands), 'exact-subset hits:', len(subset_hits))
for fn,v in sorted(cands.items()):
    addrs=sorted(a for a in v['addrs'] if led.get(a,'').startswith('FUN_'))
    if addrs: print('SEEDGROUP', fn, sorted(v['via']), addrs)
for h in subset_hits:
    if led.get(h[0],'').startswith('FUN_'): print('SUBSET', h)
