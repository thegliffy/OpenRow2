# Wave 248 — hand-read batch: graph-unique wrapper pairing (+ seed repair)

New mechanical lane on the 4,041-body DB-wide corpus (`agent/w233_bodies.jsonl`) +
current live map: unnamed bodies that call EXACTLY ONE named function, where that
callee is called from exactly ONE unnamed body in the whole corpus (1:1 graph pairing),
small bodies only. Every candidate hand-read before applying.

## Applied (12 thunk names — real names, board-neutral by scoreboard design)
- `04015a30 -> thunk_SDL_SetCursor`
- `0401f910 -> thunk_SDL_GL_SwapWindow`
- `04040a90 -> thunk_eON_FindClose` (null-guard forwarding)
- `04082340 -> thunk_glFlush`
- `040b8ea0 -> thunk_RetainVolumeData` (this+4 adjustment)
- `040b8ec0 -> thunk_LockBox` (this+4 adjustment)
- `040fa0a0 -> thunk_alSourcePause`
- `040feea0 -> thunk_DSoundBackend_SourceSet3DProperties`
- `04129d50 -> thunk_eON_GlobalFindAtomW`
- `0412c630 -> thunk_eON_CreateDirectoryA`
- `0412d2a0 -> thunk_eON_GetCurrentDirectoryA`
- `04132bf0 -> thunk_VPFS_CancelIo`
All callees are game-table names (Waves 226–229); pairing verified programmatically.

## Board repair
- `0410f860 -> vector<bool>::_M_insert_aux` — Wave 221 seed row never landed live
  (`bulk_reseed` skips names containing `<` — mangled-template skip rule); applied via
  MCP rename and persisted. Board 5,196 -> 5,197.

## Held (hand-read, not clean enough for convention naming)
`0400a810` (assert reporter — name comes via format args), `0400d2e0` (cleanup+exit),
`0401f1e0`/`0401f830` (window/context predicates), `0401f7e0` (arg-clamp forwarding),
`04020010`/`04020040` (SDL window create/destroy with state writes),
`04042f10` (VPFS_Open wrapper with empty-path handle logic), `0404c310`, `040fad90`
(once-only capture start), `040f85d0`/`040f8600` (vtable+register pairs), `04114eb0`.

## Note
Scoreboard counts `thunk_` as auto-named by design (`mcp/server.py`), so the 12
wrapper names are documented but board-neutral; seeds updated (12 rows, CRLF).
