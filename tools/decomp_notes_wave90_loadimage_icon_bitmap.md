# Wave 90 — LoadImage A/W + LoadBitmapA + LoadIconA (type fix)

Scoreboard after apply: **2,988 / 9,221**.

## Renames (4)

- `eON_LoadImageA` / `eON_LoadImageW` (6-arg → `eON_Int_LoadBitmap`; W message locks `LoadImageW`)
- `eON_LoadBitmapA` (`IMAGE_BITMAP`=0) — **new** at `0417c490`
- `eON_LoadIconA` — **fix**: was mislabeled `eON_LoadBitmapA` at `0417c410` (`IMAGE_ICON`=1, flags `0x8040`)

LEAVE: `0417c2e0` (LoadIconA twin with MultiByte name convert). Export-table-only A/W names without unique bodies (ModuleFileNameA, SearchPathW, PrivateProfile W, …).

Batch: `tools/names_batch81.tsv`
