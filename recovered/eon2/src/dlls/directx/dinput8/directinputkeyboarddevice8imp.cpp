// Recovered source: eon2/src/dlls/directx/dinput8/directinputkeyboarddevice8imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DirectInputKeyboardDeviceImp::GetProperty @0x040f4af0 ---
/* source: directinputkeyboarddevice8imp */

undefined4 DirectInputKeyboardDeviceImp__GetProperty(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_110;
  undefined1 local_10c [256];
  
  local_110 = 0x80070057;
  if ((param_3 != (int *)0x0) && (param_3[1] == 0x10)) {
    if (param_2 == 0x14) {
      if (*param_3 != 0x218) {
        FUN_0402cd10(10,
                     "DirectInputKeyboardDeviceImp::GetProperty requested property DIPROP_KEYNAME with untested size %u!"
                     ,*param_3);
      }
      if (param_3[3] == 1) {
        iVar1 = param_3[2] * 0x28;
        if ((&DAT_04408e40)[iVar1] == '\0') {
          FUN_0402cd10(10,
                       "DirectInputKeyboardDeviceImp::GetProperty requested property DIPROP_KEYNAME for invalid key offset %u!"
                       ,param_3[2]);
          *(undefined2 *)(param_3 + 4) = 0x20;
          *(undefined2 *)((int)param_3 + 0x12) = 0;
          return 0;
        }
        iVar1 = eON_MultiByteToWideChar(0,0,&DAT_04408e48 + iVar1,0xffffffff,0,0);
        if (0x7f < iVar1) {
          FUN_0400a810("eON_MultiByteToWideChar( 0, 0, GOI_BO_Values[data->diph.dwObj].Name, -1, __null, 0 ) < 128"
                       ,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinputkeyboarddevice8imp.cpp"
                       ,0x46e,
                       "virtual HRESULT DirectInputKeyboardDeviceImp::GetProperty(REFGUID, LPDIPROPHEADER)"
                      );
        }
        eON_MultiByteToWideChar(0,0,&DAT_04408e48 + param_3[2] * 0x28,0xffffffff,local_10c,0x80);
        eON_lstrcpynW(param_3 + 4,local_10c,*param_3 - 0x10U >> 1);
        local_110 = 0;
      }
      else {
        FUN_0402cd10(0xf,
                     "DirectInputKeyboardDeviceImp::GetProperty requested property DIPROP_KEYNAME with unsupported method %u! Handle it."
                     ,param_3[3]);
        local_110 = 0x80070057;
      }
    }
    else {
      local_110 = 0x80070057;
      FUN_0402cd10(0xf,
                   "DirectInputKeyboardDeviceImp::GetProperty requested unsupported property %p! Handle it."
                   ,param_2);
    }
  }
  return local_110;
}

// --- DirectInputKeyboardDeviceImp::SetDataFormat @0x040f6590 ---
/* source: directinputkeyboarddevice8imp */

undefined4 DirectInputKeyboardDeviceImp__SetDataFormat(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_30;
  undefined4 local_24;
  uint local_20;
  
  uVar6 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x18)) {
    iVar3 = FUN_040f84b0(param_2,&DAT_0430cf20);
    if (iVar3 != 0) {
      FUN_0402cd10(5,"Data format of keyboard device set to default c_dfDIKeyboard format.");
      *(undefined1 *)(param_1 + 0x16d) = 1;
      return 0;
    }
    if (param_2[1] == 0x10) {
      *(undefined1 *)(param_1 + 0x16d) = 0;
      if (*(void **)(param_1 + 0x184) != (void *)0x0) {
        free(*(void **)(param_1 + 0x184));
      }
      *(int *)(param_1 + 0x170) = *param_2;
      *(int *)(param_1 + 0x174) = param_2[1];
      *(int *)(param_1 + 0x178) = param_2[2];
      *(int *)(param_1 + 0x17c) = param_2[3];
      *(int *)(param_1 + 0x180) = param_2[4];
      iVar3 = param_2[4];
      iVar1 = param_2[1];
      *(int *)(param_1 + 0x184) = param_2[5];
      __dest = calloc(1,iVar3 * iVar1);
      *(void **)(param_1 + 0x184) = __dest;
      memcpy(__dest,(void *)param_2[5],iVar3 * iVar1);
      iVar3 = param_2[4];
      local_30 = 0;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x188);
      if (iVar3 != 0) {
        uVar7 = 0;
        do {
          while( true ) {
            puVar5 = (undefined4 *)(uVar7 * 0x10 + *(int *)(param_1 + 0x184));
            iVar3 = memcmp((void *)*puVar5,&DAT_042dbbd8,0x10);
            if (iVar3 == 0) break;
            uVar7 = uVar7 + 1;
            FUN_0402cd10(10,
                         "DirectInputKeyboardDeviceImp::SetDataFormat(): game wants data about something other than key. Ignoring this one."
                        );
            if ((uint)param_2[4] <= uVar7) goto LAB_040f6746;
          }
          uVar2 = puVar5[2];
          if ((uVar2 & 0xc) == 0) {
            FUN_0402cd10(10,
                         "DirectInputKeyboardDeviceImp::SetDataFormat(): game wants data about something other than keyboard button. Ignoring this one."
                        );
          }
          else {
            uVar4 = puVar5[1];
            if (local_30 < uVar4) {
              local_30 = uVar4;
            }
            if (0xff < (ushort)(uVar2 >> 8)) {
              FUN_0400a810("buttonNum < 256",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinputkeyboarddevice8imp.cpp"
                           ,0x404,
                           "virtual HRESULT DirectInputKeyboardDeviceImp::SetDataFormat(LPCDIDATAFORMAT)"
                          );
              uVar4 = puVar5[1];
            }
            puVar5 = *(undefined4 **)(param_1 + 0x18c);
            local_24 = CONCAT31(local_24._1_3_,(char)(uVar2 >> 8));
            local_20 = uVar4;
            if (puVar5 == *(undefined4 **)(param_1 + 400)) {
              FUN_040f6880(param_1 + 0x188,puVar5,&local_24);
            }
            else {
              iVar3 = 0;
              if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = local_24;
                puVar5[1] = uVar4;
                iVar3 = *(int *)(param_1 + 0x18c);
              }
              *(int *)(param_1 + 0x18c) = iVar3 + 8;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)param_2[4]);
      }
LAB_040f6746:
      if (local_30 < *(uint *)(param_1 + 0x17c)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0x80070057;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x188);
        FUN_0402cd10(0xf,
                     "DirectInputKeyboardDeviceImp::SetDataFormat(): game wants us to set values beyond the packet it gives! Disabling keyboard data reporting."
                    );
      }
    }
    else {
      FUN_0402cd10(0xf,
                   "Unexpected object size in new data format in DirectInputKeyboardDeviceImp::SetDataFormat()! Can\'t interpret that structure."
                  );
    }
  }
  return uVar6;
}

// --- KeyboardEventReceiver::Internal_ProcessKeyUp @0x040f5d90 ---
/* source: directinputkeyboarddevice8imp */

void KeyboardEventReceiver__Internal_ProcessKeyUp(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_40 = *(int *)(param_1 + 8);
  iVar6 = param_3;
  if (*(char *)(local_40 + 0x16d) == '\0') {
    uVar1 = *(ushort *)((int)&DAT_04408e44 + param_3 * 0x28 + 1);
    if (0xff < uVar1) {
      FUN_0400a810("buttonNum < 256",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinputkeyboarddevice8imp.cpp"
                   ,0x1b7,"void KeyboardEventReceiver::Internal_ProcessKeyUp(DWORD, DWORD)");
      local_40 = *(int *)(param_1 + 8);
    }
    pbVar2 = *(byte **)(local_40 + 0x188);
    iVar6 = *(int *)(local_40 + 0x18c) - (int)pbVar2 >> 3;
    if (iVar6 == 0) {
LAB_040f5e0f:
      pthread_mutex_lock((pthread_mutex_t *)(local_40 + 0x54));
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x6c + param_3) = 0;
      pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(param_1 + 8) + 0x54));
      return;
    }
    pbVar5 = pbVar2;
    if (*pbVar2 != uVar1) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar6) goto LAB_040f5e0f;
        pbVar5 = pbVar2 + iVar4 * 8;
      } while (*pbVar5 != uVar1);
    }
    iVar6 = *(int *)(pbVar5 + 4);
  }
  pthread_mutex_lock((pthread_mutex_t *)(local_40 + 0x54));
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x6c + param_3) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(param_1 + 8) + 0x54));
  if (iVar6 != -1) {
    bzero(&local_30,0x14);
    local_2c = 0;
    local_24 = param_2;
    local_30 = iVar6;
    local_28 = eON_timeGetTime();
    local_20 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(*(int *)(param_1 + 8) + 0x54));
    iVar6 = *(int *)(param_1 + 8);
    piVar3 = *(int **)(iVar6 + 0x44);
    if (piVar3 == (int *)(*(int *)(iVar6 + 0x4c) + -0x14)) {
      FUN_040f5850();
      iVar6 = *(int *)(param_1 + 8);
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = local_30;
        piVar3[1] = local_2c;
        piVar3[2] = local_28;
        piVar3[3] = local_24;
        piVar3[4] = local_20;
      }
      *(int **)(iVar6 + 0x44) = piVar3 + 5;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(iVar6 + 0x54));
    FUN_040f22b0(*(undefined4 *)(param_1 + 8));
  }
  return;
}

// --- KeyboardEventReceiver::ProcessKeyDown @0x040f5a50 ---
/* source: directinputkeyboarddevice8imp */

void KeyboardEventReceiver__ProcessKeyDown(int param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int local_44;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar4 = KeycodeToDirectInputCode(param_3);
  if (iVar4 == 0) {
    FUN_0402cd10(0xf,
                 "Can\'t translate keyCode %u in DirectInput8\'s ProcessKeyDown function!! Please add translation to the table in KeycodeToDirectInput."
                 ,param_3);
    return;
  }
  local_44 = *(int *)(param_1 + 8);
  iVar7 = iVar4;
  if (*(char *)(local_44 + 0x16d) == '\0') {
    uVar1 = *(ushort *)((int)&DAT_04408e44 + iVar4 * 0x28 + 1);
    if (0xff < uVar1) {
      FUN_0400a810("buttonNum < 256",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinputkeyboarddevice8imp.cpp"
                   ,0x171,"virtual void KeyboardEventReceiver::ProcessKeyDown(DWORD, WORD)");
      local_44 = *(int *)(param_1 + 8);
    }
    pbVar2 = *(byte **)(local_44 + 0x188);
    iVar7 = *(int *)(local_44 + 0x18c) - (int)pbVar2 >> 3;
    if (iVar7 == 0) {
LAB_040f5ae7:
      pthread_mutex_lock((pthread_mutex_t *)(local_44 + 0x54));
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x6c + iVar4) = 0x80;
      pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(param_1 + 8) + 0x54));
      return;
    }
    pbVar6 = pbVar2;
    if (*pbVar2 != uVar1) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (iVar5 == iVar7) goto LAB_040f5ae7;
        pbVar6 = pbVar2 + iVar5 * 8;
      } while (*pbVar6 != uVar1);
    }
    iVar7 = *(int *)(pbVar6 + 4);
  }
  pthread_mutex_lock((pthread_mutex_t *)(local_44 + 0x54));
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x6c + iVar4) = 0x80;
  pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(param_1 + 8) + 0x54));
  if (iVar7 == -1) {
    return;
  }
  bzero(&local_30,0x14);
  local_2c = 0x80;
  local_24 = param_2;
  local_30 = iVar7;
  local_28 = eON_timeGetTime();
  local_20 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(*(int *)(param_1 + 8) + 0x54));
  iVar4 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar4 + 0x44);
  if (piVar3 == (int *)(*(int *)(iVar4 + 0x4c) + -0x14)) {
    FUN_040f5850();
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    if (piVar3 != (int *)0x0) {
      *piVar3 = local_30;
      piVar3[1] = local_2c;
      piVar3[2] = local_28;
      piVar3[3] = local_24;
      piVar3[4] = local_20;
    }
    *(int **)(iVar4 + 0x44) = piVar3 + 5;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(iVar4 + 0x54));
  FUN_040f22b0(*(undefined4 *)(param_1 + 8));
  return;
}

