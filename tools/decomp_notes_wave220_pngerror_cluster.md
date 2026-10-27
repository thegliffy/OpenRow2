# Wave 220 — pngerror.c formatter cluster: checker-lane swap resolved from vendor source

Resolves the wave-219 held line (`042a95f0 safecat-duplicate reverted to checker
lane`) per the audit's manual-tier rule: when two functions share a signature and
the automated checker declined the name, the function whose body is the *pure*
upstream function keeps the name, and bodies are matched line by line to vendor
source before assigning names (pinned tags v1.6.0 + v1.6.40).

The checker lane had four names parked one slot apart in the
`png_safecat / png_format_buffer / png_chunk_warning / png_benign_error` cluster.
Binary call graph vs vendor call graph (`grep` of `pngerror.c`, K&R rule) closed
exactly after the swap:

| addr | before | after | evidence |
|---|---|---|---|
| 042a95f0 | FUN_042a95f0 | png_safecat | body verbatim v1.6.40:112 (guard order, NULL checks, `i+buflen+1>=buflenmax`, terminate); 25-caller graph = source safecat callers ✓ |
| 042a9510 | png_safecat | png_format_buffer | body verbatim v1.6.40:421 (4 chars from MSB, `isnonalpha`→`[XX]` via `png_digit[16]` — GCC pooled file array with the `digits[]` literal, same TU — explains the 2 string refs), `": "`, bounded copy; only callers = chunk_warning + chunk_error ✓✓ |
| 042a9a30 | png_benign_error | png_chunk_warning | body verbatim v1.6.40:483 (`msg[18+196]` → decompiler slot 218; NULL→png_warning else format_buffer+png_warning) |
| 042a9ea0 | FUN_042a9ea0 | png_benign_error | body verbatim v1.6.40:362 (WARN flag → {READ&&name? chunk_warning : warning} else {READ&&name? chunk_error : error}); takes the name freed by the row above |

Call-graph closure check (vendor source → binary):
- `png_format_buffer` ← {png_chunk_warning, png_chunk_error} → binary: 042a9510 ←
  {042a9a30, 042a9d70} ✓✓ (exactly 2 callers)
- `png_chunk_warning` ← {png_benign_error, png_chunk_benign_error, png_chunk_report}
  → binary 042a9a30 ← {042a9ea0 ✓, 042a9dc0 ✓, 042a9e50 ✓, + pngrutil-zone checker
  names consistent with the game's own fork build} ✓

Verified correct, untouched (checker names stand):
- 042a9d70 png_chunk_error (NULL→png_error else format_buffer+png_error ✓)
- 042a9dc0 png_chunk_benign_error (WARN→chunk_warning else chunk_error ✓)
- 042a9e50 png_chunk_report (read: error<CHUNK_ERROR? warning-path : benign ✓)

Net: 4 gateway renames, +2 new names; read-back verified via list_functions.
Ledgers (`seeds/functions.csv`, `agent/vtables/*.tsv`) re-synced from live map.
