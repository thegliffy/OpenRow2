// Recovered source: eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_GetAdaptersInfo @0x041281e0 ---
/* source: iphlpapi */

int eON_GetAdaptersInfo(int *param_1,uint *param_2)

{
  short *psVar1;
  in_addr __in;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *local_3c;
  int *local_38;
  uint *local_34;
  size_t local_24;
  void *local_20;
  uint *local_1c;
  uint *local_18;
  uint local_14;
  
  if (param_2 == (uint *)0x0) {
    return 0x57;
  }
  uVar2 = eON_Int_CountNetworkInterfaces();
  if (uVar2 == 0) {
    return 0xe8;
  }
  iVar3 = socket(2,2,0);
  if (iVar3 != -1) {
    local_24 = 0x8000;
    local_20 = malloc(0x8000);
    iVar4 = ioctl(iVar3,0x8912,&local_24);
    close(iVar3);
    if (iVar4 == 0) {
      if (0x8000 < (int)local_24) {
        FUN_0400a810("ifConfig->ifc_len <= initialLength",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                     ,0xa8,"HRESULT eON_EnumerateIPAddresses(ifconf*, DWORD*)");
      }
      if ((int)local_24 < 0x8000) {
        local_20 = realloc(local_20,local_24);
      }
      pvVar5 = (void *)((int)local_20 + (local_24 - 0x20));
      local_38 = (int *)0x0;
      if (local_20 <= pvVar5) {
        iVar3 = 0;
        pvVar7 = local_20;
        do {
          psVar1 = (short *)((int)pvVar7 + 0x10);
          pvVar7 = (void *)((int)pvVar7 + 0x20);
          iVar3 = iVar3 + (uint)(*psVar1 == 2);
        } while (pvVar7 <= pvVar5);
        local_38 = (int *)(iVar3 * 0x28);
      }
      goto LAB_04128257;
    }
    free(local_20);
  }
  local_38 = (int *)0x0;
LAB_04128257:
  free(local_20);
  uVar10 = uVar2 * 0x280 + (int)local_38;
  if ((param_1 == (int *)0x0) || (*param_2 < uVar10)) {
    *param_2 = uVar10;
    iVar3 = 0x6f;
  }
  else {
    local_1c = (uint *)0x0;
    iVar3 = eON_Int_GetIpAddressTable();
    if (-1 < iVar3) {
      local_18 = (uint *)0x0;
      iVar3 = eON_Int_GetIpForwardTable();
      if (iVar3 < 0) {
        free(local_1c);
      }
      else {
        local_14 = 0;
        pvVar5 = (void *)eON_Int_EnumNetworkInterfaces();
        if ((pvVar5 == (void *)0x0) && (local_14 != 0)) {
          free(local_18);
          free(local_1c);
          iVar3 = 0xe;
        }
        else {
          if (uVar2 != local_14) {
            FUN_0400a810("indexesCount == nonLoopbackInterfaceCount",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                         ,0x2de,"DWORD eON_GetAdaptersInfo(PIP_ADAPTER_INFO, PULONG)");
          }
          uVar2 = local_14 * 0x280 + *local_1c * 0x28;
          if (uVar10 < uVar2) {
            FUN_0400a810("neededBufferSize2 <= neededBufferSize",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                         ,0x2e0,"DWORD eON_GetAdaptersInfo(PIP_ADAPTER_INFO, PULONG)");
          }
          if (*param_2 < uVar2) {
            FUN_0400a810("*pOutBufLen >= neededBufferSize2",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                         ,0x2e1,"DWORD eON_GetAdaptersInfo(PIP_ADAPTER_INFO, PULONG)");
          }
          uVar10 = local_14;
          bzero(param_1,uVar2);
          local_34 = local_18;
          if (local_14 != 0) {
            uVar2 = 0;
            local_38 = param_1 + uVar10 * 0xa0;
            do {
              uVar10 = *(uint *)((int)pvVar5 + uVar2 * 4);
              param_1[0x67] = uVar10;
              if_indextoname(uVar10,(char *)(param_1 + 2));
              if_indextoname(param_1[0x67],(char *)(param_1 + 0x43));
              param_1[100] = 8;
              eON_GetPhysicalInterfaceAddress(param_1 + 0x68);
              uVar10 = *local_1c;
              if (uVar10 != 0) {
                local_34 = local_1c;
                uVar9 = 0;
                local_3c = (int *)0x0;
                do {
                  if (local_34[uVar9 * 6 + 2] == param_1[0x67]) {
                    if (local_3c == (int *)0x0) {
                      eON_Ipv4AddressToString();
                      eON_Ipv4AddressToString();
                      local_3c = param_1 + 0x6b;
                      local_34 = local_1c;
                      uVar10 = *local_1c;
                    }
                    else {
                      piVar8 = local_38;
                      __in.s_addr = local_34[uVar9 * 6 + 1];
                      *local_3c = (int)local_38;
                      pcVar6 = inet_ntoa(__in);
                      strncpy((char *)(local_38 + 1),pcVar6,0x10);
                      pcVar6 = inet_ntoa((in_addr)local_1c[uVar9 * 6 + 3]);
                      strncpy((char *)(local_38 + 5),pcVar6,0x10);
                      local_34 = local_1c;
                      local_38 = local_38 + 10;
                      uVar10 = *local_1c;
                      local_3c = piVar8;
                    }
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar10);
              }
              uVar10 = *local_18;
              local_34 = local_18;
              if (uVar10 != 0) {
                uVar9 = 0;
                do {
                  if ((local_34[uVar9 * 0xe + 5] == param_1[0x67]) &&
                     (local_34[uVar9 * 0xe + 6] == 4)) {
                    eON_Ipv4AddressToString();
                    local_34 = local_18;
                    uVar10 = *local_18;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar10);
              }
              param_1[0x89] = 0;
              piVar8 = (int *)0;
              if (local_14 - 1 != uVar2) {
                piVar8 = param_1 + 0xa0;
              }
              uVar2 = uVar2 + 1;
              *param_1 = (int)piVar8;
              param_1 = param_1 + 0xa0;
            } while (uVar2 < local_14);
          }
          free(local_34);
          free(local_1c);
          free(pvVar5);
          iVar3 = 0;
        }
      }
    }
  }
  return iVar3;
}

// --- eON_Int_GetIpAddressTable @0x04127990 ---
/* source: iphlpapi */

undefined4 __regparm3 eON_Int_GetIpAddressTable(int *param_1)

{
  short *psVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_54;
  char local_44 [20];
  uint local_30;
  size_t local_24;
  void *local_20;
  
  if (param_1 == (int *)0x0) {
    FUN_0400a810("ipAddressTable",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                 ,0xd4,"HRESULT eON_Int_GetIpAddressTable(MIB_IPADDRTABLE**)");
  }
  iVar4 = socket(2,2,0);
  if (iVar4 == -1) {
LAB_041279c6:
    uVar9 = 0;
  }
  else {
    local_24 = 0x8000;
    local_20 = malloc(0x8000);
    iVar8 = ioctl(iVar4,0x8912,&local_24);
    close(iVar4);
    if (iVar8 != 0) {
      free(local_20);
      goto LAB_041279c6;
    }
    if (0x8000 < (int)local_24) {
      FUN_0400a810("ifConfig->ifc_len <= initialLength",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                   ,0xa8,"HRESULT eON_EnumerateIPAddresses(ifconf*, DWORD*)");
    }
    if ((int)local_24 < 0x8000) {
      local_20 = realloc(local_20,local_24);
    }
    pvVar2 = (void *)((int)local_20 + (local_24 - 0x20));
    uVar9 = 0;
    pvVar6 = local_20;
    if (local_20 <= pvVar2) {
      do {
        psVar1 = (short *)((int)pvVar6 + 0x10);
        pvVar6 = (void *)((int)pvVar6 + 0x20);
        uVar9 = uVar9 + (*psVar1 == 2);
      } while (pvVar6 <= pvVar2);
      if (1 < uVar9) {
        puVar5 = malloc(uVar9 * 0x18 + 4);
        *param_1 = (int)puVar5;
        goto joined_r0x04127aa2;
      }
    }
  }
  puVar5 = malloc(0x1c);
  *param_1 = (int)puVar5;
joined_r0x04127aa2:
  if (puVar5 == (uint *)0x0) {
    free(local_20);
    return 0xe;
  }
  *puVar5 = uVar9;
  if (uVar9 != 0) {
    iVar4 = socket(2,2,0);
    if (iVar4 == -1) {
      FUN_0400a810("sock != -1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                   ,0xec,"HRESULT eON_Int_GetIpAddressTable(MIB_IPADDRTABLE**)");
    }
    pvVar2 = (void *)((int)local_20 + (local_24 - 0x20));
    if (local_20 <= pvVar2) {
      local_54 = 0;
      pvVar6 = (void *)((int)local_20 + 0x20);
      do {
        while (*(short *)((int)pvVar6 + -0x10) == 2) {
          iVar8 = local_54 * 0x18 + *param_1;
          uVar9 = if_nametoindex((char *)((int)pvVar6 + -0x20));
          *(uint *)(iVar8 + 8) = uVar9;
          if (uVar9 == 0) {
            FUN_0400a810("record->dwIndex",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                         ,0x106,"HRESULT eON_Int_GetIpAddressTable(MIB_IPADDRTABLE**)");
          }
          uVar3 = *(undefined4 *)((int)pvVar6 + -0xc);
          *(undefined4 *)(iVar8 + 0xc) = 0xffffffff;
          *(undefined4 *)(iVar8 + 4) = uVar3;
          strncpy(local_44,(char *)((int)pvVar6 + -0x20),0x10);
          iVar7 = ioctl(iVar4,0x891b,local_44);
          if (iVar7 == 0) {
            *(uint *)(iVar8 + 0xc) = local_30;
          }
          iVar7 = ioctl(iVar4,0x8919,local_44);
          uVar9 = 0;
          if (iVar7 == 0) {
            uVar9 = (uint)((local_30 & *(uint *)(iVar8 + 0xc)) != 0);
          }
          local_54 = local_54 + 1;
          *(undefined4 *)(iVar8 + 0x14) = 0xffff;
          bVar10 = pvVar2 < pvVar6;
          *(uint *)(iVar8 + 0x10) = uVar9;
          *(undefined2 *)(iVar8 + 0x18) = 0;
          *(undefined2 *)(iVar8 + 0x1a) = 0;
          pvVar6 = (void *)((int)pvVar6 + 0x20);
          if (bVar10) goto LAB_04127c00;
        }
        bVar10 = pvVar6 <= pvVar2;
        pvVar6 = (void *)((int)pvVar6 + 0x20);
      } while (bVar10);
    }
LAB_04127c00:
    close(iVar4);
  }
  free(local_20);
  return 0;
}

// --- eON_Int_GetIpForwardTable @0x04127330 ---
/* source: iphlpapi */

undefined4 __regparm3 eON_Int_GetIpForwardTable(undefined4 *param_1,char param_2)

{
  uint uVar1;
  char *pcVar2;
  uint *__ptr;
  undefined4 uVar3;
  FILE *__stream;
  ushort **ppuVar4;
  ulong uVar5;
  char *pcVar6;
  size_t local_264;
  char local_258 [512];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  char *local_20 [4];
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0400a810("routingTable",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp"
                 ,0x143,"DWORD eON_Int_GetIpForwardTable(MIB_IPFORWARDTABLE**, bool)");
  }
  __ptr = malloc(4);
  uVar3 = 0xe;
  if (__ptr != (uint *)0x0) {
    *__ptr = 0;
    __stream = fopen64("/proc/net/route","r");
    if (__stream == (FILE *)0x0) {
      free(__ptr);
      uVar3 = 0x32;
    }
    else {
      local_20[0] = fgets(local_258,0x200,__stream);
      local_264 = 4;
      while( true ) {
        do {
          local_20[0] = fgets(local_258,0x200,__stream);
          if (local_20[0] == (char *)0x0) {
            fclose(__stream);
            if ((param_2 != '\0') && (1 < *__ptr)) {
              qsort(__ptr + 1,*__ptr,0x38,IpAddrEntry_Compare);
            }
            *param_1 = __ptr;
            return 0;
          }
          bzero(&local_58,0x38);
          pcVar2 = local_20[0];
          ppuVar4 = __ctype_b_loc();
          do {
            pcVar6 = pcVar2;
            local_20[0] = pcVar6 + 1;
            pcVar2 = local_20[0];
          } while ((*(byte *)((int)*ppuVar4 + *pcVar6 * 2 + 1) & 0x20) == 0);
          *pcVar6 = '\0';
          local_48 = if_nametoindex(local_258);
        } while (local_48 == 0);
        local_58 = strtoul(local_20[0],local_20,0x10);
        local_4c = strtoul(local_20[0] + 1,local_20,0x10);
        uVar5 = strtoul(local_20[0] + 1,local_20,0x10);
        if ((uVar5 & 1) == 0) {
          local_44 = 2;
        }
        else {
          local_44 = 4 - ((uVar5 & 2) == 0);
        }
        strtoul(local_20[0] + 1,local_20,0x10);
        strtoul(local_20[0] + 1,local_20,0x10);
        local_34 = strtoul(local_20[0] + 1,local_20,0x10);
        local_54 = strtoul(local_20[0] + 1,local_20,0x10);
        local_40 = 2;
        local_264 = local_264 + 0x38;
        __ptr = realloc(__ptr,local_264);
        if (__ptr == (uint *)0x0) break;
        uVar1 = *__ptr;
        __ptr[uVar1 * 0xe + 1] = local_58;
        __ptr[uVar1 * 0xe + 2] = local_54;
        __ptr[uVar1 * 0xe + 3] = local_50;
        __ptr[uVar1 * 0xe + 4] = local_4c;
        __ptr[uVar1 * 0xe + 5] = local_48;
        __ptr[uVar1 * 0xe + 6] = local_44;
        __ptr[uVar1 * 0xe + 7] = local_40;
        __ptr[uVar1 * 0xe + 8] = local_3c;
        __ptr[uVar1 * 0xe + 9] = local_38;
        __ptr[uVar1 * 0xe + 10] = local_34;
        __ptr[uVar1 * 0xe + 0xb] = local_30;
        __ptr[uVar1 * 0xe + 0xc] = local_2c;
        __ptr[uVar1 * 0xe + 0xd] = local_28;
        *__ptr = uVar1 + 1;
        __ptr[uVar1 * 0xe + 0xe] = local_24;
      }
      uVar3 = 0xe;
    }
  }
  return uVar3;
}

