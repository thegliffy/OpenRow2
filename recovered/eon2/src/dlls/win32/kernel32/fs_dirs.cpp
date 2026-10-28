// Recovered source: eon2/src/dlls/win32/kernel32/fs_dirs.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- fs_GetCurrentDirectoryA @0x0412c320 ---
/* source: fs_dirs */

char * fs_GetCurrentDirectoryA(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  char local_4010 [8192];
  uint local_2010 [2049];
  
  if (DAT_04515b50 == (char *)0x0) {
    DAT_04515b50 = malloc(0x2000);
    if (DAT_04515b50 == (char *)0x0) {
      FUN_0400a810("gCachedCwd",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_dirs.cpp"
                   ,400,"DWORD fs_GetCurrentDirectoryA(DWORD, LPSTR)");
    }
    pcVar3 = getcwd(DAT_04515b50,0x2000);
    if (pcVar3 == (char *)0x0) {
      FUN_0400a810(&PTR_DAT_04348b17,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_dirs.cpp"
                   ,0x193,"DWORD fs_GetCurrentDirectoryA(DWORD, LPSTR)");
      strcpy(local_4010,DAT_04515b50);
      piVar4 = __errno_location();
      switch(*piVar4) {
      default:
        FUN_0402cd10(0xf,"getcwd() error in GetCurrentDirectoryA() - %d (unknown error)",*piVar4);
        return (char *)0x0;
      case 2:
        FUN_0402cd10(0xf,
                     "getcwd() error in GetCurrentDirectoryA() - ENOENT (Component of the pathname no longer exists)"
                    );
        return (char *)0x0;
      case 0xc:
        FUN_0402cd10(0xf,
                     "getcwd() error in GetCurrentDirectoryA() - ENOMEM (Insufficient memory is available)"
                    );
        return (char *)0x0;
      case 0xd:
        FUN_0402cd10(0xf,
                     "getcwd() error in GetCurrentDirectoryA() - EACCES (Read or search permission was denied for a component of the pathname)"
                    );
        return (char *)0x0;
      case 0x16:
        FUN_0402cd10(0xf,
                     "getcwd() error in GetCurrentDirectoryA() - EINVAL (Size of the given buffer is zero)"
                    );
        return (char *)0x0;
      case 0x18:
        FUN_0402cd10(0xf,
                     "getcwd() error in GetCurrentDirectoryA() - EMFILE (Too many open files for the process)"
                    );
        return (char *)0x0;
      case 0x22:
        FUN_0402cd10(0xf,"getcwd() error in GetCurrentDirectoryA() - ERANGE (Buffer too small)");
        return (char *)0x0;
      }
    }
  }
  strcpy(local_4010,DAT_04515b50);
  FUN_0400f620(local_4010,local_2010);
  puVar6 = local_2010;
  do {
    puVar5 = puVar6;
    uVar1 = *puVar5 + 0xfefefeff & ~*puVar5;
    uVar2 = uVar1 & 0x80808080;
    puVar6 = puVar5 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar6 = (uint *)((int)puVar5 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  pcVar7 = (char *)((int)puVar6 + ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_2010));
  pcVar3 = pcVar7 + 1;
  if (pcVar3 <= param_1) {
    strcpy(param_2,(char *)local_2010);
    pcVar3 = pcVar7;
  }
  return pcVar3;
}

// --- fs_RemoveDirectoryA @0x0412be70 ---
/* source: fs_dirs */

undefined4 fs_RemoveDirectoryA(undefined4 param_1)

{
  char *__s;
  int iVar1;
  uint uVar2;
  uint uVar3;
  DIR *__dirp;
  dirent64 *pdVar4;
  size_t sVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  int *piVar15;
  char *pcVar16;
  bool bVar17;
  byte bVar18;
  int aiStackY_105c [2];
  int local_1038;
  void *local_1034;
  int local_1028;
  undefined1 local_1024 [4];
  undefined1 local_1020 [5];
  undefined2 uStack_101b;
  undefined1 auStack_1019 [4097];
  undefined4 *local_18;
  
  bVar18 = 0;
  local_18 = &param_1;
  local_1024 = (undefined1  [4])local_1020;
  FUN_0400f520();
  puVar11 = (uint *)local_1020;
  do {
    puVar13 = puVar11;
    uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
    uVar3 = uVar2 & 0x80808080;
    puVar11 = puVar13 + 1;
  } while (uVar3 == 0);
  uVar10 = uVar3 >> 0x10;
  puVar11 = (uint *)((int)puVar13 + 6);
  if ((uVar2 & 0x8080) != 0) {
    puVar11 = puVar13 + 1;
    uVar10 = uVar3;
  }
  iVar7 = (-3 - (uint)CARRY1((byte)uVar10,(byte)uVar10)) - (int)local_1024;
  *(undefined4 *)((int)puVar11 + (int)(local_1024 + iVar7 + 4)) = 0x53442e2f;
  *(undefined4 *)((int)puVar11 + (int)(local_1020 + iVar7 + 4)) = 0x6f74535f;
  *(undefined2 *)((int)puVar11 + (int)&uStack_101b + iVar7 + 3) = 0x6572;
  *(undefined1 *)((int)puVar11 + (int)(auStack_1019 + iVar7 + 3)) = 0;
  FUN_04134010();
  piVar8 = (int *)&stack0xffffefac;
  *(undefined1 *)((int)puVar11 + (int)(local_1024 + iVar7 + 4)) = 0;
  __dirp = opendir(local_1020);
  piVar15 = (int *)&stack0xffffefac;
  if (__dirp != (DIR *)0x0) {
    local_1034 = malloc(0x40);
    pdVar4 = readdir64(__dirp);
    if (pdVar4 == (dirent64 *)0x0) {
      closedir(__dirp);
    }
    else {
      local_1028 = 0;
      local_1038 = 0x10;
      bVar17 = false;
      do {
        __s = pdVar4->d_name;
        iVar9 = 2;
        pcVar6 = __s;
        pcVar16 = "._";
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar17 = *pcVar6 == *pcVar16;
          pcVar6 = pcVar6 + (uint)bVar18 * -2 + 1;
          pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
        } while (bVar17);
        if (bVar17) {
          if (local_1038 == local_1028) {
            iVar9 = local_1038 << 1;
            local_1034 = realloc(local_1034,local_1038 << 3);
            local_1038 = iVar9;
            if (local_1034 == (void *)0x0) {
              FUN_0400a810();
            }
          }
          sVar5 = strlen(__s);
          pcVar6 = malloc(sVar5 + 1);
          if (pcVar6 == (char *)0x0) {
            FUN_0400a810();
          }
          strcpy(pcVar6,__s);
          *(char **)((int)local_1034 + local_1028 * 4) = pcVar6;
          local_1028 = local_1028 + 1;
        }
        pdVar4 = readdir64(__dirp);
        bVar17 = pdVar4 == (dirent64 *)0x0;
      } while (!bVar17);
      closedir(__dirp);
      piVar8 = (int *)&stack0xffffefac;
      if (local_1028 != 0) {
        iVar9 = 0;
        piVar15 = (int *)&stack0xffffefac;
        do {
          puVar13 = (uint *)local_1020;
          do {
            puVar12 = puVar13;
            uVar3 = *puVar12 + 0xfefefeff & ~*puVar12;
            uVar2 = uVar3 & 0x80808080;
            puVar13 = puVar12 + 1;
          } while (uVar2 == 0);
          if ((uVar3 & 0x8080) == 0) {
            puVar13 = (uint *)((int)puVar12 + 6);
            uVar2 = uVar2 >> 0x10;
          }
          *(undefined2 *)((int)puVar13 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2))) = 0x2f;
          iVar1 = *(int *)((int)local_1034 + iVar9 * 4);
          *piVar15 = (int)local_1020;
          piVar15[1] = iVar1;
          piVar15[-1] = 0x412c076;
          strcat((char *)*piVar15,(char *)piVar15[1]);
          *piVar15 = (int)local_1020;
          piVar15[-1] = 0x412c084;
          FUN_04134010();
          *(undefined1 *)((int)puVar11 + (int)(local_1024 + iVar7 + 4)) = 0;
          iVar1 = iVar9 * 4;
          piVar8 = piVar15 + -1;
          iVar9 = iVar9 + 1;
          piVar15[-1] = *(undefined4 *)((int)local_1034 + iVar1);
          piVar15[-2] = 0x412c09d;
          free((void *)piVar15[-1]);
          piVar15 = piVar15 + -1;
        } while (iVar9 != local_1028);
      }
    }
    *piVar8 = (int)local_1034;
    piVar8[-1] = 0x412c0ad;
    free((void *)*piVar8);
    piVar15 = piVar8;
  }
  *piVar15 = (int)local_1020;
  piVar15[-1] = 0x412c0bb;
  iVar7 = rmdir((char *)*piVar15);
  uVar14 = 1;
  if (iVar7 != 0) {
    piVar15[-1] = 0x412c0c9;
    piVar8 = __errno_location();
    switch(*piVar8) {
    default:
      piVar15[2] = *piVar8;
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno unknown (%d).";
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c0e8;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 1:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: EPERM.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c268;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 2:
      *piVar15 = 2;
      piVar15[-1] = 0x412c240;
      eON_SetLastError();
      uVar14 = 0;
      break;
    case 5:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: EIO.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c2fc;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 0xd:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: EACCES.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c2d7;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 0xe:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: EFAULT.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c2b2;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 0x10:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: EBUSY.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c28d;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 0x14:
      *piVar15 = 0x10b;
      piVar15[-1] = 0x412c205;
      eON_SetLastError();
      uVar14 = 0;
      break;
    case 0x1e:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: EROFS.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c1f2;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 0x24:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: ENAMETOOLONG.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c1cd;
      FUN_0402cd10();
      uVar14 = 0;
      break;
    case 0x27:
      *piVar15 = 0x91;
      piVar15[-1] = 0x412c1a5;
      eON_SetLastError();
      uVar14 = 0;
      break;
    case 0x28:
      piVar15[1] = (int)"   rmdir( \'%s\' ) errno: ELOOP.";
      piVar15[2] = (int)local_1020;
      *piVar15 = 0xf;
      piVar15[-1] = 0x412c22d;
      FUN_0402cd10();
      uVar14 = 0;
    }
  }
  return uVar14;
}

// --- fs_SetCurrentDirectoryA @0x0412c530 ---
/* source: fs_dirs */

bool fs_SetCurrentDirectoryA(byte *param_1)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char local_1010 [4096];
  
  bVar7 = false;
  if (param_1 != (byte *)0x0) {
    bVar5 = false;
    bVar6 = *param_1 == 0;
    if (!bVar6) {
      iVar2 = 4;
      pbVar3 = param_1;
      pbVar4 = &DAT_04327cf2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      bVar7 = true;
      if ((!bVar5 && !bVar6) != bVar5) {
        FUN_0400f520(param_1,local_1010);
        iVar2 = chdir(local_1010);
        bVar7 = iVar2 == 0;
        if (DAT_04515b50 == (char *)0x0) {
          DAT_04515b50 = malloc(0x2000);
          if (DAT_04515b50 == (char *)0x0) {
            FUN_0400a810("gCachedCwd",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_dirs.cpp"
                         ,0x1f7,"WINBOOL fs_SetCurrentDirectoryA(LPCSTR)");
          }
        }
        pcVar1 = getcwd(DAT_04515b50,0x2000);
        if (pcVar1 == (char *)0x0) {
          FUN_0400a810("getcwd( gCachedCwd, gCachedCwdBufSize ) != __null",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_dirs.cpp"
                       ,0x1fa,"WINBOOL fs_SetCurrentDirectoryA(LPCSTR)");
        }
      }
    }
  }
  return bVar7;
}

