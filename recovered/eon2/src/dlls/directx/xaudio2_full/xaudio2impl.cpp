// Recovered source: eon2/src/dlls/directx/xaudio2_full/xaudio2impl.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- XAudio2Imp::DestroySourceVoice @0x04106580 ---
/* WARNING: Removing unreachable block (ram,0x04106610) */
/* source: xaudio2impl */

void XAudio2Imp__DestroySourceVoice(int param_1,int *param_2)

{
  int *__src;
  int iVar1;
  int *__dest;
  int *piVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (param_2 != (int *)0x0) {
                    /* try { // try from 041065b7 to 0410663b has its CatchHandler @ 04106653 */
    (**(code **)(*param_2 + 0x78))(param_2);
  }
  __dest = *(int **)(param_1 + 0x44);
  piVar2 = *(int **)(param_1 + 0x48);
  do {
    if (__dest == piVar2) {
      FUN_0400a810("!\"Voice not found\"",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2impl.cpp"
                   ,0x21f,"void XAudio2Imp::DestroySourceVoice(IXAudio2Voice*)");
LAB_04106643:
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
      return;
    }
    if (param_2 == (int *)*__dest) {
      __src = __dest + 1;
      if ((__src != piVar2) && (iVar1 = (int)piVar2 - (int)__src >> 2, iVar1 != 0)) {
        memmove(__dest,__src,iVar1 << 2);
        piVar2 = *(int **)(param_1 + 0x48);
      }
      *(int **)(param_1 + 0x48) = piVar2 + -1;
      goto LAB_04106643;
    }
    __dest = __dest + 1;
  } while( true );
}

// --- XAudio2Imp::DestroySubmixVoice @0x04106670 ---
/* WARNING: Removing unreachable block (ram,0x04106700) */
/* source: xaudio2impl */

void XAudio2Imp__DestroySubmixVoice(int param_1,int *param_2)

{
  int *__src;
  int iVar1;
  int *__dest;
  int *piVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (param_2 != (int *)0x0) {
                    /* try { // try from 041066a7 to 0410672b has its CatchHandler @ 04106743 */
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  __dest = *(int **)(param_1 + 0x50);
  piVar2 = *(int **)(param_1 + 0x54);
  do {
    if (__dest == piVar2) {
      FUN_0400a810("!\"Voice not found\"",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2impl.cpp"
                   ,0x231,"void XAudio2Imp::DestroySubmixVoice(IXAudio2Voice*)");
LAB_04106733:
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
      return;
    }
    if (param_2 == (int *)*__dest) {
      __src = __dest + 1;
      if ((__src != piVar2) && (iVar1 = (int)piVar2 - (int)__src >> 2, iVar1 != 0)) {
        memmove(__dest,__src,iVar1 << 2);
        piVar2 = *(int **)(param_1 + 0x54);
      }
      *(int **)(param_1 + 0x54) = piVar2 + -1;
      goto LAB_04106733;
    }
    __dest = __dest + 1;
  } while( true );
}

// --- XAudio2Imp::ExecuteOperation @0x041063b0 ---
/* source: xaudio2impl */

void XAudio2Imp__ExecuteOperation(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    XAudio2VoiceImp__Real_SetFilterParameters();
    return;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    XAudio2VoiceImp__Real_SetChannelVolumes();
    return;
  case 4:
    XAudio2VoiceImp__Real_SetEffectParameters
              (*(int *)(param_2 + 8) + 4,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
    return;
  case 5:
    XAudio2VoiceImp__Real_SetOutputMatrix();
    return;
  case 6:
    XAudio2VoiceImp__Real_SetVolume();
    return;
  case 7:
    XAudio2SourceVoiceImp__Real_Start();
    return;
  case 8:
    XAudio2SourceVoiceImp__Real_SetFrequencyRatio();
    return;
  case 9:
    XAudio2SourceVoiceImp__Real_Discontinuity();
    return;
  case 10:
    XAudio2SourceVoiceImp__Real_Stop();
    return;
  default:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2impl.cpp"
                 ,0x1cd,"void XAudio2Imp::ExecuteOperation(XAudio2Imp::PendingOperation*)");
    return;
  }
  XAudio2VoiceImp__Real_EnableEffect(*(int *)(param_2 + 8) + 4,*(undefined4 *)(param_2 + 0xc),uVar1)
  ;
  return;
}

// --- XAudio2Imp::Update @0x04107130 ---
/* source: xaudio2impl */

void XAudio2Imp__Update(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int local_68 [9];
  int local_44;
  int local_40;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*(char *)(param_1 + 0xa9) != '\0')) {
    local_68[3] = param_1 + 0x90;
    local_68[2] = 0x4107170;
    local_44 = local_68[3];
    EnterCriticalSection();
    piVar13 = local_68 + 2;
    iVar9 = *(int *)(param_1 + 0x84);
    local_40 = param_1 + 0x7c;
    piVar10 = local_68 + 2;
    while (iVar9 != param_1 + 0x7c) {
      puVar1 = (undefined4 *)**(undefined4 **)(iVar9 + 0x10);
      *piVar10 = (int)*(undefined4 **)(iVar9 + 0x10);
      pcVar2 = (code *)*puVar1;
      piVar10[-1] = 0x410719a;
      (*pcVar2)();
      piVar13 = piVar10 + -1;
      piVar10[-1] = iVar9;
      piVar10[-2] = 0x41071a5;
      iVar9 = std::_Rb_tree_increment((_Rb_tree_node_base *)piVar10[-1]);
      piVar10 = piVar10 + -1;
    }
    local_38 = (int *)0x0;
    local_34 = (int *)0x0;
    local_30 = 0;
    local_20 = param_1 + 0x60;
    *piVar13 = param_1 + 0x60;
    piVar13[-1] = 0x41071da;
    iVar9 = pthread_mutex_lock((pthread_mutex_t *)*piVar13);
    if (iVar9 != 0) {
      *piVar13 = iVar9;
                    /* WARNING: Subroutine does not return */
      piVar13[-1] = (int)&LAB_04107433;
      std::__throw_system_error(*piVar13);
    }
    *piVar13 = param_1;
                    /* try { // try from 041071e8 to 041072e7 has its CatchHandler @ 04107433 */
    piVar13[-1] = 0x41071ed;
    XAudio2Imp__CommitChanges();
    piVar10 = piVar13;
    if (*(int *)(param_1 + 0x5c) != 0) {
      piVar14 = *(int **)(param_1 + 0x48);
      for (piVar10 = *(int **)(param_1 + 0x44); piVar10 != piVar14; piVar10 = piVar10 + 1) {
        while( true ) {
          iVar9 = *piVar10;
          if (iVar9 == 0) {
            piVar13[3] = (int)"void XAudio2Imp::Update()";
            piVar13[2] = 0x1f0;
            piVar13[1] = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2impl.cpp"
            ;
            *piVar13 = (int)"voice";
            piVar13[-1] = 0x41072c4;
            FUN_0400a810();
          }
          iVar9 = iVar9 + 4;
          *piVar13 = iVar9;
          piVar13[-1] = 0x410722c;
          cVar8 = FUN_041095c0();
          if (cVar8 == '\0') break;
          *piVar13 = iVar9;
          piVar13[-1] = 0x4107238;
          XAudio2SourceVoiceImp__CopyPcm();
          *piVar13 = iVar9;
          piVar13[-1] = 0x4107240;
          XAudio2VoiceImp__Process();
          piVar10 = piVar10 + 1;
          if (piVar14 == piVar10) goto LAB_04107247;
        }
      }
LAB_04107247:
      piVar14 = *(int **)(param_1 + 0x54);
      for (piVar10 = *(int **)(param_1 + 0x50); piVar10 != piVar14; piVar10 = piVar10 + 1) {
        iVar9 = *piVar10;
        if (iVar9 == 0) {
          piVar13[3] = (int)"void XAudio2Imp::Update()";
          piVar13[2] = 0x1fa;
          piVar13[1] = (int)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2impl.cpp"
          ;
          *piVar13 = (int)"voice";
          piVar13[-1] = 0x410729c;
          FUN_0400a810();
        }
        *piVar13 = iVar9 + 4;
        piVar13[-1] = 0x410726b;
        XAudio2VoiceImp__Process();
      }
      iVar9 = *(int *)(param_1 + 0x5c);
      *piVar13 = (int)&local_2c;
      piVar13[1] = iVar9 + 4;
      piVar13[-1] = 0x41072e8;
      audioallocator_04108e80();
      piVar7 = local_28;
      piVar12 = local_2c;
      uVar6 = local_30;
      piVar5 = local_34;
      piVar10 = local_38;
      piVar11 = local_38;
      piVar14 = piVar10;
      if (local_38 == local_34) {
        local_2c = local_38;
        local_38 = piVar12;
        local_28 = piVar10;
        local_34 = piVar7;
        local_30 = local_24;
        local_24 = uVar6;
      }
      else {
        do {
          if (*piVar11 != 0) {
            piVar13[-1] = *piVar11;
            piVar13[-2] = 0x410730e;
            free((void *)piVar13[-1]);
          }
          piVar7 = local_28;
          uVar6 = local_30;
          piVar12 = local_38;
          piVar11 = piVar11 + 3;
        } while (piVar5 != piVar11);
        local_38 = local_2c;
        local_2c = piVar12;
        local_28 = piVar10;
        local_34 = piVar7;
        local_30 = local_24;
        local_24 = uVar6;
        for (; piVar10 != piVar12; piVar12 = piVar12 + 3) {
          if (*piVar12 != 0) {
            piVar13[-1] = *piVar12;
            piVar13[-2] = 0x410734e;
            free((void *)piVar13[-1]);
          }
          piVar14 = local_2c;
        }
      }
      piVar10 = piVar13 + -1;
      if (piVar14 != (int *)0x0) {
        piVar13[-1] = (int)piVar14;
        piVar13[-2] = 0x4107364;
        operator_delete((void *)piVar13[-1]);
        piVar10 = piVar13 + -1;
      }
    }
    *piVar10 = local_20;
    piVar10[-1] = 0x4107378;
    pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    puVar3 = (undefined4 *)*puVar1;
    piVar10[1] = (int)&local_38;
    *piVar10 = (int)puVar1;
                    /* try { // try from 0410738a to 04107432 has its CatchHandler @ 04107476 */
    pcVar2 = (code *)*puVar3;
    piVar10[-1] = 0x410738c;
    (*pcVar2)();
    iVar9 = *(int *)(param_1 + 0x84);
    piVar13 = piVar10;
    if (local_40 != iVar9) {
      do {
        iVar4 = **(int **)(iVar9 + 0x10);
        *piVar13 = (int)*(int **)(iVar9 + 0x10);
        pcVar2 = *(code **)(iVar4 + 4);
        piVar13[-1] = 0x41073ab;
        (*pcVar2)();
        piVar10 = piVar13 + -1;
        piVar13[-1] = iVar9;
        piVar13[-2] = 0x41073b6;
        iVar9 = std::_Rb_tree_increment((_Rb_tree_node_base *)piVar13[-1]);
        piVar13 = piVar13 + -1;
      } while (local_40 != iVar9);
    }
    *piVar10 = local_44;
    piVar10[-1] = 0x41073c8;
    LeaveCriticalSection();
    piVar14 = local_34;
    for (piVar13 = local_38; piVar14 != piVar13; piVar13 = piVar13 + 3) {
      if (*piVar13 != 0) {
        piVar10[-1] = *piVar13;
        piVar10[-2] = 0x41073e6;
        free((void *)piVar10[-1]);
      }
    }
    if (local_38 != (int *)0x0) {
      piVar10[-1] = (int)local_38;
      piVar10[-2] = 0x4107400;
      operator_delete((void *)piVar10[-1]);
      return;
    }
  }
  return;
}

