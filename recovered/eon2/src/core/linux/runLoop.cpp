// Recovered source: eon2/src/core/linux/runLoop.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- RelaunchGame @0x040258e0 ---
/* source: runLoop */

void RelaunchGame(char *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  size_t sVar4;
  uint *__s;
  __pid_t _Var5;
  uint uVar6;
  uint uVar7;
  ushort **ppuVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  uint *puVar12;
  char *pcVar13;
  int local_28;
  char **local_24;
  
  FUN_0402cd10(0x14,"Relaunching game with command-line: \'%s\'",param_1);
  sVar4 = strlen(param_1);
  __s = malloc(sVar4 + 0x20);
  local_24 = malloc(0xc);
  *local_24 = DAT_044111b8;
  _Var5 = getpid();
  sprintf((char *)__s,"--eon_ParentProcessId=%d",_Var5);
  puVar12 = __s;
  do {
    puVar10 = puVar12;
    uVar6 = *puVar10 + 0xfefefeff & ~*puVar10;
    uVar7 = uVar6 & 0x80808080;
    puVar12 = puVar10 + 1;
  } while (uVar7 == 0);
  cVar11 = *param_1;
  puVar12 = (uint *)((int)puVar10 + 6);
  uVar9 = uVar7 >> 0x10;
  if ((uVar6 & 0x8080) != 0) {
    puVar12 = puVar10 + 1;
    uVar9 = uVar7;
  }
  pcVar13 = (char *)((int)puVar12 + (-3 - (uint)CARRY1((byte)uVar9,(byte)uVar9)));
  if (cVar11 == '\0') {
    *pcVar13 = '\0';
    local_24[2] = (char *)0x0;
  }
  else {
    bVar3 = false;
    bVar2 = false;
    local_28 = 2;
LAB_040259b8:
    do {
      if (bVar2) {
        if (cVar11 != '\"') goto LAB_040259a9;
        *pcVar13 = '\0';
        bVar2 = false;
        pcVar13 = pcVar13 + 1;
      }
      else if (bVar3) {
        ppuVar8 = __ctype_b_loc();
        if ((*(byte *)((int)*ppuVar8 + cVar11 * 2 + 1) & 0x20) != 0) {
          *pcVar13 = '\0';
          param_1 = param_1 + 1;
          pcVar13 = pcVar13 + 1;
          cVar11 = *param_1;
          bVar3 = false;
          if (cVar11 == '\0') break;
          goto LAB_040259b8;
        }
LAB_040259a9:
        *pcVar13 = cVar11;
        pcVar13 = pcVar13 + 1;
      }
      else {
        ppuVar8 = __ctype_b_loc();
        if ((*(byte *)((int)*ppuVar8 + cVar11 * 2 + 1) & 0x20) == 0) {
          local_24[local_28] = pcVar13;
          iVar1 = local_28 * 4;
          local_28 = local_28 + 1;
          local_24 = realloc(local_24,iVar1 + 8);
          if (*param_1 == '\"') {
            bVar2 = true;
          }
          else {
            *pcVar13 = *param_1;
            pcVar13 = pcVar13 + 1;
            bVar3 = true;
          }
        }
      }
      param_1 = param_1 + 1;
      cVar11 = *param_1;
    } while (cVar11 != '\0');
    local_24[local_28] = (char *)0x0;
    *pcVar13 = '\0';
    if (bVar2) {
      FUN_0400a810("!inQuotes",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/runLoop.cpp",
                   0x62a,"void RelaunchGame(const char*)");
    }
  }
  _Var5 = fork();
  if (_Var5 != 0) {
    free(__s);
    free(local_24);
    return;
  }
  execv(DAT_044111b8,local_24);
                    /* WARNING: Subroutine does not return */
  exit(0);
}

// --- eON_Core::pumpRunLoopUntilEmpty @0x04025730 ---
/* source: runLoop */

void eON_Core__pumpRunLoopUntilEmpty(void)

{
  int iVar1;
  undefined1 local_44 [60];
  
  SDL_PumpEvents();
  while( true ) {
    iVar1 = SDL_HasEvent(0x200);
    if (iVar1 == 0) break;
    iVar1 = SDL_PeepEvents(local_44,1,2,0x200,0x200);
    if (iVar1 != 1) {
      FUN_0400a810("SDL_PeepEvents( &event, 1, SDL_GETEVENT, SDL_WINDOWEVENT, SDL_WINDOWEVENT ) == 1"
                   ,"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/runLoop.cpp",
                   0x5aa,"void eON_Core::pumpRunLoopUntilEmpty()");
    }
    eON_Window_HandleSDLEvent();
  }
  return;
}

