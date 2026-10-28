// Recovered source: eon2/src/core/vpfs/caseInsensitivePath.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- GetSubelement @0x0403acc0 ---
/* source: caseInsensitivePath */

int __regparm3 GetSubelement(uint *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint local_24;
  uint local_20;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("dirBuf",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                 ,0x201,"DirectoryElement* GetSubelement(DirectoryElement*, const char*)");
  }
  else if (*param_1 != 0) {
    local_20 = 0;
    bVar1 = *param_2;
    local_24 = *param_1;
    do {
      uVar7 = local_24 + local_20 >> 1;
      iVar3 = uVar7 * 0x10 + param_1[1];
      pbVar4 = *(byte **)(iVar3 + 8);
      bVar2 = *pbVar4;
      bVar6 = 0;
      if ((bVar1 != 0) && (pbVar5 = param_2, bVar6 = bVar1, bVar2 == bVar1)) {
        do {
          bVar6 = pbVar5[1];
          bVar2 = pbVar4[1];
          if (bVar6 == 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (bVar6 == bVar2);
      }
      if ((uint)bVar6 == (uint)bVar2) {
        return iVar3;
      }
      if ((int)((uint)bVar6 - (uint)bVar2) < 1) {
        local_24 = uVar7;
        if (uVar7 <= local_20) {
          return 0;
        }
      }
      else {
        local_20 = uVar7 + 1;
        if (local_24 <= local_20) {
          return 0;
        }
      }
    } while( true );
  }
  return 0;
}

// --- RefreshFolder @0x0403b280 ---
/* source: caseInsensitivePath */

void RefreshFolder(int param_1,char *param_2)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  DIR *__dirp;
  dirent64 *pdVar4;
  byte *pbVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  __int32_t **pp_Var9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  stat64 *psVar18;
  stat64 *psVar19;
  char cVar20;
  byte *pbVar21;
  bool bVar22;
  size_t local_440;
  uint local_43c;
  uint local_438;
  void *local_434;
  int local_430;
  int local_42c;
  uint local_428;
  stat64 local_41c [10];
  
  bVar22 = false;
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    iVar10 = FUN_04040720(param_2,1);
    bVar22 = iVar10 == 2;
  }
  puVar3 = malloc(8);
  if (puVar3 == (uint *)0x0) {
    FUN_0400a810("dirBuffer",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                 ,0x12e,"void RefreshFolder(DirectoryElement*, const char*, const char*)");
  }
  local_434 = malloc(0x100);
  __dirp = opendir(param_2);
  if (__dirp == (DIR *)0x0) {
    FUN_0402cd10(0xf,"RefreshFolder() FAILED opendir() on \'%s\'",param_2);
    local_428 = 0;
    local_43c = 0x10;
  }
  else {
    pdVar4 = readdir64(__dirp);
    local_428 = 0;
    local_43c = 0x10;
    while (pdVar4 != (dirent64 *)0x0) {
      if ((pdVar4->d_name[0] != '.') ||
         ((pdVar4->d_name[1] != '\0' && (*(short *)(pdVar4->d_name + 1) != 0x2e)))) {
        pcVar13 = pdVar4->d_name;
        if ((pdVar4->d_type != '\b') && (pdVar4->d_type != '\x04')) {
          iVar10 = dirfd(__dirp);
          iVar10 = __fxstatat64(3,iVar10,pcVar13,local_41c,0);
          if (iVar10 != -1) {
            pdVar4->d_type = (uchar)((local_41c[0].st_mode & 0xf000) >> 0xc);
          }
        }
        if (local_428 == local_43c) {
          local_43c = local_428 * 2;
          local_434 = realloc(local_434,local_428 << 5);
        }
        pbVar5 = (byte *)(local_428 * 0x10 + (int)local_434);
        sVar6 = strlen(pcVar13);
        *pbVar5 = (byte)sVar6;
        bVar17 = pdVar4->d_type;
        pbVar5[2] = 0;
        pbVar5[1] = bVar17;
        pcVar7 = malloc((sVar6 & 0xff) + 1);
        *(char **)(pbVar5 + 4) = pcVar7;
        strcpy(pcVar7,pcVar13);
        pcVar8 = malloc(*pbVar5 + 1);
        pcVar7 = *(char **)(pbVar5 + 4);
        *(char **)(pbVar5 + 8) = pcVar8;
        cVar20 = *pcVar7;
        while (cVar20 != '\0') {
          if ((int)cVar20 + 0x80U < 0x180) {
            pp_Var9 = __ctype_tolower_loc();
            cVar20 = (char)(*pp_Var9)[cVar20];
          }
          *pcVar8 = cVar20;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
          cVar20 = *pcVar7;
        }
        *pcVar8 = '\0';
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        if ((*(byte *)(param_1 + 3) & 1) == 0) {
          if (bVar22) {
            strcpy((char *)local_41c,param_2);
            strcat((char *)local_41c,pcVar13);
            iVar10 = FUN_04040720(local_41c,0);
            bVar17 = pbVar5[3] & 0xfe | iVar10 == 1;
            pbVar5[3] = bVar17;
          }
          else {
            bVar17 = pbVar5[3] & 0xfe;
            pbVar5[3] = bVar17;
          }
        }
        else {
          bVar17 = pbVar5[3] | 1;
          pbVar5[3] = bVar17;
        }
        pbVar5[3] = bVar17 & 0xfd;
        local_428 = local_428 + 1;
      }
      pdVar4 = readdir64(__dirp);
    }
    closedir(__dirp);
  }
  iVar10 = FUN_0403c6f0(param_2);
  if ((iVar10 != 0) && (0 < iVar10)) {
    local_42c = 0;
    local_438 = local_428 * 2;
    local_430 = local_428 << 4;
    local_440 = local_428 << 5;
    do {
      FUN_0403c700(param_2,local_42c,local_41c,0x100);
      if (local_43c == local_42c + local_428) {
        local_434 = realloc(local_434,local_440);
        local_43c = local_438;
      }
      pbVar5 = (byte *)((int)local_434 + local_430);
      psVar19 = local_41c;
      do {
        psVar18 = psVar19;
        uVar12 = (uint)psVar18->st_dev;
        psVar19 = (stat64 *)((int)&psVar18->st_dev + 4);
        uVar11 = uVar12 + 0xfefefeff & ~uVar12;
        uVar12 = uVar11 & 0x80808080;
      } while (uVar12 == 0);
      if ((uVar11 & 0x8080) == 0) {
        psVar19 = (stat64 *)((int)&psVar18->st_dev + 6);
        uVar12 = uVar12 >> 0x10;
      }
      bVar17 = (((char)psVar19 + -3) - CARRY1((byte)uVar12,(byte)uVar12)) - (char)local_41c;
      pbVar5[1] = 8;
      pbVar5[2] = 0;
      *pbVar5 = bVar17;
      pcVar13 = malloc(bVar17 + 1);
      *(char **)(pbVar5 + 4) = pcVar13;
      strcpy(pcVar13,(char *)local_41c);
      pcVar7 = malloc(*pbVar5 + 1);
      pcVar13 = *(char **)(pbVar5 + 4);
      *(char **)(pbVar5 + 8) = pcVar7;
      cVar20 = *pcVar13;
      while (cVar20 != '\0') {
        if ((int)cVar20 + 0x80U < 0x180) {
          pp_Var9 = __ctype_tolower_loc();
          cVar20 = (char)(*pp_Var9)[cVar20];
        }
        *pcVar7 = cVar20;
        pcVar13 = pcVar13 + 1;
        pcVar7 = pcVar7 + 1;
        cVar20 = *pcVar13;
      }
      *pcVar7 = '\0';
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[3] = pbVar5[3] & 0xfd | 1;
      local_42c = local_42c + 1;
      local_438 = local_438 + 2;
      local_430 = local_430 + 0x10;
      local_440 = local_440 + 0x20;
    } while (local_42c != iVar10);
    local_428 = local_428 + local_42c;
  }
  *puVar3 = local_428;
  if (local_428 == 0) {
    puVar3[1] = 0;
    free(local_434);
    local_428 = *puVar3;
  }
  else if (local_428 == local_43c) {
    puVar3[1] = (uint)local_434;
  }
  else {
    pvVar14 = realloc(local_434,local_428 << 4);
    local_428 = *puVar3;
    puVar3[1] = (uint)pvVar14;
  }
  if (1 < local_428) {
    qsort((void *)puVar3[1],local_428,0x10,FUN_0403ac70);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
LAB_0403b733:
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
    *(uint **)(param_1 + 0xc) = puVar3;
    return;
  }
  uVar12 = piVar1[1];
  uVar15 = *piVar1 * 0x10 + uVar12;
  uVar11 = puVar3[1];
  uVar16 = *puVar3 * 0x10 + uVar11;
LAB_0403b6dc:
  if (uVar11 < uVar16) {
    do {
      if (uVar15 <= uVar12) break;
      pbVar5 = *(byte **)(uVar12 + 8);
      bVar17 = *pbVar5;
      bVar2 = **(byte **)(uVar11 + 8);
      pbVar21 = *(byte **)(uVar11 + 8);
      if (bVar17 != 0) {
        while (bVar17 == bVar2) {
          bVar17 = pbVar5[1];
          if (bVar17 == 0) {
            iVar10 = -(uint)pbVar21[1];
            goto joined_r0x0403b8cb;
          }
          pbVar5 = pbVar5 + 1;
          bVar2 = pbVar21[1];
          pbVar21 = pbVar21 + 1;
        }
      }
      iVar10 = (uint)bVar17 - (uint)bVar2;
joined_r0x0403b8cb:
      if (iVar10 < 0) goto LAB_0403b8d1;
      if (iVar10 == 0) {
        iVar10 = strcmp(*(char **)(uVar12 + 4),*(char **)(uVar11 + 4));
        if (iVar10 == 0) {
          *(undefined4 *)(uVar11 + 0xc) = *(undefined4 *)(uVar12 + 0xc);
          *(undefined4 *)(uVar12 + 0xc) = 0;
          *(undefined1 *)(uVar11 + 2) = *(undefined1 *)(uVar12 + 2);
          bVar17 = *(byte *)(uVar11 + 3);
          bVar2 = *(byte *)(uVar12 + 3) & 1;
          *(byte *)(uVar11 + 3) = bVar17 & 0xfe | bVar2;
          *(byte *)(uVar11 + 3) = bVar17 & 0xfc | bVar2 | *(byte *)(uVar12 + 3) & 2;
        }
        uVar12 = uVar12 + 0x10;
      }
      uVar11 = uVar11 + 0x10;
      if (uVar16 <= uVar11) break;
    } while( true );
  }
  FUN_0403adc0(*(undefined4 *)(param_1 + 0xc));
  goto LAB_0403b733;
LAB_0403b8d1:
  uVar12 = uVar12 + 0x10;
  goto LAB_0403b6dc;
}

// --- VPFS_Internal_MakePathCaseSensitive @0x0403ba20 ---
/* source: caseInsensitivePath */

undefined4
VPFS_Internal_MakePathCaseSensitive(char *param_1,char *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  void *__s2;
  size_t __size;
  __int32_t **pp_Var2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 *__dest;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  uint __n;
  char *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  char *local_70;
  char *local_68;
  char local_5c [32];
  undefined1 local_3c [44];
  
  if (*(char *)(param_3 + 1) != '\x04') {
    if (*(char *)(param_3 + 1) == '\b') {
      return 0;
    }
    FUN_0402cd10(10,"Trying to access something that\'s not a regular file or folder: \'%s\' !",
                 param_1);
    return 0;
  }
  bVar12 = *(int *)(param_3 + 0xc) == 0;
  cVar7 = *param_2;
  if (bVar12) {
    *param_2 = '\0';
    RefreshFolder(param_3,param_1,param_4);
    *param_2 = cVar7;
  }
  pcVar8 = param_2;
  if ((cVar7 == '\0') || (cVar7 == '/')) {
    pcVar9 = local_5c;
    local_68 = pcVar9;
  }
  else {
    __size = 1;
    do {
      pcVar8 = pcVar8 + 1;
      __size = __size + 1;
      if (*pcVar8 == '/') break;
    } while (*pcVar8 != '\0');
    pcVar9 = local_5c;
    pcVar10 = param_2;
    local_68 = pcVar9;
    if (0x20 < (int)__size) {
      pcVar9 = malloc(__size);
      local_68 = pcVar9;
    }
    do {
      if ((int)cVar7 + 0x80U < 0x180) {
        pp_Var2 = __ctype_tolower_loc();
        cVar7 = (char)(*pp_Var2)[cVar7];
      }
      *pcVar9 = cVar7;
      pcVar9 = pcVar9 + 1;
      cVar7 = pcVar10[1];
    } while ((cVar7 != '/') && (pcVar10 = pcVar10 + 1, cVar7 != '\0'));
  }
  local_70 = local_5c;
  *pcVar9 = '\0';
  cVar7 = *pcVar8;
  *pcVar8 = '\0';
  iVar3 = FUN_0403c400(param_1);
  if ((iVar3 == 0) && (iVar3 = access(param_1,0), iVar3 != 0)) {
    uVar11 = 0;
    *pcVar8 = cVar7;
    piVar4 = __errno_location();
    if (*piVar4 == 0x14) goto LAB_0403bb40;
    pbVar5 = (byte *)GetSubelement();
    if (pbVar5 == (byte *)0x0) goto LAB_0403bdc0;
    uVar11 = 0;
    if (pbVar5[2] != 0) goto LAB_0403bb40;
    bVar1 = *pbVar5;
    __s2 = *(void **)(pbVar5 + 4);
    __n = (uint)bVar1;
    iVar3 = memcmp(param_2,__s2,__n);
    if (iVar3 == 0) {
LAB_0403bdc0:
      uVar11 = 0;
      if ((bVar12) || (uVar11 = 0, (*(ushort *)(param_3 + 2) & 0x3ff) != 0x200)) goto LAB_0403bb40;
      cVar7 = *param_2;
      *param_2 = '\0';
      uVar6 = FUN_04019f50(1);
      FUN_0402cd10(10,"Refreshing folder \'%s\', temp folder is \'%s\'.",param_1,uVar6);
      RefreshFolder(param_3,param_1,param_4);
      *param_2 = cVar7;
      pbVar5 = (byte *)GetSubelement();
      if (pbVar5 == (byte *)0x0) goto LAB_0403bb40;
      memcpy(param_2,*(void **)(pbVar5 + 4),(uint)*pbVar5);
      cVar7 = *pcVar8;
      *pcVar8 = '\0';
      iVar3 = access(param_1,0);
      if (iVar3 != 0) {
        FUN_0400a810("access( caseInsensitiveModifiablePath, 0 ) == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                     ,0x2f5,
                     "int32_t VPFS_Internal_MakePathCaseSensitive(char*, char*, DirectoryElement*, const char*)"
                    );
      }
      *pcVar8 = cVar7;
    }
    else {
      __dest = local_3c;
      if (0x20 < bVar1) {
        __dest = malloc(__n);
      }
      memcpy(__dest,param_2,__n);
      memcpy(param_2,__s2,__n);
      cVar7 = *pcVar8;
      *pcVar8 = '\0';
      iVar3 = FUN_0403c400(param_1);
      if ((iVar3 == 0) && (iVar3 = access(param_1,0), iVar3 != 0)) {
        memcpy(param_2,__dest,(uint)*pbVar5);
        if (__dest != local_3c) {
          free(__dest);
        }
        uVar11 = 0;
        *pcVar8 = cVar7;
        if (*piVar4 == 0x14) goto LAB_0403bb40;
        goto LAB_0403bdc0;
      }
      if (__dest != local_3c) {
        free(__dest);
      }
      *pcVar8 = cVar7;
    }
    uVar11 = 1;
    if (cVar7 == '\0') goto LAB_0403bb40;
  }
  else {
    uVar11 = 1;
    *pcVar8 = cVar7;
    if (cVar7 == '\0') goto LAB_0403bb40;
    pbVar5 = (byte *)GetSubelement();
    if ((pbVar5 == (byte *)0x0) ||
       ((pbVar5[2] == 0 &&
        (iVar3 = memcmp(*(void **)(pbVar5 + 4),param_2,(uint)*pbVar5), iVar3 != 0)))) {
      cVar7 = *param_2;
      *param_2 = '\0';
      RefreshFolder(param_3,param_1,param_4);
      *param_2 = cVar7;
      pbVar5 = (byte *)GetSubelement();
      if (pbVar5 == (byte *)0x0) {
        uVar11 = 0;
        FUN_0400a810("element",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                     ,0x271,
                     "int32_t VPFS_Internal_MakePathCaseSensitive(char*, char*, DirectoryElement*, const char*)"
                    );
        goto LAB_0403bb40;
      }
      iVar3 = memcmp(*(void **)(pbVar5 + 4),param_2,(uint)*pbVar5);
      if (iVar3 != 0) {
        pbVar5[2] = 1;
      }
    }
  }
  uVar11 = VPFS_Internal_MakePathCaseSensitive(param_1,pcVar8 + 1,pbVar5,param_4);
LAB_0403bb40:
  if (local_68 == local_70) {
    return uVar11;
  }
  free(local_68);
  return uVar11;
}

// --- VPFS_MadeChangesAtPath @0x0403c210 ---
/* source: caseInsensitivePath */

void VPFS_MadeChangesAtPath(char *param_1)

{
  size_t sVar1;
  __int32_t **pp_Var2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_820;
  char local_81c [1024];
  char local_41c [1036];
  
  sVar1 = strlen(param_1);
  local_820 = (undefined1 *)sVar1;
  memcpy(local_81c,param_1,sVar1 + 1);
  if (local_81c[0] != '/') {
    FUN_0400a810("modifiablePath[0] == \'/\'",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                 ,0x35d,"void VPFS_MadeChangesAtPath(const char*)");
  }
  if (local_81c[sVar1 - 1] == '/') {
    local_81c[sVar1 - 1] = '\0';
    local_820 = (undefined1 *)(sVar1 - 1);
  }
  pcVar4 = local_81c + ((int)local_820 - 1U);
  if (CARRY4((uint)local_81c,(int)local_820 - 1U)) {
LAB_0403c299:
    if (*pcVar4 != '/') {
      FUN_0400a810("*ptr == \'/\'",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                   ,0x36b,"void VPFS_MadeChangesAtPath(const char*)");
    }
  }
  else {
    cVar3 = local_81c[(int)local_820 - 1];
    while (cVar3 != '/') {
      pcVar4 = pcVar4 + -1;
      if (pcVar4 < local_81c) goto LAB_0403c299;
      cVar3 = *pcVar4;
    }
  }
  *pcVar4 = '\0';
  local_820 = DAT_04415c48;
  if (DAT_04415c48 == (undefined1 *)0x0) {
    local_820 = malloc(0x10);
    DAT_04415c48 = local_820;
    *(undefined4 *)(local_820 + 4) = 0;
    local_820[1] = 4;
    *local_820 = 0;
    *(undefined4 *)(local_820 + 8) = 0;
    local_820[3] = local_820[3] & 0xfc;
    *(undefined4 *)(local_820 + 0xc) = 0;
    local_820[2] = 0;
  }
  pcVar4 = local_81c;
  do {
    pcVar4 = pcVar4 + 1;
    cVar3 = *pcVar4;
    pcVar5 = local_41c;
    if ((cVar3 != '\0') && (cVar3 != '/')) {
      do {
        pcVar4 = pcVar4 + 1;
        if ((int)cVar3 + 0x80U < 0x180) {
          pp_Var2 = __ctype_tolower_loc();
          cVar3 = (char)(*pp_Var2)[cVar3];
        }
        *pcVar5 = cVar3;
        cVar3 = *pcVar4;
        pcVar5 = pcVar5 + 1;
      } while ((cVar3 != '/') && (cVar3 != '\0'));
    }
    *pcVar5 = '\0';
    if (*(int *)(local_820 + 0xc) == 0) {
      return;
    }
    local_820 = (undefined1 *)GetSubelement();
    if (local_820 == (undefined1 *)0x0) {
      return;
    }
  } while (cVar3 != '\0');
  if ((local_820[3] & 1) == 0) {
    local_820[3] = local_820[3] | 2;
  }
  return;
}

// --- VPFS_MakePathCaseSensitive @0x0403bf60 ---
/* source: caseInsensitivePath */

undefined4 VPFS_MakePathCaseSensitive(char *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  __int32_t **pp_Var4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  char local_41c [1036];
  
  if (*param_2 == '/') {
    FUN_0400a810("*firstUncertainPathElement != \'/\'",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                 ,0x316,"int32_t VPFS_MakePathCaseSensitive(char*, char*, const char*)");
  }
  if (*param_1 != '/') {
    FUN_0400a810("*caseInsensitiveModifiablePath == \'/\'",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                 ,0x317,"int32_t VPFS_MakePathCaseSensitive(char*, char*, const char*)");
  }
  puVar5 = DAT_04415c48;
  pcVar8 = param_1;
  if (DAT_04415c48 == (undefined1 *)0x0) {
    puVar5 = malloc(0x10);
    DAT_04415c48 = puVar5;
    *(undefined4 *)(puVar5 + 4) = 0;
    puVar5[1] = 4;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    puVar5[3] = puVar5[3] & 0xfc;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    puVar5[2] = 0;
  }
joined_r0x0403bfc6:
  do {
    puVar3 = puVar5;
    pcVar2 = pcVar8 + 1;
    if (param_2 == pcVar2) {
      uVar6 = VPFS_Internal_MakePathCaseSensitive(param_1,param_2,puVar3,param_3);
      return uVar6;
    }
    cVar1 = *pcVar2;
    pcVar8 = pcVar2;
    if ((cVar1 == '/') || (cVar1 == '\0')) {
      pcVar9 = local_41c;
    }
    else {
      pcVar9 = local_41c;
      cVar7 = cVar1;
      do {
        pcVar8 = pcVar8 + 1;
        if ((int)cVar7 + 0x80U < 0x180) {
          pp_Var4 = __ctype_tolower_loc();
          cVar7 = (char)(*pp_Var4)[cVar7];
        }
        *pcVar9 = cVar7;
        cVar7 = *pcVar8;
        pcVar9 = pcVar9 + 1;
      } while ((cVar7 != '/') && (cVar7 != '\0'));
    }
    *pcVar9 = '\0';
    if (*(int *)(puVar3 + 0xc) == 0) {
      *pcVar2 = '\0';
      RefreshFolder(puVar3,param_1,param_3);
      *pcVar2 = cVar1;
      if (*(int *)(puVar3 + 0xc) == 0) {
        return 0;
      }
    }
    else {
      puVar5 = (undefined1 *)GetSubelement();
      if (puVar5 != (undefined1 *)0x0) goto joined_r0x0403bfc6;
      cVar1 = *pcVar2;
      *pcVar2 = '\0';
      RefreshFolder(puVar3,param_1,param_3);
      *pcVar2 = cVar1;
    }
    puVar5 = (undefined1 *)GetSubelement();
    if (puVar5 == (undefined1 *)0x0) {
      FUN_0400a810("directoryElementForCertainPath",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp"
                   ,0x343,"int32_t VPFS_MakePathCaseSensitive(char*, char*, const char*)");
      return 0;
    }
  } while( true );
}

