# Wave 92 — IsWindow / IsWindowVisible / IsWindowEnabled

Scoreboard after apply: **2,993 / 9,221**.

## Renames (3)

- `eON_IsWindow` (HWND validate via `FUN_0404ecd0`, no last-error)
- `eON_IsWindowVisible` (flag bit `0x8` after validate; `ERROR_INVALID_WINDOW_HANDLE`=`0x578`)
- `eON_IsWindowEnabled` (vtable `+0xb0` after validate)

LEAVE: four identical GetClassLong-index helpers; four GetWindowLong HWND-guard twins; Is* wrappers that only forward to `FUN_04180890`.

Batch: `tools/names_batch83.tsv`
