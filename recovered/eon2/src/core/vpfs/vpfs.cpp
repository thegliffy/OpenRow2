// Recovered source: eon2/src/core/vpfs/vpfs.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- TemporaryDirElemList_Add @0x0403d290 ---
/* source: vpfs */

void __regparm3 TemporaryDirElemList_Add(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *__ptr;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_28;
  int local_20;
  
  local_28 = param_1[1];
  __ptr = (void *)*param_1;
  uVar3 = local_28;
  uVar4 = 0;
  while (uVar4 != uVar3) {
    while( true ) {
      uVar2 = uVar3 + uVar4 >> 1;
      local_20 = uVar2 * 4;
      iVar1 = FUN_0403cd80();
      if (uVar3 - uVar4 == 1) {
        local_20 = uVar3 * 4;
        uVar2 = uVar3;
        if (iVar1 < 1) {
          local_20 = uVar4 * 4;
          uVar2 = uVar4;
        }
        goto LAB_0403d328;
      }
      if (-1 < iVar1) break;
      uVar3 = uVar2;
      if (uVar2 == uVar4) goto LAB_0403d328;
    }
    uVar4 = uVar2;
    if (iVar1 == 0) goto LAB_0403d328;
  }
  local_20 = uVar4 * 4;
  uVar2 = uVar4;
LAB_0403d328:
  if ((uVar2 < local_28) && (iVar1 = FUN_0403cd80(), iVar1 == 0)) {
    FUN_0400a810("( index >= tl->ElemCount ) || Windowslike_strcasecmp( tl->ElemBuffer[index]->ElementName, newElem->ElementName )"
                 ,"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x1d7,
                 "void TemporaryDirElemList_Add(TemporaryDirElemList*, VPFS_InternalTemporaryDirElement*)"
                );
    local_28 = param_1[1];
    __ptr = (void *)*param_1;
  }
  if (param_1[2] == local_28) {
    param_1[2] = local_28 * 2;
    __ptr = realloc(__ptr,local_28 << 3);
    local_28 = param_1[1];
    *param_1 = __ptr;
  }
  if (uVar2 < local_28) {
    memmove((void *)((int)__ptr + uVar2 * 4 + 4),(void *)(local_20 + (int)__ptr),
            (local_28 - uVar2) * 4);
    local_28 = param_1[1];
    __ptr = (void *)*param_1;
  }
  *(undefined4 *)((int)__ptr + local_20) = param_2;
  param_1[1] = local_28 + 1;
  return;
}

// --- TransferBufferSet @0x0403c760 ---
/* source: vpfs */

void __regparm2
TransferBufferSet(void *param_1,int param_2,void *param_3,void *param_4,size_t param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  size_t __n;
  
  uVar1 = (uint)param_3 >> 0xc | (int)param_4 << 0x14;
  uVar2 = (uint)param_3 & 0xfff;
  if (0x1000 < param_5) {
    FUN_0400a810("byteCount <= pageSize",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0xe74,
                 "void TransferBufferSet(uint8_t*, void*, VPFSFileSize, DWORD, WINBOOL)");
  }
  if (uVar2 + param_5 < 0x1001) {
    param_4 = (void *)(uVar2 + *(int *)(param_2 + uVar1 * 8));
    param_3 = param_1;
    if (param_6 == 0) {
      param_3 = param_4;
      param_4 = param_1;
    }
  }
  else {
    __n = 0x1000 - uVar2;
    __dest = (void *)(uVar2 + *(int *)(param_2 + uVar1 * 8));
    if (param_6 == 0) {
      memcpy(__dest,param_1,__n);
      param_5 = param_5 - __n;
      param_4 = (void *)(__n + (int)param_1);
      param_3 = *(void **)(param_2 + 8 + uVar1 * 8);
    }
    else {
      memcpy(param_1,__dest,__n);
      param_4 = *(void **)(param_2 + 8 + uVar1 * 8);
      param_5 = param_5 - __n;
      param_3 = (void *)((int)param_1 + __n);
    }
  }
  memcpy(param_3,param_4,param_5);
  return;
}

// --- VPFS_Config_Prepare @0x0403d5d0 ---
/* source: vpfs */

void VPFS_Config_Prepare(void)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  __int32_t **pp_Var6;
  size_t sVar7;
  void *pvVar8;
  size_t sVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char cVar16;
  int *piVar17;
  size_t sVar18;
  size_t local_424;
  char local_41c [1036];
  
  uVar12 = DAT_04417804;
  if (DAT_04417804 != 0) {
    puVar5 = &DAT_04417820;
    do {
      puVar13 = puVar5;
      uVar3 = *puVar13 + 0xfefefeff & ~*puVar13;
      uVar4 = uVar3 & 0x80808080;
      puVar5 = puVar13 + 1;
    } while (uVar4 == 0);
    puVar5 = (uint *)((int)puVar13 + 6);
    uVar10 = uVar4 >> 0x10;
    if ((uVar3 & 0x8080) != 0) {
      puVar5 = puVar13 + 1;
      uVar10 = uVar4;
    }
    uVar4 = (uint)(DAT_04417820._1_1_ == ':');
    uVar10 = (int)puVar5 + (-0x4417822 - (uint)CARRY1((byte)uVar10,(byte)uVar10));
    uVar3 = uVar4 * 2;
    puVar5 = malloc(uVar10 + uVar4 * -2);
    if (uVar3 < uVar10) {
      do {
        cVar16 = *(char *)((int)&DAT_04417820 + uVar3);
        if ((int)cVar16 + 0x80U < 0x180) {
          pp_Var6 = __ctype_tolower_loc();
          cVar16 = (char)(*pp_Var6)[cVar16];
        }
        *(char *)((int)puVar5 + uVar3 + uVar4 * -2) = cVar16;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar10);
    }
    FUN_0403cbe0();
    puVar15 = DAT_0441780c;
    puVar13 = puVar5;
    do {
      puVar11 = puVar13;
      uVar3 = *puVar11 + 0xfefefeff & ~*puVar11;
      uVar4 = uVar3 & 0x80808080;
      puVar13 = puVar11 + 1;
    } while (uVar4 == 0);
    uVar10 = uVar4 >> 0x10;
    puVar13 = (uint *)((int)puVar11 + 6);
    if ((uVar3 & 0x8080) != 0) {
      puVar13 = puVar11 + 1;
      uVar10 = uVar4;
    }
    sVar18 = 0;
    sVar9 = (int)puVar13 + ((-3 - (uint)CARRY1((byte)uVar10,(byte)uVar10)) - (int)puVar5);
    puVar14 = DAT_0441780c;
    do {
      if (*(char *)*puVar14 != '/') {
        sVar7 = strlen((char *)*puVar14);
        pvVar8 = malloc(sVar9 + sVar7 + 2);
        memcpy(pvVar8,puVar5,sVar9);
        *(undefined1 *)((int)pvVar8 + sVar9) = 0x2f;
        memcpy((void *)(sVar9 + 1 + (int)pvVar8),(void *)*puVar14,sVar7);
        *(undefined1 *)((int)pvVar8 + sVar9 + sVar7 + 1) = 0;
        FUN_0403cbe0();
        free((void *)*puVar14);
        *puVar14 = pvVar8;
      }
      sVar18 = sVar18 + 1;
      puVar14 = puVar14 + 4;
    } while (sVar18 != uVar12);
    free(puVar5);
    qsort(puVar15,sVar18,0x10,FUN_0403c710);
    puVar15 = DAT_0441780c;
    pcVar2 = (char *)*DAT_0441780c;
    sVar9 = strlen(pcVar2);
    local_424 = sVar9 + 1;
    memcpy(local_41c,pcVar2,local_424);
    if (1 < DAT_04417804) {
      uVar12 = 1;
      sVar18 = sVar9;
      do {
        sVar9 = sVar18;
        if (sVar18 != 0) {
          if (local_41c[0] == *(char *)puVar15[uVar12 * 4]) {
            sVar7 = 0;
            do {
              sVar7 = sVar7 + 1;
              sVar9 = sVar18;
              if (sVar7 == sVar18) break;
              sVar9 = sVar7;
            } while (local_41c[sVar7] == ((char *)puVar15[uVar12 * 4])[sVar7]);
          }
          else {
            sVar9 = 0;
          }
        }
        uVar12 = uVar12 + 1;
        sVar18 = sVar9;
      } while (uVar12 != DAT_04417804);
      local_424 = sVar9 + 1;
    }
    if (sVar9 == 0) {
      FUN_0402cd10(0xf,"Critical error: leading VPFS substring length is 0!");
      if (DAT_04417804 != 0) {
        uVar12 = 0;
        do {
          uVar3 = uVar12 + 1;
          FUN_0402cd10(0xf,"Source path %d = \'%s\'",uVar12,DAT_0441780c[uVar12 * 4]);
          uVar12 = uVar3;
        } while (uVar3 < DAT_04417804);
      }
      FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                   0x339,"void VPFS_Config_Prepare(const char*)");
    }
    uVar12 = DAT_04417804;
    pvVar8 = malloc(local_424);
    DAT_04468a98 = pvVar8;
    memcpy(pvVar8,local_41c,sVar9);
    DAT_04468a9c = sVar9;
    *(undefined1 *)((int)pvVar8 + sVar9) = 0;
    if (uVar12 != 0) {
      uVar3 = 0;
      puVar15 = DAT_0441780c;
      do {
        pcVar2 = (char *)*puVar15;
        uVar3 = uVar3 + 1;
        puVar15 = puVar15 + 4;
        sVar18 = strlen(pcVar2);
        memmove(pcVar2,pcVar2 + sVar9,sVar18 + (1 - sVar9));
      } while (uVar3 != uVar12);
    }
    DAT_0441780c = realloc(DAT_0441780c,uVar12 << 4);
    DAT_04417808 = uVar12;
    FUN_0402cd10(5,"Leading substring: \'%s\'",pvVar8);
    if (DAT_04417804 != 0) {
      uVar12 = 0;
      do {
        puVar15 = DAT_0441780c + uVar12 * 4;
        pcVar2 = (char *)*puVar15;
        sVar9 = strlen(pcVar2);
        *(short *)(puVar15 + 3) = (short)sVar9;
        pvVar8 = realloc(pcVar2,(sVar9 & 0xffff) + 1);
        *puVar15 = pvVar8;
        FUN_0402cd10(5,"Source path %d: \'%s\'",uVar12,pvVar8);
        piVar17 = DAT_0441780c + uVar12 * 4;
        if ((*(ushort *)(piVar17 + 3) != 0) &&
           (*(char *)(*piVar17 + -1 + (uint)*(ushort *)(piVar17 + 3)) == '/')) {
          FUN_0400a810("!VPFS_Config_PathVector[i].SourcePathLength || ( VPFS_Config_PathVector[i].SourcePath[VPFS_Config_PathVector[i].SourcePathLength-1] != \'/\' )"
                       ,"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                       0x352,"void VPFS_Config_Prepare(const char*)");
          piVar17 = DAT_0441780c + uVar12 * 4;
        }
        pcVar2 = (char *)piVar17[1];
        sVar9 = strlen(pcVar2);
        *(short *)((int)piVar17 + 0xe) = (short)sVar9;
        pvVar8 = realloc(pcVar2,(sVar9 & 0xffff) + 1);
        piVar17[1] = (int)pvVar8;
        FUN_0402cd10(5,"Target path %d: \'%s\'",uVar12,pvVar8);
        uVar1 = *(ushort *)((int)DAT_0441780c + uVar12 * 0x10 + 0xe);
        if ((uVar1 != 0) && (*(char *)(DAT_0441780c[uVar12 * 4 + 1] + -1 + (uint)uVar1) == '/')) {
          FUN_0400a810("!VPFS_Config_PathVector[i].TargetPathLength || ( VPFS_Config_PathVector[i].TargetPath[VPFS_Config_PathVector[i].TargetPathLength-1] != \'/\' )"
                       ,"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                       0x357,"void VPFS_Config_Prepare(const char*)");
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < DAT_04417804);
    }
  }
  return;
}

// --- VPFS_ConvertDiskFileToWriteableLocation @0x0403f740 ---
/* source: vpfs */

undefined4 __regparm3 VPFS_ConvertDiskFileToWriteableLocation(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  uint local_c44;
  int local_c40;
  int local_c34;
  undefined1 local_c28 [1024];
  char local_828 [1024];
  undefined1 local_428 [16];
  uint local_418;
  uint local_28;
  int local_24;
  uint local_20 [4];
  
  iVar2 = fs_CreateFileA();
  if (iVar2 == -1) {
    FUN_0402cd10();
    return 0;
  }
  iVar3 = fs_CreateFileA();
  if (iVar3 == -1) {
    FUN_04131a90();
    FUN_0402cd10();
    uVar7 = 0;
  }
  else {
    VPFS_MadeChangesAtPath();
    FUN_04130770();
    local_c40 = local_24;
    local_c44 = local_28;
    if ((0 < local_24) || ((-1 < local_24 && (0xfffff < local_28)))) {
      local_c44 = 0x100000;
      local_c40 = 0;
    }
    pvVar4 = malloc(local_c44);
    piVar11 = (int *)&stack0xfffff344;
    if (pvVar4 == (void *)0x0) {
      FUN_0402cd10();
      FUN_04131a90();
      FUN_04131a90(iVar3);
      uVar7 = 0;
    }
    else {
      do {
        piVar10 = piVar11;
        uVar8 = local_c44;
        if ((local_24 <= local_c40) && ((local_24 < local_c40 || (local_28 <= local_c44)))) {
          uVar8 = local_28;
        }
        bVar12 = local_28 < uVar8;
        local_28 = local_28 - uVar8;
        local_24 = local_24 - (uint)bVar12;
        piVar10[4] = 0;
        piVar10[1] = (int)pvVar4;
        piVar10[3] = (int)local_20;
        piVar10[2] = uVar8;
        *piVar10 = iVar2;
        piVar10[-1] = 0x403f8b4;
        iVar5 = fs_ReadFile();
        if ((iVar5 == 0) || (local_20[0] < uVar8)) {
          piVar10[-5] = (int)pvVar4;
          piVar10[-6] = 0x403fc2f;
          free((void *)piVar10[-5]);
          piVar10[-5] = iVar2;
          piVar10[-6] = 0x403fc3d;
          FUN_04131a90();
          piVar10[-6] = iVar3;
          piVar10[-7] = 0x403fc4e;
          FUN_04131a90();
          piVar10[-6] = (int)
                        "VPFS_ConvertDiskFileToWriteableLocation() error - couldn\'t read bytes from source file"
          ;
          piVar10[-7] = 0xf;
          piVar10[-8] = 0x403fc65;
          FUN_0402cd10();
          return 0;
        }
        piVar10[-3] = uVar8;
        piVar10[-1] = 0;
        piVar10[-2] = (int)local_20;
        piVar10[-4] = (int)pvVar4;
        piVar10[-5] = iVar3;
        piVar10[-6] = 0x403f8f3;
        iVar5 = fs_WriteFile();
        if ((iVar5 == 0) || (local_20[0] < uVar8)) {
          piVar10[-10] = (int)pvVar4;
          piVar10[-0xb] = 0x403fc8f;
          free((void *)piVar10[-10]);
          piVar10[-10] = iVar2;
          piVar10[-0xb] = 0x403fc9d;
          FUN_04131a90();
          piVar10[-0xb] = iVar3;
          piVar10[-0xc] = 0x403fcae;
          FUN_04131a90();
          piVar10[-0xb] =
               (int)
               "VPFS_ConvertDiskFileToWriteableLocation() error - couldn\'t write bytes to target file"
          ;
          piVar10[-0xc] = 0xf;
          piVar10[-0xd] = 0x403fcc5;
          FUN_0402cd10();
          return 0;
        }
        piVar11 = piVar10 + -10;
      } while ((0 < local_24) || ((-1 < local_24 && (piVar11 = piVar10 + -10, local_28 != 0))));
      piVar10[-10] = (int)pvVar4;
      piVar10[-0xb] = 0x403f935;
      free((void *)piVar10[-10]);
      piVar10[-10] = iVar2;
      piVar10[-0xb] = 0x403f943;
      FUN_04131a90();
      piVar10[-0xb] = iVar3;
      piVar10[-0xc] = 0x403f954;
      FUN_04131a90();
      piVar10[-10] = (int)local_428;
      piVar10[-0xc] = 3;
      piVar10[-0xb] = param_1;
      piVar10[-0xd] = 0x403f971;
      iVar2 = __xstat64(piVar10[-0xc],(char *)piVar10[-0xb],(stat64 *)piVar10[-10]);
      if (iVar2 != 0) {
        piVar10[-9] = (int)"int VPFS_ConvertDiskFileToWriteableLocation(const char*, const char*)";
        piVar10[-10] = 0x138b;
        piVar10[-0xb] =
             (int)"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
        piVar10[-0xc] = (int)"stat( sourcePath, &elemStat ) == 0";
        piVar10[-0xd] = 0x403fd1c;
        FUN_0400a810();
      }
      local_20[0] = (uint)((local_418 & 0x80) == 0);
      if ((local_418 & 0x3f000) == 0x4000) {
        local_20[0] = local_20[0] | 0x10;
      }
      else {
        local_20[0] = (-(uint)(local_20[0] == 0) & 0x7f) + 1;
      }
      piVar10[-0xd] = 0x403f9ba;
      iVar2 = VPFS_PathToPathInArchive();
      if (iVar2 == 0) {
        piVar10[-9] = (int)"int VPFS_ConvertDiskFileToWriteableLocation(const char*, const char*)";
        piVar10[-10] = 0x138f;
        piVar10[-0xb] =
             (int)"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
        piVar10[-0xc] = (int)"VPFS_PathToPathInArchive( sourcePath, pathInArchive, 1024 ) != 0";
        piVar10[-0xd] = 0x403fcf3;
        FUN_0400a810();
      }
      piVar10[-0xc] = (int)local_c28;
      piVar10[-0xb] = 0;
      piVar10[-0xd] = 0x403f9d2;
      iVar2 = FUN_0404c040();
      if (iVar2 != 0) {
        piVar10[-0xc] = iVar2;
        piVar10[-0xd] = 0x403f9e0;
        cVar1 = FUN_0404c630();
        if (cVar1 != '\0') {
          piVar10[-9] = (int)"int VPFS_ConvertDiskFileToWriteableLocation(const char*, const char*)"
          ;
          piVar10[-10] = 0x1395;
          piVar10[-0xb] =
               (int)"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
          piVar10[-0xc] = (int)"!VPFSDB_IsDeleted( dbObj )";
          piVar10[-0xd] = 0x403fd8a;
          FUN_0400a810();
        }
        piVar10[-0xc] = iVar2;
        piVar10[-0xb] = (int)local_20;
        piVar10[-0xd] = 0x403f9f7;
        FUN_0404c710();
        piVar10[-0xc] = iVar2;
        piVar10[-0xd] = 0x403f9ff;
        FUN_0404c310();
      }
      pcVar6 = local_828;
      if (*param_2 == '/') {
        local_828[0] = 'C';
        pcVar6 = local_828 + 2;
        local_828[1] = 0x3a;
      }
      piVar10[-0xb] = (int)param_2;
      piVar10[-0xc] = (int)pcVar6;
      piVar10[-0xd] = 0x403fa20;
      strcpy((char *)piVar10[-0xc],(char *)piVar10[-0xb]);
      if (local_828[0] != '\0') {
        pcVar6 = local_828;
        cVar1 = local_828[0];
        do {
          while (cVar1 != '/') {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
            if (cVar1 == '\0') goto LAB_0403fa54;
          }
          *pcVar6 = '\\';
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        } while (cVar1 != '\0');
      }
LAB_0403fa54:
      piVar10[-0xb] = local_20[0];
      piVar10[-0xc] = (int)local_828;
      piVar10[-0xd] = 0x403fa69;
      fs_SetFileAttributesA();
      piVar11 = piVar10 + -0xe;
      piVar10[-0xe] = (int)local_828;
      piVar10[-0xd] = param_1;
      piVar10[-0xf] = 0x403fa84;
      strcpy((char *)piVar10[-0xe],(char *)piVar10[-0xd]);
      piVar10[-0xf] = 0x403fa91;
      iVar2 = VPFS_PathToPathInArchive();
      local_c34 = -1;
      if (iVar2 != 0) {
        piVar10[-0xf] = 0x403fc76;
        local_c34 = VPFS_FindInVirtualFilesystem();
      }
      piVar9 = &DAT_04418280;
      iVar2 = 1;
      do {
        while (iVar3 = *piVar9, iVar3 != 3) {
          if (iVar3 == 5) {
            piVar11[1] = (int)local_828;
            *piVar11 = piVar9[1];
            piVar11[-1] = 0x403fb85;
            iVar3 = strcmp((char *)*piVar11,(char *)piVar11[1]);
            if (iVar3 == 0) goto LAB_0403fae9;
          }
          else if (iVar3 == 2) break;
LAB_0403fac0:
          iVar2 = iVar2 + 1;
          piVar9 = piVar9 + 8;
          if (iVar2 == 0x2801) goto LAB_0403fb50;
        }
        if (piVar9[2] != local_c34) goto LAB_0403fac0;
LAB_0403fae9:
        uVar8 = piVar9[4];
        iVar3 = piVar9[3];
        piVar11[-1] = 0x403fb02;
        VPFS_CloseHandle();
        piVar11[1] = (int)&DAT_0012019f;
        *piVar11 = (int)param_2;
        piVar11[-1] = 0x403fb26;
        iVar5 = VPFS_OpenFileOnDisk();
        if (iVar5 != 0) {
          iVar5 = piVar9[2];
          piVar11[3] = 0;
          piVar11[1] = iVar3;
          piVar11[2] = (int)local_20;
          *piVar11 = iVar5;
          piVar11[-1] = 0x403fbbf;
          local_20[0] = uVar8;
          iVar5 = fs_SetFilePointer();
          if (iVar5 == -1) {
            piVar11[-2] = iVar2;
            piVar11[-3] = (int)
                          "VPFS_ConvertAllFileHandlesToDiskType() - internal logic error! Failed to convert handle %d (SetFiePointer failed)"
            ;
            piVar11[-4] = 0xf;
            piVar11[-5] = 0x403fbf8;
            FUN_0402cd10();
          }
          piVar9[3] = iVar3;
          piVar9[4] = uVar8;
          piVar11 = piVar11 + -4;
          goto LAB_0403fac0;
        }
        piVar11[2] = iVar2;
        iVar2 = iVar2 + 1;
        piVar9 = piVar9 + 8;
        piVar11[1] = (int)
                     "VPFS_ConvertAllFileHandlesToDiskType() - internal logic error! Failed to convert handle %d"
        ;
        *piVar11 = 0xf;
        piVar11[-1] = 0x403fb48;
        FUN_0402cd10();
      } while (iVar2 != 0x2801);
LAB_0403fb50:
      uVar7 = 1;
    }
  }
  return uVar7;
}

// --- VPFS_ConvertToDiskFile @0x04044c70 ---
/* WARNING: Type propagation algorithm not settling */
/* source: vpfs */

undefined4 __regparm3 VPFS_ConvertToDiskFile(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  size_t sVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  bool bVar19;
  undefined *local_1464;
  char *local_1440;
  uint local_143c;
  int local_1438;
  char local_142c [1024];
  char local_102c [1024];
  undefined1 local_c2c [1024];
  char local_82c [1024];
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined *local_20 [4];
  
  iVar18 = DAT_04468a94;
  pcVar8 = (char *)(DAT_04468a94 + 0x24 + param_1);
  sVar6 = strlen(pcVar8);
  if (3 < sVar6) {
    pcVar8 = pcVar8 + (sVar6 - 4);
    iVar7 = strcasecmp(pcVar8,".exe");
    if ((iVar7 == 0) || (iVar7 = strcasecmp(pcVar8,".dll"), iVar7 == 0)) {
      FUN_0402cd10();
      return 0;
    }
  }
  iVar18 = iVar18 + param_1;
  if (param_1 == 0) {
    if (DAT_04468a80 + 1U < 0x401) {
      strcpy(local_142c,(char *)&DAT_04417820);
    }
  }
  else {
    iVar7 = FUN_0403ed10();
    if ((iVar7 != 0) && ((int)(iVar7 + 1 + (uint)*(ushort *)(iVar18 + 2)) < 0x401)) {
      local_142c[iVar7] = '/';
      strcpy(local_142c + iVar7 + 1,(char *)(iVar18 + 0x24));
    }
  }
  local_1440 = local_142c;
  iVar7 = VPFS_PathToPathInArchive();
  if (iVar7 == 0) {
    FUN_0400a810();
  }
  cVar5 = FUN_0404c4c0();
  if (cVar5 != '\0') {
    FUN_0402cd10();
    return 0;
  }
  pcVar8 = strrchr(local_1440,0x2f);
  if (*pcVar8 != '\0') {
    *pcVar8 = '\0';
    if (local_142c[0] == '\0') {
      *pcVar8 = '/';
    }
    else {
      iVar7 = VPFS_MakeSureFolderExistsOnDisk();
      *pcVar8 = '/';
      if (iVar7 == 0) {
        FUN_0402cd10();
        return 0;
      }
    }
  }
  iVar9 = FUN_0403c9d0();
  iVar7 = DAT_04468a94;
  uVar1 = *(ushort *)(iVar18 + 2);
  iVar10 = fs_CreateFileA();
  if (iVar10 == -1) {
    FUN_0402cd10();
    return 0;
  }
  puVar12 = (undefined4 *)(iVar7 + param_1 + 0x24 + (uint)uVar1);
  VPFS_MadeChangesAtPath();
  local_20[0] = (undefined *)puVar12[5];
  iVar7 = fs_SetFilePointer();
  piVar16 = (int *)&stack0xffffeb48;
  if (iVar7 == -1) {
    FUN_0402cd10();
LAB_040452f8:
    *piVar16 = iVar10;
    piVar16[-1] = 0x4045306;
    FUN_04131a90();
    return 0;
  }
  pvVar11 = malloc(0x100000);
  if (pvVar11 == (void *)0x0) {
    FUN_0402cd10();
    piVar16 = (int *)&stack0xffffeb48;
    goto LAB_040452f8;
  }
  local_1464 = (undefined *)*puVar12;
  local_143c = 0;
  local_1438 = 0;
  puVar4 = (undefined4 *)&stack0xffffeb48;
  do {
    puVar15 = puVar4;
    puVar15[4] = 0;
    puVar15[3] = local_20;
    puVar15[1] = pvVar11;
    puVar13 = (undefined *)0x100000;
    if (local_1464 < &UNK_00100001) {
      puVar13 = local_1464;
    }
    puVar15[2] = puVar13;
    *puVar15 = (&DAT_04418080)[puVar12[2]];
    puVar15[-1] = 0x4044fb7;
    iVar7 = fs_ReadFile();
    puVar17 = puVar15 + -5;
    if (iVar7 == 0) {
      local_24 = (undefined *)0x0;
    }
    else {
      local_24 = local_20[0];
      if (local_20[0] != (undefined *)0x0) {
        uVar2 = *puVar12;
        uVar3 = puVar12[1];
        if (DAT_04468a90 != 0) {
          puVar15[1] = 0;
          *puVar15 = local_20[0];
          puVar15[-3] = local_143c;
          puVar15[-2] = local_1438;
          puVar15[-1] = pvVar11;
          puVar15[-5] = uVar2;
          puVar15[-4] = uVar3;
          puVar15[-6] = 0x4045048;
          VPFS_ArchiveRead();
        }
      }
    }
    if (local_24 < puVar13) {
      puVar15[-4] = "VPFS_ConvertToDiskFile() error - failed to read from archive";
LAB_04045496:
      *puVar17 = 0xf;
      puVar17[-1] = 0x40454a2;
      FUN_0402cd10();
      *puVar17 = pvVar11;
      puVar17[-1] = 0x40454b0;
      free((void *)*puVar17);
      piVar16 = puVar17;
      goto LAB_040452f8;
    }
    puVar15[-3] = puVar13;
    puVar15[-1] = 0;
    puVar15[-2] = &local_24;
    puVar15[-4] = pvVar11;
    puVar15[-5] = iVar10;
    puVar15[-6] = 0x4044f47;
    iVar7 = fs_WriteFile();
    puVar17 = puVar15 + -10;
    if (iVar7 == 0) {
      puVar15[-9] = "VPFS_ConvertToDiskFile() error - failed to write to disk file";
      goto LAB_04045496;
    }
    bVar19 = CARRY4(local_143c,(uint)puVar13);
    local_143c = local_143c + (int)puVar13;
    local_1438 = local_1438 + (uint)bVar19;
    local_1464 = local_1464 + -(int)puVar13;
    puVar4 = puVar15 + -10;
  } while (local_1464 != (undefined *)0x0);
  puVar15[-10] = pvVar11;
  puVar15[-0xb] = 0x40450ce;
  free((void *)puVar15[-10]);
  puVar15[-10] = iVar10;
  puVar15[-0xb] = 0x40450dc;
  FUN_04131a90();
  piVar16 = puVar15 + -0xb;
  local_42c = *(undefined4 *)(iVar18 + 8);
  local_428 = *(undefined4 *)(iVar18 + 0xc);
  local_2c = *(undefined4 *)(iVar18 + 0x10);
  local_28 = *(undefined4 *)(iVar18 + 0x14);
  local_20[0] = (undefined *)(*(uint *)(iVar18 + 0x20) & 0x27);
  puVar15[-0xc] = 0x4045119;
  iVar18 = VPFS_PathToPathInArchive();
  if (iVar18 == 0) {
    puVar15[-8] = "int VPFS_ConvertToDiskFile(int)";
    puVar15[-9] = 0x12d3;
    puVar15[-10] = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
    puVar15[-0xb] = "VPFS_PathToPathInArchive( absolutePath, pathInArchive, 1024 ) != 0";
    puVar15[-0xc] = 0x4045457;
    FUN_0400a810();
  }
  puVar15[-0xb] = local_c2c;
  puVar15[-10] = 0;
  puVar15[-0xc] = 0x4045131;
  iVar18 = FUN_0404c040();
  if (iVar18 != 0) {
    puVar15[-0xb] = iVar18;
    puVar15[-0xc] = 0x404513f;
    cVar5 = FUN_0404c630();
    if (cVar5 != '\0') {
      puVar15[-8] = "int VPFS_ConvertToDiskFile(int)";
      puVar15[-9] = 0x12d8;
      puVar15[-10] = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
      puVar15[-0xb] = "!VPFSDB_IsDeleted( dbObj )";
      puVar15[-0xc] = 0x40454e3;
      FUN_0400a810();
    }
    puVar15[-0xb] = iVar18;
    puVar15[-10] = &local_42c;
    puVar15[-0xc] = 0x4045159;
    FUN_0404c840();
    puVar15[-0xb] = iVar18;
    puVar15[-10] = &local_2c;
    puVar15[-0xc] = 0x4045168;
    FUN_0404c970();
    puVar15[-0xb] = iVar18;
    puVar15[-10] = local_20;
    puVar15[-0xc] = 0x4045177;
    FUN_0404c710();
    puVar15[-0xb] = iVar18;
    puVar15[-0xc] = 0x404517f;
    FUN_0404c310();
  }
  pcVar8 = local_82c;
  if (local_142c[0] == '/') {
    local_82c[0] = 'C';
    pcVar8 = local_82c + 2;
    local_82c[1] = 0x3a;
  }
  puVar15[-0xb] = pcVar8;
  puVar15[-10] = local_1440;
  puVar15[-0xc] = 0x40451a4;
  strcpy((char *)puVar15[-0xb],(char *)puVar15[-10]);
  if (local_82c[0] != '\0') {
    pcVar8 = local_82c;
    cVar5 = local_82c[0];
    do {
      while (cVar5 == '/') {
        *pcVar8 = '\\';
        pcVar8 = pcVar8 + 1;
        cVar5 = *pcVar8;
        if (cVar5 == '\0') goto LAB_040451dc;
      }
      pcVar8 = pcVar8 + 1;
      cVar5 = *pcVar8;
    } while (cVar5 != '\0');
LAB_040451dc:
    if (local_82c[0] != '\0') {
      puVar15[-0xc] = 0x40453c3;
      iVar18 = VPFS_Open();
      if (iVar18 != 0) {
        puVar15[-0xb] = iVar18;
        puVar15[-10] = local_20[0];
        puVar15[-0xc] = 0x40453dc;
        VPFS_SetFileAttributes();
        puVar15[-0xb] = iVar18;
        puVar15[-9] = &local_2c;
        puVar15[-8] = 0;
        puVar15[-10] = &local_42c;
        puVar15[-0xc] = 0x4045403;
        VPFS_SetDateTime();
        if (iVar18 + 0x54545455U < 0x2801) {
          puVar15[-0xb] = &DAT_0441804c;
          puVar15[-0xc] = 0x4045417;
          pthread_mutex_lock((pthread_mutex_t *)puVar15[-0xb]);
          if (iVar18 != -0x54545455) {
            puVar15[-0xc] = 0x4045422;
            VPFS_CloseHandle();
          }
          puVar15[-0xb] = &DAT_0441804c;
          puVar15[-0xc] = 0x404542e;
          pthread_mutex_unlock((pthread_mutex_t *)puVar15[-0xb]);
        }
        else {
          puVar15[-10] = "Invalid handle given to VPFS_Close()!!";
          puVar15[-0xb] = 0xf;
          puVar15[-0xc] = 0x4045470;
          FUN_0402cd10();
        }
        goto LAB_0404520d;
      }
    }
  }
  puVar15[-8] = "int VPFS_ConvertToDiskFile(int)";
  puVar15[-9] = 0x12e3;
  puVar15[-10] = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
  puVar15[-0xb] = "h";
  puVar15[-0xc] = 0x404520d;
  FUN_0400a810();
LAB_0404520d:
  piVar14 = &DAT_04418280;
  pcVar8 = local_102c;
  if (iVar9 == 0) {
    pcVar8 = local_1440;
  }
  iVar18 = 1;
  do {
    if ((*piVar14 == 2 || *piVar14 == 3) && (piVar14[2] == param_1)) {
      iVar7 = piVar14[3];
      puVar13 = (undefined *)piVar14[4];
      piVar16[-1] = 0x4045285;
      VPFS_CloseHandle();
      piVar16[1] = (int)&DAT_0012019f;
      *piVar16 = (int)pcVar8;
      piVar16[-1] = 0x40452a9;
      iVar9 = VPFS_OpenFileOnDisk();
      if (iVar9 == 0) {
        piVar16[2] = iVar18;
        piVar16[1] = (int)
                     "VPFS_ConvertToDiskFile() - internal logic error! Failed to convert handle %d";
        *piVar16 = 0xf;
        piVar16[-1] = 0x40452cb;
        FUN_0402cd10();
      }
      else {
        iVar9 = piVar14[2];
        piVar16[3] = 0;
        piVar16[2] = (int)local_20;
        *piVar16 = iVar9;
        piVar16[1] = iVar7;
        piVar16[-1] = 0x4045345;
        local_20[0] = puVar13;
        iVar9 = fs_SetFilePointer();
        if (iVar9 == -1) {
          piVar16[-2] = iVar18;
          piVar16[-3] = (int)
                        "VPFS_ConvertToDiskFile() - internal logic error! Failed to convert handle %d (SetFilePointer failed)"
          ;
          piVar16[-4] = 0xf;
          piVar16[-5] = 0x40453af;
          FUN_0402cd10();
        }
        piVar14[3] = iVar7;
        piVar14[4] = (int)puVar13;
        piVar16 = piVar16 + -4;
      }
    }
    piVar14 = piVar14 + 8;
    iVar18 = iVar18 + 1;
  } while (iVar18 != 0x2801);
  return 1;
}

// --- VPFS_CreateFolder @0x04047590 ---
/* source: vpfs */

undefined4 VPFS_CreateFolder(char *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  char cVar7;
  char local_1020 [1024];
  char local_c20 [1024];
  undefined1 local_820 [1024];
  char local_420 [1024];
  int local_20 [4];
  
  sVar1 = strlen(param_1);
  if (3 < sVar1) {
    iVar2 = strcasecmp(param_1 + (sVar1 - 4),".exe");
    if (((iVar2 == 0) || (iVar2 = strcasecmp(param_1 + (sVar1 - 4),".dll"), iVar2 == 0)) ||
       (iVar2 = strcasecmp(param_1 + (sVar1 - 3),(char *)&PTR_DAT_042e5d3b), iVar2 == 0)) {
      FUN_0402cd10(0xf,"VPFS_CreateFile() error - creation of executables is not permitted: %s",
                   param_1);
      return 0;
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  if (*param_1 != '\0') {
    iVar2 = FUN_0403d0f0();
    if (iVar2 != 0) {
      iVar2 = FUN_0403c9d0();
      iVar3 = VPFS_FileOrFolderExists(local_20,0);
      if (iVar3 == 0) {
        pcVar4 = strrchr(local_1020,0x2f);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
          if (local_1020[0] == '\0') {
            *pcVar4 = '/';
          }
          else {
            iVar3 = VPFS_MakeSureFolderExistsOnDisk();
            *pcVar4 = '/';
            if (iVar3 == 0) goto switchD_04047898_caseD_11;
          }
        }
        pcVar4 = local_1020;
        if (iVar2 != 0) {
          FUN_0403c9d0();
          pcVar4 = local_c20;
        }
        iVar3 = mkdir(pcVar4,0x1ed);
        if (iVar3 != -1) {
          pcVar4 = local_c20;
          if (iVar2 == 0) {
            pcVar4 = local_1020;
          }
          VPFS_MadeChangesAtPath(pcVar4);
          if (local_20[0] != 0) {
            iVar2 = FUN_0404c040(local_820,0);
            if (iVar2 == 0) {
              FUN_0400a810("dbObj",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                           0x159a,"VPFSHandle VPFS_CreateFolder(const char*)");
            }
            FUN_0404c310(iVar2);
            VPFS_SetAllFolderContentsAsDeleted();
          }
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
          pcVar4 = local_420;
          if (local_1020[0] == '/') {
            local_420[0] = 'C';
            pcVar4 = local_420 + 2;
            local_420[1] = 0x3a;
          }
          strcpy(pcVar4,local_1020);
          uVar5 = 0;
          if (local_420[0] != '\0') {
            pcVar4 = local_420;
            cVar7 = local_420[0];
            do {
              while (cVar7 != '/') {
                pcVar4 = pcVar4 + 1;
                cVar7 = *pcVar4;
                if (cVar7 == '\0') goto LAB_0404778c;
              }
              *pcVar4 = '\\';
              pcVar4 = pcVar4 + 1;
              cVar7 = *pcVar4;
            } while (cVar7 != '\0');
LAB_0404778c:
            uVar5 = 0;
            if (local_420[0] != '\0') {
              uVar5 = VPFS_Open();
            }
          }
          return uVar5;
        }
        piVar6 = __errno_location();
        switch(*piVar6) {
        default:
          FUN_0402cd10(0xf,"VPFS_CreateFolder() error - unhandled error in stat(): %d for path: %s",
                       *piVar6,param_1);
          break;
        case 2:
          FUN_0402cd10(0xf,
                       "VPFS_CreateFolder() error - empty path, or parent folder doesn\'t exist. Path: %s"
                       ,param_1);
          break;
        case 5:
          FUN_0402cd10(0xf,"VPFS_CreateFolder() error - IO error occured. Path: %s",param_1);
          break;
        case 0xd:
          FUN_0402cd10(0xf,"VPFS_CreateFolder() error - access to part of path denied: %s",param_1);
          break;
        case 0xe:
          FUN_0402cd10(0xf,
                       "VPFS_CreateFolder() error - path points outside the process\'s allocated address space: %s"
                       ,param_1);
          break;
        case 0x11:
          break;
        case 0x14:
          FUN_0402cd10(0xf,
                       "VPFS_CreateFolder() error - component of path prefix is not a directory. Path: %s"
                       ,param_1);
          break;
        case 0x1c:
          FUN_0402cd10(0xf,"VPFS_CreateFolder() error - no space left on filesystem. Path: %s",
                       param_1);
          break;
        case 0x1e:
          FUN_0402cd10(0xf,
                       "VPFS_CreateFolder() error - parent directory esides on read-only filesystem. Path: %s"
                       ,param_1);
          break;
        case 0x1f:
          FUN_0402cd10(0xf,
                       "VPFS_CreateFolder() error - parent folder already has maximal number of links. Path: %s"
                       ,param_1);
          break;
        case 0x24:
          FUN_0402cd10(0xf,"VPFS_CreateFolder() error - path too long: %s",param_1);
          break;
        case 0x28:
          FUN_0402cd10(0xf,"VPFS_CreateFolder() error - loop in path: %s",param_1);
          break;
        case 0x7a:
          FUN_0402cd10(0xf,"VPFS_CreateFolder() error - user quota exceeded. Path: %s",param_1);
        }
      }
switchD_04047898_caseD_11:
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      return 0;
    }
  }
  FUN_0402cd10(0xf,"VPFS_CreateFolder() error - couldn\'t get absolute path for path: %s",param_1);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  return 0;
}

// --- VPFS_Delete @0x04047a10 ---
/* source: vpfs */

undefined4 VPFS_Delete(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  int iVar14;
  char cVar15;
  undefined4 uVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  char *pcVar20;
  char *pcVar21;
  bool bVar22;
  byte bVar23;
  undefined4 uStackY_c70;
  int local_c44;
  char *local_c40;
  char acStack_c1f [3];
  undefined1 local_c1c [1024];
  char local_81c [1024];
  undefined1 local_41c [1036];
  
  bVar23 = 0;
  uVar16 = 0;
  piVar18 = (int *)&stack0xfffff394;
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    uStackY_c70 = 0x4047b84;
    FUN_0402cd10();
    return 0;
  }
  iVar19 = param_1 + 0x54545454;
  uStackY_c70 = 0x4047a59;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  iVar9 = iVar19 * 0x20;
  iVar6 = (&DAT_04418280)[iVar19 * 8];
  piVar10 = (int *)&stack0xfffff394;
  if (iVar6 == 0) goto LAB_04047c2b;
  if ((iVar6 - 1U < 3) && (param_1 != -0x54545455)) {
    uVar5 = 0;
    iVar2 = 0;
    do {
      if ((iVar6 == 1) == ((&DAT_04418280)[iVar2 * 8] == 1)) {
        uVar5 = uVar5 + ((&DAT_04418288)[iVar2 * 8] == (&DAT_04418288)[iVar19 * 8]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x2800);
    if (1 < uVar5) goto LAB_04047da7;
  }
  if (iVar6 - 2U < 2) {
    iVar9 = (&DAT_04418288)[iVar19 * 8];
    uStackY_c70 = 0x4048176;
    iVar6 = VPFS_ObjectAtOffsetDeleted();
    if ((iVar6 == 0) && (*(char *)(DAT_04468a94 + iVar9) != '\x02')) {
      if (param_1 != -0x54545455) {
        uStackY_c70 = 0x40481a2;
        VPFS_CloseHandle();
      }
      uStackY_c70 = 0x40481ae;
      iVar9 = VPFS_GetObjectByOffset();
      if (iVar9 == 0) {
        uStackY_c70 = 0x40484cb;
        FUN_0400a810();
      }
      uStackY_c70 = 0x40481c0;
      FUN_0404c5f0();
      uStackY_c70 = 0x40481cd;
      VPFSDB_ReleaseObject();
      uStackY_c70 = 0x40481d9;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      return 1;
    }
    goto LAB_04047db3;
  }
  if (iVar6 == 1) {
    iVar9 = (&DAT_04418288)[iVar19 * 8];
    uStackY_c70 = 0x4047dd6;
    iVar19 = VPFS_ObjectAtOffsetDeleted();
    iVar6 = DAT_04468a94;
    if (iVar19 == 0) {
      uVar1 = *(ushort *)(DAT_04468a94 + 2 + iVar9);
      uStackY_c70 = 0x4047e08;
      FUN_0403ed10();
      puVar17 = (uint *)(acStack_c1f + 3);
      do {
        puVar3 = puVar17;
        uVar4 = *puVar3 + 0xfefefeff & ~*puVar3;
        uVar5 = uVar4 & 0x80808080;
        puVar17 = puVar3 + 1;
      } while (uVar5 == 0);
      if ((uVar4 & 0x8080) == 0) {
        puVar17 = (uint *)((int)puVar3 + 6);
        uVar5 = uVar5 >> 0x10;
      }
      pcVar7 = local_81c;
      builtin_strncpy((char *)((int)puVar17 + (-3 - (uint)CARRY1((byte)uVar5,(byte)uVar5))),
                      "/.DS_Store",0xb);
      pcVar13 = pcVar7;
      if (local_c1c[0] == '/') {
        local_81c[0] = 'C';
        pcVar13 = local_81c + 2;
        local_81c[1] = 0x3a;
      }
      uStackY_c70 = 0x4047e8e;
      strcpy(pcVar13,acStack_c1f + 3);
      cVar15 = local_81c[0];
      if (local_81c[0] != '\0') {
        do {
          if (cVar15 == '/') {
            *pcVar7 = '\\';
          }
          pcVar7 = pcVar7 + 1;
          cVar15 = *pcVar7;
        } while (*pcVar7 != '\0');
        if (local_81c[0] != '\0') {
          uStackY_c70 = 0x4048065;
          iVar19 = VPFS_Open();
          iVar6 = DAT_04468a94;
          if (iVar19 != 0) {
            uStackY_c70 = 0x4048071;
            VPFS_Delete();
            iVar6 = DAT_04468a94;
          }
        }
      }
      puVar17 = (uint *)(iVar6 + iVar9 + 0x24 + (uint)uVar1);
      if (*puVar17 != 0) {
        uStackY_c70 = 0x4048096;
        iVar9 = VPFS_GetObjectByOffset();
        if (iVar9 == 0) {
          uStackY_c70 = 0x40484d5;
          FUN_0403cbc0();
          return 0;
        }
        uStackY_c70 = 0x40480a8;
        pcVar7 = (char *)FUN_0404c340();
        uStackY_c70 = 0x40480b2;
        VPFSDB_ReleaseObject();
        if (pcVar7 != (char *)0x0) {
          cVar15 = *pcVar7;
          uVar5 = 0;
          pcVar13 = pcVar7;
          do {
            uVar5 = uVar5 + 1;
            while (cVar15 != '\0') {
              pcVar13 = pcVar13 + 1;
              cVar15 = *pcVar13;
            }
            cVar15 = pcVar13[1];
            pcVar13 = pcVar13 + 1;
          } while (cVar15 != '\0');
          uStackY_c70 = 0x40480f3;
          free(pcVar7);
          if (*puVar17 <= uVar5) goto LAB_04048101;
        }
        uStackY_c70 = 0x404845d;
        FUN_0403cbc0();
        return 0;
      }
LAB_04048101:
      uStackY_c70 = 0x4048111;
      iVar9 = VPFS_GetObjectByOffset();
      if (iVar9 == 0) {
        uStackY_c70 = 0x40484a2;
        FUN_0400a810();
      }
      uStackY_c70 = 0x4048123;
      FUN_0404c5f0();
      uStackY_c70 = 0x404812b;
      VPFSDB_ReleaseObject();
      if (param_1 != -0x54545455) {
        uStackY_c70 = 0x4048140;
        VPFS_CloseHandle();
      }
      uStackY_c70 = 0x4048151;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      return 1;
    }
    goto LAB_04047db3;
  }
  pcVar7 = local_81c;
  uStackY_c70 = 0x4047ad9;
  iVar2 = FUN_0403c9d0();
  iVar6 = (&DAT_04418280)[iVar19 * 8];
  if ((iVar6 != 7) && (iVar6 != 5)) {
    if ((iVar6 != 6) && (iVar6 != 4)) {
      uStackY_c70 = 0x4047d70;
      FUN_0400a810();
    }
    puVar17 = (uint *)(acStack_c1f + 3);
    puVar3 = puVar17;
    if (**(char **)(&DAT_04418284 + iVar9) == '/') {
      local_c1c[0] = 'C';
      puVar3 = (uint *)(acStack_c1f + 5);
      local_c1c[1] = 0x3a;
    }
    uStackY_c70 = 0x4047b32;
    strcpy((char *)puVar3,*(char **)(&DAT_04418284 + iVar9));
    puVar3 = puVar17;
    cVar15 = local_c1c[0];
    while (puVar12 = puVar17, cVar15 != '\0') {
      if (cVar15 == '/') {
        *(char *)puVar3 = '\\';
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar15 = *(char *)puVar3;
    }
    do {
      puVar3 = puVar12;
      uVar4 = *puVar3 + 0xfefefeff & ~*puVar3;
      uVar5 = uVar4 & 0x80808080;
      puVar12 = puVar3 + 1;
    } while (uVar5 == 0);
    if ((uVar4 & 0x8080) == 0) {
      puVar12 = (uint *)((int)puVar3 + 6);
      uVar5 = uVar5 >> 0x10;
    }
    builtin_strncpy((char *)((int)puVar12 + (-3 - (uint)CARRY1((byte)uVar5,(byte)uVar5))),
                    "\\.DS_Store",0xb);
    iVar6 = DAT_04468aa0;
    if (local_c1c[0] != '\0') {
      uStackY_c70 = 0x4048035;
      iVar8 = VPFS_Open();
      iVar6 = DAT_04468aa0;
      if (iVar8 != 0) {
        uStackY_c70 = 0x4048045;
        VPFS_Delete();
        iVar6 = DAT_04468aa0;
      }
    }
LAB_04047cc1:
    iVar8 = -1;
    if ((&DAT_04418280)[iVar6 * 8] == 0) {
      iVar8 = iVar6;
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x2800) {
      iVar6 = 0;
    }
    if (iVar8 == -1) goto code_r0x04047cb9;
    DAT_04468aa0 = iVar6;
    if (iVar8 == -1) goto LAB_04047da7;
    uStackY_c70 = 0x4047ef8;
    iVar6 = VPFS_OpenFolderOnDisk();
    if (iVar6 == 0) goto LAB_04047db3;
    iVar6 = (&DAT_04418288)[iVar8 * 8];
    if (*(uint *)(iVar6 + 4) < 9) goto LAB_04048156;
    local_c40 = (char *)0x0;
    uVar5 = 8;
    local_c44 = 0;
    do {
      iVar14 = 2;
      bVar22 = iVar6 + uVar5 == 0;
      pcVar13 = (char *)(iVar6 + 0x2c + uVar5);
      pcVar20 = pcVar13;
      pcVar21 = ".";
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar22 = *pcVar20 == *pcVar21;
        pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
        pcVar21 = pcVar21 + (uint)bVar23 * -2 + 1;
      } while (bVar22);
      if (!bVar22) {
        iVar14 = 3;
        pcVar20 = pcVar13;
        pcVar21 = "..";
        do {
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          bVar22 = *pcVar20 == *pcVar21;
          pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
          pcVar21 = pcVar21 + (uint)bVar23 * -2 + 1;
        } while (bVar22);
        if (!bVar22) {
          iVar14 = 2;
          pcVar20 = "._";
          do {
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            bVar22 = *pcVar13 == *pcVar20;
            pcVar13 = pcVar13 + (uint)bVar23 * -2 + 1;
            pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
          } while (bVar22);
          if (bVar22) {
            local_c44 = local_c44 + 1;
          }
          else {
            local_c40 = (char *)((int)local_c40 + 1);
          }
        }
      }
      uVar5 = uVar5 + 0x2c + *(int *)(iVar6 + uVar5 + 4);
    } while (uVar5 < *(uint *)(iVar6 + 4));
    if (local_c40 != (char *)0x0) {
      uStackY_c70 = 0x4047fd7;
      VPFS_CloseHandle();
      uStackY_c70 = 0x4047fe3;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      uStackY_c70 = 0x4047ff7;
      FUN_0402cd10();
      return 0;
    }
    if (local_c44 != 0) {
      puVar3 = puVar17;
      if (**(char **)(&DAT_04418284 + iVar9) == '/') {
        local_c1c[0] = 'C';
        puVar3 = (uint *)(acStack_c1f + 5);
        local_c1c[1] = 0x3a;
      }
      uStackY_c70 = 0x4048210;
      strcpy((char *)puVar3,*(char **)(&DAT_04418284 + iVar9));
      puVar3 = puVar17;
      cVar15 = local_c1c[0];
      while (puVar12 = puVar17, cVar15 != '\0') {
        if (cVar15 == '/') {
          *(char *)puVar3 = '\\';
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        cVar15 = *(char *)puVar3;
      }
      do {
        puVar3 = puVar12;
        uVar5 = *puVar3 + 0xfefefeff & ~*puVar3;
        uVar4 = uVar5 & 0x80808080;
        puVar12 = puVar3 + 1;
      } while (uVar4 == 0);
      uVar11 = uVar4 >> 0x10;
      puVar12 = (uint *)((int)puVar3 + 6);
      if ((uVar5 & 0x8080) != 0) {
        puVar12 = puVar3 + 1;
        uVar11 = uVar4;
      }
      pcVar13 = (char *)((int)puVar12 + (-3 - (uint)CARRY1((byte)uVar11,(byte)uVar11)));
      pcVar13[0] = '\\';
      pcVar13[1] = '\0';
      puVar3 = puVar17;
      do {
        puVar12 = puVar3;
        uVar5 = *puVar12 + 0xfefefeff & ~*puVar12;
        uVar4 = uVar5 & 0x80808080;
        puVar3 = puVar12 + 1;
      } while (uVar4 == 0);
      uVar11 = uVar4 >> 0x10;
      puVar3 = (uint *)((int)puVar12 + 6);
      if ((uVar5 & 0x8080) != 0) {
        puVar3 = puVar12 + 1;
        uVar11 = uVar4;
      }
      uVar5 = *(uint *)(iVar6 + 4);
      bVar22 = uVar5 == 8;
      if (8 < uVar5) {
        local_c40 = "._";
        uVar4 = 8;
        do {
          pcVar13 = (char *)(iVar6 + 0x2c + uVar4);
          iVar14 = 2;
          pcVar20 = pcVar13;
          pcVar21 = local_c40;
          do {
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            bVar22 = *pcVar20 == *pcVar21;
            pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
            pcVar21 = pcVar21 + (uint)bVar23 * -2 + 1;
          } while (bVar22);
          if (bVar22) {
            uStackY_c70 = 0x40483fa;
            strcat((char *)puVar17,pcVar13);
            if (local_c1c[0] != '\0') {
              uStackY_c70 = 0x4048425;
              iVar14 = VPFS_Open();
              if (iVar14 != 0) {
                uStackY_c70 = 0x4048431;
                VPFS_Delete();
              }
            }
            *(char *)((int)puVar3 +
                     (int)(acStack_c1f + (-(int)puVar17 - (uint)CARRY1((byte)uVar11,(byte)uVar11))))
                 = '\0';
          }
          uVar4 = uVar4 + 0x2c + *(int *)(iVar6 + uVar4 + 4);
          bVar22 = uVar5 == uVar4;
          if (uVar5 <= uVar4) break;
          iVar6 = (&DAT_04418288)[iVar8 * 8];
        } while( true );
      }
    }
LAB_04048156:
    uStackY_c70 = 0x4048161;
    VPFS_CloseHandle();
    goto LAB_04047b9d;
  }
  uStackY_c70 = 0x4047b9a;
  FUN_04131a90();
  piVar18 = &uStackY_c70;
LAB_04047b9d:
  piVar18[-1] = 0x4047bb1;
  iVar6 = VPFS_PathToPathInArchive();
  if (iVar6 != 0) {
    piVar18[-1] = 0x4048253;
    iVar6 = VPFS_FindInVirtualFilesystem();
    if (iVar6 == -1) {
      piVar18[1] = 4;
      *piVar18 = *(undefined4 *)(&DAT_04418284 + iVar9);
      piVar18[-1] = 0x4048446;
      iVar6 = access((char *)*piVar18,piVar18[1]);
      if (iVar6 != 0) goto LAB_04047bb9;
    }
    piVar18[1] = 1;
    *piVar18 = (int)local_41c;
    piVar18[-1] = 0x4048272;
    iVar6 = FUN_0404c040();
    if (iVar6 == 0) {
      piVar18[3] = (int)"int VPFS_Delete(VPFSHandle)";
      piVar18[2] = 0x16aa;
      piVar18[1] = (int)"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
      *piVar18 = (int)"dbObj";
      piVar18[-1] = 0x40484fe;
      FUN_0400a810();
    }
    *piVar18 = iVar6;
    piVar18[-1] = 0x4048284;
    FUN_0404c5f0();
    *piVar18 = iVar6;
    piVar18[-1] = 0x404828c;
    VPFSDB_ReleaseObject();
  }
LAB_04047bb9:
  pcVar13 = pcVar7;
  if (iVar2 == 0) {
    pcVar13 = *(char **)(&DAT_04418284 + iVar9);
  }
  *piVar18 = (int)pcVar13;
  piVar18[-1] = 0x4047bda;
  iVar6 = remove((char *)*piVar18);
  if (iVar6 == -1) {
    if (iVar2 == 0) {
      pcVar7 = *(char **)(&DAT_04418284 + iVar9);
    }
    else if ((&DAT_04418280)[iVar19 * 8] - 4 < 2) {
      piVar18[-1] = 0x40482e2;
      piVar10 = __errno_location();
      if ((*piVar10 == 0x14) || (*piVar10 == 2)) goto LAB_04047c04;
    }
    piVar18[2] = (int)pcVar7;
    uVar16 = 0;
    piVar18[1] = (int)"VPFS_Delete() error - failed to delete file: %s";
    *piVar18 = 0xf;
    piVar18[-1] = 0x40482be;
    FUN_0402cd10();
  }
  else {
    if (iVar2 == 0) {
      pcVar7 = *(char **)(&DAT_04418284 + iVar9);
    }
    *piVar18 = (int)pcVar7;
    piVar18[-1] = 0x4047c04;
    VPFS_MadeChangesAtPath();
LAB_04047c04:
    uVar16 = 1;
  }
  (&DAT_04418288)[iVar19 * 8] = 0;
  piVar10 = piVar18;
  if (param_1 != -0x54545455) {
    piVar18[-1] = 0x4047c2b;
    VPFS_CloseHandle();
  }
LAB_04047c2b:
  *piVar10 = (int)&DAT_0441804c;
  piVar10[-1] = 0x4047c37;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
  return uVar16;
code_r0x04047cb9:
  if (iVar6 == DAT_04468aa0) goto LAB_04047ffc;
  goto LAB_04047cc1;
LAB_04047ffc:
  uStackY_c70 = 0x4048016;
  DAT_04468aa0 = iVar6;
  FUN_0402cd10();
LAB_04047da7:
  uStackY_c70 = 0x4047db3;
  FUN_0402cd10();
LAB_04047db3:
  uStackY_c70 = 0x4047dc1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  return 0;
}

// --- VPFS_GetDateTime @0x04043b00 ---
/* source: vpfs */

undefined4 VPFS_GetDateTime(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char local_81c [1024];
  stat64 local_41c [10];
  
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    FUN_0402cd10(0xf,"Invalid handle given to VPFS_GetDateTime()!!");
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  param_1 = param_1 + 0x54545454;
  iVar2 = param_1 * 0x20;
  iVar3 = (&DAT_04418280)[param_1 * 8];
  if (iVar3 == 0) {
LAB_04043c70:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    return 0;
  }
  if (iVar3 == 6) {
    iVar3 = FUN_0403c9d0();
    if (iVar3 == 0) {
      FUN_0400a810("GetRedirectionPath( data->ElementName, redirectedPath, __null ) != 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0xcc6,
                   "int VPFS_GetDateTime(VPFSHandle, VPFSDateTime*, VPFSDateTime*, VPFSDateTime*)");
    }
    iVar3 = __xstat64(3,local_81c,local_41c);
    if (iVar3 != -1) {
      if (param_2 != (undefined4 *)0x0) {
        eON_Int_TimespecToFileTime(&local_41c[0].st_ctim,param_2);
      }
      if (param_3 != (undefined4 *)0x0) {
        eON_Int_TimespecToFileTime(&local_41c[0].st_mtim,param_3);
      }
      if (param_4 != (undefined4 *)0x0) {
        eON_Int_TimespecToFileTime(&local_41c[0].st_atim,param_4);
      }
      goto LAB_04043bfc;
    }
    goto LAB_04044001;
  }
  if (iVar3 != 7) {
    if (iVar3 - 4U < 2) {
      iVar3 = FUN_0403c400(*(undefined4 *)(&DAT_04418284 + iVar2));
      if (iVar3 == 0) {
        iVar3 = __xstat64(3,*(char **)(&DAT_04418284 + iVar2),local_41c);
        if (iVar3 == -1) goto LAB_04043c70;
      }
      else {
        SplitFile_GetStat(*(undefined4 *)(&DAT_04418284 + iVar2),local_41c);
      }
      if (param_2 != (undefined4 *)0x0) {
        eON_Int_TimespecToFileTime(&local_41c[0].st_ctim,param_2);
      }
      if (param_3 != (undefined4 *)0x0) {
        eON_Int_TimespecToFileTime(&local_41c[0].st_mtim,param_3);
      }
      if (param_4 != (undefined4 *)0x0) {
        eON_Int_TimespecToFileTime(&local_41c[0].st_atim,param_4);
      }
      if (((param_3 != (undefined4 *)0x0) || (param_2 != (undefined4 *)0x0)) &&
         (((&DAT_04418280)[param_1 * 8] == 5 &&
          ((iVar3 = VPFS_PathToPathInArchive(), iVar3 != 0 &&
           (iVar3 = FUN_0404c040(local_81c,0), iVar3 != 0)))))) {
        if (param_2 != (undefined4 *)0x0) {
          FUN_0404c840(iVar3,param_2);
        }
        if (param_3 != (undefined4 *)0x0) {
          FUN_0404c970(iVar3,param_3);
        }
        VPFSDB_ReleaseObject(iVar3);
      }
    }
    else {
      iVar3 = (&DAT_04418288)[param_1 * 8];
      iVar2 = FUN_0403fe00();
      if (iVar2 == 0) {
        FUN_0400a810("VPFS_GetPathInArchiveFromOffset( filesystemOffset, pathToObject, 1024 ) != 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0xd6e,
                     "int VPFS_GetDateTime(VPFSHandle, VPFSDateTime*, VPFSDateTime*, VPFSDateTime*)"
                    );
      }
      iVar3 = iVar3 + DAT_04468a94;
      if (param_2 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)(iVar3 + 0xc);
        *param_2 = *(undefined4 *)(iVar3 + 8);
        param_2[1] = uVar1;
      }
      if (param_3 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)(iVar3 + 0x14);
        *param_3 = *(undefined4 *)(iVar3 + 0x10);
        param_3[1] = uVar1;
      }
      if (param_4 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)(iVar3 + 0x1c);
        *param_4 = *(undefined4 *)(iVar3 + 0x18);
        param_4[1] = uVar1;
      }
      if (((param_3 != (undefined4 *)0x0) || (param_2 != (undefined4 *)0x0)) &&
         (iVar3 = FUN_0404c040(local_41c,0), iVar3 != 0)) {
        if (param_2 != (undefined4 *)0x0) {
          FUN_0404c840(iVar3,param_2);
        }
        if (param_3 != (undefined4 *)0x0) {
          FUN_0404c970(iVar3,param_3);
        }
        VPFSDB_ReleaseObject(iVar3);
      }
    }
    goto LAB_04043bfc;
  }
  iVar3 = FUN_0403c9d0();
  if (iVar3 == 0) {
LAB_04043f16:
    iVar3 = FUN_0403c400(*(undefined4 *)(&DAT_04418284 + iVar2));
    if (iVar3 == 0) {
      iVar3 = __xstat64(3,*(char **)(&DAT_04418284 + iVar2),local_41c);
      if (iVar3 == -1) {
LAB_04044001:
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
        return 0;
      }
    }
    else {
      SplitFile_GetStat(*(undefined4 *)(&DAT_04418284 + iVar2),local_41c);
    }
  }
  else {
    iVar3 = FUN_0403c400(local_81c);
    if (iVar3 == 0) {
      iVar3 = __xstat64(3,local_81c,local_41c);
      if (iVar3 == -1) goto LAB_04043f16;
    }
    else {
      SplitFile_GetStat(local_81c,local_41c);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    eON_Int_TimespecToFileTime(&local_41c[0].st_ctim,param_2);
  }
  if (param_3 != (undefined4 *)0x0) {
    eON_Int_TimespecToFileTime(&local_41c[0].st_mtim,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    eON_Int_TimespecToFileTime(&local_41c[0].st_atim,param_4);
  }
LAB_04043bfc:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  return 1;
}

// --- VPFS_GetFileAttributes @0x040433b0 ---
/* source: vpfs */

uint VPFS_GetFileAttributes(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char local_820 [1024];
  stat64 local_420 [10];
  uint local_20 [4];
  
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    FUN_0402cd10(0xf,"Invalid handle given to VPFS_GetFileAttributes()!!");
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  param_1 = param_1 + 0x54545454;
  iVar2 = param_1 * 0x20;
  iVar3 = (&DAT_04418280)[param_1 * 8];
  if (iVar3 == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    return 0;
  }
  local_20[0] = 0;
  if (iVar3 == 6) {
    iVar3 = FUN_0403c9d0();
    if (iVar3 == 0) {
      FUN_0400a810("GetRedirectionPath( data->ElementName, redirectedPath, __null ) != 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0xbc7,
                   "DWORD VPFS_GetFileAttributes(VPFSHandle)");
    }
    iVar3 = __xstat64(3,local_820,local_420);
joined_r0x040435af:
    if (iVar3 == -1) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      return 0;
    }
  }
  else {
    if (iVar3 == 7) {
      iVar3 = FUN_0403c9d0();
      if (iVar3 != 0) {
        iVar3 = FUN_0403c400(local_820);
        if (iVar3 == 0) {
          iVar3 = __xstat64(3,local_820,local_420);
          if (iVar3 == -1) goto LAB_040435ee;
        }
        else {
          SplitFile_GetStat(local_820,local_420);
        }
        goto LAB_040434fd;
      }
LAB_040435ee:
      iVar3 = FUN_0403c400(*(undefined4 *)(&DAT_04418284 + iVar2));
      if (iVar3 == 0) {
        iVar3 = __xstat64(3,*(char **)(&DAT_04418284 + iVar2),local_420);
        goto joined_r0x040435af;
      }
    }
    else {
      if (1 < iVar3 - 4U) {
        iVar3 = (&DAT_04418288)[param_1 * 8];
        iVar2 = FUN_0403fe00();
        if (iVar2 == 0) {
          FUN_0400a810("VPFS_GetPathInArchiveFromOffset( filesystemOffset, pathToObject, 1024 ) != 0"
                       ,"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                       0xc29,"DWORD VPFS_GetFileAttributes(VPFSHandle)");
        }
        local_20[0] = *(uint *)(DAT_04468a94 + 0x20 + iVar3);
        iVar3 = FUN_0404c040(local_420,0);
        if (iVar3 != 0) {
          FUN_0404c710(iVar3,local_20);
          VPFSDB_ReleaseObject(iVar3);
        }
        goto LAB_04043492;
      }
      if (((iVar3 == 5) && (iVar3 = VPFS_PathToPathInArchive(), iVar3 != 0)) &&
         (iVar3 = FUN_0404c040(local_420,0), iVar3 != 0)) {
        cVar1 = FUN_0404c710(iVar3,local_20);
        VPFSDB_ReleaseObject(iVar3);
        if (cVar1 != '\0') goto LAB_04043492;
      }
      iVar3 = FUN_0403c400(*(undefined4 *)(&DAT_04418284 + iVar2));
      if (iVar3 == 0) {
        iVar3 = __xstat64(3,*(char **)(&DAT_04418284 + iVar2),local_420);
        if (iVar3 == -1) {
          FUN_0403cbc0();
          return 0;
        }
        goto LAB_040434fd;
      }
    }
    SplitFile_GetStat(*(undefined4 *)(&DAT_04418284 + iVar2),local_420);
  }
LAB_040434fd:
  local_20[0] = (uint)((local_420[0].st_mode & 0x80) == 0);
  if ((local_420[0].st_mode & 0x3f000) == 0x4000) {
    local_20[0] = local_20[0] | 0x10;
  }
  else {
    local_20[0] = (-(uint)(local_20[0] == 0) & 0x7f) + 1;
  }
LAB_04043492:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  return local_20[0];
}

// --- VPFS_GetObjectByOffset @0x0403f250 ---
/* source: vpfs */

void __regparm3 VPFS_GetObjectByOffset(int param_1,int param_2)

{
  int iVar1;
  char local_81c [1024];
  undefined1 local_41c [1036];
  
  if (param_1 == 0) {
    if (DAT_04468a80 + 1U < 0x401) {
      strcpy(local_81c,(char *)&DAT_04417820);
    }
  }
  else {
    param_1 = DAT_04468a94 + param_1;
    iVar1 = FUN_0403ed10();
    if ((iVar1 != 0) && ((int)(iVar1 + 1 + (uint)*(ushort *)(param_1 + 2)) < 0x401)) {
      local_81c[iVar1] = '/';
      strcpy(local_81c + iVar1 + 1,(char *)(param_1 + 0x24));
    }
  }
  iVar1 = VPFS_PathToPathInArchive();
  if (iVar1 == 0) {
    FUN_0400a810("VPFS_PathToPathInArchive( absolutePath, pathInArchive, 1024 ) != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x15ac,
                 "void* VPFS_GetObjectByOffset(int, int)");
  }
  FUN_0404c040(local_41c,param_2 != 0);
  return;
}

// --- VPFS_GetOverlappedResult @0x04046560 ---
/* source: vpfs */

int VPFS_GetOverlappedResult(int param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char **ppcVar6;
  char *local_8c;
  char *local_88;
  undefined1 *local_84;
  char *local_80;
  char local_28 [4];
  undefined1 local_24 [4];
  char local_20 [16];
  
  if ((param_1 != 0) && (param_1 + 0x54545455U < 0x2801)) {
    local_80 = (char *)0x40465c1;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
    param_1 = param_1 + 0x54545454;
    iVar2 = (&DAT_04418280)[param_1 * 8];
    if (iVar2 == 3) {
      local_80 = (char *)0x404665d;
      iVar2 = fs_GetOverlappedResult();
      ppcVar6 = &local_8c;
      if (((iVar2 != 0) && (ppcVar6 = &local_8c, *param_3 != 0)) &&
         (ppcVar6 = &local_8c, *(int *)(&DAT_04418298 + param_1 * 0x20) != 0)) {
        piVar1 = (int *)(DAT_04468a94 +
                        (&DAT_04418288)[param_1 * 8] + 0x24 +
                        (uint)*(ushort *)(DAT_04468a94 + 2 + (&DAT_04418288)[param_1 * 8]));
        puVar5 = (undefined1 *)(*(uint *)(param_2 + 8) - piVar1[4]);
        pcVar4 = (char *)((*(int *)(param_2 + 0xc) - piVar1[5]) -
                         (uint)(*(uint *)(param_2 + 8) < (uint)piVar1[4]));
        *(undefined1 **)(param_2 + 8) = puVar5;
        *(char **)(param_2 + 0xc) = pcVar4;
        local_80 = local_20;
        local_84 = local_24;
        local_88 = local_28;
        local_8c = param_2;
        iVar3 = FUN_04149190();
        if (iVar3 == 0) {
          local_80 = "int VPFS_GetOverlappedResult(VPFSHandle, LPOVERLAPPED, LPDWORD, int)";
          local_84 = (undefined1 *)0x10d4;
          local_88 = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
          local_8c = 
          "Synchronization_GetOverlappedBufferAndSize( lpOverlapped, (void**)&targetBuffer, &bytesToRead, &scatterOp ) != 0"
          ;
          FUN_0400a810();
        }
        if (DAT_04468a90 != 0) {
          local_8c = (char *)*piVar1;
          local_88 = (char *)piVar1[1];
          local_84 = puVar5;
          local_80 = pcVar4;
          VPFS_ArchiveRead();
        }
        *(undefined4 *)(&DAT_04418298 + param_1 * 0x20) = 0;
        ppcVar6 = &local_8c;
      }
    }
    else if ((iVar2 == 7) || (iVar2 == 5)) {
      local_80 = (char *)0x4046605;
      iVar2 = fs_GetOverlappedResult();
      ppcVar6 = &local_8c;
    }
    else {
      iVar2 = 0;
      local_80 = (char *)0x404663e;
      FUN_0402cd10();
      ppcVar6 = (char **)&stack0xffffff84;
    }
    *ppcVar6 = &DAT_0441804c;
    ppcVar6[-1] = (char *)0x4046616;
    pthread_mutex_unlock((pthread_mutex_t *)*ppcVar6);
    return iVar2;
  }
  local_80 = (char *)0x4046592;
  FUN_0402cd10();
  return 0;
}

// --- VPFS_Hint_ContentsOfFolderWillNotChange @0x04040430 ---
/* source: vpfs */

void VPFS_Hint_ContentsOfFolderWillNotChange(char *param_1)

{
  size_t __size;
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  __int32_t **pp_Var4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  size_t __size_00;
  char cVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *local_24;
  
  if (DAT_04417800 == '\0') {
    FUN_0400a810("VPFSInitialized",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x362,
                 "void VPFS_Hint_ContentsOfFolderWillNotChange(const char*)");
  }
  sVar1 = strlen(param_1);
  if (*param_1 == '/') {
    uVar3 = 0;
    local_24 = malloc(sVar1 + 1);
    do {
      cVar10 = param_1[uVar3];
      if ((int)cVar10 + 0x80U < 0x180) {
        pp_Var4 = __ctype_tolower_loc();
        cVar10 = (char)(*pp_Var4)[cVar10];
      }
      *(char *)((int)local_24 + uVar3) = cVar10;
      uVar3 = uVar3 + 1;
    } while (uVar3 <= sVar1);
    FUN_0403cbe0();
    puVar8 = local_24;
    do {
      puVar7 = puVar8;
      uVar2 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar3 = uVar2 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar3 == 0);
    if ((uVar2 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar7 + 6);
      uVar3 = uVar3 >> 0x10;
    }
    iVar9 = (int)puVar8 + ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_24);
    iVar5 = iVar9 + -1;
    pcVar6 = (char *)((int)local_24 + iVar5);
    if (*pcVar6 == '/') {
      while( true ) {
        *pcVar6 = '\0';
        pcVar6 = (char *)((int)local_24 + iVar5 + -1);
        iVar9 = iVar5;
        if (*(char *)((int)local_24 + iVar5 + -1) != '/') break;
        iVar5 = iVar5 + -1;
      }
    }
    __size_00 = iVar9 + 1;
    if (__size_00 == sVar1 + 1) goto LAB_040405bc;
  }
  else {
    puVar8 = &DAT_04417820;
    do {
      puVar7 = puVar8;
      uVar2 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar3 = uVar2 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar3 == 0);
    if ((uVar2 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar7 + 6);
      uVar3 = uVar3 >> 0x10;
    }
    iVar5 = -(uint)CARRY1((byte)uVar3,(byte)uVar3);
    uVar2 = (uint)(DAT_04417820._1_1_ == ':');
    uVar11 = (int)puVar8 + iVar5 + -0x4417822;
    uVar3 = uVar2 * 2;
    iVar5 = (int)puVar8 + uVar2 * -2 + iVar5 + -0x4417823;
    __size = iVar5 + 2 + sVar1;
    local_24 = malloc(__size);
    if (uVar3 < uVar11) {
      do {
        cVar10 = *(char *)((int)&DAT_04417820 + uVar3);
        if ((int)cVar10 + 0x80U < 0x180) {
          pp_Var4 = __ctype_tolower_loc();
          cVar10 = (char)(*pp_Var4)[cVar10];
        }
        *(char *)((int)local_24 + uVar3 + uVar2 * -2) = cVar10;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar11);
    }
    uVar3 = 0;
    puVar12 = (undefined1 *)((int)local_24 + iVar5);
    *puVar12 = 0x2f;
    do {
      cVar10 = param_1[uVar3];
      if ((int)cVar10 + 0x80U < 0x180) {
        pp_Var4 = __ctype_tolower_loc();
        cVar10 = (char)(*pp_Var4)[cVar10];
      }
      puVar12[uVar3 + 1] = cVar10;
      uVar3 = uVar3 + 1;
    } while (uVar3 <= sVar1);
    FUN_0403cbe0();
    puVar8 = local_24;
    do {
      puVar7 = puVar8;
      uVar2 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar3 = uVar2 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar3 == 0);
    if ((uVar2 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar7 + 6);
      uVar3 = uVar3 >> 0x10;
    }
    iVar9 = (int)puVar8 + ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_24);
    iVar5 = iVar9 + -1;
    pcVar6 = (char *)((int)local_24 + iVar5);
    if (*pcVar6 == '/') {
      while( true ) {
        *pcVar6 = '\0';
        pcVar6 = (char *)((int)local_24 + iVar5 + -1);
        iVar9 = iVar5;
        if (*(char *)((int)local_24 + iVar5 + -1) != '/') break;
        iVar5 = iVar5 + -1;
      }
    }
    __size_00 = iVar9 + 1;
    if (__size_00 == __size) goto LAB_040405bc;
  }
  local_24 = realloc(local_24,__size_00);
LAB_040405bc:
  if (DAT_04417c20 == (void *)0x0) {
    DAT_04417c20 = malloc(4);
    DAT_04417c24 = 1;
    *DAT_04417c20 = local_24;
    return;
  }
  iVar5 = DAT_04417c24 + 1;
  iVar9 = DAT_04417c24 * 4;
  DAT_04417c24 = iVar5;
  DAT_04417c20 = realloc(DAT_04417c20,iVar5 * 4);
  *(uint **)((int)DAT_04417c20 + iVar9) = local_24;
  return;
}

// --- VPFS_MakeSureFolderExistsOnDisk @0x040444f0 ---
/* source: vpfs */

undefined4 __regparm3 VPFS_MakeSureFolderExistsOnDisk(char *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  char *local_ca8;
  stat64 *local_ca4;
  char local_c94 [1024];
  undefined1 local_894 [1024];
  char local_494 [1024];
  stat64 local_94;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  uint local_20 [4];
  
  local_24 = -1;
  iVar3 = FUN_0403c9d0();
  if (iVar3 == 0) {
    VPFS_MakePathCaseSensitive(param_1,param_1 + 1,param_1);
    iVar4 = FUN_0403c400(param_1);
    if (iVar4 != 0) {
      SplitFile_GetStat(param_1,&local_94);
      return 1;
    }
    iVar4 = __xstat64(3,param_1,&local_94);
  }
  else {
    if (local_24 != 0) {
      VPFS_MakePathCaseSensitive(local_c94,local_24,local_c94);
    }
    iVar4 = FUN_0403c400(local_c94);
    if (iVar4 != 0) {
      SplitFile_GetStat(local_c94,&local_94);
      return 1;
    }
    iVar4 = __xstat64(3,local_c94,&local_94);
  }
  if (iVar4 != -1) {
    return 1;
  }
  local_ca4 = &local_94;
  iVar4 = VPFS_PathToPathInArchive();
  if (iVar4 == 0) {
    return 0;
  }
  cVar2 = FUN_0404c4c0(local_894);
  if (cVar2 != '\0') {
    return 0;
  }
  iVar4 = -1;
  if (iVar3 != 0) {
    VPFS_MakePathCaseSensitive(param_1,param_1 + 1,param_1);
    iVar4 = FUN_0403c400(param_1);
    if (iVar4 == 0) {
      iVar4 = __xstat64(3,param_1,local_ca4);
      if (iVar4 != 0) goto LAB_0404469c;
    }
    else {
      SplitFile_GetStat(param_1,local_ca4);
    }
    if ((local_94.st_mode & 0x3f000) != 0x4000) {
      return 0;
    }
    iVar4 = 0;
  }
LAB_0404469c:
  iVar5 = VPFS_FindInVirtualFilesystem();
  if (iVar5 == -1) {
    if (iVar4 != 0) {
      return 0;
    }
    local_ca8 = (char *)0x0;
  }
  else {
    local_ca8 = (char *)(iVar5 + DAT_04468a94);
    if (*local_ca8 != '\0') {
      return 0;
    }
  }
  pcVar6 = strrchr(param_1,0x2f);
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '\0';
    if (*param_1 == '\0') {
      *pcVar6 = '/';
    }
    else {
      iVar7 = VPFS_MakeSureFolderExistsOnDisk();
      *pcVar6 = '/';
      if (iVar7 == 0) {
        return 0;
      }
    }
  }
  pcVar6 = local_c94;
  if (iVar3 == 0) {
    pcVar6 = param_1;
  }
  iVar7 = mkdir(pcVar6,0x1ed);
  piVar8 = __errno_location();
  iVar3 = *piVar8;
  if ((iVar3 == 0x11) || (iVar7 != -1)) {
    VPFS_MadeChangesAtPath(pcVar6);
    if (iVar4 == 0) {
      eON_Int_TimespecToFileTime(&local_94.st_ctim,&local_34);
      eON_Int_TimespecToFileTime(&local_94.st_mtim,&local_2c);
      local_20[0] = (uint)((local_94.st_mode & 0x80) == 0);
      if ((local_94.st_mode & 0x3f000) == 0x4000) {
        local_20[0] = local_20[0] | 0x10;
      }
      else {
        local_20[0] = (-(uint)(local_20[0] == 0) & 0x7f) + 1;
      }
    }
    else {
      if (iVar5 == -1) {
        FUN_0400a810("filesystemOffset != -1",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x1229
                     ,"int VPFS_MakeSureFolderExistsOnDisk(char*)");
      }
      local_34 = *(undefined4 *)(local_ca8 + 8);
      local_30 = *(undefined4 *)(local_ca8 + 0xc);
      local_2c = *(undefined4 *)(local_ca8 + 0x10);
      local_28 = *(undefined4 *)(local_ca8 + 0x14);
      local_20[0] = *(uint *)(local_ca8 + 0x20) & 0x27;
    }
    bVar1 = false;
    iVar3 = FUN_0404c040(local_894,0);
    if (iVar3 != 0) {
      cVar2 = FUN_0404c630(iVar3);
      if (cVar2 == '\0') {
        FUN_0404c840(iVar3,&local_34);
        FUN_0404c970(iVar3,&local_2c);
        FUN_0404c710(iVar3,local_20);
      }
      bVar1 = cVar2 != '\0';
      FUN_0404c310(iVar3);
    }
    pcVar6 = local_494;
    if (*param_1 == '/') {
      local_494[0] = 'C';
      pcVar6 = local_494 + 2;
      local_494[1] = 0x3a;
    }
    strcpy(pcVar6,param_1);
    if (local_494[0] != '\0') {
      pcVar6 = local_494;
      cVar2 = local_494[0];
      do {
        if (cVar2 == '/') {
          *pcVar6 = '\\';
        }
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar6;
      } while (cVar2 != '\0');
    }
    if ((local_494[0] == '\0') || (iVar3 = VPFS_Open(), iVar3 == 0)) {
      FUN_0400a810("h","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                   0x1244,"int VPFS_MakeSureFolderExistsOnDisk(char*)");
    }
    else {
      VPFS_SetFileAttributes(iVar3,local_20[0]);
      VPFS_SetDateTime(iVar3,&local_34,&local_2c,0);
      eON_VPFS_Close(iVar3);
    }
    uVar9 = 1;
    if (bVar1) {
      VPFS_SetAllFolderContentsAsDeleted();
    }
  }
  else if (iVar3 == 0x1c) {
    uVar9 = 0;
    FUN_0402cd10(0xf,
                 "VPFS_MakeSureFolderExistsOnDisk() error - no space left on filesystem. Path: %s",
                 pcVar6);
  }
  else {
    if (iVar3 < 0x1d) {
      if (iVar3 == 0xd) {
        FUN_0402cd10(0xf,
                     "VPFS_MakeSureFolderExistsOnDisk() error - access to part of path denied: %s",
                     pcVar6);
        return 0;
      }
      if (iVar3 < 0xe) {
        if (iVar3 == 2) {
          FUN_0402cd10(0xf,
                       "VPFS_MakeSureFolderExistsOnDisk() error - empty path, or parent folder doesn\'t exist. Path: %s"
                       ,pcVar6);
          return 0;
        }
        if (iVar3 == 5) {
          FUN_0402cd10(0xf,"VPFS_MakeSureFolderExistsOnDisk() error - IO error occured. Path: %s",
                       pcVar6);
          return 0;
        }
      }
      else {
        if (iVar3 == 0xe) {
          FUN_0402cd10(0xf,
                       "VPFS_MakeSureFolderExistsOnDisk() error - path points outside the process\'s allocated address space: %s"
                       ,pcVar6);
          return 0;
        }
        if (iVar3 == 0x14) {
          FUN_0402cd10(0xf,
                       "VPFS_MakeSureFolderExistsOnDisk() error - component of path prefix is not a directory. Path: %s"
                       ,pcVar6);
          return 0;
        }
      }
    }
    else {
      if (iVar3 == 0x24) {
        FUN_0402cd10(0xf,"VPFS_MakeSureFolderExistsOnDisk() error - path too long: %s",pcVar6);
        return 0;
      }
      if (iVar3 < 0x25) {
        if (iVar3 == 0x1e) {
          FUN_0402cd10(0xf,
                       "VPFS_MakeSureFolderExistsOnDisk() error - parent directory esides on read-only filesystem. Path: %s"
                       ,pcVar6);
          return 0;
        }
        if (iVar3 == 0x1f) {
          FUN_0402cd10(0xf,
                       "VPFS_MakeSureFolderExistsOnDisk() error - parent folder already has maximal number of links. Path: %s"
                       ,pcVar6);
          return 0;
        }
      }
      else {
        if (iVar3 == 0x28) {
          FUN_0402cd10(0xf,"VPFS_MakeSureFolderExistsOnDisk() error - loop in path: %s",pcVar6);
          return 0;
        }
        if (iVar3 == 0x7a) {
          FUN_0402cd10(0xf,"VPFS_MakeSureFolderExistsOnDisk() error - user quota exceeded. Path: %s"
                       ,pcVar6);
          return 0;
        }
      }
    }
    uVar9 = 0;
    FUN_0402cd10(0xf,
                 "VPFS_MakeSureFolderExistsOnDisk() error - unhandled error in mkdir(): %d for path: %s"
                 ,iVar3,pcVar6);
  }
  return uVar9;
}

// --- VPFS_MoveFileOrFolder @0x0404a470 ---
/* WARNING: Type propagation algorithm not settling */
/* source: vpfs */

undefined4 VPFS_MoveFileOrFolder(char *param_1,char *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte bVar12;
  size_t local_1048;
  int local_1038;
  char acStack_1021 [1024];
  char acStack_c21 [1025];
  char local_820 [1024];
  char local_420;
  undefined1 local_41f;
  char local_41e [1022];
  int local_20;
  
  bVar12 = 0;
  puVar10 = (undefined4 *)&stack0xffffef84;
  if ((*param_1 == '\0') || (local_1038 = VPFS_Open(), local_1038 == 0)) {
    FUN_0400a810();
    local_1038 = 0;
  }
  uVar2 = VPFS_GetFileAttributes();
  if ((uVar2 & 0x10) == 0) {
    sVar4 = strlen(param_2);
    if (3 < sVar4) {
      iVar3 = strcasecmp(param_2 + (sVar4 - 4),".exe");
      if (((iVar3 == 0) || (iVar3 = strcasecmp(param_2 + (sVar4 - 4),".dll"), iVar3 == 0)) ||
         (iVar3 = strcasecmp(param_2 + (sVar4 - 3),(char *)&PTR_DAT_042e5d3b), iVar3 == 0)) {
        FUN_0402cd10();
        puVar1 = (undefined4 *)&stack0xffffef84;
        goto joined_r0x0404ac26;
      }
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
    if (*param_2 != '\0') {
      iVar3 = FUN_0403d0f0();
      if (iVar3 != 0) {
        iVar3 = FUN_0403c9d0();
        iVar5 = VPFS_FileOrFolderExists();
        puVar10 = (undefined4 *)&stack0xffffef84;
        if (iVar5 == 0) {
          pcVar6 = strrchr(local_820,0x2f);
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
            if (local_820[0] == '\0') {
              *pcVar6 = '/';
            }
            else {
              iVar5 = VPFS_MakeSureFolderExistsOnDisk();
              *pcVar6 = '/';
              puVar10 = (undefined4 *)&stack0xffffef84;
              if (iVar5 == 0) goto LAB_0404ab5d;
            }
          }
          pcVar6 = local_820;
          if (iVar3 != 0) {
            FUN_0403c9d0();
            pcVar6 = acStack_c21 + 1;
          }
          pcVar7 = &local_420;
          pcVar9 = pcVar7;
          if (*pcVar6 == '/') {
            local_420 = 'C';
            pcVar9 = local_41e;
            local_41f = 0x3a;
          }
          strcpy(pcVar9,pcVar6);
          pcVar6 = pcVar7;
          cVar8 = local_420;
          while (cVar8 != '\0') {
            while (cVar8 != '/') {
              pcVar6 = pcVar6 + 1;
              cVar8 = *pcVar6;
              if (cVar8 == '\0') goto LAB_0404aa5c;
            }
            *pcVar6 = '\\';
            pcVar6 = pcVar6 + 1;
            cVar8 = *pcVar6;
          }
LAB_0404aa5c:
          iVar3 = fs_CreateFileA();
          puVar10 = (undefined4 *)&stack0xffffef68;
          if (iVar3 != -1) {
            FUN_04131a90();
            puVar10 = (undefined4 *)&stack0xffffef64;
            VPFS_MadeChangesAtPath();
            if (local_20 != 0) {
              iVar3 = FUN_0404c040();
              if (iVar3 == 0) {
                FUN_0400a810();
              }
              FUN_0404c310();
            }
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
            pcVar6 = pcVar7;
            if (local_820[0] == '/') {
              local_420 = 'C';
              pcVar6 = local_41e;
              local_41f = 0x3a;
            }
            strcpy(pcVar6,local_820);
            cVar8 = local_420;
            puVar1 = (undefined4 *)&stack0xffffef64;
            if (local_420 == '\0') goto joined_r0x0404ac26;
            do {
              if (cVar8 == '/') {
                *pcVar7 = '\\';
              }
              pcVar7 = pcVar7 + 1;
              cVar8 = *pcVar7;
            } while (*pcVar7 != '\0');
            puVar1 = (undefined4 *)&stack0xffffef64;
            if ((local_420 == '\0') ||
               (iVar3 = VPFS_Open(), puVar1 = (undefined4 *)&stack0xffffef64, iVar3 == 0))
            goto joined_r0x0404ac26;
            iVar5 = VPFS_UnpackArchivedFile();
            if ((iVar5 == 0) || (iVar5 = VPFS_SetFileAttributes(), iVar5 == 0)) {
              VPFS_Delete();
              puVar1 = (undefined4 *)&stack0xffffef64;
              goto joined_r0x0404ac26;
            }
            if (iVar3 + 0x54545455U < 0x2801) {
              pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
              if (iVar3 != -0x54545455) {
                VPFS_CloseHandle();
              }
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
            }
            else {
              FUN_0402cd10();
            }
            iVar3 = VPFS_Delete();
            goto joined_r0x0404ac16;
          }
        }
LAB_0404ab5d:
        *puVar10 = &DAT_0441804c;
        puVar10[-1] = 0x404ab69;
        pthread_mutex_unlock((pthread_mutex_t *)*puVar10);
        puVar1 = puVar10;
        goto joined_r0x0404ac26;
      }
    }
    FUN_0402cd10();
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    puVar1 = (undefined4 *)&stack0xffffef84;
  }
  else {
    iVar3 = VPFS_CreateFolder();
    puVar1 = (undefined4 *)&stack0xffffef84;
    if (iVar3 == 0) goto joined_r0x0404ac26;
    local_1048 = strlen(param_1);
    pcVar6 = acStack_1021 + 1;
    memcpy(pcVar6,param_1,local_1048 + 1);
    if (acStack_1021[local_1048] != '\\') {
      acStack_1021[local_1048 + 1] = '\\';
      acStack_1021[local_1048 + 2] = '\0';
      local_1048 = local_1048 + 1;
    }
    sVar4 = strlen(param_2);
    memcpy(acStack_c21 + 1,param_2,sVar4 + 1);
    if (acStack_c21[sVar4] != '\\') {
      acStack_c21[sVar4 + 1] = '\\';
      acStack_c21[sVar4 + 2] = '\0';
      sVar4 = sVar4 + 1;
    }
    if (local_1038 != 0) {
      if (local_1038 + 0x54545455U < 0x2801) {
        if (local_1038 != -0x54545455) {
          iVar5 = FUN_0403f350();
          if (iVar5 != 0) {
            bVar11 = pcVar6 + local_1048 == (char *)0x0;
            do {
              iVar5 = 2;
              pcVar7 = local_820;
              pcVar9 = ".";
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar11 = *pcVar7 == *pcVar9;
                pcVar7 = pcVar7 + (uint)bVar12 * -2 + 1;
                pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
              } while (bVar11);
              if (!bVar11) {
                iVar5 = 3;
                pcVar7 = local_820;
                pcVar9 = "..";
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar11 = *pcVar7 == *pcVar9;
                  pcVar7 = pcVar7 + (uint)bVar12 * -2 + 1;
                  pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
                } while (bVar11);
                if (!bVar11) {
                  strcpy(pcVar6 + local_1048,local_820);
                  strcpy(acStack_c21 + 1 + sVar4,local_820);
                  iVar5 = VPFS_MoveFileOrFolder();
                  if (iVar5 == 0) {
                    if (iVar3 + 0x54545455U < 0x2801) {
                      pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
                      if (iVar3 != -0x54545455) {
                        VPFS_CloseHandle();
                      }
                      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
                    }
                    else {
                      FUN_0402cd10();
                    }
                    pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
                    VPFS_CloseHandle();
                    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
                    return 0;
                  }
                }
              }
              iVar5 = FUN_0403f350();
              bVar11 = iVar5 == 0;
            } while (!bVar11);
          }
        }
      }
      else {
        FUN_0402cd10();
      }
    }
    VPFS_SetFileAttributes();
    puVar1 = puVar10;
    if (0x2800 < iVar3 + 0x54545455U) {
      FUN_0402cd10();
      goto joined_r0x0404ac26;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
    if (iVar3 == -0x54545455) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    }
    else {
      iVar3 = VPFS_CloseHandle();
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      if (iVar3 == 0) goto joined_r0x0404ac26;
    }
    iVar3 = VPFS_Delete();
joined_r0x0404ac16:
    puVar1 = puVar10;
    if (iVar3 != 0) {
      return 1;
    }
  }
joined_r0x0404ac26:
  if (local_1038 != 0) {
    if (local_1038 + 0x54545455U < 0x2801) {
      *puVar1 = &DAT_0441804c;
      puVar1[-1] = 0x404a796;
      pthread_mutex_lock((pthread_mutex_t *)*puVar1);
      if (local_1038 != -0x54545455) {
        puVar1[-1] = 0x404a7a1;
        VPFS_CloseHandle();
      }
      *puVar1 = &DAT_0441804c;
      puVar1[-1] = 0x404a7ad;
      pthread_mutex_unlock((pthread_mutex_t *)*puVar1);
      return 0;
    }
    puVar1[1] = "Invalid handle given to VPFS_Close()!!";
    *puVar1 = 0xf;
    puVar1[-1] = 0x404ab8a;
    FUN_0402cd10();
  }
  return 0;
}

// --- VPFS_ObjectAtOffsetDeleted @0x04040180 ---
/* source: vpfs */

undefined1 __regparm3 VPFS_ObjectAtOffsetDeleted(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char local_41c [1036];
  
  if (param_1 == 0) {
    local_41c[0] = '/';
    local_41c[1] = '\0';
    goto LAB_040401a5;
  }
  iVar2 = 0;
  param_1 = DAT_04468a94 + param_1;
  if (*(int *)(param_1 + 4) == 0) {
LAB_040401d7:
    iVar3 = (uint)*(ushort *)(param_1 + 2) + iVar2;
    if ((iVar3 < 0x401) && (strcpy(local_41c + iVar2,(char *)(param_1 + 0x24)), iVar3 != 1))
    goto LAB_040401a5;
  }
  else {
    iVar2 = FUN_0403fe00();
    if (iVar2 != 0) {
      local_41c[iVar2] = '/';
      iVar2 = iVar2 + 1;
      goto LAB_040401d7;
    }
  }
  FUN_0400a810("VPFS_GetPathInArchiveFromOffset( offset, buffer, 1024 ) != 0",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x975,
               "int VPFS_ObjectAtOffsetDeleted(int)");
LAB_040401a5:
  uVar1 = FUN_0404c4c0(local_41c);
  return uVar1;
}

// --- VPFS_OpenFolderOnDisk @0x04040f80 ---
/* source: vpfs */

undefined4 __regparm3 VPFS_OpenFolderOnDisk(char *param_1,int param_2,char *param_3)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  size_t sVar9;
  char *pcVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  bool bVar27;
  int aiStackY_db0 [5];
  int local_d74;
  undefined4 *local_d60;
  int local_d5c;
  int local_d58;
  undefined1 local_d44 [1023];
  char cStack_945;
  undefined4 local_944;
  uint local_544 [256];
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  uint local_11c [67];
  
  piVar16 = (int *)&stack0xfffff264;
  aiStackY_db0[4] = 0x4040fa9;
  iVar6 = VPFS_PathToPathInArchive();
  local_d74 = -1;
  if (iVar6 != 0) {
    aiStackY_db0[4] = 0x4041cdb;
    local_d74 = VPFS_FindInVirtualFilesystem();
  }
  aiStackY_db0[4] = 0x4040fc9;
  piVar7 = malloc(0xc);
  piVar7[1] = 0;
  piVar7[2] = 0x100;
  aiStackY_db0[4] = 0x4040fe9;
  pvVar8 = malloc(0x400);
  *piVar7 = (int)pvVar8;
  pcVar10 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar10 = param_1;
  }
  aiStackY_db0[4] = 0x404100e;
  sVar9 = strlen(pcVar10);
  aiStackY_db0[4] = 0x4041028;
  strcpy((char *)&local_944,pcVar10);
  if ((1 < sVar9) && (((&cStack_945)[sVar9] != '/' || ((&cStack_945)[sVar9] = '\0', sVar9 != 2)))) {
    aiStackY_db0[4] = 0x4041051;
    VPFS_OpenFolder_AddToBuffer();
    aiStackY_db0[4] = 0x4041067;
    pcVar10 = strrchr((char *)&local_944,0x2f);
    if (pcVar10 != (char *)0x0) {
      if (pcVar10 == (char *)&local_944) {
        local_944._1_1_ = 0;
      }
      else {
        *pcVar10 = '\0';
      }
    }
    aiStackY_db0[4] = 0x4041090;
    VPFS_OpenFolder_AddToBuffer();
  }
  local_d5c = 0;
  if (iVar6 != 0) {
    aiStackY_db0[4] = 0x4041d06;
    iVar6 = FUN_0404c040();
    if (iVar6 != 0) {
      aiStackY_db0[4] = 0x4041d18;
      local_d5c = FUN_0404c340();
      aiStackY_db0[4] = 0x4041d26;
      VPFSDB_ReleaseObject();
    }
  }
  if (local_d74 != -1) {
    piVar11 = (int *)(local_d74 + 0x24 + (uint)*(ushort *)(DAT_04468a94 + 2 + local_d74) +
                     DAT_04468a94);
    iVar6 = *piVar11;
    if (iVar6 != 0) {
      local_d58 = 0;
      iVar17 = 0;
      if (local_d5c == 0) {
        do {
          iVar26 = piVar11[local_d58 + 1];
          iVar17 = DAT_04468a94 + 0x24;
          pbVar21 = (byte *)(DAT_04468a94 + iVar26);
          aiStackY_db0[4] = 0x404116d;
          puVar12 = malloc(300);
          bVar1 = *pbVar21;
          uVar22 = (uint)*(ushort *)(pbVar21 + 2);
          uVar19 = *(uint *)(pbVar21 + 0xc);
          *puVar12 = (uint)bVar1;
          puVar12[1] = uVar22;
          uVar23 = *(uint *)(pbVar21 + 8);
          puVar12[3] = uVar19;
          uVar19 = *(uint *)(pbVar21 + 0x14);
          puVar12[2] = uVar23;
          uVar23 = *(uint *)(pbVar21 + 0x10);
          puVar12[5] = uVar19;
          uVar19 = *(uint *)(pbVar21 + 0x1c);
          puVar12[4] = uVar23;
          uVar23 = *(uint *)(pbVar21 + 0x18);
          puVar12[7] = uVar19;
          puVar12[6] = uVar23;
          uVar19 = *(uint *)(pbVar21 + 0x20);
          puVar12[9] = 0;
          puVar12[10] = 0;
          puVar12[8] = uVar19;
          if (bVar1 - 1 < 2) {
            iVar13 = DAT_04468a94 + uVar22 + piVar11[local_d58 + 1];
            uVar19 = *(uint *)(iVar13 + 0x24);
            puVar12[10] = *(uint *)(iVar13 + 0x28);
            puVar12[9] = uVar19;
          }
          aiStackY_db0[4] = 0x4041119;
          memcpy(puVar12 + 0xb,(void *)(iVar17 + iVar26),uVar22);
          aiStackY_db0[4] = 0x4041126;
          TemporaryDirElemList_Add();
          local_d58 = local_d58 + 1;
        } while (local_d58 != iVar6);
      }
      else {
        do {
          iVar14 = DAT_04468a94;
          iVar13 = piVar11[iVar17 + 1];
          iVar26 = DAT_04468a94 + 0x24;
          aiStackY_db0[4] = 0x4041277;
          cVar5 = FUN_0404c420();
          if (cVar5 == '\0') {
            pbVar21 = (byte *)(iVar13 + iVar14);
            aiStackY_db0[4] = 0x4041289;
            puVar12 = malloc(300);
            bVar1 = *pbVar21;
            uVar22 = (uint)*(ushort *)(pbVar21 + 2);
            *puVar12 = (uint)bVar1;
            puVar12[1] = uVar22;
            uVar19 = *(uint *)(pbVar21 + 0xc);
            puVar12[2] = *(uint *)(pbVar21 + 8);
            uVar23 = *(uint *)(pbVar21 + 0x10);
            puVar12[3] = uVar19;
            uVar19 = *(uint *)(pbVar21 + 0x14);
            puVar12[4] = uVar23;
            uVar23 = *(uint *)(pbVar21 + 0x18);
            puVar12[5] = uVar19;
            uVar19 = *(uint *)(pbVar21 + 0x1c);
            puVar12[6] = uVar23;
            uVar23 = *(uint *)(pbVar21 + 0x20);
            puVar12[7] = uVar19;
            puVar12[9] = 0;
            puVar12[10] = 0;
            puVar12[8] = uVar23;
            if (bVar1 - 1 < 2) {
              iVar14 = uVar22 + DAT_04468a94 + piVar11[iVar17 + 1];
              uVar19 = *(uint *)(iVar14 + 0x24);
              puVar12[10] = *(uint *)(iVar14 + 0x28);
              puVar12[9] = uVar19;
            }
            aiStackY_db0[4] = 0x404122f;
            memcpy(puVar12 + 0xb,(void *)(iVar26 + iVar13),uVar22);
            aiStackY_db0[4] = 0x404123c;
            TemporaryDirElemList_Add();
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 != iVar6);
      }
    }
  }
  aiStackY_db0[4] = 0x40412f5;
  uVar15 = eON_GetLastError();
  aiStackY_db0[4] = 0x4041313;
  iVar6 = VPFS_EnumerateDiskFolderEntries();
  if (iVar6 != 0) {
    do {
      if (local_d5c == 0) {
LAB_0404135a:
        local_d58 = local_144;
        if (local_144 != 3) {
          uVar23 = 0;
          uVar19 = piVar7[1];
          uVar22 = uVar19;
          uVar24 = uVar23;
          if (uVar19 != 0) {
            do {
              while( true ) {
                uVar23 = uVar22 + uVar24 >> 1;
                aiStackY_db0[4] = 0x40413b2;
                iVar6 = FUN_0403cd80();
                if (uVar22 - uVar24 == 1) {
                  uVar23 = uVar24;
                  if (0 < iVar6) {
                    uVar23 = uVar22;
                  }
                  goto joined_r0x04041ae5;
                }
                if (iVar6 < 0) break;
                if ((iVar6 == 0) || (uVar24 = uVar23, uVar23 == uVar22)) goto joined_r0x04041ae5;
              }
              uVar22 = uVar23;
            } while (uVar23 != uVar24);
          }
joined_r0x04041ae5:
          if (uVar23 < uVar19) {
            piVar16 = *(int **)(*piVar7 + uVar23 * 4);
            aiStackY_db0[4] = 0x4041b06;
            iVar6 = FUN_0403cd80();
            if ((iVar6 != 0) || (piVar16 == (int *)0x0)) goto LAB_040413e4;
            aiStackY_db0[4] = 0x4041b28;
            iVar6 = strcasecmp((char *)(piVar16 + 0xb),(char *)local_11c);
            if (iVar6 != 0) {
              aiStackY_db0[4] = 0x4041c74;
              FUN_0400a810();
            }
            puVar12 = local_11c;
            do {
              puVar18 = puVar12;
              uVar23 = *puVar18 + 0xfefefeff & ~*puVar18;
              uVar19 = uVar23 & 0x80808080;
              puVar12 = puVar18 + 1;
            } while (uVar19 == 0);
            if ((uVar23 & 0x8080) == 0) {
              puVar12 = (uint *)((int)puVar18 + 6);
              uVar19 = uVar19 >> 0x10;
            }
            if (piVar16[1] !=
                (int)puVar12 + (-(int)local_11c - (uint)CARRY1((byte)uVar19,(byte)uVar19)) + -2) {
              aiStackY_db0[4] = 0x4041b96;
              FUN_0400a810();
            }
            local_d58 = local_144;
            bVar27 = false;
          }
          else {
LAB_040413e4:
            aiStackY_db0[4] = 0x40413f0;
            piVar16 = malloc(300);
            bVar27 = true;
          }
          *piVar16 = local_d58;
          piVar16[2] = local_140;
          piVar16[3] = local_13c;
          piVar16[4] = local_138;
          piVar16[5] = local_134;
          piVar16[6] = local_130;
          piVar16[7] = local_12c;
          piVar16[9] = 0;
          piVar16[10] = 0;
          piVar16[8] = local_128;
          if (local_d58 - 1U < 2) {
            piVar16[9] = local_124;
            piVar16[10] = local_120;
          }
          if (bVar27) {
            puVar12 = local_11c;
            do {
              puVar18 = puVar12;
              uVar23 = *puVar18 + 0xfefefeff & ~*puVar18;
              uVar19 = uVar23 & 0x80808080;
              puVar12 = puVar18 + 1;
            } while (uVar19 == 0);
            if ((uVar23 & 0x8080) == 0) {
              puVar12 = (uint *)((int)puVar18 + 6);
              uVar19 = uVar19 >> 0x10;
            }
            sVar9 = (int)puVar12 + (-(int)local_11c - (uint)CARRY1((byte)uVar19,(byte)uVar19)) + -2;
            piVar16[1] = sVar9;
            aiStackY_db0[4] = 0x4041c09;
            memcpy(piVar16 + 0xb,local_11c,sVar9);
            aiStackY_db0[4] = 0x4041c16;
            TemporaryDirElemList_Add();
          }
        }
      }
      else {
        aiStackY_db0[4] = 0x4041352;
        cVar5 = FUN_0404c420();
        if (cVar5 == '\0') goto LAB_0404135a;
      }
      aiStackY_db0[4] = 0x4041487;
      iVar6 = FUN_04040950();
    } while (iVar6 != 0);
    aiStackY_db0[4] = 0x404149d;
    eON_FindClose();
    piVar16 = aiStackY_db0 + 4;
  }
  *piVar16 = uVar15;
  piVar16[-1] = 0x40414ae;
  eON_SetLastError();
  piVar20 = piVar16 + -1;
  if (param_3 == (char *)0x0) {
    piVar16[-1] = local_d5c;
    piVar16[-2] = 0x4041cae;
    free((void *)piVar16[-1]);
    uVar15 = 4;
  }
  else {
    piVar16[-2] = 0x40414c4;
    uVar15 = eON_GetLastError();
    *piVar16 = (int)&local_144;
    piVar16[-1] = (int)param_3;
    piVar16[-2] = 0x40414e2;
    iVar6 = VPFS_EnumerateDiskFolderEntries();
    if (iVar6 != 0) {
      do {
        bVar27 = false;
        if (local_d5c != 0) {
          *piVar16 = (int)local_11c;
          piVar16[-1] = local_d5c;
          piVar16[-2] = 0x4041529;
          cVar5 = FUN_0404c420();
          bVar27 = cVar5 != '\0';
        }
        bVar3 = false;
        local_d58 = local_144;
        if (local_144 != 3) {
          uVar23 = 0;
          uVar19 = piVar7[1];
          uVar22 = uVar19;
          uVar24 = uVar23;
          if (uVar19 != 0) {
            do {
              while( true ) {
                uVar23 = uVar22 + uVar24 >> 1;
                piVar16[-2] = 0x4041592;
                iVar17 = FUN_0403cd80();
                if (uVar22 - uVar24 == 1) {
                  uVar23 = uVar24;
                  if (0 < iVar17) {
                    uVar23 = uVar22;
                  }
                  goto joined_r0x040419ed;
                }
                if (iVar17 < 0) break;
                if ((iVar17 == 0) || (uVar24 = uVar23, uVar23 == uVar22)) goto joined_r0x040419ed;
              }
              uVar22 = uVar23;
            } while (uVar23 != uVar24);
          }
joined_r0x040419ed:
          if (uVar23 < uVar19) {
            piVar11 = *(int **)(*piVar7 + uVar23 * 4);
            piVar16[-2] = 0x4041a0e;
            iVar17 = FUN_0403cd80();
            if ((iVar17 != 0) || (piVar11 == (int *)0x0)) goto LAB_040415c4;
            piVar16[-1] = (int)(piVar11 + 0xb);
            *piVar16 = (int)local_11c;
            piVar16[-2] = 0x4041a30;
            iVar17 = strcasecmp((char *)piVar16[-1],(char *)*piVar16);
            if (iVar17 != 0) {
              piVar16[2] = (int)"int VPFS_OpenFolderOnDisk(const char*, VPFSHandle, const char*)";
              piVar16[1] = 0x897;
              *piVar16 = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
              piVar16[-1] = (int)"!strcasecmp( newElem->ElementName, element.ElementName )";
              piVar16[-2] = 0x4041c44;
              FUN_0400a810();
            }
            puVar12 = local_11c;
            do {
              puVar18 = puVar12;
              uVar23 = *puVar18 + 0xfefefeff & ~*puVar18;
              uVar19 = uVar23 & 0x80808080;
              puVar12 = puVar18 + 1;
            } while (uVar19 == 0);
            if ((uVar23 & 0x8080) == 0) {
              puVar12 = (uint *)((int)puVar18 + 6);
              uVar19 = uVar19 >> 0x10;
            }
            if (piVar11[1] !=
                (int)puVar12 + (-(int)local_11c - (uint)CARRY1((byte)uVar19,(byte)uVar19)) + -2) {
              piVar16[2] = (int)"int VPFS_OpenFolderOnDisk(const char*, VPFSHandle, const char*)";
              piVar16[1] = 0x898;
              *piVar16 = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp";
              piVar16[-1] = (int)
                            "newElem->Data.ElementNameLength == (uint32_t)strlen(element.ElementName)+1"
              ;
              piVar16[-2] = 0x4041a9e;
              FUN_0400a810();
            }
            local_d58 = local_144;
            bVar4 = false;
          }
          else {
LAB_040415c4:
            piVar16[-1] = 300;
            piVar16[-2] = 0x40415d0;
            piVar11 = malloc(piVar16[-1]);
            bVar4 = true;
          }
          *piVar11 = local_d58;
          piVar11[2] = local_140;
          piVar11[3] = local_13c;
          piVar11[4] = local_138;
          piVar11[5] = local_134;
          piVar11[6] = local_130;
          piVar11[7] = local_12c;
          piVar11[9] = 0;
          piVar11[10] = 0;
          piVar11[8] = local_128;
          bVar3 = local_d58 - 1U < 2;
          if (bVar3) {
            piVar11[9] = local_124;
            piVar11[10] = local_120;
          }
          bVar3 = !bVar3;
          if (bVar4) {
            puVar12 = local_11c;
            do {
              puVar18 = puVar12;
              uVar23 = *puVar18 + 0xfefefeff & ~*puVar18;
              uVar19 = uVar23 & 0x80808080;
              puVar12 = puVar18 + 1;
            } while (uVar19 == 0);
            if ((uVar23 & 0x8080) == 0) {
              puVar12 = (uint *)((int)puVar18 + 6);
              uVar19 = uVar19 >> 0x10;
            }
            iVar17 = (int)puVar12 + (-(int)local_11c - (uint)CARRY1((byte)uVar19,(byte)uVar19)) + -2
            ;
            piVar11[1] = iVar17;
            piVar16[1] = iVar17;
            *piVar16 = (int)local_11c;
            piVar16[-1] = (int)(piVar11 + 0xb);
            piVar16[-2] = 0x40418a9;
            memcpy((void *)piVar16[-1],(void *)*piVar16,piVar16[1]);
            piVar16[-2] = 0x40418b6;
            TemporaryDirElemList_Add();
          }
        }
        if (bVar27) {
          *piVar16 = (int)local_d44;
          piVar16[-1] = (int)&local_944;
          piVar16[-2] = 0x40418e0;
          strcpy((char *)piVar16[-1],(char *)*piVar16);
          puVar12 = &local_944;
          do {
            puVar18 = puVar12;
            uVar23 = *puVar18 + 0xfefefeff & ~*puVar18;
            uVar19 = uVar23 & 0x80808080;
            puVar12 = puVar18 + 1;
          } while (uVar19 == 0);
          if ((uVar23 & 0x8080) == 0) {
            puVar12 = (uint *)((int)puVar18 + 6);
            uVar19 = uVar19 >> 0x10;
          }
          *(undefined2 *)((int)puVar12 + (-3 - (uint)CARRY1((byte)uVar19,(byte)uVar19))) = 0x2f;
          *piVar16 = (int)local_11c;
          piVar16[-1] = (int)&local_944;
          piVar16[-2] = 0x4041931;
          strcat((char *)piVar16[-1],(char *)*piVar16);
          *piVar16 = 0;
          piVar16[-1] = (int)&local_944;
          piVar16[-2] = 0x4041947;
          iVar17 = FUN_0404c040();
          if (iVar17 != 0) {
            piVar16[-1] = iVar17;
            piVar16[-2] = 0x4041957;
            FUN_0404c310();
            if (bVar3) {
              piVar16[-1] = (int)local_544;
              *piVar16 = (int)param_1;
              piVar16[-2] = 0x4041977;
              strcpy((char *)piVar16[-1],(char *)*piVar16);
              puVar12 = local_544;
              do {
                puVar18 = puVar12;
                uVar23 = *puVar18 + 0xfefefeff & ~*puVar18;
                uVar19 = uVar23 & 0x80808080;
                puVar12 = puVar18 + 1;
              } while (uVar19 == 0);
              if ((uVar23 & 0x8080) == 0) {
                puVar12 = (uint *)((int)puVar18 + 6);
                uVar19 = uVar19 >> 0x10;
              }
              *(undefined2 *)((int)puVar12 + (-3 - (uint)CARRY1((byte)uVar19,(byte)uVar19))) = 0x2f;
              *piVar16 = (int)local_11c;
              piVar16[-1] = (int)local_544;
              piVar16[-2] = 0x40419c8;
              strcat((char *)piVar16[-1],(char *)*piVar16);
              piVar16[-2] = 0x40419d9;
              VPFS_SetAllFolderContentsAsDeleted();
            }
          }
        }
        *piVar16 = (int)&local_144;
        piVar16[-1] = iVar6;
        piVar16[-2] = 0x4041679;
        iVar17 = FUN_04040950();
      } while (iVar17 != 0);
      piVar16[-1] = iVar6;
      piVar16[-2] = 0x404168f;
      eON_FindClose();
      piVar20 = piVar16 + -2;
    }
    *piVar20 = uVar15;
    piVar20[-1] = 0x40416a0;
    eON_SetLastError();
    piVar20[-1] = local_d5c;
    piVar20[-2] = 0x40416b1;
    free((void *)piVar20[-1]);
    uVar15 = 6;
    piVar16 = piVar20;
  }
  param_2 = param_2 * 0x20;
  local_d60 = (undefined4 *)(&DAT_04418260 + param_2);
  *local_d60 = uVar15;
  piVar16[-1] = (int)param_1;
  piVar16[-2] = 0x40416e0;
  sVar9 = strlen((char *)piVar16[-1]);
  piVar16[-1] = sVar9 + 1;
  piVar16[-2] = 0x40416eb;
  pvVar8 = malloc(piVar16[-1]);
  *(void **)(&DAT_04418264 + param_2) = pvVar8;
  *piVar16 = (int)param_1;
  piVar16[-1] = (int)pvVar8;
  piVar16[-2] = 0x4041706;
  strcpy((char *)piVar16[-1],(char *)*piVar16);
  iVar6 = piVar7[1];
  if (iVar6 == 0) {
    piVar16[-1] = 8;
    piVar16[-2] = 0x4041d54;
    piVar11 = malloc(piVar16[-1]);
    piVar11[1] = 8;
    *piVar11 = local_d74;
    iVar6 = *piVar7;
    *(int **)(&DAT_04418268 + param_2) = piVar11;
    *(undefined4 *)(&DAT_0441826c + param_2) = 0;
    *(undefined4 *)(&DAT_04418270 + param_2) = 0;
  }
  else {
    iVar17 = 8;
    iVar26 = *piVar7;
    iVar13 = 0;
    do {
      iVar14 = iVar13 * 4;
      iVar13 = iVar13 + 1;
      iVar17 = iVar17 + 0x2c + *(int *)(*(int *)(iVar26 + iVar14) + 4);
    } while (iVar13 != iVar6);
    piVar16[-1] = iVar17;
    piVar16[-2] = 0x404174b;
    piVar11 = malloc(piVar16[-1]);
    piVar11[1] = iVar17;
    *piVar11 = local_d74;
    piVar25 = piVar11 + 2;
    iVar17 = 0;
    do {
      piVar2 = *(int **)(iVar26 + iVar17 * 4);
      iVar17 = iVar17 + 1;
      *piVar25 = *piVar2;
      piVar25[1] = piVar2[1];
      piVar25[2] = piVar2[2];
      piVar25[3] = piVar2[3];
      piVar25[4] = piVar2[4];
      piVar25[5] = piVar2[5];
      piVar25[6] = piVar2[6];
      piVar25[7] = piVar2[7];
      piVar25[8] = piVar2[8];
      piVar25[9] = piVar2[9];
      piVar25[10] = piVar2[10];
      iVar13 = piVar2[1];
      piVar16[-1] = (int)(piVar25 + 0xb);
      *piVar16 = (int)(piVar2 + 0xb);
      piVar16[1] = iVar13;
      piVar16[-2] = 0x40417d5;
      memcpy((void *)piVar16[-1],(void *)*piVar16,piVar16[1]);
      piVar25 = (int *)((int)(piVar25 + 0xb) + piVar2[1]);
    } while (iVar17 != iVar6);
    uVar19 = 0;
    *(undefined4 *)(&DAT_0441826c + param_2) = 0;
    *(int **)(&DAT_04418268 + param_2) = piVar11;
    *(undefined4 *)(&DAT_04418270 + param_2) = 0;
    while( true ) {
      iVar6 = uVar19 * 4;
      uVar19 = uVar19 + 1;
      piVar16[-1] = *(undefined4 *)(iVar26 + iVar6);
      piVar16[-2] = 0x4041820;
      free((void *)piVar16[-1]);
      if ((uint)piVar7[1] <= uVar19) break;
      iVar26 = *piVar7;
    }
    iVar6 = *piVar7;
  }
  piVar16[-1] = iVar6;
  piVar16[-2] = 0x4041835;
  free((void *)piVar16[-1]);
  piVar16[-1] = (int)piVar7;
  piVar16[-2] = 0x4041843;
  free((void *)piVar16[-1]);
  return 1;
}

// --- VPFS_OpenFolder_AddToBuffer @0x0403d430 ---
/* source: vpfs */

void __regparm3 VPFS_OpenFolder_AddToBuffer(char *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  uint uVar4;
  stat64 local_7c;
  
  iVar1 = __xstat64(3,param_1,&local_7c);
  if (iVar1 != 0) {
    FUN_0402cd10(0xf,
                 "VPFS_OpenFolder_AddToBuffer() internal error - addressed element \'%s\' does not exist on disk!"
                 ,param_1);
    FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                 0x7ca,
                 "void VPFS_OpenFolder_AddToBuffer(const char*, TemporaryDirElemList*, const char*)"
                );
  }
  if ((local_7c.st_mode & 0x3f000) == 0x4000) {
    uVar4 = (uint)((local_7c.st_mode & 0x80) == 0);
  }
  else {
    FUN_0402cd10(0xf,
                 "VPFS_OpenFolder_AddToBuffer() internal error - addressed element \'%s\' is not a folder!"
                 ,param_1);
    FUN_0400a810("false","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",
                 0x7d1,
                 "void VPFS_OpenFolder_AddToBuffer(const char*, TemporaryDirElemList*, const char*)"
                );
    uVar4 = (uint)((local_7c.st_mode & 0x80) == 0);
    if ((local_7c.st_mode & 0x3f000) != 0x4000) {
      uVar4 = (-(uint)(uVar4 == 0) & 0x7f) + 1;
      goto LAB_0403d4d9;
    }
  }
  uVar4 = uVar4 | 0x10;
LAB_0403d4d9:
  puVar2 = malloc(300);
  *puVar2 = 0;
  sVar3 = strlen(param_3);
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[1] = sVar3 + 1;
  puVar2[8] = uVar4;
  eON_Int_TimespecToFileTime(&local_7c.st_ctim,puVar2 + 2);
  eON_Int_TimespecToFileTime(&local_7c.st_atim,puVar2 + 6);
  eON_Int_TimespecToFileTime(&local_7c.st_mtim,puVar2 + 4);
  strcpy((char *)(puVar2 + 0xb),param_3);
  TemporaryDirElemList_Add();
  return;
}

// --- VPFS_SetAllFolderContentsAsDeleted @0x04040c90 ---
/* source: vpfs */

void __regparm3 VPFS_SetAllFolderContentsAsDeleted(char *param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 local_580;
  int local_55c;
  char acStack_547 [3];
  uint local_544 [256];
  int local_144;
  char local_11c [268];
  
  puVar10 = (undefined4 *)&stack0xfffffa84;
  local_580 = 0x4040cac;
  sVar1 = strlen(param_2);
  local_55c = 0;
  if (1 < sVar1) {
    local_580 = 0x4040ccf;
    strcpy((char *)local_544,param_2);
    puVar8 = local_544;
    do {
      puVar7 = puVar8;
      uVar2 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar3 = uVar2 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar3 == 0);
    if ((uVar2 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar7 + 6);
      uVar3 = uVar3 >> 0x10;
    }
    pcVar11 = (char *)((int)puVar8 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
    local_55c = sVar1 + 1;
    pcVar11[0] = '/';
    pcVar11[1] = '\0';
  }
  local_580 = 0x4040d12;
  iVar4 = VPFS_FindInVirtualFilesystem();
  if (iVar4 != -1) {
    piVar12 = (int *)(iVar4 + 0x24 + (uint)*(ushort *)(DAT_04468a94 + 2 + iVar4) + DAT_04468a94);
    iVar4 = *piVar12;
    if (iVar4 != 0) {
      iVar9 = 0;
      do {
        local_580 = 0x4040d72;
        strcpy((char *)((int)local_544 + local_55c),
               (char *)(DAT_04468a94 + 0x24 + piVar12[iVar9 + 1]));
        local_580 = 0x4040d88;
        iVar5 = FUN_0404c040();
        if (iVar5 == 0) {
          local_580 = 0x4040e1a;
          FUN_0400a810();
        }
        iVar9 = iVar9 + 1;
        local_580 = 0x4040d9d;
        FUN_0404c5f0();
        local_580 = 0x4040dab;
        VPFSDB_ReleaseObject();
      } while (iVar9 != iVar4);
    }
  }
  local_580 = 0x4040dc9;
  strrchr(param_1,0x2f);
  local_580 = 0x4040de2;
  iVar4 = VPFS_MakePathCaseSensitive();
  if (iVar4 == 0) {
    return;
  }
  local_580 = 0x4040e2d;
  uVar6 = eON_GetLastError();
  local_580 = 0x4040e4b;
  iVar4 = VPFS_EnumerateDiskFolderEntries();
  if (iVar4 != 0) {
    local_580 = 0x4040e6d;
    strcpy((char *)local_544,param_1);
    puVar8 = local_544;
    do {
      puVar7 = puVar8;
      uVar2 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar3 = uVar2 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar3 == 0);
    if ((uVar2 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar7 + 6);
      uVar3 = uVar3 >> 0x10;
    }
    iVar4 = (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_544;
    *(char *)((int)puVar8 + (int)(acStack_547 + iVar4 + 3)) = '/';
    *(char *)((int)puVar8 + (int)(acStack_547 + iVar4 + 4)) = '\0';
    do {
      if (local_144 != 3) {
        local_580 = 0x4040ee1;
        strcpy((char *)(local_55c + (int)local_544),local_11c);
        local_580 = 0x4040ef1;
        iVar4 = FUN_0404c040();
        if (iVar4 == 0) {
          local_580 = 0x4040f6f;
          FUN_0400a810();
        }
        local_580 = 0x4040f03;
        FUN_0404c5f0();
        local_580 = 0x4040f11;
        VPFSDB_ReleaseObject();
      }
      local_580 = 0x4040f1d;
      iVar4 = FUN_04040950();
    } while (iVar4 != 0);
    local_580 = 0x4040f29;
    eON_FindClose();
    puVar10 = &local_580;
  }
  *puVar10 = uVar6;
  puVar10[-1] = 0x4040f3a;
  eON_SetLastError();
  return;
}

// --- VPFS_SetDateTime @0x04044040 ---
/* source: vpfs */

undefined4 VPFS_SetDateTime(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStackY_47c;
  int local_478;
  undefined4 uStackY_46c;
  int local_468 [3];
  int local_45c [3];
  undefined4 uStackY_450;
  
  piVar6 = (int *)&stack0xfffffbb4;
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    uStackY_450 = 0x4044154;
    FUN_0402cd10();
    return 0;
  }
  uStackY_450 = 0x4044093;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  iVar2 = (&DAT_04418280)[(param_1 + 0x54545454) * 8];
  piVar5 = (int *)&stack0xfffffbb4;
  if (iVar2 == 0) {
LAB_04044240:
    *piVar5 = (int)&DAT_0441804c;
    piVar5[-1] = 0x404424c;
    pthread_mutex_unlock((pthread_mutex_t *)*piVar5);
  }
  else {
    if (iVar2 == 6) {
      uStackY_450 = 0x404430c;
      iVar2 = FUN_0403c9d0();
      if (iVar2 == 0) {
        uStackY_450 = 0x40443dd;
        FUN_0400a810();
      }
LAB_0404419f:
      uStackY_450 = 0x40441a4;
      iVar2 = fs_CreateFileA();
      piVar6 = local_468;
      if (iVar2 != -1) {
        local_468[1] = 0;
        local_45c[0] = param_3;
        local_468[2] = param_4;
        uStackY_46c = 0x40441d0;
        local_468[0] = iVar2;
        iVar3 = fs_SetFileTime();
        local_478 = iVar2;
        if (iVar3 != 0) {
          uStackY_47c = 0x40441df;
          FUN_04131a90();
          piVar4 = &uStackY_47c;
LAB_04044120:
          *piVar4 = (int)&DAT_0441804c;
          piVar4[-1] = 0x4044131;
          pthread_mutex_unlock((pthread_mutex_t *)*piVar4);
          return 1;
        }
        uStackY_47c = 0x404425d;
        FUN_04131a90();
        piVar6 = &uStackY_47c;
      }
    }
    else {
      if (iVar2 == 7) {
        uStackY_450 = 0x4044379;
        iVar2 = fs_SetFileTime();
        piVar4 = local_45c;
        piVar5 = local_45c;
        if (iVar2 != 0) goto LAB_04044120;
        goto LAB_04044240;
      }
      if (iVar2 - 4U < 2) {
        if (iVar2 == 5) {
          uStackY_450 = 0x404420a;
          iVar2 = VPFS_PathToPathInArchive();
          if (iVar2 != 0) {
            uStackY_450 = 0x40443f0;
            cVar1 = FUN_0404c4c0();
            if (cVar1 != '\0') {
              uStackY_450 = 0x4044485;
              FUN_0403cbc0();
              return 0;
            }
            if ((param_3 != 0) || (piVar4 = (int *)&stack0xfffffbb4, param_2 != 0)) {
              uStackY_450 = 0x404442a;
              iVar2 = FUN_0404c040();
              if (iVar2 == 0) {
                uStackY_450 = 0x40444de;
                FUN_0400a810();
              }
              if (param_2 != 0) {
                uStackY_450 = 0x4044450;
                VPFSDB_AddCreationTime();
              }
              if (param_3 != 0) {
                uStackY_450 = 0x404446e;
                VPFSDB_AddModificationTime();
              }
              uStackY_450 = 0x4044476;
              VPFSDB_ReleaseObject();
              piVar4 = (int *)&stack0xfffffbb4;
            }
            goto LAB_04044120;
          }
          if ((&DAT_04418280)[(param_1 + 0x54545454) * 8] == 5) {
            uStackY_450 = 0x404423a;
            FUN_0402cd10();
            piVar5 = (int *)&stack0xfffffbb4;
            goto LAB_04044240;
          }
        }
        goto LAB_0404419f;
      }
      uStackY_450 = 0x40440e2;
      iVar2 = FUN_0403fe00();
      if (iVar2 == 0) {
        uStackY_450 = 0x40443b4;
        FUN_0400a810();
      }
      uStackY_450 = 0x40440f8;
      cVar1 = FUN_0404c4c0();
      if (cVar1 == '\0') {
        if ((param_3 != 0) || (piVar4 = (int *)&stack0xfffffbb4, param_2 != 0)) {
          uStackY_450 = 0x4044294;
          iVar2 = FUN_0404c040();
          if (iVar2 == 0) {
            uStackY_450 = 0x40444ae;
            FUN_0400a810();
          }
          if (param_2 != 0) {
            uStackY_450 = 0x40442c1;
            VPFSDB_AddCreationTime();
          }
          if (param_3 != 0) {
            uStackY_450 = 0x40442df;
            VPFSDB_AddModificationTime();
          }
          uStackY_450 = 0x40442e7;
          VPFSDB_ReleaseObject();
          piVar4 = (int *)&stack0xfffffbb4;
        }
        goto LAB_04044120;
      }
    }
    *piVar6 = (int)&DAT_0441804c;
    piVar6[-1] = 0x404426e;
    pthread_mutex_unlock((pthread_mutex_t *)*piVar6);
  }
  return 0;
}

// --- VPFS_SetFileAttributes @0x04043740 ---
/* source: vpfs */

bool VPFS_SetFileAttributes(int param_1,uint param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  uint uVar9;
  bool bVar10;
  uint auStackY_450 [4];
  undefined1 *local_440;
  undefined1 local_41c [1036];
  
  ppuVar7 = (undefined1 **)&stack0xfffffbc4;
  bVar10 = false;
  if (param_1 == 0) {
    return false;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    local_440 = (undefined1 *)0x4043824;
    FUN_0402cd10();
    return false;
  }
  local_440 = (undefined1 *)0x404378e;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  param_1 = param_1 + 0x54545454;
  iVar3 = (&DAT_04418280)[param_1 * 8];
  ppuVar5 = (undefined1 **)&stack0xfffffbc4;
  if (iVar3 == 0) goto LAB_040437eb;
  if (iVar3 == 6) {
    local_440 = (undefined1 *)0x4043922;
    iVar3 = FUN_0403c9d0();
    if (iVar3 == 0) {
      local_440 = (undefined1 *)0x4043a0e;
      FUN_0400a810();
    }
    local_440 = (undefined1 *)0x4043932;
    uVar4 = eON_StatPath();
    ppuVar5 = &local_440;
    uVar9 = uVar4 & 0xffffffd8;
    if (uVar4 == 0x80) {
      uVar9 = 0;
      uVar4 = 0;
    }
    bVar10 = true;
    ppuVar6 = &local_440;
    puVar1 = local_41c;
    if ((param_2 & 0x27) + uVar9 == uVar4) goto LAB_040437eb;
  }
  else if (iVar3 == 7) {
    local_440 = (undefined1 *)0x404397a;
    iVar3 = FUN_0403c9d0();
    if (iVar3 == 0) {
LAB_04043984:
      bVar10 = false;
      *ppuVar7 = (undefined1 *)*(undefined4 *)(&DAT_04418284 + param_1 * 0x20);
      ppuVar7[-1] = (undefined1 *)0x4043997;
      uVar4 = eON_StatPath();
      ppuVar8 = ppuVar7 + -1;
      ppuVar5 = ppuVar7 + -1;
      if (uVar4 == 0xffffffff) goto LAB_040437eb;
    }
    else {
      local_440 = (undefined1 *)0x4043a2a;
      uVar4 = eON_StatPath();
      ppuVar8 = &local_440;
      ppuVar7 = &local_440;
      if (uVar4 == 0xffffffff) goto LAB_04043984;
    }
    uVar9 = uVar4 & 0xffffffd8;
    if (uVar4 == 0x80) {
      uVar9 = 0;
      uVar4 = 0;
    }
    uVar9 = uVar9 + (param_2 & 0x27);
    bVar10 = true;
    ppuVar5 = ppuVar8;
    if (uVar9 == uVar4) goto LAB_040437eb;
    if (iVar3 != 0) {
      ppuVar8[1] = (undefined1 *)uVar9;
      *ppuVar8 = local_41c;
      ppuVar8[-1] = (undefined1 *)0x4043a63;
      iVar3 = fs_SetFileAttributesA();
      ppuVar5 = ppuVar8 + -2;
      ppuVar8 = ppuVar8 + -2;
      if (iVar3 != 0) goto LAB_040437eb;
    }
    ppuVar8[1] = (undefined1 *)uVar9;
    *ppuVar8 = (undefined1 *)*(undefined4 *)(&DAT_04418284 + param_1 * 0x20);
    ppuVar6 = ppuVar8;
    puVar1 = local_440;
  }
  else {
    if (1 < iVar3 - 4U) {
      local_440 = (undefined1 *)0x40437d5;
      iVar3 = FUN_0403fe00();
      if (iVar3 == 0) {
        local_440 = (undefined1 *)0x4043894;
        FUN_0400a810();
      }
      bVar10 = false;
      local_440 = (undefined1 *)0x40437e7;
      cVar2 = FUN_0404c4c0();
      ppuVar5 = (undefined1 **)&stack0xfffffbc4;
      if (cVar2 == '\0') {
        local_440 = (undefined1 *)0x4043840;
        iVar3 = FUN_0404c040();
        if (iVar3 == 0) {
          local_440 = (undefined1 *)0x4043aee;
          FUN_0400a810();
        }
        bVar10 = true;
        local_440 = (undefined1 *)0x404385e;
        VPFSDB_AddAttributes();
        local_440 = (undefined1 *)0x4043866;
        VPFSDB_ReleaseObject();
        ppuVar5 = (undefined1 **)&stack0xfffffbc4;
      }
      goto LAB_040437eb;
    }
    local_440 = (undefined1 *)0x40438ae;
    uVar4 = VPFS_GetFileAttributes();
    ppuVar5 = (undefined1 **)&stack0xfffffbc4;
    if (uVar4 == 0xffffffff) goto LAB_040437eb;
    uVar9 = uVar4 & 0xffffffd8;
    if (uVar4 == 0x80) {
      uVar9 = 0;
      uVar4 = 0;
    }
    bVar10 = true;
    ppuVar5 = (undefined1 **)&stack0xfffffbc4;
    if (uVar9 + (param_2 & 0x27) == uVar4) goto LAB_040437eb;
    ppuVar6 = (undefined1 **)&stack0xfffffbc4;
    puVar1 = local_440;
    if ((&DAT_04418280)[param_1 * 8] == 5) {
      local_440 = (undefined1 *)0x4043a89;
      iVar3 = VPFS_PathToPathInArchive();
      ppuVar6 = (undefined1 **)&stack0xfffffbc4;
      puVar1 = local_440;
      if (iVar3 != 0) {
        bVar10 = false;
        local_440 = (undefined1 *)0x4043aa3;
        iVar3 = FUN_0404c040();
        ppuVar5 = (undefined1 **)&stack0xfffffbc4;
        if (iVar3 != 0) {
          bVar10 = true;
          local_440 = (undefined1 *)0x4043abd;
          VPFSDB_AddAttributes();
          local_440 = (undefined1 *)0x4043ac5;
          VPFSDB_ReleaseObject();
          ppuVar5 = (undefined1 **)&stack0xfffffbc4;
        }
        goto LAB_040437eb;
      }
    }
  }
  local_440 = puVar1;
  *(undefined4 *)((int)ppuVar6 + -4) = 0x40438fe;
  iVar3 = fs_SetFileAttributesA();
  bVar10 = iVar3 != 0;
  ppuVar5 = (undefined1 **)((int)ppuVar6 + -8);
LAB_040437eb:
  *ppuVar5 = &DAT_0441804c;
  ppuVar5[-1] = (undefined1 *)0x40437f7;
  pthread_mutex_unlock((pthread_mutex_t *)*ppuVar5);
  return bVar10;
}

// --- vpfs_0403dc90 @0x0403dc90 ---
/* source: vpfs */

undefined1 vpfs_0403dc90(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_40c [1028];
  
  iVar2 = VPFS_PathToPathInArchive();
  if (iVar2 == 0) {
    FUN_0400a810("VPFS_PathToPathInArchive( absolutePath, buffer, 1024 ) != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x96c,
                 "int VPFS_ObjectAtAbsolutePathDeleted(const char*)");
  }
  uVar1 = FUN_0404c4c0(local_40c);
  return uVar1;
}

// --- vpfs_040455c0 @0x040455c0 ---
/* source: vpfs */

undefined4 __regparm1 vpfs_040455c0(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char *__s;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint local_20;
  
  puVar7 = (undefined4 *)&stack0xfffff7a4;
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    FUN_0402cd10();
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  param_1 = param_1 + 0x54545454;
  iVar5 = (&DAT_04418280)[param_1 * 8];
  if ((((iVar5 == 4) || (iVar5 == 0)) || (iVar5 == 6)) || (iVar5 == 1)) goto LAB_040457d0;
  if (iVar5 - 2U < 2) {
    iVar5 = VPFS_ConvertToDiskFile();
    if (iVar5 == 0) {
      uVar4 = 0;
      goto LAB_040456be;
    }
  }
  else if (iVar5 == 5) {
    iVar5 = FUN_0403c9d0();
    if (iVar5 == 0) {
      FUN_0400a810();
    }
    __s = *(char **)(&DAT_04418284 + param_1 * 0x20);
    iVar5 = VPFS_PathToPathInArchive();
    if (iVar5 == 0) {
      FUN_0400a810();
    }
    cVar3 = FUN_0404c4c0();
    if (cVar3 == '\0') {
      pcVar6 = strrchr(__s,0x2f);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
        if (*__s == '\0') {
          *pcVar6 = '/';
        }
        else {
          iVar5 = VPFS_MakeSureFolderExistsOnDisk();
          *pcVar6 = '/';
          if (iVar5 == 0) {
            FUN_0402cd10();
            goto LAB_040457b0;
          }
        }
      }
      iVar5 = VPFS_ConvertDiskFileToWriteableLocation();
      if (iVar5 != 0) goto LAB_04045662;
    }
    else {
      FUN_0402cd10();
    }
LAB_040457b0:
    FUN_0402cd10();
LAB_040457d0:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    return 0;
  }
LAB_04045662:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  uVar4 = fs_WriteFile();
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  puVar1 = &DAT_0441828c + param_1 * 8;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + local_20;
  (&DAT_04418290)[param_1 * 8] = (&DAT_04418290)[param_1 * 8] + (uint)CARRY4(uVar2,local_20);
  puVar7 = (undefined4 *)&stack0xfffff790;
  if (param_2 != (uint *)0x0) {
    *param_2 = local_20;
    puVar7 = (undefined4 *)&stack0xfffff790;
  }
LAB_040456be:
  *puVar7 = &DAT_0441804c;
  puVar7[-1] = 0x40456ca;
  pthread_mutex_unlock((pthread_mutex_t *)*puVar7);
  return uVar4;
}

// --- vpfs_04045870 @0x04045870 ---
/* source: vpfs */

undefined4 __regparm3 vpfs_04045870(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char local_81c [1024];
  undefined1 local_41c [1036];
  
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    FUN_0402cd10(0xf,"Invalid handle given to VPFS_SetSize()!!");
    return 0;
  }
  param_1 = param_1 + 0x54545454;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  iVar6 = param_1 * 0x20;
  iVar2 = (&DAT_04418280)[param_1 * 8];
  if ((((iVar2 == 4) || (iVar2 == 0)) || (iVar2 == 6)) || (iVar2 == 1)) goto LAB_04045a37;
  if (iVar2 - 2U < 2) {
    iVar2 = VPFS_ConvertToDiskFile();
    if (iVar2 == 0) {
      FUN_0402cd10(0xf,"VPFS_SetSize() error - conversion to disk file failed for file \'%s\'",
                   *(undefined4 *)(&DAT_04418284 + iVar6));
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      return 0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    uVar5 = vpfs_04045870();
    return uVar5;
  }
  iVar2 = FUN_0403c9d0();
  if (iVar2 == 0) {
    pcVar3 = *(char **)(&DAT_04418284 + iVar6);
  }
  else {
    if ((&DAT_04418280)[param_1 * 8] == 5) {
      pcVar3 = *(char **)(&DAT_04418284 + iVar6);
      iVar2 = VPFS_PathToPathInArchive();
      if (iVar2 == 0) {
        FUN_0400a810("VPFS_PathToPathInArchive( absolutePath, buffer, 1024 ) != 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x96c,
                     "int VPFS_ObjectAtAbsolutePathDeleted(const char*)");
      }
      cVar1 = FUN_0404c4c0(local_41c);
      if (cVar1 == '\0') {
        pcVar4 = strrchr(pcVar3,0x2f);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
          if (*pcVar3 == '\0') {
            *pcVar4 = '/';
          }
          else {
            iVar2 = VPFS_MakeSureFolderExistsOnDisk();
            *pcVar4 = '/';
            if (iVar2 == 0) {
              FUN_0402cd10(0xf,
                           "VPFS_ConvertDiskFileToWriteableLocation() error - parent folder could not be created on disk"
                          );
              goto LAB_04045a0d;
            }
          }
        }
        iVar2 = VPFS_ConvertDiskFileToWriteableLocation();
        if (iVar2 != 0) goto LAB_04045928;
      }
      else {
        FUN_0402cd10(0xf,"VPFS_ConvertDiskFileToWriteableLocation() error - file is deleted");
      }
LAB_04045a0d:
      FUN_0402cd10(0xf,"VPFS_SetSize() error - conversion to disk file failed for file \'%s\'",
                   *(undefined4 *)(&DAT_04418284 + iVar6));
      goto LAB_04045a37;
    }
LAB_04045928:
    pcVar3 = local_81c;
  }
  iVar2 = truncate64(pcVar3,0);
  if (iVar2 != -1) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    return 1;
  }
LAB_04045a37:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  return 0;
}

// --- vpfs_04046d10 @0x04046d10 ---
/* source: vpfs */

undefined4 vpfs_04046d10(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char local_81c [1024];
  undefined1 local_41c [1036];
  
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    FUN_0402cd10(0xf,"Invalid handle given to VPFS_SetSize()!!");
    return 0;
  }
  iVar6 = param_1 + 0x54545454;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  iVar7 = iVar6 * 0x20;
  iVar2 = (&DAT_04418280)[iVar6 * 8];
  if ((((iVar2 == 4) || (iVar2 == 0)) || (iVar2 == 6)) || (iVar2 == 1)) goto LAB_04046d91;
  if (iVar2 - 2U < 2) {
    iVar2 = VPFS_ConvertToDiskFile();
    if (iVar2 == 0) {
      FUN_0402cd10(0xf,"VPFS_SetSize() error - conversion to disk file failed for file \'%s\'",
                   *(undefined4 *)(&DAT_04418284 + iVar7));
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
      return 0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    uVar4 = vpfs_04046d10(param_1 + 0x54545455U,param_2,param_3);
    return uVar4;
  }
  iVar2 = FUN_0403c9d0();
  if (iVar2 == 0) {
    pcVar3 = *(char **)(&DAT_04418284 + iVar7);
  }
  else {
    if ((&DAT_04418280)[iVar6 * 8] == 5) {
      pcVar3 = *(char **)(&DAT_04418284 + iVar7);
      iVar2 = VPFS_PathToPathInArchive();
      if (iVar2 == 0) {
        FUN_0400a810("VPFS_PathToPathInArchive( absolutePath, buffer, 1024 ) != 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp",0x96c,
                     "int VPFS_ObjectAtAbsolutePathDeleted(const char*)");
      }
      cVar1 = FUN_0404c4c0(local_41c);
      if (cVar1 == '\0') {
        pcVar5 = strrchr(pcVar3,0x2f);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
          if (*pcVar3 == '\0') {
            *pcVar5 = '/';
          }
          else {
            iVar2 = VPFS_MakeSureFolderExistsOnDisk();
            *pcVar5 = '/';
            if (iVar2 == 0) {
              FUN_0402cd10(0xf,
                           "VPFS_ConvertDiskFileToWriteableLocation() error - parent folder could not be created on disk"
                          );
              goto LAB_04046f51;
            }
          }
        }
        iVar2 = VPFS_ConvertDiskFileToWriteableLocation();
        if (iVar2 != 0) goto LAB_04046dfb;
      }
      else {
        FUN_0402cd10(0xf,"VPFS_ConvertDiskFileToWriteableLocation() error - file is deleted");
      }
LAB_04046f51:
      FUN_0402cd10(0xf,"VPFS_SetSize() error - conversion to disk file failed for file \'%s\'",
                   *(undefined4 *)(&DAT_04418284 + iVar7));
      goto LAB_04046d91;
    }
LAB_04046dfb:
    pcVar3 = local_81c;
  }
  iVar2 = truncate64(pcVar3,CONCAT44(param_3,param_2));
  if (iVar2 != -1) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    return 1;
  }
LAB_04046d91:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  return 0;
}

// --- vpfs_04046fb0 @0x04046fb0 ---
/* source: vpfs */

undefined4 vpfs_04046fb0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  char *__s;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *in_stack_00000014;
  uint local_20;
  
  puVar6 = (undefined4 *)&stack0xfffff7a4;
  uVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x2800 < param_1 + 0x54545455U) {
    FUN_0402cd10();
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  param_1 = param_1 + 0x54545454;
  iVar4 = (&DAT_04418280)[param_1 * 8];
  if ((((iVar4 == 4) || (iVar4 == 0)) || (iVar4 == 6)) || (iVar4 == 1)) goto LAB_04047013;
  if (iVar4 - 2U < 2) {
    iVar4 = VPFS_ConvertToDiskFile();
    if (iVar4 == 0) goto LAB_040470b4;
  }
  else if (iVar4 == 5) {
    iVar4 = FUN_0403c9d0();
    if (iVar4 == 0) {
      FUN_0400a810();
    }
    __s = *(char **)(&DAT_04418284 + param_1 * 0x20);
    iVar4 = VPFS_PathToPathInArchive();
    if (iVar4 == 0) {
      FUN_0400a810();
    }
    cVar3 = FUN_0404c4c0();
    if (cVar3 == '\0') {
      pcVar5 = strrchr(__s,0x2f);
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
        if (*__s == '\0') {
          *pcVar5 = '/';
        }
        else {
          iVar4 = VPFS_MakeSureFolderExistsOnDisk();
          *pcVar5 = '/';
          if (iVar4 == 0) {
            FUN_0402cd10();
            goto LAB_0404718a;
          }
        }
      }
      iVar4 = VPFS_ConvertDiskFileToWriteableLocation();
      if (iVar4 != 0) goto LAB_0404705f;
    }
    else {
      FUN_0402cd10();
    }
LAB_0404718a:
    FUN_0402cd10();
LAB_04047013:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
    return 0;
  }
LAB_0404705f:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  uVar7 = fs_WriteFile();
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  puVar1 = &DAT_0441828c + param_1 * 8;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + local_20;
  (&DAT_04418290)[param_1 * 8] = (&DAT_04418290)[param_1 * 8] + (uint)CARRY4(uVar2,local_20);
  puVar6 = (undefined4 *)&stack0xfffff790;
  if (in_stack_00000014 != (uint *)0x0) {
    *in_stack_00000014 = local_20;
    puVar6 = (undefined4 *)&stack0xfffff790;
  }
LAB_040470b4:
  *puVar6 = &DAT_0441804c;
  puVar6[-1] = 0x40470c0;
  pthread_mutex_unlock((pthread_mutex_t *)*puVar6);
  return uVar7;
}

// --- vpfs_04047220 @0x04047220 ---
/* source: vpfs */

undefined4 vpfs_04047220(char *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  char cVar7;
  char *__dest;
  undefined4 *puVar8;
  char local_1020 [2048];
  undefined1 local_820 [1024];
  char local_420 [1024];
  int local_20;
  
  sVar1 = strlen(param_1);
  if (3 < sVar1) {
    iVar2 = strcasecmp(param_1 + (sVar1 - 4),".exe");
    if (((iVar2 == 0) || (iVar2 = strcasecmp(param_1 + (sVar1 - 4),".dll"), iVar2 == 0)) ||
       (iVar2 = strcasecmp(param_1 + (sVar1 - 3),(char *)&PTR_DAT_042e5d3b), iVar2 == 0)) {
      FUN_0402cd10();
      return 0;
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
  if (*param_1 != '\0') {
    iVar2 = FUN_0403d0f0();
    if (iVar2 != 0) {
      iVar2 = FUN_0403c9d0();
      iVar3 = VPFS_FileOrFolderExists();
      puVar8 = (undefined4 *)&stack0xffffefa4;
      if (iVar3 == 0) {
        pcVar4 = strrchr(local_1020,0x2f);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
          if (local_1020[0] == '\0') {
            *pcVar4 = '/';
          }
          else {
            iVar3 = VPFS_MakeSureFolderExistsOnDisk();
            *pcVar4 = '/';
            puVar8 = (undefined4 *)&stack0xffffefa4;
            if (iVar3 == 0) goto LAB_040474ca;
          }
        }
        pcVar4 = local_1020;
        if (iVar2 != 0) {
          FUN_0403c9d0();
          pcVar4 = local_1020 + 0x400;
        }
        pcVar6 = local_420;
        __dest = pcVar6;
        if (*pcVar4 == '/') {
          local_420[0] = 'C';
          __dest = local_420 + 2;
          local_420[1] = 0x3a;
        }
        strcpy(__dest,pcVar4);
        pcVar4 = pcVar6;
        cVar7 = local_420[0];
        while (cVar7 != '\0') {
          while (cVar7 == '/') {
            *pcVar4 = '\\';
            pcVar4 = pcVar4 + 1;
            cVar7 = *pcVar4;
            if (cVar7 == '\0') goto LAB_040473cc;
          }
          pcVar4 = pcVar4 + 1;
          cVar7 = *pcVar4;
        }
LAB_040473cc:
        iVar3 = fs_CreateFileA();
        puVar8 = (undefined4 *)&stack0xffffef88;
        if (iVar3 != -1) {
          FUN_04131a90();
          pcVar4 = local_1020 + 0x400;
          if (iVar2 == 0) {
            pcVar4 = local_1020;
          }
          VPFS_MadeChangesAtPath(pcVar4);
          if (local_20 != 0) {
            iVar2 = FUN_0404c040(local_820);
            if (iVar2 == 0) {
              FUN_0400a810("dbObj");
            }
            FUN_0404c310(iVar2);
          }
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
          pcVar4 = pcVar6;
          if (local_1020[0] == '/') {
            local_420[0] = 'C';
            pcVar4 = local_420 + 2;
            local_420[1] = 0x3a;
          }
          strcpy(pcVar4,local_1020);
          uVar5 = 0;
          cVar7 = local_420[0];
          if (local_420[0] != '\0') {
            do {
              while (cVar7 == '/') {
                *pcVar6 = '\\';
                pcVar6 = pcVar6 + 1;
                cVar7 = *pcVar6;
                if (*pcVar6 == '\0') goto LAB_04047494;
              }
              pcVar6 = pcVar6 + 1;
              cVar7 = *pcVar6;
            } while (*pcVar6 != '\0');
LAB_04047494:
            uVar5 = 0;
            if (local_420[0] != '\0') {
              uVar5 = VPFS_Open();
            }
          }
          return uVar5;
        }
      }
LAB_040474ca:
      *puVar8 = &DAT_0441804c;
      puVar8[-1] = 0x40474d6;
      pthread_mutex_unlock((pthread_mutex_t *)*puVar8);
      return 0;
    }
  }
  FUN_0402cd10();
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
  return 0;
}

// --- attached helper FUN_00048720 @0x04048720 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_04048720(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  void *__src;
  uint *puVar8;
  char *__s;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 local_cf4;
  char *local_cf0;
  char *local_cec;
  undefined4 local_ce4;
  int local_ce0;
  char *local_cdc;
  char *local_cd8;
  char **local_cd4;
  int local_cbc;
  char *local_cb8;
  char *local_cb4;
  char **local_cb0;
  char local_c40 [1024];
  char local_840 [1024];
  undefined1 local_440 [1024];
  int local_40;
  uint local_3c;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  char *local_20 [4];
  
  if (DAT_04417800 != '\0') {
    FUN_0403e230();
  }
  pthread_mutexattr_init((pthread_mutexattr_t *)&DAT_04418048);
  pthread_mutexattr_settype((pthread_mutexattr_t *)&DAT_04418048,1);
  pthread_mutex_init((pthread_mutex_t *)&DAT_0441804c,(pthread_mutexattr_t *)&DAT_04418048);
  bzero(&DAT_04418080,0x200);
  bzero(&DAT_04418280,0x50000);
  _DAT_04468280 = 0x2f;
  strcpy(local_c40,param_1);
  pcVar2 = local_c40;
  while (local_c40[0] != '\0') {
    while (local_c40[0] != '\\') {
      pcVar2 = pcVar2 + 1;
      local_c40[0] = *pcVar2;
      if (local_c40[0] == '\0') goto LAB_040487e4;
    }
    *pcVar2 = '/';
    pcVar2 = pcVar2 + 1;
    local_c40[0] = *pcVar2;
  }
LAB_040487e4:
  pcVar2 = strrchr(local_c40,0x2e);
  iVar3 = strcasecmp(pcVar2,".vpfs");
  if (iVar3 != 0) {
    FUN_0402cd10();
    return 0;
  }
  pcVar2 = strrchr(local_c40,0x2f);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = getcwd(local_440,0x400);
    if (pcVar2 == (char *)0x0) {
      FUN_0402cd10();
      return 0;
    }
    if (local_440[0] != '\0') {
      pcVar2 = local_440;
      cVar1 = local_440[0];
      if ((local_440[1] == ':') && (local_440[2] == '\\')) {
        pcVar4 = local_440 + 2;
LAB_04048c33:
        if (local_440 < pcVar4) {
          sVar7 = strlen(pcVar4);
          memmove(local_440,pcVar4,sVar7 + 1);
          cVar1 = local_440[0];
          if (local_440[0] == '\0') goto LAB_04048c60;
        }
      }
      else if ((local_440[0] == '\\') && (pcVar4 = local_440 + 1, local_440[1] == '\\'))
      goto LAB_04048c33;
      do {
        if (cVar1 == '\\') {
          *pcVar2 = '/';
        }
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
LAB_04048c60:
    strcpy((char *)&DAT_04417820,local_440);
    strcpy(&DAT_04468680,local_c40);
    strcpy((char *)&DAT_04417c40,local_440);
    puVar8 = &DAT_04417c40;
    do {
      puVar9 = puVar8;
      uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar6 = uVar5 & 0x80808080;
      puVar8 = puVar9 + 1;
    } while (uVar6 == 0);
    if ((uVar5 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar9 + 6);
      uVar6 = uVar6 >> 0x10;
    }
    *(undefined2 *)((int)puVar8 + (-3 - (uint)CARRY1((byte)uVar6,(byte)uVar6))) = 0x2f;
    strcat((char *)&DAT_04417c40,local_c40);
  }
  else {
    strcpy(&DAT_04468680,pcVar2 + 1);
    getcwd(local_840,0x400);
    *pcVar2 = '\0';
    iVar3 = chdir(local_c40);
    if (iVar3 != 0) {
      FUN_0402cd10();
      return 0;
    }
    pcVar4 = getcwd(local_440,0x400);
    if (pcVar4 == (char *)0x0) {
      chdir(local_840);
      FUN_0402cd10();
      return 0;
    }
    chdir(local_840);
    if (local_440[0] != '\0') {
      pcVar4 = local_440;
      cVar1 = local_440[0];
      if ((local_440[1] == ':') && (local_440[2] == '\\')) {
        __s = local_440 + 2;
LAB_04048d0c:
        if (local_440 < __s) {
          sVar7 = strlen(__s);
          memmove(local_440,__s,sVar7 + 1);
          cVar1 = local_440[0];
          if (local_440[0] == '\0') goto LAB_0404889d;
        }
      }
      else if ((local_440[0] == '\\') && (local_440[1] == '\\')) {
        __s = local_440 + 1;
        goto LAB_04048d0c;
      }
      do {
        if (cVar1 == '\\') {
          *pcVar4 = '/';
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
LAB_0404889d:
    strcpy((char *)&DAT_04417820,local_440);
    *pcVar2 = '/';
  }
  puVar8 = &DAT_04417820;
  do {
    puVar9 = puVar8;
    uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
    uVar6 = uVar5 & 0x80808080;
    puVar8 = puVar9 + 1;
  } while (uVar6 == 0);
  if ((uVar5 & 0x8080) == 0) {
    puVar8 = (uint *)((int)puVar9 + 6);
    uVar6 = uVar6 >> 0x10;
  }
  DAT_04468a80 = (int)puVar8 + (-0x4417823 - (uint)CARRY1((byte)uVar6,(byte)uVar6));
  pcVar2 = local_c40 + DAT_04468a80;
  strcpy(local_c40,(char *)&DAT_04417820);
  pcVar2[0] = '/';
  pcVar2[1] = '\0';
  strcat(pcVar2,&DAT_04468680);
  DAT_04418080 = fs_CreateFileA();
  if (DAT_04418080 == -1) {
    DAT_04418080 = 0;
    return 0;
  }
  if (DAT_04418080 == 0) {
    return 0;
  }
  iVar3 = fs_ReadFile();
  piVar11 = (int *)&stack0xfffff354;
  puVar10 = (undefined4 *)&stack0xfffff354;
  if ((iVar3 == 0) || (puVar10 = (undefined4 *)&stack0xfffff354, local_20[0] != (char *)0x20)) {
LAB_04048bb0:
    if (DAT_04417800 == '\0') {
      return 0;
    }
    goto LAB_040489d5;
  }
  if (local_40 == 0x53465056) {
    DAT_04468a84 = local_3c;
    DAT_04468a88 = local_34;
    DAT_04418044 = local_2c;
    DAT_04468a8c = local_30;
    DAT_04468a90 = local_28;
    local_cb0 = (char **)0x4048aac;
    FUN_0403ab00();
    local_cb0 = (char **)0x4048acf;
    DAT_04468a94 = malloc((size_t)DAT_04468a88);
    if (DAT_04468a94 != (char *)0x0) {
      local_20[0] = (char *)0x0;
      local_cb0 = (char **)0x4048b13;
      iVar3 = fs_SetFilePointer();
      piVar11 = &local_cbc;
      if (iVar3 == -1) {
        local_cb4 = param_1;
        local_cb8 = "Failed to fseek() virtual filesystem from packed file : %s";
      }
      else {
        local_cb0 = local_20;
        local_cb4 = DAT_04468a88;
        local_cb8 = DAT_04468a94;
        local_cbc = DAT_04418080;
        iVar3 = fs_ReadFile();
        piVar11 = (int *)&stack0xfffff330;
        puVar13 = (undefined4 *)&stack0xfffff330;
        pcVar2 = (char *)0x0;
        if (iVar3 != 0) {
          pcVar2 = local_20[0];
        }
        if (pcVar2 == DAT_04468a88) {
          local_cd4 = (char **)0x4048d82;
          __src = malloc((size_t)DAT_04468a88);
          local_cd4 = (char **)0x4048d9f;
          FUN_0403abc0();
          local_cd4 = (char **)0x4048dbf;
          memcpy(DAT_04468a94,__src,(size_t)DAT_04468a88);
          local_cd4 = (char **)0x4048dcd;
          free(__src);
          if (DAT_04418044 == (char *)0x0) {
LAB_04048ddb:
            if (1 < DAT_04468a84) {
              uVar6 = 1;
              puVar12 = puVar13;
              do {
                puVar12[1] = &DAT_04417820;
                *puVar12 = local_c40;
                puVar12[-1] = 0x4048e3b;
                strcpy((char *)*puVar12,(char *)puVar12[1]);
                pcVar2 = local_c40 + DAT_04468a80;
                pcVar2[0] = '/';
                pcVar2[1] = '\0';
                puVar12[1] = &DAT_04468680;
                *puVar12 = pcVar2;
                puVar12[-1] = 0x4048e57;
                strcat((char *)*puVar12,(char *)puVar12[1]);
                if (uVar6 != 0) {
                  puVar12[1] = 0x2e;
                  *puVar12 = local_c40;
                  puVar12[-1] = 0x4048e6b;
                  pcVar2 = strrchr((char *)*puVar12,puVar12[1]);
                  puVar12[2] = uVar6;
                  puVar12[1] = "%d.vpfs";
                  *puVar12 = pcVar2 + 1;
                  puVar12[-1] = 0x4048e82;
                  sprintf((char *)*puVar12,(char *)puVar12[1]);
                }
                puVar12[6] = 0;
                puVar12[5] = 0x10000000;
                puVar12[4] = 3;
                puVar12[3] = 0;
                puVar12[2] = 7;
                puVar12[1] = &DAT_00120089;
                *puVar12 = local_c40;
                puVar12[-1] = 0x4048eba;
                iVar3 = fs_CreateFileA();
                puVar10 = puVar12 + -7;
                (&DAT_04418080)[uVar6] = iVar3;
                if (iVar3 == -1) {
                  (&DAT_04418080)[uVar6] = 0;
                  goto LAB_04048bb0;
                }
                puVar10 = puVar12 + -7;
                if (iVar3 == 0) goto LAB_04048bb0;
                puVar12[-3] = 0;
                puVar12[-4] = local_20;
                puVar12[-5] = 0x20;
                puVar12[-6] = &local_40;
                puVar12[-7] = iVar3;
                puVar12[-8] = 0x4048ef7;
                iVar3 = fs_ReadFile();
                puVar10 = puVar12 + -0xc;
                puVar13 = puVar12 + -0xc;
                if ((iVar3 == 0) || (puVar10 = puVar12 + -0xc, local_20[0] != (char *)0x20))
                goto LAB_04048bb0;
                if (local_40 != 0x53465056) {
                  puVar12[-10] = local_c40;
                  puVar12[-0xb] = "Packed file given does not contain proper header : %s";
LAB_04048ba3:
                  puVar12[-0xc] = 0xf;
                  puVar12[-0xd] = 0x4048baf;
                  FUN_0402cd10();
                  puVar10 = puVar12 + -0xc;
                  goto LAB_04048bb0;
                }
                if ((local_3c != DAT_04468a84) || (local_34 != (char *)0x0)) {
                  puVar12[-10] = uVar6;
                  puVar12[-0xb] =
                       "Packed file no %d header\'s info differs from first file header info";
                  goto LAB_04048ba3;
                }
                uVar6 = uVar6 + 1;
                puVar12 = puVar12 + -0xc;
              } while (uVar6 < local_3c);
            }
            puVar13[-1] = 0x404905e;
            VPFS_Config_Prepare();
            DAT_04417800 = 1;
            if (param_2 != 0) {
              *puVar13 = &DAT_04417820;
              puVar13[-1] = 0x4049078;
              VPFS_Hint_ContentsOfFolderWillNotChange();
            }
            puVar8 = (uint *)local_440;
            if ((char)DAT_04417820 == '/') {
              local_440[0] = 'C';
              puVar8 = (uint *)(local_440 + 2);
              local_440[1] = ':';
            }
            puVar13[1] = &DAT_04417820;
            *puVar13 = puVar8;
            puVar13[-1] = 0x40490a7;
            strcpy((char *)*puVar13,(char *)puVar13[1]);
            puVar8 = (uint *)local_440;
            cVar1 = local_440[0];
            while (cVar1 != '\0') {
              if (cVar1 == '/') {
                *(undefined1 *)puVar8 = 0x5c;
              }
              puVar8 = (uint *)((int)puVar8 + 1);
              cVar1 = *(char *)puVar8;
            }
            *puVar13 = local_440;
            puVar13[-1] = 0x40490dc;
            VPFS_SetCurrentDirectory();
            puVar13[1] = &DAT_04417820;
            *puVar13 = local_440;
            puVar13[-1] = 0x40490ec;
            strcpy((char *)*puVar13,(char *)puVar13[1]);
            puVar8 = (uint *)local_440;
            do {
              puVar9 = puVar8;
              uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
              uVar6 = uVar5 & 0x80808080;
              puVar8 = puVar9 + 1;
            } while (uVar6 == 0);
            if ((uVar5 & 0x8080) == 0) {
              puVar8 = (uint *)((int)puVar9 + 6);
              uVar6 = uVar6 >> 0x10;
            }
            puVar10 = (undefined4 *)((int)puVar8 + (-3 - (uint)CARRY1((byte)uVar6,(byte)uVar6)));
            *puVar10 = 0x4650562f;
            puVar10[1] = 0x65725f53;
            puVar10[2] = 0x74736967;
            puVar10[3] = 0x762e7972;
            puVar10[4] = 0x64736670;
            *(undefined2 *)(puVar10 + 5) = 0x62;
            *puVar13 = local_440;
            puVar13[-1] = 0x404914c;
            iVar3 = VPFSDB_Init();
            if (iVar3 != 0) {
              if (iVar3 != 2) {
                return 1;
              }
              puVar13[1] = 
              "Found data for different version of the game; deleting data relevant only to old version."
              ;
              *puVar13 = 0x14;
              puVar13[-1] = 0x404917a;
              FUN_0402cd10();
              puVar13[-1] = 0x404917f;
              FUN_040403d0();
              return 1;
            }
            puVar13[-1] = 0x40491c5;
            FUN_040428a0();
            *puVar13 = 0;
            puVar13[-1] = 0x40491d1;
            Exit_eON();
            return 1;
          }
          local_cd4 = (char **)0x4048f76;
          DAT_04418040 = malloc((size_t)DAT_04418044);
          if (DAT_04418040 == (char *)0x0) {
            local_cd4 = (char **)0x40491a9;
            FUN_0402cd10();
            local_cd4 = (char **)0x40491ae;
            FUN_040428a0();
            return 0;
          }
          local_20[0] = (char *)0x0;
          local_cd4 = (char **)0x4048fb3;
          iVar3 = fs_SetFilePointer();
          piVar11 = &local_ce0;
          if (iVar3 != -1) {
            local_cd4 = local_20;
            local_cd8 = DAT_04418044;
            local_cdc = DAT_04418040;
            local_ce0 = DAT_04418080;
            local_ce4 = 0x4048fed;
            iVar3 = fs_ReadFile();
            puVar13 = &local_cf4;
            pcVar2 = (char *)0x0;
            if (iVar3 != 0) {
              pcVar2 = local_20[0];
            }
            if (pcVar2 != DAT_04418044) {
              local_cf0 = "Failed to read user data from packed file : %s";
              local_cf4 = 0xf;
              local_cec = param_1;
              FUN_0402cd10();
              FUN_040428a0();
              return 0;
            }
            goto LAB_04048ddb;
          }
          local_cd8 = param_1;
          local_cdc = "Failed to fseek() user data from packed file : %s";
        }
      }
      goto LAB_040489be;
    }
    local_cb0 = (char **)0x4048f51;
    FUN_0402cd10();
    puVar10 = (undefined4 *)&stack0xfffff354;
  }
  else {
LAB_040489be:
    *piVar11 = 0xf;
    piVar11[-1] = 0x40489ca;
    FUN_0402cd10();
    puVar10 = piVar11;
  }
  if (DAT_04417800 == '\0') {
    return 0;
  }
LAB_040489d5:
  *(undefined4 *)((int)puVar10 + -4) = 0x40489e0;
  FUN_0403e230();
  return 0;
}

// --- attached helper FUN_000491e0 @0x040491e0 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __regparm3 FUN_040491e0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  void *__src;
  uint *puVar8;
  char *__s;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 local_cf4;
  char *local_cf0;
  char *local_cec;
  undefined4 local_ce4;
  int local_ce0;
  char *local_cdc;
  char *local_cd8;
  char **local_cd4;
  int local_cbc;
  char *local_cb8;
  char *local_cb4;
  char **local_cb0;
  uint *local_c50;
  char local_c40 [1024];
  char local_840 [1024];
  undefined1 local_440 [1024];
  int local_40;
  uint local_3c;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  char *local_20 [4];
  
  if (DAT_04417800 != '\0') {
    FUN_0403e230();
  }
  pthread_mutexattr_init((pthread_mutexattr_t *)&DAT_04418048);
  pthread_mutexattr_settype((pthread_mutexattr_t *)&DAT_04418048,1);
  pthread_mutex_init((pthread_mutex_t *)&DAT_0441804c,(pthread_mutexattr_t *)&DAT_04418048);
  bzero(&DAT_04418080,0x200);
  bzero(&DAT_04418280,0x50000);
  _DAT_04468280 = 0x2f;
  strcpy(local_c40,param_1);
  pcVar2 = local_c40;
  while (local_c40[0] != '\0') {
    while (local_c40[0] != '\\') {
      pcVar2 = pcVar2 + 1;
      local_c40[0] = *pcVar2;
      if (local_c40[0] == '\0') goto LAB_040492a4;
    }
    *pcVar2 = '/';
    pcVar2 = pcVar2 + 1;
    local_c40[0] = *pcVar2;
  }
LAB_040492a4:
  pcVar2 = strrchr(local_c40,0x2e);
  iVar3 = strcasecmp(pcVar2,".vpfs");
  if (iVar3 != 0) {
    FUN_0402cd10();
    return 0;
  }
  pcVar2 = strrchr(local_c40,0x2f);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = getcwd(local_440,0x400);
    if (pcVar2 == (char *)0x0) {
      FUN_0402cd10();
      return 0;
    }
    if (local_440[0] != '\0') {
      pcVar2 = local_440;
      cVar1 = local_440[0];
      if ((local_440[1] == ':') && (local_440[2] == '\\')) {
        pcVar4 = local_440 + 2;
LAB_04049713:
        if (local_440 < pcVar4) {
          sVar7 = strlen(pcVar4);
          memmove(local_440,pcVar4,sVar7 + 1);
          cVar1 = local_440[0];
          if (local_440[0] == '\0') goto LAB_04049750;
        }
      }
      else if ((local_440[0] == '\\') && (pcVar4 = local_440 + 1, local_440[1] == '\\'))
      goto LAB_04049713;
      do {
        if (cVar1 == '\\') {
          *pcVar2 = '/';
        }
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
LAB_04049750:
    strcpy((char *)&DAT_04417820,local_440);
    strcpy(&DAT_04468680,local_c40);
    strcpy((char *)&DAT_04417c40,local_440);
    puVar8 = &DAT_04417c40;
    do {
      puVar9 = puVar8;
      uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar6 = uVar5 & 0x80808080;
      puVar8 = puVar9 + 1;
    } while (uVar6 == 0);
    if ((uVar5 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar9 + 6);
      uVar6 = uVar6 >> 0x10;
    }
    *(undefined2 *)((int)puVar8 + (-3 - (uint)CARRY1((byte)uVar6,(byte)uVar6))) = 0x2f;
    strcat((char *)&DAT_04417c40,local_c40);
  }
  else {
    strcpy(&DAT_04468680,pcVar2 + 1);
    getcwd(local_840,0x400);
    *pcVar2 = '\0';
    iVar3 = chdir(local_c40);
    if (iVar3 != 0) {
      FUN_0402cd10();
      return 0;
    }
    pcVar4 = getcwd(local_440,0x400);
    if (pcVar4 == (char *)0x0) {
      chdir(local_840);
      FUN_0402cd10();
      return 0;
    }
    chdir(local_840);
    if (local_440[0] != '\0') {
      pcVar4 = local_440;
      cVar1 = local_440[0];
      if ((local_440[1] == ':') && (local_440[2] == '\\')) {
        __s = local_440 + 2;
LAB_040497ec:
        if (local_440 < __s) {
          sVar7 = strlen(__s);
          memmove(local_440,__s,sVar7 + 1);
          cVar1 = local_440[0];
          goto joined_r0x0404982e;
        }
      }
      else if ((local_440[0] == '\\') && (local_440[1] == '\\')) {
        __s = local_440 + 1;
        goto LAB_040497ec;
      }
      do {
        while (cVar1 != '\\') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
joined_r0x0404982e:
          if (cVar1 == '\0') goto LAB_040493a8;
        }
        *pcVar4 = '/';
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
LAB_040493a8:
    strcpy((char *)&DAT_04417820,local_440);
    *pcVar2 = '/';
  }
  local_c50 = (uint *)local_440;
  puVar8 = &DAT_04417820;
  do {
    puVar9 = puVar8;
    uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
    uVar6 = uVar5 & 0x80808080;
    puVar8 = puVar9 + 1;
  } while (uVar6 == 0);
  if ((uVar5 & 0x8080) == 0) {
    puVar8 = (uint *)((int)puVar9 + 6);
    uVar6 = uVar6 >> 0x10;
  }
  DAT_04468a80 = (int)puVar8 + (-0x4417823 - (uint)CARRY1((byte)uVar6,(byte)uVar6));
  pcVar2 = local_c40 + DAT_04468a80;
  strcpy(local_c40,(char *)&DAT_04417820);
  pcVar2[0] = '/';
  pcVar2[1] = '\0';
  strcat(pcVar2,&DAT_04468680);
  DAT_04418080 = fs_CreateFileA();
  if (DAT_04418080 == -1) {
    DAT_04418080 = 0;
    return 0;
  }
  if (DAT_04418080 == 0) {
    return 0;
  }
  iVar3 = fs_ReadFile();
  piVar11 = (int *)&stack0xfffff354;
  puVar10 = (undefined4 *)&stack0xfffff354;
  if ((iVar3 == 0) || (puVar10 = (undefined4 *)&stack0xfffff354, local_20[0] != (char *)0x20)) {
LAB_04049680:
    if (DAT_04417800 == '\0') {
      return 0;
    }
    goto LAB_040494e3;
  }
  if (local_40 == 0x53465056) {
    DAT_04468a84 = local_3c;
    DAT_04468a88 = local_34;
    DAT_04418044 = local_2c;
    DAT_04468a8c = local_30;
    DAT_04468a90 = local_28;
    local_cb0 = (char **)0x4049577;
    FUN_0403ab00();
    local_cb0 = (char **)0x404959a;
    DAT_04468a94 = malloc((size_t)DAT_04468a88);
    if (DAT_04468a94 != (char *)0x0) {
      local_20[0] = (char *)0x0;
      local_cb0 = (char **)0x40495de;
      iVar3 = fs_SetFilePointer();
      piVar11 = &local_cbc;
      if (iVar3 == -1) {
        local_cb8 = "Failed to fseek() virtual filesystem from packed file : %s";
        local_cb4 = param_1;
      }
      else {
        local_cb0 = local_20;
        local_cb4 = DAT_04468a88;
        local_cb8 = DAT_04468a94;
        local_cbc = DAT_04418080;
        iVar3 = fs_ReadFile();
        piVar11 = (int *)&stack0xfffff330;
        puVar13 = (undefined4 *)&stack0xfffff330;
        pcVar2 = (char *)0x0;
        if (iVar3 != 0) {
          pcVar2 = local_20[0];
        }
        if (pcVar2 == DAT_04468a88) {
          local_cd4 = (char **)0x4049894;
          __src = malloc((size_t)DAT_04468a88);
          local_cd4 = (char **)0x40498b1;
          FUN_0403abc0();
          local_cd4 = (char **)0x40498d1;
          memcpy(DAT_04468a94,__src,(size_t)DAT_04468a88);
          local_cd4 = (char **)0x40498df;
          free(__src);
          if (DAT_04418044 == (char *)0x0) {
LAB_040498ed:
            if (1 < DAT_04468a84) {
              uVar6 = 1;
              puVar12 = puVar13;
              do {
                puVar12[1] = &DAT_04417820;
                *puVar12 = local_c40;
                puVar12[-1] = 0x404994d;
                strcpy((char *)*puVar12,(char *)puVar12[1]);
                pcVar2 = local_c40 + DAT_04468a80;
                pcVar2[0] = '/';
                pcVar2[1] = '\0';
                puVar12[1] = &DAT_04468680;
                *puVar12 = pcVar2;
                puVar12[-1] = 0x4049969;
                strcat((char *)*puVar12,(char *)puVar12[1]);
                if (uVar6 != 0) {
                  puVar12[1] = 0x2e;
                  *puVar12 = local_c40;
                  puVar12[-1] = 0x404997d;
                  pcVar2 = strrchr((char *)*puVar12,puVar12[1]);
                  puVar12[2] = uVar6;
                  puVar12[1] = "%d.vpfs";
                  *puVar12 = pcVar2 + 1;
                  puVar12[-1] = 0x4049994;
                  sprintf((char *)*puVar12,(char *)puVar12[1]);
                }
                puVar12[6] = 0;
                puVar12[5] = 0x10000000;
                puVar12[4] = 3;
                puVar12[3] = 0;
                puVar12[2] = 7;
                puVar12[1] = &DAT_00120089;
                *puVar12 = local_c40;
                puVar12[-1] = 0x40499cc;
                iVar3 = fs_CreateFileA();
                puVar10 = puVar12 + -7;
                (&DAT_04418080)[uVar6] = iVar3;
                if (iVar3 == -1) {
                  (&DAT_04418080)[uVar6] = 0;
                  goto LAB_04049680;
                }
                puVar10 = puVar12 + -7;
                if (iVar3 == 0) goto LAB_04049680;
                puVar12[-3] = 0;
                puVar12[-4] = local_20;
                puVar12[-5] = 0x20;
                puVar12[-6] = &local_40;
                puVar12[-7] = iVar3;
                puVar12[-8] = 0x4049a09;
                iVar3 = fs_ReadFile();
                puVar10 = puVar12 + -0xc;
                puVar13 = puVar12 + -0xc;
                if ((iVar3 == 0) || (puVar10 = puVar12 + -0xc, local_20[0] != (char *)0x20))
                goto LAB_04049680;
                if (local_40 != 0x53465056) {
                  puVar12[-10] = local_c40;
                  puVar12[-0xb] = "Packed file given does not contain proper header : %s";
LAB_0404966b:
                  puVar12[-0xc] = 0xf;
                  puVar12[-0xd] = 0x4049677;
                  FUN_0402cd10();
                  puVar10 = puVar12 + -0xc;
                  goto LAB_04049680;
                }
                if ((local_3c != DAT_04468a84) || (local_34 != (char *)0x0)) {
                  puVar12[-10] = uVar6;
                  puVar12[-0xb] =
                       "Packed file no %d header\'s info differs from first file header info";
                  goto LAB_0404966b;
                }
                uVar6 = uVar6 + 1;
                puVar12 = puVar12 + -0xc;
              } while (uVar6 < local_3c);
            }
            puVar13[-1] = 0x4049b67;
            VPFS_Config_Prepare();
            DAT_04417800 = 1;
            *puVar13 = &DAT_04417820;
            puVar13[-1] = 0x4049b7a;
            VPFS_Hint_ContentsOfFolderWillNotChange();
            puVar8 = local_c50;
            if ((char)DAT_04417820 == '/') {
              local_440[0] = 'C';
              puVar8 = (uint *)(local_440 + 2);
              local_440[1] = ':';
            }
            puVar13[1] = &DAT_04417820;
            *puVar13 = puVar8;
            puVar13[-1] = 0x4049bad;
            strcpy((char *)*puVar13,(char *)puVar13[1]);
            puVar8 = local_c50;
            cVar1 = local_440[0];
            while (cVar1 != '\0') {
              if (cVar1 == '/') {
                *(undefined1 *)puVar8 = 0x5c;
              }
              puVar8 = (uint *)((int)puVar8 + 1);
              cVar1 = *(char *)puVar8;
            }
            *puVar13 = local_c50;
            puVar13[-1] = 0x4049be2;
            VPFS_SetCurrentDirectory();
            puVar13[1] = &DAT_04417820;
            *puVar13 = local_c50;
            puVar13[-1] = 0x4049bf8;
            strcpy((char *)*puVar13,(char *)puVar13[1]);
            puVar8 = local_c50;
            do {
              puVar9 = puVar8;
              uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
              uVar6 = uVar5 & 0x80808080;
              puVar8 = puVar9 + 1;
            } while (uVar6 == 0);
            if ((uVar5 & 0x8080) == 0) {
              puVar8 = (uint *)((int)puVar9 + 6);
              uVar6 = uVar6 >> 0x10;
            }
            puVar10 = (undefined4 *)((int)puVar8 + (-3 - (uint)CARRY1((byte)uVar6,(byte)uVar6)));
            *puVar10 = 0x4650562f;
            puVar10[1] = 0x65725f53;
            puVar10[2] = 0x74736967;
            puVar10[3] = 0x762e7972;
            puVar10[4] = 0x64736670;
            *(undefined2 *)(puVar10 + 5) = 0x62;
            *puVar13 = local_c50;
            puVar13[-1] = 0x4049c62;
            iVar3 = VPFSDB_Init();
            if (iVar3 != 0) {
              if (iVar3 != 2) {
                return 1;
              }
              puVar13[1] = 
              "Found data for different version of the game; deleting data relevant only to old version."
              ;
              *puVar13 = 0x14;
              puVar13[-1] = 0x4049c90;
              FUN_0402cd10();
              puVar13[-1] = 0x4049c95;
              FUN_040403d0();
              return 1;
            }
            puVar13[-1] = 0x4049cd5;
            FUN_040428a0();
            *puVar13 = 0;
            puVar13[-1] = 0x4049ce1;
            Exit_eON();
            return 1;
          }
          local_cd4 = (char **)0x4049a85;
          DAT_04418040 = malloc((size_t)DAT_04418044);
          if (DAT_04418040 == (char *)0x0) {
            local_cd4 = (char **)0x4049cbc;
            FUN_0402cd10();
            local_cd4 = (char **)0x4049cc1;
            FUN_040428a0();
            return 0;
          }
          local_20[0] = (char *)0x0;
          local_cd4 = (char **)0x4049ac2;
          iVar3 = fs_SetFilePointer();
          piVar11 = &local_ce0;
          if (iVar3 != -1) {
            local_cd4 = local_20;
            local_cd8 = DAT_04418044;
            local_cdc = DAT_04418040;
            local_ce0 = DAT_04418080;
            local_ce4 = 0x4049afc;
            iVar3 = fs_ReadFile();
            puVar13 = &local_cf4;
            pcVar2 = (char *)0x0;
            if (iVar3 != 0) {
              pcVar2 = local_20[0];
            }
            if (pcVar2 != DAT_04418044) {
              local_cf0 = "Failed to read user data from packed file : %s";
              local_cf4 = 0xf;
              local_cec = param_1;
              FUN_0402cd10();
              FUN_040428a0();
              return 0;
            }
            goto LAB_040498ed;
          }
          local_cdc = "Failed to fseek() user data from packed file : %s";
          local_cd8 = param_1;
        }
      }
      goto LAB_040494cc;
    }
    local_cb0 = (char **)0x4049a60;
    FUN_0402cd10();
    puVar10 = (undefined4 *)&stack0xfffff354;
  }
  else {
LAB_040494cc:
    *piVar11 = 0xf;
    piVar11[-1] = 0x40494d8;
    FUN_0402cd10();
    puVar10 = piVar11;
  }
  if (DAT_04417800 == '\0') {
    return 0;
  }
LAB_040494e3:
  *(undefined4 *)((int)puVar10 + -4) = 0x40494ee;
  FUN_0403e230();
  return 0;
}

// --- attached helper FUN_0012a830 @0x0412a830 (call-graph exclusive to this TU) ---
int * FUN_0412a830(char *param_1,uint *param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined2 local_3080;
  char local_2080;
  char local_207f [4095];
  char local_1080 [4112];
  uint local_70;
  uint local_54;
  uint local_50;
  undefined4 *local_18;
  
  puVar1 = param_2;
  local_18 = &param_1;
  puVar8 = (undefined4 *)&stack0xffffcf60;
  strcpy((char *)&local_3080,param_1);
  pcVar2 = (char *)&local_3080;
  cVar6 = (char)local_3080;
  while (cVar6 != '\0') {
    while (cVar6 == '/') {
      *pcVar2 = '\\';
      pcVar2 = pcVar2 + 1;
      cVar6 = *pcVar2;
      if (cVar6 == '\0') goto LAB_0412a88c;
    }
    pcVar2 = pcVar2 + 1;
    cVar6 = *pcVar2;
  }
LAB_0412a88c:
  strcpy(local_1080,(char *)&local_3080);
  pcVar2 = strrchr((char *)&local_3080,0x5c);
  if (pcVar2 == (char *)0x0) {
    strcpy(&local_2080,(char *)&local_3080);
    local_3080 = 0x2e;
  }
  else {
    *pcVar2 = '\0';
    strcpy(&local_2080,pcVar2 + 1);
  }
  pcVar2 = &local_2080;
  while (local_2080 != '\0') {
    if ((local_2080 == '?') || (local_2080 == '*')) {
      iVar3 = FUN_04042f10();
      if (iVar3 == 0) {
        eON_SetLastError();
        return (int *)0xffffffff;
      }
      piVar4 = malloc(0x2008);
      *piVar4 = iVar3;
      strcpy((char *)(piVar4 + 1),(char *)&local_3080);
      strcpy((char *)(piVar4 + 0x401),&local_2080);
      DAT_04515b4c = 1;
      piVar4[0x801] = 1;
      iVar3 = FUN_0412a640();
      DAT_04515b4c = 0;
      puVar8 = (undefined4 *)&stack0xffffcf58;
      if (iVar3 != 0) {
        return piVar4;
      }
      eON_VPFS_Close();
      free(piVar4);
      goto LAB_0412abe7;
    }
    pcVar2 = pcVar2 + 1;
    local_2080 = *pcVar2;
  }
  iVar3 = VPFS_GetStatIfDiskObject_Fast();
  if (iVar3 == 0) {
    iVar3 = FUN_04042f10();
    if (iVar3 == 0) {
LAB_0412abe7:
      *puVar8 = 2;
      puVar8[-1] = 0x412abf8;
      eON_SetLastError();
      return (int *)0xffffffff;
    }
    strcpy((char *)(puVar1 + 0xb),&local_2080);
    FUN_0412a370();
    uVar5 = VPFS_GetFileAttributes();
    *puVar1 = uVar5;
    uVar9 = VPFS_GetSize();
    puVar1[8] = (uint)uVar9;
    puVar1[7] = (uint)((ulonglong)uVar9 >> 0x20);
    VPFS_GetDateTime();
    eON_VPFS_Close();
    goto LAB_0412aa6d;
  }
  strcpy((char *)(puVar1 + 0xb),&local_2080);
  FUN_0412a370();
  eON_Int_TimespecToFileTime();
  eON_Int_TimespecToFileTime();
  eON_Int_TimespecToFileTime();
  uVar5 = 0;
  *puVar1 = 0;
  uVar7 = 1;
  if ((local_70 & 0x4000) != 0) {
    *puVar1 = 0x10;
    uVar7 = 0x11;
    uVar5 = 0x10;
  }
  if ((local_70 & 0x80) == 0) {
    *puVar1 = uVar7;
    uVar5 = uVar7;
LAB_0412a9b0:
    if ((uVar5 & 0x10) != 0) {
      puVar1[8] = 0;
      puVar1[7] = 0;
      goto LAB_0412aa6d;
    }
  }
  else {
    if (uVar5 != 0) goto LAB_0412a9b0;
    *puVar1 = 0x80;
  }
  puVar1[8] = local_54;
  puVar1[7] = local_50;
LAB_0412aa6d:
  puVar1[9] = 0;
  puVar1[10] = 0;
  piVar4 = malloc(0x2008);
  *piVar4 = 0;
  strcpy((char *)(piVar4 + 1),(char *)&local_3080);
  strcpy((char *)(piVar4 + 0x401),&local_2080);
  piVar4[0x801] = 1;
  return piVar4;
}

// --- attached helper FUN_001322f0 @0x041322f0 (call-graph exclusive to this TU) ---
uint FUN_041322f0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_80 [16];
  uint local_70;
  undefined4 *local_14;
  
  uVar1 = param_1;
  local_14 = &param_1;
  iVar2 = VPFS_GetStatIfDiskObject_Fast(param_1,local_80,0);
  if (iVar2 == 0) {
    iVar2 = FUN_04042f10(uVar1,0,&DAT_00120089);
    if (iVar2 == 0) {
      eON_SetLastError(3);
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = VPFS_GetFileAttributes(iVar2);
      eON_VPFS_Close(iVar2);
    }
  }
  else {
    uVar3 = ~-(uint)((local_70 & 0x4000) == 0) & 0x10;
    uVar4 = (-(uint)((local_70 & 0x4000) == 0) & 0xfffffff0) + 0x11;
    if (((local_70 & 0x80) != 0) && (uVar4 = 0x80, uVar3 != 0)) {
      uVar4 = uVar3;
    }
  }
  return uVar4;
}

// --- attached helper FUN_00132670 @0x04132670 (call-graph exclusive to this TU) ---
uint FUN_04132670(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_04042f10(param_1,0,&DAT_0012019f);
  if (iVar1 == 0) {
    eON_SetLastError(2);
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_04042870(iVar1);
    if (iVar2 == 0) {
      eON_VPFS_Close(iVar1);
      uVar3 = fs_SetFileAttributesA(param_1,param_2);
    }
    else {
      iVar2 = VPFS_SetFileAttributes(iVar1,param_2);
      eON_VPFS_Close(iVar1);
      uVar3 = (uint)(iVar2 != 0);
    }
  }
  return uVar3;
}

// --- attached helper FUN_00132930 @0x04132930 (call-graph exclusive to this TU) ---
void FUN_04132930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_04042870(param_1);
  if (iVar1 == 0) {
    FUN_04131330(param_1,param_2,param_3,param_4);
  }
  else {
    VPFS_GetDateTime(param_1,param_2,param_4,param_3);
  }
  return;
}

// --- attached helper FUN_001329c0 @0x041329c0 (call-graph exclusive to this TU) ---
void FUN_041329c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_04042870(param_1);
  if (iVar1 == 0) {
    fs_SetFileTime(param_1,param_2,param_3,param_4);
  }
  else {
    VPFS_SetDateTime(param_1,param_2,param_4,param_3);
  }
  return;
}

// --- attached helper FUN_00132c20 @0x04132c20 (call-graph exclusive to this TU) ---
void FUN_04132c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_04042870(param_1);
  if (iVar1 == 0) {
    fs_GetOverlappedResult();
  }
  else {
    VPFS_GetOverlappedResult(param_1,param_2,param_3,param_4);
  }
  return;
}

// --- attached helper FUN_001336d0 @0x041336d0 (call-graph exclusive to this TU) ---
undefined4 FUN_041336d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_24;
  int local_20 [2];
  undefined *local_18;
  undefined4 *local_10;
  
  local_10 = &param_1;
  piVar3 = local_20;
  local_18 = &DAT_0012019f;
  local_20[1] = 0;
  local_20[0] = param_1;
  local_24 = 0x4133700;
  iVar1 = FUN_04042f10();
  if (iVar1 == 0) {
    local_20[0] = 2;
    local_24 = 0x4133712;
    eON_SetLastError();
    return 0;
  }
  local_24 = 0x4133738;
  local_20[0] = iVar1;
  iVar2 = VPFS_IsFile();
  if (iVar2 == 0) {
    local_20[0] = 5;
    local_24 = 0x4133748;
    eON_SetLastError();
    piVar3 = &local_24;
  }
  else {
    local_24 = 0x4133770;
    local_20[0] = iVar1;
    iVar2 = VPFS_Delete();
    if (iVar2 != 0) {
      return 1;
    }
  }
  *piVar3 = iVar1;
  piVar3[-1] = 0x4133753;
  eON_VPFS_Close();
  return 0;
}

// --- attached helper FUN_00133970 @0x04133970 (call-graph exclusive to this TU) ---
bool FUN_04133970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_04042f10(param_1,0,&DAT_00120089);
  if (iVar1 == 0) {
    eON_SetLastError(2);
    bVar2 = false;
  }
  else {
    eON_VPFS_Close(iVar1);
    iVar1 = FUN_04042f10(param_2,0,&DAT_0012019f);
    if (iVar1 == 0) {
      iVar1 = VPFS_MoveFileOrFolder(param_1,param_2);
      bVar2 = iVar1 != 0;
    }
    else {
      eON_VPFS_Close(iVar1);
      eON_SetLastError(0xb7);
      bVar2 = false;
    }
  }
  return bVar2;
}

// --- attached helper FUN_00134010 @0x04134010 (call-graph exclusive to this TU) ---
undefined4 FUN_04134010(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_24;
  int local_20 [2];
  undefined *local_18;
  undefined4 *local_10;
  
  local_10 = &param_1;
  piVar3 = local_20;
  local_18 = &DAT_0012019f;
  local_20[1] = 0;
  local_20[0] = param_1;
  local_24 = 0x4134040;
  iVar1 = FUN_04042f10();
  if (iVar1 == 0) {
    local_20[0] = 2;
    local_24 = 0x4134052;
    eON_SetLastError();
    return 0;
  }
  local_24 = 0x4134078;
  local_20[0] = iVar1;
  iVar2 = VPFS_IsFile();
  if (iVar2 == 0) {
    local_20[0] = 5;
    local_24 = 0x4134088;
    eON_SetLastError();
    piVar3 = &local_24;
  }
  else {
    local_24 = 0x41340b0;
    local_20[0] = iVar1;
    iVar2 = VPFS_Delete();
    if (iVar2 != 0) {
      return 1;
    }
  }
  *piVar3 = iVar1;
  piVar3[-1] = 0x4134093;
  eON_VPFS_Close();
  return 0;
}

// --- attached helper FUN_001340d0 @0x041340d0 (call-graph exclusive to this TU) ---
undefined4 FUN_041340d0(void)

{
  size_t __size;
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  undefined4 uVar6;
  undefined4 local_84;
  void *local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 uStackY_64;
  
  __size = eON_WideCharToMultiByte();
  uStackY_64 = 0x413413b;
  pvVar1 = malloc(__size);
  uStackY_64 = 0x4134175;
  eON_WideCharToMultiByte();
  ppvVar5 = &local_80;
  ppvVar4 = &local_80;
  local_78 = &DAT_0012019f;
  local_7c = 0;
  local_84 = 0x4134190;
  local_80 = pvVar1;
  pvVar2 = (void *)FUN_04042f10();
  if (pvVar2 == (void *)0x0) {
    local_80 = (void *)0x2;
    local_84 = 0x41341a2;
    eON_SetLastError();
    uVar6 = 0;
    ppvVar4 = (void **)&local_84;
  }
  else {
    local_84 = 0x41341d0;
    local_80 = pvVar2;
    iVar3 = VPFS_IsFile();
    if (iVar3 == 0) {
      local_80 = (void *)0x5;
      local_84 = 0x41341e0;
      eON_SetLastError();
      ppvVar5 = (void **)&local_84;
    }
    else {
      local_84 = 0x41341f8;
      local_80 = pvVar2;
      iVar3 = VPFS_Delete();
      if (iVar3 != 0) {
        uVar6 = 1;
        goto LAB_041341a5;
      }
    }
    *ppvVar5 = pvVar2;
    uVar6 = 0;
    ppvVar5[-1] = (void *)0x41341ed;
    eON_VPFS_Close();
    ppvVar4 = ppvVar5;
  }
LAB_041341a5:
  *ppvVar4 = pvVar1;
  ppvVar4[-1] = (void *)0x41341ad;
  free(*ppvVar4);
  return uVar6;
}

