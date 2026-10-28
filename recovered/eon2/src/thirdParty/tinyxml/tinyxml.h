// Recovered source: eon2/src/thirdParty/tinyxml/tinyxml.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

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

