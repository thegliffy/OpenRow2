// Recovered source: eon2/src/dlls/win32/shell32/shell32.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- WildcardAndFilenameToFullPath @0x0416aab0 ---
/* source: shell32 */

void __regparm3 WildcardAndFilenameToFullPath(int *param_1,short *param_2)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  short *psVar10;
  short *psVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  uint *puVar16;
  undefined1 local_129c [16];
  int local_128c;
  int local_1288;
  int local_1284;
  int local_1280;
  undefined4 local_127c;
  int local_1278;
  short *local_1274;
  void *local_1270;
  undefined1 local_126c [2048];
  short local_a6c [1024];
  uint local_26c [11];
  short local_240;
  short local_23e;
  short local_23c;
  
  puVar14 = (uint *)local_129c;
  if (*param_2 != 0) {
    local_1284 = 0;
    do {
      *puVar14 = (uint)param_2;
      puVar14[-1] = 0x416aae8;
      local_1274 = param_2;
      local_1280 = eON_lstrlenW();
      puVar12 = puVar14 + -1;
      if ((*local_1274 == 0x5c) || ((*local_1274 != 0 && (local_1274[1] == 0x3a)))) {
        puVar14[-1] = (uint)local_a6c;
        *puVar14 = (uint)local_1274;
        puVar14[-2] = 0x416afdc;
        eON_lstrcpyW();
        local_127c = 0;
        puVar13 = puVar14 + -3;
      }
      else {
        if (local_1284 == 0) {
          *puVar14 = (uint)local_126c;
          puVar14[-1] = 0x400;
          puVar14[-2] = 0x416ab34;
          eON_GetCurrentDirectoryW();
          puVar12 = puVar14 + -3;
        }
        puVar12[1] = (uint)local_126c;
        *puVar12 = (uint)local_a6c;
        puVar12[-1] = 0x416ab43;
        eON_lstrcpyW();
        puVar12[-1] = (uint)&DAT_0432a3a2;
        puVar12[-2] = (uint)local_a6c;
        puVar12[-3] = 0x416ab56;
        eON_lstrcatW();
        puVar12[-4] = (uint)local_a6c;
        puVar12[-3] = (uint)local_1274;
        puVar12[-5] = 0x416ab6b;
        eON_lstrcatW();
        local_127c = 1;
        local_1284 = 1;
        puVar13 = puVar12 + -6;
      }
      psVar10 = local_1274 + local_1280;
      sVar2 = *psVar10;
      psVar11 = psVar10;
      sVar3 = sVar2;
      if (psVar10 < local_1274) {
LAB_0416abc2:
        psVar11 = (short *)0x0;
joined_r0x0416abc8:
        while (sVar2 != 0x2a) {
          psVar10 = psVar10 + -1;
          if (psVar10 < psVar11) goto LAB_0416abe2;
          sVar2 = *psVar10;
        }
        if (psVar10 == (short *)0xfffffffe) {
LAB_0416abe2:
          iVar6 = param_1[1];
          if (param_1[2] == iVar6) goto LAB_0416af9f;
LAB_0416abee:
          pvVar9 = (void *)*param_1;
          goto LAB_0416abf0;
        }
        *puVar13 = (uint)local_a6c;
        puVar13[1] = (uint)local_26c;
        puVar13[-1] = 0x416aceb;
        local_1278 = eON_FindFirstFileW();
        puVar14 = puVar13 + -2;
        puVar16 = puVar13;
        if (local_1278 != -1) {
          do {
            if (local_240 == 0x2e) {
              sVar3 = local_23c;
              if (local_23e != 0x2e) {
                sVar3 = local_23e;
              }
              piVar15 = (int *)(puVar16 + -2);
              if (sVar3 != 0) goto LAB_0416ad43;
            }
            else {
LAB_0416ad43:
              iVar6 = param_1[1];
              if (param_1[2] == iVar6) {
                iVar5 = *param_1;
                param_1[2] = (iVar6 + 8) * 2;
                iVar7 = (iVar6 + 8) * 0x30;
                if (iVar5 == 0) {
                  puVar16[-2] = iVar7;
                  puVar16[-3] = 0x416aff6;
                  pvVar9 = malloc(puVar16[-2]);
                  *param_1 = (int)pvVar9;
                }
                else {
                  puVar16[-1] = iVar7;
                  puVar16[-2] = iVar5;
                  puVar16[-3] = 0x416af3d;
                  pvVar9 = realloc((void *)puVar16[-2],puVar16[-1]);
                  iVar6 = param_1[1];
                  *param_1 = (int)pvVar9;
                }
              }
              else {
                pvVar9 = (void *)*param_1;
              }
              puVar16[-2] = (uint)local_a6c;
              puVar1 = (undefined4 *)((int)pvVar9 + iVar6 * 0x18);
              puVar16[-3] = 0x416ad5f;
              iVar6 = eON_lstrlenW();
              psVar10 = local_a6c + iVar6;
              if (psVar10 < local_a6c) {
LAB_0416ad92:
                *puVar16 = (uint)"WCHAR* WildcardAndFilenameToFullPath(const WCHAR*, const WCHAR*)";
                puVar16[-1] = 0x4a;
                puVar16[-2] = (uint)
                              "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/shell32/shell32.cpp"
                ;
                puVar16[-3] = (uint)&PTR_DAT_042dc67e;
                puVar16[-4] = 0x416adb6;
                FUN_0400a810();
                psVar10 = (short *)0x0;
              }
              else {
                sVar3 = local_a6c[iVar6];
                while (sVar3 != 0x5c) {
                  psVar10 = psVar10 + -1;
                  if (psVar10 < local_a6c) goto LAB_0416ad92;
                  sVar3 = *psVar10;
                }
                psVar10 = psVar10 + 1;
                if (psVar10 == (short *)0x0) goto LAB_0416ad92;
              }
              local_128c = (int)psVar10 - (int)local_a6c >> 1;
              puVar16[-3] = (uint)&local_240;
              puVar16[-4] = 0x416add8;
              local_1288 = eON_lstrlenW();
              local_1288 = local_1288 + 1;
              puVar16[-4] = (local_128c + local_1288) * 2;
              puVar16[-5] = 0x416adf7;
              local_1270 = malloc(puVar16[-4]);
              puVar16[-3] = (uint)local_a6c;
              puVar16[-4] = (uint)local_1270;
              local_128c = local_128c * 2;
              puVar16[-2] = local_128c;
              puVar16[-5] = 0x416ae1b;
              memcpy((void *)puVar16[-4],(void *)puVar16[-3],puVar16[-2]);
              puVar16[-2] = local_1288 * 2;
              puVar16[-3] = (uint)&local_240;
              puVar16[-4] = local_128c + (int)local_1270;
              puVar16[-5] = 0x416ae45;
              memcpy((void *)puVar16[-4],(void *)puVar16[-3],puVar16[-2]);
              puVar16[-4] = (uint)local_1270;
              puVar16[-5] = 0x416ae53;
              local_1288 = eON_lstrlenW();
              puVar16[-5] = local_1288 * 2 + 2;
              puVar16[-6] = 0x416ae6a;
              pvVar9 = malloc(puVar16[-5]);
              *puVar1 = pvVar9;
              puVar16[-5] = (uint)pvVar9;
              puVar16[-4] = (uint)local_1270;
              puVar16[-6] = 0x416ae7e;
              eON_lstrcpyW();
              psVar4 = (short *)*puVar1;
              piVar15 = (int *)(puVar16 + -7);
              psVar11 = psVar4 + local_1288 + -1;
              psVar10 = (short *)0x0;
              if (psVar4 <= psVar11) {
                do {
                  if (*psVar11 == 0x5c) {
                    psVar10 = psVar11 + 1;
                    goto LAB_0416aea8;
                  }
                  psVar11 = psVar11 + -1;
                } while (psVar4 <= psVar11);
                psVar10 = (short *)0x0;
              }
LAB_0416aea8:
              if (psVar10 < psVar4) {
                psVar10 = (short *)0x0;
              }
              puVar1[1] = psVar10;
              puVar16[-7] = (uint)local_1270;
              puVar16[-8] = 0x416aec3;
              free((void *)puVar16[-7]);
              puVar1[3] = 1;
              puVar1[5] = 1;
              puVar1[2] = local_26c[0];
              puVar1[4] = local_127c;
              if ((local_26c[0] & 0x10) != 0) {
                param_1[3] = 1;
              }
              param_1[1] = param_1[1] + 1;
              param_1[5] = 1;
            }
            piVar15[1] = (int)local_26c;
            *piVar15 = local_1278;
            piVar15[-1] = 0x416ad2e;
            iVar6 = eON_FindNextFileW();
            puVar16 = (uint *)piVar15;
          } while (iVar6 != 0);
          piVar15[-2] = local_1278;
          piVar15[-3] = 0x416af5e;
          FUN_0412bad0();
          puVar14 = (uint *)(piVar15 + -3);
        }
      }
      else {
        while (sVar3 != 0x5c) {
          psVar11 = psVar11 + -1;
          if (psVar11 < local_1274) goto LAB_0416abc2;
          sVar3 = *psVar11;
        }
        psVar11 = psVar11 + 1;
        if (psVar11 <= psVar10) goto joined_r0x0416abc8;
        iVar6 = param_1[1];
        if (param_1[2] != iVar6) goto LAB_0416abee;
LAB_0416af9f:
        iVar5 = *param_1;
        param_1[2] = (iVar6 + 8) * 2;
        uVar8 = (iVar6 + 8) * 0x30;
        if (iVar5 == 0) {
          *puVar13 = uVar8;
          puVar13[-1] = 0x416b00c;
          pvVar9 = malloc(*puVar13);
          *param_1 = (int)pvVar9;
        }
        else {
          puVar13[1] = uVar8;
          *puVar13 = iVar5;
          puVar13[-1] = 0x416afc0;
          pvVar9 = realloc((void *)*puVar13,puVar13[1]);
          iVar6 = param_1[1];
          *param_1 = (int)pvVar9;
        }
LAB_0416abf0:
        *puVar13 = (uint)local_a6c;
        puVar1 = (undefined4 *)((int)pvVar9 + iVar6 * 0x18);
        puVar13[-1] = 0x416abfe;
        local_1288 = eON_lstrlenW();
        puVar13[-1] = local_1288 * 2 + 2;
        puVar13[-2] = 0x416ac15;
        pvVar9 = malloc(puVar13[-1]);
        *puVar1 = pvVar9;
        *puVar13 = (uint)local_a6c;
        puVar13[-1] = (uint)pvVar9;
        puVar13[-2] = 0x416ac23;
        eON_lstrcpyW();
        psVar4 = (short *)*puVar1;
        psVar11 = psVar4 + local_1288 + -1;
        psVar10 = (short *)0x0;
        if (psVar4 <= psVar11) {
          do {
            if (*psVar11 == 0x5c) {
              psVar10 = psVar11 + 1;
              goto LAB_0416ac55;
            }
            psVar11 = psVar11 + -1;
          } while (psVar4 <= psVar11);
          psVar10 = (short *)0x0;
        }
LAB_0416ac55:
        if (psVar10 < psVar4) {
          psVar10 = (short *)0x0;
        }
        puVar1[1] = psVar10;
        puVar13[-3] = (uint)local_a6c;
        puVar13[-4] = 0x416ac6a;
        uVar8 = eON_GetFileAttributesW();
        puVar14 = puVar13 + -4;
        puVar1[2] = uVar8;
        puVar1[5] = 0;
        puVar1[3] = (uint)(uVar8 != 0xffffffff);
        puVar1[4] = local_127c;
        if ((uVar8 != 0xffffffff) == 0) {
          param_1[4] = 1;
        }
        if ((uVar8 & 0x10) != 0) {
          param_1[3] = 1;
        }
        param_1[1] = param_1[1] + 1;
      }
      param_2 = local_1274 + local_1280 + 1;
    } while (*param_2 != 0);
  }
  return;
}

// --- eON_Int_ConvertListOfPathsToWideChar @0x0416b5a0 ---
/* source: shell32 */

void * eON_Int_ConvertListOfPathsToWideChar(char *param_1,int param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_20;
  
  if (param_2 != 0) {
    local_38 = 0;
    local_3c = 0;
    local_40 = 0xffffffff;
    local_48 = 0;
    local_44 = param_1;
    local_4c = 0;
    iVar5 = eON_MultiByteToWideChar();
    pvVar4 = malloc(iVar5 * 2 + 2);
    eON_MultiByteToWideChar(0,0,param_1,0xffffffff,pvVar4,iVar5);
    *(undefined2 *)((int)pvVar4 + iVar5 * 2) = 0;
    return pvVar4;
  }
  uVar8 = 1;
  local_20 = 1;
  pcVar6 = param_1;
  puVar1 = &local_4c;
  do {
    puVar7 = puVar1;
    *puVar7 = pcVar6;
    puVar7[-1] = 0x416b5d0;
    sVar2 = strlen((char *)*puVar7);
    puVar7[2] = pcVar6;
    iVar5 = sVar2 + 1;
    puVar7[5] = 0;
    puVar7[4] = 0;
    pcVar6 = pcVar6 + iVar5;
    puVar7[3] = iVar5;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[-1] = 0x416b601;
    iVar3 = eON_MultiByteToWideChar();
    local_20 = local_20 + iVar5;
    uVar8 = uVar8 + iVar3;
    puVar1 = puVar7 + -6;
  } while (*pcVar6 != '\0');
  puVar7[-6] = uVar8 * 2;
  puVar7[-7] = 0x416b619;
  pvVar4 = malloc(puVar7[-6]);
  puVar7[-1] = uVar8;
  puVar7[-2] = pvVar4;
  puVar7[-5] = 0;
  puVar7[-6] = 0;
  puVar7[-3] = local_20;
  puVar7[-4] = param_1;
  puVar7[-7] = 0x416b645;
  eON_MultiByteToWideChar();
  if (((1 < uVar8) && (*(short *)((int)pvVar4 + uVar8 * 2 + -2) == 0)) &&
     (*(short *)((int)pvVar4 + uVar8 * 2 + -4) == 0)) {
    return pvVar4;
  }
  puVar7[-9] = "WCHAR* eON_Int_ConvertListOfPathsToWideChar(const char*, INT)";
  puVar7[-10] = 0x1ee;
  puVar7[-0xb] = 
  "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/shell32/shell32.cpp";
  puVar7[-0xc] = 
  "( targetBufferLen >= 2 ) && ( !result[targetBufferLen-1] && !result[targetBufferLen-2] )";
  puVar7[-0xd] = 0x416b679;
  FUN_0400a810();
  return pvVar4;
}

// --- shell32_0416c260 @0x0416c260 ---
/* source: shell32 */

undefined4
shell32_0416c260(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_5 == 0) {
    FUN_0400a810("pszPath",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/shell32/shell32.cpp"
                 ,0x4aa,"HRESULT eON_SHGetFolderPathA(HWND, INT, HANDLE, DWORD, LPSTR)");
  }
  if ((param_4 == 0) && (param_3 == 0)) {
    uVar1 = FUN_0416a9c0(0,param_5);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// --- shell32_0416c3d0 @0x0416c3d0 ---
/* source: shell32 */

int shell32_0416c3d0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6
                    )

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 local_68 [4];
  undefined4 local_64;
  
  local_64 = 0x416c40d;
  puVar2 = malloc(0x104);
  if (puVar2 == (uint *)0x0) {
    local_64 = 0x416c614;
    FUN_0400a810();
  }
  piVar8 = (int *)&stack0xffffffa0;
  if ((param_4 == 0) && (piVar8 = (int *)&stack0xffffffa0, param_3 == 0)) {
    local_64 = 0x416c43a;
    iVar3 = FUN_0416a9c0();
    piVar8 = (int *)local_68;
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  puVar11 = puVar2;
  if (param_5 != 0) {
    do {
      puVar10 = puVar11;
      uVar4 = *puVar10 + 0xfefefeff & ~*puVar10;
      uVar5 = uVar4 & 0x80808080;
      puVar11 = puVar10 + 1;
    } while (uVar5 == 0);
    if ((uVar4 & 0x8080) == 0) {
      puVar11 = (uint *)((int)puVar10 + 6);
      uVar5 = uVar5 >> 0x10;
    }
    iVar3 = (int)puVar11 + ((-3 - (uint)CARRY1((byte)uVar5,(byte)uVar5)) - (int)puVar2);
    if (*(char *)((int)puVar2 + iVar3 + -1) != '\\') {
      *(undefined1 *)((int)puVar2 + iVar3) = 0x5c;
      iVar3 = iVar3 + 1;
      *(undefined1 *)((int)puVar2 + iVar3) = 0;
    }
    *piVar8 = param_5;
    piVar8[-1] = 0x416c499;
    sVar6 = strlen((char *)*piVar8);
    if (0x104 < sVar6 + iVar3 + 1) {
      *piVar8 = (int)puVar2;
      piVar8[-1] = 0x416c638;
      free((void *)*piVar8);
      return -0x7ff8ff32;
    }
    piVar8[2] = sVar6 + 1;
    piVar8[1] = param_5;
    *piVar8 = iVar3 + (int)puVar2;
    piVar8[-1] = 0x416c4c3;
    memcpy((void *)*piVar8,(void *)piVar8[1],piVar8[2]);
    pcVar1 = (char *)((int)puVar2 + sVar6 + iVar3 + -1);
    if (*pcVar1 == '\\') {
      *pcVar1 = '\0';
    }
  }
  piVar8[1] = (int)puVar2;
  *piVar8 = param_6;
  piVar8[-1] = 0x416c4e1;
  strcpy((char *)*piVar8,(char *)piVar8[1]);
  *piVar8 = (int)puVar2;
  piVar8[-1] = 0x416c4e9;
  free((void *)*piVar8);
  if ((param_2 & 0x4000) != 0) {
    return 0;
  }
  *piVar8 = param_6;
  piVar8[-1] = 0x416c513;
  iVar3 = FUN_041322f0();
  piVar9 = piVar8 + -1;
  if (iVar3 == -1) {
    if ((param_2 & 0x8000) == 0) {
      return -0x7ff8fffd;
    }
    if (param_6 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      piVar8[4] = 0;
      piVar8[3] = 0;
      piVar8[2] = -1;
      *piVar8 = 0;
      piVar8[1] = param_6;
      piVar8[-1] = 0;
      piVar8[-2] = 0x416c56b;
      iVar3 = eON_MultiByteToWideChar();
      piVar8[-7] = iVar3 * 2;
      piVar8[-8] = 0x416c57b;
      pvVar7 = malloc(piVar8[-7]);
      if (pvVar7 == (void *)0x0) {
        return -0x7ff8bffb;
      }
      piVar8[-3] = (int)pvVar7;
      piVar8[-2] = iVar3;
      piVar8[-4] = -1;
      piVar8[-6] = 0;
      piVar8[-5] = param_6;
      piVar8[-7] = 0;
      piVar8[-8] = 0x416c5b0;
      eON_MultiByteToWideChar();
      piVar9 = piVar8 + -0xd;
    }
    piVar9[2] = 0;
    piVar9[1] = (int)pvVar7;
    *piVar9 = param_1;
    piVar9[-1] = 0x416c5ca;
    iVar3 = eON_SHCreateDirectoryExW();
    piVar9[-3] = (int)pvVar7;
    piVar9[-4] = 0x416c5d7;
    free((void *)piVar9[-3]);
    if ((iVar3 != 0xb7) && (iVar3 != 0)) {
      return -0x7ff8bffb;
    }
    return 0;
  }
  return 0;
}

