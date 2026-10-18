# Wave 91 — RegisterClassW + GetClassInfoW

Scoreboard after apply: **2,990 / 9,221**.

## Renames (2)

- `eON_RegisterClassW` (WNDCLASS→WNDCLASSEX `cbSize=0x30`, calls `eON_RegisterClassExW`)
- `eON_GetClassInfoW` (WideChar name → `GetClassInfoA`)

LEAVE: four identical `GetWindowLong` HWND-guard wrappers (`041861c0`–`04186370`).

Batch: `tools/names_batch82.tsv`
