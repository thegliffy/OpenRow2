# Wave 52 — DirectInput Create + KeyDown/Up + shader_pch + GTRACE + stream bounds

Scoreboard after apply: **2,551 / 9,221**.

## Renames (10)

| Addr | Name | Lock |
|------|------|------|
| 040f08c0 | DirectInput8Create | DirectInput8Create assert |
| 040f0b10 | DirectInputCreateA | DirectInputCreateA |
| 040f0bc0 | DirectInputCreateW | DirectInputCreateW |
| 0404d040 | eON_KeyDown | KeycodeToScanCode keyDown |
| 0404d170 | eON_KeyUp | KeycodeToScanCode keyUp |
| 040ec550 | shader_pch_load | shader_pch load/open |
| 0401eee0 | BringMainGameWindowToFront | BringWindowToTop / main window |
| 0408a650 | Direct3DDevice9Imp::GTRACE_SetTextureStageState | GTRACE SetTextureStageState |
| 0408ad80 | Direct3DDevice9Imp::GTRACE_SetSamplerState | GTRACE SetSamplerState |
| 04099f80 | Direct3DDevice9Imp::ValidateStreamSourceBounds | stream source overflow |

## Leave

- 04046c50 — wrapper around existing `VPFS_ConvertDiskFileToWriteableLocation` (0403f740); not a second convert.
- WaveIn capture cluster — need unique body lock before rename.

Batch: `tools/names_batch43.tsv`
