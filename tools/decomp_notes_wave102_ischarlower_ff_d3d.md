# Wave 102 — IsCharLowerA + Gamepad FF shutdown + D3D present/MSAA helpers

Scoreboard: 3,051 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 0417f0d0 | eON_IsCharLowerA | ctype `_ISlower` |
| 0401c7c0 | GamepadForceFeedback_Shutdown | FF stop/destroy fail strings |
| 0409a5f0 | Direct3DSurface9Imp_ClampRenderbufferSamples | >16 samples warn; caller InitializeRenderbuffer |
| 04066c90 | Direct3DDevice9_LogPresentParameters | present-param dump; caller Initialize |

## LEAVE

| Addr | Why |
|------|-----|
| 0417f070 | ctype `&4` overlaps alpha family — not clean IsCharUpperA |
| 0412e3d0 | MapViewOfFileEx twin (same VPFS archive string) |
| PostMessage A/W 72430/724b0 | identical twins |

## Next

Continue unique locks; prefer body-unique Win32 over shared asserts.
