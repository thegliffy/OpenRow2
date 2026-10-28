// Recovered source: eon2/src/core/vpfs/file_split_handler.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- SplitFile_Close @0x0403c430 ---
/* source: file_split_handler */

void SplitFile_Close(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 + 0xf555556;
  if (0x3f < uVar1) {
    FUN_0400a810("( handle >= 0xF0AAAAAA ) && ( handle < 0xF0AAAAAA + 64 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/file_split_handler.cpp"
                 ,0xca,"void SplitFile_Close(size_t)");
  }
  iVar2 = uVar1 * 0x18;
  if (*(int *)(&DAT_04415c60 + iVar2) == -1) {
    FUN_0402cd10(10,"Trying to close already unused split file handle! ( %#zx )",param_1);
  }
  else if (*(FILE **)(&DAT_04415c6c + iVar2) != (FILE *)0x0) {
    fclose(*(FILE **)(&DAT_04415c6c + iVar2));
    *(undefined4 *)(&DAT_04415c6c + iVar2) = 0;
  }
  *(undefined4 *)(&DAT_04415c60 + uVar1 * 0x18) = 0xffffffff;
  return;
}

// --- SplitFile_GetStat @0x0403c510 ---
/* source: file_split_handler */

void SplitFile_GetStat(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  puVar6 = (undefined4 *)&DAT_04415cf8;
  FUN_0400a810("( splitFile > 0 ) && ( splitFile <= 4 )",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/file_split_handler.cpp"
               ,0x162,"void SplitFile_GetStat(const char*, stat*)");
  uVar3 = 0x60;
  bVar2 = false;
  if (((uint)param_2 & 1) == 0) {
    if (((uint)param_2 & 2) == 0) goto LAB_0403c559;
  }
  else {
    puVar6 = &DAT_04415cf9;
    *(undefined1 *)param_2 = DAT_04415cf8;
    param_2 = (undefined4 *)((int)param_2 + 1);
    uVar3 = 0x5f;
    bVar2 = true;
    if (((uint)param_2 & 2) == 0) goto LAB_0403c559;
    puVar6 = &DAT_04415cf9;
  }
  uVar1 = *(undefined2 *)puVar6;
  uVar3 = uVar3 - 2;
  puVar6 = (undefined4 *)((int)puVar6 + 2);
  *(undefined2 *)param_2 = uVar1;
  param_2 = (undefined4 *)((int)param_2 + 2);
LAB_0403c559:
  iVar5 = 0;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = *puVar6;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    param_2 = param_2 + (uint)bVar7 * -2 + 1;
  }
  if ((uVar3 & 2) != 0) {
    *(undefined2 *)param_2 = *(undefined2 *)puVar6;
    iVar5 = 2;
  }
  if (bVar2) {
    *(undefined1 *)((int)param_2 + iVar5) = *(undefined1 *)((int)puVar6 + iVar5);
  }
  return;
}

// --- SplitFile_GetStatFromHandle @0x0403c5d0 ---
/* source: file_split_handler */

void SplitFile_GetStatFromHandle(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  uVar5 = param_1 + 0xf555556;
  if (uVar5 < 0x40) {
    iVar4 = *(int *)(&DAT_04415c60 + uVar5 * 0x18);
  }
  else {
    FUN_0400a810("( handle >= 0xF0AAAAAA ) && ( handle < 0xF0AAAAAA + 64 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/file_split_handler.cpp"
                 ,0x16b,"void SplitFile_GetStatFromHandle(size_t, stat*)");
    iVar4 = *(int *)(&DAT_04415c60 + uVar5 * 0x18);
  }
  if (iVar4 == -1) {
    FUN_0400a810("splitFile != (size_t) -1",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/file_split_handler.cpp"
                 ,0x16e,"void SplitFile_GetStatFromHandle(size_t, stat*)");
  }
  uVar5 = 0x60;
  puVar2 = &DAT_04416260;
  bVar7 = ((uint)param_2 & 1) != 0;
  if (bVar7) {
    puVar2 = &DAT_04416261;
    *(undefined *)param_2 = (&DAT_04416260)[iVar4 * 0x568];
    param_2 = (undefined4 *)((int)param_2 + 1);
    uVar5 = 0x5f;
  }
  puVar6 = (undefined4 *)(puVar2 + iVar4 * 0x568);
  if (((uint)param_2 & 2) != 0) {
    uVar1 = *(undefined2 *)puVar6;
    uVar5 = uVar5 - 2;
    puVar6 = (undefined4 *)((int)puVar6 + 2);
    *(undefined2 *)param_2 = uVar1;
    param_2 = (undefined4 *)((int)param_2 + 2);
  }
  iVar4 = 0;
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    param_2 = param_2 + (uint)bVar8 * -2 + 1;
  }
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)param_2 = *(undefined2 *)puVar6;
    iVar4 = 2;
  }
  if (bVar7) {
    *(undefined *)((int)param_2 + iVar4) = *(undefined *)((int)puVar6 + iVar4);
  }
  return;
}

// --- attached helper FUN_001303e0 @0x041303e0 (call-graph exclusive to this TU) ---
undefined4 FUN_041303e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  stat64 local_88;
  int local_28;
  undefined1 local_24 [16];
  undefined4 *local_14;
  
  puVar2 = param_2;
  uVar1 = param_1;
  local_14 = &param_1;
  cVar3 = FUN_0403c420(param_1);
  if (cVar3 == '\0') {
    iVar4 = Synchronisation_GetObjectInfo(uVar1,&local_28,local_24);
    if (iVar4 != 0) {
      iVar4 = __fxstat64(3,*(int *)(local_28 + 4),&local_88);
      if (iVar4 == 0) goto LAB_0413041c;
    }
    eON_SetLastError(6);
    local_88.st_size._0_4_ = 0xffffffff;
  }
  else {
    SplitFile_GetStatFromHandle(uVar1,&local_88);
LAB_0413041c:
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = local_88.st_size._4_4_;
    }
  }
  return (undefined4)local_88.st_size;
}

// --- attached helper FUN_00130770 @0x04130770 (call-graph exclusive to this TU) ---
undefined4 FUN_04130770(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  stat64 local_88;
  int local_28;
  undefined1 local_24 [16];
  undefined4 *local_14;
  
  puVar1 = param_2;
  uVar3 = param_1;
  local_14 = &param_1;
  cVar2 = FUN_0403c420(param_1);
  if (cVar2 == '\0') {
    iVar4 = Synchronisation_GetObjectInfo(uVar3,&local_28,local_24);
    if (iVar4 != 0) {
      iVar4 = __fxstat64(3,*(int *)(local_28 + 4),&local_88);
      if (iVar4 == 0) goto LAB_041307ac;
    }
    eON_SetLastError(6);
    uVar3 = 0;
  }
  else {
    SplitFile_GetStatFromHandle(uVar3,&local_88);
LAB_041307ac:
    *puVar1 = (undefined4)local_88.st_size;
    uVar3 = 1;
    puVar1[1] = local_88.st_size._4_4_;
  }
  return uVar3;
}

// --- attached helper FUN_00131330 @0x04131330 (call-graph exclusive to this TU) ---
undefined4 FUN_04131330(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  stat64 local_88;
  int local_28;
  int local_24 [3];
  undefined4 *local_18;
  
  iVar4 = param_4;
  iVar3 = param_3;
  iVar2 = param_2;
  uVar1 = param_1;
  local_18 = &param_1;
  cVar5 = FUN_0403c420(param_1);
  if (cVar5 == '\0') {
    iVar6 = Synchronisation_GetObjectInfo(uVar1,&local_28,local_24);
    if ((iVar6 == 0) || (local_24[0] != 1)) {
      eON_SetLastError(6);
      return 0;
    }
    iVar6 = __fxstat64(3,*(int *)(local_28 + 4),&local_88);
    if (iVar6 == -1) {
      return 0;
    }
  }
  else {
    SplitFile_GetStatFromHandle(uVar1,&local_88);
  }
  if (iVar2 != 0) {
    eON_Int_TimespecToFileTime(&local_88.st_ctim,iVar2);
  }
  if (iVar3 != 0) {
    eON_Int_TimespecToFileTime(&local_88.st_atim,iVar3);
  }
  if (iVar4 != 0) {
    eON_Int_TimespecToFileTime(&local_88.st_mtim,iVar4);
  }
  return 1;
}

// --- attached helper FUN_00131a90 @0x04131a90 (call-graph exclusive to this TU) ---
undefined4 FUN_04131a90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0403c420(param_1);
  if (cVar1 == '\0') {
    iVar2 = Synchronisation_CloseHandle(param_1,0);
    uVar3 = 1;
    if (iVar2 == 0) {
      eON_SetLastError(6);
      uVar3 = 0;
    }
  }
  else {
    SplitFile_Close(param_1);
    uVar3 = 1;
  }
  return uVar3;
}

