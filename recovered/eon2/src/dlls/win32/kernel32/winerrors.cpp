// Recovered source: eon2/src/dlls/win32/kernel32/winerrors.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_FormatMessageA @0x04154ec0 ---
/* source: winerrors */

size_t eON_FormatMessageA(uint param_1,char *param_2,uint param_3,int param_4,undefined4 *param_5,
                         undefined4 param_6,int *param_7)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  char *__src;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  size_t sVar14;
  char *pcVar15;
  undefined4 *puVar16;
  uint uVar17;
  char *pcVar18;
  bool bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 auStackY_98 [4];
  undefined4 uStackY_94;
  int local_70;
  char local_4d [4];
  undefined1 local_49 [21];
  char *local_34 [4];
  char local_23;
  char local_22;
  undefined1 local_21;
  undefined4 *local_18;
  
  piVar4 = param_7;
  puVar3 = param_5;
  pcVar13 = param_2;
  uVar2 = param_1;
  bVar21 = 0;
  puVar16 = (undefined4 *)&stack0xffffff70;
  local_18 = &param_1;
  sVar14 = 0;
  local_34[0] = "The operation completed successfully.";
  local_34[1] = "Incorrect function.";
  local_34[2] = "File not found.";
  local_34[3] = "The system cannot find the path specified.";
  if ((param_1 & 0x2800) == 0) {
    if ((param_1 & 0x400) == 0) {
      if ((param_1 & 0x1000) == 0) {
        return 0;
      }
      if (3 < param_3) {
        return 0;
      }
      pcVar15 = local_34[param_3];
      if (param_4 != 0x400) {
        return 0;
      }
      pcVar13 = (char *)0x0;
    }
    else {
      if ((param_1 & 0x200) == 0) {
        if (param_7 == (int *)0x0) {
          uStackY_94 = 0x415531d;
          FUN_0400a810();
        }
        uStackY_94 = 0x4154f57;
        __src = malloc(0x10000);
        local_70 = 0;
        cVar5 = *pcVar13;
        pcVar15 = __src;
LAB_04154f75:
        if (cVar5 != '\0') {
          do {
            if (cVar5 == '%') {
              cVar5 = pcVar13[1];
              if (cVar5 != '0') goto code_r0x0415505e;
              pcVar13 = pcVar13 + 1;
              cVar5 = '0';
            }
            *pcVar15 = cVar5;
            pcVar15 = pcVar15 + 1;
            cVar5 = pcVar13[1];
            pcVar13 = pcVar13 + 1;
            if (cVar5 == '\0') break;
          } while( true );
        }
        *pcVar15 = '\0';
        if ((int)pcVar15 - (int)__src < 0) {
          uStackY_94 = 0x41552f4;
          FUN_0400a810();
        }
        uStackY_94 = 0x4154fa8;
        pcVar15 = malloc(((int)pcVar15 - (int)__src) + 1);
        uStackY_94 = 0x4154fb9;
        strcpy(pcVar15,__src);
        uStackY_94 = 0x4154fc4;
        free(__src);
        goto LAB_04154fc4;
      }
      uStackY_94 = 0x41551e8;
      sVar14 = strlen(param_2);
      uStackY_94 = 0x41551f3;
      pcVar15 = malloc(sVar14 + 1);
      uStackY_94 = 0x4155201;
      strcpy(pcVar15,pcVar13);
LAB_04154fc4:
      uStackY_94 = 0x4154fde;
      FUN_0402cd10();
      pcVar13 = pcVar15;
    }
    uStackY_94 = 0x4154fe6;
    sVar14 = strlen(pcVar15);
    puVar9 = puVar3;
    if ((uVar2 & 0x100) != 0) {
      uStackY_94 = 0x41551d3;
      puVar9 = (undefined4 *)eON_LocalAlloc();
      puVar16 = (undefined4 *)auStackY_98;
      *puVar3 = puVar9;
    }
    puVar16[1] = pcVar15;
    *puVar16 = puVar9;
    puVar16[-1] = 0x4155004;
    strcpy((char *)*puVar16,(char *)puVar16[1]);
    if (pcVar13 != (char *)0x0) {
      *puVar16 = pcVar13;
      puVar16[-1] = 0x4155010;
      free((void *)*puVar16);
    }
  }
  return sVar14;
code_r0x0415505e:
  local_4d[0] = '%';
  local_4d[1] = 's';
  local_4d[2] = '\0';
  local_4d[3] = '\0';
  puVar10 = (undefined2 *)local_49;
  uVar17 = 0x15;
  bVar19 = ((uint)local_49 & 1) != 0;
  if (bVar19) {
    local_49[0] = 0;
    puVar10 = (undefined2 *)(local_49 + 1);
    uVar17 = 0x14;
  }
  if (((uint)puVar10 & 2) != 0) {
    *puVar10 = 0;
    uVar17 = uVar17 - 2;
    puVar10 = puVar10 + 1;
  }
  uVar7 = 0;
  do {
    *(undefined4 *)((int)puVar10 + uVar7) = 0;
    uVar7 = uVar7 + 4;
  } while (uVar7 < (uVar17 & 0xfffffffc));
  puVar10 = (undefined2 *)((int)puVar10 + uVar7);
  if ((uVar17 & 2) != 0) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (!bVar19) {
    *(undefined1 *)puVar10 = 0;
  }
  local_21 = 0;
  local_22 = '\0';
  if (8 < (byte)(cVar5 - 0x31U)) {
    *pcVar15 = cVar5;
    pcVar15 = pcVar15 + 1;
    cVar5 = pcVar13[2];
    pcVar13 = pcVar13 + 2;
    goto LAB_04154f75;
  }
  cVar1 = pcVar13[2];
  if ((byte)(cVar1 - 0x30U) < 10) {
    cVar6 = pcVar13[3];
    pcVar13 = pcVar13 + 3;
    local_22 = cVar1;
  }
  else {
    pcVar13 = pcVar13 + 2;
    cVar6 = cVar1;
  }
  local_23 = cVar5;
  if (cVar6 == '!') {
    pcVar12 = pcVar13 + 1;
    pcVar18 = local_4d;
    cVar5 = pcVar13[1];
    while (pcVar18 = pcVar18 + 1, cVar5 != '!') {
      pcVar12 = pcVar12 + 1;
      *pcVar18 = cVar5;
      cVar5 = *pcVar12;
    }
    *pcVar18 = '\0';
    pcVar13 = pcVar12 + 1;
    uStackY_94 = 0x415526c;
    pcVar12 = strchr(local_4d,0x2a);
    if (pcVar12 != (char *)0x0) {
      uStackY_94 = 0x415529b;
      FUN_0400a810();
    }
  }
  uStackY_94 = 0x4155105;
  lVar8 = strtol(&local_23,(char **)0x0,10);
  uVar20 = local_70 + 1 == lVar8;
  if (!(bool)uVar20) {
    uStackY_94 = 0x415513a;
    FUN_0400a810();
  }
  iVar11 = 3;
  pcVar12 = local_4d;
  pcVar18 = "%s";
  do {
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    uVar20 = *pcVar12 == *pcVar18;
    pcVar12 = pcVar12 + (uint)bVar21 * -2 + 1;
    pcVar18 = pcVar18 + (uint)bVar21 * -2 + 1;
  } while ((bool)uVar20);
  local_70 = lVar8;
  if ((bool)uVar20) {
    puVar9 = (undefined4 *)*piVar4;
    *piVar4 = (int)(puVar9 + 1);
    pcVar12 = (char *)*puVar9;
    cVar5 = *pcVar12;
    if (cVar5 == '\0') {
      cVar5 = *pcVar13;
      goto LAB_04154f75;
    }
    do {
      *pcVar15 = cVar5;
      pcVar12 = pcVar12 + 1;
      pcVar15 = pcVar15 + 1;
      cVar5 = *pcVar12;
    } while (cVar5 != '\0');
  }
  cVar5 = *pcVar13;
  goto LAB_04154f75;
}

// --- eON_FormatMessageW @0x04155330 ---
/* WARNING: Type propagation algorithm not settling */
/* source: winerrors */

int eON_FormatMessageW(uint param_1,short *param_2,int param_3,undefined4 param_4,
                      undefined4 *param_5,undefined4 param_6,int *param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 *puVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  size_t *psVar13;
  size_t *psVar14;
  size_t *psVar15;
  size_t *psVar16;
  short *psVar17;
  undefined *puVar18;
  byte bVar19;
  size_t local_9c [2];
  int local_78;
  undefined1 local_68;
  undefined4 local_56;
  undefined2 local_52;
  undefined4 local_50 [11];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined4 *local_18;
  
  piVar3 = param_7;
  puVar2 = param_5;
  psVar17 = param_2;
  uVar1 = param_1;
  bVar19 = 0;
  local_18 = &param_1;
  iVar5 = 0;
  if ((param_1 & 0x2800) == 0) {
    if ((param_1 & 0x400) == 0) {
      if ((param_1 & 0x1000) == 0) {
        return 0;
      }
      if (param_3 == 2) {
        puVar7 = malloc(0x56);
        eON_lstrcpyW();
        psVar14 = local_9c + 1;
      }
      else if (param_3 == 3) {
        puVar7 = malloc(0x56);
        eON_lstrcpyW();
        psVar14 = local_9c + 1;
      }
      else {
        if (param_3 != 0x7a) {
          if ((param_1 & 0x200) == 0) {
            return 0;
          }
          FUN_0402cd10();
          return 0;
        }
        puVar7 = malloc(0x68);
        eON_lstrcpyW();
        psVar14 = local_9c + 1;
      }
    }
    else {
      if ((param_1 & 0x200) == 0) {
        if (param_7 == (int *)0x0) {
          FUN_0400a810();
        }
        psVar6 = malloc(0x10000);
        local_78 = 0;
        sVar4 = *psVar17;
        psVar12 = psVar6;
        psVar13 = (size_t *)&stack0xffffff70;
LAB_041553b7:
        if (sVar4 != 0) {
          do {
            if (sVar4 == 0x25) {
              sVar4 = psVar17[1];
              if (sVar4 != 0x30) goto code_r0x041554f2;
              psVar17 = psVar17 + 1;
              sVar4 = 0x30;
            }
            *psVar12 = sVar4;
            psVar12 = psVar12 + 1;
            sVar4 = psVar17[1];
            psVar17 = psVar17 + 1;
            if (sVar4 == 0) break;
          } while( true );
        }
        *psVar12 = 0;
        iVar5 = (int)psVar12 - (int)psVar6 >> 1;
        if (iVar5 < 0) {
          psVar13[3] = (size_t)
                       "DWORD eON_FormatMessageW(DWORD, PCVOID, DWORD, DWORD, LPWSTR, DWORD, char**)"
          ;
          psVar13[2] = 0x16d;
          psVar13[1] = (size_t)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winerrors.cpp"
          ;
          *psVar13 = (size_t)"len >= 0";
          psVar13[-1] = 0x4155767;
          FUN_0400a810();
        }
        *psVar13 = iVar5 * 2 + 2;
        psVar13[-1] = 0x41553f7;
        puVar7 = malloc(*psVar13);
        *psVar13 = (size_t)puVar7;
        psVar13[1] = (size_t)psVar6;
        psVar13[-1] = 0x4155408;
        eON_lstrcpyW();
        psVar14 = psVar13 + -2;
        psVar13[-2] = (size_t)psVar6;
        psVar13[-3] = 0x4155416;
        free((void *)psVar13[-2]);
        goto LAB_04155419;
      }
      iVar5 = eON_lstrlenW();
      local_9c[1] = 0x415569a;
      puVar7 = malloc(iVar5 * 2 + 2);
      local_9c[1] = 0x41556a8;
      eON_lstrcpyW();
      psVar14 = local_9c;
LAB_04155419:
      psVar14[2] = (size_t)puVar7;
      psVar14[1] = (size_t)"FormatMessage produced text: \'%ls\'";
      *psVar14 = 5;
      psVar14[-1] = 0x4155434;
      FUN_0402cd10();
    }
    puVar18 = &DAT_044109e0;
    if (puVar7 != (undefined *)0x0) {
      puVar18 = puVar7;
    }
    *psVar14 = (size_t)puVar18;
    psVar14[-1] = 0x415544c;
    iVar5 = eON_lstrlenW();
    psVar15 = psVar14 + -1;
    puVar9 = puVar2;
    if ((uVar1 & 0x100) != 0) {
      psVar14[-1] = 0;
      *psVar14 = iVar5 * 2 + 2;
      psVar14[-2] = 0x4155654;
      puVar9 = (undefined4 *)eON_LocalAlloc();
      psVar15 = psVar14 + -3;
      *puVar2 = puVar9;
    }
    psVar15[1] = (size_t)puVar18;
    *psVar15 = (size_t)puVar9;
    psVar15[-1] = 0x415546c;
    eON_lstrcpyW();
    if (puVar7 != (undefined *)0x0) {
      psVar15[-2] = (size_t)puVar7;
      psVar15[-3] = 0x415547b;
      free((void *)psVar15[-2]);
    }
  }
  return iVar5;
code_r0x041554f2:
  local_56 = PTR_DAT_0433da80;
  local_52 = DAT_0433da84;
  puVar9 = local_50;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (uint)bVar19 * -2 + 1;
  }
  local_21 = 0;
  local_22 = 0;
  if ((ushort)(sVar4 - 0x31U) < 9) {
    local_68 = (undefined1)sVar4;
    sVar4 = psVar17[2];
    local_23 = local_68;
    if ((ushort)(sVar4 - 0x30U) < 10) {
      local_22 = (char)sVar4;
      sVar4 = psVar17[3];
      psVar17 = psVar17 + 3;
    }
    else {
      psVar17 = psVar17 + 2;
    }
    if (sVar4 == 0x21) {
      psVar10 = psVar17 + 1;
      psVar11 = (short *)((int)&local_56 + 2);
      sVar4 = psVar17[1];
      while (sVar4 != 0x21) {
        psVar10 = psVar10 + 1;
        *psVar11 = sVar4;
        psVar11 = psVar11 + 1;
        sVar4 = *psVar10;
      }
      *psVar11 = 0;
      psVar17 = psVar10 + 1;
      psVar13[1] = 0x2a;
      *psVar13 = (size_t)&local_56;
      psVar13[-1] = 0x4155700;
      iVar5 = FUN_04159e60();
      if (iVar5 != 0) {
        psVar13[3] = (size_t)
                     "DWORD eON_FormatMessageW(DWORD, PCVOID, DWORD, DWORD, LPWSTR, DWORD, char**)";
        psVar13[2] = 0x14c;
        psVar13[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winerrors.cpp"
        ;
        *psVar13 = (size_t)"!str_lstrchrW( formatString, L\'*\' )";
        psVar13[-1] = 0x415572f;
        FUN_0400a810();
      }
    }
    psVar13[2] = 10;
    psVar13[1] = 0;
    *psVar13 = (size_t)&local_23;
    psVar13[-1] = 0x4155570;
    lVar8 = strtol((char *)*psVar13,(char **)psVar13[1],psVar13[2]);
    if (local_78 + 1 != lVar8) {
      psVar13[3] = (size_t)
                   "DWORD eON_FormatMessageW(DWORD, PCVOID, DWORD, DWORD, LPWSTR, DWORD, char**)";
      psVar13[2] = 0x151;
      psVar13[1] = (size_t)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winerrors.cpp"
      ;
      *psVar13 = (size_t)"index == lastIndex + 1";
      psVar13[-1] = 0x41555a5;
      FUN_0400a810();
    }
    psVar13[1] = (size_t)&PTR_DAT_0433da80;
    *psVar13 = (size_t)&local_56;
    psVar13[-1] = 0x41555bb;
    iVar5 = eON_lstrcmpW();
    psVar16 = psVar13 + -2;
    psVar13 = psVar13 + -2;
    local_78 = lVar8;
    if (iVar5 == 0) {
      puVar9 = (undefined4 *)*piVar3;
      *piVar3 = (int)(puVar9 + 1);
      psVar10 = (short *)*puVar9;
      sVar4 = *psVar10;
      if (sVar4 != 0) {
        do {
          *psVar12 = sVar4;
          psVar10 = psVar10 + 1;
          psVar12 = psVar12 + 1;
          sVar4 = *psVar10;
        } while (sVar4 != 0);
        sVar4 = *psVar17;
        psVar13 = psVar16;
        goto LAB_041553b7;
      }
    }
    sVar4 = *psVar17;
    goto LAB_041553b7;
  }
  *psVar12 = sVar4;
  psVar12 = psVar12 + 1;
  sVar4 = psVar17[2];
  psVar17 = psVar17 + 2;
  goto LAB_041553b7;
}

