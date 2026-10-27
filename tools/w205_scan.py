#!/usr/bin/env python3
"""Wave 205 final adjudication data: seeds/pool/live for the IsWindow+msg cluster chain."""
import json

SEED = 'seeds/functions.csv'
POOL = '/tmp/w232_cands.json'
LIVE = 'agent/live_functions252.json'

names = ['SetMessageExtraInfo', 'GetMessageExtraInfo', 'InSendMessage',
         'IsWindowEnabled', 'IsWindowVisible', 'Int_Wnd_QueryIsVisible',
         'GetQueueStatus', 'GetMessagePos', 'GetActiveWindow', 'GetActiveWindow_Thunk',
         'GetQueueStatus_Flags', 'MMDevice_GetMainVolume',
         'GetForegroundWindow', 'SetForegroundWindow', 'GetCapture', 'SetCapture',
         'mixerGetLineInfoA', 'mixerGetLineControlsA']

pool = {}
for name, entry in json.load(open(POOL)):
    pool.setdefault(name, []).append('x' + entry.lstrip('x'))

live = {}
d = json.load(open(LIVE))
funcs = d['functions'] if isinstance(d, dict) else d
for f in funcs:
    live[(f.get('addr') or '').lower()] = f.get('name', '')

seed = {}
for line in open(SEED, 'rb').read().decode('utf-8', 'replace').replace('\r\n', '\n').split('\n'):
    if ',' in line:
        a, n = line.split(',', 1)
        seed.setdefault(n.strip(), []).append(a.strip().lower())

for n in names:
    p = pool.get(n, [])
    s = seed.get('eON_' + n, seed.get('eOn_' + n, seed.get(n, [])))
    l = [a for a, nm in live.items() if nm in ('eON_' + n, 'eOn_' + n, n)]
    print('%-28s pool->%s  seed->%s  live->%s' % (n, p or '-', s or '-', l or '-'))
