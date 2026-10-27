# Wave 252 — Wave-205 backlog close (name-table permutation closed)

Date: 2026-10-27. Lane: the items wave 204's `## Next` parked for body-lock/twin
adjudication via MCP (GetCapture / SetMessageExtraInfo / InSendMessage /
GetMessagePos, accelerator trio, DialogBoxParamW, Ellipse, mixer/waveOut).
Game name-table pool entries were the authority; every move required
body/source/call-graph consistency. Board: held 5,197 / 9,221 (pure
permutation of already-named slots, net 0).

## Applied (10 renames, each name landing on its own pool slot)
- 04171430 -> eON_GetMessagePos (grid slot; lock+MAKELONG body)
- 04170e70 -> eON_GetQueueStatus (grid slot; QS_* mask validation)
- 0418c080 -> eON_mixerGetLineInfoA (cbSize 168 MIXERLINE; szPname Volume)
- 0418c390 -> eON_mixerGetLineControlsA (cbSize 24 MIXERLINECONTROLS; control array)
- 04182db0 -> eON_GetCapture
- 04182c80 -> eON_SetCapture
- 041829a0 -> eON_GetForegroundWindow
- 04184800 -> eON_SetForegroundWindow
- 04184870 -> eON_IsWindowEnabled (inverted style-bit test = "enabled if not disabled")
- 041811b0 -> eON_IsWindowVisible (virtual per-class visibility query)

The window/mixer/msg cluster resolved as a closed permutation: each contested
slot's checker name was displaced onto the displaced name's own pool slot,
chain closed with no orphaned names.

## Retired checker-descriptive names (displaced by their canonical pool names)
eOn_GetQueueStatus_Flags, eOn_GetActiveWindow_Thunk, MMDevice_GetMainVolume,
eOn_Int_Wnd_QueryIsVisible — descriptive variants that had been parked on grid
slots; their entries now carry the canonical name-table names.

## No-ops (verified consistent, no action)
- eON_GetMessageExtraInfo stays at 041712a0 (checker name held; body returns a
  raw per-thread dword — fits GetMessageExtraInfo; the InSendMessage pool row
  pointing at this slot stays held, and SetMessageExtraInfo has no pool row at
  all: the setter body was not found in the decompile corpus).
- eON_GetActiveWindow stays at 04182a50 (checker pairing body-consistent:
  global pair = foreground, head-window pair = active).
- Accelerator trio (Create/Destroy/Copy), DialogBoxParamW, Ellipse, and the
  waveOut leftovers were verified already applied/consistent on their lanes.

## Seeds / persistence
seeds/functions.csv: 10 rows updated in place (CRLF) to match live; verified
byte-level. flush + scoreboard re-run: named 5,197 / total 9,221 — unchanged,
as expected for a name permutation across named slots. Live map:
agent/live_functions252.json (refreshed post-permutation; pool->seed->live all
agree for every landed name).

## Lane status
Wave-205 backlog CLOSED. Name-table pool: all actionable rows now landed;
remaining pool rows are the two dry holds (InSendMessage target conflict,
SetMessageExtraInfo no pool row). Board parked 5,197 / 9,221 (56.4%).
