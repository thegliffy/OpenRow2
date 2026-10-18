# Wave 125 — Registry XML navigation + hex value codecs

Scoreboard: 3,157 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04119c40 | Registry_IsLoaded | root present |
| 0411a570 | Registry_EnsureKeyPath | create path |
| 0411a610 | RegistryXml_CountChildren | child count |
| 0411a5d0 | RegistryXml_SkipChildren | nth child walk |
| 0411a850 | RegistryXml_GetNthAttribute | nth attr |
| 0411a650 | RegistryXml_BinaryValueByteCount | hex size |
| 0411ab10 | RegistryXml_BinaryAttrByteCount | attr hex size |
| 0411abe0 | RegistryXml_WideValueCharCount | wide len |
| 0411aba0 | RegistryXml_ParseHexByte | hex pair |
| 0411a670 | RegistryXml_DecodeHexValue | decode value |
| 0411ab30 | RegistryXml_DecodeHexAttribute | decode attr |

## Next

RegSetValue XML (a8a0); FindAttribute (a710); hex encode (19ad0).
