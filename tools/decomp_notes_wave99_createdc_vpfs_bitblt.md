# Wave 99 — CreateCompatibleDC + VPFS Close/IsArchived/Convert + BitBlt + GetDC helper

Scoreboard: 3,040 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04123130 | eON_CreateCompatibleDC | DC pool type 10 + stock font select |
| 04042f30 | eON_VPFS_Close | assert `VPFS_Close()` |
| 04043100 | eON_VPFS_IsArchivedFile | assert `VPFS_IsArchivedFile()` |
| 04046c50 | eON_VPFS_ConvertDiskFileToWriteableLocation | assert on deleted/parent folder |
| 041247c0 | eON_BitBlt | was `gdi32_041247c0`; SRCCOPY blit core |
| 04122fd0 | eON_Gdi_GetDCForWindow | HWND-bound DC alloc used by GetDC |

## LEAVE

| Addr | Why |
|------|-----|
| 04045da0 / 04049e60 | VPFS_Read assert twins |
| 04129b10 / 04129d80 | GlobalDeleteAtom twins |
| 0412e3d0 | MapViewOfFileEx twin of named Ex |
| 04121d00 | thin ExtTextOutW options wrapper |

## Next

Continue VPFS/GDI unique locks; PostQuit/WaitMessage if body-locked.
