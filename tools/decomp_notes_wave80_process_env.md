# Wave 80 — GetCurrentProcess(Id) + SetEnvironmentVariableA + GetVersion

Scoreboard after apply: **2,928 / 9,221**.

## Renames (4)

- `eON_GetCurrentProcessId` (getpid; -1 → current)
- `eON_GetCurrentProcess` (pseudo-handle `DAT_04410a08`)
- `eON_SetEnvironmentVariableA` (setenv/unsetenv)
- `eON_GetVersion` (returns `0x500`)

Batch: `tools/names_batch71.tsv`
