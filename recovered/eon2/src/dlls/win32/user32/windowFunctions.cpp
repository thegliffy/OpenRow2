// Recovered source: eon2/src/dlls/win32/user32/windowFunctions.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- CreateWindowEx_Common @0x041853c0 ---
/* source: windowFunctions */

int * __regparm3
CreateWindowEx_Common
          (undefined4 param_1,char *param_2,undefined4 param_3,uint param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int in_FS_OFFSET;
  int aiStack_dc [11];
  char *local_b0;
  char *local_ac;
  char *local_a4;
  undefined4 local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  int local_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  char local_5b;
  ushort local_5a;
  int *local_58;
  int local_54;
  uint local_50;
  char *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34 [4];
  
  piVar9 = aiStack_dc + 0xb;
  local_50 = param_4;
  local_54 = param_9;
  local_48 = param_7;
  local_44 = param_8;
  local_6c = param_10;
  local_68 = param_11;
  local_7c = param_12;
  local_a4 = "(atom)";
  if (((uint)param_2 & 0xffff0000) != 0) {
    local_a4 = param_2;
  }
  local_80 = param_11;
  local_84 = param_10;
  local_88 = param_9;
  local_94 = param_6;
  local_98 = param_5;
  local_8c = param_8;
  local_ac = 
  "CreateWindowEx( dwExStyle = %#x, lpClassName = \'%s\', lpWindowName = \'%s\', dwStyle = %#x, X = %d, Y = %d, nWidth = %d, nHeight = %d, hWndParent = %p, hMenu = %p, hInstance = %p, lpParam = %p )"
  ;
  local_90 = param_7;
  local_b0 = (char *)0x5;
  local_9c = param_4;
  aiStack_dc[10] = 0x4185477;
  local_a0 = param_3;
  local_64 = param_3;
  local_4c = param_2;
  FUN_0402cd10();
  if (local_4c == (char *)0x0) {
    return (int *)0x0;
  }
  local_5a = (ushort)local_4c;
  if (((uint)param_2 & 0xffff0000) != 0) {
    local_b0 = local_4c;
    aiStack_dc[10] = 0x418586b;
    local_5a = eON_GlobalFindAtomA();
    piVar9 = aiStack_dc + 10;
  }
  local_58 = (int *)0x0;
  if ((0xbfff < local_5a) &&
     ((int)(local_5a - 0xc000) < (int)(DAT_0451c0e0 - DAT_0451c0dc >> 2 & 0xffffU))) {
    local_58 = *(int **)(DAT_0451c0dc + (local_5a - 0xc000) * 4);
  }
  local_5b = (local_50 & 0x40000000) != 0;
  if (10000 < param_5) {
    piVar9[2] = param_5;
    param_5 = -0x80000000;
    piVar9[1] = (int)"Nonsensical X ( %d ) given to CreateWindowEx; centering X";
    *piVar9 = 10;
    piVar9[-1] = 0x4185855;
    FUN_0402cd10();
  }
  if (10000 < param_6) {
    piVar9[2] = param_6;
    param_6 = -0x80000000;
    piVar9[1] = (int)"Nonsensical Y ( %d ) given to CreateWindowEx; centering Y";
    *piVar9 = 10;
    piVar9[-1] = 0x418582d;
    FUN_0402cd10();
  }
  if (local_5b == '\0') {
    piVar9[-1] = 0x41857a5;
    uVar6 = OpenGLDisplay_GetPrimary();
    piVar9[4] = (int)local_34;
    piVar9[3] = (int)&local_40;
    piVar9[2] = (int)&local_38;
    piVar9[1] = (int)&local_3c;
    *piVar9 = uVar6;
    piVar9[-1] = 0x41857c9;
    opengl_objects_04022160();
    local_34[0] = local_34[0] - local_38;
    if (param_5 == -0x80000000) {
      param_5 = ((local_40 - local_3c) - local_48) / 2;
LAB_0418592e:
      param_6 = (local_34[0] - local_44) / 2;
    }
    else if (param_6 == -0x80000000) goto LAB_0418592e;
    if (local_48 == -0x80000000) {
      local_48 = (local_40 - local_3c) - param_5;
      iVar4 = local_34[0] - param_6;
    }
    else {
      iVar4 = local_34[0] - param_6;
      if (local_44 != -0x80000000) {
        iVar4 = local_44;
      }
    }
  }
  else {
    if (param_5 == -0x80000000) {
      param_5 = 0;
    }
    if (param_6 == -0x80000000) {
      param_6 = 0;
    }
    if (local_48 == -0x80000000) {
      local_48 = 0;
    }
    iVar4 = 0;
    if (local_44 != -0x80000000) {
      iVar4 = local_44;
    }
  }
  local_44 = iVar4;
  *piVar9 = 0x1c;
  piVar9[-1] = 0x4185510;
  iVar4 = eON_GetSystemMetrics();
  piVar9[-1] = 0x1d;
  if (iVar4 < local_48) {
    iVar4 = local_48;
  }
  piVar9[-2] = 0x4185529;
  local_48 = iVar4;
  iVar4 = eON_GetSystemMetrics();
  puVar10 = piVar9 + -2;
  if (iVar4 < local_44) {
    iVar4 = local_44;
  }
  piVar9[-3] = 0x418553b;
  local_44 = iVar4;
  piVar5 = (int *)eON_WindowLinux__ctor();
  if (piVar5 == (int *)0x0) {
    piVar9[1] = (int)
                "eON_Window* CreateWindowEx_Common(DWORD, LPCSTR, LPCSTR, DWORD, INT, INT, INT, INT, HWND, HMENU, HINSTANCE, LPVOID)"
    ;
    *piVar9 = 0xfb;
    piVar9[-1] = (int)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp"
    ;
    piVar9[-2] = (int)"windowObject";
    piVar9[-3] = 0x41859d4;
    FUN_0400a810();
  }
  piVar5[5] = param_5;
  piVar5[6] = param_6;
  piVar5[1] = param_5;
  piVar5[2] = param_6;
  piVar5[0xb] = local_60;
  piVar5[10] = local_50;
  *(ushort *)(piVar5 + 0xf) = local_5a;
  piVar5[0x15] = local_68;
  piVar5[8] = local_44 + param_6;
  piVar5[4] = local_44 + param_6;
  piVar5[7] = local_48 + param_5;
  piVar5[3] = local_48 + param_5;
  if ((local_50 & 0xc00000) == 0xc00000) {
    piVar9[-2] = 4;
    piVar9[-3] = 0x4185954;
    iVar4 = eON_GetSystemMetrics();
    puVar10 = piVar9 + -3;
    piVar5[2] = param_6 + iVar4;
  }
  *puVar10 = piVar5;
  puVar10[1] = local_64;
  puVar10[-1] = 0x41855a3;
  FUN_0404eb40();
  if (local_58 != (int *)0x0) {
    if (*local_58 == 0x30) {
      piVar5[9] = local_58[2];
    }
    else {
      piVar5[9] = local_58[1];
    }
  }
  if ((local_5b == '\0') || (local_6c == 0)) {
    puVar11 = puVar10;
    puVar2 = puVar10;
    if (local_58 == (int *)0x0) goto LAB_041856b0;
LAB_041855d1:
    puVar11 = puVar2;
    local_40 = piVar5[7] - piVar5[5];
    local_3c = piVar5[8] - piVar5[6];
    iVar4 = *piVar5;
    puVar11[2] = &local_3c;
    puVar11[1] = &local_40;
    *puVar11 = piVar5;
    pcVar1 = *(code **)(iVar4 + 4);
    puVar11[-1] = 0x41855f9;
    (*pcVar1)();
    iVar4 = piVar5[6];
    piVar5[2] = iVar4;
    piVar5[8] = local_3c + iVar4;
    piVar5[4] = local_3c + iVar4;
    iVar8 = local_40 + piVar5[5];
    piVar5[7] = iVar8;
    piVar5[1] = piVar5[5];
    piVar5[3] = iVar8;
    if ((piVar5[10] & 0xc00000U) == 0xc00000) {
      *puVar11 = 4;
      puVar11[-1] = 0x4185974;
      iVar8 = eON_GetSystemMetrics();
      puVar11 = puVar11 + -1;
      piVar5[2] = iVar4 + iVar8;
    }
  }
  else {
    puVar10[1] = 0xfffffff4;
    *puVar10 = piVar5;
    puVar10[2] = local_6c;
    puVar10[-1] = 0x41856a2;
    eON_SetWindowLong();
    puVar11 = puVar10 + -3;
    puVar2 = puVar10 + -3;
    if (local_58 != (int *)0x0) goto LAB_041855d1;
LAB_041856b0:
    if (local_4c != (char *)0x8002) {
      puVar11[1] = "Button";
      *puVar11 = local_4c;
      puVar11[-1] = 0x41856d0;
      iVar4 = strcasecmp((char *)*puVar11,(char *)puVar11[1]);
      if (iVar4 == 0) {
        uVar7 = local_50 & 0xf;
        switch(uVar7) {
        case 0:
        case 1:
          iVar4 = *piVar5;
          puVar11[1] = uVar7;
          *puVar11 = piVar5;
          pcVar1 = *(code **)(iVar4 + 0x24);
          puVar11[-1] = 0x4185aa1;
          (*pcVar1)();
          break;
        case 2:
        case 3:
          iVar4 = *piVar5;
          *puVar11 = piVar5;
          pcVar1 = *(code **)(iVar4 + 0x2c);
          puVar11[-1] = 0x4185a8d;
          (*pcVar1)();
          break;
        case 4:
        case 9:
          iVar4 = *piVar5;
          *puVar11 = piVar5;
          pcVar1 = *(code **)(iVar4 + 0x30);
          puVar11[-1] = 0x4185a7f;
          (*pcVar1)();
          break;
        case 5:
          puVar11[1] = "Unknown button type: BS_3STATE when creating dialog. Handle it.";
          *puVar11 = 10;
          puVar11[-1] = 0x4185a72;
          FUN_0402cd10();
          break;
        case 6:
          puVar11[1] = "Unknown button type: BS_AUTO3STATE when creating dialog. Handle it.";
          *puVar11 = 10;
          puVar11[-1] = 0x4185a59;
          FUN_0402cd10();
          break;
        case 7:
          iVar4 = *piVar5;
          *puVar11 = piVar5;
          pcVar1 = *(code **)(iVar4 + 0x28);
          puVar11[-1] = 0x4185a3f;
          (*pcVar1)();
          break;
        case 8:
          puVar11[1] = "Unknown button type: BS_USERBUTTON when creating dialog. Handle it.";
          *puVar11 = 10;
          puVar11[-1] = 0x4185a32;
          FUN_0402cd10();
          break;
        default:
          puVar11[2] = uVar7;
          puVar11[1] = "Unknown button type when creating dialog (%d)";
          *puVar11 = 10;
          puVar11[-1] = 0x4185917;
          FUN_0402cd10();
          break;
        case 0xb:
          puVar11[1] = "Unknown button type: BS_OWNERDRAW when creating dialog. Handle it.";
          *puVar11 = 10;
          puVar11[-1] = 0x4185a19;
          FUN_0402cd10();
        }
      }
      else {
        puVar11[1] = "ComboBox";
        *puVar11 = local_4c;
        puVar11[-1] = 0x41856eb;
        iVar4 = strcasecmp((char *)*puVar11,(char *)puVar11[1]);
        if (iVar4 == 0) {
          iVar4 = *piVar5;
          *puVar11 = piVar5;
          pcVar1 = *(code **)(iVar4 + 0x34);
          puVar11[-1] = 0x4185ab8;
          (*pcVar1)();
        }
        else {
          puVar11[1] = "msctls_trackbar32";
          *puVar11 = local_4c;
          puVar11[-1] = 0x4185706;
          iVar4 = strcasecmp((char *)*puVar11,(char *)puVar11[1]);
          if (iVar4 == 0) {
            iVar4 = *piVar5;
            *puVar11 = piVar5;
            pcVar1 = *(code **)(iVar4 + 0x38);
            puVar11[-1] = 0x4185ac8;
            (*pcVar1)();
          }
          else {
            puVar11[1] = "msctls_progress32";
            *puVar11 = local_4c;
            puVar11[-1] = 0x4185721;
            iVar4 = strcasecmp((char *)*puVar11,(char *)puVar11[1]);
            if (iVar4 == 0) {
              iVar4 = *piVar5;
              *puVar11 = piVar5;
              pcVar1 = *(code **)(iVar4 + 0x3c);
              puVar11[-1] = 0x4185a00;
              (*pcVar1)();
            }
            else {
              puVar11[1] = "Static";
              *puVar11 = local_4c;
              puVar11[-1] = 0x418573c;
              iVar4 = strcasecmp((char *)*puVar11,(char *)puVar11[1]);
              if (iVar4 == 0) {
                iVar4 = *piVar5;
                *puVar11 = piVar5;
                if ((local_50 & 0xe) == 0) {
                  pcVar1 = *(code **)(iVar4 + 0x44);
                  puVar11[-1] = 0x4185b03;
                  (*pcVar1)();
                }
                else {
                  pcVar1 = *(code **)(iVar4 + 0x40);
                  puVar11[-1] = 0x4185756;
                  (*pcVar1)();
                }
              }
              else {
                puVar11[1] = &DAT_0434adab;
                *puVar11 = local_4c;
                puVar11[-1] = 0x4185ae3;
                iVar4 = strcasecmp((char *)*puVar11,(char *)puVar11[1]);
                if (iVar4 == 0) {
                  iVar4 = *piVar5;
                  *puVar11 = piVar5;
                  pcVar1 = *(code **)(iVar4 + 0x48);
                  puVar11[-1] = 0x4185aef;
                  (*pcVar1)();
                }
                else {
                  puVar11[1] = "Unknown control class when creating window: \'%s\'";
                  *puVar11 = 10;
                  puVar11[2] = local_4c;
                  puVar11[-1] = 0x4185b2b;
                  FUN_0402cd10();
                }
              }
            }
          }
        }
      }
      goto LAB_04185636;
    }
  }
  iVar4 = *piVar5;
  *puVar11 = piVar5;
  pcVar1 = *(code **)(iVar4 + 0x20);
  puVar11[-1] = 0x4185636;
  (*pcVar1)();
LAB_04185636:
  if ((*(byte *)((int)piVar5 + 0x2b) & 0x40) == 0) {
    iVar4 = *piVar5;
    *puVar11 = piVar5;
    pcVar1 = *(code **)(iVar4 + 0x6c);
    puVar11[-1] = 0x4185798;
    (*pcVar1)();
  }
  if (local_54 != 0) {
    *puVar11 = piVar5;
    puVar11[1] = local_54;
    puVar11[-1] = 0x4185656;
    eON_Int_Wnd_Reparent();
    if (((local_54 != -3) && (local_5b != '\0')) && ((local_60 & 4) == 0)) {
      if (local_54 == 0x271a) {
        puVar11[-1] = "Desktop HWND supplied in SendMessageA().";
        puVar11[-2] = 10;
        puVar11[-3] = 0x4185b5d;
        FUN_0402cd10();
      }
      else {
        if (local_54 == 0xffff) {
          puVar11[-1] = "HWND_BROADCAST not supported in SendMessageA(). Add it.";
          puVar11[-2] = 0xf;
          puVar11[-3] = 0x4185b44;
          FUN_0402cd10();
        }
        puVar11[-2] = *(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
        puVar11[-3] = 0x41858be;
        thread_SuspendPoint();
        puVar11[-2] = local_54;
        puVar11[-3] = 0x41858c9;
        cVar3 = FUN_0404ecd0();
        if (cVar3 == '\0') {
          puVar11[-2] = 0x578;
          puVar11[-3] = 0x41859ec;
          eON_SetLastError();
        }
        else {
          puVar11[-2] = piVar5;
          puVar11[-3] = 0x41858e6;
          eON_SendMessageA();
        }
      }
    }
  }
  return piVar5;
}

// --- eON_EndDialog @0x041834b0 ---
/* source: windowFunctions */

undefined4 eON_EndDialog(undefined4 param_1,int param_2)

{
  if (param_2 < -999) {
    FUN_0400a810("nResult > -1000",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp"
                 ,0xc28,"WINBOOL eON_EndDialog(HWND, INT_PTR)");
  }
  FUN_04027470(param_2);
  return 1;
}

// --- eON_GetClassNameW @0x04183cd0 ---
/* source: windowFunctions */

int eON_GetClassNameW(int param_1,int param_2,size_t param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStackY_74 [20];
  undefined4 uStackY_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_54;
  
  iVar3 = 0;
  if (param_1 != 0x271a) {
    local_54 = (void *)0x4183d09;
    cVar1 = FUN_0404ecd0();
    if (cVar1 == '\0') {
      local_54 = (void *)0x4183dbc;
      eON_SetLastError();
    }
    else if (((int)param_3 < 1) || (param_2 == 0)) {
      iVar3 = 0;
    }
    else {
      local_54 = (void *)0x4183d3f;
      pvVar2 = malloc(param_3);
      if (pvVar2 == (void *)0x0) {
        local_54 = (void *)0x4183def;
        FUN_0400a810();
      }
      local_54 = (void *)0x4183d5c;
      iVar3 = eON_GetClassNameA();
      puVar4 = &local_5c;
      if (iVar3 != 0) {
        local_58 = 0;
        local_5c = 0;
        uStackY_60 = 0x4183da7;
        local_54 = pvVar2;
        eON_MultiByteToWideChar();
        puVar4 = (undefined4 *)auStackY_74;
      }
      *(undefined2 *)(param_2 + iVar3 * 2) = 0;
      *puVar4 = pvVar2;
      puVar4[-1] = 0x4183d79;
      free((void *)*puVar4);
    }
  }
  return iVar3;
}

// --- eON_Int_FillDialogWithControls @0x041880b0 ---
/* source: windowFunctions */

int * __regparm3
eON_Int_FillDialogWithControls
          (undefined4 param_1,uint *param_2,int param_3,int param_4,undefined4 param_5)

{
  wchar16 wVar1;
  undefined2 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar16 wVar8;
  int *piVar9;
  uint uVar10;
  short **ppsVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  wchar16 *pwVar19;
  wchar16 *pwVar20;
  wchar16 *pwVar21;
  int in_FS_OFFSET;
  int local_108 [12];
  int aiStack_d8 [11];
  short *local_ac;
  int local_a8 [13];
  wchar16 *local_74;
  uint local_70;
  wchar16 *local_6c;
  int local_68;
  uint local_64;
  int *local_60;
  uint local_5c;
  short local_56;
  short local_54;
  short local_52;
  int local_50;
  uint local_4c;
  uint local_48;
  wchar16 *local_44;
  wchar16 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20 [4];
  
  if (param_2 == (uint *)0x0) {
    local_60 = (int *)0x0;
  }
  else {
    if ((*(short *)((int)param_2 + 2) == -1) && ((short)*param_2 == 1)) {
      local_70 = param_2[3];
      local_68 = 1;
      uVar10 = param_2[2];
      puVar18 = param_2 + 4;
    }
    else {
      local_70 = *param_2;
      puVar18 = param_2 + 2;
      local_68 = 0;
      uVar10 = param_2[1];
    }
    puVar17 = puVar18 + 3;
    local_40 = (short *)0x0;
    local_4c = CONCAT22(local_4c._2_2_,(short)*puVar18);
    local_52 = *(short *)((int)puVar18 + 6);
    local_48 = CONCAT22(local_48._2_2_,*(short *)((int)puVar18 + 2));
    local_54 = (short)puVar18[2];
    ppsVar11 = &local_ac;
    local_50 = param_3;
    if (*(short *)((int)puVar18 + 10) != 0) {
      if (*(short *)((int)puVar18 + 10) == -1) {
        local_40 = (wchar16 *)(uint)(ushort)puVar18[3];
        puVar17 = (uint *)((int)puVar18 + 0xe);
        ppsVar11 = &local_ac;
      }
      else {
        local_ac = (short *)((int)puVar18 + 10);
        aiStack_d8[10] = 0x418813c;
        local_40 = local_ac;
        iVar5 = eON_lstrlenW();
        puVar17 = (uint *)(local_40 + iVar5 + 1);
        ppsVar11 = (short **)(aiStack_d8 + 10);
      }
    }
    if ((short)*puVar17 == 0) {
      puVar18 = (uint *)((int)puVar17 + 2);
      puVar17 = (uint *)0x8002;
    }
    else if ((short)*puVar17 == -1) {
      puVar18 = puVar17 + 1;
      puVar17 = (uint *)(uint)*(ushort *)((int)puVar17 + 2);
    }
    else {
      *ppsVar11 = (short *)puVar17;
      ppsVar11[-1] = (short *)0x4188666;
      iVar5 = eON_lstrlenW();
      puVar18 = (uint *)((int)puVar17 + iVar5 * 2 + 2);
      ppsVar11 = ppsVar11 + -1;
    }
    *ppsVar11 = (short *)puVar18;
    ppsVar11[-1] = (short *)0x4188162;
    iVar5 = eON_lstrlenW();
    local_44 = (wchar16 *)((int)puVar18 + iVar5 * 2 + 2);
    piVar12 = (int *)(ppsVar11 + -1);
    if ((local_70 & 0x40) != 0) {
      local_74 = local_44 + 1;
      if (local_68 != 0) {
        local_74 = local_44 + 3;
      }
      ppsVar11[-1] = local_74;
      ppsVar11[-2] = (short *)0x418818d;
      iVar5 = eON_lstrlenW();
      piVar12 = (int *)(ppsVar11 + -2);
      local_44 = local_74 + iVar5 + 1;
    }
    if (local_40 != (short *)0x0) {
      piVar12[1] = (int)
                   "Menu creation not supported in CreateDialogFromTemplate. Add it when you need it."
      ;
      *piVar12 = 5;
      piVar12[-1] = 0x418868c;
      FUN_0402cd10();
      return (int *)0x0;
    }
    local_38 = 0;
    local_3c = 0;
    piVar12[2] = 4;
    piVar12[1] = 8;
    *piVar12 = (int)local_52;
    piVar12[-1] = 0x41881cf;
    local_34 = eON_MulDiv();
    piVar12[-1] = 8;
    piVar12[-2] = 0x10;
    piVar12[-3] = (int)local_54;
    piVar12[-4] = 0x41881f1;
    local_30 = eON_MulDiv();
    uVar6 = local_70 & 0xff37ffff;
    if ((local_70 & 0x40000000) == 0) {
      uVar6 = local_70;
    }
    if ((uVar6 & 0x80) != 0) {
      uVar10 = uVar10 | 1;
    }
    if ((uVar6 & 0x400) != 0) {
      uVar10 = uVar10 | 0x10000;
    }
    piVar12[-4] = uVar10;
    piVar12[-5] = uVar6;
    piVar12[-6] = (int)&local_3c;
    piVar12[-7] = 0x4188240;
    local_70 = uVar6;
    eON_Int_AdjustRectForCaption();
    piVar12[5] = 0;
    piVar12[3] = 0;
    piVar12[-4] = (int)puVar18;
    piVar12[-5] = (int)puVar17;
    piVar12[-6] = uVar10;
    local_40 = (wchar16 *)(local_34 - local_3c);
    local_5c = local_30 - local_38;
    iVar7 = local_3c;
    iVar5 = local_38;
    if ((short)local_48 == -0x8000) {
      iVar5 = -0x80000000;
      iVar7 = -0x80000000;
    }
    piVar12[-1] = iVar5;
    piVar12[-2] = iVar7;
    piVar12[4] = local_64;
    piVar12[-3] = local_70 & 0xefffffff;
    piVar12[2] = local_50;
    piVar12[1] = local_5c;
    *piVar12 = (int)local_40;
    piVar12[-7] = 0x41882b7;
    local_60 = (int *)eON_CreateWindowExA();
    iVar5 = *local_60;
    puVar16 = (uint *)(piVar12 + -0x12);
    puVar13 = (uint *)(piVar12 + -0x12);
    piVar12[-0x12] = (int)local_60;
    pcVar3 = *(code **)(iVar5 + 0x60);
    piVar12[-0x13] = 0x41882c7;
    cVar4 = (*pcVar3)();
    if (cVar4 != '\0') {
      iVar5 = *local_60;
      piVar12[-0x12] = (int)local_60;
      pcVar3 = *(code **)(iVar5 + 0x98);
      piVar12[-0x13] = 0x41886c7;
      (*pcVar3)();
    }
    pwVar20 = local_44;
    local_2c = 0;
    local_28 = (int *)0x0;
    local_24 = (int *)0x0;
    local_60[9] = param_4;
    if ((short)local_4c != 0) {
      local_44 = (wchar16 *)0x0;
      local_6c = (wchar16 *)(local_4c & 0xffff);
      do {
        puVar18 = (uint *)((uint)((int)pwVar20 + 3) & 0xfffffffc);
        if (local_68 == 0) {
          local_48 = *puVar18;
          local_4c = puVar18[1];
          local_52 = (short)puVar18[2];
          local_54 = *(short *)((int)puVar18 + 10);
          local_56 = (short)puVar18[3];
          uVar2 = *(undefined2 *)((int)puVar18 + 0xe);
          local_5c = (uint)(ushort)puVar18[4];
          local_40 = (wchar16 *)((int)puVar18 + 0x12);
        }
        else {
          local_4c = puVar18[1];
          local_48 = puVar18[2];
          local_52 = (short)puVar18[3];
          local_54 = *(short *)((int)puVar18 + 0xe);
          local_56 = (short)puVar18[4];
          uVar2 = *(undefined2 *)((int)puVar18 + 0x12);
          local_5c = puVar18[5];
          local_40 = (wchar16 *)(puVar18 + 6);
        }
        local_50 = CONCAT22(local_50._2_2_,uVar2);
        if (*local_40 == L'\xffff') {
          wVar1 = local_40[1];
          pwVar21 = local_40 + 2;
          wVar8 = wVar1 + L'ﾀ';
          if (((ushort)(wVar1 + L'ﾀ') < 6) || (wVar8 = wVar1, (ushort)wVar1 < 6)) {
            local_40 = L"Button" + (uint)(ushort)wVar8 * 10;
          }
          else {
            puVar13[1] = (uint)"Unknown built-in class id: %u";
            puVar13[2] = (uint)(ushort)wVar1;
            *puVar13 = 5;
                    /* try { // try from 04188351 to 041884cf has its CatchHandler @ 0418876f */
            puVar13[-1] = 0x4188356;
            FUN_0402cd10();
            local_40 = (wchar16 *)0x0;
          }
          puVar15 = puVar13;
          if (*pwVar21 == L'\xffff') goto LAB_04188367;
LAB_0418849a:
          *puVar15 = pwVar21;
          puVar15[-1] = 0x41884a5;
          iVar5 = eON_lstrlenW();
          pwVar19 = pwVar21 + iVar5 + 1;
          puVar18 = puVar15 + -1;
        }
        else {
          *puVar13 = (uint)local_40;
          puVar13[-1] = 0x4188486;
          iVar5 = eON_lstrlenW();
          puVar14 = puVar13 + -1;
          puVar13 = puVar13 + -1;
          pwVar21 = local_40 + iVar5 + 1;
          puVar15 = puVar14;
          if (*pwVar21 != L'\xffff') goto LAB_0418849a;
LAB_04188367:
          pwVar19 = pwVar21 + 2;
          pwVar21 = (wchar16 *)(uint)(ushort)pwVar21[1];
          puVar18 = puVar13;
        }
        pwVar20 = pwVar19 + 1;
        if (*pwVar19 != L'\0') {
          pwVar20 = pwVar20 + ((ushort)*pwVar19 >> 1);
        }
        if (((uint)pwVar21 & 0xffff0000) == 0) {
          pwVar21 = L"";
        }
        puVar18[0xb] = 0;
        puVar18[9] = local_5c;
        puVar18[2] = (uint)pwVar21;
        puVar18[10] = local_64;
        puVar18[1] = (uint)local_40;
        puVar18[3] = local_48;
        puVar18[8] = (uint)local_60;
        puVar18[7] = (short)local_50 * 2;
        puVar18[6] = local_56 * 2;
        puVar18[5] = local_54 * 2;
        puVar18[4] = local_52 * 2;
        *puVar18 = local_4c;
        puVar18[-1] = 0x41883fb;
        iVar5 = eON_CreateWindowExA();
        puVar13 = puVar18 + -0xc;
        puVar16 = puVar18 + -0xc;
        if (iVar5 == 0) {
          puVar18[-9] = (uint)
                        "int eON_Int_FillDialogWithControls(HWND, const void*, eON_DialogTemplate*, HINSTANCE, WINBOOL)"
          ;
          puVar18[-10] = 0x93b;
          puVar18[-0xb] =
               (uint)
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp"
          ;
          puVar18[-0xc] = (uint)"control";
                    /* try { // try from 04188627 to 0418864d has its CatchHandler @ 0418876f */
          puVar18[-0xd] = 0x418862c;
          FUN_0400a810();
        }
        if ((local_48 & 0xf) == 7) {
          local_20[0] = iVar5;
          if (local_28 == local_24) {
            puVar18[-0xb] = (uint)local_28;
            puVar18[-10] = (uint)local_20;
            puVar18[-0xc] = (uint)&local_2c;
            puVar18[-0xd] = 0x418864e;
            FUN_04188990();
          }
          else {
            piVar9 = (int *)0x0;
            if (local_28 != (int *)0x0) {
              *local_28 = iVar5;
              piVar9 = local_28;
            }
            local_28 = piVar9 + 1;
          }
        }
        *(wchar16 **)(iVar5 + 0x44) = local_44;
        local_44 = (wchar16 *)((int)local_44 + 1);
      } while (local_6c != local_44);
    }
    while (iVar5 = (int)local_28 - local_2c >> 2, iVar5 != 0) {
      piVar9 = *(int **)(local_2c + -4 + iVar5 * 4);
      local_28 = local_28 + -1;
      iVar5 = *piVar9;
      *puVar16 = (uint)piVar9;
      pcVar3 = *(code **)(iVar5 + 0x94);
      puVar16[-1] = 0x41884d0;
      (*pcVar3)();
    }
    if (local_2c != 0) {
      *puVar16 = local_2c;
      puVar16[-1] = 0x41884ed;
      operator_delete((void *)*puVar16);
    }
    if (param_4 != 0) {
      if (local_60 == (int *)0x271a) {
        puVar16[1] = (uint)"Desktop HWND supplied in SendMessageW()";
        *puVar16 = 10;
        puVar16[-1] = 0x4188761;
        FUN_0402cd10();
      }
      else {
        if (local_60 == (int *)0xffff) {
          puVar16[1] = (uint)"HWND_BROADCAST not supported in SendMessageW(). Add it.";
          *puVar16 = 0xf;
          puVar16[-1] = 0x4188748;
          FUN_0402cd10();
        }
        *puVar16 = *(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
        puVar16[-1] = 0x4188522;
        thread_SuspendPoint();
        *puVar16 = (uint)local_60;
        puVar16[-1] = 0x418852d;
        cVar4 = FUN_0404ecd0();
        if (cVar4 == '\0') {
          *puVar16 = 0x578;
          puVar16[-1] = 0x418870c;
          eON_SetLastError();
          puVar16 = puVar16 + -1;
        }
        else {
          *puVar16 = param_5;
          puVar16[-1] = 0x418854a;
          eON_SendMessageW();
          puVar16 = puVar16 + -1;
        }
      }
      if (((local_70 & 0x10000000) != 0) && (local_60 != (int *)0x271a)) {
        *puVar16 = (uint)local_60;
        puVar16[-1] = 0x41886e4;
        cVar4 = FUN_0404ecd0();
        piVar9 = local_60;
        if (cVar4 == '\0') {
          *puVar16 = 0x578;
          puVar16[-1] = 0x4188720;
          eON_SetLastError();
        }
        else {
          puVar16[1] = 1;
          *puVar16 = (uint)piVar9;
          puVar16[-1] = 0x41886fb;
          eON_ShowWindow();
        }
      }
    }
  }
  return local_60;
}

// --- eON_Int_UncheckOtherRadioButtonsInGroup @0x041850d0 ---
/* source: windowFunctions */

void eON_Int_UncheckOtherRadioButtonsInGroup(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int **ppiVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int in_FS_OFFSET;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  
  if ((param_1[10] & 0x18000000U) != 0x10000000) {
    local_20 = "void eON_Int_UncheckOtherRadioButtonsInGroup(HWND)";
    local_24 = 0x956;
    local_28 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp";
    local_2c = (int *)0x434b344;
    local_30 = (int *)0x418510f;
    FUN_0400a810();
  }
  local_28 = (char *)0x1;
  local_2c = param_1;
  local_30 = (int *)0x418511f;
  piVar5 = (int *)eON_GetWindow();
  ppiVar7 = &local_34;
  local_38 = 0x418512c;
  local_34 = piVar5;
  cVar4 = FUN_0404ecd0();
  if (cVar4 == '\0') {
    local_34 = (int *)0x578;
    local_38 = 0x4185299;
    eON_SetLastError();
    ppiVar3 = (int **)&local_38;
  }
  else {
    local_30 = (int *)0x0;
    if (param_1 != piVar5) {
      local_30 = param_1;
    }
    local_2c = (int *)0x0;
    local_38 = 0x4185152;
    local_34 = piVar5;
    piVar6 = (int *)(**(code **)(*piVar5 + 0xbc))();
    ppiVar3 = &local_34;
    if (piVar6 != (int *)0x0) goto LAB_0418519b;
  }
  ppiVar7 = ppiVar3;
  ppiVar7[3] = (int *)"void eON_Int_UncheckOtherRadioButtonsInGroup(HWND)";
  piVar6 = (int *)0x0;
  ppiVar7[2] = (int *)0x95a;
  ppiVar7[1] = (int *)
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp"
  ;
  *ppiVar7 = (int *)"sibling";
  ppiVar7[-1] = (int *)0x41852c2;
  FUN_0400a810();
LAB_0418519b:
  if (param_1 == piVar6) {
    return;
  }
  do {
    if ((piVar6[10] & 0xfU) == 9) {
      if (piVar6 == (int *)0x271a) {
        ppiVar7[1] = (int *)"Desktop HWND supplied in SendMessageA().";
        *ppiVar7 = (int *)0xa;
        ppiVar7[-1] = (int *)0x41852db;
        FUN_0402cd10();
        goto LAB_04185160;
      }
      if (piVar6 == (int *)0xffff) {
        ppiVar7[1] = (int *)"HWND_BROADCAST not supported in SendMessageA(). Add it.";
        *ppiVar7 = (int *)0xf;
        ppiVar7[-1] = (int *)0x4185288;
        FUN_0402cd10();
      }
      *ppiVar7 = (int *)*(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
      ppiVar7[-1] = (int *)0x41851da;
      thread_SuspendPoint();
      *ppiVar7 = piVar6;
      ppiVar7[-1] = (int *)0x41851e2;
      cVar4 = FUN_0404ecd0();
      if (cVar4 == '\0') {
        *ppiVar7 = (int *)0x578;
        ppiVar7[-1] = (int *)0x418526c;
        eON_SetLastError();
        ppiVar7 = ppiVar7 + -1;
        goto LAB_04185160;
      }
      *ppiVar7 = (int *)0x0;
      ppiVar7[-1] = (int *)0x41851fb;
      eON_SendMessageA();
      puVar8 = ppiVar7 + -1;
      ppiVar7[-1] = piVar5;
      ppiVar7[-2] = (int *)0x4185206;
      cVar4 = FUN_0404ecd0();
      ppiVar7 = ppiVar7 + -1;
      puVar9 = puVar8;
      if (cVar4 != '\0') goto LAB_04185170;
LAB_04185210:
      *puVar9 = 0x578;
      puVar9[-1] = 0x418521c;
      eON_SetLastError();
      ppiVar7 = (int **)(puVar9 + -1);
    }
    else {
LAB_04185160:
      *ppiVar7 = piVar5;
      ppiVar7[-1] = (int *)0x4185168;
      cVar4 = FUN_0404ecd0();
      puVar9 = ppiVar7;
      if (cVar4 == '\0') goto LAB_04185210;
LAB_04185170:
      if (piVar6 == piVar5) {
        piVar6 = (int *)0x0;
      }
      iVar1 = *piVar5;
      ppiVar7[2] = (int *)0x0;
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar6;
      pcVar2 = *(code **)(iVar1 + 0xbc);
      ppiVar7[-1] = (int *)0x4185191;
      piVar6 = (int *)(*pcVar2)();
      if (piVar6 != (int *)0x0) goto LAB_0418519b;
    }
    piVar6 = (int *)0x0;
    ppiVar7[3] = (int *)"void eON_Int_UncheckOtherRadioButtonsInGroup(HWND)";
    ppiVar7[2] = (int *)0x960;
    ppiVar7[1] = (int *)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp"
    ;
    *ppiVar7 = (int *)"sibling";
    ppiVar7[-1] = (int *)0x4185245;
    FUN_0400a810();
    if (param_1 == (int *)0x0) {
      return;
    }
  } while( true );
}

// --- eON_SendMessageA @0x04180d50 ---
/* source: windowFunctions */

undefined4 __regparm3 eON_SendMessageA(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_74;
  int *local_70 [9];
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_34 [4];
  
  iVar8 = -1;
  local_4c = param_4;
  ppiVar6 = local_70;
  local_48 = param_3;
  local_44 = param_2;
  if (param_1 != (int *)0x271a) {
    local_74 = 0x4180d85;
    local_70[0] = param_1;
    cVar3 = FUN_0404ecd0();
    if (cVar3 == '\0') {
      local_70[0] = (int *)0x578;
      iVar8 = 0;
      local_74 = 0x4180ebe;
      eON_SetLastError();
      ppiVar6 = (int **)&local_74;
    }
    else {
      iVar8 = param_1[0xe];
      ppiVar6 = local_70;
    }
  }
  ppiVar6[-1] = (int *)0x4180d95;
  iVar4 = eON_GetCurrentThreadId();
  if (iVar4 == iVar8) {
    pcVar1 = (code *)param_1[9];
    if (pcVar1 != (code *)0x0) {
      if (((uint)pcVar1 & 0xffff0000) == 0) {
        ppiVar6[3] = (int *)"LRESULT eON_SendMessageA(HWND, UINT, WPARAM, LPARAM)";
        ppiVar6[2] = (int *)0xb6c;
        ppiVar6[1] = (int *)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp"
        ;
        *ppiVar6 = (int *)"( ( (SIZE_T) (wndproc) & ~ (SIZE_T) 0xFFFF ) != 0 )";
        ppiVar6[-1] = (int *)0x4180e4f;
        FUN_0400a810();
      }
      *ppiVar6 = param_1;
      ppiVar6[3] = (int *)local_4c;
      ppiVar6[2] = (int *)local_48;
      ppiVar6[1] = (int *)local_44;
      ppiVar6[-1] = (int *)0x4180e69;
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    ppiVar6[4] = (int *)0x0;
    iVar8 = *param_1;
    *ppiVar6 = param_1;
    ppiVar6[3] = (int *)local_4c;
    ppiVar6[2] = (int *)local_48;
    ppiVar6[1] = (int *)local_44;
    pcVar1 = *(code **)(iVar8 + 0xa0);
    ppiVar6[-1] = (int *)0x4180eee;
    local_34[0] = (*pcVar1)();
  }
  else {
    ppiVar6[-1] = (int *)0x4180d9e;
    iVar4 = FUN_0415b4f0();
    ppiVar6[7] = (int *)0x0;
    ppiVar6[1] = param_1;
    ppiVar6[5] = (int *)iVar4;
    ppiVar6[6] = local_34;
    ppiVar6[4] = (int *)local_4c;
    *ppiVar6 = (int *)iVar8;
    ppiVar6[3] = (int *)local_48;
    ppiVar6[2] = (int *)local_44;
    ppiVar6[-1] = (int *)0x4180dd4;
    eON_Int_SendMessage_Enqueue();
    piVar2 = (int *)ppiVar6;
    do {
      piVar7 = piVar2;
      piVar7[-1] = 0x4180ddd;
      eON_Int_MsgQueue_PumpSend();
      piVar7[1] = 1;
      *piVar7 = iVar4;
      piVar7[-1] = 0x4180ded;
      iVar8 = eON_WaitForSingleObject();
      piVar2 = piVar7 + -2;
    } while (iVar8 == 0x102);
    if (iVar8 != 0) {
      piVar7[-1] = (int)"Wait for another thread to process sent message failed!";
      piVar7[-2] = 10;
      piVar7[-3] = 0x4180e94;
      FUN_0402cd10();
      return 0;
    }
  }
  return local_34[0];
}

// --- eON_SetWindowPos @0x04186400 ---
/* source: windowFunctions */

undefined4 __regparm3
eON_SetWindowPos(int *****param_1,int param_2,int ****param_3,int ****param_4,int param_5,
                int ****param_6,uint param_7)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  char cVar3;
  int iVar4;
  int ****ppppiVar5;
  undefined4 uVar6;
  int ****ppppiVar7;
  int *piVar8;
  int *****pppppiVar9;
  int ****ppppiVar10;
  int in_FS_OFFSET;
  int aiStack_c8 [10];
  int ****local_a0;
  char *local_9c;
  int local_98 [7];
  int local_7c;
  int ***local_78;
  int ***local_74;
  int ****local_6c;
  int local_68;
  int ***local_64;
  int ***local_60;
  int local_5c;
  int ***local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34 [4];
  
  local_5c = param_5;
  local_60 = (int ***)param_4;
  local_58 = (int ***)param_6;
  local_54 = param_7;
  local_6c = (int ****)param_1;
  local_68 = param_2;
  local_64 = (int ***)param_3;
  if (((param_7 & 0x20) != 0) && ((*(byte *)((int)param_1 + 0x2b) & 0x40) == 0)) {
    aiStack_c8[9] = 0x4186888;
    local_a0 = (int ****)param_1;
    (*(code *)(*param_1)[0x1b])();
  }
  pppppiVar9 = &local_a0;
  if ((param_7 & 0x400) == 0) {
    if (param_1 == (int *****)0x271a) {
      local_9c = "Desktop HWND supplied in SendMessageA().";
      local_a0 = (int ****)0xa;
      aiStack_c8[9] = 0x4186aa4;
      FUN_0402cd10();
      pppppiVar9 = &local_a0;
    }
    else {
      if (param_1 == (int *****)0xffff) {
        local_9c = "HWND_BROADCAST not supported in SendMessageA(). Add it.";
        local_a0 = (int ****)0xf;
        aiStack_c8[9] = 0x4186a4c;
        FUN_0402cd10();
      }
      local_a0 = *(int *****)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
      aiStack_c8[9] = 0x418679c;
      thread_SuspendPoint();
      aiStack_c8[9] = 0x41867a4;
      local_a0 = (int ****)param_1;
      cVar3 = FUN_0404ecd0();
      if (cVar3 == '\0') {
        local_a0 = (int ****)0x578;
        aiStack_c8[9] = 0x41868bc;
        eON_SetLastError();
        pppppiVar9 = (int *****)(aiStack_c8 + 9);
      }
      else {
        local_a0 = (int ****)&local_6c;
        aiStack_c8[9] = 0x41867c0;
        eON_SendMessageA();
        pppppiVar9 = (int *****)(aiStack_c8 + 9);
      }
    }
  }
  if ((local_54 & 0x20) != 0) {
    pppppiVar9[1] =
         (int ****)"SetWindowPos wants us to draw frame around window. Ignoring that for now.";
    *pppppiVar9 = (int ****)0xa;
    pppppiVar9[-1] = (int ****)0x4186744;
    FUN_0402cd10();
  }
  if ((local_54 & 0x6200) != 0) {
    pppppiVar9[2] = (int ****)local_54;
    pppppiVar9[1] = (int ****)"One or more unhandled flags in SetWindowPos ( %#x )";
    *pppppiVar9 = (int ****)0xa;
    pppppiVar9[-1] = (int ****)0x4186768;
    FUN_0402cd10();
  }
  if ((*(byte *)((int)param_1 + 0x2b) & 0x40) == 0) {
    if ((local_54 & 1) == 0) {
      iVar4 = local_5c;
      ppppiVar10 = (int ****)local_58;
      if ((local_54 & 2) != 0) goto LAB_041865f0;
LAB_041866c5:
      local_74 = local_64;
      local_78 = local_60;
    }
    else {
      iVar4 = (int)param_1[7] - (int)param_1[5];
      ppppiVar10 = (int ****)((int)param_1[8] - (int)param_1[6]);
      if ((local_54 & 2) == 0) goto LAB_041866c5;
LAB_041865f0:
      local_74 = (int ***)param_1[5];
      local_78 = (int ***)param_1[6];
    }
    pppppiVar9[-1] = (int ****)0x4186601;
    cVar3 = FUN_0402d6a0();
    if (((cVar3 == '\0') && ((local_54 & 4) == 0)) && ((*(byte *)((int)param_1 + 0x2b) & 0x10) != 0)
       ) {
      ppppiVar1 = *param_1;
      *pppppiVar9 = (int ****)param_1;
      pppppiVar9[1] = (int ****)local_68;
      pppiVar2 = ppppiVar1[0x20];
      pppppiVar9[-1] = (int ****)0x4186625;
      (*(code *)pppiVar2)();
    }
    if ((local_54 & 3) != 3) {
      if ((local_54 & 2) == 0) {
        ppppiVar1 = param_1[5];
        param_1[5] = (int ****)local_74;
        param_1[7] = (int ****)(((int)local_74 + (int)param_1[7]) - (int)ppppiVar1);
        ppppiVar1 = param_1[6];
        param_1[6] = (int ****)local_78;
        param_1[8] = (int ****)(((int)local_78 + (int)param_1[8]) - (int)ppppiVar1);
      }
      cVar3 = '\0';
      if ((local_54 & 1) == 0) {
        local_78 = (int ***)param_1[6];
        if (((int)param_1[7] - (int)param_1[5] != iVar4) ||
           (local_74 = (int ***)((int)param_1[8] - (int)local_78), (int ****)local_74 != ppppiVar10)
           ) {
          cVar3 = '\x01';
          param_1[7] = (int ****)(iVar4 + (int)param_1[5]);
          param_1[8] = (int ****)((int)ppppiVar10 + (int)local_78);
        }
      }
      ppppiVar10 = param_1[6];
      param_1[1] = param_1[5];
      param_1[2] = ppppiVar10;
      param_1[3] = param_1[7];
      param_1[4] = param_1[8];
      piVar8 = (int *)pppppiVar9;
      if (((uint)param_1[10] & 0xc00000) == 0xc00000) {
        local_7c = CONCAT31(local_7c._1_3_,cVar3);
        *pppppiVar9 = (int ****)0x4;
        pppppiVar9[-1] = (int ****)0x418697f;
        iVar4 = eON_GetSystemMetrics();
        piVar8 = (int *)(pppppiVar9 + -1);
        param_1[2] = (int ****)((int)ppppiVar10 + iVar4);
        cVar3 = (char)local_7c;
      }
      if (cVar3 != '\0') {
        piVar8[-1] = 0x4186905;
        cVar3 = FUN_0402d680();
        if (cVar3 == '\0') {
          piVar8[-1] = 0x4186915;
          cVar3 = FUN_0402d6a0();
          if (cVar3 == '\0') {
            ppppiVar10 = *param_1;
            *piVar8 = (int)param_1;
            piVar8[1] = (int)&local_50;
            pppiVar2 = ppppiVar10[0x21];
            piVar8[-1] = 0x418692f;
            (*(code *)pppiVar2)();
            ppppiVar10 = *param_1;
            piVar8[5] = 0;
            piVar8[4] = (int)param_1[4] - (int)param_1[2];
            ppppiVar1 = param_1[3];
            ppppiVar5 = param_1[1];
            *piVar8 = (int)param_1;
            piVar8[3] = (int)ppppiVar1 - (int)ppppiVar5;
            piVar8[2] = local_4c;
            piVar8[1] = local_50;
            pppiVar2 = ppppiVar10[0x1f];
            piVar8[-1] = 0x4186961;
            (*(code *)pppiVar2)();
          }
        }
      }
      goto LAB_0418650b;
    }
  }
  else if ((local_54 & 3) != 3) {
    pppppiVar9[1] = (int ****)0x1;
    *pppppiVar9 = (int ****)param_1;
    pppppiVar9[-1] = (int ****)0x4186491;
    iVar4 = eON_GetWindow();
    piVar8 = (int *)(pppppiVar9 + -2);
    if (iVar4 == 0) {
      pppppiVar9[1] = (int ****)"WINBOOL eON_SetWindowPos(HWND, HWND, INT, INT, INT, INT, UINT)";
      *pppppiVar9 = (int ****)0x306;
      pppppiVar9[-1] =
           (int ****)
           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp"
      ;
      pppppiVar9[-2] = (int ****)"parentWindow";
      pppppiVar9[-3] = (int ****)0x4186a7f;
      local_7c = iVar4;
      FUN_0400a810();
      iVar4 = local_7c;
    }
    if ((local_54 & 2) == 0) {
      if (iVar4 == 0x271a) {
        pppppiVar9[-3] = (int ****)0x4186aae;
        uVar6 = OpenGLDisplay_GetPrimary();
        pppppiVar9[2] = (int ****)local_34;
        pppppiVar9[1] = (int ****)&local_3c;
        *pppppiVar9 = (int ****)&local_38;
        pppppiVar9[-1] = (int ****)&local_40;
        pppppiVar9[-2] = (int ****)uVar6;
        pppppiVar9[-3] = (int ****)0x4186ad2;
        opengl_objects_04022160();
        param_1[2] = (int ****)0x0;
        param_1[1] = (int ****)0x0;
        param_1[3] = (int ****)(local_3c - local_40);
        param_1[4] = (int ****)(local_34[0] - local_38);
      }
      else {
        ppppiVar7 = (int ****)(*(int *)(iVar4 + 4) + (int)local_64);
        ppppiVar10 = param_1[1];
        ppppiVar1 = param_1[2];
        ppppiVar5 = (int ****)(*(int *)(iVar4 + 8) + (int)local_60);
        param_1[1] = ppppiVar7;
        param_1[3] = (int ****)((int)ppppiVar7 + ((int)param_1[3] - (int)ppppiVar10));
        param_1[2] = ppppiVar5;
        param_1[4] = (int ****)(((int)param_1[4] - (int)ppppiVar1) + (int)ppppiVar5);
      }
    }
    if ((local_54 & 1) == 0) {
      param_1[3] = (int ****)((int)param_1[1] + local_5c);
      param_1[4] = (int ****)((int)param_1[2] + (int)local_58);
    }
    ppppiVar10 = param_1[2];
    param_1[5] = param_1[1];
    param_1[6] = ppppiVar10;
    param_1[7] = param_1[3];
    param_1[8] = param_1[4];
    if (((uint)param_1[10] & 0xc00000) == 0xc00000) {
      pppppiVar9[-2] = (int ****)0x4;
      pppppiVar9[-3] = (int ****)0x41869ec;
      iVar4 = eON_GetSystemMetrics();
      piVar8 = (int *)(pppppiVar9 + -3);
      param_1[6] = (int ****)((int)ppppiVar10 - iVar4);
    }
LAB_0418650b:
    pppppiVar9 = (int *****)piVar8;
    if (((local_54 & 3) != 3) && ((local_54 & 0x100) != 0)) {
      piVar8[2] = 0;
      piVar8[1] = 0;
      *piVar8 = (int)local_6c;
      piVar8[-1] = 0x4186535;
      eON_InvalidateRect();
      pppppiVar9 = (int *****)(piVar8 + -3);
    }
  }
  ppppiVar10 = local_6c;
  if ((local_54 & 7) != 7) {
    if ((int *****)local_6c == (int *****)0x271a) {
      pppppiVar9[1] = (int ****)"Desktop HWND supplied in SendMessageA().";
      *pppppiVar9 = (int ****)0xa;
      pppppiVar9[-1] = (int ****)0x41869c4;
      FUN_0402cd10();
    }
    else {
      if ((int *****)local_6c == (int *****)0xffff) {
        pppppiVar9[1] = (int ****)"HWND_BROADCAST not supported in SendMessageA(). Add it.";
        *pppppiVar9 = (int ****)0xf;
        pppppiVar9[-1] = (int ****)0x4186a2c;
        FUN_0402cd10();
      }
      *pppppiVar9 = (int ****)*(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
      pppppiVar9[-1] = (int ****)0x4186579;
      thread_SuspendPoint();
      *pppppiVar9 = ppppiVar10;
      pppppiVar9[-1] = (int ****)0x4186581;
      cVar3 = FUN_0404ecd0();
      if (cVar3 == '\0') {
        *pppppiVar9 = (int ****)0x578;
        pppppiVar9[-1] = (int ****)0x41868ec;
        eON_SetLastError();
        pppppiVar9 = pppppiVar9 + -1;
      }
      else {
        *pppppiVar9 = (int ****)&local_6c;
        pppppiVar9[-1] = (int ****)0x418659d;
        eON_SendMessageA();
        pppppiVar9 = pppppiVar9 + -1;
      }
    }
  }
  ppppiVar10 = local_6c;
  if ((local_54 & 0x40) == 0) {
    if (((local_54 & 0x80) == 0) || ((int *****)local_6c == (int *****)0x271a)) goto LAB_041865b5;
    *pppppiVar9 = local_6c;
    pppppiVar9[-1] = (int ****)0x4186827;
    cVar3 = FUN_0404ecd0();
    if (cVar3 != '\0') {
      pppppiVar9[1] = (int ****)0x0;
      *pppppiVar9 = ppppiVar10;
      pppppiVar9[-1] = (int ****)0x418683f;
      eON_ShowWindow();
      goto LAB_041865b5;
    }
  }
  else {
    if ((int *****)local_6c == (int *****)0x271a) goto LAB_041865b5;
    *pppppiVar9 = local_6c;
    pppppiVar9[-1] = (int ****)0x41867e7;
    cVar3 = FUN_0404ecd0();
    if (cVar3 != '\0') {
      pppppiVar9[1] = (int ****)0x5;
      *pppppiVar9 = ppppiVar10;
      pppppiVar9[-1] = (int ****)0x41867ff;
      eON_ShowWindow();
      goto LAB_041865b5;
    }
  }
  *pppppiVar9 = (int ****)0x578;
  pppppiVar9[-1] = (int ****)0x41868d4;
  eON_SetLastError();
  pppppiVar9 = pppppiVar9 + -1;
LAB_041865b5:
  ppppiVar10 = local_6c;
  if ((local_54 & 0x10) == 0) {
    if ((int *****)local_6c == (int *****)0x271a) {
      *pppppiVar9 = (int ****)0x5;
      pppppiVar9[-1] = (int ****)0x4186b06;
      eON_SetLastError();
    }
    else if ((int *****)local_6c == (int *****)0x0) {
      pppppiVar9[-1] = (int ****)0x41869d5;
      eON_GetFocus();
    }
    else {
      *pppppiVar9 = local_6c;
      pppppiVar9[-1] = (int ****)0x41866ff;
      cVar3 = FUN_0404ecd0();
      if (cVar3 == '\0') {
        *pppppiVar9 = (int ****)0x578;
        pppppiVar9[-1] = (int ****)0x4186a0c;
        eON_SetLastError();
      }
      else {
        ppppiVar1 = (int ****)ppppiVar10[0xe];
        pppppiVar9[-1] = (int ****)0x418670f;
        ppppiVar5 = (int ****)eON_GetCurrentThreadId();
        if (ppppiVar1 == ppppiVar5) {
          pppppiVar9[-1] = (int ****)0x418671c;
          eON_GetFocus();
          ppppiVar1 = (int ****)*ppppiVar10;
          *pppppiVar9 = ppppiVar10;
          pppiVar2 = ppppiVar1[0x1d];
          pppppiVar9[-1] = (int ****)0x4186724;
          (*(code *)pppiVar2)();
        }
      }
    }
  }
  return 1;
}

// --- attached helper FUN_00186c60 @0x04186c60 (call-graph exclusive to this TU) ---
int FUN_04186c60(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  int **ppiVar6;
  int **ppiVar7;
  int iVar8;
  int in_FS_OFFSET;
  undefined4 uStack_54;
  int *local_50;
  char *local_4c;
  undefined4 uStack_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 *local_18;
  
  uVar4 = param_4;
  piVar3 = param_1;
  local_18 = &param_1;
  ppiVar7 = &local_40;
  iVar8 = 0;
  local_24 = param_2;
  local_28 = param_3;
  local_2c = param_6;
  if (param_1 == (int *)0x271a) {
    return 0;
  }
  local_30 = param_5;
  local_40 = param_1;
  uStack_44 = 0x4186cab;
  cVar5 = FUN_0404ecd0();
  if (cVar5 != '\0') {
    local_38 = local_30;
    local_34 = 0x14;
    local_3c = uVar4;
    local_40 = local_28;
    uStack_44 = 0x4186cd4;
    iVar8 = eON_SetWindowPos();
    ppiVar6 = &local_50;
    ppiVar7 = &local_50;
    if (iVar8 == 0) {
      return 0;
    }
    if (local_2c == 0) {
      return iVar8;
    }
    local_50 = piVar3;
    uStack_54 = 0x4186cec;
    cVar5 = FUN_0404ecd0();
    if (cVar5 != '\0') {
      if (piVar3[0x16] != 0) {
        if (piVar3 == (int *)0xffff) {
          local_4c = "HWND_BROADCAST not supported in SendMessageA(). Add it.";
          local_50 = (int *)0xf;
          uStack_54 = 0x4186da8;
          FUN_0402cd10();
        }
        local_50 = *(int **)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
        uStack_54 = 0x4186d54;
        thread_SuspendPoint();
        local_50 = piVar3;
        uStack_54 = 0x4186d5c;
        cVar5 = FUN_0404ecd0();
        if (cVar5 == '\0') {
          local_50 = (int *)0x578;
          uStack_54 = 0x4186d8c;
          eON_SetLastError();
          ppiVar6 = (int **)&uStack_54;
        }
        else {
          local_50 = (int *)0x0;
          uStack_54 = 0x4186d75;
          eON_SendMessageA();
          ppiVar6 = (int **)&uStack_54;
        }
      }
      iVar1 = *piVar3;
      *ppiVar6 = piVar3;
      pcVar2 = *(code **)(iVar1 + 0x78);
      ppiVar6[-1] = (int *)0x4186cff;
      (*pcVar2)();
      return iVar8;
    }
  }
  *ppiVar7 = (int *)0x578;
  ppiVar7[-1] = (int *)0x4186d2c;
  eON_SetLastError();
  return iVar8;
}

