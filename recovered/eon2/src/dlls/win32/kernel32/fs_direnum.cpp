// Recovered source: eon2/src/dlls/win32/kernel32/fs_direnum.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- fs_FindFirstFileA @0x0412b220 ---
/* source: fs_direnum */

undefined4 fs_FindFirstFileA(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  DIR *pDVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *__dest;
  undefined4 local_309c;
  char *local_3064;
  char local_3054 [4096];
  char local_2054 [4096];
  char local_1054 [4096];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_18;
  
  puVar5 = param_2;
  local_18 = &param_1;
  FUN_0400f520();
  __dest = local_2054;
  strcpy(__dest,local_3054);
  pcVar2 = strrchr(__dest,0x2f);
  if (pcVar2 == (char *)0x0) {
    strcpy(local_1054,__dest);
    local_2054[0] = '.';
    local_2054[1] = '\0';
  }
  else {
    *pcVar2 = '\0';
    strcpy(local_1054,pcVar2 + 1);
  }
  local_3064 = local_1054;
  pcVar2 = strrchr(__dest,0x2f);
  if (((pcVar2 != (char *)0x0) && (pcVar2[1] == '.')) &&
     ((puVar8 = (undefined4 *)&stack0xffffcf70, pcVar2[2] == '.' ||
      (puVar8 = (undefined4 *)&stack0xffffcf70, pcVar2[2] == '\0')))) {
LAB_0412b50b:
    *puVar8 = 2;
    puVar8[-1] = 0x412b51c;
    eON_SetLastError();
    return 0xffffffff;
  }
  if (local_1054[0] == '\0') {
LAB_0412b300:
    iVar7 = fs_CreateFileA();
    puVar8 = (undefined4 *)&stack0xffffcf54;
    if (iVar7 == -1) goto LAB_0412b50b;
    strcpy((char *)(puVar5 + 0xb),local_3064);
    FUN_0412a370();
    iVar3 = eON_GetFileInformationByHandle();
    if (iVar3 != 1) {
      FUN_0400a810("eON_GetFileInformationByHandle( file, &fileInfo ) == 1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_direnum.cpp"
                  );
    }
    puVar5[9] = 0;
    puVar5[10] = 0;
    *puVar5 = local_54;
    puVar5[2] = local_4c;
    puVar5[8] = local_30;
    puVar5[6] = local_3c;
    puVar5[7] = local_34;
    puVar5[4] = local_44;
    puVar5[1] = local_50;
    puVar5[5] = local_40;
    puVar5[3] = local_48;
    eON_CloseHandle(iVar7);
    puVar5 = malloc(0x200c);
    *puVar5 = 0;
    uVar6 = synchronisationPrimitives_0414a7f0(7,puVar5);
  }
  else {
    if ((local_1054[0] != '*') && (pcVar2 = local_3064, local_1054[0] != '?')) {
      do {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
        if (cVar1 == '\0') goto LAB_0412b300;
      } while ((cVar1 != '?') && (cVar1 != '*'));
    }
    pcVar2 = "/";
    if (local_2054[0] != '\0') {
      pcVar2 = __dest;
    }
    pDVar4 = opendir(pcVar2);
    if (pDVar4 == (DIR *)0x0) {
      uVar6 = 0xffffffff;
      eON_SetLastError();
    }
    else {
      puVar5 = malloc(0x200c);
      *puVar5 = pDVar4;
      if (local_2054[0] == '\0') {
        __dest = "/";
      }
      strcpy((char *)(puVar5 + 1),__dest);
      strcpy((char *)(puVar5 + 0x401),local_3064);
      puVar5[0x801] = 0xffffffff;
      puVar5[0x802] = 0;
      uVar6 = synchronisationPrimitives_0414a7f0();
      DAT_04515b4c = 1;
      iVar7 = fs_FindNextFileA();
      DAT_04515b4c = 0;
      if (iVar7 == 0) {
        local_309c = 0x412b4f8;
        closedir((DIR *)*puVar5);
        local_309c = 0x412b500;
        free(puVar5);
        local_309c = 0x412b508;
        eON_CloseHandle();
        puVar8 = &local_309c;
        goto LAB_0412b50b;
      }
    }
  }
  return uVar6;
}

