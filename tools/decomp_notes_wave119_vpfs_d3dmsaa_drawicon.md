# Wave 119 — VPFS path/unpack + MSAA ToString + DrawIconEx

Scoreboard: 3,114 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04043190 | eON_VPFS_IsArchivedPath | path open + archived check |
| 04049e60 | VPFS_UnpackArchivedFile | ArchiveSeek read error assert |
| 04066590 | D3DMULTISAMPLETYPE_ToString | enum string table |
| 041757b0 | eON_DrawIconEx | BitBlt blit path |

## LEAVE

D3DRTYPE twin 04066c70 (already D3DRESOURCETYPE_ToString); MapViewOfFileEx VPFS twin.

## Next

StretchBlt; PatBlt; more unique asserts.
