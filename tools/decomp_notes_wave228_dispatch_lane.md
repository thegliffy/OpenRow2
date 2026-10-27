# Wave 228 — dispatch-lane extended past the kernel32 pool (+47)

Wave 227's pool-range scan was still a subset: re-scanned the WHOLE file for the
`{name_ptr, fn_ptr, 0}` stride-12 dispatch structure (name pointer may point at
any string, fn pointer must land exactly on a live function entry). Yield: 2,237
entries. Before this wave: 1,871 targets already named exactly `eON_<name>` by
other lanes, 213 named through checker tiers (case/prefix variants — all
corroborating, none contradicting the table), 153 unnamed targets.

## Applied (+47)
47 slots whose name is used nowhere in the ledger, unique name->target, body
decompile reviewed (stubs/thin wrappers consistent with a shim layer — the shipped
dispatch entry IS the name source):
- **user32**: DeferWindowPos, Escape, keybd_event, mouse_event, wsprintfA/W,
  wvsprintfA/W
- **winmm**: auxGetNumDevs, auxGetVolume, auxSetVolume, auxGetDevCapsA,
  mciSendStringA, mciSendCommandA, mciGetErrorStringA/W,
  midiOutOpen/Close/Reset/PrepareHeader/UnprepareHeader/ShortMsg/LongMsg,
  mmioAdvance/mmioCreateChunk/mmioWrite
- **ws2_32**: InetPtonA/W, InetNtopA/W (the lowercase alias spellings
  inet_pton/inet_ntop resolve to the same two slots; canonical names applied)
- **shell32**: ILFree, Shell_NotifyIconA/W, SHGetFolderPathAndSubDirW
- **misc**: OleCreateFontIndirect, SafeArrayGetDim, I_RpcExceptionFilter,
  SymFromAddr, D3DPERF_SetMarker/SetRegion/SetOptions/GetStatus,
  XInputGetCapabilities, XInputEnable, SelectClipRgn, CreateDirectoryExA/W

## Held (106 slots stay unnamed)
- 44 single-target names already parked by the checker lane on different slots
  (SetFilePointer, DeleteFileA/W, FindClose, GetFileAttributesA,
  SetFileAttributesA, CreateDirectoryA, GetFileType, SetFileTime,
  GetFileSize(Ex), GetFileTime, GetOverlappedResult, CancelIo, MapViewOfFileEx,
  CopyFileA, MoveFileA, GetVersion, GetEnvironmentStringsA, SetErrorMode,
  GetCurrentProcess(Id), GetCurrentDirectoryA, GlobalFindAtomW,
  GlobalDeleteAtom, RemoveFontMemResourceEx, SetViewportOrgEx/ExtEx,
  GetViewportExtEx, PostMessageA/W, SendMessageW, WaitMessage, CharToOemW,
  GetDlgCtrlID, IsCharAlphaA, IsIconic, SetWindowTextW, MoveWindow,
  EnumChildWindows, GetDoubleClickTime, DrawIconEx, freeaddrinfo — checker names
  authoritative per lane rules).
- 62 slots whose pool name legitimately maps to multiple implementations across
  different emulated DLLs (DllGetClassObject — each DLL gets its own; the
  checker module-prefix tier named two, the rest stay ambiguous) plus the UWVS
  regex artifact; alias spellings (inet_pton/inet_ntop) were resolved to the
  canonical name and applied above.
- Cross-lane agreement after three waves on this lane: 1,918 exact matches,
  zero conflicts. The dispatch lane is exhausted.

## Bookkeeping
- `decomp/wave228_full_dispatch_inventory.json` — full 2,237-entry whole-file
  inventory with verdicts.
- `seeds/functions.csv` re-synced (47 rows).
- Scoreboard: 5,078 -> 5,125 / 9,221 (55.6%).
