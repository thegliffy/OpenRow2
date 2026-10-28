// Recovered source: eon2/src/dlls/win32/kernel32/winprofile.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Profile_ReadNextLine @0x04157560 ---
/* source: winprofile */

char * __regparm3 Profile_ReadNextLine(int param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *__dest;
  char local_41c [1036];
  
  __dest = (char *)0x0;
  uVar2 = *param_2;
  if (uVar2 < param_3) {
    cVar3 = *(char *)(param_1 + uVar2);
    uVar2 = uVar2 + 1;
    *param_2 = uVar2;
    if ((cVar3 != '\n') && (cVar3 != '\r')) {
LAB_041575b0:
      local_41c[(int)__dest] = cVar3;
      pcVar4 = __dest;
      do {
        __dest = pcVar4 + 1;
        if (param_3 <= uVar2) {
          if (__dest == (char *)0x0) {
            return (char *)0x0;
          }
LAB_04157628:
          pcVar4 = pcVar4 + 2;
          goto LAB_0415762b;
        }
        cVar3 = *(char *)(param_1 + uVar2);
        uVar2 = uVar2 + 1;
        *param_2 = uVar2;
        if ((cVar3 == '\n') || (cVar3 == '\r')) goto LAB_04157628;
        if ((int)__dest < 0x400) goto LAB_041575b0;
        FUN_0400a810("totalRead < lineBufferSize",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
                     ,0x4e,"char* Profile_ReadNextLine(const char*, DWORD&, DWORD)");
        uVar2 = *param_2;
        local_41c[(int)__dest] = cVar3;
        pcVar4 = __dest;
      } while( true );
    }
    pcVar4 = (char *)0x1;
    __dest = (char *)0x0;
LAB_0415762b:
    local_41c[(int)__dest] = '\0';
    __dest = malloc((size_t)pcVar4);
    strcpy(__dest,local_41c);
    cVar3 = *__dest;
    if (cVar3 != '\0') {
      bVar1 = false;
      pcVar4 = __dest;
      do {
        while (cVar3 == '\"') {
          pcVar4 = pcVar4 + 1;
          bVar1 = (bool)(bVar1 ^ 1);
          cVar3 = *pcVar4;
          if (cVar3 == '\0') goto LAB_04157683;
        }
        if ((!bVar1) && (cVar3 == ';')) {
          *pcVar4 = '\0';
          FUN_04159ef0(__dest);
          FUN_04159ea0(__dest);
          return __dest;
        }
        pcVar4 = pcVar4 + 1;
        cVar3 = *pcVar4;
      } while (cVar3 != '\0');
    }
LAB_04157683:
    FUN_04159ef0(__dest);
    FUN_04159ea0(__dest);
  }
  return __dest;
}

// --- eON_GetPrivateProfileIntA @0x04157ca0 ---
/* source: winprofile */

ulong eON_GetPrivateProfileIntA
                (undefined4 param_1,undefined4 param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  char local_120 [268];
  undefined4 *local_14;
  
  uVar2 = param_3;
  local_14 = &param_1;
  uVar1 = eON_GetPrivateProfileStringA(param_1,param_2,&DAT_04328763,local_120,0x100,param_4);
  if (uVar1 != 0) {
    if (0xfe < uVar1) {
      FUN_0400a810("len < bufferSize-1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
                   ,0x15b,"UINT eON_GetPrivateProfileIntA(LPCSTR, LPCSTR, INT, LPCSTR)");
    }
    uVar2 = strtoul(local_120,(char **)0x0,10);
  }
  return uVar2;
}

// --- eON_GetPrivateProfileStringA @0x041576d0 ---
/* source: winprofile */

size_t eON_GetPrivateProfileStringA
                 (char *param_1,char *param_2,char *param_3,char *param_4,uint param_5,
                 undefined4 param_6)

{
  char cVar1;
  char *__dest;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  size_t sVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *__ptr;
  char *pcVar11;
  ushort **ppuVar12;
  size_t sVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  uint *local_38;
  size_t local_30 [2];
  undefined4 local_28;
  size_t local_24 [3];
  undefined4 *local_18;
  
  uVar3 = param_6;
  uVar2 = param_5;
  __dest = param_4;
  pcVar11 = param_3;
  pcVar16 = param_2;
  pcVar15 = param_1;
  local_18 = &param_1;
  if (param_3 == (char *)0x0) {
    sVar5 = 1;
    pcVar11 = "";
  }
  else {
    sVar5 = strlen(param_3);
    sVar5 = sVar5 + 1;
  }
  puVar6 = malloc(sVar5);
  strcpy((char *)puVar6,pcVar11);
  FUN_04159ea0(puVar6);
  puVar18 = puVar6;
  do {
    puVar17 = puVar18;
    uVar7 = *puVar17 + 0xfefefeff & ~*puVar17;
    uVar8 = uVar7 & 0x80808080;
    puVar18 = puVar17 + 1;
  } while (uVar8 == 0);
  if ((uVar7 & 0x8080) == 0) {
    puVar18 = (uint *)((int)puVar17 + 6);
    uVar8 = uVar8 >> 0x10;
  }
  if ((int)puVar18 + ((-3 - (uint)CARRY1((byte)uVar8,(byte)uVar8)) - (int)puVar6) < uVar2) {
    strcpy(__dest,(char *)puVar6);
  }
  else if ((pcVar16 == (char *)0x0) || (pcVar15 == (char *)0x0)) {
    strncpy(__dest,(char *)puVar6,uVar2 - 2);
    __dest[uVar2 - 2] = '\0';
    __dest[uVar2 - 1] = '\0';
  }
  else {
    strncpy(__dest,(char *)puVar6,uVar2 - 1);
    __dest[uVar2 - 1] = '\0';
  }
  sVar5 = strlen(__dest);
  free(puVar6);
  iVar9 = eON_CreateFileA(uVar3,0x80000000,1,0,3,0,0);
  if (iVar9 == -1) {
    return sVar5;
  }
  iVar10 = FUN_041322c0(iVar9,local_30);
  if (iVar10 == 0) {
    return sVar5;
  }
  __ptr = malloc(local_30[0]);
  local_28 = 0;
  iVar10 = eON_ReadFile(iVar9,__ptr,local_30[0],local_24,0);
  eON_CloseHandle(iVar9);
  if ((((iVar10 != 0) && (local_30[0] == local_24[0])) && (pcVar15 != (char *)0x0)) &&
     (pcVar16 != (char *)0x0)) {
    while (pcVar11 = (char *)Profile_ReadNextLine(), pcVar11 != (char *)0x0) {
      cVar1 = *pcVar11;
      if (cVar1 != '\0') {
        ppuVar12 = __ctype_b_loc();
        pcVar14 = pcVar11;
        cVar4 = cVar1;
        do {
          if ((*(byte *)((int)*ppuVar12 + cVar4 * 2 + 1) & 0x20) == 0) {
            sVar13 = strlen(pcVar11);
            if ((cVar1 == '[') && (pcVar11[sVar13 - 1] == ']')) {
              pcVar14 = malloc(sVar13 - 1);
              strncpy(pcVar14,pcVar11 + 1,sVar13 - 2);
              pcVar14[sVar13 - 2] = '\0';
              if (pcVar14 != (char *)0x0) {
                iVar9 = strcasecmp(pcVar14,pcVar15);
                if (iVar9 == 0) {
                  free(pcVar14);
                  free(pcVar11);
                  goto LAB_041579ee;
                }
                free(pcVar14);
              }
            }
            break;
          }
          pcVar14 = pcVar14 + 1;
          cVar4 = *pcVar14;
        } while (cVar4 != '\0');
      }
      free(pcVar11);
    }
  }
  goto LAB_041578d2;
LAB_041579ee:
  pcVar15 = (char *)Profile_ReadNextLine();
  if (pcVar15 != (char *)0x0) {
    cVar1 = *pcVar15;
    if (cVar1 != '\0') {
      pcVar11 = pcVar15;
      cVar4 = cVar1;
      do {
        if ((*(byte *)((int)*ppuVar12 + cVar4 * 2 + 1) & 0x20) == 0) {
          sVar13 = strlen(pcVar15);
          if ((cVar1 == '[') && (pcVar15[sVar13 - 1] == ']')) {
            pcVar11 = malloc(sVar13 - 1);
            strncpy(pcVar11,pcVar15 + 1,sVar13 - 2);
            pcVar11[sVar13 - 2] = '\0';
            if (pcVar11 != (char *)0x0) {
              free(pcVar11);
              free(pcVar15);
              goto LAB_041578d2;
            }
          }
          pcVar11 = strchr(pcVar15,0x3d);
          if (pcVar11 == (char *)0x0) {
LAB_04157c68:
            pcVar11 = (char *)0x0;
            FUN_0400a810("keyName",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
                         ,0x126,
                         "DWORD eON_GetPrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPSTR, DWORD, LPCSTR)"
                        );
          }
          else {
            sVar13 = (int)pcVar11 - (int)pcVar15;
            pcVar11 = malloc(sVar13 + 1);
            strncpy(pcVar11,pcVar15,sVar13);
            pcVar11[sVar13] = '\0';
            FUN_04159ef0(pcVar11);
            FUN_04159ea0(pcVar11);
            if (pcVar11 == (char *)0x0) goto LAB_04157c68;
          }
          iVar9 = strcasecmp(pcVar11,pcVar16);
          if (iVar9 == 0) {
            free(pcVar11);
            pcVar16 = strchr(pcVar15,0x3d);
            if (pcVar16 != (char *)0x0) {
              sVar5 = strlen(pcVar16 + 1);
              local_38 = malloc(sVar5 + 1);
              strcpy((char *)local_38,pcVar16 + 1);
              FUN_04159ef0(local_38);
              FUN_04159ea0(local_38);
              if (local_38 != (uint *)0x0) goto LAB_04157ba6;
            }
            FUN_0400a810("keyValue",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
                         ,0x132,
                         "DWORD eON_GetPrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPSTR, DWORD, LPCSTR)"
                        );
            local_38 = (uint *)0x0;
LAB_04157ba6:
            free(pcVar15);
            puVar18 = local_38;
            do {
              puVar6 = puVar18;
              uVar7 = *puVar6 + 0xfefefeff & ~*puVar6;
              uVar8 = uVar7 & 0x80808080;
              puVar18 = puVar6 + 1;
            } while (uVar8 == 0);
            if ((uVar7 & 0x8080) == 0) {
              puVar18 = (uint *)((int)puVar6 + 6);
              uVar8 = uVar8 >> 0x10;
            }
            if ((int)puVar18 + ((-3 - (uint)CARRY1((byte)uVar8,(byte)uVar8)) - (int)local_38) <
                uVar2) {
              strcpy(__dest,(char *)local_38);
            }
            else {
              strncpy(__dest,(char *)local_38,uVar2 - 1);
              __dest[uVar2 - 1] = '\0';
            }
            sVar5 = strlen(__dest);
            free(local_38);
            free(__ptr);
            return sVar5;
          }
          free(pcVar11);
          free(pcVar15);
          goto LAB_041579ee;
        }
        pcVar11 = pcVar11 + 1;
        cVar4 = *pcVar11;
      } while (cVar4 != '\0');
    }
    free(pcVar15);
    goto LAB_041579ee;
  }
LAB_041578d2:
  free(__ptr);
  return sVar5;
}

// --- eON_WritePrivateProfileStringA @0x04157d70 ---
/* source: winprofile */

undefined4
eON_WritePrivateProfileStringA(char *param_1,char *param_2,int param_3,undefined4 param_4)

{
  char *__s2;
  char *__s2_00;
  char cVar1;
  char cVar2;
  int iVar3;
  void *__ptr;
  char *pcVar4;
  ushort **ppuVar5;
  size_t sVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  bool bVar20;
  uint *local_44c;
  char *local_448;
  char *local_438;
  uint local_430 [256];
  char *local_30;
  int local_2c;
  char *local_28;
  char *local_24;
  undefined4 *local_18;
  
  uVar19 = param_4;
  iVar8 = param_3;
  __s2_00 = param_2;
  __s2 = param_1;
  local_18 = &param_1;
  iVar3 = eON_CreateFileA();
  if (iVar3 == -1) {
    return 0;
  }
  iVar3 = FUN_041322c0();
  if (iVar3 == 0) {
    return 0;
  }
  if ((local_2c < 0) || ((local_2c < 1 && (local_30 == (char *)0x0)))) {
    cVar2 = '\0';
    __ptr = (void *)0x0;
    local_438 = (char *)0x0;
    puVar15 = (undefined4 *)&stack0xfffffb5c;
    pcVar4 = (char *)0x0;
  }
  else {
    __ptr = malloc((size_t)local_30);
    local_28 = (char *)0x0;
    iVar3 = eON_ReadFile();
    eON_CloseHandle();
    if ((iVar3 == 0) || (local_30 != local_24)) {
      free(__ptr);
      return 0;
    }
    local_448 = (char *)0x0;
    while (pcVar4 = (char *)Profile_ReadNextLine(), pcVar4 != (char *)0x0) {
      cVar2 = *pcVar4;
      if (cVar2 != '\0') {
        ppuVar5 = __ctype_b_loc();
        pcVar7 = pcVar4;
        cVar1 = cVar2;
        do {
          if ((*(byte *)((int)*ppuVar5 + cVar1 * 2 + 1) & 0x20) == 0) {
            sVar6 = strlen(pcVar4);
            if ((cVar2 == '[') && (pcVar4[sVar6 - 1] == ']')) {
              pcVar7 = malloc(sVar6 - 1);
              strncpy(pcVar7,pcVar4 + 1,sVar6 - 2);
              pcVar7[sVar6 - 2] = '\0';
              if (pcVar7 != (char *)0x0) {
                iVar3 = strcasecmp(pcVar7,__s2);
                if (iVar3 == 0) {
                  free(pcVar7);
                  free(pcVar4);
                  local_438 = (char *)0x0;
                  if (__s2_00 == (char *)0x0) {
                    local_438 = local_448;
                  }
                  goto LAB_041581bf;
                }
                free(pcVar7);
              }
            }
            break;
          }
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        } while (cVar1 != '\0');
      }
      free(pcVar4);
      local_448 = local_28;
    }
    cVar2 = '\0';
    local_438 = local_448;
    puVar15 = (undefined4 *)&stack0xfffffb44;
    pcVar4 = local_448;
  }
  goto LAB_04157f99;
LAB_041581bf:
  pcVar7 = (char *)Profile_ReadNextLine();
  if (pcVar7 == (char *)0x0) goto LAB_0415874e;
  cVar2 = *pcVar7;
  if (cVar2 != '\0') {
    pcVar4 = pcVar7;
    cVar1 = cVar2;
    do {
      if ((*(byte *)((int)*ppuVar5 + cVar1 * 2 + 1) & 0x20) == 0) {
        sVar6 = strlen(pcVar7);
        if ((cVar2 == '[') && (pcVar7[sVar6 - 1] == ']')) {
          pcVar4 = malloc(sVar6 - 1);
          strncpy(pcVar4,pcVar7 + 1,sVar6 - 2);
          pcVar4[sVar6 - 2] = '\0';
          if (pcVar4 != (char *)0x0) {
            free(pcVar4);
            free(pcVar7);
            goto LAB_0415874e;
          }
        }
        if (__s2_00 != (char *)0x0) {
          pcVar4 = strchr(pcVar7,0x3d);
          if (pcVar4 == (char *)0x0) {
LAB_04158783:
            pcVar4 = (char *)0x0;
            FUN_0400a810();
          }
          else {
            sVar6 = (int)pcVar4 - (int)pcVar7;
            pcVar4 = malloc(sVar6 + 1);
            strncpy(pcVar4,pcVar7,sVar6);
            pcVar4[sVar6] = '\0';
            FUN_04159ef0();
            FUN_04159ea0();
            if (pcVar4 == (char *)0x0) goto LAB_04158783;
          }
          iVar3 = strcasecmp(pcVar4,__s2_00);
          if (iVar3 == 0) {
            free(pcVar4);
            pcVar4 = strchr(pcVar7,0x3d);
            if (pcVar4 == (char *)0x0) {
LAB_041587ae:
              FUN_0400a810();
              local_44c = (uint *)0x0;
            }
            else {
              sVar6 = strlen(pcVar4 + 1);
              local_44c = malloc(sVar6 + 1);
              strcpy((char *)local_44c,pcVar4 + 1);
              FUN_04159ef0();
              FUN_04159ea0();
              if (local_44c == (uint *)0x0) goto LAB_041587ae;
            }
            pcVar9 = strchr(pcVar7,0x3d);
            if (pcVar9 == (char *)0x0) {
              FUN_0400a810();
            }
            if (pcVar9[(int)__ptr + ((int)local_448 - (int)pcVar7)] != '=') {
              FUN_0400a810();
            }
            cVar2 = pcVar9[1];
            pcVar9 = pcVar9 + 1;
            if (cVar2 == '\0') goto LAB_041583f4;
            goto LAB_041583e0;
          }
          free(pcVar4);
        }
        break;
      }
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    } while (cVar1 != '\0');
  }
  free(pcVar7);
  local_448 = local_28;
  goto LAB_041581bf;
LAB_0415874e:
  cVar2 = (-(__s2_00 == (char *)0x0) & 2U) + 1;
  if (__s2_00 != (char *)0x0) {
    local_438 = local_448;
  }
LAB_04158475:
  puVar15 = (undefined4 *)&stack0xfffffb44;
  pcVar4 = local_448;
  if (local_448 == (char *)0x0) {
    cVar2 = '\0';
    puVar15 = (undefined4 *)&stack0xfffffb44;
    local_438 = (char *)0x0;
  }
  goto LAB_04157f99;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar9;
    if (cVar2 == '\0') break;
LAB_041583e0:
    if ((*(byte *)((int)*ppuVar5 + cVar2 * 2 + 1) & 0x20) == 0) break;
  }
LAB_041583f4:
  puVar14 = local_44c;
  do {
    puVar13 = puVar14;
    uVar10 = *puVar13 + 0xfefefeff & ~*puVar13;
    uVar11 = uVar10 & 0x80808080;
    puVar14 = puVar13 + 1;
  } while (uVar11 == 0);
  if ((uVar10 & 0x8080) == 0) {
    puVar14 = (uint *)((int)puVar13 + 6);
    uVar11 = uVar11 >> 0x10;
  }
  pcVar4 = (char *)((int)puVar14 +
                   (int)(pcVar9 + ((int)local_448 - (int)pcVar7) +
                        ((-3 - (uint)CARRY1((byte)uVar11,(byte)uVar11)) - (int)local_44c)));
  free(local_44c);
  cVar2 = '\x02';
  free(pcVar7);
  puVar15 = (undefined4 *)&stack0xfffffb44;
  local_438 = pcVar9 + ((int)local_448 - (int)pcVar7);
  if (pcVar4 == (char *)0x0) {
    cVar2 = '\x01';
    local_438 = local_448;
    goto LAB_04158475;
  }
LAB_04157f99:
  puVar15[6] = 0;
  puVar15[5] = 0;
  puVar15[4] = 5;
  puVar15[3] = 0;
  puVar15[2] = 2;
  puVar15[1] = 0x40000000;
  *puVar15 = uVar19;
  puVar15[-1] = 0x4157fd7;
  iVar3 = eON_CreateFileA();
  piVar18 = puVar15 + -7;
  piVar16 = puVar15 + -7;
  if (iVar3 == 0) {
LAB_041584d6:
    uVar19 = 0;
  }
  else {
    if (local_438 != (char *)0x0) {
      puVar15[-7] = iVar3;
      puVar15[-3] = 0;
      puVar15[-4] = 0;
      puVar15[-5] = local_438;
      puVar15[-6] = __ptr;
      puVar15[-8] = 0x41584ba;
      iVar12 = eON_WriteFile();
      piVar16 = puVar15 + -0xc;
      if (iVar12 == 0) {
        puVar15[-0xc] = iVar3;
        puVar15[-0xd] = 0x41584d3;
        eON_CloseHandle();
        piVar18 = puVar15 + -0xd;
        goto LAB_041584d6;
      }
    }
    if (cVar2 == '\x01') {
      piVar16[1] = (int)"%s=%s\r\n";
      piVar16[3] = iVar8;
      piVar16[2] = (int)__s2_00;
      *piVar16 = (int)local_430;
      piVar16[-1] = 0x4158607;
      sprintf((char *)*piVar16,(char *)piVar16[1]);
      puVar14 = local_430;
      do {
        puVar13 = puVar14;
        uVar10 = *puVar13 + 0xfefefeff & ~*puVar13;
        uVar11 = uVar10 & 0x80808080;
        puVar14 = puVar13 + 1;
      } while (uVar11 == 0);
      *piVar16 = iVar3;
      bVar20 = (uVar10 & 0x8080) == 0;
      if (bVar20) {
        uVar11 = uVar11 >> 0x10;
      }
      piVar16[4] = 0;
      piVar16[3] = 0;
      if (bVar20) {
        puVar14 = (uint *)((int)puVar13 + 6);
      }
      piVar16[1] = (int)local_430;
      piVar16[2] = (int)puVar14 + ((-3 - (uint)CARRY1((byte)uVar11,(byte)uVar11)) - (int)local_430);
      piVar16[-1] = 0x4158673;
      iVar8 = eON_WriteFile();
      piVar18 = piVar16 + -5;
      if (iVar8 != 1) {
        piVar16[-2] = (int)"WINBOOL eON_WritePrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPCSTR)";
        piVar16[-3] = 0x241;
        piVar16[-4] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
        ;
        piVar16[-5] = (int)"eON_WriteFile( fileHandle, buffer, len, 0, __null ) == 1";
        piVar16[-6] = 0x41586a9;
        FUN_0400a810();
        piVar18 = piVar16 + -5;
      }
    }
    else if (cVar2 == '\x02') {
      *piVar16 = iVar8;
      piVar16[-1] = 0x4158564;
      sVar6 = strlen((char *)*piVar16);
      piVar16[4] = 0;
      piVar16[2] = sVar6;
      piVar16[3] = 0;
      *piVar16 = iVar3;
      piVar16[1] = iVar8;
      piVar16[-1] = 0x4158590;
      iVar8 = eON_WriteFile();
      piVar18 = piVar16 + -5;
      if (iVar8 != 1) {
        piVar16[-2] = (int)"WINBOOL eON_WritePrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPCSTR)";
        piVar16[-3] = 0x246;
        piVar16[-4] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
        ;
        piVar16[-5] = (int)
                      "eON_WriteFile( fileHandle, lpString, (DWORD) strlen(lpString), 0, __null ) == 1"
        ;
        piVar16[-6] = 0x41585c6;
        FUN_0400a810();
        piVar18 = piVar16 + -5;
      }
    }
    else {
      piVar18 = piVar16;
      if (cVar2 == '\0') {
        if ((local_438 == (char *)0x0 && pcVar4 == (char *)0x0) && (__ptr != (void *)0x0)) {
          *piVar16 = iVar3;
          piVar16[4] = 0;
          piVar16[3] = 0;
          piVar16[2] = (int)local_30;
          piVar16[1] = (int)__ptr;
          piVar16[-1] = 0x41586fe;
          iVar12 = eON_WriteFile();
          piVar17 = piVar16 + -5;
          pcVar4 = local_30;
          if (iVar12 != 1) {
            piVar16[-2] = (int)
                          "WINBOOL eON_WritePrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPCSTR)";
            piVar16[-3] = 0x22b;
            piVar16[-4] = (int)
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
            ;
            piVar16[-5] = (int)
                          "eON_WriteFile( fileHandle, fileContents, fileSize.LowPart, 0, __null ) == 1"
            ;
            piVar16[-6] = 0x4158730;
            FUN_0400a810();
            piVar17 = piVar16 + -5;
            pcVar4 = local_30;
          }
        }
        else {
          piVar17 = piVar16;
          if (local_438 != pcVar4) {
            piVar16[3] = (int)
                         "WINBOOL eON_WritePrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPCSTR)";
            piVar16[2] = 0x231;
            piVar16[1] = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
            ;
            *piVar16 = (int)"startOfCutting == endOfCutting";
            piVar16[-1] = 0x415804c;
            FUN_0400a810();
          }
        }
        piVar17[1] = (int)&DAT_0433e439;
        piVar17[4] = iVar8;
        piVar17[3] = (int)__s2_00;
        piVar17[2] = (int)__s2;
        *piVar17 = (int)local_430;
        piVar17[-1] = 0x4158092;
        sprintf((char *)*piVar17,(char *)piVar17[1]);
        puVar14 = local_430;
        do {
          puVar13 = puVar14;
          uVar10 = *puVar13 + 0xfefefeff & ~*puVar13;
          uVar11 = uVar10 & 0x80808080;
          puVar14 = puVar13 + 1;
        } while (uVar11 == 0);
        *piVar17 = iVar3;
        bVar20 = (uVar10 & 0x8080) == 0;
        if (bVar20) {
          uVar11 = uVar11 >> 0x10;
        }
        piVar17[4] = 0;
        piVar17[3] = 0;
        if (bVar20) {
          puVar14 = (uint *)((int)puVar13 + 6);
        }
        piVar17[1] = (int)local_430;
        piVar17[2] = (int)puVar14 +
                     ((-3 - (uint)CARRY1((byte)uVar11,(byte)uVar11)) - (int)local_430);
        piVar17[-1] = 0x41580fe;
        iVar8 = eON_WriteFile();
        piVar18 = piVar17 + -5;
        if (iVar8 != 1) {
          piVar17[-2] = (int)
                        "WINBOOL eON_WritePrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPCSTR)";
          piVar17[-3] = 0x238;
          piVar17[-4] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
          ;
          piVar17[-5] = (int)"eON_WriteFile( fileHandle, buffer, len, 0, __null ) == 1";
          piVar17[-6] = 0x4158130;
          FUN_0400a810();
          piVar18 = piVar17 + -5;
        }
      }
    }
    piVar17 = piVar18;
    if (pcVar4 < local_30) {
      *piVar18 = iVar3;
      piVar18[4] = 0;
      piVar18[3] = 0;
      piVar18[2] = (int)local_30 - (int)pcVar4;
      piVar18[1] = (int)(pcVar4 + (int)__ptr);
      piVar18[-1] = 0x415850f;
      iVar8 = eON_WriteFile();
      piVar17 = piVar18 + -5;
      if (iVar8 != 1) {
        piVar18[-2] = (int)"WINBOOL eON_WritePrivateProfileStringA(LPCSTR, LPCSTR, LPCSTR, LPCSTR)";
        piVar18[-3] = 0x252;
        piVar18[-4] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp"
        ;
        piVar18[-5] = (int)
                      "eON_WriteFile( fileHandle, fileContents + endOfCutting, fileSize.LowPart - endOfCutting, 0, __null ) == 1"
        ;
        piVar18[-6] = 0x4158545;
        FUN_0400a810();
        piVar17 = piVar18 + -5;
      }
    }
    *piVar17 = iVar3;
    uVar19 = 1;
    piVar17[-1] = 0x4158158;
    eON_CloseHandle();
    piVar18 = piVar17 + -1;
  }
  if (__ptr == (void *)0x0) {
    return uVar19;
  }
  *piVar18 = (int)__ptr;
  piVar18[-1] = 0x415816b;
  free((void *)*piVar18);
  return uVar19;
}

