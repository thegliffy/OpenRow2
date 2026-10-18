# Wave 108 — WarnIncompleteStub + PS3 GLSL inputs + ExtTextOutW gate + Get/SetROP2

Scoreboard: 3,071 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 0402d070 | eON_WarnIncompleteStub | incomplete / d3d11 stub logger |
| 0405a780 | D3DBytecodeToGLSL_EmitPS3Inputs | PS3.0→GLSL varyings |
| 04121d00 | eON_ExtTextOutW_OptionsGate | unimplemented ETO options warn |
| 04124fa0 | eON_GetROP2 | DC +0xad8 |
| 04124fd0 | eON_SetROP2 | DC +0xad8 |

## Next

Continue GDI drawing (MoveToEx/LineTo); more bytecode translator pieces.
