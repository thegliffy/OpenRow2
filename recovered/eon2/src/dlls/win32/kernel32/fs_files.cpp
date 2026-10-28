// Recovered source: eon2/src/dlls/win32/kernel32/fs_files.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- fs_CreateFileA @0x0412ec60 ---
/* source: fs_files */

undefined4
fs_CreateFileA(byte *param_1,undefined *param_2,undefined4 param_3,undefined4 param_4,int param_5,
              uint param_6)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  int local_209c;
  char local_2084 [4096];
  char local_1084 [4096];
  stat64 local_84;
  int local_24 [3];
  undefined4 *local_18;
  
  uVar4 = param_6;
  iVar3 = param_5;
  puVar2 = param_2;
  pbVar1 = param_1;
  local_18 = &param_1;
  if (param_1 != (byte *)0x0) {
    bVar14 = false;
    bVar15 = *param_1 == 0;
    if (!bVar15) {
      iVar9 = 8;
      pbVar11 = param_1;
      pbVar12 = &DAT_0432875c;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar14 = *pbVar11 < *pbVar12;
        bVar15 = *pbVar11 == *pbVar12;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar15);
      if ((!bVar14 && !bVar15) == bVar14) {
        return 0xffffffff;
      }
      cVar5 = FUN_04132d70(param_1);
      if (cVar5 != '\0') {
        eON_SetLastError(0x7b);
        return 0xffffffff;
      }
      FUN_0400f520(pbVar1,local_2084);
      iVar9 = FUN_0403c400(local_2084);
      if (iVar9 != 0) {
        if (1 < iVar3 - 3U) {
          FUN_0400a810("( dwCreationDisposition == 4 ) || ( dwCreationDisposition == 3 )",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                       ,0x45a,
                       "void* fs_CreateFileA(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE)"
                      );
        }
        uVar6 = FUN_0403c410(local_2084);
        return uVar6;
      }
      switch(iVar3) {
      default:
        iVar13 = 0;
        iVar9 = 2;
        FUN_0402cd10(0xf,"\tWarning: unknown dwCreationDisposition flag: %u",iVar3);
        local_209c = 1;
        break;
      case 1:
        local_209c = 0x2c1;
        iVar9 = 0x2c2;
        iVar13 = 0x2c0;
        break;
      case 2:
        local_209c = 0x241;
        iVar9 = 0x242;
        iVar13 = 0x240;
        break;
      case 3:
        local_209c = 1;
        iVar9 = 2;
        iVar13 = 0;
        break;
      case 4:
        local_209c = 0x41;
        iVar9 = 0x42;
        iVar13 = 0x40;
        break;
      case 5:
        local_209c = 0x201;
        iVar9 = 0x202;
        iVar13 = 0x200;
      }
      if (((int)puVar2 < 0) || (uVar10 = (uint)puVar2 & 1, puVar2 == &DAT_00120089)) {
        uVar10 = 1;
      }
      bVar14 = ((uint)puVar2 & 0x40000002) != 0;
      if (uVar10 == 0) {
        if ((puVar2 != &DAT_00120116 && !bVar14) &&
           (local_209c = iVar13, ((uint)puVar2 & 0x180) == 0)) {
          if (puVar2 == (undefined *)0x0) {
            FUN_0402cd10(5,
                         "Game gets file handle without actually opening file. This can be used to get file attributes etc. We open file on eON side, for reading, to get the same info. We should really make sure ReadFile will fail on such file..."
                        );
          }
          else {
            FUN_0402cd10(0xf,
                         "Unrecognized access rights in fs_CreateFileA - make sure you recognize those properly ( %#x )"
                         ,puVar2);
          }
        }
      }
      else {
        local_209c = iVar13;
        if (puVar2 == &DAT_00120116 || bVar14) {
          local_209c = iVar9;
        }
      }
      local_24[0] = 0;
      uVar6 = str_icuNameFromCodePage(0);
      FUN_041d14dc("UTF-8",uVar6,local_1084,0x104,local_2084,0xffffffff,local_24);
      if (0 < local_24[0]) {
        eON_SetLastError(0x7b);
        return 0xffffffff;
      }
      if (iVar3 != 3) {
LAB_0412ee90:
        iVar9 = open64(local_1084,local_209c,0x1b4);
        if (iVar9 != -1) {
          puVar8 = malloc(0x100c);
          *puVar8 = &DAT_000fdead;
          puVar8[1] = iVar9;
          puVar8[2] = uVar4 & 0x40000000;
          strcpy((char *)(puVar8 + 3),local_2084);
          uVar6 = synchronisationPrimitives_0414a7f0(1,puVar8);
          return uVar6;
        }
        piVar7 = __errno_location();
        iVar9 = *piVar7;
        if (iVar9 == 0x18) {
          FUN_0402cd10(0xf,
                       "A file could not be opened, because there are too many open files, and OS refused to open a new one!"
                      );
        }
        if ((iVar3 == 3) || (iVar3 == 5)) {
          if (iVar9 != 2) {
            return 0xffffffff;
          }
          eON_SetLastError(2);
          return 0xffffffff;
        }
        if (iVar3 != 1) {
          return 0xffffffff;
        }
        if (iVar9 != 0x11) {
          return 0xffffffff;
        }
        eON_SetLastError(0x50);
        return 0xffffffff;
      }
      iVar9 = __xstat64(3,local_1084,&local_84);
      if (iVar9 == 0) {
        if (((local_84.st_mode._1_1_ & 0x40) == 0) || ((uVar4 & 0x2000000) != 0)) goto LAB_0412ee90;
      }
      else {
        piVar7 = __errno_location();
        if (*piVar7 != 2) {
          FUN_0402cd10(0xf,
                       "While checking if file already exists in fs_CreateFileA(), stat() error = %u"
                       ,*piVar7);
          eON_SetLastError(0x54f);
          return 0xffffffff;
        }
      }
      eON_SetLastError(2);
      return 0xffffffff;
    }
  }
  eON_SetLastError(3);
  return 0xffffffff;
}

// --- fs_GetOverlappedResult @0x04131b10 ---
/* source: fs_files */

bool fs_GetOverlappedResult(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char **ppcVar5;
  char *local_60;
  char *local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  int local_34;
  int local_2c;
  undefined4 local_28;
  int local_24 [3];
  undefined4 *local_18;
  
  piVar3 = param_3;
  piVar2 = param_2;
  uVar1 = param_1;
  local_18 = &param_1;
  local_48 = local_24;
  local_4c = (int *)0x0;
  local_50 = param_1;
  local_34 = param_4;
  local_54 = (char *)0x4131b51;
  iVar4 = Synchronisation_GetObjectInfo();
  if ((iVar4 == 0) || (local_24[0] != 1)) {
    local_50 = 6;
    local_54 = (char *)0x4131b61;
    eON_SetLastError();
    return false;
  }
  if (local_34 == 0) {
    ppcVar5 = (char **)&local_50;
    if (*piVar2 == 0x103) {
      local_50 = 0x3e4;
      local_54 = (char *)0x4131c64;
      eON_SetLastError();
      return false;
    }
  }
  else {
    ppcVar5 = (char **)&local_50;
    if (*piVar2 == 0x103) {
      if (piVar2[4] == 0) {
        local_4c = (int *)0xffffffff;
        local_50 = uVar1;
        local_54 = (char *)0x4131c80;
        eON_WaitForSingleObject();
        ppcVar5 = (char **)&local_58;
      }
      else {
        local_4c = &local_2c;
        local_28 = uVar1;
        local_44 = 0xffffffff;
        local_48 = (int *)0x0;
        local_50 = 2;
        local_54 = (char *)0x4131bf4;
        local_2c = piVar2[4];
        iVar4 = eON_WaitForMultipleObjects();
        ppcVar5 = &local_60;
        if (iVar4 != 1) {
          if ((iVar4 == 0x81) || (iVar4 == 0x80)) {
            ppcVar5 = &local_60;
            if (*piVar2 == 0x103) goto LAB_04131c12;
          }
          else {
            ppcVar5 = &local_60;
            if (iVar4 != 0) {
LAB_04131c12:
              local_54 = "WINBOOL fs_GetOverlappedResult(HANDLE, LPOVERLAPPED, LPDWORD, WINBOOL)";
              local_58 = 0xada;
              local_5c = 
              "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
              ;
              local_60 = "false";
              FUN_0400a810();
              local_60 = (char *)0x0;
              eON_SetLastError();
              return false;
            }
          }
        }
      }
    }
  }
  *piVar3 = piVar2[1];
  *ppcVar5 = (char *)*piVar2;
  ppcVar5[-1] = (char *)0x4131bad;
  eON_SetLastError();
  return *piVar2 == 0;
}

// --- fs_ReadFile @0x041304a0 ---
/* source: fs_files */

undefined1 fs_ReadFile(undefined4 param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  ssize_t sVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_28;
  int local_24;
  
  piVar7 = (int *)&stack0xffffffa0;
  piVar8 = (int *)&stack0xffffffa0;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  cVar1 = FUN_0403c420();
  if (cVar1 == '\0') {
    iVar3 = Synchronisation_GetObjectInfo();
    if ((iVar3 == 0) || (local_24 != 1)) {
      uVar2 = 0;
      eON_SetLastError();
    }
    else if (*(int *)(local_28 + 8) == 0) {
      uVar2 = 1;
      if (param_3 != 0) {
        if (param_5 != (int *)0x0) {
          uVar4 = FUN_041303e0();
          piVar8 = (int *)&stack0xffffff98;
          if (uVar4 <= (uint)param_5[2]) {
            if (param_4 == (int *)0x0) {
              return 1;
            }
            *param_4 = 0;
            return 1;
          }
          lseek64(*(int *)(local_28 + 4),(ulonglong)(uint)param_5[2],0);
        }
        piVar8[2] = param_3;
        piVar8[1] = param_2;
        *piVar8 = *(undefined4 *)(local_28 + 4);
        piVar8[-1] = 0x41306ee;
        sVar5 = read(*piVar8,(void *)piVar8[1],piVar8[2]);
        if (sVar5 == -1) {
          piVar8[-1] = 0x413070c;
          piVar6 = __errno_location();
          if (*piVar6 == 0xc) {
            *piVar8 = 8;
            uVar2 = 0;
            piVar8[-1] = 0x413075b;
            eON_SetLastError();
          }
          else {
            piVar8[2] = *piVar6;
            uVar2 = 0;
            piVar8[1] = (int)"fs_ReadFile: unhandled errno %d";
            *piVar8 = 10;
            piVar8[-1] = 0x413072d;
            FUN_0402cd10();
          }
        }
        else {
          uVar2 = 1;
          if (param_4 != (int *)0x0) {
            *param_4 = sVar5;
          }
        }
      }
    }
    else if (param_5 == (int *)0x0) {
      uVar2 = 0;
      FUN_0402cd10();
    }
    else {
      *param_5 = 0x103;
      param_5[1] = 0;
      if (param_5[4] != 0) {
        eON_ResetEvent();
        piVar7 = (int *)&stack0xffffff9c;
      }
      *piVar7 = param_1;
      piVar7[-1] = 0x413061d;
      Synchronisation_ResetOverlappedEvent();
      piVar7[6] = 0;
      piVar7[5] = 0;
      piVar7[4] = 0;
      *piVar7 = param_1;
      piVar7[3] = param_2;
      piVar7[2] = (int)param_5;
      piVar7[1] = param_3;
      piVar7[-1] = 0x4130652;
      FUN_041492d0();
      iVar3 = *param_5;
      if (iVar3 == 0x103) {
        if (param_4 != (int *)0x0) {
          *param_4 = 0;
        }
        *piVar7 = 0x3e5;
        uVar2 = 0;
        piVar7[-1] = 0x41306a8;
        eON_SetLastError();
      }
      else {
        if (param_4 != (int *)0x0) {
          *param_4 = param_5[1];
          iVar3 = *param_5;
        }
        *piVar7 = iVar3;
        piVar7[-1] = 0x4130674;
        eON_SetLastError();
        uVar2 = *param_5 == 0;
      }
    }
  }
  else {
    uVar2 = 1;
    if (param_3 != 0) {
      if (param_5 != (int *)0x0) {
        FUN_0400a810();
      }
      uVar2 = FUN_0403c4e0();
    }
  }
  return uVar2;
}

// --- fs_ReadFileEx @0x0412f790 ---
/* source: fs_files */

undefined4
fs_ReadFileEx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
             undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int local_28;
  int local_24 [3];
  undefined4 *local_18;
  
  cVar5 = param_6;
  uVar4 = param_5;
  puVar3 = param_4;
  uVar2 = param_3;
  uVar1 = param_2;
  uVar8 = param_1;
  local_18 = &param_1;
  if (param_4 == (undefined4 *)0x0) {
    FUN_0400a810("lpOverlapped",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x5e2,
                 "WINBOOL fs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  cVar6 = FUN_0403c420(uVar8);
  if (cVar6 != '\0') {
    FUN_0400a810("!SplitFile_IsHandleToSplitFile( (size_t) hFile )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x5e3,
                 "WINBOOL fs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  iVar7 = Synchronisation_GetObjectInfo(uVar8,&local_28,local_24);
  if ((iVar7 == 0) || (local_24[0] != 1)) {
    eON_SetLastError(6);
    uVar8 = 0;
  }
  else {
    if (*(int *)(local_28 + 8) == 0) {
      FUN_0400a810("handle->overlapped",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                   ,0x5ef,
                   "WINBOOL fs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                  );
    }
    *puVar3 = 0x103;
    puVar3[1] = 0;
    Synchronisation_ResetOverlappedEvent(uVar8);
    if (cVar5 == '\0') {
      eON_SetLastError(0);
      FUN_041492d0(uVar8,uVar2,puVar3,uVar1,0,uVar4,0);
      uVar8 = 1;
    }
    else {
      eON_SetLastError(0x3e5);
      FUN_041492d0(uVar8,uVar2,puVar3,uVar1,0,uVar4,1);
      uVar8 = 0;
    }
  }
  return uVar8;
}

// --- fs_SetFileAttributesA @0x04130c70 ---
/* source: fs_files */

undefined4 fs_SetFileAttributesA(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint __mode;
  char local_1080 [4096];
  stat64 local_80;
  undefined4 *local_18;
  
  uVar1 = param_2;
  uVar5 = param_1;
  local_18 = &param_1;
  FUN_0400f520(param_1,local_1080);
  iVar2 = FUN_0403c400(local_1080);
  if (iVar2 != 0) {
    FUN_0400a810("!SplitFile_Is( fileName )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x8a9,"WINBOOL fs_SetFileAttributesA(LPCSTR, DWORD)");
  }
  iVar2 = __xstat64(3,local_1080,&local_80);
  if (iVar2 == 0) {
    if (uVar1 == 0x80) {
      __mode = local_80.st_mode | 0x180;
    }
    else {
      if ((uVar1 & 0x20) != 0) {
        FUN_0402cd10(10,
                     "fs_SetFileAttributesA called to set ARCHIVE attribute on file \'%s\' - can\'t do it."
                     ,uVar5);
      }
      if ((uVar1 & 2) != 0) {
        FUN_0402cd10(10,
                     "fs_SetFileAttributesA called to set HIDDEN attribute on file \'%s\' - can\'t do it."
                     ,uVar5);
      }
      if ((uVar1 & 0x2000) != 0) {
        FUN_0402cd10(10,
                     "fs_SetFileAttributesA called to set NOT_CONTENT_INDEXED attribute on file \'%s\' - can\'t do it."
                     ,uVar5);
      }
      if ((uVar1 & 0x1000) != 0) {
        FUN_0402cd10(10,
                     "fs_SetFileAttributesA called to set OFFLINE attribute on file \'%s\' - can\'t do it."
                     ,uVar5);
      }
      if ((uVar1 & 4) != 0) {
        FUN_0402cd10(10,
                     "fs_SetFileAttributesA called to set SYSTEM attribute on file \'%s\' - can\'t do it."
                     ,uVar5);
      }
      if ((uVar1 & 0x100) != 0) {
        FUN_0402cd10(10,
                     "fs_SetFileAttributesA called to set TEMPORARY attribute on file \'%s\' - can\'t do it."
                     ,uVar5);
      }
      __mode = local_80.st_mode & 0xffffff7f;
      if ((uVar1 & 1) == 0) {
        __mode = local_80.st_mode | 0x80;
      }
    }
    uVar5 = 1;
    if ((__mode != local_80.st_mode) && (iVar2 = chmod(local_1080,__mode), iVar2 != 0)) {
      if (iVar2 != -1) {
        FUN_0400a810("result == -1",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                     ,0x8de,"WINBOOL fs_SetFileAttributesA(LPCSTR, DWORD)");
      }
      piVar3 = __errno_location();
      pcVar4 = "(unknown error)";
      uVar1 = *piVar3 - 1;
      if (uVar1 < 0x28) {
        pcVar4 = *(char **)(&DAT_04329980 + uVar1 * 4);
      }
      uVar5 = 0;
      FUN_0402cd10(0xf,"chmod( \'%s\', %#x ) returned %s (%d)!",local_1080,__mode,pcVar4,*piVar3);
    }
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 2) {
      FUN_0402cd10(10,"fs_SetFileAttributesA - stat() on \'%s\' failed with error %d",local_1080,
                   *piVar3);
    }
    uVar5 = 0;
    eON_SetLastError(2);
  }
  return uVar5;
}

// --- fs_SetFileTime @0x04131630 ---
/* source: fs_files */

bool fs_SetFileTime(char *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char **ppcVar5;
  char **ppcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  char *local_70;
  int *local_6c;
  int *local_68;
  char *local_64;
  bool local_5d;
  char local_58;
  int *local_54;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24 [3];
  undefined4 *local_18;
  
  puVar2 = param_4;
  pcVar1 = param_1;
  local_18 = &param_1;
  ppcVar5 = &local_70;
  local_54 = param_3;
  local_70 = param_1;
  uStack_74 = 0x413165f;
  cVar3 = FUN_0403c420();
  if (cVar3 != '\0') {
    local_64 = "WINBOOL fs_SetFileTime(HANDLE, const FILETIME*, const FILETIME*, const FILETIME*)";
    local_68 = (int *)0x9c3;
    local_6c = (int *)0x432896c;
    local_70 = "!SplitFile_IsHandleToSplitFile( (size_t) hFile )";
    uStack_74 = 0x4131784;
    FUN_0400a810();
  }
  local_68 = local_24;
  local_70 = pcVar1;
  local_6c = &local_28;
  uStack_74 = 0x413167d;
  iVar4 = Synchronisation_GetObjectInfo();
  if ((iVar4 == 0) || (local_24[0] != 1)) {
    local_70 = (char *)0x6;
    uStack_74 = 0x413168d;
    eON_SetLastError();
    bVar8 = false;
  }
  else {
    local_5d = local_54 != (int *)0x0;
    bVar7 = puVar2 != (undefined4 *)0x0;
    cVar3 = local_5d || bVar7;
    ppcVar6 = &local_70;
    if (local_5d || bVar7) {
      if ((puVar2 == (undefined4 *)0x0) || (local_54 == (int *)0x0)) {
        local_64 = (char *)&local_30;
        local_70 = pcVar1;
        local_68 = &local_38;
        local_6c = (int *)0x0;
        uStack_74 = 0x41317b1;
        local_58 = cVar3;
        iVar4 = FUN_04131330();
        ppcVar5 = (char **)auStack_80;
        cVar3 = local_58;
        if (iVar4 == 0) {
          return false;
        }
      }
      ppcVar6 = ppcVar5;
      if (local_5d != false) {
        local_38 = *local_54;
        local_34 = local_54[1];
      }
    }
    if (bVar7) {
      local_2c = puVar2[1];
      local_30 = *puVar2;
    }
    bVar8 = true;
    if (cVar3 != '\0') {
      if (local_5d != false) {
        ppcVar6[1] = local_48;
        *ppcVar6 = (char *)&local_38;
        ppcVar6[-1] = (char *)0x4131723;
        eON_Int_FileTimeToTimeval();
      }
      if (bVar7) {
        ppcVar6[1] = local_40;
        *ppcVar6 = (char *)&local_30;
        ppcVar6[-1] = (char *)0x4131739;
        eON_Int_FileTimeToTimeval();
      }
      ppcVar6[1] = local_48;
      *ppcVar6 = (char *)*(undefined4 *)(local_28 + 4);
      ppcVar6[-1] = (char *)0x413174b;
      iVar4 = futimes((int)*ppcVar6,(timeval *)ppcVar6[1]);
      bVar8 = iVar4 == 0;
    }
  }
  return bVar8;
}

// --- fs_WriteFile @0x0412f960 ---
/* source: fs_files */

bool fs_WriteFile(undefined4 param_1,void *param_2,size_t param_3,size_t *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  __off64_t _Var5;
  __off64_t _Var6;
  undefined4 local_74;
  uint uVar7;
  int local_28;
  int local_24;
  
  piVar4 = (int *)&stack0xffffff90;
  if (param_4 != (size_t *)0x0) {
    *param_4 = 0;
  }
  local_74 = 0x412f9ab;
  cVar1 = FUN_0403c420();
  if (cVar1 != '\0') {
    local_74 = 0x412fb04;
    FUN_0400a810();
  }
  local_74 = 0x412f9cc;
  iVar2 = Synchronisation_GetObjectInfo();
  if (iVar2 != 0) {
    if (local_24 == 3) {
      if (param_5 != (int *)0x0) {
        local_74 = 0x412fb3b;
        FUN_0400a810();
      }
      local_74 = 0x412fb46;
      eON_LogGameStdout();
      if (param_4 == (size_t *)0x0) {
        return true;
      }
      *param_4 = param_3;
      return true;
    }
    if (local_24 == 1) {
      if (*(int *)(local_28 + 8) == 0) {
        if (param_3 == 0) {
          return true;
        }
        if (param_5 != (int *)0x0) {
          uVar7 = param_5[2];
          if ((uVar7 == 0xffffffff) && (param_5[3] == -1)) {
            iVar2 = 2;
            uVar7 = 0;
          }
          else {
            iVar2 = 0;
          }
          local_74 = 0x412fba1;
          lseek64(*(int *)(local_28 + 4),(ulonglong)uVar7,iVar2);
        }
        local_74 = 0x412fbbd;
        sVar3 = write(*(int *)(local_28 + 4),param_2,param_3);
        if (param_4 == (size_t *)0x0) {
          return true;
        }
        *param_4 = sVar3;
        return true;
      }
      if (param_5 == (int *)0x0) {
        local_74 = 0x412fcbc;
        FUN_0402cd10();
        return false;
      }
      *param_5 = 0x103;
      param_5[1] = 0;
      if (param_5[4] != 0) {
        local_74 = 0x412fa21;
        eON_ResetEvent();
        piVar4 = &local_74;
      }
      *piVar4 = param_1;
      piVar4[-1] = 0x412fa2f;
      Synchronisation_ResetOverlappedEvent();
      if ((param_5[2] == -1) && (param_5[3] == -1)) {
        piVar4[3] = 1;
        piVar4[1] = 0;
        piVar4[2] = 0;
        *piVar4 = *(undefined4 *)(local_28 + 4);
        piVar4[-1] = 0x412fc40;
        _Var5 = lseek64(*piVar4,*(__off64_t *)(piVar4 + 1),piVar4[3]);
        piVar4[3] = 2;
        piVar4[1] = 0;
        piVar4[2] = 0;
        *piVar4 = *(undefined4 *)(local_28 + 4);
        piVar4[-1] = 0x412fc6a;
        _Var6 = lseek64(*piVar4,*(__off64_t *)(piVar4 + 1),piVar4[3]);
        piVar4[3] = 0;
        *(__off64_t *)(piVar4 + 1) = _Var5;
        *piVar4 = *(undefined4 *)(local_28 + 4);
        piVar4[-1] = 0x412fc8e;
        lseek64(*piVar4,*(__off64_t *)(piVar4 + 1),piVar4[3]);
        *(__off64_t *)(param_5 + 2) = _Var6;
      }
      piVar4[6] = 0;
      piVar4[5] = 0;
      piVar4[4] = 1;
      piVar4[2] = (int)param_5;
      piVar4[3] = (int)param_2;
      piVar4[1] = param_3;
      *piVar4 = param_1;
      piVar4[-1] = 0x412fa74;
      FUN_041492d0();
      iVar2 = *param_5;
      if (iVar2 != 0x103) {
        if (param_4 != (size_t *)0x0) {
          *param_4 = param_5[1];
          iVar2 = *param_5;
        }
        *piVar4 = iVar2;
        piVar4[-1] = 0x412fa9a;
        eON_SetLastError();
        return *param_5 == 0;
      }
      if (param_4 != (size_t *)0x0) {
        *param_4 = 0;
      }
      *piVar4 = 0x3e5;
      piVar4[-1] = 0x412fc06;
      eON_SetLastError();
      return false;
    }
  }
  local_74 = 0x412fabc;
  eON_SetLastError();
  return false;
}

// --- fs_files_0412e6d0 @0x0412e6d0 ---
/* source: fs_files */

void fs_files_0412e6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      undefined4 param_5,undefined1 param_6)

{
  if (param_4 == 0) {
    FUN_0400a810("lpOverlapped",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x1e2,
                 "WINBOOL vpfs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_0400a810("lpOverlapped->hEvent",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x1e3,
                 "WINBOOL vpfs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  VPFS_ReadEx(param_1,param_3,param_2,param_4,param_5,param_6);
  return;
}

// --- fs_files_0412eaa0 @0x0412eaa0 ---
/* source: fs_files */

bool fs_files_0412eaa0(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  __off64_t __length;
  int local_18 [2];
  undefined4 *local_10;
  
  uVar1 = param_1;
  local_10 = &param_1;
  iVar3 = FUN_04042870(param_1);
  if (iVar3 != 0) {
    uVar4 = VPFS_Tell();
    iVar3 = vpfs_04046d10(uVar1,uVar4);
    return iVar3 != 0;
  }
  cVar2 = FUN_0403c420(uVar1);
  if (cVar2 != '\0') {
    FUN_0400a810("!SplitFile_IsHandleToSplitFile( (size_t) hFile )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0xa03,"WINBOOL fs_SetEndOfFile(HANDLE)");
  }
  iVar3 = Synchronisation_GetObjectInfo(uVar1,local_18);
  if (iVar3 != 0) {
    __length = lseek64(*(int *)(local_18[0] + 4),0,1);
    iVar3 = ftruncate64(*(int *)(local_18[0] + 4),__length);
    return iVar3 == 0;
  }
  eON_SetLastError(6);
  return false;
}

// --- fs_files_04131860 @0x04131860 ---
/* source: fs_files */

bool fs_files_04131860(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  __off64_t __length;
  int local_18 [2];
  undefined4 *local_10;
  
  uVar1 = param_1;
  local_10 = &param_1;
  cVar2 = FUN_0403c420(param_1);
  if (cVar2 != '\0') {
    FUN_0400a810("!SplitFile_IsHandleToSplitFile( (size_t) hFile )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0xa03,"WINBOOL fs_SetEndOfFile(HANDLE)");
  }
  iVar3 = Synchronisation_GetObjectInfo(uVar1,local_18);
  if (iVar3 != 0) {
    __length = lseek64(*(int *)(local_18[0] + 4),0,1);
    iVar3 = ftruncate64(*(int *)(local_18[0] + 4),__length);
    return iVar3 == 0;
  }
  eON_SetLastError(6);
  return false;
}

// --- fs_files_04131f40 @0x04131f40 ---
/* source: fs_files */

void fs_files_04131f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      undefined4 param_5)

{
  if (param_4 == 0) {
    FUN_0400a810("lpOverlapped",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x1e2,
                 "WINBOOL vpfs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_0400a810("lpOverlapped->hEvent",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x1e3,
                 "WINBOOL vpfs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  VPFS_ReadEx(param_1,param_3,param_2,param_4,param_5,0);
  return;
}

// --- fs_files_04131ff0 @0x04131ff0 ---
/* source: fs_files */

void fs_files_04131ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      int param_5)

{
  if (param_5 == 0) {
    FUN_0400a810("lpOverlapped",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x1e2,
                 "WINBOOL vpfs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  if (*(int *)(param_5 + 0x10) == 0) {
    FUN_0400a810("lpOverlapped->hEvent",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x1e3,
                 "WINBOOL vpfs_ReadFileEx(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE, bool)"
                );
  }
  VPFS_ReadEx(param_1,param_3,param_2,param_5,0,1);
  return;
}

// --- fs_files_04132a50 @0x04132a50 ---
/* source: fs_files */

bool fs_files_04132a50(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  __off64_t __length;
  int local_18 [2];
  undefined4 *local_10;
  
  uVar1 = param_1;
  local_10 = &param_1;
  iVar3 = FUN_04042870(param_1);
  if (iVar3 != 0) {
    uVar4 = VPFS_Tell();
    iVar3 = vpfs_04046d10(uVar1,uVar4);
    return iVar3 != 0;
  }
  cVar2 = FUN_0403c420(uVar1);
  if (cVar2 != '\0') {
    FUN_0400a810("!SplitFile_IsHandleToSplitFile( (size_t) hFile )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0xa03,"WINBOOL fs_SetEndOfFile(HANDLE)");
  }
  iVar3 = Synchronisation_GetObjectInfo(uVar1,local_18);
  if (iVar3 != 0) {
    __length = lseek64(*(int *)(local_18[0] + 4),0,1);
    iVar3 = ftruncate64(*(int *)(local_18[0] + 4),__length);
    return iVar3 == 0;
  }
  eON_SetLastError(6);
  return false;
}

// --- vpfs_WriteFile @0x0412e790 ---
/* source: fs_files */

undefined4
vpfs_WriteFile(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
              int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  int local_14;
  
  iVar2 = FUN_04042870(param_1);
  if (((iVar2 != 0) || (cVar1 = FUN_0403c420(param_1), cVar1 != '\0')) ||
     (Synchronisation_GetObjectInfo(param_1,0,&local_14), local_14 != 3)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
      uVar3 = vpfs_04046fb0(param_1,param_3,param_2,param_5,&local_18);
      *param_4 = local_18;
      return uVar3;
    }
    uVar3 = vpfs_04046fb0(param_1,param_3,param_2,param_5,&local_18);
    return uVar3;
  }
  if (param_5 != 0) {
    FUN_0400a810("!lpOverlapped",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_files.cpp"
                 ,0x206,"WINBOOL vpfs_WriteFile(HANDLE, LPCVOID, DWORD, PDWORD, LPOVERLAPPED)");
  }
  eON_LogGameStdout();
  if (param_4 == (undefined4 *)0x0) {
    return 1;
  }
  *param_4 = param_3;
  return 1;
}

// --- attached helper FUN_00045da0 @0x04045da0 (call-graph exclusive to this TU) ---
int FUN_04045da0(int param_1,uint param_2,undefined4 param_3,int param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_44;
  uint uStack_40;
  int local_3c;
  undefined8 local_34;
  int local_20;
  
  iVar9 = 0;
  if (param_1 != 0) {
    if (param_1 + 0x54545455U < 0x2801) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
      iVar3 = DAT_04468a94;
      param_1 = param_1 + 0x54545454;
      iVar4 = param_1 * 0x20;
      iVar6 = (&DAT_04418280)[param_1 * 8];
      if ((iVar6 == 7) || (iVar6 == 5)) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
        iVar9 = fs_ReadFile();
        local_84 = 0x4045ffa;
        pthread_mutex_lock((pthread_mutex_t *)&DAT_0441804c);
        (&DAT_0441828c)[param_1 * 8] = (&DAT_0441828c)[param_1 * 8];
        (&DAT_04418290)[param_1 * 8] = (&DAT_04418290)[param_1 * 8];
        puVar8 = (undefined4 *)&stack0xffffff80;
        if (param_5 != (int *)0x0) {
          *param_5 = 0;
          puVar8 = (undefined4 *)&stack0xffffff80;
        }
LAB_0404600f:
        *puVar8 = &DAT_0441804c;
        puVar8[-1] = 0x404601b;
        pthread_mutex_unlock((pthread_mutex_t *)*puVar8);
        return iVar9;
      }
      if (iVar6 == 3) {
        iVar9 = (&DAT_04418288)[param_1 * 8];
        uVar1 = *(ushort *)(DAT_04468a94 + 2 + iVar9);
        *(uint *)(&DAT_0441829c + iVar4) = param_2;
        puVar10 = (uint *)(iVar9 + 0x24 + (uint)uVar1 + iVar3);
        uVar2 = *(uint *)(param_4 + 8);
        iVar9 = *(int *)(param_4 + 0xc);
        uVar5 = ((int)param_2 >> 0x1f) + iVar9 + (uint)CARRY4(param_2,uVar2);
        uVar7 = param_2;
        if ((puVar10[1] <= uVar5) && ((puVar10[1] < uVar5 || (*puVar10 < param_2 + uVar2)))) {
          uVar7 = *puVar10 - uVar2;
        }
        if ((uVar7 == 0) && (param_2 != 0)) {
          iVar9 = 1;
          if (param_5 != (int *)0x0) {
            *param_5 = 0;
          }
        }
        else {
          *(undefined4 *)(&DAT_04418298 + iVar4) = 1;
          uVar7 = puVar10[4];
          uVar5 = puVar10[5];
          *(uint *)(param_4 + 8) = uVar2 + uVar7;
          *(uint *)(param_4 + 0xc) = iVar9 + uVar5 + (uint)CARRY4(uVar2,uVar7);
          iVar9 = fs_ReadFile();
          if (param_5 != (int *)0x0) {
            *param_5 = local_20;
          }
          if (iVar9 != 0) {
            uVar2 = *(uint *)(param_4 + 8);
            iVar6 = *(int *)(param_4 + 0xc);
            uVar7 = puVar10[4];
            uVar5 = puVar10[5];
            if ((local_20 != 0) && (DAT_04468a90 != 0)) {
              local_84 = 0x4046270;
              VPFS_ArchiveRead();
            }
            *(uint *)(param_4 + 8) = uVar2 - uVar7;
            *(uint *)(param_4 + 0xc) = (iVar6 - uVar5) - (uint)(uVar2 < uVar7);
            *(undefined4 *)(&DAT_04418298 + iVar4) = 0;
          }
          local_84 = 0x40461cb;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
        }
      }
      else {
        puVar8 = (undefined4 *)&stack0xffffff94;
        if (iVar6 != 2) goto LAB_0404600f;
        uStack_40 = (&DAT_04418290)[param_1 * 8];
        puVar10 = (uint *)((&DAT_04418288)[param_1 * 8] + 0x24 +
                           (uint)*(ushort *)(DAT_04468a94 + 2 + (&DAT_04418288)[param_1 * 8]) +
                          DAT_04468a94);
        local_44 = (&DAT_0441828c)[param_1 * 8];
        uVar2 = puVar10[1];
        if ((uStack_40 < uVar2) || ((uStack_40 <= uVar2 && (local_44 < *puVar10)))) {
          if (param_4 != 0) {
            local_44 = *(uint *)(param_4 + 8);
            uStack_40 = 0;
          }
          iVar6 = puVar10[5] + uStack_40 + (uint)CARRY4(puVar10[4],local_44);
          iVar9 = fs_SetFilePointer();
          if (iVar9 == -1) {
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0441804c);
            FUN_0402cd10();
            return 0;
          }
          iVar9 = fs_ReadFile();
          local_34 = 0;
          local_3c = 0;
          if (iVar9 != 0) {
            local_3c = iVar6;
            if (iVar6 < 1) {
              local_34 = (longlong)iVar6;
            }
            else {
              if (param_4 == 0) {
                local_34._0_4_ = (&DAT_0441828c)[param_1 * 8];
                local_34._4_4_ = (&DAT_04418290)[param_1 * 8];
              }
              else {
                local_34._0_4_ = *(undefined4 *)(param_4 + 8);
                local_34._4_4_ = 0;
              }
              if (DAT_04468a90 != 0) {
                local_88 = (uint)local_34;
                local_84 = local_34._4_4_;
                local_90 = *puVar10;
                local_8c = puVar10[1];
                VPFS_ArchiveRead();
              }
              local_34 = (longlong)iVar6;
            }
          }
          puVar10 = &DAT_0441828c + param_1 * 8;
          uVar2 = *puVar10;
          *puVar10 = *puVar10 + (uint)local_34;
          (&DAT_04418290)[param_1 * 8] =
               (&DAT_04418290)[param_1 * 8] + local_34._4_4_ + (uint)CARRY4(uVar2,(uint)local_34);
          puVar10 = &local_90;
          if (param_5 != (int *)0x0) {
            *param_5 = local_3c;
            puVar10 = &local_90;
          }
        }
        else {
          (&DAT_0441828c)[param_1 * 8] = *puVar10;
          (&DAT_04418290)[param_1 * 8] = uVar2;
          puVar10 = (uint *)&stack0xffffff94;
          if (param_5 != (int *)0x0) {
            *param_5 = 0;
            puVar10 = (uint *)&stack0xffffff94;
          }
        }
        *puVar10 = (uint)&DAT_0441804c;
        iVar9 = 1;
        puVar10[-1] = 0x4046062;
        pthread_mutex_unlock((pthread_mutex_t *)*puVar10);
      }
    }
    else {
      FUN_0402cd10();
    }
  }
  return iVar9;
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

