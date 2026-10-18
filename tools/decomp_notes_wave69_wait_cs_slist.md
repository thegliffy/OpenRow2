# Wave 69 — Wait/Sleep C-API + InitCriticalSection + SList

Scoreboard after apply: **2,860 / 9,221**.

## Renames (15)

### Critical section
- `eON_InitializeCriticalSection` (1-arg)
- `eON_InitializeCriticalSectionAndSpinCount` (spin masked into field+5)
- LEAVE `synch_criticalsection_04145ed0` — identical body twin of AndSpinCount

### Wait / Sleep (thin wrappers over WaitForMultipleObjects)
- `eON_WaitForSingleObject` / `Ex`
- `eON_WaitForMultipleObjects` / `Ex`
- `eON_Sleep` / `eON_SleepEx` (nCount=0 path; SleepEx preserves WAIT_IO_COMPLETION)
- `Synchronisation_WaitForSingleObject` (internal single-handle waiter)

### SList
- `eON_InitializeSListHead`, `QueryDepthSList`, `RtlFirstEntrySList`
- `InterlockedPushEntrySList` / `PopEntrySList` / `FlushSList`

Batch: `tools/names_batch60.tsv`
