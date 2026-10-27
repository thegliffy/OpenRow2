# Wave 227 — full Win32 name-table harvest (+65)

Wave 226's anchor table was one fragment of a much larger structure: a whole-file
scan for `{name_ptr into pool, fn_ptr, 0}` triples (stride 12) found **820 entries
across ~28 contiguous table runs**, all pointing into the same string pool /
function range. This is the game's complete Win32-emulation export table
(name -> implementation -> 0), the runtime linker data for its kernel32 shim.

## Self-validation
- 640 of 820 entries (before this wave) already named by the checker lane as
  exactly `eON_<pool name>` — 100% agreement wherever both lanes touched the
  same function. Zero cross-table conflicts: every duplicated name in the table
  points at the same implementation everywhere it appears.
- Post-wave: 705 match, 72 named via other tiers (module-prefix/assert lane —
  left alone per lane-authority rule), 43 slots still unnamed (names
  cross-assigned or held).

## Renames applied (71, unique slots 65 — ANSI macro aliasing)
71 table entries renamed to `eON_<name>`, landing on 65 unique functions: six
entries are Windows ANSI-macro alias pairs (`lstrlen`/`lstrlenA`,
`lstrcat`/`lstrcatA`, `lstrcpy`/`lstrcpyA`, `lstrcpyn`/`lstrcpynA`,
`lstrcmp`/`lstrcmpA`, `lstrcmpi`/`lstrcmpiA`) where the macro spelling points at
the same implementation as the suffixed one. Ledger keeps whichever the tool
applied last; the duplicate spellings are legitimately the same function.

Families harvested: `_lcreat/_lclose/_llseek/_lopen/_lread/_lwrite` (the DOS-era
file API — these are thunks/stubs in the shim), the `lstr*` family, console I/O
(`ReadConsoleW`, `WriteConsoleW`, `Get/SetConsoleMode`, `GetConsoleCP`,
`ReadConsoleInput A/W`, `PeekConsoleInputA`), FLS (`FlsAlloc/Free/GetValue/SetValue`
— FlsAlloc manages slots via the game's MapOfBits heap helpers, consistent),
heap stubs (`HeapValidate/Compact/Walk`), interlocked SList, locale/collation
(`LCMapStringW`, `GetStringTypeW`, `EnumSystemLocalesA`, `GetUserDefaultLCID`,
`IsValidCodePage`, `GetTimeFormatA`, `GetDateFormatA`), process/system
(`GetSystemInfo`, `GetVersionExW`, `GetStartupInfoA/W`, `GetExitCodeProcess`,
`ReadProcessMemory`, `SetLocalTime`, `SetEnvironmentVariableW`,
`SetThreadStackGuarantee`, `GlobalMemoryStatus`, `SetHandleCount`,
`DuplicateHandle`, `CreatePipe`, `DebugBreak`, `OutputDebugStringA/W`,
`EncodePointer/DecodePointer`, `RtlCaptureContext`, `RtlCaptureStackBackTrace`,
`SetUnhandledExceptionFilter`, `UnhandledExceptionFilter`,
`SetEnvironmentVariableW`, `GetAtomNameW`).
Body semantics checked on the cross-referencing ones (FlsAlloc -> MapOfBits,
RtlCaptureStackBackTrace -> RtlCaptureContext helper, GetStringTypeW ->
lstrlenW neighbor, GetVersionExW -> lstrcpyW neighbor) — the table's neighbors
cross-reference exactly as the implementations resolve, confirming entry alignment.

## Bookkeeping
- `decomp/wave227_win32_name_tables.json` — full 820-entry inventory with verdicts.
- `seeds/functions.csv` re-synced (65 rows).
- Scoreboard: 5,013 -> 5,078 / 9,221 (55.1%).
