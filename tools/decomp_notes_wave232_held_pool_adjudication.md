# Wave 232 — held-pool adjudication (name-table lanes, waves 226–228)

Re-ran the dispatch/name-table uniqueness machinery against the CURRENT ledger
(renames in 229–231 changed the population): name unused in every spelling
(bare + eON_), target unnamed, unique name→target. Result: 44 legal picks,
43 of them land on slots the checker lane already parked with different names
(lane-authority rule — left alone). Of the 87 raw-unique name→unnamed-target
pairs, 40 are data-table misparses (LANG_*/GL_*/D3D*/U_*/SOCK_*/IPPROTO_* enum
lookup tables and ICU-52 artifacts — not functions); 6 of those had a
CODE-looking decompile but no source on disk to name against.

## Applied (1)
- `040fb630 -> dsound_DllGetClassObject` — the game's own COM-registry table
  lists three DllGetClassObject entries; two siblings were named by other tiers
  (`xaudio2_full_DllGetClassObject`, `winmm_DllGetClassObject`). The last slot's
  body is a COM class factory: memcmp on two CLSID/GUID pairs at DAT_042db788-
  b, CO_E_CLASSNOTAVAILABLE (0x80040154) on mismatch, and a literal log string
  `dsound_DllGetClassObject() - creating DirectSound object ( %p )` — the body
  names itself. Convention matches the siblings.

## Closed
- Waves 226–228 held pools fully adjudicated: nothing else passes.
- Board 5,179 / 9,221 (56.2%).
