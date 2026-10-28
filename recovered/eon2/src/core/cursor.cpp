// Recovered source: eon2/src/core/cursor.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_Cursor::CursorData::FillInFromFile @0x0400f000 ---
/* source: cursor */

undefined4 eON_Cursor__CursorData__FillInFromFile(int *param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_30;
  int local_20 [4];
  
  iVar3 = eON_ReadFile(param_2,param_1,4,local_20,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_20[0] != 4) {
    return 0;
  }
  iVar3 = eON_ReadFile(param_2,param_1 + 1,4,local_20,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_20[0] != 4) {
    return 0;
  }
  iVar3 = eON_ReadFile(param_2,param_1 + 2,4,local_20,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_20[0] != 4) {
    return 0;
  }
  iVar3 = eON_ReadFile(param_2,param_1 + 3,2,local_20,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_20[0] != 2) {
    return 0;
  }
  iVar3 = eON_ReadFile(param_2,(int)param_1 + 0xe,2,local_20,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_20[0] != 2) {
    return 0;
  }
  iVar3 = eON_ReadFile(param_2,param_1 + 4,4,local_20,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_20[0] != 4) {
    return 0;
  }
  iVar3 = eON_ReadFile(param_2,param_1 + 5,4,local_20,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_20[0] != 4) {
    return 0;
  }
  cVar1 = FUN_0400e140();
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_0400e140();
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_0400e140();
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_0400e140();
  if (cVar1 == '\0') {
    return 0;
  }
  if (*param_1 != 0x28) {
    return 0;
  }
  if ((short)param_1[3] != 1) {
    return 0;
  }
  if (param_1[4] != 0) {
    return 0;
  }
  if (param_1[6] != 0) {
    return 0;
  }
  if (param_1[7] != 0) {
    return 0;
  }
  local_30 = param_1[2];
  if ((local_30 & 1) != 0) {
    return 0;
  }
  uVar2 = *(ushort *)((int)param_1 + 0xe);
  if (((ushort)(uVar2 - 1) < 2) || (uVar2 == 4)) {
LAB_0400f29c:
    if (uVar2 < 9) goto LAB_0400f2c4;
  }
  else {
    if (uVar2 != 8) {
      if ((uVar2 == 0x18) || (uVar2 == 0x20)) goto LAB_0400f2a8;
      FUN_0400a810("( BitCount == 1 ) || ( BitCount == 2 ) || ( BitCount == 4 ) || ( BitCount == 8 ) || ( BitCount == 24 ) || ( BitCount == 32 )"
                   ,"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/cursor.cpp",0x186,
                   "bool eON_Cursor::CursorData::FillInFromFile(HANDLE)");
      uVar2 = *(ushort *)((int)param_1 + 0xe);
      goto LAB_0400f29c;
    }
    uVar2 = 8;
LAB_0400f2c4:
    pvVar5 = operator_new__(4 << ((byte)uVar2 & 0x1f));
    param_1[10] = (int)pvVar5;
    cVar1 = FUN_0400e140();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  local_30 = param_1[2];
LAB_0400f2a8:
  for (uVar6 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] >> 3; (uVar6 & 3) != 0;
      uVar6 = uVar6 + 1) {
  }
  for (uVar4 = (uint)param_1[1] >> 3; (uVar4 & 3) != 0; uVar4 = uVar4 + 1) {
  }
  pvVar5 = operator_new__(uVar6 * local_30 >> 1);
  uVar7 = 0;
  param_1[0xb] = (int)pvVar5;
  cVar1 = FUN_0400e140();
  if (cVar1 != '\0') {
    pvVar5 = operator_new__(uVar4 * local_30 >> 1);
    param_1[0xc] = (int)pvVar5;
    uVar7 = FUN_0400e140();
  }
  return uVar7;
}

