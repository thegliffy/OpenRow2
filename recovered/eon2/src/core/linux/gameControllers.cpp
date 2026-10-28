// Recovered source: eon2/src/core/linux/gameControllers.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- GamepadDetectionCallback @0x0401b560 ---
/* source: gameControllers */

void GamepadDetectionCallback(int param_1,uint param_2)

{
  if (param_2 == 0) {
    FUN_0400a810("deviceType",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/gameControllers.cpp"
                 ,0x1d1,"void GamepadDetectionCallback(const char*, int, bool)");
  }
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    Gamepads_TryAddDevice();
    return;
  }
  return;
}

// --- LinuxDevice::UpdateControlValues @0x0401bb90 ---
/* source: gameControllers */

void __regparm3 LinuxDevice__UpdateControlValues(int param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_250;
  undefined1 local_234 [10];
  ushort local_22a;
  undefined1 local_228 [500];
  undefined4 local_34 [9];
  
  while (uVar2 = read(*(int *)(param_1 + 0x4e0),local_234,0x200), 0 < (int)uVar2) {
    if (uVar2 >> 4 != 0) {
      puVar6 = &local_22a;
      uVar8 = 0;
      do {
        uVar1 = puVar6[-1];
        uVar4 = (uint)*puVar6;
        if (uVar1 == 1) {
          if (0xff < uVar4) {
            eON_GamepadLinux__ControlValueUpdate
                      (param_2,1,*(undefined1 *)(param_1 + 0x1b8 + uVar4),
                       *(undefined4 *)(puVar6 + 1));
          }
        }
        else if (uVar1 == 0) {
          if (uVar4 == 3) {
            iVar9 = 0;
            do {
              if (iVar9 == 0x10) {
                iVar9 = 0x18;
              }
              iVar7 = (iVar9 + 3) * 0x10 + param_1;
              if ((*(char *)(iVar7 + 5) != '\0') &&
                 (iVar3 = ioctl(*(int *)(param_1 + 0x4e0),iVar9 + 0x40U | 0x80184500,local_34),
                 -1 < iVar3)) {
                Gamepad_CleanupAxisValue(param_1,iVar9,local_34);
                eON_GamepadLinux__ControlValueUpdate
                          (param_2,2,*(undefined1 *)(iVar7 + 4),local_34[0]);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 0x28);
          }
        }
        else if ((uVar1 == 3) && (uVar4 < 0x28)) {
          if ((ushort)(*puVar6 - 0x10) < 8) {
            iVar3 = (int)(uVar4 - 0x10) >> 1;
            iVar9 = param_1 + 0x4b0 + iVar3 * 8;
            *(undefined4 *)(iVar9 + 0xc + ((int)(uVar4 - 0x10) % 2) * 4) =
                 *(undefined4 *)(puVar6 + 1);
            iVar7 = *(int *)(iVar9 + 0xc);
            if (iVar7 < 0) {
              local_250 = 0xc;
              uVar4 = 9;
              uVar5 = 8;
            }
            else {
              local_250 = (-(uint)(iVar7 == 0) & 0xfffffffe) + 6;
              uVar4 = (-(uint)(iVar7 == 0) & 0xfffffffe) + 3;
              uVar5 = ~-(uint)(iVar7 == 0) & 2;
            }
            if (*(int *)(iVar9 + 0x10) != 0) {
              uVar5 = local_250;
            }
            if (-1 < *(int *)(iVar9 + 0x10)) {
              uVar4 = uVar5;
            }
            eON_GamepadLinux__ControlValueUpdate(param_2,3,iVar3,uVar4);
          }
          else {
            if (*(char *)(param_1 + 4 + (uVar4 + 3) * 0x10) == -1) {
              FUN_0400a810("Axes[controlIndex].Mapping != 0xFF",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/gameControllers.cpp"
                           ,0x1b9,"void LinuxDevice::UpdateControlValues(eON_GamepadLinux*)");
            }
            Gamepad_CleanupAxisValue(param_1,uVar4,local_228 + uVar8 * 0x10);
            eON_GamepadLinux__ControlValueUpdate
                      (param_2,2,*(undefined1 *)(param_1 + 4 + (uVar4 + 3) * 0x10),
                       *(undefined4 *)(puVar6 + 1));
          }
        }
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 8;
      } while (uVar2 >> 4 != uVar8);
    }
  }
  return;
}

// --- LinuxDevice::UpdateForceFeedback @0x0401a1e0 ---
/* source: gameControllers */

void LinuxDevice__UpdateForceFeedback(int param_1,short param_2,short param_3)

{
  int iVar1;
  char cVar2;
  ssize_t sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_58;
  undefined2 local_56;
  short local_48;
  short local_46;
  undefined1 local_2c [8];
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  
  iVar1 = *(int *)(param_1 + 0x22c);
  if (*(char *)(iVar1 + 0x2d) != '\0') {
    return;
  }
  if (*(char *)(iVar1 + 0x4e4) == '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0x4e8) == -1) {
    iVar4 = open64(*(char **)(iVar1 + 0x4dc),2,0);
    *(int *)(iVar1 + 0x4e8) = iVar4;
    if (iVar4 < 0) {
      *(undefined1 *)(iVar1 + 0x4e4) = 0;
      *(undefined4 *)(iVar1 + 0x4e8) = 0xffffffff;
      FUN_0402cd10(0xf,
                   "Gamepads: Device \'%s\' now fails to open force feedback node for writing force feedback commands, which it opened successfully once earlier. Disabling force feedback."
                   ,*(undefined4 *)(iVar1 + 0x28));
      return;
    }
    if (*(char *)(iVar1 + 0x4e5) != '\0') {
      local_24 = 0x15;
      local_22 = 0x60;
      local_20 = 0xffff;
      sVar3 = write(iVar4,local_2c,0x10);
      if (sVar3 < 0) {
        FUN_0402cd10(10,"Force feedback gain change failed!");
      }
    }
    bzero(&local_84,0x2c);
    local_84 = 0x50;
    local_82 = 0xffff;
    local_74 = 0x7fff;
    local_72 = 0x7fff;
    iVar4 = ioctl(*(int *)(iVar1 + 0x4e8),0x402c4580,&local_84);
    if (iVar4 < 0) {
      close(*(int *)(iVar1 + 0x4e8));
      *(undefined1 *)(iVar1 + 0x4e4) = 0;
      *(undefined4 *)(iVar1 + 0x4e8) = 0xffffffff;
      FUN_0402cd10(0xf,
                   "Gamepads: Device \'%s\' now fails to create FF_RUMBLE effect, which it created successfully once earlier. Disabling force feedback."
                   ,*(undefined4 *)(iVar1 + 0x28));
      return;
    }
    *(undefined1 *)(iVar1 + 0x4f2) = 0;
    sVar6 = 0;
    *(undefined2 *)(iVar1 + 0x4ee) = 0x7fff;
    sVar5 = 0;
    *(undefined2 *)(iVar1 + 0x4f0) = 0x7fff;
    *(undefined2 *)(iVar1 + 0x4ec) = local_82;
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(iVar1 + 0x4f2);
    sVar6 = 0;
    sVar5 = 0;
    if (cVar2 != '\0') {
      sVar5 = *(short *)(iVar1 + 0x4ee);
      sVar6 = *(short *)(iVar1 + 0x4f0);
    }
  }
  if ((param_3 != sVar6) || (param_2 != sVar5)) {
    if (param_3 == 0 && param_2 == 0) {
      if (cVar2 == '\0') {
        FUN_0400a810("ForceFeedbackRunning",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/gameControllers.cpp"
                     ,0xff,"void LinuxDevice::UpdateForceFeedback(WORD, WORD)");
      }
      local_24 = 0x15;
      local_22 = *(undefined2 *)(iVar1 + 0x4ec);
      local_20 = 0;
      sVar3 = write(*(int *)(iVar1 + 0x4e8),local_2c,0x10);
      if (sVar3 < 0) {
        FUN_0402cd10(10,"Force feedback effect stop failed!");
      }
      else {
        *(undefined1 *)(iVar1 + 0x4f2) = 0;
      }
    }
    else {
      if ((param_2 != *(short *)(iVar1 + 0x4ee)) || (param_3 != *(short *)(iVar1 + 0x4f0))) {
        bzero(&local_58,0x2c);
        local_48 = param_2;
        local_56 = *(undefined2 *)(iVar1 + 0x4ec);
        local_58 = 0x50;
        local_46 = param_3;
        iVar4 = ioctl(*(int *)(iVar1 + 0x4e8),0x402c4580,&local_58);
        if (iVar4 < 0) {
          FUN_0402cd10(10,"Force feedback effect update failed!");
          cVar2 = *(char *)(iVar1 + 0x4f2);
        }
        else {
          cVar2 = *(char *)(iVar1 + 0x4f2);
          *(short *)(iVar1 + 0x4ee) = param_2;
          *(short *)(iVar1 + 0x4f0) = param_3;
        }
      }
      if (cVar2 == '\0') {
        local_24 = 0x15;
        local_22 = *(undefined2 *)(iVar1 + 0x4ec);
        local_20 = 0x7fffffff;
        sVar3 = write(*(int *)(iVar1 + 0x4e8),local_2c,0x10);
        if (sVar3 < 0) {
          FUN_0402cd10(10,"Force feedback effect run failed!");
        }
        else {
          *(undefined1 *)(iVar1 + 0x4f2) = 1;
        }
      }
    }
  }
  return;
}

// --- eON_GamepadLinux::ControlValueUpdate @0x0401b730 ---
/* source: gameControllers */

void eON_GamepadLinux__ControlValueUpdate(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  int local_28;
  int local_24;
  
  if (DAT_04411209 != '\0') {
    FUN_0402cd10(0x14,"ControlValueUpdate( type = %d, index = %d, value = %d )",param_2,param_3,
                 param_4);
  }
  if (*(int *)(param_1 + 0x224) == 0) {
    FUN_0400a810("Mapping",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/gameControllers.cpp"
                 ,0x348,"void eON_GamepadLinux::ControlValueUpdate(int, int, int)");
  }
  if (param_2 == 2) {
    if (0x1f < param_3) {
      return;
    }
    puVar4 = (uint *)(param_3 * 4 + *(int *)(param_1 + 0x224) + 0x68);
  }
  else if (param_2 == 3) {
    if (0xf < param_4) {
      return;
    }
    if (3 < param_3) {
      return;
    }
    iVar1 = *(int *)(param_1 + (param_3 + 0x8c) * 4);
    if (iVar1 == param_4) {
      return;
    }
    if (iVar1 == -1) {
      local_24 = *(int *)(param_1 + 0x224);
    }
    else {
      local_28 = *(int *)(param_1 + 0x224);
      iVar1 = local_28 + (iVar1 + 0x58 + param_3 * 0x10) * 4;
      local_24 = local_28;
      if (iVar1 != -8) {
        bVar3 = *(byte *)(iVar1 + 0xb) & 0xc0;
        if (bVar3 == 0x40) {
          if (DAT_04411209 != '\0') {
            FUN_0402cd10(0x14,"Button[%d] <== 0 (hat)",*(uint *)(iVar1 + 8) & 0x3fffffff);
            local_28 = *(int *)(param_1 + 0x224);
          }
          iVar1 = param_1 + 0xb0 + *(int *)(iVar1 + 8) * 0x18;
        }
        else {
          if (bVar3 != 0x80) goto LAB_0401b82e;
          if (DAT_04411209 != '\0') {
            FUN_0402cd10(0x14,"Axis[%d] <== 0 (hat)",*(uint *)(iVar1 + 8) & 0x3fffffff);
            local_28 = *(int *)(param_1 + 0x224);
          }
          iVar1 = param_1 + 0x20 + *(int *)(iVar1 + 8) * 0x18;
        }
        local_24 = *(int *)(iVar1 + 8);
        if (local_24 < 1) {
          iVar5 = *(int *)(iVar1 + 0xc);
        }
        else {
          *(undefined4 *)(iVar1 + 8) = 0;
          iVar5 = *(int *)(iVar1 + 0xc);
          *(double *)(iVar1 + 0x14) = (double)iVar5;
          local_24 = 0;
        }
        if (iVar5 < 0) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(double *)(iVar1 + 0x14) = (double)-local_24;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
        local_24 = local_28;
      }
    }
LAB_0401b82e:
    iVar1 = param_4 + 0x58;
    *(int *)(param_1 + (param_3 + 0x8c) * 4) = param_4;
    param_4 = 1;
    puVar4 = (uint *)(local_24 + 8 + (iVar1 + param_3 * 0x10) * 4);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    if (0x1f < param_3) {
      return;
    }
    puVar4 = (uint *)(param_3 * 4 + *(int *)(param_1 + 0x224) + 0xe8);
  }
  if (puVar4 == (uint *)0x0) {
    return;
  }
  bVar3 = *(byte *)((int)puVar4 + 3) & 0xc0;
  if (bVar3 == 0x40) {
    if (DAT_04411209 != '\0') {
      FUN_0402cd10(0x14,"Button[%d] <== %d",*puVar4 & 0x3fffffff,param_4);
    }
    iVar5 = param_1 + 0xb0 + *puVar4 * 0x18;
    iVar2 = *(int *)(iVar5 + 8);
    iVar1 = iVar5 + 8;
    if (param_4 < iVar2) goto LAB_0401b938;
  }
  else {
    if (bVar3 != 0x80) {
      return;
    }
    if ((DAT_04411208 == '\0') && (param_2 != 2)) {
      param_4 = (-(uint)(param_4 == 0) & 0xffff0001) + 0x7fff;
    }
    if (DAT_04411209 != '\0') {
      FUN_0402cd10(0x14,"Axis[%d] <== %d",*puVar4 & 0x3fffffff,param_4);
    }
    iVar5 = param_1 + 0x20 + *puVar4 * 0x18;
    iVar2 = *(int *)(iVar5 + 8);
    iVar1 = iVar5 + 8;
    if (param_4 < iVar2) {
LAB_0401b938:
      iVar2 = param_4;
      *(int *)(iVar5 + 8) = iVar2;
      iVar5 = *(int *)(iVar1 + 4);
      *(double *)(iVar1 + 0xc) = (double)(iVar5 - iVar2);
      param_4 = iVar2;
      goto LAB_0401b8c6;
    }
  }
  iVar5 = *(int *)(iVar1 + 4);
LAB_0401b8c6:
  if (iVar5 < param_4) {
    *(int *)(iVar1 + 4) = param_4;
    *(double *)(iVar1 + 0xc) = (double)(param_4 - iVar2);
  }
  *(int *)(iVar1 + 8) = param_4;
  return;
}

// --- attached helper FUN_0001c970 @0x0401c970 (call-graph exclusive to this TU) ---
void FUN_0401c970(void)

{
  if (DAT_044114c0 != '\0') {
    return;
  }
  pthread_mutex_init((pthread_mutex_t *)&DAT_044114c8,(pthread_mutexattr_t *)0x0);
  FUN_0401de50(GamepadDetectionCallback);
  udev_EnumerateInputDevices();
  DAT_044114c0 = 1;
  return;
}

