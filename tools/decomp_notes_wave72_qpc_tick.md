# Wave 72 — QueryPerformance* + GetTickCount/timeGetTime + RtlGetNtVersionNumbers

Scoreboard after apply: **2,880 / 9,221**.

## Renames (8)

- `eON_QueryPerformanceCounter` / `Frequency` (BOOL wrappers)
- `eON_QueryPerformanceCounterValue` / `FrequencyHz` (µs counter / 1000000)
- `eON_GetTickCount` (monotonic µs→ms, clamps backwards)
- `eON_timeGetTime` (thin call to GetTickCount)
- `eON_RtlGetNtVersionNumbers` (5, 1, 0xf0000a28 = XP SP… build 2600)
- `eON_IsEqualGUID` (memcmp 16)

LEAVE: `FUN_0415eb00` GetTickCount twin of timeGetTime.

Batch: `tools/names_batch63.tsv`
