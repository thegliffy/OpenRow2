# Wave 249 — hand-read batch 2: graph-unique wrapper pairing (continued)

Continued the Wave 248 lane over the remaining corpus candidates; all 16 newly-read
bodies hand-adjudicated.

## Applied (7 strict pure forwarders — args pass through with casts only)
- `04133790 -> thunk_eON_CopyFileA`
- `04177040 -> thunk_eON_WaitMessage`
- `04177bc0 -> thunk_eON_GetDoubleClickTime`
- `041c9d9e -> thunk_modf` (x87 double->longdouble shim)
- `041c9dc6 -> thunk_fmod` (x87 shim)
- `041ca073 -> thunk_log` (x87 shim)
- `041ca0bc -> thunk_tzset`

## Held (read but not strict forwarders)
`041446f0` (seh_RaiseException + conditional post-call), `04201217` (munmap with
object-field teardown), `042a6410` (png_icc_profile_error with arg reshuffle +
bounds guard), `042aa580` (double-call reset wrapper — calls png_set_keep_unknown_chunks
twice), `042bb0d0` (two callees), `042bcf40` (png_set_filler + flag latch),
`042be6f0` (gmtime + DOS-timestamp struct build, epoch bias 0x76c),
`042c6000` (fflush via object member deref), `042d5dc0` (_init call, pc-thunk
injection warnings). Cumulative held pool (Wave 248+249): 21.

## Notes
- All pairing verified programmatically (unique 1:1 callee across corpus).
- Board unchanged by design (thunk_* counts as auto-named); seeds updated (7 rows, CRLF).
- Lane now exhausted for strict forwarders; remaining pool is held-only.
