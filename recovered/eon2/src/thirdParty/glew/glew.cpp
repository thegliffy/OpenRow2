// Recovered source: eon2/src/thirdParty/glew/glew.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- glewGetExtension @0x041a2c70 ---
/* source: glew */

undefined4 glewGetExtension(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  FUN_0400a810("false",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/glew/glew.cpp",0x2780
               ,"GLboolean glewGetExtension(const char*)");
  if (DAT_0451eedc == 0) {
    pcVar3 = (char *)glGetString(0x1f03);
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    if (DAT_0451eedc == 0) {
      uVar4 = FUN_041a2ad0();
      return uVar4;
    }
  }
  if (0 < DAT_0451eee0) {
    iVar6 = 0;
    do {
      pcVar3 = (char *)(*DAT_0451eb24)(0x1f03,iVar6);
      if (*param_1 == *pcVar3) {
        if (*param_1 == '\0') {
          return 1;
        }
        iVar5 = 0;
        while (iVar2 = iVar5 + 1, param_1[iVar2] == pcVar3[iVar5 + 1]) {
          iVar5 = iVar5 + 1;
          if (param_1[iVar2] == '\0') {
            return 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_0451eee0);
  }
  return 0;
}

