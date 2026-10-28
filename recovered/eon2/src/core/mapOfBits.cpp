// Recovered source: eon2/src/core/mapOfBits.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_MapOfBits::ClearRange @0x0402df70 ---
/* source: mapOfBits */

void eON_MapOfBits__ClearRange(uint *param_1,uint param_2,uint param_3)

{
  byte *__s;
  byte *pbVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    FUN_0400a810("count","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",
                 0x52,"void eON_MapOfBits::ClearRange(DWORD, DWORD)");
  }
  if (*param_1 < param_3 + param_2) {
    FUN_0400a810("start + count <= Size",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0x53,
                 "void eON_MapOfBits::ClearRange(DWORD, DWORD)");
  }
  if ((param_3 != 0) && (param_3 + param_2 <= *param_1)) {
    __s = (byte *)((param_2 >> 3) + param_1[1]);
    param_2 = param_2 & 7;
    if (param_2 != 0) {
      if (param_3 < 8) {
        uVar2 = ~((uint)(byte)(&DAT_042e21ab)[param_3] << (sbyte)param_2);
        *__s = *__s & (byte)uVar2;
        __s[1] = __s[1] & (byte)(uVar2 >> 8);
        return;
      }
      param_3 = (param_2 - 8) + param_3;
      *__s = *__s & ~(byte)(0xff << (sbyte)param_2);
      __s = __s + 1;
    }
    uVar2 = param_3 >> 3;
    pbVar1 = __s;
    if (uVar2 != 0) {
      pbVar1 = __s + uVar2;
      bzero(__s,uVar2);
    }
    if ((param_3 & 7) != 0) {
      *pbVar1 = *pbVar1 & ~(&DAT_042e21ab)[param_3 & 7];
    }
  }
  return;
}

// --- eON_MapOfBits::FindClearRange @0x0402e370 ---
/* source: mapOfBits */

uint eON_MapOfBits__FindClearRange(uint *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint local_20;
  
  if (param_2 == 0) {
    FUN_0400a810("count","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",
                 0x106,"DWORD eON_MapOfBits::FindClearRange(DWORD, DWORD)");
    return 0xffffffff;
  }
  uVar3 = *param_1;
  local_20 = uVar3 - param_2;
  if ((param_3 <= local_20) && (uVar2 = param_3, param_3 != 0)) {
    do {
      if (uVar3 < uVar2 + param_2) {
        FUN_0400a810("start + count <= Size",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0xb7,
                     "bool eON_MapOfBits::IsRangeClear(DWORD, DWORD)");
        uVar3 = *param_1;
        if (uVar2 + param_2 <= uVar3) goto LAB_0402e420;
      }
      else {
LAB_0402e420:
        cVar1 = FUN_0402dd40();
        if (cVar1 != '\0') {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= local_20);
    local_20 = param_3 - 1;
  }
  uVar2 = 0;
  do {
    if (uVar3 < uVar2 + param_2) {
      FUN_0400a810("start + count <= Size",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0xb7,
                   "bool eON_MapOfBits::IsRangeClear(DWORD, DWORD)");
      uVar3 = *param_1;
      if (uVar2 + param_2 <= uVar3) goto LAB_0402e3a0;
    }
    else {
LAB_0402e3a0:
      cVar1 = FUN_0402dd40();
      if (cVar1 != '\0') {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
    if (local_20 < uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

// --- eON_MapOfBits::FindSetRange @0x0402e220 ---
/* source: mapOfBits */

uint eON_MapOfBits__FindSetRange(uint *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint local_20;
  
  if (param_2 == 0) {
    FUN_0400a810("count","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",
                 0xea,"DWORD eON_MapOfBits::FindSetRange(DWORD, DWORD)");
    return 0xffffffff;
  }
  uVar3 = *param_1;
  local_20 = uVar3 - param_2;
  if ((param_3 <= local_20) && (uVar2 = param_3, param_3 != 0)) {
    do {
      if (uVar3 < uVar2 + param_2) {
        FUN_0400a810("start + count <= Size",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0x83,
                     "bool eON_MapOfBits::IsRangeSet(DWORD, DWORD)");
        uVar3 = *param_1;
        if (uVar2 + param_2 <= uVar3) goto LAB_0402e2d0;
      }
      else {
LAB_0402e2d0:
        cVar1 = FUN_0402dc80();
        if (cVar1 != '\0') {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= local_20);
    local_20 = param_3 - 1;
  }
  uVar2 = 0;
  do {
    if (uVar3 < uVar2 + param_2) {
      FUN_0400a810("start + count <= Size",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0x83,
                   "bool eON_MapOfBits::IsRangeSet(DWORD, DWORD)");
      uVar3 = *param_1;
      if (uVar2 + param_2 <= uVar3) goto LAB_0402e250;
    }
    else {
LAB_0402e250:
      cVar1 = FUN_0402dc80();
      if (cVar1 != '\0') {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
    if (local_20 < uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

// --- eON_MapOfBits::SetRange @0x0402de50 ---
/* source: mapOfBits */

void eON_MapOfBits__SetRange(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte *__s;
  byte *pbVar2;
  uint __n;
  
  if (param_3 == 0) {
    FUN_0400a810("count","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",
                 0x21,"void eON_MapOfBits::SetRange(DWORD, DWORD)");
  }
  if (*param_1 < param_3 + param_2) {
    FUN_0400a810("start + count <= Size",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0x22,
                 "void eON_MapOfBits::SetRange(DWORD, DWORD)");
  }
  if ((param_3 != 0) && (param_3 + param_2 <= *param_1)) {
    __s = (byte *)((param_2 >> 3) + param_1[1]);
    param_2 = param_2 & 7;
    if (param_2 != 0) {
      if (param_3 < 8) {
        iVar1 = (uint)(byte)(&DAT_042e21ab)[param_3] << (sbyte)param_2;
        *__s = *__s | (byte)iVar1;
        __s[1] = __s[1] | (byte)((uint)iVar1 >> 8);
        return;
      }
      param_3 = (param_2 - 8) + param_3;
      *__s = *__s | (byte)(0xff << (sbyte)param_2);
      __s = __s + 1;
    }
    __n = param_3 >> 3;
    pbVar2 = __s;
    if (__n != 0) {
      pbVar2 = __s + __n;
      memset(__s,0xff,__n);
    }
    if ((param_3 & 7) != 0) {
      *pbVar2 = *pbVar2 | (&DAT_042e21ab)[param_3 & 7];
    }
  }
  return;
}

// --- mapOfBits_0402e0a0 @0x0402e0a0 ---
/* source: mapOfBits */

undefined4 mapOfBits_0402e0a0(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    FUN_0400a810("count","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",
                 0x82,"bool eON_MapOfBits::IsRangeSet(DWORD, DWORD)");
  }
  if (*param_1 < (uint)(param_3 + param_2)) {
    FUN_0400a810("start + count <= Size",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0x83,
                 "bool eON_MapOfBits::IsRangeSet(DWORD, DWORD)");
  }
  if ((param_3 != 0) && ((uint)(param_3 + param_2) <= *param_1)) {
    uVar1 = FUN_0402dc80();
    return uVar1;
  }
  return 0;
}

// --- mapOfBits_0402e160 @0x0402e160 ---
/* source: mapOfBits */

undefined4 mapOfBits_0402e160(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    FUN_0400a810("count","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",
                 0xb6,"bool eON_MapOfBits::IsRangeClear(DWORD, DWORD)");
  }
  if (*param_1 < (uint)(param_3 + param_2)) {
    FUN_0400a810("start + count <= Size",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp",0xb7,
                 "bool eON_MapOfBits::IsRangeClear(DWORD, DWORD)");
  }
  if ((param_3 != 0) && ((uint)(param_3 + param_2) <= *param_1)) {
    uVar1 = FUN_0402dd40();
    return uVar1;
  }
  return 0;
}

