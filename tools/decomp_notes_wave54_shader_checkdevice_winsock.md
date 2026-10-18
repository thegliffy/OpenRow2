# Wave 54 — CheckDeviceFormat, shader prep, VPFS handle, winsock helpers

Scoreboard after apply: **2,591 / 9,221**.

## Renames (19)

| Addr | Name | Lock |
|------|------|------|
| 0403cfe0 | VPFS_CloseHandle | Unknown handle state |
| 0404d220 | eON_Window_ApplyFlagChange | Unknown flag change |
| 040503b0 | Direct3D9ExImp::CheckDeviceFormat | thin → CheckDeviceFormat |
| 04051430 | eON_ShaderData::FormatAttributeName | ON_Attr_* names |
| 04057950 | eON_ShaderData_FormatSourceRegister | _unknown_source_modifier |
| 040580b0 | ShaderData::PreparseBytecode | Preparsing bytecode / register offset |
| 0405bf50 | eON_ShaderData::GeneratePixelShaderInputs | fog / PS inputs |
| 04067d80 | Direct3D9Imp::CheckDeviceFormat | CheckDeviceFormat message |
| 040a67b0 | D3DRESOURCETYPE_ToString | !!!UNKNOWNTYPE!!! |
| 040b3a60 | Direct3DVertexDeclaration9Imp::ProcessVertexElements | Unsupported vertex element type |
| 040e1130 | PixelFormatData::MapTextureFormatToGL | Unsupported texture format |
| 04130820 | eON_StatPath | stat() errno |
| 0413ffc0 | GetCPInfo | Unhandled CodePage |
| 04145a90 | DispatchQueuedAPC | Unknown APC type |
| 0417da90 | wvsnprintfA | wvsnprintfA |
| 0417e2b0 | wvsnprintfW | wvsnprintfW |
| 04191ab0 | SocketDomainToString | socket domain |
| 04191af0 | SocketProtocolToString | unknown protocol |
| 04191c40 | SocketOptionToString | unknown option |

Batch: `tools/names_batch45.tsv`
