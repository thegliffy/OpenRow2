// Recovered source: eon2/src/dlls/win32/kernel32/nls_datetime.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_GetDateFormatW @0x04141050 ---
/* source: nls_datetime */

int eON_GetDateFormatW(int param_1,uint param_2,ushort *param_3,ushort *param_4,int param_5,
                      int param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort *puVar7;
  short **ppsVar8;
  short **ppsVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  short *psVar14;
  uint uVar15;
  byte bVar16;
  undefined1 local_1d0 [8];
  undefined4 local_1c8;
  int local_1c4;
  short *local_1c0;
  short *local_1bc;
  ushort *local_1b8;
  undefined4 local_1b4;
  int local_1ac;
  ushort *local_1a8;
  char local_1a1;
  int local_1a0;
  int local_19c;
  int local_198;
  short *local_194;
  short local_18c [128];
  ushort local_8c [32];
  undefined1 local_4c [20];
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  undefined1 local_28 [16];
  undefined4 *local_18;
  
  puVar5 = param_4;
  puVar7 = param_3;
  uVar15 = param_2;
  bVar16 = 0;
  local_18 = &param_1;
  ppsVar9 = &local_1c0;
  ppsVar8 = &local_1c0;
  local_1a0 = param_5;
  local_1a1 = param_6 != 0;
  local_198 = param_6;
  if (((bool)local_1a1) && (param_5 == 0)) goto LAB_0414115e;
  if ((param_2 & 0x30) != 0x30) {
    if ((param_2 & 0x20) != 0) {
      return 0;
    }
    uVar2 = param_2 & 0xb;
    if ((uVar2 == 0) || ((param_4 == (ushort *)0x0 && ((uVar2 - 1 < 2 || (uVar2 == 8)))))) {
      if ((param_1 == 0) || (param_1 == 0x400)) {
        local_1c4 = 0x41411ed;
        local_1ac = eON_GetUserDefaultLCID();
      }
      else {
        local_1ac = param_1;
        if (param_1 == 0x800) {
          local_1c4 = 0x4141591;
          local_1ac = eON_GetSystemDefaultLCID();
        }
      }
      if (local_1ac != 0x809) {
        local_1c0 = (short *)0x57;
        local_1c4 = 0x41411a8;
        eON_SetLastError();
        local_1c4 = local_1ac;
        local_1c8 = 0x41411bd;
        local_1c0 = local_18c;
        LCID_ToString();
        local_1c0 = (short *)0x432d238;
        local_1c4 = 5;
        local_1c8 = 0x41411d5;
        local_1bc = local_18c;
        FUN_0402cd10();
        return 0;
      }
      if (puVar5 == (ushort *)0x0) {
        local_1bc = (short *)0x1006;
        if ((uVar15 & 8) == 0) {
          local_1bc = (short *)(0x20 - (uint)((uVar15 & 2) == 0));
        }
        puVar5 = local_8c;
        local_1b4 = 0x20;
        local_1c0 = (short *)0x809;
        local_1c4 = 0x414166b;
        local_1b8 = puVar5;
        eON_GetLocaleInfoW();
        ppsVar8 = (short **)local_1d0;
      }
      if (puVar7 != (ushort *)0x0) {
        ppsVar8[1] = (short *)0x10;
        *ppsVar8 = (short *)&local_38;
        ppsVar8[-1] = (short *)0x4141137;
        bzero(*ppsVar8,(size_t)ppsVar8[1]);
        local_38 = *puVar7;
        local_32 = puVar7[3];
        local_36 = puVar7[1];
        ppsVar9 = ppsVar8;
        if ((local_36 < 0xd) && (local_32 < 0x20)) {
          *ppsVar8 = (short *)&local_38;
          ppsVar8[1] = (short *)local_28;
          ppsVar8[-1] = (short *)0x4141203;
          iVar3 = eON_SystemTimeToFileTime();
          ppsVar9 = ppsVar8 + -2;
          if (iVar3 != 0) {
            ppsVar8[-1] = (short *)&local_38;
            ppsVar8[-2] = (short *)local_28;
            ppsVar8[-3] = (short *)0x414121a;
            eON_FileTimeToSystemTime();
            piVar10 = (int *)(ppsVar8 + -4);
            goto LAB_0414121d;
          }
        }
LAB_0414115e:
        *ppsVar9 = (short *)0x57;
        ppsVar9[-1] = (short *)0x414116a;
        eON_SetLastError();
        return 0;
      }
      *ppsVar8 = (short *)&local_38;
      ppsVar8[-1] = (short *)0x4141629;
      eON_GetLocalTime();
      piVar10 = (int *)(ppsVar8 + -1);
LAB_0414121d:
      uVar6 = *puVar5;
      local_194 = local_18c;
      piVar11 = piVar10;
      iVar3 = 0;
LAB_04141230:
      while (iVar13 = iVar3, uVar6 != 0) {
        while( true ) {
          iVar3 = iVar13;
          if (uVar6 == 0x27) goto LAB_04141380;
          if ((((uVar6 == 0x4d) || (uVar6 == 0x79)) || (uVar6 == 100)) || (uVar6 == 0x67)) break;
          if (local_198 != 0) {
            if (local_198 <= iVar13) goto LAB_04141538;
            *(ushort *)(local_1a0 + iVar13 * 2) = uVar6;
          }
          uVar6 = puVar5[1];
          iVar13 = iVar13 + 1;
          puVar5 = puVar5 + 1;
          if (uVar6 == 0) goto LAB_04141290;
        }
        local_19c = 0;
        do {
          puVar7 = puVar5;
          local_1a8 = puVar7 + 1;
          local_19c = local_19c + 1;
          puVar5 = local_1a8;
        } while (puVar7[1] == uVar6);
        psVar14 = local_194;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          psVar14[0] = 0;
          psVar14[1] = 0;
          psVar14 = psVar14 + ((uint)bVar16 * -2 + 1) * 2;
        }
        if (uVar6 == 100) {
          if (3 < local_19c) {
            piVar11[3] = 0x20;
            piVar11[2] = (int)local_18c;
            iVar4 = (local_34 + 6) % 7 + 0x2a;
LAB_041415b1:
            piVar11[1] = iVar4;
            *piVar11 = 0x809;
            piVar11[-1] = 0x41415c1;
            eON_GetLocaleInfoW();
            piVar11 = piVar11 + -4;
            goto LAB_0414133e;
          }
          if (local_19c == 3) {
            piVar11[3] = 0x20;
            piVar11[2] = (int)local_18c;
            iVar4 = (local_34 + 6) % 7 + 0x31;
            goto LAB_041415b1;
          }
          uVar15 = (uint)local_32;
LAB_04141497:
          piVar11[1] = (int)L"%%.%dd";
          *piVar11 = (int)local_4c;
          piVar11[2] = local_19c;
          piVar11[-1] = 0x41414b4;
          eON_wsprintfW();
          piVar11[2] = uVar15;
          piVar11[1] = (int)local_4c;
          *piVar11 = (int)local_18c;
          piVar11[-1] = 0x41414cd;
          eON_wsprintfW();
          piVar12 = piVar11;
        }
        else if (uVar6 < 0x65) {
          if (uVar6 == 0x4d) {
            if (local_19c < 4) {
              if (local_19c != 3) {
                uVar15 = (uint)local_36;
                goto LAB_04141497;
              }
              piVar11[3] = 0x20;
              piVar11[2] = (int)local_18c;
              iVar4 = local_36 + 0x43;
            }
            else {
              piVar11[3] = 0x20;
              piVar11[2] = (int)local_18c;
              iVar4 = local_36 + 0x37;
            }
            goto LAB_041415b1;
          }
LAB_04141313:
          piVar11[3] = (int)
                       "INT eON_GetDateFormatW(LCID, DWORD, const SYSTEMTIME*, LPCWSTR, LPWSTR, INT)"
          ;
          piVar11[2] = 0x1e8;
          piVar11[1] = (int)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/nls_datetime.cpp"
          ;
          *piVar11 = (int)"false";
          piVar11[-1] = 0x4141337;
          FUN_0400a810();
LAB_0414133e:
          piVar12 = piVar11;
          if (local_18c[0] == 0) {
            uVar15 = 0;
            goto LAB_04141497;
          }
        }
        else {
          if (uVar6 != 0x67) {
            if (uVar6 == 0x79) {
              if (local_19c < 4) {
                iVar4 = 2;
                if (local_19c != 3) {
                  iVar4 = local_19c;
                }
                uVar15 = (uint)(local_38 % 100);
                local_19c = iVar4;
              }
              else {
                local_19c = 4;
                uVar15 = (uint)local_38;
              }
              goto LAB_04141497;
            }
            goto LAB_04141313;
          }
          piVar12 = piVar11;
          if (local_19c == 2) {
            local_18c[0] = 0x41;
            local_18c[1] = 0x44;
          }
          else {
            local_18c[0] = 0x67;
          }
        }
        *piVar12 = (int)local_18c;
        piVar12[-1] = 0x4141355;
        iVar4 = eON_lstrlenW();
        piVar11 = piVar12 + -1;
        if ((iVar4 == 0) || (local_1a1 == '\0')) {
          uVar6 = puVar7[1];
          puVar5 = local_1a8;
          piVar11 = piVar12 + -1;
        }
        else {
          iVar3 = iVar13 + iVar4;
          if (local_198 <= iVar3) {
            *piVar12 = (int)local_18c;
            piVar12[-1] = local_1a0 + iVar13 * 2;
            piVar12[1] = (local_198 - iVar13) * 2;
            piVar12[-2] = 0x41416f6;
            memcpy((void *)piVar12[-1],(void *)*piVar12,piVar12[1]);
            piVar12[-1] = 0x7a;
            piVar12[-2] = 0x4141702;
            eON_SetLastError();
            return 0;
          }
          piVar12[1] = iVar4 * 2;
          *piVar12 = (int)local_18c;
          piVar12[-1] = local_1a0 + iVar13 * 2;
          piVar12[-2] = 0x4141452;
          memcpy((void *)piVar12[-1],(void *)*piVar12,piVar12[1]);
          uVar6 = puVar7[1];
          puVar5 = local_1a8;
        }
      }
      goto LAB_04141290;
    }
  }
  local_1c0 = (short *)0x3ec;
  local_1c4 = 0x41410be;
  eON_SetLastError();
  return 0;
LAB_04141380:
  uVar1 = puVar5[1];
  puVar7 = puVar5 + 1;
  if (uVar1 == 0) {
LAB_04141290:
    if (local_198 != 0) {
      if (local_198 <= iVar13) {
LAB_04141538:
        *piVar11 = 0x7a;
        piVar11[-1] = 0x4141544;
        eON_SetLastError();
        return 0;
      }
      *(undefined2 *)(local_1a0 + iVar13 * 2) = 0;
    }
    return iVar13 + 1;
  }
  puVar5 = puVar7;
  if (local_198 == 0) {
    do {
      if (uVar1 == 0x27) {
        uVar6 = puVar5[1];
        puVar5 = puVar5 + 1;
        if (uVar6 != 0x27) goto LAB_04141230;
      }
      uVar1 = puVar5[1];
      puVar5 = puVar5 + 1;
      iVar13 = iVar3 + 1;
      iVar3 = iVar13;
      if (uVar1 == 0) goto LAB_04141290;
    } while( true );
  }
  if (uVar1 == 0x27) goto LAB_041413d7;
  do {
    do {
      if (local_198 <= iVar3) goto LAB_04141538;
      *(ushort *)(local_1a0 + iVar3 * 2) = uVar1;
      puVar7 = puVar5 + 1;
      iVar13 = iVar3 + 1;
      uVar1 = puVar5[1];
      if (uVar1 == 0) goto LAB_04141290;
      puVar5 = puVar7;
      iVar3 = iVar13;
    } while (uVar1 != 0x27);
LAB_041413d7:
    puVar5 = puVar7 + 1;
    uVar6 = puVar7[1];
  } while (uVar6 == 0x27);
  goto LAB_04141230;
}

// --- eON_GetTimeFormatW @0x04140980 ---
/* source: nls_datetime */

int eON_GetTimeFormatW(int param_1,uint param_2,undefined1 *param_3,short *param_4,int param_5,
                      int param_6)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  undefined ***pppuVar6;
  int *piVar7;
  undefined ***pppuVar8;
  int iVar9;
  undefined **ppuVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auStack_1f0 [8];
  undefined4 uStack_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined **local_1dc;
  short *local_1d8;
  undefined4 local_1d4;
  int local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  char local_1ad;
  int local_1ac;
  short *local_1a8;
  int local_1a4;
  undefined1 *local_1a0;
  int local_19c;
  int local_198;
  undefined **local_194;
  undefined *local_184 [64];
  short local_84 [32];
  undefined1 local_44 [20];
  undefined1 local_30 [24];
  undefined4 *local_18;
  
  psVar4 = param_4;
  uVar11 = param_2;
  bVar12 = 0;
  local_18 = &param_1;
  pppuVar8 = &local_1e0;
  pppuVar6 = &local_1e0;
  local_1a0 = param_3;
  local_1a4 = param_5;
  local_1ad = param_6 != 0;
  local_198 = param_6;
  if (((bool)local_1ad) && (param_5 == 0)) {
LAB_04140b10:
    *pppuVar8 = (undefined **)0x57;
    pppuVar8[-1] = (undefined **)0x4140b1c;
    eON_SetLastError();
    return 0;
  }
  if ((param_1 == 0) || (param_1 == 0x400)) {
    local_1e4 = 0x4140b85;
    iVar9 = eON_GetUserDefaultLCID();
  }
  else {
    iVar9 = param_1;
    if (param_1 == 0x800) {
      local_1e4 = 0x4140f65;
      iVar9 = eON_GetSystemDefaultLCID();
    }
  }
  if (iVar9 != 0x809) {
    local_1e0 = (undefined **)0x57;
    local_1e4 = 0x4140b42;
    eON_SetLastError();
    uStack_1e8 = 0x4140b51;
    local_1e4 = iVar9;
    local_1e0 = local_184;
    LCID_ToString();
    local_1e0 = (undefined **)0x432d1b0;
    local_1e4 = 5;
    uStack_1e8 = 0x4140b69;
    local_1dc = local_184;
    FUN_0402cd10();
    return 0;
  }
  if (psVar4 == (short *)0x0) {
    psVar4 = local_84;
    local_1d4 = 0x20;
    local_1dc = (undefined **)0x1003;
    local_1e0 = (undefined **)0x809;
    local_1e4 = 0x4140fb9;
    local_1d8 = psVar4;
    eON_GetLocaleInfoW();
    pppuVar6 = (undefined ***)auStack_1f0;
  }
  if (local_1a0 == (undefined1 *)0x0) {
    *pppuVar6 = (undefined **)local_30;
    pppuVar6[-1] = (undefined **)0x4140fcc;
    eON_GetLocalTime();
    pppuVar6 = pppuVar6 + -1;
    local_1a0 = local_30;
  }
  else {
    pppuVar8 = pppuVar6;
    if (((0x18 < *(ushort *)(local_1a0 + 8)) || (0x3b < *(ushort *)(local_1a0 + 10))) ||
       (0x3b < *(ushort *)(local_1a0 + 0xc))) goto LAB_04140b10;
  }
  sVar5 = *psVar4;
  bVar1 = false;
  local_1ac = 0;
  local_1b4 = uVar11 & 8;
  local_1b8 = uVar11 & 1;
  local_1c0 = uVar11 & 4;
  local_1bc = uVar11 & 3;
  local_194 = local_184;
  piVar7 = (int *)pppuVar6;
  iVar9 = 0;
LAB_04140a80:
  do {
    if (sVar5 == 0) {
LAB_04140f70:
      if (local_198 != 0) {
        if (local_198 <= iVar9) {
LAB_04140f40:
          *piVar7 = 0x7a;
          piVar7[-1] = 0x4140f4c;
          eON_SetLastError();
          return 0;
        }
        *(undefined2 *)(local_1a4 + iVar9 * 2) = 0;
      }
      return iVar9 + 1;
    }
    if (sVar5 != 0x27) {
      if (((sVar5 == 0x68) || (sVar5 == 0x48)) ||
         ((sVar5 == 0x6d || ((sVar5 == 0x73 || (sVar5 == 0x74)))))) {
        local_19c = 0;
        do {
          psVar3 = psVar4;
          local_1a8 = psVar3 + 1;
          local_19c = local_19c + 1;
          psVar4 = local_1a8;
        } while (psVar3[1] == sVar5);
        ppuVar10 = local_194;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppuVar10 = (undefined *)0x0;
          ppuVar10 = ppuVar10 + (uint)bVar12 * -2 + 1;
        }
        switch(sVar5) {
        case 0x48:
switchD_04140c33_caseD_48:
          uVar11 = (uint)*(ushort *)(local_1a0 + 8);
          iVar2 = 2;
          if (local_19c < 3) {
            iVar2 = local_19c;
          }
          break;
        default:
          piVar7[3] = (int)
                      "INT eON_GetTimeFormatW(LCID, DWORD, const SYSTEMTIME*, LPCWSTR, LPWSTR, INT)"
          ;
          bVar1 = false;
          piVar7[2] = 0xd4;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/nls_datetime.cpp"
          ;
          *piVar7 = (int)"false";
          piVar7[-1] = 0x4140c18;
          FUN_0400a810();
          local_1ac = iVar9;
LAB_04140c18:
          sVar5 = psVar3[1];
          psVar4 = local_1a8;
          iVar9 = local_1ac;
          goto LAB_04140a80;
        case 0x68:
          if (local_1b4 != 0) goto switchD_04140c33_caseD_48;
          uVar11 = 0xc;
          iVar2 = 2;
          if (local_19c < 3) {
            iVar2 = local_19c;
          }
          if (*(ushort *)(local_1a0 + 8) != 0) {
            uVar11 = (int)(*(ushort *)(local_1a0 + 8) - 1) % 0xc + 1;
          }
          break;
        case 0x6d:
          if (local_1b8 != 0) {
LAB_04140eb0:
            bVar1 = true;
            goto LAB_04140c18;
          }
          iVar2 = 2;
          if (local_19c < 3) {
            iVar2 = local_19c;
          }
          uVar11 = (uint)*(ushort *)(local_1a0 + 10);
          break;
        case 0x73:
          if (local_1bc != 0) goto LAB_04140eb0;
          iVar2 = 2;
          if (local_19c < 3) {
            iVar2 = local_19c;
          }
          uVar11 = (uint)*(ushort *)(local_1a0 + 0xc);
          break;
        case 0x74:
          if (local_1c0 != 0) goto LAB_04140eb0;
          if (local_19c == 1) {
            ppuVar10 = (undefined **)&DAT_04313db2;
            if (0xb < *(ushort *)(local_1a0 + 8)) {
              ppuVar10 = (undefined **)&DAT_0432d19c;
            }
          }
          else {
            ppuVar10 = &PTR_DAT_0432d190;
            if (0xb < *(ushort *)(local_1a0 + 8)) {
              ppuVar10 = &PTR_DAT_0432d196;
            }
          }
          goto LAB_04140ccb;
        }
        piVar7[2] = iVar2;
        piVar7[1] = (int)L"%%.%dd";
        *piVar7 = (int)local_44;
        piVar7[-1] = 0x4140c74;
        eON_wsprintfW();
        piVar7[2] = uVar11;
        piVar7[1] = (int)local_44;
        *piVar7 = (int)local_184;
        ppuVar10 = local_184;
        piVar7[-1] = 0x4140c93;
        eON_wsprintfW();
LAB_04140ccb:
        *piVar7 = (int)ppuVar10;
        piVar7[-1] = 0x4140cd3;
        iVar2 = eON_lstrlenW();
        if ((iVar2 == 0) || (local_1ad == '\0')) {
          sVar5 = psVar3[1];
          bVar1 = false;
          psVar4 = local_1a8;
          piVar7 = piVar7 + -1;
          local_1ac = iVar9;
        }
        else {
          if (local_198 <= iVar9 + iVar2) {
            *piVar7 = (int)ppuVar10;
            piVar7[-1] = local_1a4 + iVar9 * 2;
            piVar7[1] = (local_198 - iVar9) * 2;
            piVar7[-2] = 0x4141014;
            memcpy((void *)piVar7[-1],(void *)*piVar7,piVar7[1]);
            piVar7[-1] = 0x7a;
            piVar7[-2] = 0x4141020;
            eON_SetLastError();
            return 0;
          }
          *piVar7 = (int)ppuVar10;
          piVar7[-1] = local_1a4 + iVar9 * 2;
          bVar1 = false;
          piVar7[1] = iVar2 * 2;
          piVar7[-2] = 0x4140e92;
          local_1c4 = iVar9 + iVar2;
          memcpy((void *)piVar7[-1],(void *)*piVar7,piVar7[1]);
          sVar5 = psVar3[1];
          local_1ac = local_1c4;
          psVar4 = local_1a8;
          piVar7 = piVar7 + -1;
          iVar9 = local_1c4;
        }
        goto LAB_04140a80;
      }
      if (local_198 != 0) {
        if (local_198 <= iVar9) goto LAB_04140f40;
        if ((bVar1) && (sVar5 != 0x20)) {
          sVar5 = psVar4[1];
          psVar4 = psVar4 + 1;
          goto LAB_04140a80;
        }
        *(short *)(local_1a4 + iVar9 * 2) = sVar5;
      }
      sVar5 = psVar4[1];
      psVar4 = psVar4 + 1;
      iVar9 = iVar9 + 1;
      goto LAB_04140a80;
    }
    sVar5 = psVar4[1];
    psVar4 = psVar4 + 1;
    if (sVar5 == 0) goto LAB_04140f70;
    if (bVar1) {
      if (local_198 == 0) {
        do {
          if (sVar5 == 0x27) {
            sVar5 = psVar4[1];
            psVar4 = psVar4 + 1;
            if (sVar5 != 0x27) goto LAB_04140a80;
          }
          sVar5 = psVar4[1];
          psVar4 = psVar4 + 1;
          iVar9 = iVar9 + 1;
          if (sVar5 == 0) goto LAB_04140f70;
        } while( true );
      }
      do {
        if (sVar5 == 0x27) {
          sVar5 = psVar4[1];
          psVar4 = psVar4 + 1;
          if (sVar5 != 0x27) goto LAB_04140a80;
        }
        if (local_198 <= iVar9) goto LAB_04140f40;
        sVar5 = psVar4[1];
        psVar4 = psVar4 + 1;
        if (sVar5 == 0) goto LAB_04140f70;
      } while( true );
    }
    if (local_198 == 0) {
      do {
        if (sVar5 == 0x27) {
          sVar5 = psVar4[1];
          psVar4 = psVar4 + 1;
          if (sVar5 != 0x27) goto LAB_04140a80;
        }
        sVar5 = psVar4[1];
        psVar4 = psVar4 + 1;
        iVar9 = iVar9 + 1;
        if (sVar5 == 0) goto LAB_04140f70;
      } while( true );
    }
    psVar3 = psVar4;
    if (sVar5 == 0x27) goto LAB_04140efd;
    while( true ) {
      do {
        if (local_198 <= iVar9) goto LAB_04140f40;
        psVar4 = psVar3 + 1;
        *(short *)(local_1a4 + iVar9 * 2) = sVar5;
        iVar9 = iVar9 + 1;
        sVar5 = psVar3[1];
        if (sVar5 == 0) goto LAB_04140f70;
        psVar3 = psVar4;
      } while (sVar5 != 0x27);
LAB_04140efd:
      sVar5 = psVar4[1];
      psVar3 = psVar4 + 1;
      psVar4 = psVar3;
      if (sVar5 != 0x27) break;
      sVar5 = 0x27;
    }
  } while( true );
}

