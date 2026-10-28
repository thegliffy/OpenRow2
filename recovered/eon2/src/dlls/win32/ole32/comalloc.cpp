// Recovered source: eon2/src/dlls/win32/ole32/comalloc.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- comalloc_0415fd50 @0x0415fd50 ---
/* source: comalloc */

undefined4 comalloc_0415fd50(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    if (DAT_0451bd84 == (int *)0x0) {
      piVar1 = operator_new(0x18);
                    /* try { // try from 0415fdb9 to 0415fdbd has its CatchHandler @ 0415fdf7 */
      MallocImp__MallocImp(piVar1);
      DAT_0451bd84 = piVar1;
      if (piVar1 == (int *)0x0) {
        FUN_0400a810("gMalloc",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ole32/comalloc.cpp"
                     ,0x30,"HRESULT eON_CoGetMalloc(DWORD, IMalloc**)");
      }
    }
    piVar1 = DAT_0451bd84;
    *param_2 = DAT_0451bd84[3];
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  return 0x57;
}

// --- comalloc_0415fe10 @0x0415fe10 ---
/* source: comalloc */

undefined4 comalloc_0415fe10(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (DAT_0451bd84 == (int *)0x0) {
    piVar2 = operator_new(0x18);
                    /* try { // try from 0415fe91 to 0415fe95 has its CatchHandler @ 0415fecf */
    MallocImp__MallocImp(piVar2);
    DAT_0451bd84 = piVar2;
    if (piVar2 == (int *)0x0) {
      FUN_0400a810("gMalloc",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ole32/comalloc.cpp"
                   ,0x30,"HRESULT eON_CoGetMalloc(DWORD, IMalloc**)");
    }
  }
  piVar2 = (int *)DAT_0451bd84[3];
  (**(code **)(*DAT_0451bd84 + 0xc))(DAT_0451bd84);
  uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,param_1);
  (**(code **)(*piVar2 + 8))(piVar2);
  return uVar1;
}

// --- comalloc_0415fef0 @0x0415fef0 ---
/* source: comalloc */

undefined4 comalloc_0415fef0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (DAT_0451bd84 == (int *)0x0) {
    piVar2 = operator_new(0x18);
                    /* try { // try from 0415ff81 to 0415ff85 has its CatchHandler @ 0415ffbf */
    MallocImp__MallocImp(piVar2);
    DAT_0451bd84 = piVar2;
    if (piVar2 == (int *)0x0) {
      FUN_0400a810("gMalloc",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ole32/comalloc.cpp"
                   ,0x30,"HRESULT eON_CoGetMalloc(DWORD, IMalloc**)");
    }
  }
  piVar2 = (int *)DAT_0451bd84[3];
  (**(code **)(*DAT_0451bd84 + 0xc))(DAT_0451bd84);
  uVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,param_1,param_2);
  (**(code **)(*piVar2 + 8))(piVar2);
  return uVar1;
}

// --- comalloc_0415ffe0 @0x0415ffe0 ---
/* source: comalloc */

void comalloc_0415ffe0(undefined4 param_1)

{
  int *piVar1;
  
  if (DAT_0451bd84 == (int *)0x0) {
    piVar1 = operator_new(0x18);
                    /* try { // try from 04160059 to 0416005d has its CatchHandler @ 04160097 */
    MallocImp__MallocImp(piVar1);
    DAT_0451bd84 = piVar1;
    if (piVar1 == (int *)0x0) {
      FUN_0400a810("gMalloc",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ole32/comalloc.cpp"
                   ,0x30,"HRESULT eON_CoGetMalloc(DWORD, IMalloc**)");
    }
  }
  piVar1 = (int *)DAT_0451bd84[3];
  (**(code **)(*DAT_0451bd84 + 0xc))(DAT_0451bd84);
  (**(code **)(*piVar1 + 0x14))(piVar1,param_1);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}

// --- attached helper FUN_0016a730 @0x0416a730 (call-graph exclusive to this TU) ---
ushort * __regparm3 FUN_0416a730(char *param_1)

{
  bool bVar1;
  char cVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  
  iVar6 = 2;
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    iVar5 = 0;
    bVar1 = true;
    iVar10 = 0;
    pcVar7 = param_1;
    do {
      while (cVar2 != '\\') {
        iVar5 = iVar5 + 1;
        bVar1 = false;
LAB_0416a75d:
        pcVar7 = pcVar7 + 1;
        cVar2 = *pcVar7;
        if (cVar2 == '\0') goto LAB_0416a788;
      }
      if (bVar1) {
        bVar1 = true;
        goto LAB_0416a75d;
      }
      pcVar7 = pcVar7 + 1;
      iVar10 = iVar10 + 1;
      bVar1 = true;
      cVar2 = *pcVar7;
    } while (cVar2 != '\0');
    bVar1 = true;
LAB_0416a788:
    iVar6 = iVar5 + iVar10 * 3 + 5;
    if (bVar1) {
      iVar6 = iVar5 + 2 + iVar10 * 3;
    }
  }
  puVar3 = (ushort *)comalloc_0415fe10(iVar6);
  if (puVar3 != (ushort *)0x0) {
    cVar2 = *param_1;
    puVar9 = puVar3;
    if (cVar2 != '\0') {
      uVar4 = 0;
      do {
        while (cVar2 != '\\') {
          uVar8 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(char *)((int)puVar9 + uVar8 + 2) = *param_1;
LAB_0416a7cf:
          param_1 = param_1 + 1;
          cVar2 = *param_1;
          if (cVar2 == '\0') goto LAB_0416a808;
        }
        if (uVar4 == 0) goto LAB_0416a7cf;
        param_1 = param_1 + 1;
        *puVar9 = uVar4 + 1;
        *(undefined1 *)((int)puVar9 + uVar4 + 2) = 0;
        puVar9 = (ushort *)((int)puVar9 + (ushort)(uVar4 + 1) + 2);
        uVar4 = 0;
        cVar2 = *param_1;
      } while (cVar2 != '\0');
LAB_0416a808:
      if (uVar4 != 0) {
        *puVar9 = uVar4 + 1;
        *(undefined1 *)((int)puVar9 + uVar4 + 2) = 0;
        puVar9 = (ushort *)((int)puVar9 + (ushort)(uVar4 + 1) + 2);
      }
    }
    *puVar9 = 0;
  }
  return puVar3;
}

