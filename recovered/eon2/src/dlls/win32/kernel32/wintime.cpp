// Recovered source: eon2/src/dlls/win32/kernel32/wintime.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_CompareFileTime @0x0415ea40 ---
/* source: wintime */

int eON_CompareFileTime(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("lpFileTime1",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/wintime.cpp"
                 ,0x1d3,"LONG eON_CompareFileTime(const FILETIME*, const FILETIME*)");
  }
  if (param_2 == (uint *)0x0) {
    FUN_0400a810("lpFileTime2",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/wintime.cpp"
                 ,0x1d4,"LONG eON_CompareFileTime(const FILETIME*, const FILETIME*)");
  }
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  iVar3 = 1;
  if ((uVar1 > uVar2 || uVar2 == uVar1) && (iVar3 = -1, uVar1 <= uVar2)) {
    iVar3 = 1;
    if (*param_1 <= *param_2) {
      iVar3 = -(uint)(*param_1 < *param_2);
    }
  }
  return iVar3;
}

