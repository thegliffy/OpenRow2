// Recovered source: eon2/src/dlls/win32/kernel32/nls_locale.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_GetLocaleInfoA @0x041429a0 ---
/* WARNING: Removing unreachable block (ram,0x04142b62) */
/* WARNING: Removing unreachable block (ram,0x04142a9d) */
/* WARNING: Removing unreachable block (ram,0x04142aba) */
/* source: nls_locale */

uint eON_GetLocaleInfoA(int param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  
  if ((((param_1 == 0) || (param_1 == 0x400)) || (param_1 == 0x800)) || (param_1 == 0x809)) {
    if ((param_2 & 0x20000000) == 0) {
                    /* try { // try from 04142a5b to 04142a87 has its CatchHandler @ 04142b4a */
      cVar1 = localeInfoAsString();
      if (cVar1 != '\0') {
        uVar2 = std::string::_Rep::_S_empty_rep_storage + 1;
        if (param_4 == 0) {
          return uVar2;
        }
        if (((int)uVar2 <= param_4) && (param_3 != (char *)0x0)) {
          strcpy(param_3,&DAT_04410d0c);
          return uVar2;
        }
        eON_SetLastError();
      }
      uVar2 = 0;
    }
    else {
      if (param_3 == (char *)0x0) {
        FUN_0400a810();
      }
      param_3[0] = -0x34;
      param_3[1] = -0x34;
      param_3[2] = -0x34;
      param_3[3] = -0x34;
      cVar1 = localeInfoAsNumber();
      uVar2 = ~-(uint)(cVar1 == '\0') & 4;
    }
  }
  else {
    eON_SetLastError();
    uVar2 = 0;
    LCID_ToString();
    FUN_0402cd10();
  }
  return uVar2;
}

// --- eON_GetLocaleInfoW @0x04142b80 ---
/* WARNING: Removing unreachable block (ram,0x04142dad) */
/* source: nls_locale */

uint eON_GetLocaleInfoW(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined1 ***pppuVar6;
  undefined1 auStack_190 [20];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  int local_164;
  undefined1 **local_160;
  undefined1 **local_15c;
  undefined1 *local_158;
  char *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_134;
  undefined1 *local_124 [64];
  undefined1 local_21 [9];
  undefined4 *local_18;
  
  iVar4 = param_4;
  puVar3 = param_3;
  iVar2 = param_1;
  local_18 = &param_1;
  pppuVar6 = &local_160;
  if ((((param_1 == 0) || (param_1 == 0x400)) || (param_1 == 0x800)) || (param_1 == 0x809)) {
    if ((param_2 & 0x20000000) == 0) {
      local_124[0] = &DAT_04410d0c;
                    /* try { // try from 04142c60 to 04142d4d has its CatchHandler @ 04142d95 */
      local_164 = 0x4142c65;
      cVar5 = localeInfoAsString();
      local_134 = 0;
      if (cVar5 != '\0') {
        local_14c = 0;
        local_150 = 0;
        local_154 = (char *)0xffffffff;
        local_15c = (undefined1 **)0x0;
        local_158 = local_124[0];
        local_160 = (undefined1 **)0x0;
        local_164 = 0x4142ca3;
        local_134 = eON_MultiByteToWideChar();
        pppuVar6 = (undefined1 ***)&local_178;
        if (iVar4 != 0) {
          if ((iVar4 < (int)local_134) || (puVar3 == (undefined4 *)0x0)) {
            local_178 = 0x7a;
            local_17c = 0x4142cbe;
            eON_SetLastError();
            pppuVar6 = (undefined1 ***)&local_17c;
            local_134 = 0;
          }
          else {
            local_164 = iVar4;
            local_168 = puVar3;
            local_16c = 0xffffffff;
            local_174 = 0;
            local_170 = local_124[0];
            local_178 = 0;
            local_17c = 0x4142d4e;
            local_134 = eON_MultiByteToWideChar();
            pppuVar6 = (undefined1 ***)auStack_190;
          }
        }
      }
      if ((undefined4 *)(local_124[0] + -0xc) != &std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_124[0] + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          pppuVar6[1] = (undefined1 **)local_21;
          *pppuVar6 = (undefined1 **)(local_124[0] + -0xc);
          pppuVar6[-1] = (undefined1 **)0x4142d0f;
          std::string::_Rep::_M_destroy((allocator *)*pppuVar6);
        }
      }
    }
    else {
      if (param_3 == (undefined4 *)0x0) {
        local_134 = param_2;
        local_154 = "INT eON_GetLocaleInfoW(LCID, LCTYPE, LPWSTR, INT)";
        local_158 = (undefined1 *)0x2e2;
        local_15c = (undefined1 **)0x432d4ac;
        local_160 = (undefined1 **)0x432d8b0;
        local_164 = 0x4142d8a;
        FUN_0400a810();
      }
      *puVar3 = 0xcccccccc;
      local_164 = 0x4142c41;
      cVar5 = localeInfoAsNumber();
      local_134 = ~-(uint)(cVar5 == '\0') & 2;
    }
  }
  else {
    local_160 = (undefined1 **)0x57;
    local_164 = 0x4142bd8;
    eON_SetLastError();
    local_164 = iVar2;
    local_168 = (undefined4 *)0x4142be7;
    local_160 = local_124;
    LCID_ToString();
    local_160 = (undefined1 **)0x432d504;
    local_164 = 5;
    local_168 = (undefined4 *)0x4142bff;
    local_15c = local_124;
    FUN_0402cd10();
    local_134 = 0;
  }
  return local_134;
}

