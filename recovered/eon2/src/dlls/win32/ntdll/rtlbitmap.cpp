// Recovered source: eon2/src/dlls/win32/ntdll/rtlbitmap.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_RtlAreBitsClear @0x0415fa00 ---
/* source: rtlbitmap */

undefined4 eON_RtlAreBitsClear(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x5b,"BOOLEAN eON_RtlAreBitsClear(PCRTL_BITMAP, ULONG, ULONG)");
  }
  else if ((param_3 != 0) && ((uint)(param_3 + param_2) <= *param_1)) {
    uVar1 = mapOfBits_0402e160(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

// --- eON_RtlAreBitsSet @0x0415f970 ---
/* source: rtlbitmap */

undefined4 eON_RtlAreBitsSet(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x4b,"BOOLEAN eON_RtlAreBitsSet(PCRTL_BITMAP, ULONG, ULONG)");
  }
  else if ((param_3 != 0) && ((uint)(param_3 + param_2) <= *param_1)) {
    uVar1 = mapOfBits_0402e0a0(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

// --- eON_RtlClearAllBits @0x0415f810 ---
/* source: rtlbitmap */

void eON_RtlClearAllBits(int param_1)

{
  if (param_1 != 0) {
    FUN_0402de20(param_1);
    return;
  }
  FUN_0400a810("BitMapHeader",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp",
               0x1f,"void eON_RtlClearAllBits(PRTL_BITMAP)");
  FUN_0402de20(0);
  return;
}

// --- eON_RtlClearBits @0x0415f8f0 ---
/* source: rtlbitmap */

void eON_RtlClearBits(uint *param_1,int param_2,int param_3)

{
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x3a,"void eON_RtlClearBits(PRTL_BITMAP, ULONG, ULONG)");
  }
  else if ((param_3 != 0) && ((uint)(param_3 + param_2) <= *param_1)) {
    eON_MapOfBits__ClearRange(param_1,param_2,param_3);
    return;
  }
  return;
}

// --- eON_RtlFindClearBits @0x0415fb00 ---
/* source: rtlbitmap */

undefined4 eON_RtlFindClearBits(uint *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x7b,"ULONG eON_RtlFindClearBits(PCRTL_BITMAP, ULONG, ULONG)");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((param_2 != 0) && (param_2 <= *param_1)) {
      uVar1 = eON_MapOfBits__FindClearRange(param_1,param_2,param_3);
    }
  }
  return uVar1;
}

// --- eON_RtlFindClearBitsAndSet @0x0415fc10 ---
/* source: rtlbitmap */

int eON_RtlFindClearBitsAndSet(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x99,"ULONG eON_RtlFindClearBitsAndSet(PRTL_BITMAP, ULONG, ULONG)");
    iVar1 = -1;
  }
  else {
    iVar1 = -1;
    if ((param_2 != 0) && (param_2 <= *param_1)) {
      iVar1 = eON_MapOfBits__FindClearRange(param_1,param_2,param_3);
      if (iVar1 != -1) {
        eON_MapOfBits__SetRange(param_1,iVar1,param_2);
      }
    }
  }
  return iVar1;
}

// --- eON_RtlFindSetBits @0x0415fa90 ---
/* source: rtlbitmap */

undefined4 eON_RtlFindSetBits(uint *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x6b,"ULONG eON_RtlFindSetBits(PCRTL_BITMAP, ULONG, ULONG)");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((param_2 != 0) && (param_2 <= *param_1)) {
      uVar1 = eON_MapOfBits__FindSetRange(param_1,param_2,param_3);
    }
  }
  return uVar1;
}

// --- eON_RtlFindSetBitsAndClear @0x0415fb70 ---
/* source: rtlbitmap */

int eON_RtlFindSetBitsAndClear(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x8a,"ULONG eON_RtlFindSetBitsAndClear(PRTL_BITMAP, ULONG, ULONG)");
    iVar1 = -1;
  }
  else {
    iVar1 = -1;
    if ((param_2 != 0) && (param_2 <= *param_1)) {
      iVar1 = eON_MapOfBits__FindSetRange(param_1,param_2,param_3);
      if (iVar1 != -1) {
        eON_MapOfBits__ClearRange(param_1,iVar1,param_2);
      }
    }
  }
  return iVar1;
}

// --- eON_RtlNumberOfClearBits @0x0415fd00 ---
/* source: rtlbitmap */

undefined4 eON_RtlNumberOfClearBits(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0xb3,"ULONG eON_RtlNumberOfClearBits(PCRTL_BITMAP)");
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0402e550(param_1);
  }
  return uVar1;
}

// --- eON_RtlNumberOfSetBits @0x0415fcb0 ---
/* source: rtlbitmap */

undefined4 eON_RtlNumberOfSetBits(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0xa8,"ULONG eON_RtlNumberOfSetBits(PCRTL_BITMAP)");
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0402e4c0(param_1);
  }
  return uVar1;
}

// --- eON_RtlSetAllBits @0x0415f7b0 ---
/* source: rtlbitmap */

void eON_RtlSetAllBits(int param_1)

{
  if (param_1 != 0) {
    FUN_0402ddf0(param_1);
    return;
  }
  FUN_0400a810("BitMapHeader",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp",
               0x16,"void eON_RtlSetAllBits(PRTL_BITMAP)");
  FUN_0402ddf0(0);
  return;
}

// --- eON_RtlSetBits @0x0415f870 ---
/* source: rtlbitmap */

void eON_RtlSetBits(uint *param_1,int param_2,int param_3)

{
  if (param_1 == (uint *)0x0) {
    FUN_0400a810("BitMapHeader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp"
                 ,0x28,"void eON_RtlSetBits(PRTL_BITMAP, ULONG, ULONG)");
  }
  else if ((param_3 != 0) && ((uint)(param_3 + param_2) <= *param_1)) {
    eON_MapOfBits__SetRange(param_1,param_2,param_3);
    return;
  }
  return;
}

