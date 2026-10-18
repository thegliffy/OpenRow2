# Wave 53 — eON startup/window/log, gamepad, udev, draw, audio

Scoreboard after apply: **2,572 / 9,221**.

## Renames (21)

| Addr | Name | Lock |
|------|------|------|
| 0400a590 | eON_Startup | eON failed to initialise/launch |
| 0400eb20 | eON_CursorLinux::LoadCursorImageFromFile | load cursor from file (callee of eON_LoadCursorFromFile) |
| 0400fc00 | GamepadMapping::ApplyControlBinding | Gamepad mapping invalid hat/control |
| 04010440 | GamepadMapping::RegisterMappingString | GUID / register mapping |
| 04014c80 | LaunchCrashReporter | Failed to launch CrashReporter |
| 0401aa20 | Gamepads_TryAddDevice | Gamepads: New potential device… |
| 0401e070 | udev_InitializeLibrary | Couldn't initialize udev library |
| 0401ebc0 | udev_EnumerateInputDevices | udev - failed to create device enumerator |
| 0401ee80 | KeycodeToDirectInputCode | DirectInput code assigned |
| 04024790 | eON_Window_HandleSDLEvent | SDL_TEXTINPUT utf16 + eON_Window |
| 0402cdb0 | eON_LogSystem_Initialise | Log system / eon.txt |
| 04052550 | eON_ShaderData_ApplySourceModifier | Unknown source parameter modifier |
| 04080d80 | Direct3DDevice9Imp::RemoveResourceFromPool | remove resource from pool |
| 040975f0 | Direct3DDevice9Imp::DrawPrimitive_RenderArrays | render pipeline in DrawPrimitive / glDrawArrays |
| 0411a120 | FlushRegistrySave | Failed to save to registry |
| 04123c90 | eON_LoadFontGlyph | FT_Load_Glyph failed |
| 04129ec0 | eON_IgnoreInvalidStdOutputHandle | standard output invalid handle |
| 0417a3d0 | eON_CreateIconBitmaps | XOR/mask bitmap for icon |
| 0418a8c0 | GetAudioDevices | capture devices not coded |
| 0418f6c0 | WaveInDevice_CaptureCallback | WaveInDevice capture callback |
| 0418fcb0 | WaveInDevice_Stop | Couldn't stop audio capture |

Batch: `tools/names_batch44.tsv`
