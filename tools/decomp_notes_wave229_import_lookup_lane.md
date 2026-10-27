# Wave 229 — import-lookup lane (name→fn via the game's own import tables)

Lane: whole-file scan for `{name_ptr, fn_ptr}` data pairs with **no** z-field
requirement — this catches the import-lookup form `{name_ptr, fn_ptr, ordinal}`
that wave 228's strict `{name, fn, 0}` dispatch scan excluded. The game's
runtime loader resolves its own Win32-emulation imports through these tables;
they are game-owned data, same evidence class as waves 226–228.

## Validation
- Same rule as prior table waves: name must be **unused in the ledger**, target
  slot **unnamed**, name→target mapping **unique**.
- Cross-lane agreement on the pairs scan remained 100% (every pair whose name
  was already used pointed at the exact slot already carrying that name —
  2,151 named-target pairs, zero conflicts).

## Bodies (all 51 decompiled; none contradicted the table label)
Content-bearing bodies corroborate the labels:
- `DirectSoundCreate` -> calls `eON_DirectSoundCreate8`; `DirectSoundCaptureCreate`
  -> calls `eON_DirectSoundCaptureCreate8` (checker-named, agrees).
- `XInputGetState`/`XInputSetState` -> `EnsureGamepadConnected` + memcmp/bzero —
  real gamepad body, not a stub.
- `SysAllocString*` family -> calloc/memcpy/free; `SysFreeString` -> free;
  `SafeArray*` -> shared helpers + free. `SHILCreateFromPath` -> `eON_WideCharToMultiByte`.
- Stub bodies (`return 0`) are the expected shim surface — same class as the
  stubs applied in waves 226/228 (LockFile/UnlockFile, D3DPERF singletons).

## Applied — 51 renames (board 5,125 → 5,175; +50 net, one target already carried a name)
- **dsound**: DirectSoundCreate, DirectSoundEnumerateW, DirectSoundCaptureCreate,
  DirectSoundCaptureEnumerateW
- **xinput**: XInputGetState, XInputSetState
- **ole32/oleaut32**: GetActiveObject, LoadTypeLib, LoadTypeLibEx, LoadRegTypeLib,
  UnRegisterTypeLib, DispGetIDsOfNames, GetErrorInfo, SetErrorInfo,
  LHashValOfNameSys, the SysAllocString/SysFreeString/SysReAllocStringLen/
  SysStringLen/SysStringByteLen family, the SafeArrayCreate/Destroy/AllocData/
  AccessData/UnaccessData/GetElement/PutElement family, VariantInit,
  SystemTimeToVariantTime, VariantTimeToSystemTime, VarCmp, VarCyFromR4,
  VarDecFromUI8
- **shell32**: SHChangeNotify
- **ws2_32 (import-lookup form, ordinals present)**: WSAAsyncGetHostByAddr,
  WSAAsyncGetHostByName, WSACancelAsyncRequest, WSACancelBlockingCall, WSACleanup,
  WSAConnect, WSASocketW, WSAStringToAddressA, getservbyname, getservbyport,
  freeaddrinfo
- **imagehlp/debug**: DebugSetMute, D3DPERF_QueryRepeatFrame

## Held
Entries whose names the checker lane already parked on different slots stay
parked (checker authoritative). `{name, ordinal}` pairs without a static
fn-pointer (the 0x0433d7xx region) remain unresolved statically — runtime
resolution only — plus the per-DLL multi-implementation names from wave 228.

## State after wave
Board 5,175 / 9,221 (56.1%). Queue 0. Vtable align 0 proposals. Seeds
re-synced from live (`agent/live_functions229.json`).
