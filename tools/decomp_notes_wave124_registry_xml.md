# Wave 124 — Registry open-key refs + XML helpers

Scoreboard: 3,146 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04119910 | Registry_IsKeyOpen | open-key list lookup |
| 04119950 | Registry_AddRefOpenKey | ref++ / insert |
| 041199d0 | Registry_ReleaseOpenKey | ref-- / unlink |
| 0411a400 | Registry_OpenPredefinedKey | HKEY_* roots |
| 0411a180 | Registry_FindOrCreateKeyNode | TiXml key walk |
| 0411a6e0 | RegistryXml_RemoveChild | dirty flag |
| 0411ac70 | RegistryXml_RemoveAttribute | dirty flag |

## Next

More registry value XML; Ellipse; SelectPalette.
