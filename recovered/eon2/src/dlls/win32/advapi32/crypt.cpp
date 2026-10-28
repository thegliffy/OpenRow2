// Recovered source: eon2/src/dlls/win32/advapi32/crypt.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_CryptAcquireContextA @0x04112a20 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: crypt */

undefined4
eON_CryptAcquireContextA
          (undefined4 *param_1,undefined4 param_2,char *param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  bVar5 = param_3 == (char *)0x0;
  if (!bVar5) {
    iVar2 = 0x2e;
    pcVar3 = param_3;
    pcVar4 = "Intel Hardware Cryptographic Service Provider";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      eON_SetLastError(0x37);
      return 0;
    }
    iVar2 = 0x2b;
    bVar5 = false;
    pcVar3 = "Microsoft Base Cryptographic Provider v1.0";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *param_3 == *pcVar3;
      param_3 = param_3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar5);
    if (!bVar5) {
      if (param_4 != 0x18) {
        return 0;
      }
      *param_1 = 0xabababab;
      return 1;
    }
  }
  if ((param_4 == 0x18) || (uVar1 = 0, param_4 == 1)) {
    if (param_1 == (undefined4 *)0x0) {
      FUN_0400a810("phProv",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/advapi32/crypt.cpp"
                   ,0x10c,
                   "WINBOOL eON_CryptAcquireContextA(HCRYPTPROV*, LPCSTR, LPCSTR, DWORD, DWORD)");
    }
    if (param_5 == 8) {
      _DAT_04512a30 = 1;
      uVar1 = 1;
      *param_1 = 0xabababab;
    }
    else if (param_5 == 0x10) {
      _DAT_04512a30 = 0;
      uVar1 = 1;
      *param_1 = 0xabababab;
    }
    else if (param_5 == 0xf0000000) {
      *param_1 = 0xbabababa;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_5 & 0xf0000000) != 0) && ((param_5 & 0x20) != 0)) {
        *param_1 = 0xababcbcb;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

// --- eON_CryptDecrypt @0x041148a0 ---
/* source: crypt */

undefined4
eON_CryptDecrypt(uint *param_1,int param_2,int param_3,int param_4,char *param_5,uint *param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  char **ppcVar10;
  char **ppcVar11;
  char *pcVar12;
  int local_94;
  char *local_90 [2];
  int local_88;
  char *local_84;
  char *local_74;
  uint *local_70;
  int local_6c;
  int local_68;
  uint *local_64;
  char *local_60;
  uint *local_5c;
  undefined1 *local_58;
  char *local_54;
  undefined1 local_50 [24];
  byte local_38 [32];
  undefined4 *local_18;
  
  puVar1 = param_1;
  local_18 = &param_1;
  ppcVar10 = local_90;
  ppcVar11 = local_90;
  local_68 = param_2;
  local_6c = param_3;
  local_60 = param_5;
  local_5c = param_6;
  if (param_4 != 0) {
    local_84 = "WINBOOL eON_CryptDecrypt(HCRYPTKEY, HCRYPTHASH, WINBOOL, DWORD, PBYTE, PDWORD)";
    local_88 = 0x60a;
    local_90[1] = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/advapi32/crypt.cpp";
    local_90[0] = "!dwFlags";
    FUN_0400a810();
  }
  if (((local_60 == (char *)0x0) || (puVar1 == (uint *)0x0)) || (local_5c == (uint *)0x0)) {
    local_90[0] = (char *)0x57;
    eON_SetLastError();
    return 0;
  }
  if (puVar1[8] == 0) {
    puVar1[8] = 1;
  }
  else if (puVar1[8] != 1) goto LAB_041149a9;
  local_74 = (char *)*local_5c;
  uVar9 = *puVar1 & 0x1e00;
  if (uVar9 == 0x600) {
    if (local_74 == (char *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      local_64 = puVar1 + 0xcab;
      local_70 = (uint *)0x0;
      local_54 = local_60;
      ppcVar11 = local_90;
      do {
        uVar9 = puVar1[1];
        if (uVar9 == 2) {
          if (*puVar1 - 0x660e < 4) {
            local_58 = local_50;
            ppcVar11[1] = local_58;
            ppcVar11[2] = (char *)local_64;
            *ppcVar11 = local_54;
            ppcVar11[-1] = (char *)0x4114c93;
            FUN_0420dbb0();
            uVar9 = puVar1[7];
          }
          else {
            *ppcVar11 = (char *)0x80090008;
            ppcVar11[-1] = (char *)0x4114a86;
            eON_SetLastError();
            uVar9 = puVar1[7];
            local_58 = local_50;
            ppcVar11 = ppcVar11 + -1;
          }
        }
        else if (uVar9 == 4) {
          local_58 = local_50;
          if (puVar1[7] == 0) {
            uVar9 = 0;
          }
          else {
            uVar3 = 0;
            do {
              if (*puVar1 - 0x660e < 4) {
                ppcVar11[1] = (char *)local_38;
                *ppcVar11 = (char *)(puVar1 + 0x10e5);
                ppcVar11[2] = (char *)local_64;
                ppcVar11[-1] = (char *)0x4114c54;
                FUN_0420d7b0();
              }
              else {
                *ppcVar11 = (char *)0x80090008;
                ppcVar11[-1] = (char *)0x4114bd8;
                eON_SetLastError();
                ppcVar11 = ppcVar11 + -1;
              }
              uVar9 = puVar1[7];
              bVar8 = local_54[uVar3];
              local_58[uVar3] = bVar8 ^ local_38[0];
              iVar4 = 0;
              if (uVar9 != 1) {
                iVar5 = iVar4;
                do {
                  iVar4 = iVar5 + 1;
                  *(undefined1 *)((int)puVar1 + iVar5 + 0x4394) =
                       *(undefined1 *)((int)puVar1 + iVar5 + 0x4395);
                  iVar5 = iVar4;
                } while (iVar4 != uVar9 - 1);
                bVar8 = local_54[uVar3];
              }
              uVar3 = uVar3 + 1;
              *(byte *)((int)puVar1 + iVar4 + 0x4394) = bVar8;
            } while (uVar3 < uVar9);
          }
        }
        else {
          if (uVar9 != 1) {
            *ppcVar11 = (char *)0x80090008;
            ppcVar11[-1] = (char *)0x4114a57;
            eON_SetLastError();
            return 0;
          }
          if (*puVar1 - 0x660e < 4) {
            local_58 = local_50;
            ppcVar11[1] = local_58;
            ppcVar11[2] = (char *)local_64;
            *ppcVar11 = local_54;
            ppcVar11[-1] = (char *)0x4114c72;
            FUN_0420dbb0();
          }
          else {
            *ppcVar11 = (char *)0x80090008;
            ppcVar11[-1] = (char *)0x4114b59;
            eON_SetLastError();
            ppcVar11 = ppcVar11 + -1;
            local_58 = local_50;
          }
          uVar9 = puVar1[7];
          if (uVar9 != 0) {
            uVar3 = 0;
            do {
              local_58[uVar3] = local_58[uVar3] ^ *(byte *)((int)puVar1 + uVar3 + 0x4394);
              uVar3 = uVar3 + 1;
            } while (uVar3 != uVar9);
          }
          ppcVar11[2] = (char *)uVar9;
          *ppcVar11 = (char *)(puVar1 + 0x10e5);
          ppcVar11[1] = local_54;
          ppcVar11[-1] = (char *)0x4114b9d;
          memcpy(*ppcVar11,ppcVar11[1],(size_t)ppcVar11[2]);
          uVar9 = puVar1[7];
        }
        ppcVar11[2] = (char *)uVar9;
        ppcVar11[1] = local_58;
        *ppcVar11 = local_54;
        ppcVar11[-1] = (char *)0x4114aa7;
        memcpy(*ppcVar11,ppcVar11[1],(size_t)ppcVar11[2]);
        local_70 = (uint *)((int)local_70 + puVar1[7]);
        local_54 = local_54 + puVar1[7];
        puVar6 = (uint *)*local_5c;
      } while (local_70 < puVar6);
    }
    ppcVar10 = ppcVar11;
    if (local_6c == 0) goto LAB_04114961;
    bVar8 = (local_60 + -1)[(int)puVar6];
    if (((bVar8 == 0) || (puVar7 = (uint *)(uint)bVar8, (uint *)puVar1[7] < puVar7)) ||
       (puVar6 < puVar7)) {
LAB_041149a9:
      *ppcVar10 = (char *)0x80090005;
      ppcVar10[-1] = (char *)0x41149b5;
      eON_SetLastError();
      return 0;
    }
    if ((uint *)0x1 < puVar7) {
      local_54 = (char *)(1 - (int)puVar7);
      local_58 = (undefined1 *)0x0;
      pcVar12 = (char *)0x0;
      do {
        local_64 = puVar6;
        if (bVar8 != *(byte *)((int)puVar6 + (int)(pcVar12 + (int)(local_60 + -2))))
        goto LAB_041149a9;
        pcVar12 = pcVar12 + -1;
      } while (pcVar12 != local_54);
    }
    *local_5c = (int)puVar6 - (int)puVar7;
  }
  else {
    if (uVar9 != 0x800) {
      return 0;
    }
    if (*puVar1 != 0x6801) {
      return 0;
    }
    local_88 = (int)(puVar1 + 9);
    local_90[0] = local_60;
    local_90[1] = local_74;
    FUN_04246be0();
    ppcVar11 = local_90;
    ppcVar10 = local_90;
    if (local_6c == 0) goto LAB_04114961;
  }
  *(undefined4 *)((int)ppcVar11 + -4) = 0x4114b35;
  FUN_04111fa0();
  ppcVar10 = ppcVar11;
LAB_04114961:
  iVar4 = local_68;
  uVar2 = 1;
  if (local_68 != 0) {
    uVar2 = 0;
    if ((char *)*local_5c <= local_74) {
      ppcVar10[2] = (char *)*local_5c;
      ppcVar10[1] = local_60;
      *ppcVar10 = (char *)(iVar4 + 0xc);
      ppcVar10[-1] = (char *)0x4114992;
      FUN_04233140();
      uVar2 = 1;
    }
  }
  return uVar2;
}

// --- eON_CryptDeriveKey @0x04114030 ---
/* source: crypt */

undefined4 eON_CryptDeriveKey(int param_1,uint param_2,int param_3,uint param_4,undefined4 *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *__ptr;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_148 [4];
  undefined4 local_144;
  uint local_120;
  byte local_10c [104];
  byte local_a4 [64];
  byte local_64 [64];
  uint local_24;
  undefined4 *local_18;
  
  puVar2 = param_5;
  uVar6 = param_4;
  iVar9 = param_3;
  uVar7 = param_2;
  local_18 = &param_1;
  if ((param_3 == 0) || (param_1 == 0)) {
    local_144 = 0x41143a4;
    eON_SetLastError();
    return 0;
  }
  if (param_5 == (undefined4 *)0x0) {
    local_144 = 0x411442e;
    eON_SetLastError();
    return 0;
  }
  local_144 = 0x4114099;
  __ptr = calloc(1,0x43bc);
  if (__ptr == (uint *)0x0) {
    local_144 = 0x4114451;
    eON_SetLastError();
    return 0;
  }
  if ((uVar7 & 0xe000) != 0x6000) {
    local_144 = 0x41140bd;
    free(__ptr);
    *puVar2 = 0;
    return 0;
  }
  if ((((uVar7 != 0x6611) && (uVar7 != 0x6801)) && (uVar7 != 0x660f)) &&
     ((uVar7 != 0x660e && (uVar7 != 0x6610)))) {
    local_144 = 0x4114140;
    FUN_0400a810();
  }
  uVar4 = uVar6 >> 0x10;
  __ptr[4] = uVar4;
  if (uVar4 == 0) {
    __ptr[4] = 5;
    uVar4 = CONCAT31((uint3)(byte)(uVar6 >> 0x18),5);
  }
  __ptr[2] = 0;
  __ptr[3] = 0x3b;
  *__ptr = uVar7;
  if ((uVar6 & 1) != 0) {
    __ptr[3] = 0x3f;
  }
  __ptr[5] = 0;
  if (((uVar6 & 4) == 0) && ((uVar4 != 5 || ((uVar6 & 0x10) != 0)))) {
    __ptr[6] = 0;
  }
  else {
    __ptr[6] = 0x10 - uVar4;
  }
  local_144 = 0x41141ad;
  bzero(__ptr + 0x10d3,0x30);
  local_144 = 0x41141c3;
  bzero(__ptr + 0x10df,0x18);
  __ptr[0x10ec] = 0;
  __ptr[0x10eb] = 0;
  __ptr[0x10ee] = 0;
  __ptr[0x10ed] = 0;
  if (0x660d < uVar7) {
    if (uVar7 < 0x6612) {
      __ptr[7] = 0x10;
      __ptr[1] = 2;
    }
    else if (uVar7 == 0x6801) {
      __ptr[7] = 0;
      __ptr[1] = 0;
    }
  }
  local_24 = 0x68;
  if (iVar9 == 0) {
    local_144 = 0x41143e3;
    eON_SetLastError();
    puVar3 = &local_144;
  }
  else {
    local_144 = 0x411425c;
    iVar5 = FUN_04112100();
    piVar8 = (int *)local_148;
    puVar3 = (undefined4 *)local_148;
    if (iVar5 == 1) goto LAB_04114268;
  }
  piVar8 = puVar3;
  piVar8[3] = (int)"WINBOOL eON_CryptDeriveKey(HCRYPTPROV, ALG_ID, HCRYPTHASH, DWORD, HCRYPTKEY*)";
  piVar8[2] = 0x54b;
  piVar8[1] = (int)
              "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/advapi32/crypt.cpp";
  *piVar8 = (int)"eON_CryptGetHashParam( (HCRYPTHASH)hash, 2, hashValue, &hashLen, 0 ) == 1";
  piVar8[-1] = 0x411440a;
  FUN_0400a810();
LAB_04114268:
  local_120 = __ptr[4];
  if (local_24 < local_120) {
    uVar6 = 0;
    do {
      while (local_24 <= uVar6) {
        local_a4[uVar6] = 0x36;
        local_64[uVar6] = 0x5c;
        uVar6 = uVar6 + 1;
        if (uVar6 == 0x40) goto LAB_041142c4;
      }
      bVar1 = local_10c[uVar6];
      local_64[uVar6] = bVar1 ^ 0x5c;
      local_a4[uVar6] = bVar1 ^ 0x36;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x40);
LAB_041142c4:
    if (uVar7 == 0x8003) {
      iVar9 = iVar9 + 0xc;
      *piVar8 = iVar9;
      piVar8[-1] = 0x41142e3;
      FUN_042324c0();
      *piVar8 = iVar9;
      piVar8[2] = 0x40;
      piVar8[1] = (int)local_a4;
      piVar8[-1] = 0x41142fd;
      FUN_04233140();
      piVar8[1] = (int)local_10c;
      *piVar8 = iVar9;
      piVar8[-1] = 0x4114309;
      FUN_04232bd0();
      *piVar8 = iVar9;
      piVar8[-1] = 0x4114311;
      FUN_042324c0();
      piVar8[2] = 0x40;
      piVar8[1] = (int)local_64;
      *piVar8 = iVar9;
      piVar8[-1] = 0x4114328;
      FUN_04233140();
      *piVar8 = iVar9;
      piVar8[1] = (int)(local_10c + 0x10);
      piVar8[-1] = 0x411433a;
      FUN_04232bd0();
      local_120 = __ptr[4];
    }
  }
  piVar8[1] = (int)local_10c;
  uVar7 = 0x30;
  if (local_120 < 0x31) {
    uVar7 = local_120;
  }
  *piVar8 = (int)(__ptr + 0x10d3);
  piVar8[2] = uVar7;
  piVar8[-1] = 0x4114371;
  memcpy((void *)*piVar8,(void *)piVar8[1],piVar8[2]);
  piVar8[-1] = 0x4114378;
  FUN_04111fa0();
  *puVar2 = __ptr;
  return 1;
}

// --- eON_CryptEncrypt @0x04114460 ---
/* source: crypt */

undefined4
eON_CryptEncrypt(uint *param_1,int param_2,int param_3,int param_4,char *param_5,uint *param_6,
                char *param_7)

{
  byte bVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char **ppcVar10;
  char **ppcVar11;
  uint *puVar12;
  undefined4 uVar13;
  int local_84;
  char *local_80 [2];
  int local_78;
  char *local_74;
  int local_70;
  uint local_6c;
  uint *local_68;
  int local_64;
  undefined1 *local_60;
  uint *local_5c;
  char *local_58;
  uint *local_54;
  undefined1 local_50 [24];
  byte local_38 [32];
  undefined4 *local_18;
  
  pcVar4 = param_7;
  pcVar3 = param_5;
  puVar2 = param_1;
  local_18 = &param_1;
  ppcVar11 = local_80;
  local_64 = param_3;
  local_5c = param_6;
  iVar6 = param_2;
  if (param_4 != 0) {
    local_70 = param_2;
    local_74 = 
    "WINBOOL eON_CryptEncrypt(HCRYPTKEY, HCRYPTHASH, WINBOOL, DWORD, PBYTE, PDWORD, DWORD)";
    local_78 = 0x58d;
    local_80[1] = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/advapi32/crypt.cpp";
    local_80[0] = "!dwFlags";
    FUN_0400a810();
    iVar6 = local_70;
  }
  if (((pcVar3 == (char *)0x0) || (puVar2 == (uint *)0x0)) || (local_5c == (uint *)0x0)) {
    local_80[0] = (char *)0x57;
    eON_SetLastError();
    return 0;
  }
  if (puVar2[8] == 0) {
    puVar2[8] = 1;
LAB_041144bf:
    if (iVar6 != 0) {
      local_80[0] = (char *)(iVar6 + 0xc);
      local_78 = *local_5c;
      local_80[1] = pcVar3;
      FUN_04233140();
    }
    uVar8 = *puVar2 & 0x1e00;
    if (uVar8 == 0x600) {
      local_54 = (uint *)puVar2[7];
      pcVar9 = (char *)*local_5c;
      if (local_64 == 0) {
        local_58 = (char *)0x0;
        if ((uint)pcVar9 % (uint)local_54 != 0) goto LAB_04114515;
      }
      else {
        local_58 = (char *)0x1;
      }
      pcVar5 = (char *)((int)(local_58 + (uint)pcVar9 / (uint)local_54) * (int)local_54);
      if (pcVar4 <= pcVar5 && (int)pcVar5 - (int)pcVar4 != 0) {
        *local_5c = (uint)pcVar5;
        local_80[0] = (char *)0xea;
        eON_SetLastError();
        return 0;
      }
      if (pcVar9 <= pcVar5 && (int)pcVar5 - (int)pcVar9 != 0) {
        local_54 = puVar2;
        local_58 = pcVar9;
        while( true ) {
          pcVar3[(int)pcVar9] = (char)pcVar5 - (char)local_58;
          pcVar9 = pcVar9 + 1;
          if (pcVar5 < pcVar9 || (int)pcVar5 - (int)pcVar9 == 0) break;
          local_58 = (char *)*local_5c;
        }
      }
      *local_5c = (uint)pcVar5;
      ppcVar10 = local_80;
      if (pcVar5 != (char *)0x0) {
        local_68 = puVar2 + 0xcab;
        local_58 = pcVar3;
        local_6c = 0;
        do {
          uVar8 = puVar2[1];
          if (uVar8 == 2) {
            if (*puVar2 - 0x660e < 4) {
              local_60 = local_50;
              ppcVar11[1] = local_60;
              ppcVar11[2] = (char *)local_68;
              *ppcVar11 = local_58;
              ppcVar11[-1] = (char *)0x411483f;
              FUN_0420d7b0();
              local_54 = (uint *)puVar2[7];
            }
            else {
              *ppcVar11 = (char *)0x80090008;
              ppcVar11[-1] = (char *)0x4114801;
              eON_SetLastError();
              local_54 = (uint *)puVar2[7];
              local_60 = local_50;
              ppcVar11 = ppcVar11 + -1;
            }
          }
          else if (uVar8 == 4) {
            local_60 = local_50;
            puVar12 = (uint *)0x0;
            if (puVar2[7] == 0) {
              local_54 = (uint *)0x0;
            }
            else {
              do {
                if (*puVar2 - 0x660e < 4) {
                  ppcVar11[1] = (char *)local_38;
                  *ppcVar11 = (char *)(puVar2 + 0x10e5);
                  ppcVar11[2] = (char *)local_68;
                  ppcVar11[-1] = (char *)0x41147e4;
                  FUN_0420d7b0();
                }
                else {
                  *ppcVar11 = (char *)0x80090008;
                  ppcVar11[-1] = (char *)0x411473c;
                  eON_SetLastError();
                  ppcVar11 = ppcVar11 + -1;
                }
                bVar1 = local_58[(int)puVar12];
                local_54 = (uint *)puVar2[7];
                local_60[(int)puVar12] = bVar1 ^ local_38[0];
                iVar6 = 0;
                if (local_54 != (uint *)0x1) {
                  iVar7 = iVar6;
                  do {
                    iVar6 = iVar7 + 1;
                    *(undefined1 *)((int)puVar2 + iVar7 + 0x4394) =
                         *(undefined1 *)((int)puVar2 + iVar7 + 0x4395);
                    iVar7 = iVar6;
                  } while (iVar6 != (int)local_54 + -1);
                }
                puVar12 = (uint *)((int)puVar12 + 1);
                *(byte *)((int)puVar2 + iVar6 + 0x4394) = bVar1 ^ local_38[0];
              } while (puVar12 < local_54);
            }
          }
          else {
            if (uVar8 != 1) {
              *ppcVar11 = (char *)0x80090008;
              ppcVar11[-1] = (char *)0x411465f;
              eON_SetLastError();
              return 0;
            }
            uVar8 = 0;
            if (puVar2[7] != 0) {
              do {
                local_58[uVar8] = local_58[uVar8] ^ *(byte *)((int)puVar2 + uVar8 + 0x4394);
                uVar8 = uVar8 + 1;
              } while (uVar8 < puVar2[7]);
            }
            if (*puVar2 - 0x660e < 4) {
              local_60 = local_50;
              ppcVar11[1] = local_60;
              ppcVar11[2] = (char *)local_68;
              *ppcVar11 = local_58;
              ppcVar11[-1] = (char *)0x41146df;
              FUN_0420d7b0();
            }
            else {
              *ppcVar11 = (char *)0x80090008;
              ppcVar11[-1] = (char *)0x4114859;
              eON_SetLastError();
              local_60 = local_50;
              ppcVar11 = ppcVar11 + -1;
            }
            uVar8 = puVar2[7];
            ppcVar11[1] = local_60;
            *ppcVar11 = (char *)(puVar2 + 0x10e5);
            ppcVar11[2] = (char *)uVar8;
            ppcVar11[-1] = (char *)0x41146fb;
            memcpy(*ppcVar11,ppcVar11[1],(size_t)ppcVar11[2]);
            local_54 = (uint *)puVar2[7];
          }
          ppcVar11[2] = (char *)local_54;
          ppcVar11[1] = local_60;
          *ppcVar11 = local_58;
          ppcVar11[-1] = (char *)0x41147a8;
          memcpy(*ppcVar11,ppcVar11[1],(size_t)ppcVar11[2]);
          local_6c = local_6c + puVar2[7];
          local_58 = local_58 + puVar2[7];
          ppcVar10 = ppcVar11;
        } while (local_6c < *local_5c);
      }
    }
    else {
      ppcVar10 = local_80;
      if (uVar8 == 0x800) {
        if (*puVar2 != 0x6801) {
          return 0;
        }
        local_78 = (int)(puVar2 + 9);
        local_80[1] = (char *)*local_5c;
        local_80[0] = pcVar3;
        FUN_04246be0();
        ppcVar10 = local_80;
      }
    }
    uVar13 = 1;
    if (local_64 != 0) {
      *(undefined4 *)((int)ppcVar10 + -4) = 0x41144fc;
      FUN_04111fa0();
      return 1;
    }
  }
  else {
    if (puVar2[8] == 1) goto LAB_041144bf;
LAB_04114515:
    local_80[0] = (char *)0x80090005;
    uVar13 = 0;
    eON_SetLastError();
  }
  return uVar13;
}

// --- eON_CryptImportKey @0x04112d60 ---
/* source: crypt */

undefined4
eON_CryptImportKey(undefined4 param_1,byte *param_2,uint param_3,undefined4 param_4,uint param_5,
                  undefined4 *param_6)

{
  int *piVar1;
  size_t __size;
  byte bVar2;
  undefined1 uVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  bVar2 = *param_2;
  if (bVar2 != 6) {
    if (bVar2 < 7) {
      if (bVar2 == 1) {
        return 0;
      }
    }
    else {
      if (bVar2 == 7) {
        iVar6 = *(int *)(param_2 + 4);
        if ((iVar6 == 2) || (iVar6 == 0x2400)) {
          if (*(int *)(param_2 + 8) != 0x32415352) {
            return 0;
          }
          uVar8 = *(uint *)(param_2 + 0xc);
          uVar10 = uVar8 >> 3;
          if (uVar10 == 0) {
            return 0;
          }
          iVar11 = (int)(uVar10 + 1) >> 1;
          __size = iVar11 * 5 + uVar10 * 2;
          if (param_3 < __size + 0x14) {
            return 0;
          }
          piVar4 = malloc(0x43bc);
          if (piVar4 != (int *)0x0) {
            piVar4[2] = 0;
            piVar4[3] = 0x3b;
            piVar4[5] = 0;
            *piVar4 = iVar6;
            piVar4[4] = uVar10;
            bzero(piVar4 + 0x10d3,0x30);
            bzero(piVar4 + 0x10df,0x18);
            piVar4[1] = 0;
            piVar4[0x10ec] = 0;
            piVar4[0x10eb] = 0;
            piVar4[0x10ee] = 0;
            piVar4[7] = uVar10;
            piVar4[0x10ed] = 0;
            piVar4[0x10e5] = piVar4[0x10df];
            piVar4[0x10e6] = piVar4[0x10e0];
            piVar4[0x10e7] = piVar4[0x10e1];
            piVar4[0x10e8] = piVar4[0x10e2];
            piVar4[0x10e9] = piVar4[0x10e3];
            piVar4[0x10ea] = piVar4[0x10e4];
            pvVar5 = malloc(__size);
            if (pvVar5 != (void *)0x0) {
              piVar1 = piVar4 + 0xca5;
              iVar6 = FUN_04240e30(piVar4 + 0xca3,piVar4 + 0xca4,piVar1,piVar4 + 0xcaa,
                                   piVar4 + 0xca9,piVar4 + 0xca8,piVar4 + 0xca6,piVar4 + 0xca7,0);
              if (iVar6 == 0) {
                memcpy(pvVar5,param_2 + 0x14,__size);
                piVar4[0xca2] = 1;
                uVar8 = uVar8 >> 4;
                if (uVar8 != 0) {
                  uVar7 = 0;
                  iVar6 = uVar10 + (int)pvVar5;
                  do {
                    uVar3 = *(undefined1 *)((int)pvVar5 + uVar7);
                    *(undefined1 *)((int)pvVar5 + uVar7) = *(undefined1 *)(iVar6 + -1);
                    uVar7 = uVar7 + 1;
                    *(undefined1 *)(iVar6 + -1) = uVar3;
                    iVar6 = iVar6 + -1;
                  } while (uVar7 != uVar8);
                }
                iVar6 = (*DAT_04525450)(piVar1,pvVar5,uVar10);
                if (iVar6 == 0) {
                  iVar9 = uVar10 + (int)pvVar5;
                  FUN_04114d60(iVar9,iVar11);
                  iVar6 = (*DAT_04525450)(piVar4[0xca6],iVar9,iVar11);
                  if (iVar6 == 0) {
                    iVar9 = iVar9 + iVar11;
                    FUN_04114d60(iVar9,iVar11);
                    iVar6 = (*DAT_04525450)(piVar4[0xca7],iVar9,iVar11);
                    if (iVar6 == 0) {
                      iVar9 = iVar9 + iVar11;
                      FUN_04114d60(iVar9,iVar11);
                      iVar6 = (*DAT_04525450)(piVar4[0xca9],iVar9,iVar11);
                      if (iVar6 == 0) {
                        iVar9 = iVar9 + iVar11;
                        FUN_04114d60(iVar9,iVar11);
                        iVar6 = (*DAT_04525450)(piVar4[0xcaa],iVar9,iVar11);
                        if (iVar6 == 0) {
                          iVar9 = iVar9 + iVar11;
                          FUN_04114d60(iVar9,iVar11);
                          iVar6 = (*DAT_04525450)(piVar4[0xca8],iVar9,iVar11);
                          if (iVar6 == 0) {
                            FUN_04114d60(iVar9 + iVar11,uVar10);
                            iVar6 = (*DAT_04525450)(piVar4[0xca4],iVar9 + iVar11,uVar10);
                            if ((iVar6 == 0) &&
                               (iVar6 = (*DAT_0452541c)(piVar4[0xca3],
                                                        *(undefined4 *)(param_2 + 0x10)), iVar6 == 0
                               )) {
                              free(pvVar5);
                              DAT_04512a34 = piVar4;
                              *param_6 = piVar4;
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                FUN_04240fe0(piVar4 + 0xca3,piVar4 + 0xca4,piVar1,piVar4 + 0xcaa,piVar4 + 0xca9,
                             piVar4 + 0xca8,piVar4 + 0xca6,piVar4 + 0xca7,0);
              }
              free(pvVar5);
            }
            free(piVar4);
          }
        }
        eON_SetLastError(0x80090020);
        return 0;
      }
      if (bVar2 == 8) {
        uVar8 = *(uint *)(param_2 + 8);
        if (param_3 < uVar8 + 0xc) {
          FUN_0400a810("dwDataLen >= sizeof(BLOBHEADER) + sizeof(DWORD) + *pKeyLen",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/advapi32/crypt.cpp"
                       ,0x265,
                       "WINBOOL eON_CryptImportKey(HCRYPTPROV, PBYTE, DWORD, HCRYPTKEY, DWORD, HCRYPTKEY*)"
                      );
          uVar8 = *(uint *)(param_2 + 8);
        }
        iVar6 = *(int *)(param_2 + 4);
        if ((param_5 & 0x100) != 0) {
          return 0;
        }
        piVar4 = malloc(0x43bc);
        piVar4[2] = 0;
        piVar4[3] = 0x3b;
        piVar4[5] = 0;
        *piVar4 = iVar6;
        piVar4[4] = uVar8 & 0x1fff;
        bzero(piVar4 + 0x10d3,0x30);
        bzero(piVar4 + 0x10df,0x18);
        piVar4[0x10ec] = 0;
        piVar4[0x10eb] = 0;
        piVar4[0x10ee] = 0;
        piVar4[0x10ed] = 0;
        if (3 < iVar6 - 0x660eU) {
          return 0;
        }
        piVar4[7] = 0x10;
        piVar4[1] = 2;
        memcpy(piVar4 + 0x10d3,param_2 + 0xc,*(size_t *)(param_2 + 8));
        FUN_04111fa0();
        DAT_04512a34 = piVar4;
        *param_6 = piVar4;
        return 1;
      }
    }
    FUN_0402cd10(5,"unknown blob");
    return 0;
  }
  iVar6 = *(int *)(param_2 + 4);
  if ((iVar6 != 0x2400) && (iVar6 != 0xa400)) {
    return 0;
  }
  if (*(int *)(param_2 + 8) != 0x31415352) {
    return 0;
  }
  uVar8 = *(uint *)(param_2 + 0xc);
  uVar10 = uVar8 >> 3;
  if (uVar10 == 0) {
    return 0;
  }
  if (param_3 < uVar10 + 0x14) {
    return 0;
  }
  piVar4 = malloc(0x43bc);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  *piVar4 = iVar6;
  piVar4[2] = 0;
  piVar4[3] = 0x3b;
  piVar4[5] = 0;
  piVar4[4] = uVar10;
  bzero(piVar4 + 0x10d3,0x30);
  bzero(piVar4 + 0x10df,0x18);
  piVar4[7] = uVar10;
  piVar4[0x10ec] = 0;
  piVar4[0x10eb] = 0;
  piVar4[0x10ee] = 0;
  piVar4[0x10ed] = 0;
  piVar4[1] = 0;
  piVar4[0x10e5] = piVar4[0x10df];
  piVar4[0x10e6] = piVar4[0x10e0];
  piVar4[0x10e7] = piVar4[0x10e1];
  piVar4[0x10e8] = piVar4[0x10e2];
  piVar4[0x10e9] = piVar4[0x10e3];
  piVar4[0x10ea] = piVar4[0x10e4];
  pvVar5 = malloc(uVar10);
  if (pvVar5 != (void *)0x0) {
    iVar6 = FUN_04240e30(piVar4 + 0xca3,piVar4 + 0xca4,piVar4 + 0xca5,piVar4 + 0xcaa,piVar4 + 0xca9,
                         piVar4 + 0xca8,piVar4 + 0xca6,piVar4 + 0xca7,0);
    if (iVar6 == 0) {
      piVar4[0xca2] = 0;
      memcpy(pvVar5,param_2 + 0x14,uVar10);
      uVar8 = uVar8 >> 4;
      if (uVar8 != 0) {
        uVar7 = 0;
        iVar6 = uVar10 + (int)pvVar5;
        do {
          uVar3 = *(undefined1 *)((int)pvVar5 + uVar7);
          *(undefined1 *)((int)pvVar5 + uVar7) = *(undefined1 *)(iVar6 + -1);
          uVar7 = uVar7 + 1;
          *(undefined1 *)(iVar6 + -1) = uVar3;
          iVar6 = iVar6 + -1;
        } while (uVar7 != uVar8);
      }
      iVar6 = (*DAT_04525450)(piVar4[0xca5],pvVar5,uVar10);
      if (iVar6 == 0) {
        free(pvVar5);
        iVar6 = (*DAT_0452541c)(piVar4[0xca3],*(undefined4 *)(param_2 + 0x10));
        if (iVar6 == 0) {
          DAT_04512a34 = piVar4;
          *param_6 = piVar4;
          return 1;
        }
      }
      FUN_04240fe0(piVar4 + 0xca3,piVar4 + 0xca4,piVar4 + 0xca5,piVar4 + 0xcaa,piVar4 + 0xca9,
                   piVar4 + 0xca8,piVar4 + 0xca6,piVar4 + 0xca7,0);
    }
    free(pvVar5);
  }
  free(piVar4);
  return 0;
}

