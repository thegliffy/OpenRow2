# Wave 253 — shared helpers (README Open) closed via unique body lock

Date: 2026-10-27. Lane: the README `Open` shared-helper items — the last
hand-read tier. Game name-table pool rows + body adjudication via MCP.
Board: held 5,197 / 9,221 (both applied renames were canonical-spelling
permutations on already-named slots — neutral by design).

## Applied (2)
- 0416e8e0: eON_LoadCursor -> eON_LoadCursorA (body = pure-ANSI path: direct
  eON_LoadImageA call, no wide conversion; LoadCursorW lives separately at
  0416e6c0 and DOES WideCharToMultiByte — canonical A spelling per game table).
- 0416ef60: eON_LoadCursorFromFile -> eON_LoadCursorFromFileA (body = direct
  eON_CursorLinux__LoadCursorImageFromFile on the raw path — ANSI variant; W
  variant 0416efc0 is the `return 0` stub — canonical A spelling per game table).

## Adjudicated closed (no rename)
- GetLongPathNameA pool row -> 04134e80: that body is literally the
  msvcr80.dll/vcomp.dll string comparer — `RemapImportDllName` (wave-60 name) is
  CORRECT; the checker's eON_GetLongPathNameA (041351a0) is a strlen+strcpy
  passthrough — both bodies match their current names; pool row left unlanded.
- SetForcedOpenGLDisplay pair (04020cd0 + DetermineMaxSamplesForFormat 04021050,
  shared log string): both carry wave-60/checker names that body evidence
  supports — consistent, closed.
- GetSampleFunction_OpenGLCore shared log (04053130/04053560/04053c00): three
  checker-pinned names, parking correct — closed.
- Clipboard SDL->HGLOBAL sync: GlobalAlloc/GlobalFree/GlobalLock/GlobalUnlock/
  GlobalSize pool rows all landed at their heap-manager slots; cursor workers
  (SetCursor/SetCursorPos/ShowCursor/LoadCursorW/LoadCursorFromFileW) consistent.
- VirtualFreeEx twin: closed in wave 63 (0413f350 = VirtualQueryEx);
  VirtualFree/VirtualFreeEx rows consistent at 0413e9d0/0413e790.
- Wave-205 holds inherited: InSendMessage target conflict, SetMessageExtraInfo
  no pool row — still dry.

## Seeds / persistence
seeds/functions.csv: 2 rows updated in place (CRLF) to match live; verified
byte-level. flush + scoreboard: named 5,197 / 9,221 unchanged.

## Lane status
README `Open` shared-helper tier CLOSED. Hand-read tier exhausted. Board parked
5,197 / 9,221 (56.4%). Remaining pivot option: source recovery for
already-named districts (no more FUN_ rename lanes).
