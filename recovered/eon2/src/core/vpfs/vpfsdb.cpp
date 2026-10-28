// Recovered source: eon2/src/core/vpfs/vpfsdb.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- VPFSDB_AddAttributes @0x0404c640 ---
/* source: vpfsdb */

void VPFSDB_AddAttributes(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_0400a810("!( entry->Data.Flags & 1 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x311,
                 "void VPFSDB_AddAttributes(VPFSDBObject, uint32_t)");
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if (((uVar1 & 2) == 0) || (*(int *)(param_1 + 0x14) != param_2)) {
    DAT_04468ab8 = 1;
    *(uint *)(param_1 + 0x10) = uVar1 | 2;
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}

// --- VPFSDB_AddCreationTime @0x0404c740 ---
/* source: vpfsdb */

void VPFSDB_AddCreationTime(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    FUN_0400a810("!( entry->Data.Flags & 1 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x334,
                 "void VPFSDB_AddCreationTime(VPFSDBObject, VPFSDateTime)");
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if (((uVar2 & 8) != 0) && (iVar1 = memcmp((void *)(param_1 + 0x20),&param_2,8), iVar1 == 0)) {
    return;
  }
  DAT_04468ab8 = 1;
  *(uint *)(param_1 + 0x10) = uVar2 | 8;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return;
}

// --- VPFSDB_AddModificationTime @0x0404c870 ---
/* source: vpfsdb */

void VPFSDB_AddModificationTime(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    FUN_0400a810("!( entry->Data.Flags & 1 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x357,
                 "void VPFSDB_AddModificationTime(VPFSDBObject, VPFSDateTime)");
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if (((uVar2 & 4) != 0) && (iVar1 = memcmp((void *)(param_1 + 0x18),&param_2,8), iVar1 == 0)) {
    return;
  }
  DAT_04468ab8 = 1;
  *(uint *)(param_1 + 0x10) = uVar2 | 4;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}

// --- VPFSDB_Init @0x0404bc90 ---
/* source: vpfsdb */

int VPFSDB_Init(char *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  size_t sVar3;
  char *__dest;
  int iVar4;
  char local_24 [4];
  undefined *local_20;
  
  puVar1 = DAT_04468ab0;
  if (DAT_04468aa4 != '\0') {
    if (DAT_04468ab0 != (undefined4 *)0x0) {
      if (DAT_04468ab0[3] != 0) {
        FUN_0404b260();
      }
      if (puVar1[2] != 0) {
        FUN_0404b260();
      }
      free((void *)*puVar1);
      free(puVar1);
      DAT_04468ab0 = (undefined4 *)0x0;
    }
    if (DAT_04468aa8 != (void *)0x0) {
      free(DAT_04468aa8);
      DAT_04468aa8 = (void *)0x0;
    }
    if (DAT_04468aac != (void *)0x0) {
      free(DAT_04468aac);
    }
    DAT_04468aa4 = '\0';
  }
  builtin_strncpy(local_24,".bac",4);
  local_20 = &DAT_0070756b;
  sVar3 = strlen(param_1);
  DAT_04468aa8 = malloc(sVar3 + 1);
  strcpy(DAT_04468aa8,param_1);
  __dest = malloc(sVar3 + 8);
  DAT_04468aac = __dest;
  strcpy(__dest,param_1);
  strcat(__dest,local_24);
  iVar4 = FUN_0404b970();
  if (iVar4 == 1) {
    unlink(DAT_04468aac);
  }
  else {
    if (iVar4 == 2) {
      unlink(DAT_04468aa8);
      unlink(DAT_04468aac);
      if (DAT_04468ab0 != (undefined4 *)0x0) {
        FUN_0404b260();
        DAT_04468ab0 = (undefined4 *)0x0;
      }
      cVar2 = WriteDatabase();
      if (cVar2 == '\0') goto LAB_0404be7c;
    }
    else {
      unlink(DAT_04468aa8);
      if (iVar4 != 0) {
        FUN_0400a810("!result",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",
                     0x1ba,"int32_t VPFSDB_Init(const char*)");
      }
      iVar4 = FUN_0404b970();
      if (iVar4 == 1) {
        iVar4 = rename(DAT_04468aac,DAT_04468aa8);
        if (iVar4 == 0) {
          FUN_0402cd10(0x14,"Successfully restored VPFS database from backup");
          DAT_04468aa4 = 1;
          return 1;
        }
LAB_0404be7c:
        puVar1 = DAT_04468ab0;
        if (DAT_04468ab0 != (undefined4 *)0x0) {
          if (DAT_04468ab0[3] != 0) {
            FUN_0404b260();
          }
          if (puVar1[2] != 0) {
            FUN_0404b260();
          }
          free((void *)*puVar1);
          free(puVar1);
          DAT_04468ab0 = (undefined4 *)0x0;
        }
        if (DAT_04468aa8 != (char *)0x0) {
          free(DAT_04468aa8);
          DAT_04468aa8 = (char *)0x0;
        }
        if (DAT_04468aac != (char *)0x0) {
          free(DAT_04468aac);
          DAT_04468aac = (char *)0x0;
        }
        DAT_04468aa4 = 0;
        return 0;
      }
      unlink(DAT_04468aac);
      if (DAT_04468ab0 != (undefined4 *)0x0) {
        FUN_0404b260();
        DAT_04468ab0 = (undefined4 *)0x0;
      }
      cVar2 = WriteDatabase();
      if (cVar2 == '\0') goto LAB_0404be7c;
      if (iVar4 != 2) {
        FUN_0402cd10(0x14,"Found no valid VPFS database; created empty one.");
        DAT_04468aa4 = 1;
        return 1;
      }
    }
    FUN_0402cd10(0x14,"Found database from different game version; deleted, created empty one.");
  }
  DAT_04468aa4 = 1;
  return iVar4;
}

// --- VPFSDB_ReleaseObject @0x0404c1f0 ---
/* source: vpfsdb */

void VPFSDB_ReleaseObject(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1[4] == 0) && (param_1[2] == 0)) {
    puVar1 = (undefined4 *)param_1[1];
    if (param_1 == puVar1) {
      FUN_0400a810("entry->Parent != entry",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x24f,
                   "void VPFSDB_ReleaseObject(VPFSDBObject)");
    }
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = param_1[3];
      DAT_04468ab0 = iVar3;
    }
    else if (param_1 == (undefined4 *)puVar1[3]) {
      puVar1[3] = param_1[3];
      iVar3 = param_1[3];
    }
    else {
      if (param_1 != (undefined4 *)puVar1[2]) {
        FUN_0400a810("parent->FirstChild == entry",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",599,
                     "void VPFSDB_ReleaseObject(VPFSDBObject)");
      }
      iVar3 = param_1[3];
      puVar1[2] = iVar3;
    }
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 4) = puVar1;
    }
    free((void *)*param_1);
    free(param_1);
    DAT_04468ab8 = '\x01';
    if (puVar1 == (undefined4 *)0x0) goto LAB_0404c220;
    VPFSDB_ReleaseObject(puVar1);
  }
  if (DAT_04468ab8 == '\0') {
    return;
  }
LAB_0404c220:
  cVar2 = WriteDatabase();
  if (cVar2 != '\0') {
    return;
  }
  FUN_0402cd10(0xf,"Failed to write VPFS database! (2)");
  return;
}

// --- VPFSDB_RemoveAttributes @0x0404c6b0 ---
/* source: vpfsdb */

void VPFSDB_RemoveAttributes(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_0400a810("!( entry->Data.Flags & 1 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x31e,
                 "void VPFSDB_RemoveAttributes(VPFSDBObject)");
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 & 2) != 0) {
    DAT_04468ab8 = 1;
    *(uint *)(param_1 + 0x10) = uVar1 & 0xfffffffd;
  }
  return;
}

// --- VPFSDB_RemoveCreationTime @0x0404c7e0 ---
/* source: vpfsdb */

void VPFSDB_RemoveCreationTime(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_0400a810("!( entry->Data.Flags & 1 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x341,
                 "void VPFSDB_RemoveCreationTime(VPFSDBObject)");
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    DAT_04468ab8 = 1;
    *(uint *)(param_1 + 0x10) = uVar1 & 0xfffffff7;
  }
  return;
}

// --- VPFSDB_RemoveModificationTime @0x0404c910 ---
/* source: vpfsdb */

void VPFSDB_RemoveModificationTime(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_0400a810("!( entry->Data.Flags & 1 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x364,
                 "void VPFSDB_RemoveModificationTime(VPFSDBObject)");
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 & 4) != 0) {
    DAT_04468ab8 = 1;
    *(uint *)(param_1 + 0x10) = uVar1 & 0xfffffffb;
  }
  return;
}

// --- WriteDatabase @0x0404b060 ---
/* source: vpfsdb */

undefined4 __regparm3 WriteDatabase(char *param_1)

{
  size_t sVar1;
  int iVar2;
  ssize_t sVar3;
  size_t sVar4;
  __off64_t _Var5;
  undefined1 local_60 [64];
  size_t local_20 [4];
  
  iVar2 = open64(param_1,0x241,0x1ff);
  if (iVar2 == -1) {
    return 0;
  }
  _Var5 = lseek64(iVar2,0,2);
  if (_Var5 != 0) {
    close(iVar2);
    unlink(param_1);
    iVar2 = open64(param_1,0x241,0x1ff);
    if (iVar2 == -1) {
      return 0;
    }
    _Var5 = lseek64(iVar2,0,2);
    if (_Var5 != 0) {
      close(iVar2);
      return 0;
    }
  }
  DAT_04468ab4 = 0;
  sVar3 = write(iVar2,"VPFSDB",6);
  if (sVar3 == 6) {
    local_20[0] = FUN_0400d370(local_60,0x40);
    if (0x3e < local_20[0] - 1) {
      FUN_0400a810("verLen && ( verLen < 64 )",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0x156,
                   "bool WriteDatabase(const char*)");
    }
    sVar3 = write(iVar2,local_20,4);
    sVar1 = local_20[0];
    if ((sVar3 == 4) && (sVar4 = write(iVar2,local_60,local_20[0]), sVar1 == sVar4)) {
      WriteRecord();
      close(iVar2);
      if (DAT_04468ab4 != 0) {
        return 0;
      }
      if ((param_1 == DAT_04468aac) && (iVar2 = rename(param_1,DAT_04468aa8), iVar2 != 0)) {
        return 0;
      }
      DAT_04468ab8 = 0;
      return 1;
    }
  }
  DAT_04468ab4 = DAT_04468ab4 & 4;
  close(iVar2);
  return 0;
}

// --- WriteRecord @0x0404af30 ---
/* source: vpfsdb */

undefined4 __regparm3 WriteRecord(int param_1,undefined4 *param_2)

{
  size_t sVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  ssize_t sVar5;
  size_t sVar6;
  size_t local_24;
  undefined1 local_1d [13];
  
  uVar4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = 2;
    if (param_2[2] != 0) {
      uVar2 = 3;
    }
    local_1d[0] = param_2[2] != 0;
    if (param_2[3] != 0) {
      local_1d[0] = uVar2;
    }
    sVar5 = write(param_1,local_1d,1);
    if (sVar5 == 1) {
      local_24 = strlen((char *)*param_2);
      if (0x400 < local_24) {
        FUN_0400a810("nameLen <= 1024",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfsdb.cpp",0xbf
                     ,"bool WriteRecord(int, DbEntry*)");
      }
      sVar5 = write(param_1,&local_24,4);
      sVar1 = local_24;
      if (((sVar5 == 4) && (sVar6 = write(param_1,(void *)*param_2,local_24), sVar1 == sVar6)) &&
         (sVar5 = write(param_1,param_2 + 4,0x18), sVar5 == 0x18)) {
        cVar3 = WriteRecord();
        if (cVar3 == '\0') {
          return 0;
        }
        uVar4 = WriteRecord();
        return uVar4;
      }
    }
    DAT_04468ab4 = DAT_04468ab4 & 4;
    uVar4 = 0;
  }
  return uVar4;
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

// --- attached helper FUN_0004c310 @0x0404c310 (call-graph exclusive to this TU) ---
void FUN_0404c310(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    DAT_04468ab8 = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  VPFSDB_ReleaseObject();
  return;
}

