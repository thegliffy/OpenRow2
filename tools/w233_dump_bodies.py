#!/usr/bin/env python3
"""Wave 233: decompile every unnamed function DB-wide, checkpoint to JSONL."""
import json, subprocess, os, sys, time
MCP='/home/gliffy/.hermes/bin/mcp-use'
d=json.load(open('/home/gliffy/OpenRow2/agent/live_functions232.json'))
funcs=d['functions'] if isinstance(d,dict) else d
unnamed=[f['addr'] for f in funcs if f['name'].startswith('FUN_')]
OUT='/home/gliffy/OpenRow2/agent/w233_bodies.jsonl'
done=set()
if os.path.exists(OUT):
    for line in open(OUT):
        try: done.add(json.loads(line)['addr'])
        except: pass
todo=[a for a in unnamed if a not in done]
print(f'total unnamed {len(unnamed)}, done {len(done)}, todo {len(todo)}', flush=True)
t0=time.time()
for i,a in enumerate(todo):
    r=subprocess.run([MCP,'openrow2','decompile',f'target={a}'],capture_output=True,text=True,timeout=60)
    try:
        j=json.loads(r.stdout)
        c=j['content'][0]['text'] if 'content' in j else json.dumps(j)
    except Exception:
        c=None
    with open(OUT,'a') as f:
        f.write(json.dumps({'addr':a,'c':c})+'\n')
    if (i+1)%50==0:
        print(f'{i+1}/{len(todo)} elapsed {time.time()-t0:.0f}s', flush=True)
print('DONE', flush=True)
