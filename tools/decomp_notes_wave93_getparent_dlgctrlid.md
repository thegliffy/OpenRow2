# Wave 93 — GetParent + GetDlgCtrlID

Scoreboard after apply: **2,995 / 9,221**.

## Renames (2)

- `eON_GetParent` (vtable `+0x64`; maps null → `0x271a` desktop sentinel)
- `eON_GetDlgCtrlID` (reads HWND `+0x5c` after validate)

LEAVE: validated `ShowWindow` forwarder `04181130`; uncertain IsIconic candidate `04181fe0` (vtable `+0x8c`).

Batch: `tools/names_batch84.tsv`
