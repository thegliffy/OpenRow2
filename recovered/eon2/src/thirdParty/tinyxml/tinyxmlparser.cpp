// Recovered source: eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- TiXmlBase::GetEntity @0x041c7020 ---
/* WARNING: Removing unreachable block (ram,0x041c71c4) */
/* WARNING: Removing unreachable block (ram,0x041c71cc) */
/* source: tinyxmlparser */

char * TiXmlBase__GetEntity(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  size_t sVar8;
  int local_30;
  
  *param_3 = 0;
  sVar8 = DAT_04410c44;
  pcVar4 = PTR_s__amp__04410c40;
  if ((param_1[1] != '#') || (param_1[2] == '\0')) {
    iVar3 = strncmp(PTR_s__amp__04410c40,param_1,DAT_04410c44);
    sVar6 = DAT_04410c50;
    puVar2 = PTR_DAT_04410c4c;
    if (iVar3 == 0) {
      local_30 = 0;
    }
    else {
      iVar3 = strncmp(PTR_DAT_04410c4c,param_1,DAT_04410c50);
      sVar8 = DAT_04410c5c;
      pcVar4 = PTR_DAT_04410c58;
      if (iVar3 == 0) {
        local_30 = 1;
        sVar8 = sVar6;
        pcVar4 = puVar2;
      }
      else {
        iVar3 = strncmp(PTR_DAT_04410c58,param_1,DAT_04410c5c);
        sVar6 = DAT_04410c68;
        puVar2 = PTR_s__quot__04410c64;
        if (iVar3 == 0) {
          local_30 = 2;
        }
        else {
          iVar3 = strncmp(PTR_s__quot__04410c64,param_1,DAT_04410c68);
          sVar8 = DAT_04410c74;
          pcVar4 = PTR_s__apos__04410c70;
          if (iVar3 == 0) {
            local_30 = 3;
            sVar8 = sVar6;
            pcVar4 = puVar2;
          }
          else {
            iVar3 = strncmp(PTR_s__apos__04410c70,param_1,DAT_04410c74);
            if (iVar3 != 0) {
              *param_2 = *param_1;
              return param_1 + 1;
            }
            local_30 = 4;
          }
        }
      }
    }
    sVar6 = strlen(pcVar4);
    if (sVar6 != sVar8) {
                    /* try { // try from 041c72d2 to 041c72d6 has its CatchHandler @ 041c737c */
      FUN_0400a810("strlen( entity[i].str ) == entity[i].strLength",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                   ,0x207,
                   "static const char* TiXmlBase::GetEntity(const char*, char*, int*, TiXmlEncoding)"
                  );
    }
    *param_2 = *(char *)(local_30 * 0xc + 0x4410c48);
    *param_3 = 1;
    return param_1 + (&DAT_04410c44)[local_30 * 3];
  }
  if (param_1[2] == 'x') {
    iVar3 = 0;
    if (param_1[3] == '\0') {
      return (char *)0x0;
    }
    pcVar4 = strchr(param_1 + 3,0x3b);
    if (pcVar4 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    local_30 = (int)pcVar4 - (int)param_1;
    cVar1 = pcVar4[-1];
    if (cVar1 != 'x') {
      pcVar4 = pcVar4 + -1;
      iVar5 = 1;
      do {
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar3 = iVar3 + (cVar1 + -0x30) * iVar5;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar3 = iVar3 + (cVar1 + -0x57) * iVar5;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) {
            return (char *)0x0;
          }
          iVar3 = iVar3 + (cVar1 + -0x37) * iVar5;
        }
        pcVar4 = pcVar4 + -1;
        iVar5 = iVar5 << 4;
        cVar1 = *pcVar4;
      } while (cVar1 != 'x');
      goto LAB_041c7195;
    }
  }
  else {
    pcVar4 = strchr(param_1 + 2,0x3b);
    if (pcVar4 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    cVar1 = pcVar4[-1];
    local_30 = (int)pcVar4 - (int)param_1;
    if (cVar1 != '#') {
      if (9 < (byte)(cVar1 - 0x30U)) {
        return (char *)0x0;
      }
      pcVar4 = pcVar4 + -1;
      iVar3 = 0;
      iVar5 = 1;
      while( true ) {
        pcVar4 = pcVar4 + -1;
        iVar7 = (cVar1 + -0x30) * iVar5;
        iVar5 = iVar5 * 10;
        iVar3 = iVar3 + iVar7;
        cVar1 = *pcVar4;
        if (cVar1 == '#') break;
        if (9 < (byte)(cVar1 - 0x30U)) {
          return (char *)0x0;
        }
      }
      goto LAB_041c7195;
    }
  }
  iVar3 = 0;
LAB_041c7195:
  if (param_4 == 1) {
    TiXmlBase__ConvertUTF32ToUTF8(iVar3,param_2,param_3);
  }
  else {
    *param_2 = (char)iVar3;
    *param_3 = 1;
  }
  return param_1 + local_30 + 1;
}

// --- TiXmlBase::ReadName @0x041c6f20 ---
/* source: tinyxmlparser */

byte * TiXmlBase__ReadName(byte *param_1,undefined4 param_2)

{
  ushort **ppuVar1;
  byte bVar2;
  byte *pbVar3;
  
  TiXmlString__assign(param_2,&DAT_04328763,0);
  if (param_1 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
    FUN_0400a810(&DAT_04361ca0,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                 ,0x197,
                 "static const char* TiXmlBase::ReadName(const char*, TiXmlString*, TiXmlEncoding)")
    ;
  }
  else {
    bVar2 = *param_1;
    pbVar3 = (byte *)0x0;
    if (bVar2 != 0) {
      pbVar3 = param_1;
      if (((bVar2 < 0x7f) &&
          (ppuVar1 = __ctype_b_loc(), (*(byte *)((int)*ppuVar1 + (uint)bVar2 * 2 + 1) & 4) == 0)) &&
         (bVar2 != 0x5f)) {
        pbVar3 = (byte *)0x0;
      }
      else {
        while ((((0x7e < bVar2 || (ppuVar1 = __ctype_b_loc(), ((*ppuVar1)[bVar2] & 8) != 0)) ||
                ((bVar2 == 0x5f || ((bVar2 == 0x2d || (bVar2 == 0x2e)))))) || (bVar2 == 0x3a))) {
          pbVar3 = pbVar3 + 1;
          if ((pbVar3 == (byte *)0x0) || (bVar2 = *pbVar3, bVar2 == 0)) break;
        }
        if (0 < (int)pbVar3 - (int)param_1) {
          TiXmlString__assign(param_2,param_1,(int)pbVar3 - (int)param_1);
          return pbVar3;
        }
      }
    }
  }
  return pbVar3;
}

// --- TiXmlBase::ReadText @0x041c73a0 ---
/* source: tinyxml, tinyxmlparser */

byte * __regparm3
TiXmlBase__ReadText(byte *param_1,undefined4 param_2,char param_3,char *param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  size_t sVar4;
  byte *pbVar5;
  ushort **ppuVar6;
  uint uVar7;
  uint uVar8;
  uint local_28;
  byte local_21 [17];
  
  TiXmlString__assign(param_2,&DAT_04328763,0);
  if ((param_3 == '\0') || (DAT_04410be0 == '\0')) {
    while (param_1 != (byte *)0x0) {
      bVar2 = *param_1;
      if (bVar2 == 0) goto LAB_041c73eb;
      if (param_4 == (char *)0x0) {
        FUN_0400a810(&PTR_DAT_0435cf24,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                     ,0x21c,
                     "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                    );
        bVar2 = *param_1;
      }
      if (bVar2 == 0) {
        FUN_0400a810("0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                     ,0x21f,
                     "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                    );
      }
      else {
        cVar3 = TiXmlBase__StringEqual(param_5);
        if (cVar3 != '\0') goto LAB_041c73eb;
      }
      local_21[0] = 0;
      local_21[1] = 0;
      local_21[2] = 0;
      local_21[3] = 0;
      if (param_5 == 1) {
        local_28 = *(uint *)(&DAT_04362a20 + (uint)*param_1 * 4);
        if (4 < local_28) {
          FUN_0400a810("*length >= 0 && *length < 5",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.h"
                       ,0x14c,
                       "static const char* TiXmlBase::GetChar(const char*, char*, int*, TiXmlEncoding)"
                      );
        }
        if (local_28 == 1) goto LAB_041c746d;
        if (local_28 == 0) {
          TiXmlString__append(param_2,local_21,0);
          return (byte *)0x0;
        }
        bVar2 = *param_1;
        if ((bVar2 != 0) && (uVar8 = 0, 0 < (int)local_28)) {
          do {
            uVar7 = uVar8 + 1;
            local_21[uVar8] = bVar2;
            bVar2 = param_1[uVar7];
            if (bVar2 == 0) break;
            uVar8 = uVar7;
          } while (uVar7 != local_28);
        }
        param_1 = param_1 + local_28;
      }
      else {
        local_28 = 1;
LAB_041c746d:
        bVar2 = *param_1;
        if (bVar2 == 0x26) {
          param_1 = (byte *)TiXmlBase__GetEntity(param_1,local_21,&local_28,param_5);
        }
        else {
          param_1 = param_1 + 1;
          local_21[0] = bVar2;
        }
      }
      TiXmlString__append(param_2,local_21,local_28);
    }
  }
  else {
    param_1 = (byte *)TiXmlBase__SkipWhiteSpace(param_1,param_5);
    if (param_1 != (byte *)0x0) {
      bVar2 = *param_1;
      if (bVar2 != 0) {
        bVar1 = false;
        do {
          if (param_4 == (char *)0x0) {
            FUN_0400a810(&PTR_DAT_0435cf24,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                         ,0x21c,
                         "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                        );
            bVar2 = *param_1;
          }
          if (bVar2 == 0) {
            FUN_0400a810("0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                         ,0x21f,
                         "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                        );
            bVar2 = *param_1;
          }
          else {
            cVar3 = TiXmlBase__StringEqual(param_5);
            if (cVar3 != '\0') break;
          }
          if (((bVar2 == 10) || (bVar2 == 0xd)) ||
             (ppuVar6 = __ctype_b_loc(),
             (*(byte *)((int)*ppuVar6 + (uint)bVar2 * 2 + 1) & 0x20) != 0)) {
            param_1 = param_1 + 1;
            bVar1 = true;
          }
          else {
            if (bVar1) {
              local_21[4] = 0x20;
              TiXmlString__append(param_2,local_21 + 4,1);
            }
            local_21[0] = 0;
            local_21[1] = 0;
            local_21[2] = 0;
            local_21[3] = 0;
            if (param_5 == 1) {
              local_28 = *(uint *)(&DAT_04362a20 + (uint)*param_1 * 4);
              if (4 < local_28) {
                FUN_0400a810("*length >= 0 && *length < 5",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.h"
                             ,0x14c,
                             "static const char* TiXmlBase::GetChar(const char*, char*, int*, TiXmlEncoding)"
                            );
              }
              if (local_28 == 1) goto LAB_041c75fd;
              if (local_28 != 0) {
                bVar2 = *param_1;
                if ((bVar2 != 0) && (uVar8 = 0, 0 < (int)local_28)) {
                  do {
                    uVar7 = uVar8 + 1;
                    local_21[uVar8] = bVar2;
                    bVar2 = param_1[uVar7];
                    if (bVar2 == 0) break;
                    uVar8 = uVar7;
                  } while (uVar7 != local_28);
                }
                param_1 = param_1 + local_28;
                uVar8 = local_28;
                goto joined_r0x041c7778;
              }
              param_1 = (byte *)0x0;
              uVar8 = 0;
LAB_041c7620:
              pbVar5 = local_21;
            }
            else {
              local_28 = 1;
LAB_041c75fd:
              bVar2 = *param_1;
              if (bVar2 == 0x26) {
                param_1 = (byte *)TiXmlBase__GetEntity(param_1,local_21,&local_28,param_5);
                uVar8 = local_28;
              }
              else {
                param_1 = param_1 + 1;
                uVar8 = local_28;
                local_21[0] = bVar2;
              }
joined_r0x041c7778:
              local_28 = uVar8;
              if (uVar8 != 1) goto LAB_041c7620;
              uVar8 = 1;
              pbVar5 = local_21 + 4;
              local_21[4] = local_21[0];
            }
            bVar1 = false;
            TiXmlString__append(param_2,pbVar5,uVar8);
          }
          if (param_1 == (byte *)0x0) {
            return (byte *)0x0;
          }
          bVar2 = *param_1;
        } while (bVar2 != 0);
      }
LAB_041c73eb:
      if (param_1 != (byte *)0x0) {
        if (*param_1 != 0) {
          sVar4 = strlen(param_4);
          param_1 = param_1 + sVar4;
          if (param_1 == (byte *)0x0) {
            return (byte *)0x0;
          }
          if (*param_1 != 0) {
            return param_1;
          }
        }
        return (byte *)0x0;
      }
    }
  }
  return (byte *)0x0;
}

// --- TiXmlBase::StringEqual @0x041c6930 ---
bool __regparm3 TiXmlBase__StringEqual(char *param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  __int32_t **pp_Var2;
  char cVar3;
  char cVar4;
  __int32_t _Var5;
  __int32_t _Var6;
  
  if (param_3 == 0) {
    if (*param_1 != '\0') {
      if (*param_2 == '\0') {
        return true;
      }
      if (*param_1 != *param_2) {
        return false;
      }
      while( true ) {
        pcVar1 = param_1 + 1;
        param_2 = param_2 + 1;
        if (*pcVar1 == '\0') break;
        if (*param_2 == '\0') {
          return true;
        }
        param_1 = param_1 + 1;
        if (*pcVar1 != *param_2) {
          return false;
        }
      }
    }
  }
  else {
    cVar3 = *param_1;
    if (cVar3 != '\0') {
      cVar4 = *param_2;
      if (cVar4 == '\0') {
        return true;
      }
      if (param_4 == 1) {
        do {
          _Var6 = (__int32_t)cVar3;
          if (_Var6 + 0x80U < 0x180) {
            pp_Var2 = __ctype_tolower_loc();
            _Var6 = (*pp_Var2)[_Var6];
          }
          _Var5 = (__int32_t)cVar4;
          if (_Var5 + 0x80U < 0x180) {
            pp_Var2 = __ctype_tolower_loc();
            _Var5 = (*pp_Var2)[_Var5];
          }
          if (_Var6 != _Var5) goto LAB_041c6948;
          cVar3 = param_1[1];
          param_2 = param_2 + 1;
          if (cVar3 == '\0') goto LAB_041c6948;
          cVar4 = *param_2;
          param_1 = param_1 + 1;
        } while (cVar4 != '\0');
      }
      else {
        do {
          _Var6 = (__int32_t)cVar3;
          if (_Var6 + 0x80U < 0x180) {
            pp_Var2 = __ctype_tolower_loc();
            _Var6 = (*pp_Var2)[_Var6];
          }
          _Var5 = (__int32_t)cVar4;
          if (_Var5 + 0x80U < 0x180) {
            pp_Var2 = __ctype_tolower_loc();
            _Var5 = (*pp_Var2)[_Var5];
          }
          if (_Var6 != _Var5) goto LAB_041c6948;
          cVar3 = param_1[1];
          param_2 = param_2 + 1;
          if (cVar3 == '\0') goto LAB_041c6948;
          cVar4 = *param_2;
          param_1 = param_1 + 1;
        } while (cVar4 != '\0');
      }
      return true;
    }
  }
LAB_041c6948:
  return *param_2 == '\0';
}

// --- TiXmlComment::Parse @0x041c8ef0 ---
/* source: tinyxmlparser */

char * TiXmlComment__Parse(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = TiXmlNode__GetDocument(param_1);
  iVar1 = param_1 + 0x20;
  TiXmlString__assign(iVar1,&DAT_04328763,0);
  pcVar5 = (char *)TiXmlBase__SkipWhiteSpace(param_2,param_4);
  if (param_3 != (undefined4 *)0x0) {
    TiXmlParsingData__Stamp(param_3,pcVar5,param_4);
    uVar2 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if (pcVar5 == (char *)0x0) {
    FUN_0400a810(&DAT_04361ca0,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                 ,0x21b,
                 "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                );
  }
  else if (*pcVar5 != '\0') {
    cVar3 = TiXmlBase__StringEqual(param_4);
    if (cVar3 != '\0') {
      pcVar6 = pcVar5 + 4;
      TiXmlString__assign(iVar1,&DAT_04328763,0);
      if (pcVar6 == (char *)0x0) {
        return (char *)0x0;
      }
      if (pcVar5[4] == '\0') {
        return pcVar6;
      }
      while( true ) {
        cVar3 = TiXmlBase__StringEqual(param_4);
        if (cVar3 != '\0') {
          return pcVar6 + 3;
        }
        TiXmlString__append(iVar1,pcVar6,1);
        pcVar6 = pcVar6 + 1;
        if (pcVar6 == (char *)0x0) break;
        if (*pcVar6 == '\0') {
          return pcVar6;
        }
      }
      return (char *)0x0;
    }
    goto joined_r0x041c906b;
  }
  FUN_0400a810("0",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
               ,0x21f,
               "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)");
joined_r0x041c906b:
  if (iVar4 != 0) {
    TiXmlDocument__SetError(iVar4,10,pcVar5,param_3,param_4);
  }
  return (char *)0x0;
}

// --- TiXmlDeclaration::Parse @0x041c9360 ---
/* source: tinyxmlparser */

byte * TiXmlDeclaration__Parse
                 (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  ushort **ppuVar7;
  byte bVar8;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  pcVar3 = (char *)TiXmlBase__SkipWhiteSpace(param_2,param_4);
  iVar4 = TiXmlNode__GetDocument(param_1);
  if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) ||
     (cVar2 = TiXmlBase__StringEqual(param_4), cVar2 == '\0')) {
    if (iVar4 != 0) {
      TiXmlDocument__SetError(iVar4,0xb,0,0,param_4);
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      TiXmlParsingData__Stamp(param_3,pcVar3,param_4);
      uVar1 = param_3[1];
      *(undefined4 *)(param_1 + 4) = *param_3;
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    pbVar5 = (byte *)(pcVar3 + 5);
    TiXmlString__assign(param_1 + 0x2c,&DAT_04328763,0);
    TiXmlString__assign(param_1 + 0x30,&DAT_04328763,0);
    TiXmlString__assign(param_1 + 0x34,&DAT_04328763,0);
    if (pbVar5 != (byte *)0x0) {
      bVar8 = pcVar3[5];
      do {
        if (bVar8 == 0) {
          return (byte *)0x0;
        }
        if (bVar8 == 0x3e) goto LAB_041c98d0;
        pbVar5 = (byte *)TiXmlBase__SkipWhiteSpace(pbVar5,param_4);
        if (pbVar5 == (byte *)0x0) {
          FUN_0400a810(&DAT_04361ca0,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21b,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          FUN_0400a810("0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21f,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          FUN_0400a810(&DAT_04361ca0,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21b,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          FUN_0400a810("0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21f,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          FUN_0400a810(&DAT_04361ca0,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21b,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          FUN_0400a810("0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21f,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          return (byte *)0x0;
        }
        bVar8 = *pbVar5;
        if (bVar8 == 0) {
          FUN_0400a810("0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21f,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          bVar8 = *pbVar5;
          if (bVar8 != 0) goto LAB_041c95f1;
          FUN_0400a810("0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21f,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          bVar8 = *pbVar5;
          if (bVar8 != 0) goto LAB_041c96c1;
          FUN_0400a810("0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                       ,0x21f,
                       "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                      );
          bVar8 = *pbVar5;
          if (bVar8 == 0) {
            return (byte *)0x0;
          }
LAB_041c9798:
          if (bVar8 == 0x3e) {
LAB_041c98d0:
            return pbVar5 + 1;
          }
          ppuVar7 = __ctype_b_loc();
          while ((((*(byte *)((int)*ppuVar7 + (uint)bVar8 * 2 + 1) & 0x20) == 0 && (bVar8 != 10)) &&
                 (bVar8 != 0xd))) {
            pbVar5 = pbVar5 + 1;
            if (pbVar5 == (byte *)0x0) {
              return (byte *)0x0;
            }
            bVar8 = *pbVar5;
            if (bVar8 == 0) {
              return (byte *)0x0;
            }
            if (bVar8 == 0x3e) goto LAB_041c98d0;
          }
        }
        else {
          cVar2 = TiXmlBase__StringEqual(param_4);
          if (cVar2 == '\0') {
LAB_041c95f1:
            cVar2 = TiXmlBase__StringEqual(param_4);
            if (cVar2 == '\0') {
LAB_041c96c1:
              cVar2 = TiXmlBase__StringEqual(param_4);
              if (cVar2 == '\0') goto LAB_041c9798;
              local_38 = 0xffffffff;
              local_3c = 0xffffffff;
              local_34 = 0;
              local_40 = &PTR_FUN_043629f8;
              local_2c = &DAT_0451eee4;
              local_28 = &DAT_0451eee4;
              local_30 = 0;
              local_20 = 0;
              local_24 = 0;
                    /* try { // try from 041c9731 to 041c9758 has its CatchHandler @ 041c990f */
              pbVar5 = (byte *)TiXmlAttribute__Parse(&local_40,pbVar5,param_3,param_4);
              pcVar3 = (char *)(local_28 + 2);
              sVar6 = strlen(pcVar3);
              TiXmlString__assign(param_1 + 0x34,pcVar3,sVar6);
            }
            else {
              local_38 = 0xffffffff;
              local_3c = 0xffffffff;
              local_34 = 0;
              local_40 = &PTR_FUN_043629f8;
              local_2c = &DAT_0451eee4;
              local_28 = &DAT_0451eee4;
              local_30 = 0;
              local_20 = 0;
              local_24 = 0;
                    /* try { // try from 041c9661 to 041c9688 has its CatchHandler @ 041c98fa */
              pbVar5 = (byte *)TiXmlAttribute__Parse(&local_40,pbVar5,param_3,param_4);
              pcVar3 = (char *)(local_28 + 2);
              sVar6 = strlen(pcVar3);
              TiXmlString__assign(param_1 + 0x30,pcVar3,sVar6);
            }
          }
          else {
            local_38 = 0xffffffff;
            local_3c = 0xffffffff;
            local_34 = 0;
            local_40 = &PTR_FUN_043629f8;
            local_2c = &DAT_0451eee4;
            local_28 = &DAT_0451eee4;
            local_30 = 0;
            local_20 = 0;
            local_24 = 0;
                    /* try { // try from 041c9533 to 041c955a has its CatchHandler @ 041c98e5 */
            pbVar5 = (byte *)TiXmlAttribute__Parse(&local_40,pbVar5,param_3,param_4);
            pcVar3 = (char *)(local_28 + 2);
            sVar6 = strlen(pcVar3);
            TiXmlString__assign(param_1 + 0x2c,pcVar3,sVar6);
          }
          local_40 = &PTR_FUN_043629f8;
          if ((local_28 != &DAT_0451eee4) && (local_28 != (undefined4 *)0x0)) {
            operator_delete__(local_28);
          }
          if ((local_2c != &DAT_0451eee4) && (local_2c != (undefined4 *)0x0)) {
            operator_delete__(local_2c);
          }
          local_40 = &PTR_FUN_04362158;
        }
        if (pbVar5 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar8 = *pbVar5;
      } while( true );
    }
  }
  return (byte *)0x0;
}

// --- TiXmlDocument::Parse @0x041c8330 ---
/* source: tinyxmlparser */

char * TiXmlDocument__Parse(int param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  TiXmlString__assign(param_1 + 0x34,&DAT_04328763,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      local_2c = 0;
      local_28 = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      local_2c = *param_3;
      local_28 = param_3[1];
      *(undefined4 *)(param_1 + 4) = local_2c;
      *(undefined4 *)(param_1 + 8) = local_28;
    }
    local_20 = *(undefined4 *)(param_1 + 0x38);
    local_24 = param_2;
    *(undefined4 *)(param_1 + 4) = local_2c;
    *(undefined4 *)(param_1 + 8) = local_28;
    if ((((param_4 == 0) && (*param_2 == -0x11)) && (param_2[1] == -0x45)) && (param_2[2] == -0x41))
    {
      *(undefined1 *)(param_1 + 0x44) = 1;
      param_4 = 1;
    }
    pcVar2 = (char *)TiXmlBase__SkipWhiteSpace(param_2,param_4);
    if (pcVar2 == (char *)0x0) {
      TiXmlDocument__SetError(param_1,0xc,0,0,0);
    }
    else {
      do {
        if ((*pcVar2 == '\0') ||
           (piVar3 = (int *)TiXmlNode__Identify(param_1,pcVar2,param_4), piVar3 == (int *)0x0))
        break;
        uVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,pcVar2,&local_2c,param_4);
        TiXmlNode__LinkEndChild(param_1,piVar3);
        if ((param_4 == 0) && (iVar5 = (**(code **)(*piVar3 + 0x3c))(piVar3), iVar5 != 0)) {
          iVar5 = (**(code **)(*piVar3 + 0x3c))(piVar3);
          iVar5 = *(int *)(iVar5 + 0x30);
          if (iVar5 == -8) {
            FUN_0400a810(&PTR_DAT_0436291f,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                         ,0x305,
                         "virtual const char* TiXmlDocument::Parse(const char*, TiXmlParsingData*, TiXmlEncoding)"
                        );
          }
          param_4 = 1;
          if (*(char *)(iVar5 + 8) != '\0') {
            if (iVar5 == -8) {
              FUN_0400a810(&DAT_04361ca0,
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                           ,0x21b,
                           "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                          );
              FUN_0400a810("0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                           ,0x21f,
                           "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                          );
              FUN_0400a810(&DAT_04361ca0,
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                           ,0x21b,
                           "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                          );
              FUN_0400a810("0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                           ,0x21f,
                           "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                          );
            }
            else {
              cVar1 = TiXmlBase__StringEqual(0);
              if ((cVar1 != '\0') || (cVar1 = TiXmlBase__StringEqual(0), cVar1 != '\0'))
              goto LAB_041c8458;
            }
            param_4 = 2;
          }
        }
LAB_041c8458:
        pcVar2 = (char *)TiXmlBase__SkipWhiteSpace(uVar4,param_4);
      } while (pcVar2 != (char *)0x0);
      if (*(int *)(param_1 + 0x18) == 0) goto LAB_041c8588;
    }
    return pcVar2;
  }
  param_4 = 0;
LAB_041c8588:
  TiXmlDocument__SetError(param_1,0xc,0,0,param_4);
  return (char *)0x0;
}

// --- TiXmlDocument::SetError @0x041c7dd0 ---
/* source: tinyxmlparser */

void TiXmlDocument__SetError
               (int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (0xe < param_2 - 1U) {
      FUN_0400a810("err > 0 && err < TIXML_ERROR_STRING_COUNT",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                   ,0x324,
                   "void TiXmlDocument::SetError(int, const char*, TiXmlParsingData*, TiXmlEncoding)"
                  );
    }
    *(int *)(param_1 + 0x30) = param_2;
    __s = (&PTR_s_No_error_04410c00)[param_2];
    *(undefined1 *)(param_1 + 0x2c) = 1;
    sVar2 = strlen(__s);
    TiXmlString__assign(param_1 + 0x34,__s,sVar2);
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    if ((param_4 != (undefined4 *)0x0) && (param_3 != 0)) {
      TiXmlParsingData__Stamp(param_4,param_3,param_5);
      uVar1 = param_4[1];
      *(undefined4 *)(param_1 + 0x3c) = *param_4;
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      return;
    }
  }
  return;
}

// --- TiXmlParsingData::Stamp @0x041c6c00 ---
/* source: tinyxmlparser */

void TiXmlParsingData__Stamp(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  if (param_2 == (byte *)0x0) {
    FUN_0400a810(&PTR_DAT_043628ce,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                 ,0xc6,"void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
  }
  if (0 < param_1[3]) {
    pbVar6 = (byte *)param_1[2];
    iVar4 = *param_1;
    iVar3 = param_1[1];
    if (pbVar6 == (byte *)0x0) {
      FUN_0400a810(&DAT_04361ca0,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                   ,0xd2,"void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
LAB_041c6c2e:
    if (pbVar6 < param_2) {
      while (bVar1 = *pbVar6, bVar1 != 10) {
        if (bVar1 < 0xb) {
          if (bVar1 == 0) {
            return;
          }
          if (bVar1 == 9) {
            pbVar6 = pbVar6 + 1;
            iVar3 = (iVar3 / param_1[3] + 1) * param_1[3];
            goto LAB_041c6c2e;
          }
LAB_041c6c4b:
          if (param_3 == 1) {
            iVar5 = 1;
            if (*(int *)(&DAT_04362a20 + (uint)bVar1 * 4) != 0) {
              iVar5 = *(int *)(&DAT_04362a20 + (uint)bVar1 * 4);
            }
            iVar3 = iVar3 + 1;
            pbVar6 = pbVar6 + iVar5;
            goto LAB_041c6c2e;
          }
        }
        else {
          if (bVar1 == 0xd) {
            if (pbVar6[1] != 10) goto LAB_041c6d01;
            goto LAB_041c6d19;
          }
          if (bVar1 != 0xef) goto LAB_041c6c4b;
          if (param_3 == 1) {
            bVar1 = pbVar6[1];
            if ((bVar1 == 0) || (bVar2 = pbVar6[2], bVar2 == 0)) goto LAB_041c6c2e;
            if (bVar1 == 0xbb) {
joined_r0x041c6e36:
              if (bVar2 == 0xbf) {
LAB_041c6e3c:
                pbVar6 = pbVar6 + 3;
                goto LAB_041c6c2e;
              }
            }
            else if (bVar1 == 0xbf) {
              if (bVar2 != 0xbe) goto joined_r0x041c6e36;
              goto LAB_041c6e3c;
            }
            pbVar6 = pbVar6 + 3;
            iVar3 = iVar3 + 1;
            goto LAB_041c6c2e;
          }
        }
        pbVar6 = pbVar6 + 1;
        iVar3 = iVar3 + 1;
        if (param_2 <= pbVar6) goto LAB_041c6c60;
      }
      if (pbVar6[1] == 0xd) {
LAB_041c6d19:
        iVar4 = iVar4 + 1;
        pbVar6 = pbVar6 + 2;
        iVar3 = 0;
      }
      else {
LAB_041c6d01:
        iVar4 = iVar4 + 1;
        pbVar6 = pbVar6 + 1;
        iVar3 = 0;
      }
      goto LAB_041c6c2e;
    }
LAB_041c6c60:
    *param_1 = iVar4;
    param_1[1] = iVar3;
    if (iVar4 < -1) {
      FUN_0400a810("cursor.row >= -1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                   ,0x133,"void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
      iVar3 = param_1[1];
    }
    if (iVar3 < -1) {
      FUN_0400a810("cursor.col >= -1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                   ,0x134,"void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
    param_1[2] = (int)pbVar6;
    if (pbVar6 == (byte *)0x0) {
      FUN_0400a810("stamp",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                   ,0x136,"void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
  }
  return;
}

// --- TiXmlText::Parse @0x041c90c0 ---
/* WARNING: Removing unreachable block (ram,0x041c9254) */
/* WARNING: Removing unreachable block (ram,0x041c9258) */
/* source: tinyxmlparser */

char * TiXmlText__Parse(int param_1,char *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_1d [13];
  
  TiXmlString__assign(param_1 + 0x20,&DAT_04328763,0);
  iVar4 = TiXmlNode__GetDocument(param_1);
  if (param_3 != (undefined4 *)0x0) {
    TiXmlParsingData__Stamp(param_3,param_2,param_4);
    uVar1 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (param_2 == (char *)0x0) {
      FUN_0400a810(&DAT_04361ca0,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                   ,0x21b,
                   "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                  );
    }
    else if (*param_2 != '\0') {
      cVar2 = TiXmlBase__StringEqual(param_4);
      if (cVar2 == '\0') goto LAB_041c92bc;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      goto LAB_041c91e9;
    }
    FUN_0400a810("0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                 ,0x21f,
                 "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                );
LAB_041c92bc:
    pcVar6 = (char *)TiXmlBase__ReadText(&DAT_042e7a8e,param_4);
    if (pcVar6 == (char *)0x0) {
      return (char *)0x0;
    }
    pcVar5 = (char *)0x0;
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar6 + -1;
    }
    return pcVar5;
  }
  if (param_2 == (char *)0x0) {
    FUN_0400a810(&DAT_04361ca0,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
                 ,0x21b,
                 "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                );
  }
  else {
LAB_041c91e9:
    if (*param_2 != '\0') {
      cVar2 = TiXmlBase__StringEqual(param_4);
      if (cVar2 != '\0') {
        pcVar6 = param_2 + 9;
        if ((pcVar6 != (char *)0x0) && (cVar2 = param_2[9], cVar2 != '\0')) {
          while (cVar3 = TiXmlBase__StringEqual(param_4), cVar3 == '\0') {
            local_1d[0] = cVar2;
            TiXmlString__append(param_1 + 0x20,local_1d,1);
            pcVar6 = pcVar6 + 1;
            if ((pcVar6 == (char *)0x0) || (cVar2 = *pcVar6, cVar2 == '\0')) break;
          }
        }
                    /* try { // try from 041c9244 to 041c9248 has its CatchHandler @ 041c92f3 */
        pcVar6 = (char *)TiXmlBase__ReadText(&PTR_DAT_04361c14,param_4);
        return pcVar6;
      }
      goto LAB_041c9177;
    }
  }
  FUN_0400a810("0",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp"
               ,0x21f,
               "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)");
LAB_041c9177:
  if (iVar4 == 0) {
    return (char *)0x0;
  }
  TiXmlDocument__SetError(iVar4,0xe,param_2,param_3,param_4);
  return (char *)0x0;
}

