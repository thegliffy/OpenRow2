// Recovered source: eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DDevice9::Initialize @0x0409aff0 ---
/* source: direct3ddevice9imp */

uint Direct3DDevice9__Initialize
               (int *param_1,int param_2,uint param_3,uint *param_4,int param_5,int param_6,
               uint param_7)

{
  code *pcVar1;
  uint *puVar2;
  int **ppiVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int **ppiVar11;
  uint *puVar12;
  int **ppiVar13;
  bool bVar14;
  ushort in_FPUControlWord;
  int aiStack_b0 [11];
  uint auStack_84 [6];
  int *local_6c;
  uint local_68 [8];
  uint local_48;
  int *local_44;
  void *local_40;
  undefined1 local_30 [8];
  uint local_28;
  uint local_24;
  ushort local_1e;
  
  ppiVar13 = &local_6c;
  ppiVar11 = &local_6c;
  if ((param_7 & 4) == 0) {
    if ((char)param_1[0x3adf] != '\0') goto LAB_0409b6e8;
    ppiVar3 = &local_6c;
    if (param_1[0x3b09] != 0) goto LAB_0409b701;
LAB_0409b021:
    ppiVar11 = ppiVar3;
    if (param_1[0x3ae0] != 0) {
      ppiVar11[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
      ppiVar11[2] = (int *)0x3ae;
      ppiVar11[1] = (int *)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      *ppiVar11 = (int *)"!mCurrentD3D9Thread";
      ppiVar11[-1] = (int *)0x409b244;
      FUN_0400a810();
    }
    ppiVar11[-1] = (int *)0x409b034;
    iVar5 = FUN_0415b750();
    param_1[0x3ae0] = iVar5;
  }
  else {
    local_6c = param_1 + 0x3ae1;
    auStack_84[5] = 0x409b6de;
    synch_criticalsection_04145d20();
    *(undefined1 *)(param_1 + 0x3adf) = 1;
    ppiVar13 = (int **)(auStack_84 + 5);
LAB_0409b6e8:
    *ppiVar13 = param_1 + 0x3ae1;
    ppiVar13[-1] = (int *)0x409b6f0;
    EnterCriticalSection();
    ppiVar11 = ppiVar13 + -1;
    ppiVar3 = ppiVar13 + -1;
    if (param_1[0x3b09] == 0) goto LAB_0409b021;
LAB_0409b701:
    iVar5 = param_1[0x3ae0];
    ppiVar11[-1] = (int *)0x409b70c;
    iVar6 = FUN_0415b750();
    if (iVar5 != iVar6) {
      ppiVar11[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
      ppiVar11[2] = (int *)0x3b3;
      ppiVar11[1] = (int *)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      *ppiVar11 = (int *)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
      ppiVar11[-1] = (int *)0x409b738;
      FUN_0400a810();
    }
  }
  param_1[0x3b09] = param_1[0x3b09] + 1;
  ppiVar11[1] = (int *)"Direct3DDevice9::Initialize()";
  *ppiVar11 = (int *)0x5;
  ppiVar11[-1] = (int *)0x409b055;
  FUN_0402cd10();
  *ppiVar11 = (int *)0x5;
  ppiVar11[1] = (int *)param_4;
  ppiVar11[-1] = (int *)0x409b068;
  Direct3DDevice9_LogPresentParameters();
  uVar7 = param_4[7];
  if (param_4[7] == 0) {
    uVar7 = param_3;
  }
  if (uVar7 == 0x271a) {
LAB_0409b085:
    iVar5 = param_1[0x3ae0];
    *(undefined4 *)((int)ppiVar11 + -4) = 0x409b090;
    iVar6 = FUN_0415b750();
    if (iVar5 == iVar6) goto LAB_0409b0b8;
  }
  else {
    *ppiVar11 = (int *)uVar7;
    ppiVar11[-1] = (int *)0x409b081;
    cVar4 = FUN_0404ecd0();
    if (cVar4 == '\0') goto LAB_0409b085;
    *ppiVar11 = (int *)0x78;
    ppiVar11[-1] = (int *)0x409b10c;
    piVar8 = operator_new((uint)*ppiVar11);
    piVar8[1] = -1;
    piVar8[2] = -1;
    piVar8[3] = -1;
    piVar8[4] = -1;
    piVar8[5] = -1;
    piVar8[6] = 0;
    *(undefined1 *)(piVar8 + 7) = 0;
    *(undefined1 *)((int)piVar8 + 0x1d) = 0;
    *(undefined1 *)((int)piVar8 + 0x1e) = 0;
    piVar8[0x11] = 0;
    piVar8[0xd] = 0;
    piVar8[0xe] = 0;
    piVar8[0xf] = (int)(piVar8 + 0xd);
    piVar8[0x10] = (int)(piVar8 + 0xd);
    piVar8[0x15] = (int)(piVar8 + 0x13);
    piVar8[0x16] = (int)(piVar8 + 0x13);
    piVar8[0x1b] = (int)(piVar8 + 0x19);
    piVar8[0x1c] = (int)(piVar8 + 0x19);
    uVar10 = param_4[2];
    piVar8[0x13] = 0;
    piVar8[0x14] = 0;
    piVar8[0x17] = 0;
    piVar8[0x19] = 0;
    piVar8[0x1a] = 0;
    piVar8[0x1d] = 0;
    *piVar8 = param_2;
    if (uVar10 == 0) {
      param_4[2] = 0x15;
      ppiVar11[1] = (int *)0x15;
      *ppiVar11 = piVar8;
      ppiVar11[-1] = (int *)0x409b268;
      cVar4 = PixelFormatData__MapDeviceFormat();
    }
    else {
      ppiVar11[1] = (int *)uVar10;
      *ppiVar11 = piVar8;
      ppiVar11[-1] = (int *)0x409b1bd;
      cVar4 = PixelFormatData__MapDeviceFormat();
    }
    if (cVar4 != '\0') {
      ppiVar11[1] = (int *)uVar7;
      ppiVar11[2] = (int *)((int)param_1 + 0x75fb);
      *ppiVar11 = piVar8;
      ppiVar11[-1] = (int *)0x409b286;
      FUN_040e2f90();
      uVar10 = param_4[4];
      if (uVar10 == 1) {
        uVar10 = param_4[5];
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            if (*(char *)((int)param_1 + 0x7609) == '\0') {
              if ((char)param_1[0x1d82] == '\0') {
                if (*(char *)((int)param_1 + 0x7607) == '\0') {
                  if (*(char *)((int)param_1 + 0x7606) == '\0') {
                    if (*(char *)((int)param_1 + 0x7605) == '\0') {
                      if ((char)param_1[0x1d81] == '\0') {
                        if (*(char *)((int)param_1 + 0x7603) == '\0') {
                          if (*(char *)((int)param_1 + 0x7602) == '\0') {
                            if (*(char *)((int)param_1 + 0x7601) == '\0') {
                              if ((char)param_1[0x1d80] == '\0') {
                                if (*(char *)((int)param_1 + 0x75ff) == '\0') {
                                  if (*(char *)((int)param_1 + 0x75fe) == '\0') {
                                    if (*(char *)((int)param_1 + 0x75fd) == '\0') {
                                      if ((char)param_1[0x1d7f] == '\0') {
                                        iVar5 = 0;
                                        if (*(char *)((int)param_1 + 0x75fb) == '\0') {
                                          param_4[4] = 0;
                                          param_4[5] = 0;
                                          goto LAB_0409b2b1;
                                        }
                                      }
                                      else {
                                        iVar5 = 1;
                                      }
                                    }
                                    else {
                                      iVar5 = 2;
                                    }
                                  }
                                  else {
                                    iVar5 = 3;
                                  }
                                }
                                else {
                                  iVar5 = 4;
                                }
                              }
                              else {
                                iVar5 = 5;
                              }
                            }
                            else {
                              iVar5 = 6;
                            }
                          }
                          else {
                            iVar5 = 7;
                          }
                        }
                        else {
                          iVar5 = 8;
                        }
                      }
                      else {
                        iVar5 = 9;
                      }
                    }
                    else {
                      iVar5 = 10;
                    }
                  }
                  else {
                    iVar5 = 0xb;
                  }
                }
                else {
                  iVar5 = 0xc;
                }
              }
              else {
                iVar5 = 0xd;
              }
            }
            else {
              iVar5 = 0xe;
            }
            uVar10 = iVar5 + 2;
            param_4[4] = uVar10;
            param_4[5] = 1;
            goto LAB_0409b29e;
          }
          iVar5 = (int)(uVar10 - 2) / 2;
          if (*(char *)((int)param_1 + 0x75fb) == '\0') {
LAB_0409b844:
            if ((char)param_1[0x1d7f] != '\0') {
              if (iVar5 == 0) {
                iVar5 = 1;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x75fd) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 2;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x75fe) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 3;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x75ff) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 4;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if ((char)param_1[0x1d80] != '\0') {
              if (iVar5 == 0) {
                iVar5 = 5;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x7601) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 6;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x7602) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 7;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x7603) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 8;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if ((char)param_1[0x1d81] != '\0') {
              if (iVar5 == 0) {
                iVar5 = 9;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x7605) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 10;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x7606) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 0xb;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(char *)((int)param_1 + 0x7607) != '\0') {
              if (iVar5 == 0) {
                iVar5 = 0xc;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if ((char)param_1[0x1d82] != '\0') {
              if (iVar5 == 0) {
                iVar5 = 0xd;
                goto LAB_0409bb53;
              }
              iVar5 = iVar5 + -1;
            }
            if ((*(char *)((int)param_1 + 0x7609) == '\0') || (iVar5 != 0)) {
              ppiVar11[1] = (int *)
                            "GetMultisamplingOptionForLevel() - given index beyond supported range!"
              ;
              *ppiVar11 = (int *)0xa;
              ppiVar11[-1] = (int *)0x409b96d;
              FUN_0402cd10();
              goto LAB_0409b1c5;
            }
            iVar5 = 0xe;
          }
          else {
            if (iVar5 != 0) {
              iVar5 = iVar5 + -1;
              goto LAB_0409b844;
            }
            iVar5 = 0;
          }
LAB_0409bb53:
          uVar10 = iVar5 + 2;
          param_4[4] = uVar10;
          param_4[5] = 0;
          goto LAB_0409b29e;
        }
        param_4[4] = 0;
        param_4[5] = 0;
      }
      else {
        if (0x10 < uVar10) goto LAB_0409b740;
LAB_0409b29e:
        if ((1 < uVar10) && (*(char *)((int)param_1 + uVar10 + 0x75f9) == '\0')) {
LAB_0409b740:
          ppiVar11[1] = (int *)piVar8[0x1a];
          *ppiVar11 = piVar8 + 0x18;
          ppiVar11[-1] = (int *)0x409b752;
          FUN_0406ba50();
          ppiVar11[1] = (int *)piVar8[0x14];
          *ppiVar11 = piVar8 + 0x12;
          ppiVar11[-1] = (int *)0x409b764;
          FUN_0406b8c0();
          ppiVar11[1] = (int *)piVar8[0xe];
          *ppiVar11 = piVar8 + 0xc;
          ppiVar11[-1] = (int *)0x409b776;
          FUN_0406b730();
          *ppiVar11 = piVar8;
          ppiVar11[-1] = (int *)0x409b77e;
          operator_delete(*ppiVar11);
          iVar5 = param_1[0x3ae0];
          ppiVar11[-1] = (int *)0x409b789;
          iVar6 = FUN_0415b750();
          if (iVar5 != iVar6) {
            ppiVar11[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Leave()";
            ppiVar11[2] = (int *)0x3bf;
            ppiVar11[1] = (int *)
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *ppiVar11 = (int *)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
            ppiVar11[-1] = (int *)0x409b7b1;
            FUN_0400a810();
          }
          iVar5 = param_1[0x3b09];
          param_1[0x3b09] = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            param_1[0x3ae0] = 0;
          }
          if ((char)param_1[0x3adf] != '\0') {
            *ppiVar11 = param_1 + 0x3ae1;
            ppiVar11[-1] = (int *)0x409b7e5;
            LeaveCriticalSection();
            ppiVar11 = ppiVar11 + -1;
          }
          uVar7 = param_4[4];
          ppiVar11[1] = (int *)
                        "Game requested that device support render targets with %u samples, which is not supported by underlying OpenGL"
          ;
          *ppiVar11 = (int *)0x14;
          ppiVar11[2] = (int *)uVar7;
          ppiVar11[-1] = (int *)0x409b806;
          FUN_0402cd10();
          return 0;
        }
      }
LAB_0409b2b1:
      ppiVar11[2] = param_1 + 0x1d7d;
      ppiVar11[1] = param_1 + 0x1d7c;
      *ppiVar11 = (int *)param_2;
      ppiVar11[-1] = (int *)0x409b2d0;
      OpenGLDisplay_GetOrigin();
      uVar10 = param_1[0x1d7c];
      ppiVar11[1] = (int *)"Available video memory: %d MB";
      *ppiVar11 = (int *)0x14;
      ppiVar11[2] = (int *)uVar10;
      ppiVar11[-1] = (int *)0x409b2ee;
      FUN_0402cd10();
      uVar10 = param_1[0x1d7d];
      ppiVar11[1] = (int *)"Available texture memory: %d MB";
      *ppiVar11 = (int *)0x14;
      ppiVar11[2] = (int *)uVar10;
      ppiVar11[-1] = (int *)0x409b30c;
      FUN_0402cd10();
      bVar14 = false;
      if (1 < param_4[4]) {
        bVar14 = param_4[5] != 0;
      }
      local_48 = param_1[3];
      *(bool *)((int)param_1 + 0xeb52) = bVar14;
      piVar8[3] = 0;
      piVar8[4] = 0;
      *ppiVar11 = (int *)0x128;
      ppiVar11[-1] = (int *)0x409b345;
      local_40 = operator_new((uint)*ppiVar11);
      *ppiVar11 = local_40;
      ppiVar11[1] = (int *)local_48;
                    /* try { // try from 0409b352 to 0409b356 has its CatchHandler @ 0409bc46 */
      ppiVar11[-1] = (int *)0x409b357;
      FUN_040eabb0();
      param_1[0x3ad5] = (int)local_40;
      *ppiVar11 = local_40;
      ppiVar11[-1] = (int *)0x409b368;
      shader_pch_load();
      local_40 = (void *)*param_4;
      local_48 = param_4[1];
      ppiVar11[1] = (int *)local_30;
      *ppiVar11 = (int *)uVar7;
      ppiVar11[-1] = (int *)0x409b388;
      eON_GetClientRect();
      ppiVar11[-2] = (int *)uVar7;
      if (local_40 == (void *)0x0) {
        local_48 = local_28;
      }
      if (local_48 == 0) {
        local_48 = local_24;
      }
      *ppiVar11 = (int *)local_48;
      ppiVar11[-1] = (int *)local_48;
      ppiVar11[-3] = (int *)0x409b3b0;
      FUN_0402d2e0();
      ppiVar11[-3] = (int *)0x409b3b5;
      BringMainGameWindowToFront();
      ppiVar11[-2] = (int *)param_1[0x3b30];
      ppiVar11[-3] = (int *)0x409b3c3;
      eON_ResetEvent();
      local_44 = param_1 + 0x3b00;
      ppiVar11[-3] = local_44;
      *ppiVar11 = (int *)0xc;
      ppiVar11[-1] = (int *)0x32;
      ppiVar11[-2] = param_1;
      ppiVar11[-4] = (int *)0x409b3eb;
      puVar9 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
      *puVar9 = piVar8;
      puVar9[1] = uVar7;
      puVar9[2] = param_4[0xd];
      ppiVar11[-3] = local_44;
      ppiVar11[-4] = (int *)0x409b404;
      D3D9CommandQueue__CommandSubmitted();
      if ((param_7 & 2) == 0) {
        local_1e = in_FPUControlWord & 0xf0c0 | 0x3f;
      }
      ppiVar11[2] = (int *)0x0;
      ppiVar11[1] = (int *)0x0;
      iVar5 = param_1[3];
      ppiVar11[-1] = (int *)Direct3DDevice9Imp__OpenGLThreadStart;
      ppiVar11[-2] = (int *)0x10000;
      ppiVar11[-3] = (int *)0x0;
      *ppiVar11 = (int *)iVar5;
      ppiVar11[-4] = (int *)0x409b458;
      eON_CreateThread();
      ppiVar11[-8] = (int *)0xffffffff;
      ppiVar11[-9] = (int *)param_1[0x3b30];
      ppiVar11[-10] = (int *)0x409b471;
      eON_WaitForSingleObject();
      puVar12 = (uint *)(ppiVar11 + -0xb);
      puVar2 = (uint *)(ppiVar11 + -0xb);
      if (param_1[0x3afe] != 0) {
        uVar10 = param_4[8];
        ppiVar11[-9] = (int *)local_48;
        ppiVar11[-0xb] = param_1;
        ppiVar11[-8] = (int *)(uint)(uVar10 == 0);
        ppiVar11[-10] = local_40;
        ppiVar11[-0xc] = (int *)0x409b4ac;
        FUN_040b99b0();
        piVar8 = local_44;
        if (DAT_04408c6c != '\0') {
          if (param_4[8] == 0) {
            if (uVar7 == 0) {
              ppiVar11[-8] = (int *)
                             "bool Direct3DDevice9Imp::Initialize(OpenGLDisplay*, HWND, D3DPRESENT_PARAMETERS*, IDirect3D9*, UINT, DWORD)"
              ;
              ppiVar11[-9] = (int *)0x5e5;
              ppiVar11[-10] =
                   (int *)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
              ;
              ppiVar11[-0xb] = (int *)"displayWindow";
              ppiVar11[-0xc] = (int *)0x409bb46;
              FUN_0400a810();
            }
            *(uint *)(uVar7 + 0x10) = local_48;
            *(uint *)(uVar7 + 0x20) = local_48;
            *(undefined4 *)(uVar7 + 4) = 0;
            *(undefined4 *)(uVar7 + 8) = 0;
            *(void **)(uVar7 + 0xc) = local_40;
            *(undefined4 *)(uVar7 + 0x14) = 0;
            *(undefined4 *)(uVar7 + 0x18) = 0;
            *(void **)(uVar7 + 0x1c) = local_40;
            ppiVar11[-10] = (int *)0x1;
            ppiVar11[-0xb] = (int *)uVar7;
            ppiVar11[-0xc] = (int *)0x409b50c;
            eON_ShowWindow_Checked();
            puVar12 = (uint *)(ppiVar11 + -0xd);
          }
          param_1[0xc] = 1;
          param_1[0xd] = param_3;
          param_1[10] = param_5;
          param_1[0xe] = param_7;
          param_1[0xb] = param_6;
          param_1[0xf] = *param_4;
          param_1[0x10] = param_4[1];
          param_1[0x11] = param_4[2];
          param_1[0x12] = param_4[3];
          param_1[0x13] = param_4[4];
          param_1[0x14] = param_4[5];
          param_1[0x15] = param_4[6];
          param_1[0x16] = param_4[7];
          param_1[0x17] = param_4[8];
          param_1[0x18] = param_4[9];
          param_1[0x19] = param_4[10];
          param_1[0x1a] = param_4[0xb];
          param_1[0x1b] = param_4[0xc];
          uVar7 = param_4[0xd];
          param_1[0xf] = (int)local_40;
          param_1[0x10] = local_48;
          param_1[0x1c] = uVar7;
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x409b598;
          Direct3DDevice9Imp__CreateScreenBuffers();
          iVar5 = *param_1;
          puVar12[2] = 3;
          puVar12[1] = 0x16;
          *puVar12 = (uint)param_1;
          pcVar1 = *(code **)(iVar5 + 0xec);
          puVar12[-1] = 0x409b5b3;
          (*pcVar1)();
          uVar7 = param_4[9];
          iVar5 = *param_1;
          puVar12[1] = 7;
          *puVar12 = (uint)param_1;
          puVar12[2] = (uint)(uVar7 != 0);
          pcVar1 = *(code **)(iVar5 + 0xec);
          puVar12[-1] = 0x409b5d4;
          (*pcVar1)();
          iVar5 = *param_1;
          puVar12[2] = (uint)(param_1 + 0x1d7a);
          puVar12[1] = 1;
          *puVar12 = (uint)param_1;
          pcVar1 = *(code **)(iVar5 + 0xf4);
          puVar12[-1] = 0x409b5f1;
          iVar5 = (*pcVar1)();
          if (iVar5 < 0) {
            puVar12[3] = (uint)
                         "bool Direct3DDevice9Imp::Initialize(OpenGLDisplay*, HWND, D3DPRESENT_PARAMETERS*, IDirect3D9*, UINT, DWORD)"
            ;
            puVar12[2] = 0x606;
            puVar12[1] = (uint)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *puVar12 = (uint)
                       "((HRESULT)(CreateStateBlock( D3DSBT_ALL, (IDirect3DStateBlock9**) &mDeviceState.InitialDeviceStateBlock )) >= 0)"
            ;
            puVar12[-1] = 0x409bb00;
            FUN_0400a810();
          }
          param_1[0x1d84] = param_2;
          puVar12[1] = 1;
          *puVar12 = (uint)FUN_0406f980;
          puVar12[-1] = 0x409b616;
          MainGameWindow_RegisterForFullscreenToggle();
          iVar5 = param_1[0x3ae0];
          DAT_044116b0 = FUN_040e09c0;
          DAT_044116ac = FUN_040e08f0;
          puVar12[-1] = 0x409b635;
          iVar6 = FUN_0415b750();
          if (iVar5 != iVar6) {
            puVar12[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Leave()";
            puVar12[2] = 0x3bf;
            puVar12[1] = (uint)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *puVar12 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
            puVar12[-1] = 0x409b65d;
            FUN_0400a810();
          }
          iVar5 = param_1[0x3b09];
          param_1[0x3b09] = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            param_1[0x3ae0] = 0;
          }
          if ((char)param_1[0x3adf] != '\0') {
            *puVar12 = (uint)(param_1 + 0x3ae1);
            puVar12[-1] = 0x409b691;
            LeaveCriticalSection();
            puVar12 = puVar12 + -1;
          }
          iVar5 = *param_1;
          puVar12[4] = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[1] = 0;
          *puVar12 = (uint)param_1;
          pcVar1 = *(code **)(iVar5 + 0x4c);
          puVar12[-1] = 0x409b6bc;
          (*pcVar1)();
          return 1;
        }
        ppiVar11[-8] = (int *)0x0;
        ppiVar11[-9] = (int *)0x31;
        ppiVar11[-10] = param_1;
        ppiVar11[-0xb] = local_44;
        ppiVar11[-0xc] = (int *)0x409b991;
        D3D9CommandQueue__GetNextCommandPointer();
        ppiVar11[-0xb] = piVar8;
        ppiVar11[-0xc] = (int *)0x409b999;
        D3D9CommandQueue__CommandSubmitted();
        ppiVar11[-10] = (int *)0xffffffff;
        ppiVar11[-0xb] = (int *)param_1[0x3afe];
        ppiVar11[-0xc] = (int *)0x409b9af;
        eON_WaitForSingleObject();
        ppiVar11[-0xd] = (int *)param_1[0x3afe];
        ppiVar11[-0xe] = (int *)0x409b9c0;
        eON_CloseHandle();
        param_1[0x3afe] = 0;
        puVar2 = (uint *)(ppiVar11 + -0xe);
      }
      ppiVar11 = (int **)puVar2;
      iVar5 = param_1[0x3ad5];
      if (iVar5 != 0) {
        *ppiVar11 = (int *)iVar5;
        ppiVar11[-1] = (int *)0x409b9df;
        FUN_040ea8a0();
        *ppiVar11 = (int *)iVar5;
        ppiVar11[-1] = (int *)0x409b9e7;
        operator_delete(*ppiVar11);
      }
      param_1[0x3ad5] = 0;
      goto LAB_0409b085;
    }
LAB_0409b1c5:
    ppiVar11[1] = (int *)piVar8[0x1a];
    *ppiVar11 = piVar8 + 0x18;
    ppiVar11[-1] = (int *)0x409b1d7;
    FUN_0406ba50();
    ppiVar11[1] = (int *)piVar8[0x14];
    *ppiVar11 = piVar8 + 0x12;
    ppiVar11[-1] = (int *)0x409b1e9;
    FUN_0406b8c0();
    ppiVar11[1] = (int *)piVar8[0xe];
    *ppiVar11 = piVar8 + 0xc;
    ppiVar11[-1] = (int *)0x409b1fb;
    FUN_0406b730();
    *ppiVar11 = piVar8;
    ppiVar11[-1] = (int *)0x409b203;
    operator_delete(*ppiVar11);
    iVar5 = param_1[0x3ae0];
    ppiVar11[-1] = (int *)0x409b20e;
    iVar6 = FUN_0415b750();
    if (iVar5 == iVar6) goto LAB_0409b0b8;
  }
  ppiVar11[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Leave()";
  ppiVar11[2] = (int *)0x3bf;
  ppiVar11[1] = (int *)
                "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
  ;
  *ppiVar11 = (int *)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
  ppiVar11[-1] = (int *)0x409b0b8;
  FUN_0400a810();
LAB_0409b0b8:
  iVar5 = param_1[0x3b09];
  param_1[0x3b09] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    param_1[0x3ae0] = 0;
  }
  uVar7 = 0;
  if ((char)param_1[0x3adf] != '\0') {
    local_48 = local_48 & 0xffffff00;
    *ppiVar11 = param_1 + 0x3ae1;
    ppiVar11[-1] = (int *)0x409b0f1;
    LeaveCriticalSection();
    uVar7 = local_48 & 0xff;
  }
  return uVar7;
}

// --- Direct3DDevice9Imp::BeginScene @0x04075730 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_BeginScene(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x407586e;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4075814;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407577c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407582b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4075857;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (*(char *)(param_1 + 0x75f8) == '\0') {
    *(undefined1 *)(param_1 + 0x75f8) = 1;
    *(undefined1 *)(param_1 + 0x75fa) = 0;
    piVar5[3] = 0;
    piVar5[2] = 0x13;
    piVar5[1] = param_1;
    *piVar5 = param_1 + 0xec00;
                    /* try { // try from 040757c1 to 040757cd has its CatchHandler @ 0407588a */
    piVar5[-1] = 0x40757c6;
    D3D9CommandQueue__GetNextCommandPointer();
    *piVar5 = param_1 + 0xec00;
    piVar5[-1] = 0x40757ce;
    D3D9CommandQueue__CommandSubmitted();
    uVar3 = 0;
  }
  else {
    uVar3 = 0x8876086c;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x40757db;
  direct3ddevice9imp_040a2df0();
  return uVar3;
}

// --- Direct3DDevice9Imp::BeginStateBlock @0x04074960 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_BeginStateBlock(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  puVar7 = (uint *)local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    puVar7 = (uint *)local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x4074a96;
      EnterCriticalSection();
      puVar7 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        puVar7[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar7[2] = 0x3ae;
        puVar7[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar7 = (uint)"!mCurrentD3D9Thread";
        puVar7[-1] = 0x4074a3c;
        FUN_0400a810();
      }
      puVar7[-1] = 0x40749ac;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xebc0);
      puVar7[-1] = 0x4074a53;
      iVar6 = FUN_0415b750();
      if (iVar3 != iVar6) {
        puVar7[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar7[2] = 0x3b3;
        puVar7[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar7 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar7[-1] = 0x4074a7f;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (*(int *)(param_1 + 0x75ec) == 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *puVar7 = 0x12d4;
                    /* try { // try from 040749d1 to 040749d5 has its CatchHandler @ 04074aaa */
    puVar7[-1] = 0x40749d6;
    puVar5 = operator_new(*puVar7);
    *puVar5 = &PTR_FUN_042f6ee8;
    puVar7[1] = (uint)puVar5;
    puVar7[2] = uVar2;
    *puVar7 = (uint)(puVar5 + 1);
                    /* try { // try from 040749ec to 040749f0 has its CatchHandler @ 04074abf */
    puVar7[-1] = 0x40749f1;
    Direct3DStateBlock9Imp__Direct3DStateBlock9Imp();
    *(undefined4 **)(param_1 + 0x75ec) = puVar5;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8876086c;
  }
  *puVar7 = (uint)local_20;
  puVar7[-1] = 0x4074a04;
  direct3ddevice9imp_040a2df0();
  return uVar4;
}

// --- Direct3DDevice9Imp::ColorFill @0x04075ca0 ---
/* source: direct3ddevice9imp */

int Direct3DDevice9Imp__ColorFill(int *param_1,int *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int aiStack_b8 [18];
  int local_70;
  undefined1 local_60 [24];
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  int local_28;
  int *local_24;
  int *local_20 [4];
  
  piVar7 = aiStack_b8 + 7;
  if (param_2 == (int *)0x0) {
    return -0x7789f794;
  }
  iVar8 = param_1[3];
  local_24 = &local_28;
  local_28 = iVar8;
  if (iVar8 != 0) {
    piVar7 = aiStack_b8 + 7;
    if (*(char *)(iVar8 + 0xebbc) != '\0') {
      aiStack_b8[7] = iVar8 + 0xebc4;
      aiStack_b8[6] = 0x4075dde;
      EnterCriticalSection();
      piVar7 = aiStack_b8 + 6;
    }
    if (*(int *)(iVar8 + 0xec64) == 0) {
      if (*(int *)(iVar8 + 0xebc0) != 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3ae;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"!mCurrentD3D9Thread";
        piVar7[-1] = 0x4075d7c;
        FUN_0400a810();
      }
      piVar7[-1] = 0x4075cf4;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar8 + 0xebc0) = uVar4;
    }
    else {
      local_70 = *(int *)(iVar8 + 0xebc0);
      piVar7[-1] = 0x4075d96;
      iVar5 = FUN_0415b750();
      if (local_70 != iVar5) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3b3;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar7[-1] = 0x4075dc3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar8 + 0xec64) = *(int *)(iVar8 + 0xec64) + 1;
  }
  iVar8 = -0x7789f794;
  if (param_2[0x1f] == 0) {
    *piVar7 = (int)(param_2 + 1);
                    /* try { // try from 04075d13 to 04075d33 has its CatchHandler @ 0407649a */
    piVar7[-1] = 0x4075d18;
    cVar3 = direct3dsurface9imp_040adca0();
    if (cVar3 == '\0') {
      *piVar7 = (int)(param_2 + 1);
                    /* try { // try from 04075df3 to 04076483 has its CatchHandler @ 0407649a */
      piVar7[-1] = 0x4075df8;
      cVar3 = direct3dsurface9imp_040add10();
      if (cVar3 == '\0') {
        iVar8 = *param_1;
        local_48 = (int *)0x0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_20[0] = (int *)0x0;
        piVar7[2] = (int)&local_48;
        piVar7[1] = 0;
        *piVar7 = (int)param_1;
        pcVar1 = *(code **)(iVar8 + 0xa0);
        piVar7[-1] = 0x4075e3d;
        iVar8 = (*pcVar1)();
        if (iVar8 < 0) {
          piVar7[3] = (int)
                      "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
          ;
          piVar7[2] = 0x14ac;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar7 = (int)"((HRESULT)(hr) >= 0)";
          piVar7[-1] = 0x40761e4;
          FUN_0400a810();
        }
        iVar8 = *param_1;
        piVar7[1] = 1;
        piVar7[2] = (int)&local_44;
        *piVar7 = (int)param_1;
        pcVar1 = *(code **)(iVar8 + 0xa0);
        piVar7[-1] = 0x4075e5f;
        iVar8 = (*pcVar1)();
        if (iVar8 < 0) {
          piVar7[3] = (int)
                      "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
          ;
          piVar7[2] = 0x14ad;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar7 = (int)"((HRESULT)(hr) >= 0)";
          piVar7[-1] = 0x40761b4;
          FUN_0400a810();
        }
        iVar8 = *param_1;
        piVar7[1] = 2;
        piVar7[2] = (int)&local_40;
        *piVar7 = (int)param_1;
        pcVar1 = *(code **)(iVar8 + 0xa0);
        piVar7[-1] = 0x4075e81;
        iVar8 = (*pcVar1)();
        if (iVar8 < 0) {
          piVar7[3] = (int)
                      "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
          ;
          piVar7[2] = 0x14ae;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar7 = (int)"((HRESULT)(hr) >= 0)";
          piVar7[-1] = 0x4076244;
          FUN_0400a810();
        }
        iVar8 = *param_1;
        piVar7[1] = 3;
        piVar7[2] = (int)&local_3c;
        *piVar7 = (int)param_1;
        pcVar1 = *(code **)(iVar8 + 0xa0);
        piVar7[-1] = 0x4075ea3;
        iVar8 = (*pcVar1)();
        if (iVar8 < 0) {
          piVar7[3] = (int)
                      "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
          ;
          piVar7[2] = 0x14af;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar7 = (int)"((HRESULT)(hr) >= 0)";
          piVar7[-1] = 0x4076214;
          FUN_0400a810();
        }
        iVar8 = *param_1;
        *piVar7 = (int)param_1;
        piVar7[1] = (int)local_20;
        pcVar1 = *(code **)(iVar8 + 0xa8);
        piVar7[-1] = 0x4075ebd;
        iVar8 = (*pcVar1)();
        if (iVar8 < 0) {
          piVar7[3] = (int)
                      "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
          ;
          piVar7[2] = 0x14b0;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar7 = (int)"((HRESULT)(hr) >= 0)";
          piVar7[-1] = 0x4076274;
          FUN_0400a810();
        }
        iVar8 = *param_1;
        *piVar7 = (int)param_1;
        piVar7[1] = (int)local_60;
        pcVar1 = *(code **)(iVar8 + 200);
        piVar7[-1] = 0x4075ed7;
        (*pcVar1)();
        iVar8 = *param_1;
        *piVar7 = (int)param_1;
        piVar7[1] = (int)local_38;
        pcVar1 = *(code **)(iVar8 + 0x138);
        piVar7[-1] = 0x4075ee9;
        (*pcVar1)();
        if (local_48 != param_2) {
          iVar8 = *param_1;
          piVar7[2] = (int)param_2;
          piVar7[1] = 0;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x4075f05;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14b9;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x4076484;
            FUN_0400a810();
          }
        }
        if (local_44 != 0) {
          iVar8 = *param_1;
          piVar7[2] = 0;
          piVar7[1] = 1;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x4075f2f;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14ba;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x4076454;
            FUN_0400a810();
          }
        }
        if (local_40 != 0) {
          iVar8 = *param_1;
          piVar7[2] = 0;
          piVar7[1] = 2;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x4075f59;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14bb;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x4076424;
            FUN_0400a810();
          }
        }
        if (local_3c != 0) {
          iVar8 = *param_1;
          piVar7[2] = 0;
          piVar7[1] = 3;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x4075f83;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14bc;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x40763f4;
            FUN_0400a810();
          }
        }
        if (local_20[0] != (int *)0x0) {
          iVar8 = *param_1;
          piVar7[1] = 0;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0xa4);
          piVar7[-1] = 0x4075fa5;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14bd;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x40763c4;
            FUN_0400a810();
          }
        }
        bVar2 = true;
        if ((((param_3 != (int *)0x0) && (bVar2 = false, *param_3 < 1)) && (param_3[1] < 1)) &&
           (param_3[2] == param_2[0x22])) {
          bVar2 = param_2[0x23] <= param_3[3];
        }
        iVar8 = *param_1;
        *piVar7 = (int)param_1;
        piVar7[1] = (int)local_60;
        pcVar1 = *(code **)(iVar8 + 0xc4);
        piVar7[-1] = 0x4075fda;
        (*pcVar1)();
        iVar8 = *param_1;
        *piVar7 = (int)param_1;
        piVar7[1] = (int)local_38;
        pcVar1 = *(code **)(iVar8 + 0x134);
        piVar7[-1] = 0x4075fec;
        (*pcVar1)();
        pcVar1 = *(code **)(*param_1 + 0xb4);
        piVar7[6] = 0;
        *piVar7 = (int)param_1;
        piVar6 = (int *)0x0;
        if (!bVar2) {
          piVar6 = param_3;
        }
        piVar7[5] = 0;
        piVar7[3] = 1;
        piVar7[1] = 1;
        piVar7[4] = param_4;
        piVar7[2] = (int)piVar6;
        piVar7[-1] = 0x4076037;
        iVar8 = (*pcVar1)();
        if (local_20[0] != (int *)0x0) {
          iVar8 = *param_1;
          piVar7[1] = (int)local_20[0];
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0xa4);
          piVar7[-1] = 0x407604f;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14d3;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x4076394;
            FUN_0400a810();
          }
        }
        if (local_3c != 0) {
          iVar8 = *param_1;
          piVar7[2] = local_3c;
          piVar7[1] = 3;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x4076077;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14d4;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x4076364;
            FUN_0400a810();
          }
        }
        if (local_40 != 0) {
          iVar8 = *param_1;
          piVar7[2] = local_40;
          piVar7[1] = 2;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x407609f;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14d5;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x4076334;
            FUN_0400a810();
          }
        }
        if (local_44 != 0) {
          iVar8 = *param_1;
          piVar7[2] = local_44;
          piVar7[1] = 1;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x40760c7;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14d6;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x4076304;
            FUN_0400a810();
          }
        }
        if (local_48 != param_2) {
          iVar8 = *param_1;
          piVar7[2] = (int)local_48;
          piVar7[1] = 0;
          *piVar7 = (int)param_1;
          pcVar1 = *(code **)(iVar8 + 0x9c);
          piVar7[-1] = 0x40760ef;
          iVar8 = (*pcVar1)();
          if (iVar8 < 0) {
            piVar7[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::ColorFill(IDirect3DSurface9*, const RECT*, D3DCOLOR)"
            ;
            piVar7[2] = 0x14d7;
            piVar7[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar7 = (int)"((HRESULT)(hr) >= 0)";
            piVar7[-1] = 0x40762d4;
            FUN_0400a810();
          }
        }
        if (local_20[0] != (int *)0x0) {
          iVar5 = *local_20[0];
          *piVar7 = (int)local_20[0];
          pcVar1 = *(code **)(iVar5 + 8);
          piVar7[-1] = 0x4076108;
          (*pcVar1)();
          piVar7 = piVar7 + -1;
        }
        if (local_3c != 0) {
          iVar5 = *local_48;
          *piVar7 = (int)local_48;
          pcVar1 = *(code **)(iVar5 + 8);
          piVar7[-1] = 0x407611d;
          (*pcVar1)();
          piVar7 = piVar7 + -1;
        }
        if (local_40 != 0) {
          iVar5 = *local_48;
          *piVar7 = (int)local_48;
          pcVar1 = *(code **)(iVar5 + 8);
          piVar7[-1] = 0x4076132;
          (*pcVar1)();
          piVar7 = piVar7 + -1;
        }
        if (local_44 != 0) {
          iVar5 = *local_48;
          *piVar7 = (int)local_48;
          pcVar1 = *(code **)(iVar5 + 8);
          piVar7[-1] = 0x4076147;
          (*pcVar1)();
          piVar7 = piVar7 + -1;
        }
        if (local_48 != (int *)0x0) {
          iVar5 = *local_48;
          *piVar7 = (int)local_48;
          pcVar1 = *(code **)(iVar5 + 8);
          piVar7[-1] = 0x4076159;
          (*pcVar1)();
          piVar7 = piVar7 + -1;
        }
        iVar5 = *param_1;
        *piVar7 = (int)param_1;
        piVar7[1] = (int)local_60;
        pcVar1 = *(code **)(iVar5 + 0xc4);
        piVar7[-1] = 0x407616e;
        (*pcVar1)();
        iVar5 = *param_1;
        *piVar7 = (int)param_1;
        piVar7[1] = (int)local_38;
        pcVar1 = *(code **)(iVar5 + 0x134);
        piVar7[-1] = 0x4076180;
        (*pcVar1)();
        if (-1 < iVar8) {
          iVar8 = 0;
        }
        goto LAB_04075d40;
      }
    }
    piVar7[1] = (int)
                "ColorFill() doesn\'t support depth stencil formats. Check if it supports them on PC, and add code here if it does."
    ;
    *piVar7 = 0xf;
    piVar7[-1] = 0x4075d34;
    FUN_0402cd10();
    iVar8 = -0x7789f794;
  }
LAB_04075d40:
  *piVar7 = (int)&local_24;
  piVar7[-1] = 0x4075d4b;
  direct3ddevice9imp_040a2df0();
  return iVar8;
}

// --- Direct3DDevice9Imp::CreateAdditionalSwapChain @0x04078b30 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_CreateAdditionalSwapChain(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x4078c0e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4078bbc;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4078b71;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4078bcb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4078bf3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4078b89;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::CreateCubeTexture @0x04077d10 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_CreateCubeTexture
          (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uStack_50;
  int local_4c [10];
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  puVar8 = (uint *)local_4c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    puVar8 = (uint *)local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x4077e66;
      EnterCriticalSection();
      puVar8 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        puVar8[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar8[2] = 0x3ae;
        puVar8[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar8 = (uint)"!mCurrentD3D9Thread";
        puVar8[-1] = 0x4077e0c;
        FUN_0400a810();
      }
      puVar8[-1] = 0x4077d5a;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar5;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xebc0);
      puVar8[-1] = 0x4077e23;
      iVar7 = FUN_0415b750();
      if (iVar3 != iVar7) {
        puVar8[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar8[2] = 0x3b3;
        puVar8[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar8 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar8[-1] = 0x4077e4f;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *puVar8 = 0x33c;
                    /* try { // try from 04077d6e to 04077d72 has its CatchHandler @ 04077e6e */
  puVar8[-1] = 0x4077d73;
  puVar6 = operator_new(*puVar8);
  *puVar6 = &PTR_FUN_042f6d08;
  puVar8[1] = (uint)puVar6;
  *puVar8 = (uint)(puVar6 + 1);
                    /* try { // try from 04077d85 to 04077d89 has its CatchHandler @ 04077e83 */
  puVar8[-1] = 0x4077d8a;
  Direct3DCubeTexture9Imp__Direct3DCubeTexture9Imp();
  puVar8[6] = param_6;
  puVar8[5] = param_5;
  puVar8[4] = param_4;
  puVar8[3] = param_3;
  puVar8[2] = param_2;
  uVar2 = *(uint *)(param_1 + 0xc);
  *puVar8 = (uint)(puVar6 + 1);
  puVar8[1] = uVar2;
                    /* try { // try from 04077db7 to 04077dbb has its CatchHandler @ 04077e6e */
  puVar8[-1] = 0x4077dbc;
  cVar4 = direct3dcubetexture9imp_0406e540();
  uVar5 = 0x8876086c;
  if (cVar4 != '\0') {
    uVar5 = 0;
    *param_7 = puVar6;
  }
  *puVar8 = (uint)local_20;
  puVar8[-1] = 0x4077dd7;
  direct3ddevice9imp_040a2df0();
  return uVar5;
}

// --- Direct3DDevice9Imp::CreateDepthStencilSurface @0x04077590 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__CreateDepthStencilSurface
          (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7
          ,undefined4 *param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uStack_60;
  int local_5c;
  char *local_58;
  undefined4 *local_30;
  int local_24;
  int *local_20 [4];
  
  puVar5 = (uint *)&local_5c;
  if (param_9 != 0) {
    local_58 = "Non-zero pSharedHandle in CreateDepthStencilSurface()!";
    local_5c = 10;
    uStack_60 = 0x40775ba;
    FUN_0402cd10();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar1;
  if (iVar1 != 0) {
    puVar5 = (uint *)&local_5c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_5c = iVar1 + 0xebc4;
      uStack_60 = 0x407776e;
      EnterCriticalSection();
      puVar5 = &uStack_60;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        puVar5[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar5[2] = 0x3ae;
        puVar5[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar5 = (uint)"!mCurrentD3D9Thread";
        puVar5[-1] = 0x4077714;
        FUN_0400a810();
      }
      puVar5[-1] = 0x40775f8;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(undefined4 **)(iVar1 + 0xebc0);
      puVar5[-1] = 0x407772e;
      iVar4 = FUN_0415b750();
      if (local_30 != (undefined4 *)iVar4) {
        puVar5[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar5[2] = 0x3b3;
        puVar5[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar5 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar5[-1] = 0x407775b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *puVar5 = 0xdc;
                    /* try { // try from 0407760c to 04077610 has its CatchHandler @ 040777da */
  puVar5[-1] = 0x4077611;
  puVar3 = operator_new(*puVar5);
  *puVar3 = &PTR_FUN_042efbe8;
  local_30 = puVar3 + 1;
  puVar5[1] = (uint)puVar3;
  *puVar5 = (uint)local_30;
                    /* try { // try from 04077626 to 0407762a has its CatchHandler @ 040777bb */
  puVar5[-1] = 0x407762b;
  Direct3DSurface9Imp__Direct3DSurface9Imp();
  if (param_4 < 0x51) {
    if ((0x4e < param_4) || (param_4 == 0x49)) goto LAB_04077638;
    if (param_4 < 0x4a) {
      if (param_4 == 0x47) goto LAB_04077638;
    }
    else if ((param_4 == 0x4b) || (param_4 == 0x4d)) goto LAB_04077638;
  }
  else {
    if (param_4 == 0x36314644) goto LAB_04077638;
    if (param_4 < 0x36314645) {
      if ((param_4 == 0x53) || (param_4 == 0x34324644)) goto LAB_04077638;
    }
    else if ((param_4 == 0x5a544e49) || (param_4 == 0x5a574152)) goto LAB_04077638;
  }
  puVar5[3] = (uint)
              "virtual HRESULT Direct3DDevice9Imp::CreateDepthStencilSurface(UINT, UINT, D3DFORMAT, D3DMULTISAMPLE_TYPE, DWORD, WINBOOL, IDirect3DSurface9**, void**)"
  ;
  puVar5[2] = 0xcf2;
  puVar5[1] = (uint)
              "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
  ;
  *puVar5 = (uint)"!IsLockableFormat( Format )";
                    /* try { // try from 040776e5 to 040776e9 has its CatchHandler @ 040777da */
  puVar5[-1] = 0x40776ea;
  FUN_0400a810();
LAB_04077638:
  puVar5[4] = param_4;
  puVar5[7] = param_7;
  puVar5[6] = param_6;
  puVar5[5] = param_5;
  puVar5[3] = param_3;
  puVar5[2] = param_2;
  puVar5[1] = *(uint *)(param_1 + 0xc);
  *puVar5 = (uint)local_30;
                    /* try { // try from 0407766c to 04077670 has its CatchHandler @ 040777da */
  puVar5[-1] = 0x4077671;
  Direct3DSurface9Imp__InitializeRenderbuffer();
  *param_8 = puVar3;
  *puVar5 = (uint)local_20;
  puVar5[-1] = 0x4077681;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::CreateIndexBuffer @0x04077a90 ---
/* source: direct3ddevice9imp */

int d3d9device_CreateIndexBuffer
              (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int aiStack_58 [13];
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  puVar8 = (uint *)(aiStack_58 + 3);
  iVar6 = *(int *)(param_1 + 0xc);
  local_24 = iVar6;
  if (iVar6 != 0) {
    puVar8 = (uint *)(aiStack_58 + 3);
    if (*(char *)(iVar6 + 0xebbc) != '\0') {
      aiStack_58[3] = iVar6 + 0xebc4;
      aiStack_58[2] = 0x4077bde;
      EnterCriticalSection();
      puVar8 = (uint *)(aiStack_58 + 2);
    }
    if (*(int *)(iVar6 + 0xec64) == 0) {
      if (*(int *)(iVar6 + 0xebc0) != 0) {
        puVar8[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar8[2] = 0x3ae;
        puVar8[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar8 = (uint)"!mCurrentD3D9Thread";
        puVar8[-1] = 0x4077b84;
        FUN_0400a810();
      }
      puVar8[-1] = 0x4077ada;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar6 + 0xebc0) = uVar4;
    }
    else {
      iVar2 = *(int *)(iVar6 + 0xebc0);
      puVar8[-1] = 0x4077b9b;
      iVar7 = FUN_0415b750();
      if (iVar2 != iVar7) {
        puVar8[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar8[2] = 0x3b3;
        puVar8[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar8 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar8[-1] = 0x4077bc7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar6 + 0xec64) = *(int *)(iVar6 + 0xec64) + 1;
  }
  *puVar8 = 100;
                    /* try { // try from 04077aee to 04077af2 has its CatchHandler @ 04077c00 */
  puVar8[-1] = 0x4077af3;
  piVar5 = operator_new(*puVar8);
  *piVar5 = (int)&PTR_FUN_042f6e68;
  puVar8[1] = (uint)piVar5;
  *puVar8 = (uint)(piVar5 + 1);
                    /* try { // try from 04077b05 to 04077b09 has its CatchHandler @ 04077c15 */
  puVar8[-1] = 0x4077b0a;
  Direct3DIndexBuffer9Imp__Direct3DIndexBuffer9Imp();
  puVar8[5] = param_5;
  puVar8[4] = param_4;
  puVar8[3] = param_3;
  puVar8[2] = param_2;
  uVar1 = *(uint *)(param_1 + 0xc);
  *puVar8 = (uint)(piVar5 + 1);
  puVar8[1] = uVar1;
                    /* try { // try from 04077b30 to 04077b34 has its CatchHandler @ 04077c00 */
  puVar8[-1] = 0x4077b35;
  iVar6 = Direct3DIndexBuffer9Imp__Initialize();
  if (iVar6 < 0) {
    iVar2 = *piVar5;
    *puVar8 = (uint)piVar5;
                    /* try { // try from 04077bf5 to 04077bf7 has its CatchHandler @ 04077c00 */
    pcVar3 = *(code **)(iVar2 + 8);
    puVar8[-1] = 0x4077bf8;
    (*pcVar3)();
    puVar8 = puVar8 + -1;
  }
  else {
    *param_6 = piVar5;
  }
  *puVar8 = (uint)local_20;
  puVar8[-1] = 0x4077b4f;
  direct3ddevice9imp_040a2df0();
  return iVar6;
}

// --- Direct3DDevice9Imp::CreateOffscreenPlainSurface @0x04075ab0 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__CreateOffscreenPlainSurface(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 local_7c;
  int *local_78;
  char *local_74;
  undefined4 local_70;
  undefined1 local_28 [4];
  undefined4 *local_24;
  int *local_20;
  
  puVar4 = (undefined4 *)&stack0xffffff94;
  piVar5 = (int *)&stack0xffffff94;
  if (in_stack_00000014 == 1) {
    return 0x8876086c;
  }
  local_70 = 0x4075ad9;
  direct3ddevice9imp_040704e0();
  local_24 = (undefined4 *)0x0;
  if (in_stack_00000014 - 2U < 2) {
    local_70 = 0x4075bec;
    puVar2 = operator_new(0xdc);
    *puVar2 = &PTR_FUN_042efbe8;
                    /* try { // try from 04075c01 to 04075c05 has its CatchHandler @ 04075c7a */
    local_70 = 0x4075c06;
    Direct3DSurface9Imp__Direct3DSurface9Imp();
                    /* try { // try from 04075c2f to 04075c63 has its CatchHandler @ 04075c99 */
    local_70 = 0x4075c34;
    local_24 = puVar2;
    FUN_040ad880();
  }
  else {
    if (in_stack_00000014 != 0) {
                    /* try { // try from 04075bc7 to 04075beb has its CatchHandler @ 04075c99 */
      local_70 = 0x4075bcc;
      FUN_0400a810();
    }
    local_20 = (int *)0x0;
                    /* try { // try from 04075b38 to 04075b7f has its CatchHandler @ 04075c99 */
    local_70 = 0x4075b3b;
    iVar1 = (**(code **)(*param_1 + 100))();
    if (iVar1 < 0) {
      uVar3 = 0x8876086c;
      goto LAB_04075b8d;
    }
    local_70 = 0x4075b5d;
    iVar1 = (**(code **)(*local_20 + 0x48))();
    if (iVar1 < 0) {
      local_70 = 0x151a;
      local_74 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      local_78 = (int *)0x42f60e2;
      local_7c = 0x4075c64;
      FUN_0400a810();
    }
    local_24[0x29] = 1;
    local_78 = local_20;
    local_7c = 0x4075b80;
    (**(code **)(*local_20 + 8))();
    puVar4 = &local_7c;
  }
  uVar3 = 0;
  *in_stack_00000018 = local_24;
  piVar5 = puVar4;
LAB_04075b8d:
  *piVar5 = (int)local_28;
  piVar5[-1] = 0x4075b98;
  direct3ddevice9imp_040a2df0();
  return uVar3;
}

// --- Direct3DDevice9Imp::CreateRenderTarget @0x040777e0 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__CreateRenderTarget
          (int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,int param_7
          ,undefined4 *param_8,int param_9)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 local_70;
  int local_6c;
  char *local_68;
  undefined4 *local_30;
  int local_2c;
  int *local_28;
  undefined4 *local_24;
  int *local_20 [4];
  
  puVar6 = (uint *)&local_6c;
  if (param_9 != 0) {
    local_68 = "Non-zero pSharedHandle in CreateRenderTarget()!";
    local_6c = 10;
    local_70 = 0x407780a;
    FUN_0402cd10();
  }
  iVar4 = param_1[3];
  local_28 = &local_2c;
  local_2c = iVar4;
  if (iVar4 != 0) {
    puVar6 = (uint *)&local_6c;
    if (*(char *)(iVar4 + 0xebbc) != '\0') {
      local_6c = iVar4 + 0xebc4;
      local_70 = 0x4077a1e;
      EnterCriticalSection();
      puVar6 = &local_70;
    }
    if (*(int *)(iVar4 + 0xec64) == 0) {
      if (*(int *)(iVar4 + 0xebc0) != 0) {
        puVar6[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar6[2] = 0x3ae;
        puVar6[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar6 = (uint)"!mCurrentD3D9Thread";
        puVar6[-1] = 0x4077954;
        FUN_0400a810();
      }
      puVar6[-1] = 0x4077848;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar4 + 0xebc0) = uVar3;
    }
    else {
      local_30 = *(undefined4 **)(iVar4 + 0xebc0);
      puVar6[-1] = 0x40779de;
      puVar5 = (undefined4 *)FUN_0415b750();
      if (local_30 != puVar5) {
        puVar6[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar6[2] = 0x3b3;
        puVar6[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar6 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar6[-1] = 0x4077a0b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar4 + 0xec64) = *(int *)(iVar4 + 0xec64) + 1;
  }
  local_24 = (undefined4 *)0x0;
  if (param_7 == 0) {
    *puVar6 = 0xdc;
                    /* try { // try from 04077967 to 0407796b has its CatchHandler @ 04077a89 */
    puVar6[-1] = 0x407796c;
    puVar5 = operator_new(*puVar6);
    *puVar5 = &PTR_FUN_042efbe8;
    local_30 = puVar5 + 1;
    puVar6[1] = (uint)puVar5;
    *puVar6 = (uint)local_30;
                    /* try { // try from 04077981 to 04077985 has its CatchHandler @ 04077a6a */
    puVar6[-1] = 0x4077986;
    Direct3DSurface9Imp__Direct3DSurface9Imp();
    puVar6[7] = 0;
    puVar6[6] = param_6;
    puVar6[5] = param_5;
    puVar6[4] = param_4;
    puVar6[3] = param_3;
    puVar6[2] = param_2;
    uVar2 = param_1[3];
    *puVar6 = (uint)local_30;
    puVar6[1] = uVar2;
                    /* try { // try from 040779be to 040779c2 has its CatchHandler @ 04077a89 */
    puVar6[-1] = 0x40779c3;
    local_24 = puVar5;
    Direct3DSurface9Imp__InitializeRenderbuffer();
LAB_0407790d:
    uVar3 = 0;
    *param_8 = local_24;
  }
  else {
    if ((param_6 == 0) && (param_5 == 0)) {
      iVar4 = *param_1;
      local_20[0] = (int *)0x0;
      puVar6[7] = (uint)local_20;
      puVar6[8] = 0;
      puVar6[6] = 0;
      puVar6[4] = 0x201;
      puVar6[5] = param_4;
      puVar6[3] = 1;
      *puVar6 = (uint)param_1;
      puVar6[2] = param_3;
      puVar6[1] = param_2;
                    /* try { // try from 040778c2 to 04077909 has its CatchHandler @ 04077a89 */
      pcVar1 = *(code **)(iVar4 + 100);
      puVar6[-1] = 0x40778c5;
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        iVar4 = *local_20[0];
        puVar6[2] = (uint)&local_24;
        puVar6[1] = 0;
        *puVar6 = (uint)local_20[0];
        pcVar1 = *(code **)(iVar4 + 0x48);
        puVar6[-1] = 0x40778e7;
        iVar4 = (*pcVar1)();
        if (iVar4 < 0) {
          *puVar6 = (uint)
                    "virtual HRESULT Direct3DDevice9Imp::CreateRenderTarget(UINT, UINT, D3DFORMAT, D3DMULTISAMPLE_TYPE, DWORD, WINBOOL, IDirect3DSurface9**, void**)"
          ;
          puVar6[-1] = 0xcd2;
          puVar6[-2] = (uint)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          puVar6[-3] = (uint)"((HRESULT)(res) >= 0)";
                    /* try { // try from 04077a4f to 04077a53 has its CatchHandler @ 04077a89 */
          puVar6[-4] = 0x4077a54;
          FUN_0400a810();
        }
        local_24[0x29] = 1;
        iVar4 = *local_20[0];
        puVar6[-3] = (uint)local_20[0];
        pcVar1 = *(code **)(iVar4 + 8);
        puVar6[-4] = 0x407790a;
        (*pcVar1)();
        puVar6 = puVar6 + -4;
        goto LAB_0407790d;
      }
    }
    uVar3 = 0x8876086a;
  }
  *puVar6 = (uint)&local_28;
  puVar6[-1] = 0x4077922;
  direct3ddevice9imp_040a2df0();
  return uVar3;
}

// --- Direct3DDevice9Imp::CreateScreenBuffers @0x0407f900 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__CreateScreenBuffers(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 local_4c;
  int *local_48;
  char *local_44;
  undefined4 local_40;
  
  puVar11 = (uint *)&stack0xffffffc4;
  if ((param_1[0x14bf] != 0) || (param_1[0x14c0] != 0)) {
    local_40 = 0x407f93e;
    FUN_0400a810();
  }
  if ((char)param_1[0x3ad4] == '\0') {
LAB_0407f94b:
    local_40 = 0x407f957;
    piVar5 = operator_new(0x2ac);
    *piVar5 = (int)&PTR_FUN_042f6b48;
                    /* try { // try from 0407f969 to 0407f96d has its CatchHandler @ 0407fe9c */
    local_40 = 0x407f96e;
    Direct3DTexture9Imp__Direct3DTexture9Imp();
    local_40 = 0x407f9aa;
    cVar4 = direct3dtexture9imp_040b0b90();
    if (cVar4 == '\0') {
      local_40 = 0x407fc94;
      FUN_0400a810();
    }
    local_40 = 0x407f9cc;
    iVar6 = (**(code **)(*piVar5 + 0x48))();
    if (iVar6 < 0) {
      local_40 = 0x30a;
      local_44 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      local_48 = (int *)0x42f130c;
      local_4c = 0x407fcc4;
      FUN_0400a810();
    }
    *(undefined4 *)(param_1[0x14bf] + 0xa4) = 1;
    local_4c = 0x407f9ef;
    local_48 = piVar5;
    (**(code **)(*piVar5 + 8))();
    puVar11 = &local_4c;
  }
  else {
    uVar10 = param_1[0x13];
    if (uVar10 != 1) {
      if (uVar10 != 0) {
        if (uVar10 < 0x11) goto LAB_0407fbdf;
        local_40 = 0x407fe1c;
        FUN_0402cd10();
      }
      goto LAB_0407f94b;
    }
    if (*(char *)((int)param_1 + 0x7609) == '\0') {
      if ((char)param_1[0x1d82] == '\0') {
        if (*(char *)((int)param_1 + 0x7607) == '\0') {
          if (*(char *)((int)param_1 + 0x7606) == '\0') {
            if (*(char *)((int)param_1 + 0x7605) == '\0') {
              if ((char)param_1[0x1d81] == '\0') {
                if (*(char *)((int)param_1 + 0x7603) == '\0') {
                  if (*(char *)((int)param_1 + 0x7602) == '\0') {
                    if (*(char *)((int)param_1 + 0x7601) == '\0') {
                      if ((char)param_1[0x1d80] == '\0') {
                        if (*(char *)((int)param_1 + 0x75ff) == '\0') {
                          if (*(char *)((int)param_1 + 0x75fe) == '\0') {
                            if (*(char *)((int)param_1 + 0x75fd) == '\0') {
                              if ((char)param_1[0x1d7f] == '\0') {
                                iVar6 = 0;
                                if (*(char *)((int)param_1 + 0x75fb) == '\0') goto LAB_0407f94b;
                              }
                              else {
                                iVar6 = 1;
                              }
                            }
                            else {
                              iVar6 = 2;
                            }
                          }
                          else {
                            iVar6 = 3;
                          }
                        }
                        else {
                          iVar6 = 4;
                        }
                      }
                      else {
                        iVar6 = 5;
                      }
                    }
                    else {
                      iVar6 = 6;
                    }
                  }
                  else {
                    iVar6 = 7;
                  }
                }
                else {
                  iVar6 = 8;
                }
              }
              else {
                iVar6 = 9;
              }
            }
            else {
              iVar6 = 10;
            }
          }
          else {
            iVar6 = 0xb;
          }
        }
        else {
          iVar6 = 0xc;
        }
      }
      else {
        iVar6 = 0xd;
      }
    }
    else {
      iVar6 = 0xe;
    }
    uVar10 = iVar6 + 2;
LAB_0407fbdf:
    if (uVar10 == 1) goto LAB_0407f94b;
    local_40 = 0x407fbf4;
    puVar9 = operator_new(0xdc);
    *puVar9 = &PTR_FUN_042efbe8;
                    /* try { // try from 0407fc06 to 0407fc0a has its CatchHandler @ 0407fe88 */
    local_40 = 0x407fc0b;
    Direct3DSurface9Imp__Direct3DSurface9Imp();
    param_1[0x14bf] = (int)puVar9;
    local_40 = 0x407fc4b;
    Direct3DSurface9Imp__InitializeRenderbuffer();
  }
  if (param_1[0x18] == 0) goto LAB_0407fab2;
  *puVar11 = 0xdc;
  puVar11[-1] = 0x407fa09;
  puVar7 = operator_new(*puVar11);
  *puVar7 = &PTR_FUN_042efbe8;
  puVar9 = puVar7 + 1;
  puVar11[1] = (uint)puVar7;
  *puVar11 = (uint)puVar9;
                    /* try { // try from 0407fa1b to 0407fa1f has its CatchHandler @ 0407fe9a */
  puVar11[-1] = 0x407fa20;
  Direct3DSurface9Imp__Direct3DSurface9Imp();
  uVar10 = param_1[0x19];
  param_1[0x14c0] = (int)puVar7;
  if (uVar10 < 0x51) {
    if ((uVar10 < 0x4f) && (uVar10 != 0x49)) {
      if (uVar10 < 0x4a) {
        if (uVar10 != 0x47) goto LAB_0407fa4b;
      }
      else if ((uVar10 != 0x4b) && (uVar10 != 0x4d)) goto LAB_0407fa4b;
    }
  }
  else if (uVar10 != 0x36314644) {
    if (uVar10 < 0x36314645) {
      if ((uVar10 != 0x53) && (uVar10 != 0x34324644)) {
LAB_0407fa4b:
        puVar11[3] = (uint)"void Direct3DDevice9Imp::CreateScreenBuffers()";
        puVar11[2] = 0x313;
        puVar11[1] = (uint)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar11 = (uint)"!IsLockableFormat( mPresentParameters.AutoDepthStencilFormat )";
        puVar11[-1] = 0x407fa6f;
        FUN_0400a810();
        uVar10 = param_1[0x19];
        puVar9 = (undefined4 *)(param_1[0x14c0] + 4);
      }
    }
    else if ((uVar10 != 0x5a544e49) && (uVar10 != 0x5a574152)) goto LAB_0407fa4b;
  }
  puVar11[7] = 1;
  puVar11[6] = param_1[0x14];
  uVar1 = param_1[0x13];
  puVar11[4] = uVar10;
  puVar11[5] = uVar1;
  puVar11[3] = param_1[0x10];
  puVar11[2] = param_1[0xf];
  uVar10 = param_1[3];
  *puVar11 = (uint)puVar9;
  puVar11[1] = uVar10;
  puVar11[-1] = 0x407fab2;
  Direct3DSurface9Imp__InitializeRenderbuffer();
LAB_0407fab2:
  puVar11[3] = 4;
  puVar11[2] = 5;
  puVar11[1] = (uint)param_1;
  *puVar11 = (uint)(param_1 + 0x3b00);
  puVar11[-1] = 0x407fad4;
  piVar8 = (int *)D3D9CommandQueue__GetNextCommandPointer();
  piVar5 = (int *)param_1[0x14bf];
  *piVar8 = (int)piVar5;
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    *puVar11 = (uint)piVar5;
    pcVar2 = *(code **)(iVar6 + 4);
    puVar11[-1] = 0x407fae8;
    (*pcVar2)();
    puVar11 = puVar11 + -1;
  }
  *puVar11 = (uint)(param_1 + 0x3b00);
  puVar11[-1] = 0x407faf3;
  D3D9CommandQueue__CommandSubmitted();
  iVar6 = param_1[0x14bf];
  iVar3 = *param_1;
  puVar11[1] = 0;
  *puVar11 = (uint)param_1;
  puVar11[2] = iVar6;
  pcVar2 = *(code **)(iVar3 + 0x9c);
  puVar11[-1] = 0x407fb10;
  (*pcVar2)();
  if (param_1[0x18] != 0) {
    iVar6 = param_1[0x14c0];
    iVar3 = *param_1;
    *puVar11 = (uint)param_1;
    puVar11[1] = iVar6;
    pcVar2 = *(code **)(iVar3 + 0xa4);
    puVar11[-1] = 0x407fc65;
    (*pcVar2)();
  }
  iVar6 = *param_1;
  puVar11[6] = 0;
  puVar11[5] = 0;
  puVar11[4] = -0x1000000;
  puVar11[3] = 7;
  puVar11[2] = 0;
  puVar11[1] = 0;
  *puVar11 = (uint)param_1;
  pcVar2 = *(code **)(iVar6 + 0xb4);
  puVar11[-1] = 0x407fb56;
  iVar6 = (*pcVar2)();
  if (iVar6 < 0) {
    puVar11[3] = (uint)"void Direct3DDevice9Imp::CreateScreenBuffers()";
    puVar11[2] = 0x323;
    puVar11[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
    ;
    *puVar11 = (uint)
               "((HRESULT)(Clear( 0, __null, 0x01|0x02|0x04, ((D3DCOLOR)((((0xFF)&0xff)<<24)|(((0)&0xff)<<16)|(((0)&0xff)<<8)|((0)&0xff))), 0.0f, 0 )) >= 0)"
    ;
    puVar11[-1] = 0x407fcf4;
    FUN_0400a810();
    return;
  }
  return;
}

// --- Direct3DDevice9Imp::CreateTexture @0x04078060 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_CreateTexture
          (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7
          ,undefined4 *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int aiStack_68 [13];
  int local_34;
  int *local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [6];
  undefined1 local_1e;
  undefined1 local_1d [13];
  
  local_30 = &local_34;
  puVar9 = (uint *)(aiStack_68 + 3);
  iVar1 = *(int *)(param_1 + 0xc);
  local_34 = iVar1;
  if (iVar1 != 0) {
    puVar9 = (uint *)(aiStack_68 + 3);
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_68[3] = iVar1 + 0xebc4;
      aiStack_68[2] = 0x40781fe;
      EnterCriticalSection();
      puVar9 = (uint *)(aiStack_68 + 2);
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        puVar9[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar9[2] = 0x3ae;
        puVar9[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar9 = (uint)"!mCurrentD3D9Thread";
        puVar9[-1] = 0x40781a4;
        FUN_0400a810();
      }
      puVar9[-1] = 0x40780aa;
      uVar6 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar6;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xebc0);
      puVar9[-1] = 0x40781bb;
      iVar8 = FUN_0415b750();
      if (iVar3 != iVar8) {
        puVar9[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar9[2] = 0x3b3;
        puVar9[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar9 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar9[-1] = 0x40781e7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  puVar9[6] = (uint)local_1d;
  puVar9[5] = (uint)&local_1e;
  puVar9[4] = (uint)local_24;
  puVar9[3] = (uint)local_28;
  puVar9[2] = (uint)local_2c;
  puVar9[1] = param_5 & 1;
  *puVar9 = param_6;
                    /* try { // try from 040780ea to 04078102 has its CatchHandler @ 0407823e */
  puVar9[-1] = 0x40780ef;
  cVar5 = PixelFormatData__MapTextureFormatToGL();
  if (cVar5 == '\0') {
    uVar6 = 0x8876086c;
  }
  else {
    *puVar9 = 0x2ac;
    puVar9[-1] = 0x4078103;
    piVar7 = operator_new(*puVar9);
    *piVar7 = (int)&PTR_FUN_042f6b48;
    puVar9[1] = (uint)piVar7;
    *puVar9 = (uint)(piVar7 + 1);
                    /* try { // try from 04078115 to 04078119 has its CatchHandler @ 04078253 */
    puVar9[-1] = 0x407811a;
    Direct3DTexture9Imp__Direct3DTexture9Imp();
    puVar9[7] = param_7;
    puVar9[6] = param_6;
    puVar9[5] = param_5;
    puVar9[4] = param_4;
    puVar9[3] = param_3;
    puVar9[2] = param_2;
    uVar2 = *(uint *)(param_1 + 0xc);
    *puVar9 = (uint)(piVar7 + 1);
    puVar9[1] = uVar2;
                    /* try { // try from 0407814e to 04078152 has its CatchHandler @ 0407823e */
    puVar9[-1] = 0x4078153;
    cVar5 = direct3dtexture9imp_040b0b90();
    if (cVar5 == '\0') {
      iVar1 = *piVar7;
      *puVar9 = (uint)piVar7;
                    /* try { // try from 04078225 to 04078227 has its CatchHandler @ 0407823e */
      pcVar4 = *(code **)(iVar1 + 8);
      puVar9[-1] = 0x4078228;
      (*pcVar4)();
      puVar9 = puVar9 + -1;
      uVar6 = 0x8876086c;
      *param_8 = 0;
    }
    else {
      *param_8 = piVar7;
      uVar6 = 0;
    }
  }
  *puVar9 = (uint)&local_30;
  puVar9[-1] = 0x407816d;
  direct3ddevice9imp_040a2df0();
  return uVar6;
}

// --- Direct3DDevice9Imp::CreateVertexDeclaration @0x04072ae0 ---
/* source: d3dstructs, direct3ddevice9imp */

undefined4 d3d9device_CreateVertexDeclaration(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  puVar7 = (uint *)local_3c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    puVar7 = (uint *)local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x4072c9e;
      EnterCriticalSection();
      puVar7 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        puVar7[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar7[2] = 0x3ae;
        puVar7[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar7 = (uint)"!mCurrentD3D9Thread";
        puVar7[-1] = 0x4072c44;
        FUN_0400a810();
      }
      puVar7[-1] = 0x4072b2a;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xebc0);
      puVar7[-1] = 0x4072c5b;
      iVar6 = FUN_0415b750();
      if (iVar3 != iVar6) {
        puVar7[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar7[2] = 0x3b3;
        puVar7[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar7 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar7[-1] = 0x4072c87;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *puVar7 = 0x74;
                    /* try { // try from 04072b3e to 04072b42 has its CatchHandler @ 04072ca6 */
  puVar7[-1] = 0x4072b43;
  puVar5 = operator_new(*puVar7);
  *puVar5 = &PTR_FUN_042f6f48;
  puVar7[1] = (uint)puVar5;
  *puVar7 = (uint)(puVar5 + 1);
                    /* try { // try from 04072b55 to 04072b59 has its CatchHandler @ 04072cbb */
  puVar7[-1] = 0x4072b5a;
  Direct3DVertexDeclaration9Imp__Direct3DVertexDeclaration9Imp();
  puVar7[2] = param_2;
  uVar2 = *(uint *)(param_1 + 0xc);
  *puVar7 = (uint)(puVar5 + 1);
  puVar7[1] = uVar2;
                    /* try { // try from 04072b6b to 04072bd8 has its CatchHandler @ 04072ca6 */
  puVar7[-1] = 0x4072b70;
  Direct3DVertexDeclaration9Imp__Initialize();
  *param_3 = puVar5;
  *puVar7 = param_1 + 0xeafc;
  puVar7[-1] = 0x4072b83;
  pthread_mutex_lock((pthread_mutex_t *)*puVar7);
  if (puVar5[6] != 0) {
    puVar7[3] = (uint)"void eON_ListElement::AddToList(eON_ListElement*)";
    puVar7[2] = 0x26;
    puVar7[1] = (uint)
                "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
    ;
    *puVar7 = (uint)"Prev == __null";
    puVar7[-1] = 0x4072bae;
    FUN_0400a810();
  }
  if (puVar5[7] != 0) {
    puVar7[3] = (uint)"void eON_ListElement::AddToList(eON_ListElement*)";
    puVar7[2] = 0x27;
    puVar7[1] = (uint)
                "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
    ;
    *puVar7 = (uint)"Next == __null";
    puVar7[-1] = 0x4072bd9;
    FUN_0400a810();
  }
  puVar5[6] = param_1 + 0xeaf0;
  puVar5[7] = *(undefined4 *)(param_1 + 0xeaf8);
  iVar1 = *(int *)(param_1 + 0xeaf8);
  *(undefined4 **)(param_1 + 0xeaf8) = puVar5 + 5;
  *(undefined4 **)(iVar1 + 4) = puVar5 + 5;
  *puVar7 = param_1 + 0xeafc;
  puVar7[-1] = 0x4072c05;
  pthread_mutex_unlock((pthread_mutex_t *)*puVar7);
  *puVar7 = (uint)local_20;
  puVar7[-1] = 0x4072c10;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::CreateVolumeTexture @0x04077ea0 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_CreateVolumeTexture
          (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7
          ,uint param_8,undefined4 *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int aiStack_68 [17];
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  puVar9 = (uint *)(aiStack_68 + 3);
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    puVar9 = (uint *)(aiStack_68 + 3);
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_68[3] = iVar1 + 0xebc4;
      aiStack_68[2] = 0x4077ffe;
      EnterCriticalSection();
      puVar9 = (uint *)(aiStack_68 + 2);
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        puVar9[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar9[2] = 0x3ae;
        puVar9[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar9 = (uint)"!mCurrentD3D9Thread";
        puVar9[-1] = 0x4077fa4;
        FUN_0400a810();
      }
      puVar9[-1] = 0x4077eea;
      uVar6 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar6;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xebc0);
      puVar9[-1] = 0x4077fbb;
      iVar8 = FUN_0415b750();
      if (iVar3 != iVar8) {
        puVar9[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar9[2] = 0x3b3;
        puVar9[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar9 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar9[-1] = 0x4077fe7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *puVar9 = 0x2b8;
                    /* try { // try from 04077efe to 04077f02 has its CatchHandler @ 0407804d */
  puVar9[-1] = 0x4077f03;
  piVar7 = operator_new(*puVar9);
  *piVar7 = (int)&PTR_FUN_042f6c28;
  puVar9[1] = (uint)piVar7;
  *puVar9 = (uint)(piVar7 + 1);
                    /* try { // try from 04077f15 to 04077f19 has its CatchHandler @ 0407802e */
  puVar9[-1] = 0x4077f1a;
  Direct3DVolumeTexture9Imp__Direct3DVolumeTexture9Imp();
  puVar9[8] = param_8;
  puVar9[7] = param_7;
  puVar9[6] = param_6;
  puVar9[5] = param_5;
  puVar9[4] = param_4;
  puVar9[3] = param_3;
  puVar9[2] = param_2;
  uVar2 = *(uint *)(param_1 + 0xc);
  *puVar9 = (uint)(piVar7 + 1);
  puVar9[1] = uVar2;
                    /* try { // try from 04077f55 to 04077f59 has its CatchHandler @ 0407804d */
  puVar9[-1] = 0x4077f5a;
  cVar5 = direct3dvolumetexture9imp_040b8660();
  if (cVar5 == '\0') {
    iVar1 = *piVar7;
    *puVar9 = (uint)piVar7;
                    /* try { // try from 04078015 to 04078017 has its CatchHandler @ 0407804d */
    pcVar4 = *(code **)(iVar1 + 8);
    puVar9[-1] = 0x4078018;
    (*pcVar4)();
    puVar9 = puVar9 + -1;
    uVar6 = 0x8876086c;
    *param_9 = 0;
  }
  else {
    *param_9 = piVar7;
    uVar6 = 0;
  }
  *puVar9 = (uint)local_20;
  puVar9[-1] = 0x4077f74;
  direct3ddevice9imp_040a2df0();
  return uVar6;
}

// --- Direct3DDevice9Imp::DeletePatch @0x040710f0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_DeletePatch(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x40711ce;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407117c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4071131;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407118b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40711b3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4071149;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::DeleteVertexBufferForDrawQuad @0x04081040 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__DeleteVertexBufferForDrawQuad(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = DAT_0451ca88;
  cVar1 = '\x01';
  if (DAT_0451ca55 == '\0') {
    cVar1 = *(char *)(param_1 + 0xeb4d);
  }
  iVar3 = *(int *)(param_1 + 0xe9a0);
  if (iVar3 != 0) {
    if ((cVar1 != '\0') && (*(undefined4 *)(param_1 + 0xe9a4) = 0, cVar2 != '\0')) {
      OpenGLContextCache____glewBindBuffer(*(undefined4 *)(param_1 + 0xeb48),0x8892,iVar3);
      cVar2 = (*DAT_0451ecf0)(0x8892);
      if (cVar2 != '\x01') {
        FUN_0400a810("__glewUnmapBuffer( 0x8892 ) == 1",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x924,"void Direct3DDevice9Imp::DeleteVertexBufferForDrawQuad()");
      }
      *(undefined4 *)(param_1 + 0xe9a8) = 0;
      iVar3 = *(int *)(param_1 + 0xe9a0);
    }
    FUN_040ba120(param_1,iVar3);
    *(undefined4 *)(param_1 + 0xe9a0) = 0;
  }
  return;
}

// --- Direct3DDevice9Imp::Direct3DDevice9Imp @0x0409ca90 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Direct3DDevice9Imp(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *__s;
  
  __s = param_1 + 0x1f18;
  IUnknownImp__IUnknownImp(param_1,param_2);
  *param_1 = &PTR_direct3ddevice9imp_0409bd10_042f6888;
  param_1[0x1d70] = 0;
  param_1[0x1d71] = 0;
  param_1[0x1d74] = 0;
  param_1[0x1d72] = param_1 + 0x1d70;
  param_1[0x1d73] = param_1 + 0x1d70;
  do {
    bzero(__s,0x38);
    __s[2] = 0x2901;
    __s[1] = 0x2901;
    *__s = 0x2901;
    __s[4] = 0x2600;
    __s[3] = 0x2600;
    __s[6] = 1;
    __s[7] = 0xc47a0000;
    __s = __s + 0xe;
  } while (__s != param_1 + 0x2030);
  param_1[0x319d] = 0;
  param_1[0x319f] = param_1 + 0x319d;
  param_1[0x31a0] = param_1 + 0x319d;
  param_1[0x3a95] = param_1 + 0x3a93;
  param_1[0x3a96] = param_1 + 0x3a93;
  param_1[0x319e] = 0;
  param_1[0x31a1] = 0;
  param_1[0x3a90] = 0;
  param_1[0x3a91] = 0;
  param_1[0x3a93] = 0;
  param_1[0x3a94] = 0;
  param_1[14999] = 0;
  param_1[15000] = 0;
  param_1[0x3a99] = 0;
  param_1[0x3a9a] = 0;
  param_1[0x3aa1] = 0;
  param_1[0x3aa2] = 0;
  param_1[0x3aa3] = 0;
  param_1[0x3aaa] = 0;
  param_1[0x3aab] = 0;
  param_1[0x3aac] = 0;
  param_1[0x3ab3] = 0;
  param_1[0x3ab4] = 0;
  param_1[0x3ab5] = 0;
  param_1[0x3abc] = 0;
  param_1[0x3abd] = 0;
  param_1[0x3abe] = 0;
  param_1[0x3ac5] = 0;
  param_1[0x3ac6] = 0;
  param_1[0x3ac7] = 0;
  param_1[0x3ace] = 0;
  param_1[0x3acf] = 0;
  param_1[0x3ad0] = 0;
  param_1[0x3ad1] = 0;
  param_1[0x3ad2] = 0;
  *(undefined1 *)((int)param_1 + 0xeb4d) = 0;
  *(undefined1 *)((int)param_1 + 0xeb4e) = 0;
  *(undefined1 *)((int)param_1 + 0xeb4f) = 0;
  *(undefined1 *)(param_1 + 0x3ad4) = 0;
  *(undefined1 *)((int)param_1 + 0xeb51) = 0;
  *(undefined1 *)((int)param_1 + 0xeb52) = 0;
  param_1[0x3ad5] = 0;
  param_1[0x3ad6] = 0;
  param_1[0x3ad7] = 0;
  param_1[0x3ad8] = 0;
  param_1[0x3ad9] = 0;
  param_1[0x3ada] = 0;
  param_1[0x3adb] = 0;
  param_1[0x3adc] = 0;
  param_1[0x3add] = 0;
  param_1[0x3ade] = 0;
  *(undefined1 *)(param_1 + 0x3adf) = 0;
  param_1[0x3ae0] = 0;
                    /* try { // try from 0409cd3c to 0409cd40 has its CatchHandler @ 0409d02b */
  FUN_040e48c0(param_1 + 0x3ae7);
  param_1[0x3af1] = 0;
  param_1[0x3af2] = 0;
  param_1[0x3af3] = 0;
  param_1[0x3af4] = 0;
  param_1[0x3af5] = 0;
  param_1[0x3af6] = 0;
  param_1[0x3af7] = 0;
  param_1[0x3af8] = 0;
  param_1[0x3af9] = 0;
  param_1[0x3afa] = 0;
  param_1[0x3afb] = 0;
  *(undefined1 *)(param_1 + 0x3afd) = 0;
  param_1[0x3afe] = 0;
                    /* try { // try from 0409cdc9 to 0409cdcd has its CatchHandler @ 0409d0b7 */
  D3D9CommandQueue__D3D9CommandQueue(param_1 + 0x3b00);
  param_1[1] = "Direct3DDevice9Imp";
  param_1[0x3a9a] = param_1 + 15000;
  param_1[0x3a99] = param_1 + 15000;
  param_1[0x3aa3] = param_1 + 0x3aa1;
  param_1[0x3aa2] = param_1 + 0x3aa1;
  param_1[0x3aac] = param_1 + 0x3aaa;
  param_1[0x3aab] = param_1 + 0x3aaa;
  param_1[0x3ab5] = param_1 + 0x3ab3;
  param_1[0x3ab4] = param_1 + 0x3ab3;
  param_1[0x3abe] = param_1 + 0x3abc;
  param_1[0x3abd] = param_1 + 0x3abc;
  param_1[15000] = 0;
  param_1[0x3aa1] = 0;
  param_1[0x3aaa] = 0;
  param_1[0x3ab3] = 0;
  param_1[0x3abc] = 0;
  param_1[0x3ac5] = 0;
  param_1[0x3ac7] = param_1 + 0x3ac5;
  param_1[0x3ac6] = param_1 + 0x3ac5;
                    /* try { // try from 0409ce83 to 0409d028 has its CatchHandler @ 0409d07b */
  uVar1 = FUN_04021ee0();
  *(undefined1 *)(param_1 + 0x3ad3) = uVar1;
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x3a9b),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x3aa4),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x3aad),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x3ab6),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x3abf),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x3ac8),(pthread_mutexattr_t *)0x0);
  param_1[10] = 0;
  bzero(param_1 + 0xb,0x10);
  FUN_040630f0(param_1 + 0x20);
  FUN_04061fc0(param_1 + 0x1d90);
  uVar2 = eON_GetCurrentThreadId();
  param_1[0x1d79] = uVar2;
  uVar1 = FUN_0400cbc0(&PTR_DAT_042f63d0);
  *(undefined1 *)(param_1 + 0x3a7e) = uVar1;
  iVar3 = eON_CreateEventA(0,1,0,0);
  param_1[0x3b30] = iVar3;
  if (iVar3 == 0) {
    FUN_0400a810("mCommandSyncEvent",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x11e,"Direct3DDevice9Imp::Direct3DDevice9Imp(LPVOID)");
  }
  iVar3 = eON_CreateEventA(0,1,0,0);
  param_1[0x3afc] = iVar3;
  if (iVar3 == 0) {
    FUN_0400a810("OobSyncEvent",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x121,"Direct3DDevice9Imp::Direct3DDevice9Imp(LPVOID)");
  }
  DAT_04468c34 = param_1[3];
  synch_criticalsection_04145d20(param_1 + 4);
  return;
}

// --- Direct3DDevice9Imp::DirectX8_CopyRects @0x04082480 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__DirectX8_CopyRects
          (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int **ppiVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int **ppiVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  bool bVar20;
  int iStack_b0;
  int *local_ac [2];
  int local_a4;
  int *local_a0 [8];
  int *local_80;
  int *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int local_44 [3];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  
  if (((param_5 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_2 == param_5)) {
    return 0x8876086c;
  }
  local_24 = param_1[3];
  direct3ddevice9imp_040704e0();
  if ((char)param_2[0xf] == '\0') {
    piVar4 = param_2 + 1;
    local_ac[0] = piVar4;
    local_6c = piVar4;
                    /* try { // try from 040824e9 to 04082ee6 has its CatchHandler @ 04082f00 */
    cVar3 = direct3dsurface9imp_040adca0();
    if (((cVar3 == '\0') &&
        (local_ac[0] = piVar4, cVar3 = direct3dsurface9imp_040add10(), cVar3 == '\0')) &&
       ((char)param_5[0xf] == '\0')) {
      piVar4 = param_5 + 1;
      local_ac[0] = piVar4;
      local_7c = piVar4;
      cVar3 = direct3dsurface9imp_040adca0();
      if ((cVar3 == '\0') &&
         (local_ac[0] = piVar4, cVar3 = direct3dsurface9imp_040add10(), cVar3 == '\0')) {
        uVar19 = 0x8876086c;
        ppiVar9 = local_ac;
        if (param_2[0x1c] != param_5[0x1c]) goto LAB_040824cc;
        if (param_3 == (int *)0x0) {
          local_44[0] = 0;
          local_44[1] = 0;
          local_58 = (int *)0x1;
          local_44[2] = param_2[0x22];
          local_38 = param_2[0x23];
          param_3 = local_44;
        }
        else {
          if (param_4 == (int *)0x0) {
            local_a0[0] = (int *)0x42f48c0;
            local_a4 = 0xeb2;
            local_ac[1] = (int *)0x42f002c;
            local_ac[0] = (int *)0x42f61eb;
            FUN_0400a810();
            local_54 = param_3;
            local_58 = (int *)0x0;
LAB_040825d3:
            piVar4 = local_54;
            if (param_6 == (int *)0x0) {
              uVar1 = param_5[0x22];
              if ((uVar1 < (uint)param_2[0x22]) && (local_58 != (int *)0x0)) {
                if (local_54[2] <= (int)uVar1) {
                  local_60 = param_2;
                  piVar7 = (int *)0x0;
                  do {
                    piVar7 = (int *)((int)piVar7 + 1);
                    if (piVar7 == local_58) goto LAB_04082851;
                  } while (local_54[(int)piVar7 * 4 + 2] <= (int)uVar1);
                }
              }
              else {
LAB_04082851:
                uVar1 = param_5[0x23];
                if (((uint)param_2[0x23] <= uVar1) || (local_58 == (int *)0x0)) goto LAB_040826c9;
                if (local_54[3] <= (int)uVar1) {
                  local_60 = param_2;
                  piVar7 = (int *)0x0;
                  do {
                    piVar7 = (int *)((int)piVar7 + 1);
                    if (piVar7 == local_58) goto LAB_040826c9;
                  } while (local_54[(int)piVar7 * 4 + 3] <= (int)uVar1);
                }
              }
            }
            else {
              if (local_58 == (int *)0x0) {
LAB_040826c9:
                if (param_2[0x24] == 2) {
                  iVar5 = param_5[0x24];
                  if (iVar5 == 2) {
                    if (param_2[0x1f] != 0) goto LAB_040828e7;
                    if (param_5[0x31] == 0) {
                      local_60 = (int *)param_5[0x25];
                      bVar20 = false;
                      if (local_60 != (int *)0x0) {
                        bVar20 = local_60[0x8a] == 2;
                      }
                    }
                    else {
                      bVar20 = false;
                      local_60 = (int *)0x0;
                    }
                    if (param_6 == (int *)0x0) {
                      if (local_58 != (int *)0x0) {
                        local_54 = (int *)0x0;
                        if (local_60 == (int *)0x0) {
                          do {
                            local_a4 = (int)param_5;
                            local_ac[0] = param_1;
                            local_ac[1] = param_2;
                            local_a0[0] = piVar4;
                            local_a0[1] = piVar4;
                            FUN_04082350();
                            local_54 = (int *)((int)local_54 + 1);
                            piVar4 = piVar4 + 4;
                          } while (local_54 != local_58);
                          uVar19 = 0;
                          ppiVar9 = local_ac;
                        }
                        else {
                          ppiVar9 = local_ac;
                          ppiVar14 = local_ac;
                          if (bVar20) {
                            do {
                              ppiVar9[4] = piVar4;
                              ppiVar9[3] = piVar4;
                              ppiVar9[1] = param_2;
                              ppiVar9[2] = param_5;
                              *ppiVar9 = param_1;
                              ppiVar9[-1] = (int *)0x4082c9e;
                              FUN_04082350();
                              iVar5 = *local_60;
                              ppiVar9[2] = piVar4;
                              ppiVar9[1] = (int *)(param_5[0x32] + -0x8515);
                              *ppiVar9 = local_60;
                              pcVar2 = *(code **)(iVar5 + 0x54);
                              ppiVar9[-1] = (int *)0x4082cc3;
                              (*pcVar2)();
                              local_54 = (int *)((int)local_54 + 1);
                              piVar16 = (int *)(ppiVar9 + -3);
                              piVar4 = piVar4 + 4;
                              ppiVar9 = ppiVar9 + -3;
                            } while (local_54 != local_58);
                            uVar19 = 0;
                            ppiVar9 = (int **)piVar16;
                          }
                          else {
                            do {
                              ppiVar14[4] = piVar4;
                              ppiVar14[3] = piVar4;
                              ppiVar14[1] = param_2;
                              ppiVar14[2] = param_5;
                              *ppiVar14 = param_1;
                              ppiVar14[-1] = (int *)0x4082c52;
                              FUN_04082350();
                              iVar5 = *local_60;
                              ppiVar14[1] = piVar4;
                              *ppiVar14 = local_60;
                              pcVar2 = *(code **)(iVar5 + 0x54);
                              ppiVar14[-1] = (int *)0x4082c61;
                              (*pcVar2)();
                              local_54 = (int *)((int)local_54 + 1);
                              piVar15 = (int *)(ppiVar14 + -2);
                              piVar4 = piVar4 + 4;
                              ppiVar14 = ppiVar14 + -2;
                            } while (local_54 != local_58);
                            uVar19 = 0;
                            ppiVar9 = (int **)piVar15;
                          }
                        }
                        goto LAB_040824cc;
                      }
                    }
                    else if (local_58 != (int *)0x0) {
                      local_64 = param_6;
                      if (local_60 == (int *)0x0) {
                        local_60 = (int *)0x0;
                        local_54 = &local_34;
                        do {
                          local_34 = *local_64;
                          local_2c = (piVar4[2] - *piVar4) + local_34;
                          local_30 = local_64[1];
                          local_28 = local_30 + (piVar4[3] - piVar4[1]);
                          local_ac[0] = param_1;
                          local_a4 = (int)param_5;
                          local_a0[1] = local_54;
                          local_ac[1] = param_2;
                          local_a0[0] = piVar4;
                          FUN_04082350();
                          local_60 = (int *)((int)local_60 + 1);
                          piVar4 = piVar4 + 4;
                          local_64 = local_64 + 2;
                        } while (local_60 != local_58);
                        uVar19 = 0;
                        ppiVar9 = local_ac;
                      }
                      else {
                        local_68 = (int *)0x0;
                        ppiVar9 = local_ac;
                        ppiVar14 = local_ac;
                        local_54 = &local_34;
                        if (bVar20) {
                          do {
                            iVar5 = piVar4[3];
                            local_34 = *local_64;
                            iVar8 = piVar4[1];
                            local_2c = (piVar4[2] - *piVar4) + local_34;
                            local_30 = local_64[1];
                            ppiVar9[3] = piVar4;
                            ppiVar9[1] = param_2;
                            local_28 = (iVar5 - iVar8) + local_30;
                            *ppiVar9 = param_1;
                            ppiVar9[4] = local_54;
                            ppiVar9[2] = param_5;
                            ppiVar9[-1] = (int *)0x4082ba7;
                            FUN_04082350();
                            iVar5 = *local_60;
                            ppiVar9[2] = local_54;
                            ppiVar9[1] = (int *)(param_5[0x32] + -0x8515);
                            *ppiVar9 = local_60;
                            pcVar2 = *(code **)(iVar5 + 0x54);
                            ppiVar9[-1] = (int *)0x4082bcf;
                            (*pcVar2)();
                            local_68 = (int *)((int)local_68 + 1);
                            piVar13 = (int *)(ppiVar9 + -3);
                            piVar4 = piVar4 + 4;
                            local_64 = local_64 + 2;
                            ppiVar9 = ppiVar9 + -3;
                          } while (local_68 != local_58);
                          uVar19 = 0;
                          ppiVar9 = (int **)piVar13;
                        }
                        else {
                          do {
                            iVar5 = piVar4[3];
                            local_34 = *local_64;
                            iVar8 = piVar4[1];
                            local_2c = (piVar4[2] - *piVar4) + local_34;
                            local_30 = local_64[1];
                            ppiVar14[3] = piVar4;
                            ppiVar14[1] = param_2;
                            local_28 = (iVar5 - iVar8) + local_30;
                            *ppiVar14 = param_1;
                            ppiVar14[4] = local_54;
                            ppiVar14[2] = param_5;
                            ppiVar14[-1] = (int *)0x4082b2a;
                            FUN_04082350();
                            iVar5 = *local_60;
                            *ppiVar14 = local_60;
                            ppiVar14[1] = local_54;
                            pcVar2 = *(code **)(iVar5 + 0x54);
                            ppiVar14[-1] = (int *)0x4082b3c;
                            (*pcVar2)();
                            local_68 = (int *)((int)local_68 + 1);
                            piVar12 = (int *)(ppiVar14 + -2);
                            piVar4 = piVar4 + 4;
                            local_64 = local_64 + 2;
                            ppiVar14 = ppiVar14 + -2;
                          } while (local_68 != local_58);
                          uVar19 = 0;
                          ppiVar9 = (int **)piVar12;
                        }
                      }
                      goto LAB_040824cc;
                    }
                  }
                  else {
LAB_040828bd:
                    if (iVar5 == 3) {
                      uVar19 = 0;
                      ppiVar9 = local_ac;
                      if ((param_2[0x1f] == 0) || (ppiVar9 = local_ac, param_5[0x1f] == 0))
                      goto LAB_040824cc;
                    }
                    else if (param_2[0x1f] == 0) {
                      uVar19 = 0;
                      ppiVar9 = local_ac;
                      goto LAB_040824cc;
                    }
LAB_040826fc:
                    if (param_6 == (int *)0x0) {
                      if (local_58 != (int *)0x0) {
                        piVar7 = (int *)0x0;
                        do {
                          local_ac[1] = local_7c;
                          local_ac[0] = local_6c;
                          local_a4 = (int)piVar4;
                          local_a0[0] = piVar4;
                          Direct3DSurface9Imp__TransferToDifferentSurface();
                          piVar7 = (int *)((int)piVar7 + 1);
                          piVar4 = piVar4 + 4;
                        } while (piVar7 != local_58);
                        uVar19 = 0;
                        ppiVar9 = local_ac;
                        goto LAB_040824cc;
                      }
                    }
                    else if (local_58 != (int *)0x0) {
                      local_50 = (int *)0x0;
                      local_54 = &local_34;
                      do {
                        local_34 = *param_6;
                        local_2c = (piVar4[2] - *piVar4) + local_34;
                        local_30 = param_6[1];
                        local_ac[0] = local_6c;
                        local_28 = (piVar4[3] - piVar4[1]) + local_30;
                        local_ac[1] = local_7c;
                        local_a0[0] = local_54;
                        local_a4 = (int)piVar4;
                        Direct3DSurface9Imp__TransferToDifferentSurface();
                        local_50 = (int *)((int)local_50 + 1);
                        piVar4 = piVar4 + 4;
                        param_6 = param_6 + 2;
                      } while (local_50 != local_58);
                    }
                  }
                }
                else {
                  iVar5 = param_5[0x24];
                  if (param_2[0x24] == 3) {
                    if (iVar5 != 2) goto LAB_040828bd;
                    if (param_2[0x1f] == 0) goto LAB_04082777;
                  }
                  else if (iVar5 != 2) {
                    if ((iVar5 == 3) && (param_5[0x1f] == 0)) {
                      uVar19 = 0;
                      ppiVar9 = local_ac;
                      goto LAB_040824cc;
                    }
                    goto LAB_040826fc;
                  }
LAB_040828e7:
                  if (param_5[0x31] == 0) {
                    local_5c = (int *)param_5[0x25];
                    bVar20 = false;
                    if (local_5c != (int *)0x0) {
                      bVar20 = local_5c[0x8a] == 2;
                    }
                  }
                  else {
                    bVar20 = false;
                    local_5c = (int *)0x0;
                  }
                  if (param_6 == (int *)0x0) {
                    if (local_58 != (int *)0x0) {
                      piVar7 = (int *)0x0;
                      if (local_5c == (int *)0x0) {
                        do {
                          local_ac[1] = local_7c;
                          local_ac[0] = local_6c;
                          local_a4 = (int)piVar4;
                          local_a0[0] = piVar4;
                          Direct3DSurface9Imp__TransferToOpenGLTextureInDifferentSurface();
                          piVar7 = (int *)((int)piVar7 + 1);
                          piVar4 = piVar4 + 4;
                        } while (piVar7 != local_58);
                        uVar19 = 0;
                        ppiVar9 = local_ac;
                      }
                      else {
                        ppiVar9 = local_ac;
                        ppiVar14 = local_ac;
                        if (bVar20) {
                          do {
                            ppiVar9[3] = piVar4;
                            ppiVar9[2] = piVar4;
                            ppiVar9[1] = local_7c;
                            *ppiVar9 = local_6c;
                            ppiVar9[-1] = (int *)0x4082d8a;
                            Direct3DSurface9Imp__TransferToOpenGLTextureInDifferentSurface();
                            iVar5 = *local_5c;
                            ppiVar9[2] = piVar4;
                            ppiVar9[1] = (int *)(param_5[0x32] + -0x8515);
                            *ppiVar9 = local_5c;
                            pcVar2 = *(code **)(iVar5 + 0x54);
                            ppiVar9[-1] = (int *)0x4082daf;
                            (*pcVar2)();
                            piVar7 = (int *)((int)piVar7 + 1);
                            piVar18 = (int *)(ppiVar9 + -3);
                            piVar4 = piVar4 + 4;
                            ppiVar9 = ppiVar9 + -3;
                          } while (piVar7 != local_58);
                          uVar19 = 0;
                          ppiVar9 = (int **)piVar18;
                        }
                        else {
                          do {
                            ppiVar14[3] = piVar4;
                            ppiVar14[2] = piVar4;
                            ppiVar14[1] = local_7c;
                            *ppiVar14 = local_6c;
                            ppiVar14[-1] = (int *)0x4082d4b;
                            Direct3DSurface9Imp__TransferToOpenGLTextureInDifferentSurface();
                            iVar5 = *local_5c;
                            ppiVar14[1] = piVar4;
                            *ppiVar14 = local_5c;
                            pcVar2 = *(code **)(iVar5 + 0x54);
                            ppiVar14[-1] = (int *)0x4082d5a;
                            (*pcVar2)();
                            piVar7 = (int *)((int)piVar7 + 1);
                            piVar17 = (int *)(ppiVar14 + -2);
                            piVar4 = piVar4 + 4;
                            ppiVar14 = ppiVar14 + -2;
                          } while (piVar7 != local_58);
                          uVar19 = 0;
                          ppiVar9 = (int **)piVar17;
                        }
                      }
                      goto LAB_040824cc;
                    }
                  }
                  else if (local_58 != (int *)0x0) {
                    if (local_5c == (int *)0x0) {
                      local_50 = (int *)0x0;
                      local_54 = &local_34;
                      do {
                        local_34 = *param_6;
                        local_2c = (piVar4[2] - *piVar4) + local_34;
                        local_30 = param_6[1];
                        local_ac[1] = local_7c;
                        local_28 = (piVar4[3] - piVar4[1]) + local_30;
                        local_ac[0] = local_6c;
                        local_a0[0] = local_54;
                        local_a4 = (int)piVar4;
                        Direct3DSurface9Imp__TransferToOpenGLTextureInDifferentSurface();
                        local_50 = (int *)((int)local_50 + 1);
                        piVar4 = piVar4 + 4;
                        param_6 = param_6 + 2;
                      } while (local_50 != local_58);
                      uVar19 = 0;
                      ppiVar9 = local_ac;
                    }
                    else if (bVar20) {
                      local_64 = (int *)0x0;
                      ppiVar9 = local_ac;
                      local_54 = &local_34;
                      do {
                        local_34 = *param_6;
                        iVar5 = piVar4[3];
                        iVar8 = piVar4[1];
                        local_2c = (piVar4[2] - *piVar4) + local_34;
                        local_30 = param_6[1];
                        ppiVar9[2] = piVar4;
                        ppiVar9[3] = local_54;
                        local_28 = (iVar5 - iVar8) + local_30;
                        ppiVar9[1] = local_7c;
                        *ppiVar9 = local_6c;
                        ppiVar9[-1] = (int *)0x4082a41;
                        Direct3DSurface9Imp__TransferToOpenGLTextureInDifferentSurface();
                        iVar5 = *local_5c;
                        ppiVar9[2] = local_54;
                        ppiVar9[1] = (int *)(param_5[0x32] + -0x8515);
                        *ppiVar9 = local_5c;
                        pcVar2 = *(code **)(iVar5 + 0x54);
                        ppiVar9[-1] = (int *)0x4082a69;
                        (*pcVar2)();
                        local_64 = (int *)((int)local_64 + 1);
                        piVar11 = (int *)(ppiVar9 + -3);
                        piVar4 = piVar4 + 4;
                        param_6 = param_6 + 2;
                        ppiVar9 = ppiVar9 + -3;
                      } while (local_64 != local_58);
                      uVar19 = 0;
                      ppiVar9 = (int **)piVar11;
                    }
                    else {
                      local_50 = (int *)0x0;
                      ppiVar9 = local_ac;
                      local_54 = &local_34;
                      do {
                        local_34 = *param_6;
                        iVar5 = piVar4[3];
                        iVar8 = piVar4[1];
                        local_2c = (piVar4[2] - *piVar4) + local_34;
                        local_30 = param_6[1];
                        ppiVar9[2] = piVar4;
                        *ppiVar9 = local_6c;
                        local_28 = (iVar5 - iVar8) + local_30;
                        ppiVar9[1] = local_7c;
                        ppiVar9[3] = local_54;
                        ppiVar9[-1] = (int *)0x408298a;
                        Direct3DSurface9Imp__TransferToOpenGLTextureInDifferentSurface();
                        iVar5 = *local_5c;
                        *ppiVar9 = local_5c;
                        ppiVar9[1] = local_54;
                        pcVar2 = *(code **)(iVar5 + 0x54);
                        ppiVar9[-1] = (int *)0x408299c;
                        (*pcVar2)();
                        local_50 = (int *)((int)local_50 + 1);
                        piVar10 = (int *)(ppiVar9 + -2);
                        piVar4 = piVar4 + 4;
                        param_6 = param_6 + 2;
                        ppiVar9 = ppiVar9 + -2;
                      } while (local_50 != local_58);
                      uVar19 = 0;
                      ppiVar9 = (int **)piVar10;
                    }
                    goto LAB_040824cc;
                  }
                }
LAB_04082777:
                uVar19 = 0;
                ppiVar9 = local_ac;
                goto LAB_040824cc;
              }
              piVar7 = (int *)local_54[3];
              local_50 = (int *)local_54[2];
              local_60 = (int *)local_54[1];
              local_68 = piVar7;
              if (((-1 < *param_6) && (iVar5 = param_6[1], -1 < iVar5)) &&
                 (local_74 = param_5[0x22], (int)local_50 + (*param_6 - *local_54) <= local_74)) {
                local_80 = param_2;
                local_68 = (int *)0x0;
                local_78 = param_5[0x23];
                iVar8 = (int)piVar7 - (int)local_60;
                piVar7 = local_54 + 6;
                piVar6 = param_6 + 3;
                while (iVar8 + iVar5 <= local_78) {
                  local_68 = (int *)((int)local_68 + 1);
                  if (local_68 == local_58) goto LAB_040826c9;
                  local_60 = (int *)*piVar7;
                  local_70 = piVar7[-2];
                  local_50 = (int *)piVar6[-1];
                  iVar8 = piVar7[1] - piVar7[-1];
                  if (((int)local_50 < 0) || (iVar5 = *piVar6, iVar5 < 0)) break;
                  piVar6 = piVar6 + 2;
                  piVar7 = piVar7 + 4;
                  local_60 = (int *)((int)local_60 - local_70);
                  if (local_74 < (int)local_50 + (int)local_60) break;
                }
              }
            }
            goto LAB_040824c7;
          }
          ppiVar9 = local_ac;
          if (*param_3 < 0) goto LAB_040824cc;
          local_58 = param_4;
        }
        local_54 = param_3;
        if (((-1 < param_3[1]) && (param_3[2] <= param_2[0x22])) && (param_3[3] <= param_2[0x23])) {
          local_60 = param_2;
          piVar7 = (int *)0x0;
          piVar4 = param_3 + 7;
          do {
            piVar7 = (int *)((int)piVar7 + 1);
            if (local_58 <= piVar7) goto LAB_040825d3;
          } while (((-1 < piVar4[-3]) && (-1 < piVar4[-2])) &&
                  ((piVar4[-1] <= param_2[0x22] &&
                   (iVar5 = *piVar4, piVar4 = piVar4 + 4, iVar5 <= param_2[0x23]))));
        }
      }
    }
  }
LAB_040824c7:
  uVar19 = 0x8876086c;
  ppiVar9 = local_ac;
LAB_040824cc:
  *ppiVar9 = (int *)local_20;
  ppiVar9[-1] = (int *)0x40824d4;
  direct3ddevice9imp_040a2df0();
  return uVar19;
}

// --- Direct3DDevice9Imp::DrawIndexedPrimitive @0x040906e0 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__DrawIndexedPrimitive
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6,int param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 uStack_60;
  int local_5c [7];
  uint local_40;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1d [13];
  
  local_34 = &local_38;
  piVar6 = local_5c;
  iVar8 = *(int *)(param_1 + 0xc);
  local_38 = iVar8;
  if (iVar8 != 0) {
    piVar6 = local_5c;
    if (*(char *)(iVar8 + 0xebbc) != '\0') {
      local_5c[0] = iVar8 + 0xebc4;
      uStack_60 = 0x40909ae;
      EnterCriticalSection();
      piVar6 = &uStack_60;
    }
    if (*(int *)(iVar8 + 0xec64) == 0) {
      if (*(int *)(iVar8 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x40908d4;
        FUN_0400a810();
      }
      piVar6[-1] = 0x409072d;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar8 + 0xebc0) = uVar2;
    }
    else {
      local_40 = *(uint *)(iVar8 + 0xebc0);
      piVar6[-1] = 0x409096e;
      uVar7 = FUN_0415b750();
      if (local_40 != uVar7) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x409099b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar8 + 0xec64) = *(int *)(iVar8 + 0xec64) + 1;
  }
  *(undefined1 *)(param_1 + 0x75fa) = 1;
  if ((param_7 == 0) || (param_5 == 0)) {
LAB_04090959:
    uVar2 = 0;
    goto LAB_0409082d;
  }
  if ((*(int *)(param_1 + 0x858) != 0) && (*(int *)(param_1 + 0x52f8) != 0)) {
    piVar6[1] = (int)local_1d;
    *piVar6 = (int)&local_2c;
                    /* try { // try from 04090785 to 04090827 has its CatchHandler @ 04090a44 */
    piVar6[-1] = 0x409078a;
    DeterminePrimitiveType();
    iVar8 = *(int *)(param_1 + 0x52f8);
    uVar7 = *(int *)(iVar8 + 0x34) - (int)*(int **)(iVar8 + 0x30) >> 2;
    if (uVar7 < 2) {
      local_40 = 0;
LAB_040907e7:
      if (uVar7 == 0) {
LAB_04090868:
        iVar8 = *(int *)(*(int *)(param_1 + 0x858) + 0x3c);
        *piVar6 = param_1;
        piVar6[2] = (int)&local_24;
        piVar6[1] = (int)&local_28;
                    /* try { // try from 0409088d to 040908a9 has its CatchHandler @ 04090a44 */
        piVar6[-1] = 0x4090892;
        cVar1 = direct3ddevice9imp_0408fe70();
        if (cVar1 != '\0') {
          *piVar6 = param_1;
                    /* try { // try from 040908e3 to 04090958 has its CatchHandler @ 04090a44 */
          piVar6[-1] = 0x40908e8;
          cVar1 = Direct3DDevice9Imp__ApplyColorWriteEnable();
          uVar2 = 0;
          if (cVar1 == '\0') goto LAB_0409082d;
          piVar6[3] = 0x28;
          piVar6[2] = 2;
          piVar6[1] = param_1;
          *piVar6 = param_1 + 0xec00;
          piVar6[-1] = 0x4090914;
          puVar4 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
          *puVar4 = local_28;
          puVar4[4] = ((uint)(iVar8 == 0x66) * 2 + 2) * param_6;
          puVar4[1] = local_24;
          puVar4[2] = local_40;
          puVar4[3] = param_3;
          puVar4[5] = param_4;
          puVar4[6] = param_5;
          puVar4[7] = local_30;
          puVar4[8] = local_2c;
          *(undefined1 *)(puVar4 + 9) = local_1d[0];
          *piVar6 = param_1 + 0xec00;
          piVar6[-1] = 0x4090959;
          D3D9CommandQueue__CommandSubmitted();
          goto LAB_04090959;
        }
        piVar6[1] = (int)"Couldn\'t set up render pipeline in DrawPrimitive!";
        *piVar6 = 0xf;
        piVar6[-1] = 0x40908aa;
        FUN_0402cd10();
        goto LAB_04090828;
      }
    }
    else {
      iVar3 = **(int **)(iVar8 + 0x30);
      if (iVar3 == 0) {
        bVar9 = (*(byte *)(param_1 + 0xcdb) & 0x40) != 0;
      }
      else {
        bVar9 = SUB41((uint)*(undefined4 *)(param_1 + 0x18 + (iVar3 + 0xcc) * 0x10) >> 0x1f,0);
      }
      if (bVar9 == false) {
        local_40 = 0;
      }
      else {
        local_40 = *(uint *)(param_1 + 0xcd8) & 0xbfffffff;
        if ((int)*(uint *)(param_1 + 0xcd8) < 0) {
          piVar6[3] = (int)
                      "virtual HRESULT Direct3DDevice9Imp::DrawIndexedPrimitive(D3DPRIMITIVETYPE, INT, UINT, UINT, UINT, UINT)"
          ;
          piVar6[2] = 0x2c43;
          piVar6[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar6 = (int)"( mDeviceState.StreamSources[0].Divider & (2<<30) ) == 0";
          piVar6[-1] = 0x4090a30;
          FUN_0400a810();
          iVar8 = *(int *)(param_1 + 0x52f8);
          uVar7 = *(int *)(iVar8 + 0x34) - *(int *)(iVar8 + 0x30) >> 2;
        }
      }
      if (uVar7 < 0x11) goto LAB_040907e7;
      piVar6[3] = (int)
                  "bool Direct3DDevice9Imp::ValidateStreamSourcesForDraw(INT, ULONG, ULONG, INT)";
      piVar6[2] = 0x26e8;
      piVar6[1] = (int)
                  "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      *piVar6 = (int)"numUsedStreams <= 16";
                    /* try { // try from 040909df to 04090a2f has its CatchHandler @ 04090a44 */
      piVar6[-1] = 0x40909e4;
      FUN_0400a810();
    }
    iVar3 = *(int *)(param_1 + 0xc + (**(int **)(iVar8 + 0x30) + 0xcc) * 0x10);
    if (iVar3 != 0) {
      uVar5 = 0;
      cVar1 = *(char *)(iVar3 + 0x5c);
      while (cVar1 == '\0') {
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar7) goto LAB_04090868;
        iVar3 = *(int *)(param_1 + 0xc + ((*(int **)(iVar8 + 0x30))[uVar5] + 0xcc) * 0x10);
        if (iVar3 == 0) break;
        cVar1 = *(char *)(iVar3 + 0x5c);
      }
    }
    piVar6[2] = iVar3;
    piVar6[1] = (int)
                "Game trying to render with invalid vertex buffer ( %p ), returning INVALIDCALL.";
    *piVar6 = 10;
    piVar6[-1] = 0x4090828;
    FUN_0402cd10();
  }
LAB_04090828:
  uVar2 = 0x8876086c;
LAB_0409082d:
  *piVar6 = (int)&local_34;
  piVar6[-1] = 0x4090838;
  direct3ddevice9imp_040a2df0();
  return uVar2;
}

// --- Direct3DDevice9Imp::DrawIndexedPrimitiveUP @0x04099170 ---
/* source: direct3ddevice9imp */

int d3d9device_DrawIndexedPrimitiveUP
              (int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
              int param_8,int param_9)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int aiStack_ac [25];
  uint local_48;
  int local_44;
  uint local_40;
  int local_34;
  int *local_30 [2];
  int local_28;
  undefined4 local_24;
  undefined1 local_1d [13];
  
  local_30[0] = &local_34;
  piVar9 = aiStack_ac + 0x10;
  iVar10 = param_1[3];
  local_34 = iVar10;
  if (iVar10 != 0) {
    piVar9 = aiStack_ac + 0x10;
    if (*(char *)(iVar10 + 0xebbc) != '\0') {
      aiStack_ac[0x10] = iVar10 + 0xebc4;
      aiStack_ac[0xf] = 0x409954e;
      EnterCriticalSection();
      piVar9 = aiStack_ac + 0xf;
    }
    if (*(int *)(iVar10 + 0xec64) == 0) {
      if (*(int *)(iVar10 + 0xebc0) != 0) {
        piVar9[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar9[2] = 0x3ae;
        piVar9[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar9 = (int)"!mCurrentD3D9Thread";
        piVar9[-1] = 0x40994ec;
        FUN_0400a810();
      }
      piVar9[-1] = 0x40991ba;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar10 + 0xebc0) = uVar3;
    }
    else {
      iVar6 = *(int *)(iVar10 + 0xebc0);
      piVar9[-1] = 0x409950b;
      iVar5 = FUN_0415b750();
      if (iVar6 != iVar5) {
        piVar9[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar9[2] = 0x3b3;
        piVar9[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar9 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar9[-1] = 0x4099537;
        FUN_0400a810();
      }
    }
    *(int *)(iVar10 + 0xec64) = *(int *)(iVar10 + 0xec64) + 1;
  }
  *(undefined1 *)((int)param_1 + 0x75fa) = 1;
  if (param_5 == 0) {
    iVar10 = 0;
    piVar4 = piVar9;
    goto LAB_040994b0;
  }
  piVar9[1] = (int)local_1d;
  *piVar9 = (int)&local_28;
                    /* try { // try from 040991ef to 040994a5 has its CatchHandler @ 0409960a */
  piVar9[-1] = 0x40991f4;
  DeterminePrimitiveType();
  piVar4 = (int *)param_1[0x3ad6];
  iVar10 = param_9 * param_4;
  if (piVar4 == (int *)0x0) {
LAB_04099575:
    iVar6 = *param_1;
    param_1[0x3ad9] = iVar10 * 10;
    piVar9[6] = 0;
    piVar9[5] = (int)(param_1 + 0x3ad6);
    piVar9[4] = 0;
    piVar9[3] = 0;
    piVar9[2] = 0x208;
    piVar9[1] = iVar10 * 10;
    *piVar9 = (int)param_1;
    pcVar1 = *(code **)(iVar6 + 0x70);
    piVar9[-1] = 0x40995b6;
    iVar6 = (*pcVar1)();
    if (-1 < iVar6) {
      param_1[0x3ad8] = 0;
      uVar7 = param_1[0x3ad9];
      local_48 = 0;
      piVar4 = (int *)param_1[0x3ad6];
      piVar8 = piVar9;
      goto LAB_04099228;
    }
  }
  else {
    uVar7 = param_1[0x3ad9];
    if (uVar7 < (uint)(iVar10 * 10)) {
      iVar6 = *piVar4;
      *piVar9 = (int)piVar4;
                    /* try { // try from 04099565 to 040995b5 has its CatchHandler @ 0409960a */
      pcVar1 = *(code **)(iVar6 + 8);
      piVar9[-1] = 0x4099568;
      (*pcVar1)();
      param_1[0x3ad6] = 0;
      piVar9 = piVar9 + -1;
      goto LAB_04099575;
    }
    local_48 = param_1[0x3ad8] + param_1[0x3ad7];
    piVar8 = piVar9;
LAB_04099228:
    param_1[0x3ad7] = local_48;
    uVar11 = param_9 * param_3;
    if (local_48 <= uVar11 && uVar11 - local_48 != 0) {
      param_1[0x3ad7] = uVar11;
      local_48 = uVar11;
    }
    local_48 = local_48 + iVar10;
    iVar6 = 0x1000;
    if (uVar7 < local_48) {
      param_1[0x3ad7] = uVar11;
      iVar6 = 0x2000;
    }
    param_1[0x3ad8] = iVar10;
    iVar5 = *piVar4;
    piVar8[4] = iVar6;
    piVar8[3] = (int)&local_24;
    piVar8[2] = iVar10;
    iVar10 = param_1[0x3ad7];
    local_24 = 0;
    *piVar8 = (int)piVar4;
    piVar8[1] = iVar10;
    pcVar1 = *(code **)(iVar5 + 0x2c);
    piVar8[-1] = 0x4099288;
    iVar10 = (*pcVar1)();
    piVar4 = piVar8 + -5;
    if (iVar10 < 0) goto LAB_040994b0;
    piVar8[-3] = param_1[0x3ad8];
    piVar8[-4] = param_8;
    piVar8[-5] = local_24;
    piVar8[-6] = 0x40992b1;
    memcpy((void *)piVar8[-5],(void *)piVar8[-4],piVar8[-3]);
    iVar10 = *(int *)param_1[0x3ad6];
    piVar8[-5] = param_1[0x3ad6];
    pcVar1 = *(code **)(iVar10 + 0x30);
    piVar8[-6] = 0x40992bf;
    iVar10 = (*pcVar1)();
    piVar9 = piVar8 + -6;
    piVar4 = piVar8 + -6;
    if (iVar10 < 0) goto LAB_040994b0;
    iVar10 = *param_1;
    piVar8[-2] = param_9;
    piVar8[-3] = param_1[0x3ad7] - uVar11;
    iVar6 = param_1[0x3ad6];
    piVar8[-5] = 0;
    piVar8[-6] = (int)param_1;
    piVar8[-4] = iVar6;
    pcVar1 = *(code **)(iVar10 + 0x198);
    piVar8[-7] = 0x40992fc;
    iVar10 = (*pcVar1)();
    piVar4 = piVar8 + -6;
    if (iVar10 < 0) goto LAB_040994b0;
    piVar8[-6] = (int)param_1;
    local_40 = (uint)(param_7 != 0x66) * 2 - 4;
    iVar10 = (uint)(param_7 == 0x66) * 2;
    uVar7 = iVar10 + 2;
    iVar6 = local_28 * uVar7;
    piVar8[-5] = iVar6;
    piVar8[-7] = 0x4099330;
    cVar2 = FUN_04097ca0();
    if (cVar2 != '\0') {
      iVar5 = param_1[0x3adc];
      param_1[0x3adc] = iVar6;
      uVar11 = iVar10 + 1 + param_1[0x3adb] + iVar5 & local_40;
      local_40 = 0x1000;
      param_1[0x3adb] = uVar11;
      if ((uint)param_1[0x3add] < uVar11 + iVar6) {
        param_1[0x3adb] = 0;
        uVar11 = 0;
        local_40 = 0x2000;
      }
      local_24 = 0;
      iVar10 = *(int *)param_1[0x3ada];
      piVar8[-4] = iVar6;
      piVar8[-5] = uVar11;
      piVar8[-2] = local_40;
      piVar8[-3] = (int)&local_24;
      piVar8[-6] = param_1[0x3ada];
      pcVar1 = *(code **)(iVar10 + 0x2c);
      piVar8[-7] = 0x40993ad;
      iVar10 = (*pcVar1)();
      piVar4 = piVar8 + -0xb;
      if (-1 < iVar10) {
        piVar8[-9] = param_1[0x3adc];
        piVar8[-10] = param_6;
        piVar8[-0xb] = local_24;
        piVar8[-0xc] = 0x40993d4;
        memcpy((void *)piVar8[-0xb],(void *)piVar8[-10],piVar8[-9]);
        iVar10 = *(int *)param_1[0x3ada];
        piVar8[-0xb] = param_1[0x3ada];
        pcVar1 = *(code **)(iVar10 + 0x30);
        piVar8[-0xc] = 0x40993e2;
        iVar10 = (*pcVar1)();
        piVar4 = piVar8 + -0xc;
        if (-1 < iVar10) {
          piVar9 = (int *)param_1[0x216];
          local_44 = param_1[0x3ada];
          local_40 = param_1[0x3adb];
          piVar4 = piVar8 + -0xc;
          if (piVar9 != (int *)0x0) {
            iVar10 = *piVar9;
            piVar8[-0xc] = (int)piVar9;
            pcVar1 = *(code **)(iVar10 + 4);
            piVar8[-0xd] = 0x4099411;
            (*pcVar1)();
            piVar4 = piVar8 + -0xd;
          }
          piVar4[1] = local_44;
          *piVar4 = (int)param_1;
          piVar4[-1] = 0x4099423;
          Direct3DDevice9Imp__SetIndices();
          iVar10 = *param_1;
          piVar4[2] = 0;
          *piVar4 = (int)param_1;
          piVar4[6] = param_5;
          piVar4[4] = param_4;
          piVar4[1] = param_2;
          piVar4[5] = local_40 / uVar7;
          piVar4[3] = param_3;
          pcVar1 = *(code **)(iVar10 + 0x150);
          piVar4[-1] = 0x409945d;
          iVar10 = (*pcVar1)();
          iVar6 = *param_1;
          piVar4[4] = 0;
          piVar4[3] = 0;
          piVar4[2] = 0;
          piVar4[1] = 0;
          *piVar4 = (int)param_1;
          pcVar1 = *(code **)(iVar6 + 0x198);
          piVar4[-1] = 0x409948a;
          (*pcVar1)();
          piVar4[1] = (int)piVar9;
          *piVar4 = (int)param_1;
          piVar4[-1] = 0x4099496;
          Direct3DDevice9Imp__SetIndices();
          if (piVar9 != (int *)0x0) {
            iVar6 = *piVar9;
            *piVar4 = (int)piVar9;
            pcVar1 = *(code **)(iVar6 + 8);
            piVar4[-1] = 0x40994a6;
            (*pcVar1)();
            piVar4 = piVar4 + -1;
          }
        }
      }
      goto LAB_040994b0;
    }
  }
  iVar10 = -0x7789f794;
  piVar4 = piVar9;
LAB_040994b0:
  *piVar4 = (int)local_30;
  piVar4[-1] = 0x40994bb;
  direct3ddevice9imp_040a2df0();
  return iVar10;
}

// --- Direct3DDevice9Imp::DrawPrimitive @0x04090a70 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__DrawPrimitive(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 uStack_60;
  int local_5c [7];
  int local_40;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1d [13];
  
  local_34 = &local_38;
  piVar6 = local_5c;
  iVar8 = *(int *)(param_1 + 0xc);
  local_38 = iVar8;
  if (iVar8 != 0) {
    piVar6 = local_5c;
    if (*(char *)(iVar8 + 0xebbc) != '\0') {
      local_5c[0] = iVar8 + 0xebc4;
      uStack_60 = 0x4090d3e;
      EnterCriticalSection();
      piVar6 = &uStack_60;
    }
    if (*(int *)(iVar8 + 0xec64) == 0) {
      if (*(int *)(iVar8 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x4090c44;
        FUN_0400a810();
      }
      piVar6[-1] = 0x4090abd;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar8 + 0xebc0) = uVar2;
    }
    else {
      local_40 = *(int *)(iVar8 + 0xebc0);
      piVar6[-1] = 0x4090cfe;
      iVar4 = FUN_0415b750();
      if (local_40 != iVar4) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x4090d2b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar8 + 0xec64) = *(int *)(iVar8 + 0xec64) + 1;
  }
  *(undefined1 *)(param_1 + 0x75fa) = 1;
  if (param_4 == 0) {
LAB_04090cc6:
    uVar2 = 0;
    goto LAB_04090c09;
  }
  if (*(int *)(param_1 + 0x52f8) != 0) {
    piVar6[1] = (int)local_1d;
    *piVar6 = (int)&local_2c;
                    /* try { // try from 04090afc to 04090c03 has its CatchHandler @ 04090d5f */
    piVar6[-1] = 0x4090b01;
    DeterminePrimitiveType();
    iVar8 = *(int *)(param_1 + 0x52f8);
    uVar7 = *(int *)(iVar8 + 0x34) - (int)*(int **)(iVar8 + 0x30) >> 2;
    if (uVar7 < 2) {
LAB_04090ba0:
      if (uVar7 == 0) {
LAB_04090c50:
        *piVar6 = param_1;
        piVar6[2] = (int)&local_24;
        piVar6[1] = (int)&local_28;
                    /* try { // try from 04090c61 to 04090ce3 has its CatchHandler @ 04090d5f */
        piVar6[-1] = 0x4090c66;
        cVar1 = direct3ddevice9imp_0408fe70();
        if (cVar1 != '\0') {
          *piVar6 = param_1;
          piVar6[-1] = 0x4090c72;
          cVar1 = Direct3DDevice9Imp__ApplyColorWriteEnable();
          uVar2 = 0;
          if (cVar1 == '\0') goto LAB_04090c09;
          piVar6[3] = 0x18;
          piVar6[2] = 1;
          piVar6[1] = param_1;
          *piVar6 = param_1 + 0xec00;
          piVar6[-1] = 0x4090c9a;
          puVar3 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
          *puVar3 = local_28;
          puVar3[1] = local_24;
          puVar3[2] = param_3;
          puVar3[3] = local_30;
          puVar3[4] = local_2c;
          *(undefined1 *)(puVar3 + 5) = local_1d[0];
          *piVar6 = param_1 + 0xec00;
          piVar6[-1] = 0x4090cc6;
          D3D9CommandQueue__CommandSubmitted();
          goto LAB_04090cc6;
        }
        piVar6[1] = (int)"Couldn\'t set up render pipeline in DrawPrimitive!";
        *piVar6 = 0xf;
        piVar6[-1] = 0x4090ce4;
        FUN_0402cd10();
        goto LAB_04090c04;
      }
    }
    else {
      iVar4 = **(int **)(iVar8 + 0x30);
      if (iVar4 == 0) {
        bVar9 = (*(byte *)(param_1 + 0xcdb) & 0x40) != 0;
      }
      else {
        bVar9 = SUB41((uint)*(undefined4 *)(param_1 + 0x18 + (iVar4 + 0xcc) * 0x10) >> 0x1f,0);
      }
      if (bVar9 != false) {
        piVar6[3] = (int)
                    "virtual HRESULT Direct3DDevice9Imp::DrawPrimitive(D3DPRIMITIVETYPE, UINT, UINT)"
        ;
        piVar6[2] = 0x2b93;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!UsingInstancing()";
        piVar6[-1] = 0x4090b5c;
        FUN_0400a810();
        iVar8 = *(int *)(param_1 + 0x52f8);
        uVar7 = *(int *)(iVar8 + 0x34) - *(int *)(iVar8 + 0x30) >> 2;
      }
      if (uVar7 < 0x11) goto LAB_04090ba0;
      piVar6[3] = (int)
                  "bool Direct3DDevice9Imp::ValidateStreamSourcesForDraw(INT, ULONG, ULONG, INT)";
      piVar6[2] = 0x26e8;
      piVar6[1] = (int)
                  "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      *piVar6 = (int)"numUsedStreams <= 16";
      piVar6[-1] = 0x4090b94;
      FUN_0400a810();
    }
    iVar4 = *(int *)(param_1 + 0xc + (**(int **)(iVar8 + 0x30) + 0xcc) * 0x10);
    if (iVar4 != 0) {
      uVar5 = 0;
      cVar1 = *(char *)(iVar4 + 0x5c);
      while (cVar1 == '\0') {
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar7) goto LAB_04090c50;
        iVar4 = *(int *)(param_1 + 0xc + ((*(int **)(iVar8 + 0x30))[uVar5] + 0xcc) * 0x10);
        if (iVar4 == 0) break;
        cVar1 = *(char *)(iVar4 + 0x5c);
      }
    }
    piVar6[2] = iVar4;
    piVar6[1] = (int)
                "Game trying to render with invalid vertex buffer ( %p ), returning INVALIDCALL.";
    *piVar6 = 10;
    piVar6[-1] = 0x4090c04;
    FUN_0402cd10();
  }
LAB_04090c04:
  uVar2 = 0x8876086c;
LAB_04090c09:
  *piVar6 = (int)&local_34;
  piVar6[-1] = 0x4090c14;
  direct3ddevice9imp_040a2df0();
  return uVar2;
}

// --- Direct3DDevice9Imp::DrawPrimitiveUP @0x0407a150 ---
/* source: direct3ddevice9imp */

int d3d9device_DrawPrimitiveUP(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int aiStack_90 [20];
  uint local_40;
  int local_34;
  int *local_30 [2];
  int local_28;
  undefined4 local_24;
  undefined1 local_1d [13];
  
  local_30[0] = &local_34;
  piVar8 = aiStack_90 + 9;
  iVar9 = param_1[3];
  local_34 = iVar9;
  if (iVar9 != 0) {
    piVar8 = aiStack_90 + 9;
    if (*(char *)(iVar9 + 0xebbc) != '\0') {
      aiStack_90[9] = iVar9 + 0xebc4;
      aiStack_90[8] = 0x407a3be;
      EnterCriticalSection();
      piVar8 = aiStack_90 + 8;
    }
    if (*(int *)(iVar9 + 0xec64) == 0) {
      if (*(int *)(iVar9 + 0xebc0) != 0) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3ae;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"!mCurrentD3D9Thread";
        piVar8[-1] = 0x407a35c;
        FUN_0400a810();
      }
      piVar8[-1] = 0x407a19d;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar9 + 0xebc0) = uVar3;
    }
    else {
      local_40 = *(uint *)(iVar9 + 0xebc0);
      piVar8[-1] = 0x407a37e;
      uVar5 = FUN_0415b750();
      if (local_40 != uVar5) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3b3;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar8[-1] = 0x407a3ab;
        FUN_0400a810();
      }
    }
    *(int *)(iVar9 + 0xec64) = *(int *)(iVar9 + 0xec64) + 1;
  }
  *(undefined1 *)((int)param_1 + 0x75fa) = 1;
  if (param_3 == 0) {
    iVar9 = 0;
    goto LAB_0407a320;
  }
  piVar8[1] = (int)local_1d;
  *piVar8 = (int)&local_28;
                    /* try { // try from 0407a1ce to 0407a31a has its CatchHandler @ 0407a44a */
  piVar8[-1] = 0x407a1d3;
  DeterminePrimitiveType();
  piVar4 = (int *)param_1[0x3ad6];
  iVar9 = param_5 * local_28;
  if (piVar4 == (int *)0x0) {
LAB_0407a3e5:
    iVar6 = *param_1;
    param_1[0x3ad9] = iVar9 * 10;
    piVar8[6] = 0;
    piVar8[5] = (int)(param_1 + 0x3ad6);
    piVar8[4] = 0;
    piVar8[3] = 0;
    piVar8[2] = 0x208;
    piVar8[1] = iVar9 * 10;
    *piVar8 = (int)param_1;
    pcVar2 = *(code **)(iVar6 + 0x70);
    piVar8[-1] = 0x407a426;
    iVar6 = (*pcVar2)();
    if (iVar6 < 0) {
      iVar9 = -0x7789f794;
      goto LAB_0407a320;
    }
    uVar5 = param_1[0x3ad9];
    iVar6 = 0;
    piVar4 = (int *)param_1[0x3ad6];
    piVar7 = piVar8;
  }
  else {
    uVar5 = param_1[0x3ad9];
    if (uVar5 < (uint)(iVar9 * 10)) {
      iVar6 = *piVar4;
      *piVar8 = (int)piVar4;
                    /* try { // try from 0407a3d5 to 0407a425 has its CatchHandler @ 0407a44a */
      pcVar2 = *(code **)(iVar6 + 8);
      piVar8[-1] = 0x407a3d8;
      (*pcVar2)();
      param_1[0x3ad6] = 0;
      piVar8 = piVar8 + -1;
      goto LAB_0407a3e5;
    }
    iVar6 = param_1[0x3ad8] + param_1[0x3ad7];
    piVar7 = piVar8;
  }
  param_1[0x3ad7] = iVar6;
  local_40 = iVar6 + iVar9;
  iVar6 = 0x1000;
  param_1[0x3ad8] = iVar9;
  if (uVar5 < local_40) {
    param_1[0x3ad7] = 0;
    iVar6 = 0x2000;
  }
  iVar1 = *piVar4;
  piVar7[4] = iVar6;
  piVar7[3] = (int)&local_24;
  piVar7[2] = iVar9;
  iVar9 = param_1[0x3ad7];
  local_24 = 0;
  *piVar7 = (int)piVar4;
  piVar7[1] = iVar9;
  pcVar2 = *(code **)(iVar1 + 0x2c);
  piVar7[-1] = 0x407a258;
  iVar9 = (*pcVar2)();
  piVar8 = piVar7 + -5;
  if (-1 < iVar9) {
    piVar7[-3] = param_1[0x3ad8];
    piVar7[-4] = param_4;
    piVar7[-5] = local_24;
    piVar7[-6] = 0x407a281;
    memcpy((void *)piVar7[-5],(void *)piVar7[-4],piVar7[-3]);
    iVar9 = *(int *)param_1[0x3ad6];
    piVar7[-5] = param_1[0x3ad6];
    pcVar2 = *(code **)(iVar9 + 0x30);
    piVar7[-6] = 0x407a28f;
    iVar9 = (*pcVar2)();
    piVar8 = piVar7 + -6;
    if (-1 < iVar9) {
      iVar9 = *param_1;
      piVar7[-2] = param_5;
      piVar7[-3] = param_1[0x3ad7];
      iVar6 = param_1[0x3ad6];
      piVar7[-5] = 0;
      piVar7[-6] = (int)param_1;
      piVar7[-4] = iVar6;
      pcVar2 = *(code **)(iVar9 + 0x198);
      piVar7[-7] = 0x407a2ca;
      iVar9 = (*pcVar2)();
      piVar8 = piVar7 + -6;
      if (-1 < iVar9) {
        iVar9 = *param_1;
        piVar7[-3] = param_3;
        piVar7[-4] = 0;
        piVar7[-6] = (int)param_1;
        piVar7[-5] = param_2;
        pcVar2 = *(code **)(iVar9 + 0x14c);
        piVar7[-7] = 0x407a2ee;
        iVar9 = (*pcVar2)();
        iVar6 = *param_1;
        piVar7[-2] = 0;
        piVar7[-3] = 0;
        piVar7[-4] = 0;
        piVar7[-5] = 0;
        piVar7[-6] = (int)param_1;
        pcVar2 = *(code **)(iVar6 + 0x198);
        piVar7[-7] = 0x407a31b;
        (*pcVar2)();
        piVar8 = piVar7 + -6;
      }
    }
  }
LAB_0407a320:
  *piVar8 = (int)local_30;
  piVar8[-1] = 0x407a32b;
  direct3ddevice9imp_040a2df0();
  return iVar9;
}

// --- Direct3DDevice9Imp::DrawRectPatch @0x040712d0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_DrawRectPatch(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x40713ae;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407135c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4071311;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407136b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4071393;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4071329;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::DrawTriPatch @0x040711e0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_DrawTriPatch(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x40712be;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407126c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4071221;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407127b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40712a3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4071239;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::EndScene @0x040755a0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_EndScene(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar5 = local_3c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x40756fe;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40756a4;
        FUN_0400a810();
      }
      piVar5[-1] = 0x40755ea;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40756bb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40756e7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (*(char *)(param_1 + 0x75f8) == '\0') {
    uVar3 = 0x8876086c;
  }
  else {
    *(undefined1 *)(param_1 + 0x75f8) = 0;
    *(undefined1 *)(param_1 + 0x75f9) = 1;
    if (*(char *)(param_1 + 0x75fa) == '\0') {
      piVar5[1] = (int)
                  "No DrawPrimitive/DrawIndexedPrimitive/Clear calls issued between BeginScene() and EndScene()!"
      ;
      *piVar5 = 10;
                    /* try { // try from 0407566f to 04075673 has its CatchHandler @ 0407571a */
      piVar5[-1] = 0x4075674;
      FUN_0402cd10();
    }
    piVar5[3] = 0;
    piVar5[2] = 0x14;
    piVar5[1] = param_1;
    *piVar5 = param_1 + 0xec00;
                    /* try { // try from 04075638 to 04075644 has its CatchHandler @ 0407571a */
    piVar5[-1] = 0x407563d;
    D3D9CommandQueue__GetNextCommandPointer();
    *piVar5 = param_1 + 0xec00;
    piVar5[-1] = 0x4075645;
    D3D9CommandQueue__CommandSubmitted();
    uVar3 = 0;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x4075652;
  direct3ddevice9imp_040a2df0();
  return uVar3;
}

// --- Direct3DDevice9Imp::EndStateBlock @0x04074820 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_EndStateBlock(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar4 = local_4c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar4 = local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x407494e;
      EnterCriticalSection();
      piVar4 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3ae;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"!mCurrentD3D9Thread";
        piVar4[-1] = 0x40748f4;
        FUN_0400a810();
      }
      piVar4[-1] = 0x407486f;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar4[-1] = 0x407490e;
      iVar3 = FUN_0415b750();
      if (local_30 != iVar3) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3b3;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar4[-1] = 0x407493b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if ((param_2 == (int *)0x0) || (*(int *)(param_1 + 0x75ec) == 0)) {
    uVar2 = 0x8876086c;
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    *param_2 = *(int *)(param_1 + 0x75ec);
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x75ec) = 0;
  }
  *piVar4 = (int)local_20;
  piVar4[-1] = 0x40748a3;
  direct3ddevice9imp_040a2df0();
  return uVar2;
}

// --- Direct3DDevice9Imp::Fence_IsFinalized @0x0409d320 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__Fence_IsFinalized(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_20 [4];
  
  if (*(char *)(param_1 + 0xeb4e) == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 0xebc4) + 8);
    if (iVar3 == 0) {
      FUN_0400a810("FenceList->FenceAPPLE",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x427,"bool Direct3DDevice9Imp::Fence_IsFinalized(eONFence*)");
      iVar3 = *(int *)(*(int *)(param_1 + 0xebc4) + 8);
    }
    cVar1 = (*DAT_0451e95c)(iVar3);
    if (cVar1 == '\0') {
      return 0;
    }
    puVar4 = *(undefined4 **)(param_1 + 0xebc4);
    do {
      puVar5 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0400a810("FenceList",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x42d,"bool Direct3DDevice9Imp::Fence_IsFinalized(eONFence*)");
        puVar5 = *(undefined4 **)(param_1 + 0xebc4);
      }
      puVar2 = *(undefined4 **)(param_1 + 0xebd0);
      local_20[0] = puVar5[2];
      puVar4 = (undefined4 *)*puVar5;
      if (puVar2 == *(undefined4 **)(param_1 + 0xebd4)) {
        FUN_040a3200(param_1 + 0xebcc,puVar2,local_20);
        puVar2 = *(undefined4 **)(param_1 + 0xebc4);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_20[0];
        }
        *(undefined4 **)(param_1 + 0xebd0) = puVar2 + 1;
        puVar2 = puVar5;
      }
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 3) = 1;
      *(undefined4 **)(param_1 + 0xebc4) = puVar4;
    } while (param_2 != puVar5);
  }
  else {
    iVar3 = (*DAT_0451e1ac)(param_2[1],0,0,0);
    if (iVar3 == 0x911d) {
      FUN_0400a810("result != 0x911D",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x40e,"bool Direct3DDevice9Imp::Fence_IsFinalized(eONFence*)");
    }
    else if (iVar3 == 0x911b) {
      return 0;
    }
    puVar4 = *(undefined4 **)(param_1 + 0xebc4);
    do {
      puVar5 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0400a810("FenceList",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x414,"bool Direct3DDevice9Imp::Fence_IsFinalized(eONFence*)");
        puVar5 = *(undefined4 **)(param_1 + 0xebc4);
      }
      puVar4 = (undefined4 *)*puVar5;
      (*DAT_0451e1a8)(puVar5[1]);
      iVar3 = *(int *)(param_1 + 0xebc4);
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined1 *)(iVar3 + 0xc) = 1;
      *(undefined4 **)(param_1 + 0xebc4) = puVar4;
    } while (param_2 != puVar5);
  }
  if (puVar4 != (undefined4 *)0x0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xebc8) = 0;
  return 1;
}

// --- Direct3DDevice9Imp::Fence_Tick @0x0409d610 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Fence_Tick(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_20 [4];
  
  puVar3 = *(undefined4 **)(param_1 + 0xebc4);
  if (*(char *)(param_1 + 0xeb4e) == '\0') {
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar3[2] == 0) {
        FUN_0400a810("FenceList->FenceAPPLE",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x461,"void Direct3DDevice9Imp::Fence_Tick()");
        puVar3 = *(undefined4 **)(param_1 + 0xebc4);
      }
      cVar2 = (*DAT_0451e95c)(puVar3[2]);
      if (cVar2 == '\0') {
        return;
      }
      iVar4 = *(int *)(param_1 + 0xebc4);
      puVar3 = *(undefined4 **)(param_1 + 0xebd0);
      local_20[0] = *(undefined4 *)(iVar4 + 8);
      if (puVar3 == *(undefined4 **)(param_1 + 0xebd4)) {
        FUN_040a3200(param_1 + 0xebcc,puVar3,local_20);
        iVar4 = *(int *)(param_1 + 0xebc4);
      }
      else {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = local_20[0];
        }
        *(undefined4 **)(param_1 + 0xebd0) = puVar3 + 1;
      }
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined4 **)(param_1 + 0xebc4) = puVar1;
      puVar3 = puVar1;
    }
  }
  else if (puVar3 != (undefined4 *)0x0) {
    iVar4 = puVar3[1];
    puVar1 = (undefined4 *)*puVar3;
    while( true ) {
      if (iVar4 == 0) {
        FUN_0400a810("FenceList->FenceARB",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x44d,"void Direct3DDevice9Imp::Fence_Tick()");
        puVar3 = *(undefined4 **)(param_1 + 0xebc4);
      }
      iVar4 = (*DAT_0451e1ac)(puVar3[1],0,0,0);
      if (iVar4 == 0x911d) {
        FUN_0400a810("result != 0x911D",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x44f,"void Direct3DDevice9Imp::Fence_Tick()");
      }
      else if (iVar4 == 0x911b) {
        return;
      }
      (*DAT_0451e1a8)(*(undefined4 *)(*(int *)(param_1 + 0xebc4) + 4));
      iVar4 = *(int *)(param_1 + 0xebc4);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined4 **)(param_1 + 0xebc4) = puVar1;
      if (puVar1 == (undefined4 *)0x0) break;
      iVar4 = puVar1[1];
      puVar3 = puVar1;
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  *(undefined4 *)(param_1 + 0xebc8) = 0;
  return;
}

// --- Direct3DDevice9Imp::GRTD_Delete @0x0409d1c0 ---
/* source: d3dstructs, direct3ddevice9imp */

void Direct3DDevice9Imp__GRTD_Delete(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0xebd8);
  if (puVar1 == param_2) {
    *(undefined4 *)(param_1 + 0xebd8) = param_2[6];
  }
  else {
    for (puVar3 = (undefined4 *)puVar1[6];
        (puVar4 = puVar3, param_2 != puVar3 &&
        (puVar4 = (undefined4 *)0x0, puVar3 != (undefined4 *)0x0)); puVar3 = (undefined4 *)puVar3[6]
        ) {
      puVar1 = puVar3;
    }
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0400a810(&PTR_DAT_042dc67e,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x499,"void Direct3DDevice9Imp::GRTD_Delete(RenderTargetDataTransfer*)");
    }
    puVar1[6] = puVar4[6];
  }
  FUN_040ba120(param_1,*param_2);
  FUN_0409d0d0(param_1,param_2 + 1);
  iVar2 = param_2[5];
  if (*(undefined4 **)(iVar2 + 0xd8) != param_2) {
    FUN_0400a810("surfaceImp.GRTD == GRTD",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x4a5,"void Direct3DDevice9Imp::GRTD_Delete(RenderTargetDataTransfer*)");
  }
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  if ((param_2[2] == 0) && (param_2[3] == 0)) {
    operator_delete(param_2);
    return;
  }
  FUN_0400a810("!FenceARB && !FenceAPPLE",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h",
               299,"eONFence::~eONFence()");
  operator_delete(param_2);
  return;
}

// --- Direct3DDevice9Imp::GetAvailableTextureMem @0x04079110 ---
/* source: direct3ddevice9imp */

int d3d9device_GetAvailableTextureMem(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [5];
  int local_28;
  int *local_24;
  int local_20 [4];
  
  piVar5 = local_3c;
  local_24 = &local_28;
  iVar1 = *(int *)(param_1 + 0xc);
  local_28 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x4079246;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40791ec;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407915c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4079203;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x407922f;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar5[1] = 0;
  piVar5[2] = (int)local_20;
  local_20[0] = 0;
  *piVar5 = *(undefined4 *)(param_1 + 0x7610);
                    /* try { // try from 04079188 to 040791a7 has its CatchHandler @ 0407924e */
  piVar5[-1] = 0x407918d;
  OpenGLDisplay_GetOrigin();
  piVar5[1] = (int)"GetAvailableTextureMemory called - returning %u MB";
  *piVar5 = 5;
  piVar5[2] = local_20[0];
  piVar5[-1] = 0x40791a8;
  FUN_0402cd10();
  iVar1 = local_20[0];
  *piVar5 = (int)&local_24;
  piVar5[-1] = 0x40791b6;
  direct3ddevice9imp_040a2df0();
  return iVar1;
}

// --- Direct3DDevice9Imp::GetBackBuffer @0x04078450 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__GetBackBuffer
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char **ppcVar6;
  undefined4 local_50;
  char *local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  ppcVar6 = &local_4c;
  if (param_3 != 0) {
    local_40 = 
    "virtual HRESULT Direct3DDevice9Imp::GetBackBuffer(UINT, UINT, D3DBACKBUFFER_TYPE, IDirect3DSurface9**)"
    ;
    local_44 = 0xba7;
    local_48 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp";
    local_4c = "!BackBuffer";
    local_50 = 0x4078544;
    FUN_0400a810();
  }
  if (param_5 == (undefined4 *)0x0) {
    local_48 = "GetBackBuffer() returning D3DERR_INVALIDCALL - didn\'t provide return pointer!";
    local_4c = (char *)0xa;
    local_50 = 0x40785f3;
    FUN_0402cd10();
    uVar3 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar1;
    if (iVar1 != 0) {
      ppcVar6 = &local_4c;
      if (*(char *)(iVar1 + 0xebbc) != '\0') {
        local_4c = (char *)(iVar1 + 0xebc4);
        local_50 = 0x407859e;
        EnterCriticalSection();
        ppcVar6 = (char **)&local_50;
      }
      if (*(int *)(iVar1 + 0xec64) == 0) {
        if (*(int *)(iVar1 + 0xebc0) != 0) {
          ppcVar6[3] = "void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          ppcVar6[2] = (char *)0x3ae;
          ppcVar6[1] = 
          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *ppcVar6 = "!mCurrentD3D9Thread";
          ppcVar6[-1] = (char *)0x4078514;
          FUN_0400a810();
        }
        ppcVar6[-1] = (char *)0x40784ac;
        uVar3 = FUN_0415b750();
        *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
      }
      else {
        local_30 = *(int *)(iVar1 + 0xebc0);
        ppcVar6[-1] = (char *)0x407855e;
        iVar5 = FUN_0415b750();
        if (local_30 != iVar5) {
          ppcVar6[3] = "void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          ppcVar6[2] = (char *)0x3b3;
          ppcVar6[1] = 
          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *ppcVar6 = "mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          ppcVar6[-1] = (char *)0x407858b;
          FUN_0400a810();
        }
      }
      *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
    }
    piVar4 = *(int **)(param_1 + 0x52fc);
    if (piVar4 == (int *)0x0) {
      ppcVar6[3] = 
      "virtual HRESULT Direct3DDevice9Imp::GetBackBuffer(UINT, UINT, D3DBACKBUFFER_TYPE, IDirect3DSurface9**)"
      ;
      ppcVar6[2] = (char *)0xbb1;
      ppcVar6[1] = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      *ppcVar6 = "mDeviceState.ScreenRenderTarget";
                    /* try { // try from 040785cf to 040785d3 has its CatchHandler @ 040785fd */
      ppcVar6[-1] = (char *)0x40785d4;
      FUN_0400a810();
      piVar4 = *(int **)(param_1 + 0x52fc);
    }
    iVar1 = *piVar4;
    *ppcVar6 = (char *)piVar4;
                    /* try { // try from 040784cc to 040784ce has its CatchHandler @ 040785fd */
    pcVar2 = *(code **)(iVar1 + 4);
    ppcVar6[-1] = (char *)0x40784cf;
    (*pcVar2)();
    *param_5 = *(undefined4 *)(param_1 + 0x52fc);
    ppcVar6[-1] = (char *)local_20;
    ppcVar6[-2] = (char *)0x40784e5;
    direct3ddevice9imp_040a2df0();
    uVar3 = 0;
  }
  return uVar3;
}

// --- Direct3DDevice9Imp::GetClipStatus @0x04074640 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetClipStatus(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x407471e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40746cc;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4074681;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40746db;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4074703;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4074699;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetCreationParameters @0x04078c20 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetCreationParameters(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar4 = local_4c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar4 = local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x4078d3e;
      EnterCriticalSection();
      piVar4 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3ae;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"!mCurrentD3D9Thread";
        piVar4[-1] = 0x4078ce4;
        FUN_0400a810();
      }
      piVar4[-1] = 0x4078c6f;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar4[-1] = 0x4078cfe;
      iVar3 = FUN_0415b750();
      if (local_30 != iVar3) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3b3;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar4[-1] = 0x4078d2b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 0x8876086c;
  }
  else {
    uVar2 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    param_2[1] = *(undefined4 *)(param_1 + 0x30);
    param_2[2] = *(undefined4 *)(param_1 + 0x34);
    param_2[3] = *(undefined4 *)(param_1 + 0x38);
  }
  *piVar4 = (int)local_20;
  piVar4[-1] = 0x4078cab;
  direct3ddevice9imp_040a2df0();
  return uVar2;
}

// --- Direct3DDevice9Imp::GetCurrentFragmentCompileArgs @0x0408a960 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_0408a960(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xdcc + iVar6 * 4);
    if (iVar1 == 0) {
      pbVar5 = (byte *)(param_2 + iVar6);
      bVar4 = *pbVar5;
      *pbVar5 = bVar4 & 0xf8 | 1;
      if (*(char *)(param_1 + 0xeb4c) != '\0') {
        *pbVar5 = bVar4 & 0xe0 | 1;
      }
    }
    else {
      uVar3 = (**(code **)(*(int *)(iVar1 + 4) + 0x54))(iVar1 + 4);
      if ((uVar3 - 0x46 < 0xe) && ((1 << ((byte)(uVar3 - 0x46) & 0x1f) & 0x36abU) != 0)) {
        if (*(int *)(iVar1 + 0x24) != 3) {
          if (*(int *)(iVar1 + 0x24) == 5) {
            *(byte *)(param_2 + iVar6) = *(byte *)(param_2 + iVar6) & 0xf8 | 6;
            goto LAB_0408a9f7;
          }
          FUN_0400a810("false",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                       ,0x2096,
                       "void Direct3DDevice9Imp::GetCurrentFragmentCompileArgs(FragmentShaderCompileArgs&) const"
                      );
        }
        *(byte *)(param_2 + iVar6) = *(byte *)(param_2 + iVar6) & 0xf8 | 5;
      }
      else if (*(int *)(iVar1 + 0x24) == 4) {
        *(byte *)(param_2 + iVar6) = *(byte *)(param_2 + iVar6) & 0xf8 | 3;
      }
      else if (*(int *)(iVar1 + 0x24) == 5) {
        *(byte *)(param_2 + iVar6) = *(byte *)(param_2 + iVar6) & 0xf8 | 2;
      }
      else {
        *(byte *)(param_2 + iVar6) = *(byte *)(param_2 + iVar6) & 0xf8 | 1;
      }
LAB_0408a9f7:
      if (*(char *)(param_1 + 0xeb4c) != '\0') {
        bVar4 = *(byte *)(param_2 + iVar6) & 0xe7;
        if (uVar3 == 0x32) {
LAB_0408aac2:
          bVar4 = bVar4 | 0x10;
        }
        else if (uVar3 < 0x33) {
          if (uVar3 == 0x1c) {
            bVar4 = bVar4 | 8;
          }
        }
        else if (uVar3 == 0x33) {
          bVar4 = bVar4 | 0x18;
        }
        else if (uVar3 == 0x51) goto LAB_0408aac2;
        *(byte *)(param_2 + iVar6) = bVar4;
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x10) {
      *(bool *)(param_2 + 0x10) = *(int *)(param_1 + 0x4c8) != 0;
      if (*(int *)(param_1 + 0x4c4) == 0) {
        *(undefined1 *)(param_2 + 0x11) = 0xff;
      }
      else {
        *(char *)(param_2 + 0x11) = (char)*(undefined4 *)(param_1 + 0x4e0);
      }
      uVar2 = 0;
      if ((*(char *)(param_1 + 0xeb51) != '\0') && (*(int *)(param_1 + 0x490) != 0)) {
        uVar2 = *(undefined2 *)(param_1 + 0x75b8);
      }
      *(undefined2 *)(param_2 + 0x12) = uVar2;
      return;
    }
  } while( true );
}

// --- Direct3DDevice9Imp::GetCurrentTexturePalette @0x040731f0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetCurrentTexturePalette(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x40732ee;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4073294;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4073238;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40732ab;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40732d3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x854);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x407325b;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetDepthStencilSurface @0x040758a0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetDepthStencilSurface(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int aiStack_58 [10];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar5 = aiStack_58 + 3;
  if (param_2 == (int *)0x0) {
    uVar3 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar1;
    if (iVar1 != 0) {
      piVar5 = aiStack_58 + 3;
      if (*(char *)(iVar1 + 0xebbc) != '\0') {
        aiStack_58[3] = iVar1 + 0xebc4;
        aiStack_58[2] = 0x40759ce;
        EnterCriticalSection();
        piVar5 = aiStack_58 + 2;
      }
      if (*(int *)(iVar1 + 0xec64) == 0) {
        if (*(int *)(iVar1 + 0xebc0) != 0) {
          piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar5[2] = 0x3ae;
          piVar5[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar5 = (int)"!mCurrentD3D9Thread";
          piVar5[-1] = 0x4075964;
          FUN_0400a810();
        }
        piVar5[-1] = 0x40758f7;
        uVar3 = FUN_0415b750();
        *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
      }
      else {
        local_30 = *(int *)(iVar1 + 0xebc0);
        piVar5[-1] = 0x407598e;
        iVar4 = FUN_0415b750();
        if (local_30 != iVar4) {
          piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar5[2] = 0x3b3;
          piVar5[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar5[-1] = 0x40759bb;
          FUN_0400a810();
        }
      }
      *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
    }
    if (*(int *)(param_1 + 0x5314) == 0) {
      *param_2 = 0;
      uVar3 = 0x88760866;
    }
    else {
      *param_2 = *(int *)(param_1 + 0x5314);
      iVar1 = **(int **)(param_1 + 0x5314);
      *piVar5 = (int)*(int **)(param_1 + 0x5314);
                    /* try { // try from 0407591b to 0407591d has its CatchHandler @ 040759ea */
      pcVar2 = *(code **)(iVar1 + 4);
      piVar5[-1] = 0x407591e;
      (*pcVar2)();
      piVar5 = piVar5 + -1;
      uVar3 = 0;
    }
    *piVar5 = (int)local_20;
    piVar5[-1] = 0x407592e;
    direct3ddevice9imp_040a2df0();
  }
  return uVar3;
}

// --- Direct3DDevice9Imp::GetDeviceCaps @0x04078e80 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetDeviceCaps(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar7 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar7 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x4078f9e;
      EnterCriticalSection();
      piVar7 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3ae;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"!mCurrentD3D9Thread";
        piVar7[-1] = 0x4078f44;
        FUN_0400a810();
      }
      piVar7[-1] = 0x4078ecc;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar5;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0xebc0);
      piVar7[-1] = 0x4078f5b;
      iVar6 = FUN_0415b750();
      if (iVar4 != iVar6) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3b3;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar7[-1] = 0x4078f87;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x28);
  iVar1 = *piVar2;
  piVar7[2] = 1;
  piVar7[3] = param_2;
  piVar7[1] = 0;
  *piVar7 = (int)piVar2;
                    /* try { // try from 04078ef8 to 04078efa has its CatchHandler @ 04078fa6 */
  pcVar3 = *(code **)(iVar1 + 0x38);
  piVar7[-1] = 0x4078efb;
  uVar5 = (*pcVar3)();
  piVar7[-4] = (int)local_20;
  piVar7[-5] = 0x4078f0b;
  direct3ddevice9imp_040a2df0();
  return uVar5;
}

// --- Direct3DDevice9Imp::GetDirect3D @0x04078fc0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetDirect3D(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int aiStack_58 [10];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar6 = aiStack_58 + 3;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar6 = aiStack_58 + 3;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_58[3] = iVar1 + 0xebc4;
      aiStack_58[2] = 0x40790de;
      EnterCriticalSection();
      piVar6 = aiStack_58 + 2;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x4079084;
        FUN_0400a810();
      }
      piVar6[-1] = 0x407900f;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar6[-1] = 0x407909e;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x40790cb;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if ((param_2 == (undefined4 *)0x0) || (piVar2 = *(int **)(param_1 + 0x28), piVar2 == (int *)0x0))
  {
    uVar4 = 0x8876086c;
  }
  else {
    iVar1 = *piVar2;
    *piVar6 = (int)piVar2;
                    /* try { // try from 04079034 to 04079036 has its CatchHandler @ 040790fa */
    pcVar3 = *(code **)(iVar1 + 4);
    piVar6[-1] = 0x4079037;
    (*pcVar3)();
    piVar6 = piVar6 + -1;
    uVar4 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x28);
  }
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x407904c;
  direct3ddevice9imp_040a2df0();
  return uVar4;
}

// --- Direct3DDevice9Imp::GetDisplayMode @0x04078d60 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetDisplayMode(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar4 = local_4c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar4 = local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x4078e6e;
      EnterCriticalSection();
      piVar4 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3ae;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"!mCurrentD3D9Thread";
        piVar4[-1] = 0x4078e14;
        FUN_0400a810();
      }
      piVar4[-1] = 0x4078daf;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar4[-1] = 0x4078e2e;
      iVar3 = FUN_0415b750();
      if (local_30 != iVar3) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3b3;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar4[-1] = 0x4078e5b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  param_3[2] = 0;
  param_3[3] = 0x16;
  param_3[1] = uVar2;
  *piVar4 = (int)local_20;
  piVar4[-1] = 0x4078de0;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetFVF @0x04072850 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetFVF(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar4 = local_4c;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar1;
    if (iVar1 != 0) {
      piVar4 = local_4c;
      if (*(char *)(iVar1 + 0xebbc) != '\0') {
        local_4c[0] = iVar1 + 0xebc4;
        uStack_50 = 0x407295e;
        EnterCriticalSection();
        piVar4 = &uStack_50;
      }
      if (*(int *)(iVar1 + 0xec64) == 0) {
        if (*(int *)(iVar1 + 0xebc0) != 0) {
          piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar4[2] = 0x3ae;
          piVar4[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar4 = (int)"!mCurrentD3D9Thread";
          piVar4[-1] = 0x4072904;
          FUN_0400a810();
        }
        piVar4[-1] = 0x40728a3;
        uVar2 = FUN_0415b750();
        *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
      }
      else {
        local_30 = *(int *)(iVar1 + 0xebc0);
        piVar4[-1] = 0x407291e;
        iVar3 = FUN_0415b750();
        if (local_30 != iVar3) {
          piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar4[2] = 0x3b3;
          piVar4[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar4[-1] = 0x4072947;
          FUN_0400a810();
        }
      }
      *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0x52f8) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x52f8) + 0x6c);
    }
    *param_2 = uVar2;
    *piVar4 = (int)local_20;
    piVar4[-1] = 0x40728cc;
    direct3ddevice9imp_040a2df0();
    uVar2 = 0;
  }
  return uVar2;
}

// --- Direct3DDevice9Imp::GetIndices @0x040719e0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetIndices(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int aiStack_48 [9];
  int local_24;
  int *local_20 [4];
  
  piVar7 = aiStack_48 + 3;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar7 = aiStack_48 + 3;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_48[3] = iVar1 + 0xebc4;
      aiStack_48[2] = 0x4071afe;
      EnterCriticalSection();
      piVar7 = aiStack_48 + 2;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3ae;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"!mCurrentD3D9Thread";
        piVar7[-1] = 0x4071aa4;
        FUN_0400a810();
      }
      piVar7[-1] = 0x4071a2c;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar5;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0xebc0);
      piVar7[-1] = 0x4071abb;
      iVar6 = FUN_0415b750();
      if (iVar4 != iVar6) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3b3;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar7[-1] = 0x4071ae7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x858);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar1 = *piVar2;
    *piVar7 = (int)piVar2;
                    /* try { // try from 04071a4c to 04071a4e has its CatchHandler @ 04071b17 */
    pcVar3 = *(code **)(iVar1 + 4);
    piVar7[-1] = 0x4071a4f;
    (*pcVar3)();
    uVar5 = *(undefined4 *)(param_1 + 0x858);
    piVar7 = piVar7 + -1;
  }
  *param_2 = uVar5;
  *piVar7 = (int)local_20;
  piVar7[-1] = 0x4071a68;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetLight @0x0407f520 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetLight(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte bVar12;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  bVar12 = 0;
  piVar9 = local_4c;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0x8876086c;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar8;
    if (iVar8 != 0) {
      piVar9 = local_4c;
      if (*(char *)(iVar8 + 0xebbc) != '\0') {
        local_4c[0] = iVar8 + 0xebc4;
        uStack_50 = 0x407f6be;
        EnterCriticalSection();
        piVar9 = &uStack_50;
      }
      if (*(int *)(iVar8 + 0xec64) == 0) {
        if (*(int *)(iVar8 + 0xebc0) != 0) {
          piVar9[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar9[2] = 0x3ae;
          piVar9[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar9 = (int)"!mCurrentD3D9Thread";
          piVar9[-1] = 0x407f65c;
          FUN_0400a810();
        }
        piVar9[-1] = 0x407f578;
        uVar3 = FUN_0415b750();
        *(undefined4 *)(iVar8 + 0xebc0) = uVar3;
      }
      else {
        local_30 = *(int *)(iVar8 + 0xebc0);
        piVar9[-1] = 0x407f676;
        iVar5 = FUN_0415b750();
        if (local_30 != iVar5) {
          piVar9[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar9[2] = 0x3b3;
          piVar9[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar9 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar9[-1] = 0x407f6a3;
          FUN_0400a810();
        }
      }
      *(int *)(iVar8 + 0xec64) = *(int *)(iVar8 + 0xec64) + 1;
    }
    uVar3 = 0x8876086c;
    if (*(int *)(param_1 + 0x75c4) != 0) {
      iVar8 = *(int *)(param_1 + 0x75c4);
      iVar5 = param_1 + 0x75c0;
      do {
        while (iVar7 = iVar8, param_2 <= *(uint *)(iVar7 + 0x10)) {
          iVar8 = *(int *)(iVar7 + 8);
          iVar5 = iVar7;
          if (*(int *)(iVar7 + 8) == 0) goto LAB_0407f5b5;
        }
        piVar1 = (int *)(iVar7 + 0xc);
        iVar8 = *piVar1;
        iVar7 = iVar5;
      } while (*piVar1 != 0);
LAB_0407f5b5:
      uVar3 = 0x8876086c;
      if ((param_1 + 0x75c0 != iVar7) && (*(uint *)(iVar7 + 0x10) <= param_2)) {
        puVar10 = (undefined4 *)(iVar7 + 0x18);
        uVar4 = 0x68;
        bVar11 = ((uint)param_3 & 1) != 0;
        if (bVar11) {
          puVar10 = (undefined4 *)(iVar7 + 0x19);
          *(undefined1 *)param_3 = *(undefined1 *)(iVar7 + 0x18);
          param_3 = (undefined4 *)((int)param_3 + 1);
          uVar4 = 0x67;
        }
        if (((uint)param_3 & 2) != 0) {
          uVar2 = *(undefined2 *)puVar10;
          uVar4 = uVar4 - 2;
          puVar10 = (undefined4 *)((int)puVar10 + 2);
          *(undefined2 *)param_3 = uVar2;
          param_3 = (undefined4 *)((int)param_3 + 2);
        }
        iVar8 = 0;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_3 = *puVar10;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
          param_3 = param_3 + (uint)bVar12 * -2 + 1;
        }
        if ((uVar4 & 2) != 0) {
          *(undefined2 *)param_3 = *(undefined2 *)puVar10;
          iVar8 = 2;
        }
        if (bVar11) {
          uVar3 = 0;
          *(undefined1 *)((int)param_3 + iVar8) = *(undefined1 *)((int)puVar10 + iVar8);
        }
        else {
          uVar3 = 0;
        }
      }
    }
    *piVar9 = (int)local_20;
    piVar9[-1] = 0x407f604;
    direct3ddevice9imp_040a2df0();
  }
  return uVar3;
}

// --- Direct3DDevice9Imp::GetLightEnable @0x0407f3c0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetLightEnable(int param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar6 = local_4c;
  if (param_3 == (uint *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar4;
    if (iVar4 != 0) {
      piVar6 = local_4c;
      if (*(char *)(iVar4 + 0xebbc) != '\0') {
        local_4c[0] = iVar4 + 0xebc4;
        uStack_50 = 0x407f50e;
        EnterCriticalSection();
        piVar6 = &uStack_50;
      }
      if (*(int *)(iVar4 + 0xec64) == 0) {
        if (*(int *)(iVar4 + 0xebc0) != 0) {
          piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar6[2] = 0x3ae;
          piVar6[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar6 = (int)"!mCurrentD3D9Thread";
          piVar6[-1] = 0x407f4b4;
          FUN_0400a810();
        }
        piVar6[-1] = 0x407f418;
        uVar2 = FUN_0415b750();
        *(undefined4 *)(iVar4 + 0xebc0) = uVar2;
      }
      else {
        local_30 = *(int *)(iVar4 + 0xebc0);
        piVar6[-1] = 0x407f4ce;
        iVar3 = FUN_0415b750();
        if (local_30 != iVar3) {
          piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar6[2] = 0x3b3;
          piVar6[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar6[-1] = 0x407f4fb;
          FUN_0400a810();
        }
      }
      *(int *)(iVar4 + 0xec64) = *(int *)(iVar4 + 0xec64) + 1;
    }
    uVar2 = 0x8876086c;
    if (*(int *)(param_1 + 0x75c4) != 0) {
      iVar4 = param_1 + 0x75c0;
      iVar3 = *(int *)(param_1 + 0x75c4);
      do {
        while (iVar5 = iVar3, *(uint *)(iVar5 + 0x10) < param_2) {
          piVar1 = (int *)(iVar5 + 0xc);
          iVar5 = iVar4;
          iVar3 = *piVar1;
          if (*piVar1 == 0) goto LAB_0407f455;
        }
        iVar4 = iVar5;
        iVar3 = *(int *)(iVar5 + 8);
      } while (*(int *)(iVar5 + 8) != 0);
LAB_0407f455:
      uVar2 = 0x8876086c;
      if ((param_1 + 0x75c0 != iVar5) && (*(uint *)(iVar5 + 0x10) <= param_2)) {
        uVar2 = 0;
        *param_3 = (uint)(*(int *)(iVar5 + 0x14) != -1);
      }
    }
    *piVar6 = (int)local_20;
    piVar6[-1] = 0x407f47e;
    direct3ddevice9imp_040a2df0();
  }
  return uVar2;
}

// --- Direct3DDevice9Imp::GetMaterial @0x04074ba0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetMaterial(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  byte bVar10;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  bVar10 = 0;
  piVar7 = local_4c;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar6;
    if (iVar6 != 0) {
      piVar7 = local_4c;
      if (*(char *)(iVar6 + 0xebbc) != '\0') {
        local_4c[0] = iVar6 + 0xebc4;
        uStack_50 = 0x4074cfe;
        EnterCriticalSection();
        piVar7 = &uStack_50;
      }
      if (*(int *)(iVar6 + 0xec64) == 0) {
        if (*(int *)(iVar6 + 0xebc0) != 0) {
          piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar7[2] = 0x3ae;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar7 = (int)"!mCurrentD3D9Thread";
          piVar7[-1] = 0x4074c9c;
          FUN_0400a810();
        }
        piVar7[-1] = 0x4074bf5;
        uVar2 = FUN_0415b750();
        *(undefined4 *)(iVar6 + 0xebc0) = uVar2;
      }
      else {
        local_30 = *(int *)(iVar6 + 0xebc0);
        piVar7[-1] = 0x4074cb6;
        iVar4 = FUN_0415b750();
        if (local_30 != iVar4) {
          piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar7[2] = 0x3b3;
          piVar7[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar7[-1] = 0x4074ce3;
          FUN_0400a810();
        }
      }
      *(int *)(iVar6 + 0xec64) = *(int *)(iVar6 + 0xec64) + 1;
    }
    bVar9 = ((uint)param_2 & 1) != 0;
    uVar3 = 0x44;
    puVar8 = (undefined4 *)(param_1 + 0x85c);
    if (bVar9) {
      puVar8 = (undefined4 *)(param_1 + 0x85d);
      *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x85c);
      param_2 = (undefined4 *)((int)param_2 + 1);
      uVar3 = 0x43;
    }
    if (((uint)param_2 & 2) != 0) {
      uVar1 = *(undefined2 *)puVar8;
      uVar3 = uVar3 - 2;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
      *(undefined2 *)param_2 = uVar1;
      param_2 = (undefined4 *)((int)param_2 + 2);
    }
    iVar6 = 0;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      param_2 = param_2 + (uint)bVar10 * -2 + 1;
    }
    if ((uVar3 & 2) != 0) {
      *(undefined2 *)param_2 = *(undefined2 *)puVar8;
      iVar6 = 2;
    }
    if (bVar9) {
      *(undefined1 *)((int)param_2 + iVar6) = *(undefined1 *)((int)puVar8 + iVar6);
    }
    *piVar7 = (int)local_20;
    piVar7[-1] = 0x4074c41;
    direct3ddevice9imp_040a2df0();
    uVar2 = 0;
  }
  return uVar2;
}

// --- Direct3DDevice9Imp::GetNPatchMode @0x04072dc0 ---
/* source: direct3ddevice9imp */

longdouble d3d9device_GetNPatchMode(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_50;
  int local_4c [4];
  float local_3c;
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_4c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x4072ebe;
      EnterCriticalSection();
      piVar5 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4072e64;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4072e08;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4072e7b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4072ea3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  local_3c = *(float *)(param_1 + 0x8a0);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x4072e29;
  direct3ddevice9imp_040a2df0();
  return (longdouble)local_3c;
}

// --- Direct3DDevice9Imp::GetNumberOfSwapChains @0x04078950 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetNumberOfSwapChains(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x4078a2e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40789dc;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4078991;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40789eb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4078a13;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x40789a9;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetPaletteEntries @0x04073300 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetPaletteEntries(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x40733de;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407338c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4073341;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407339b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40733c3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4073359;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetPixelShader @0x04071750 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetPixelShader(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int aiStack_48 [9];
  int local_24;
  int *local_20 [4];
  
  piVar7 = aiStack_48 + 3;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar7 = aiStack_48 + 3;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_48[3] = iVar1 + 0xebc4;
      aiStack_48[2] = 0x407186e;
      EnterCriticalSection();
      piVar7 = aiStack_48 + 2;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3ae;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"!mCurrentD3D9Thread";
        piVar7[-1] = 0x4071814;
        FUN_0400a810();
      }
      piVar7[-1] = 0x407179c;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar5;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0xebc0);
      piVar7[-1] = 0x407182b;
      iVar6 = FUN_0415b750();
      if (iVar4 != iVar6) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3b3;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar7[-1] = 0x4071857;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x8a4);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar1 = *piVar2;
    *piVar7 = (int)piVar2;
                    /* try { // try from 040717bc to 040717be has its CatchHandler @ 04071887 */
    pcVar3 = *(code **)(iVar1 + 4);
    piVar7[-1] = 0x40717bf;
    (*pcVar3)();
    uVar5 = *(undefined4 *)(param_1 + 0x8a4);
    piVar7 = piVar7 + -1;
  }
  *param_2 = uVar5;
  *piVar7 = (int)local_20;
  piVar7[-1] = 0x40717d8;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetPixelShaderConstantB @0x040713c0 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_GetPixelShaderConstantB(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x40714de;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4071484;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407140c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407149b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40714c7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar5[1] = param_1 + 0x641c + param_2 * 4;
  piVar5[2] = param_4 << 2;
  *piVar5 = param_3;
  piVar5[-1] = 0x407143c;
  memcpy((void *)*piVar5,(void *)piVar5[1],piVar5[2]);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x4071447;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetPixelShaderConstantF @0x04071620 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_GetPixelShaderConstantF(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x407173e;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40716e4;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407166c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40716fb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4071727;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar5[1] = param_1 + 0x531c + param_2 * 0x10;
  piVar5[2] = param_4 << 4;
  *piVar5 = param_3;
  piVar5[-1] = 0x407169f;
  memcpy((void *)*piVar5,(void *)piVar5[1],piVar5[2]);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x40716aa;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetPixelShaderConstantI @0x040714f0 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_GetPixelShaderConstantI(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x407160e;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40715b4;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407153c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40715cb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40715f7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar5[1] = param_1 + 0x631c + param_2 * 0x10;
  piVar5[2] = param_4 << 4;
  *piVar5 = param_3;
  piVar5[-1] = 0x407156f;
  memcpy((void *)*piVar5,(void *)piVar5[1],piVar5[2]);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x407157a;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetRasterStatus @0x04078360 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetRasterStatus(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x407843e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40783ec;
        FUN_0400a810();
      }
      piVar5[-1] = 0x40783a1;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40783fb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4078423;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x40783b9;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetRenderTargetData @0x04077000 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__GetRenderTargetData(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_50;
  int local_4c [6];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar5 = local_4c;
  local_24 = *(int *)(param_1 + 0xc);
  if (local_24 != 0) {
    local_34 = local_24;
    piVar5 = local_4c;
    if (*(char *)(local_24 + 0xebbc) != '\0') {
      local_4c[0] = local_24 + 0xebc4;
      local_50 = 0x4077211;
      EnterCriticalSection();
      piVar5 = &local_50;
    }
    if (*(int *)(local_34 + 0xec64) == 0) {
      if (*(int *)(local_34 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40771a7;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4077053;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(local_34 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(local_34 + 0xebc0);
      piVar5[-1] = 0x40771c1;
      iVar3 = FUN_0415b750();
      if (local_30 != iVar3) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40771f1;
        FUN_0400a810();
      }
    }
    *(int *)(local_34 + 0xec64) = *(int *)(local_34 + 0xec64) + 1;
  }
  if ((((param_3 == (int *)0x0) || (param_2 == 0)) || (*(int *)(param_2 + 0x70) == 0x4c4c554e)) ||
     (((*(int *)(param_2 + 0x7c) != 0 || (param_3[0x1f] != 2)) ||
      ((*(int *)(param_2 + 0x88) != param_3[0x22] || (*(int *)(param_2 + 0x8c) != param_3[0x23])))))
     ) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar3 = *param_3;
    piVar5[3] = 0x2000;
    piVar5[2] = 0;
    piVar5[1] = (int)&local_2c;
    *piVar5 = (int)param_3;
                    /* try { // try from 040770d6 to 04077171 has its CatchHandler @ 04077249 */
    pcVar1 = *(code **)(iVar3 + 0x34);
    piVar5[-1] = 0x40770d9;
    iVar3 = (*pcVar1)();
    if (iVar3 < 0) {
      piVar5[-1] = (int)
                   "virtual HRESULT Direct3DDevice9Imp::GetRenderTargetData(IDirect3DSurface9*, IDirect3DSurface9*)"
      ;
      piVar5[-2] = 0x10f3;
      piVar5[-3] = (int)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      piVar5[-4] = (int)"((HRESULT)(dst->LockRect( &destRect, 0, 0x2000 )) >= 0)";
                    /* try { // try from 0407723f to 04077243 has its CatchHandler @ 04077249 */
      piVar5[-5] = 0x4077244;
      FUN_0400a810();
    }
    piVar5[-4] = *(undefined4 *)(param_1 + 0xecc0);
    piVar5[-5] = 0x40770f2;
    eON_ResetEvent();
    local_30 = param_1 + 0xec00;
    piVar5[-2] = 0x1c;
    piVar5[-3] = 0xb;
    piVar5[-4] = param_1;
    piVar5[-5] = local_30;
    piVar5[-6] = 0x407711a;
    piVar4 = (int *)D3D9CommandQueue__GetNextCommandPointer();
    iVar3 = *(int *)(param_2 + 0x88);
    *piVar4 = param_2;
    piVar4[1] = iVar3;
    piVar4[2] = *(int *)(param_2 + 0x8c);
    piVar4[3] = param_3[0x1c];
    piVar4[4] = param_3[0x1e];
    piVar4[5] = local_28;
    piVar4[6] = local_2c;
    piVar5[-5] = local_30;
    piVar5[-6] = 0x4077151;
    D3D9CommandQueue__CommandSubmitted();
    piVar5[-4] = 0xffffffff;
    piVar5[-5] = *(undefined4 *)(param_1 + 0xecc0);
    piVar5[-6] = 0x4077167;
    eON_WaitForSingleObject();
    iVar3 = *param_3;
    piVar5[-7] = (int)param_3;
    pcVar1 = *(code **)(iVar3 + 0x38);
    piVar5[-8] = 0x4077172;
    (*pcVar1)();
    piVar5 = piVar5 + -8;
    uVar2 = 0;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x407707b;
  direct3ddevice9imp_040a2df0();
  return uVar2;
}

// --- Direct3DDevice9Imp::GetSamplerState @0x04073b00 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetSamplerState(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_4c;
  local_20[0] = &local_24;
  iVar2 = *(int *)(param_1 + 0xc);
  local_24 = iVar2;
  if (iVar2 != 0) {
    piVar5 = local_4c;
    if (*(char *)(iVar2 + 0xebbc) != '\0') {
      local_4c[0] = iVar2 + 0xebc4;
      uStack_50 = 0x4073c5e;
      EnterCriticalSection();
      piVar5 = &uStack_50;
    }
    if (*(int *)(iVar2 + 0xec64) == 0) {
      if (*(int *)(iVar2 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4073c04;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4073b53;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar2 + 0xebc0) = uVar3;
    }
    else {
      local_30 = *(int *)(iVar2 + 0xebc0);
      piVar5[-1] = 0x4073c1e;
      iVar4 = FUN_0415b750();
      if (local_30 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4073c4b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar2 + 0xec64) = *(int *)(iVar2 + 0xec64) + 1;
  }
  if (param_2 < 0x10) {
    puVar1 = (undefined4 *)(param_1 + 0x8ac + param_2 * 0x34);
code_r0x04073bd1:
    switch(param_3) {
    default:
      piVar5[1] = (int)"Unrecognized sampler state value: %u!";
      *piVar5 = 0xf;
      piVar5[2] = param_3;
                    /* try { // try from 04073b8b to 04073b8f has its CatchHandler @ 04073d3f */
      piVar5[-1] = 0x4073b90;
      FUN_0402cd10();
      goto LAB_04073b90;
    case 1:
      uVar3 = 0;
      *param_4 = *puVar1;
      break;
    case 2:
      uVar3 = 0;
      *param_4 = puVar1[1];
      break;
    case 3:
      uVar3 = 0;
      *param_4 = puVar1[2];
      break;
    case 4:
      uVar3 = 0;
      *param_4 = puVar1[3];
      break;
    case 5:
      uVar3 = 0;
      *param_4 = puVar1[4];
      break;
    case 6:
      uVar3 = 0;
      *param_4 = puVar1[5];
      break;
    case 7:
      uVar3 = 0;
      *param_4 = puVar1[6];
      break;
    case 8:
      uVar3 = 0;
      *param_4 = puVar1[7];
      break;
    case 9:
      uVar3 = 0;
      *param_4 = puVar1[8];
      break;
    case 10:
      uVar3 = 0;
      *param_4 = puVar1[9];
      break;
    case 0xb:
      uVar3 = 0;
      *param_4 = puVar1[10];
      break;
    case 0xc:
      uVar3 = 0;
      *param_4 = puVar1[0xb];
      break;
    case 0xd:
      uVar3 = 0;
      *param_4 = puVar1[0xc];
    }
  }
  else {
    if (param_2 - 0x101 < 4) {
      puVar1 = (undefined4 *)(param_1 + 0xbec + (param_2 - 0x101) * 0x34);
      goto code_r0x04073bd1;
    }
LAB_04073b90:
    uVar3 = 0x8876086c;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x4073ba3;
  direct3ddevice9imp_040a2df0();
  return uVar3;
}

// --- Direct3DDevice9Imp::GetScissorRect @0x040730b0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetScissorRect(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar4 = local_4c;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar1;
    if (iVar1 != 0) {
      piVar4 = local_4c;
      if (*(char *)(iVar1 + 0xebbc) != '\0') {
        local_4c[0] = iVar1 + 0xebc4;
        uStack_50 = 0x40731ce;
        EnterCriticalSection();
        piVar4 = &uStack_50;
      }
      if (*(int *)(iVar1 + 0xec64) == 0) {
        if (*(int *)(iVar1 + 0xebc0) != 0) {
          piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar4[2] = 0x3ae;
          piVar4[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar4 = (int)"!mCurrentD3D9Thread";
          piVar4[-1] = 0x407317c;
          FUN_0400a810();
        }
        piVar4[-1] = 0x4073107;
        uVar2 = FUN_0415b750();
        *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
      }
      else {
        local_30 = *(int *)(iVar1 + 0xebc0);
        piVar4[-1] = 0x407318e;
        iVar3 = FUN_0415b750();
        if (local_30 != iVar3) {
          piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar4[2] = 0x3b3;
          piVar4[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar4[-1] = 0x40731bb;
          FUN_0400a810();
        }
      }
      *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
    }
    *param_2 = *(undefined4 *)(param_1 + 0xcbc);
    param_2[1] = *(undefined4 *)(param_1 + 0xcc0);
    param_2[2] = *(undefined4 *)(param_1 + 0xcc4);
    param_2[3] = *(undefined4 *)(param_1 + 0xcc8);
    *piVar4 = (int)local_20;
    piVar4[-1] = 0x4073142;
    direct3ddevice9imp_040a2df0();
    uVar2 = 0;
  }
  return uVar2;
}

// --- Direct3DDevice9Imp::GetSoftwareVertexProcessing @0x04072ed0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetSoftwareVertexProcessing(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x4072fae;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4072f5c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4072f11;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4072f6b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4072f93;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4072f29;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetStreamSource @0x04071e30 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_GetStreamSource
          (int param_1,uint param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int aiStack_58 [4];
  char *local_48;
  uint local_44;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar6 = aiStack_58 + 3;
  if (0xf < param_2) {
    local_44 = param_2;
    local_48 = "ERROR!! game wants to read info from stream %u";
    aiStack_58[3] = 0xf;
    aiStack_58[2] = 0x4071f28;
    FUN_0402cd10();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar6 = aiStack_58 + 3;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_58[3] = iVar1 + 0xebc4;
      aiStack_58[2] = 0x4071f7e;
      EnterCriticalSection();
      piVar6 = aiStack_58 + 2;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x4071f04;
        FUN_0400a810();
      }
      piVar6[-1] = 0x4071e82;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar6[-1] = 0x4071f3e;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x4071f6b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar2 = *(int **)(param_1 + 0xc + (param_2 + 0xcc) * 0x10);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    *piVar6 = (int)piVar2;
                    /* try { // try from 04071ea7 to 04071ea9 has its CatchHandler @ 04071f86 */
    pcVar3 = *(code **)(iVar1 + 4);
    piVar6[-1] = 0x4071eaa;
    (*pcVar3)();
    piVar6 = piVar6 + -1;
  }
  param_1 = param_1 + (param_2 + 0xcc) * 0x10;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *param_3 = (int)piVar2;
  *param_4 = uVar4;
  *param_5 = *(undefined4 *)(param_1 + 0x14);
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x4071ed2;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetStreamSourceFreq @0x04071b30 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetStreamSourceFreq(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_50;
  int local_4c;
  char *local_48;
  uint local_44;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar4 = &local_4c;
  if (0xf < param_2) {
    local_44 = param_2;
    local_48 = "ERROR!! game wants to read freq from stream %u";
    local_4c = 0xf;
    uStack_50 = 0x4071b62;
    FUN_0402cd10();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar4 = &local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c = iVar1 + 0xebc4;
      uStack_50 = 0x4071c4e;
      EnterCriticalSection();
      piVar4 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3ae;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"!mCurrentD3D9Thread";
        piVar4[-1] = 0x4071bfc;
        FUN_0400a810();
      }
      piVar4[-1] = 0x4071b98;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar4[-1] = 0x4071c0e;
      iVar3 = FUN_0415b750();
      if (local_30 != iVar3) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3b3;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar4[-1] = 0x4071c37;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x18 + (param_2 + 0xcc) * 0x10);
  *piVar4 = (int)local_20;
  piVar4[-1] = 0x4071bc2;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetSwapChain @0x04078a40 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetSwapChain(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x4078b1e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4078acc;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4078a81;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4078adb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4078b03;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4078a99;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetTexture @0x040744d0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetTexture(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_58 [10];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar6 = aiStack_58 + 3;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xebbc) == '\0') {
      piVar6 = aiStack_58 + 3;
      piVar5 = aiStack_58 + 3;
      if (*(int *)(iVar1 + 0xec64) == 0) goto LAB_04074510;
LAB_040745df:
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar6[-1] = 0x40745ed;
      iVar4 = FUN_0415b750();
      if (local_30 != iVar4) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x407461a;
        FUN_0400a810();
      }
    }
    else {
      aiStack_58[3] = iVar1 + 0xebc4;
      aiStack_58[2] = 0x40745ce;
      EnterCriticalSection();
      piVar6 = aiStack_58 + 2;
      piVar5 = aiStack_58 + 2;
      if (*(int *)(iVar1 + 0xec64) != 0) goto LAB_040745df;
LAB_04074510:
      piVar6 = piVar5;
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x40745b4;
        FUN_0400a810();
      }
      piVar6[-1] = 0x407451f;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (param_2 < 0x10) {
    piVar5 = *(int **)(param_1 + 0xdcc + param_2 * 4);
  }
  else {
    if (3 < param_2 - 0x101) {
      uVar3 = 0x8876086c;
      goto LAB_0407454e;
    }
    piVar5 = *(int **)(param_1 + 0xa08 + param_2 * 4);
  }
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    *piVar6 = (int)piVar5;
                    /* try { // try from 04074541 to 04074543 has its CatchHandler @ 0407462a */
    pcVar2 = *(code **)(iVar1 + 4);
    piVar6[-1] = 0x4074544;
    (*pcVar2)();
    piVar6 = piVar6 + -1;
  }
  *param_3 = piVar5;
  uVar3 = 0;
LAB_0407454e:
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x4074559;
  direct3ddevice9imp_040a2df0();
  return uVar3;
}

// --- Direct3DDevice9Imp::GetTransform @0x04074f90 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__GetTransform(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar5 = local_4c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x407515e;
      EnterCriticalSection();
      piVar5 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40750fc;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4074fe0;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4075116;
      iVar4 = FUN_0415b750();
      if (local_30 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4075143;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (param_2 == 2) {
    *param_3 = *(undefined4 *)(param_1 + 0x1060);
    param_3[1] = *(undefined4 *)(param_1 + 0x1064);
    param_3[2] = *(undefined4 *)(param_1 + 0x1068);
    param_3[3] = *(undefined4 *)(param_1 + 0x106c);
    param_3[4] = *(undefined4 *)(param_1 + 0x1070);
    param_3[5] = *(undefined4 *)(param_1 + 0x1074);
    param_3[6] = *(undefined4 *)(param_1 + 0x1078);
    param_3[7] = *(undefined4 *)(param_1 + 0x107c);
    param_3[8] = *(undefined4 *)(param_1 + 0x1080);
    param_3[9] = *(undefined4 *)(param_1 + 0x1084);
    param_3[10] = *(undefined4 *)(param_1 + 0x1088);
    param_3[0xb] = *(undefined4 *)(param_1 + 0x108c);
    param_3[0xc] = *(undefined4 *)(param_1 + 0x1090);
    param_3[0xd] = *(undefined4 *)(param_1 + 0x1094);
    param_3[0xe] = *(undefined4 *)(param_1 + 0x1098);
    param_3[0xf] = *(undefined4 *)(param_1 + 0x109c);
    uVar2 = 0;
  }
  else if (param_2 == 0x100) {
    *param_3 = *(undefined4 *)(param_1 + 0x12e0);
    param_3[1] = *(undefined4 *)(param_1 + 0x12e4);
    param_3[2] = *(undefined4 *)(param_1 + 0x12e8);
    param_3[3] = *(undefined4 *)(param_1 + 0x12ec);
    param_3[4] = *(undefined4 *)(param_1 + 0x12f0);
    param_3[5] = *(undefined4 *)(param_1 + 0x12f4);
    param_3[6] = *(undefined4 *)(param_1 + 0x12f8);
    param_3[7] = *(undefined4 *)(param_1 + 0x12fc);
    param_3[8] = *(undefined4 *)(param_1 + 0x1300);
    param_3[9] = *(undefined4 *)(param_1 + 0x1304);
    param_3[10] = *(undefined4 *)(param_1 + 0x1308);
    param_3[0xb] = *(undefined4 *)(param_1 + 0x130c);
    param_3[0xc] = *(undefined4 *)(param_1 + 0x1310);
    param_3[0xd] = *(undefined4 *)(param_1 + 0x1314);
    param_3[0xe] = *(undefined4 *)(param_1 + 0x1318);
    param_3[0xf] = *(undefined4 *)(param_1 + 0x131c);
    uVar2 = 0;
  }
  else if (param_2 == 3) {
    *param_3 = *(undefined4 *)(param_1 + 0x10a0);
    param_3[1] = *(undefined4 *)(param_1 + 0x10a4);
    param_3[2] = *(undefined4 *)(param_1 + 0x10a8);
    param_3[3] = *(undefined4 *)(param_1 + 0x10ac);
    param_3[4] = *(undefined4 *)(param_1 + 0x10b0);
    param_3[5] = *(undefined4 *)(param_1 + 0x10b4);
    param_3[6] = *(undefined4 *)(param_1 + 0x10b8);
    param_3[7] = *(undefined4 *)(param_1 + 0x10bc);
    param_3[8] = *(undefined4 *)(param_1 + 0x10c0);
    param_3[9] = *(undefined4 *)(param_1 + 0x10c4);
    param_3[10] = *(undefined4 *)(param_1 + 0x10c8);
    param_3[0xb] = *(undefined4 *)(param_1 + 0x10cc);
    param_3[0xc] = *(undefined4 *)(param_1 + 0x10d0);
    param_3[0xd] = *(undefined4 *)(param_1 + 0x10d4);
    param_3[0xe] = *(undefined4 *)(param_1 + 0x10d8);
    param_3[0xf] = *(undefined4 *)(param_1 + 0x10dc);
    uVar2 = 0;
  }
  else {
    if (param_2 - 0x10U < 8) {
      puVar3 = (undefined4 *)(param_1 + 0x10e0 + (param_2 - 0x10U) * 0x40);
    }
    else {
      if (0xfe < param_2 - 0x101U) {
        piVar5[2] = param_2;
        piVar5[1] = (int)"Unknown state in Direct3DDevice9Imp::GetTransform(): %u";
        *piVar5 = 0xf;
                    /* try { // try from 04075037 to 0407503b has its CatchHandler @ 04075363 */
        piVar5[-1] = 0x407503c;
        FUN_0402cd10();
        uVar2 = 0x8876086c;
        goto LAB_04075041;
      }
      puVar3 = (undefined4 *)(param_1 + -0x2d20 + param_2 * 0x40);
    }
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    param_3[2] = puVar3[2];
    param_3[3] = puVar3[3];
    param_3[4] = puVar3[4];
    param_3[5] = puVar3[5];
    param_3[6] = puVar3[6];
    param_3[7] = puVar3[7];
    param_3[8] = puVar3[8];
    param_3[9] = puVar3[9];
    param_3[10] = puVar3[10];
    param_3[0xb] = puVar3[0xb];
    param_3[0xc] = puVar3[0xc];
    param_3[0xd] = puVar3[0xd];
    param_3[0xe] = puVar3[0xe];
    param_3[0xf] = puVar3[0xf];
    uVar2 = 0;
  }
LAB_04075041:
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x407504c;
  direct3ddevice9imp_040a2df0();
  return uVar2;
}

// --- Direct3DDevice9Imp::GetVertexDeclaration @0x04072980 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetVertexDeclaration(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int aiStack_58 [10];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar6 = aiStack_58 + 3;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar6 = aiStack_58 + 3;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_58[3] = iVar1 + 0xebc4;
      aiStack_58[2] = 0x4072aae;
      EnterCriticalSection();
      piVar6 = aiStack_58 + 2;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x4072a44;
        FUN_0400a810();
      }
      piVar6[-1] = 0x40729cf;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar6[-1] = 0x4072a66;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x4072a93;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0x8876086c;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x52f8);
    if (piVar2 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      iVar1 = *piVar2;
      *piVar6 = (int)piVar2;
                    /* try { // try from 040729f3 to 040729f5 has its CatchHandler @ 04072ac0 */
      pcVar3 = *(code **)(iVar1 + 4);
      piVar6[-1] = 0x40729f6;
      (*pcVar3)();
      uVar4 = *(undefined4 *)(param_1 + 0x52f8);
      piVar6 = piVar6 + -1;
    }
    *param_2 = uVar4;
    uVar4 = 0;
  }
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x4072a0e;
  direct3ddevice9imp_040a2df0();
  return uVar4;
}

// --- Direct3DDevice9Imp::GetVertexShader @0x040725c0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetVertexShader(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int aiStack_48 [9];
  int local_24;
  int *local_20 [4];
  
  piVar7 = aiStack_48 + 3;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar7 = aiStack_48 + 3;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_48[3] = iVar1 + 0xebc4;
      aiStack_48[2] = 0x40726de;
      EnterCriticalSection();
      piVar7 = aiStack_48 + 2;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3ae;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"!mCurrentD3D9Thread";
        piVar7[-1] = 0x4072684;
        FUN_0400a810();
      }
      piVar7[-1] = 0x407260c;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar5;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0xebc0);
      piVar7[-1] = 0x407269b;
      iVar6 = FUN_0415b750();
      if (iVar4 != iVar6) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3b3;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar7[-1] = 0x40726c7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x8a8);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar1 = *piVar2;
    *piVar7 = (int)piVar2;
                    /* try { // try from 0407262c to 0407262e has its CatchHandler @ 040726f7 */
    pcVar3 = *(code **)(iVar1 + 4);
    piVar7[-1] = 0x407262f;
    (*pcVar3)();
    uVar5 = *(undefined4 *)(param_1 + 0x8a8);
    piVar7 = piVar7 + -1;
  }
  *param_2 = uVar5;
  *piVar7 = (int)local_20;
  piVar7[-1] = 0x4072648;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetVertexShaderConstantB @0x04072230 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_GetVertexShaderConstantB(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x407234e;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40722f4;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407227c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407230b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4072337;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar5[1] = param_1 + 0x755c + param_2 * 4;
  piVar5[2] = param_4 << 2;
  *piVar5 = param_3;
  piVar5[-1] = 0x40722ac;
  memcpy((void *)*piVar5,(void *)piVar5[1],piVar5[2]);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x40722b7;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetVertexShaderConstantF @0x04072490 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_GetVertexShaderConstantF(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x40725ae;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4072554;
        FUN_0400a810();
      }
      piVar5[-1] = 0x40724dc;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407256b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4072597;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar5[1] = param_1 + 0x645c + param_2 * 0x10;
  piVar5[2] = param_4 << 4;
  *piVar5 = param_3;
  piVar5[-1] = 0x407250f;
  memcpy((void *)*piVar5,(void *)piVar5[1],piVar5[2]);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x407251a;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetVertexShaderConstantI @0x04072360 ---
/* source: direct3ddevice9imp */

undefined4
d3d9device_GetVertexShaderConstantI(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x407247e;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4072424;
        FUN_0400a810();
      }
      piVar5[-1] = 0x40723ac;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407243b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4072467;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar5[1] = param_1 + 0x745c + param_2 * 0x10;
  piVar5[2] = param_4 << 4;
  *piVar5 = param_3;
  piVar5[-1] = 0x40723df;
  memcpy((void *)*piVar5,(void *)piVar5[1],piVar5[2]);
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x40723ea;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GetViewport @0x04074d60 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_GetViewport(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar4 = local_4c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar4 = local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x4074e8e;
      EnterCriticalSection();
      piVar4 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3ae;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"!mCurrentD3D9Thread";
        piVar4[-1] = 0x4074e34;
        FUN_0400a810();
      }
      piVar4[-1] = 0x4074daf;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar4[-1] = 0x4074e4e;
      iVar3 = FUN_0415b750();
      if (local_30 != iVar3) {
        piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar4[2] = 0x3b3;
        piVar4[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar4[-1] = 0x4074e7b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x52e0);
  param_2[1] = *(undefined4 *)(param_1 + 0x52e4);
  param_2[2] = *(undefined4 *)(param_1 + 0x52e8);
  param_2[3] = *(undefined4 *)(param_1 + 0x52ec);
  param_2[4] = *(undefined4 *)(param_1 + 0x52f0);
  param_2[5] = *(undefined4 *)(param_1 + 0x52f4);
  *piVar4 = (int)local_20;
  piVar4[-1] = 0x4074dfc;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::Internal_LightEnable @0x04087ae0 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Internal_LightEnable(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  byte bVar15;
  int local_180;
  int local_178;
  int local_170;
  uint local_164;
  undefined4 local_160 [27];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_a8;
  undefined4 local_88 [30];
  
  bVar15 = 0;
  iVar3 = param_1 + 0x75c0;
  iVar11 = *(int *)(param_1 + 0x75c4);
  iVar6 = iVar3;
  if (*(int *)(param_1 + 0x75c4) != 0) {
    do {
      while (iVar9 = iVar11, *(uint *)(iVar9 + 0x10) < param_2) {
        piVar5 = (int *)(iVar9 + 0xc);
        iVar11 = *piVar5;
        iVar9 = iVar6;
        if (*piVar5 == 0) goto LAB_04087b35;
      }
      iVar11 = *(int *)(iVar9 + 8);
      iVar6 = iVar9;
    } while (*(int *)(iVar9 + 8) != 0);
LAB_04087b35:
    if ((iVar3 != iVar9) && (*(uint *)(iVar9 + 0x10) <= param_2)) goto LAB_04087b4a;
  }
  bzero(&local_f4,0x6c);
  local_f0 = 3;
  local_ec = 0x3f800000;
  local_e8 = 0x3f800000;
  local_e4 = 0x3f800000;
  local_a8 = 0x3f800000;
  iVar11 = *(int *)(param_1 + 0x75c4);
  local_f4 = 0xffffffff;
  iVar9 = iVar11;
  local_180 = iVar3;
  iVar6 = iVar3;
  if (iVar11 == 0) {
LAB_04087d27:
    puVar12 = local_88;
    for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    }
    local_164 = param_2;
    puVar12 = local_88;
    puVar13 = local_160;
    for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
    FUN_04070340(&local_164);
    iVar11 = *(int *)(param_1 + 0x75c4);
    puVar12 = &local_f4;
    puVar13 = (undefined4 *)(local_170 + 0x14);
    for (iVar9 = 0x1b; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
    if (iVar11 != 0) goto LAB_04087d1d;
  }
  else {
    do {
      if (*(uint *)(iVar9 + 0x10) < param_2) {
        iVar4 = *(int *)(iVar9 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar9 + 8);
        local_180 = iVar9;
      }
      iVar9 = iVar4;
    } while (iVar4 != 0);
    if ((local_180 == iVar3) || (param_2 < *(uint *)(local_180 + 0x10))) goto LAB_04087d27;
    puVar12 = &local_f4;
    puVar13 = (undefined4 *)(local_180 + 0x14);
    for (iVar9 = 0x1b; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
LAB_04087d1d:
    do {
      iVar9 = iVar11;
      if (*(uint *)(iVar9 + 0x10) < param_2) {
        iVar11 = *(int *)(iVar9 + 0xc);
        iVar9 = iVar6;
      }
      else {
        iVar11 = *(int *)(iVar9 + 8);
      }
      iVar6 = iVar9;
    } while (iVar11 != 0);
    if (((iVar9 != iVar3) && (*(uint *)(iVar9 + 0x10) <= param_2)) && (iVar3 != iVar9))
    goto LAB_04087b4a;
  }
  FUN_0400a810("i != mDeviceState.LightMap.end()",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
               ,0x1944,"void Direct3DDevice9Imp::Internal_LightEnable(DWORD, WINBOOL)");
  iVar9 = iVar3;
LAB_04087b4a:
  iVar11 = *(int *)(iVar9 + 0x14);
  if ((iVar11 != -1) == param_3) {
    return;
  }
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x80) == 0) {
      local_178 = 0;
    }
    else if (*(int *)(param_1 + 0xec) == 0) {
      local_178 = 1;
    }
    else if (*(int *)(param_1 + 0x158) == 0) {
      local_178 = 2;
    }
    else if (*(int *)(param_1 + 0x1c4) == 0) {
      local_178 = 3;
    }
    else if (*(int *)(param_1 + 0x230) == 0) {
      local_178 = 4;
    }
    else if (*(int *)(param_1 + 0x29c) == 0) {
      local_178 = 5;
    }
    else if (*(int *)(param_1 + 0x308) == 0) {
      local_178 = 6;
    }
    else {
      if (*(int *)(param_1 + 0x374) != 0) {
        return;
      }
      local_178 = 7;
    }
    *(int *)(iVar9 + 0x14) = local_178;
    *(undefined4 *)(param_1 + 0x80 + local_178 * 0x6c) = 1;
    puVar12 = (undefined4 *)(iVar9 + 0x18);
    iVar11 = param_1 + 0x80 + local_178 * 0x6c;
    uVar7 = 0x68;
    puVar13 = (undefined4 *)(iVar11 + 4);
    bVar14 = ((uint)puVar13 & 1) != 0;
    puVar8 = puVar12;
    if (bVar14) {
      puVar13 = (undefined4 *)(iVar11 + 5);
      puVar8 = (undefined4 *)(iVar9 + 0x19);
      *(undefined1 *)(iVar11 + 4) = *(undefined1 *)(iVar9 + 0x18);
      uVar7 = 0x67;
    }
    if (((uint)puVar13 & 2) != 0) {
      uVar2 = *(undefined2 *)puVar8;
      uVar7 = uVar7 - 2;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
      *(undefined2 *)puVar13 = uVar2;
      puVar13 = (undefined4 *)((int)puVar13 + 2);
    }
    iVar11 = 0;
    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar13 = *puVar8;
      puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
    if ((uVar7 & 2) != 0) {
      *(undefined2 *)puVar13 = *(undefined2 *)puVar8;
      iVar11 = 2;
    }
    if (bVar14) {
      *(undefined1 *)((int)puVar13 + iVar11) = *(undefined1 *)((int)puVar8 + iVar11);
    }
    *(int *)(param_1 + 0x3ec) = *(int *)(param_1 + 0x3ec) + 1;
    puVar8 = (undefined4 *)
             D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x19,0x6c);
    uVar7 = 0x68;
    bVar14 = ((uint)puVar8 & 1) != 0;
    puVar13 = puVar8;
    if (bVar14) {
      uVar1 = *(undefined1 *)puVar12;
      puVar13 = (undefined4 *)((int)puVar8 + 1);
      puVar12 = (undefined4 *)(iVar9 + 0x19);
      *(undefined1 *)puVar8 = uVar1;
      uVar7 = 0x67;
    }
    if (((uint)puVar13 & 2) != 0) {
      uVar2 = *(undefined2 *)puVar12;
      uVar7 = uVar7 - 2;
      puVar12 = (undefined4 *)((int)puVar12 + 2);
      *(undefined2 *)puVar13 = uVar2;
      puVar13 = (undefined4 *)((int)puVar13 + 2);
    }
    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
    iVar11 = 0;
    if ((uVar7 & 2) != 0) {
      *(undefined2 *)puVar13 = *(undefined2 *)puVar12;
      iVar11 = 2;
    }
    if (bVar14) {
      *(undefined1 *)((int)puVar13 + iVar11) = *(undefined1 *)((int)puVar12 + iVar11);
    }
    puVar8[0x1a] = local_178;
    D3D9CommandQueue__CommandSubmitted(param_1 + 0xec00);
    return;
  }
  *(undefined4 *)(iVar9 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80 + iVar11 * 0x6c) = 0;
  *(int *)(param_1 + 0x3ec) = *(int *)(param_1 + 0x3ec) + 1;
  piVar5 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x1a,4);
  *piVar5 = iVar11;
  D3D9CommandQueue__CommandSubmitted(param_1 + 0xec00);
  return;
}

// --- Direct3DDevice9Imp::Internal_SetPixelShaderConstantB @0x04099d50 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Internal_SetPixelShaderConstantB
               (int param_1,int param_2,void *param_3,int param_4)

{
  size_t __n;
  int *piVar1;
  
  __n = param_4 * 4;
  memcpy((void *)(param_1 + 0x641c + param_2 * 4),param_3,__n);
  if (*(uint *)(param_1 + 0x75b0) < (uint)(param_4 + param_2)) {
    *(int *)(param_1 + 0x75b0) = param_4 + param_2;
  }
  piVar1 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x2c,__n + 8);
  piVar1[1] = param_4;
  *piVar1 = param_2;
  if (param_4 == 0) {
    FUN_0400a810("BoolCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x32c3,
                 "void Direct3DDevice9Imp::Internal_SetPixelShaderConstantB(UINT, const WINBOOL*, UINT)"
                );
  }
  memcpy(piVar1 + 2,param_3,__n);
  D3D9CommandQueue__CommandSubmitted();
  return;
}

// --- Direct3DDevice9Imp::Internal_SetPixelShaderConstantF @0x04099900 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Internal_SetPixelShaderConstantF
               (int param_1,int param_2,void *param_3,int param_4)

{
  int *piVar1;
  size_t __n;
  
  __n = param_4 * 0x10;
  memcpy((void *)(param_1 + 0x531c + param_2 * 0x10),param_3,__n);
  if (*(uint *)(param_1 + 0x75a8) < (uint)(param_2 + param_4)) {
    *(int *)(param_1 + 0x75a8) = param_2 + param_4;
  }
  piVar1 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x2a,__n + 8);
  piVar1[1] = param_4;
  *piVar1 = param_2;
  if (param_4 == 0) {
    FUN_0400a810("Vector4fCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x3208,
                 "void Direct3DDevice9Imp::Internal_SetPixelShaderConstantF(UINT, const FLOAT*, UINT)"
                );
  }
  memcpy(piVar1 + 2,param_3,__n);
  D3D9CommandQueue__CommandSubmitted();
  return;
}

// --- Direct3DDevice9Imp::Internal_SetPixelShaderConstantI @0x04099b20 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Internal_SetPixelShaderConstantI
               (int param_1,int param_2,void *param_3,int param_4)

{
  int *piVar1;
  size_t __n;
  
  __n = param_4 * 0x10;
  memcpy((void *)(param_1 + 0x631c + param_2 * 0x10),param_3,__n);
  if (*(uint *)(param_1 + 0x75ac) < (uint)(param_2 + param_4)) {
    *(int *)(param_1 + 0x75ac) = param_2 + param_4;
  }
  piVar1 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x2b,__n + 8);
  piVar1[1] = param_4;
  *piVar1 = param_2;
  if (param_4 == 0) {
    FUN_0400a810("Vector4iCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x326c,
                 "void Direct3DDevice9Imp::Internal_SetPixelShaderConstantI(UINT, const INT*, UINT)"
                );
  }
  memcpy(piVar1 + 2,param_3,__n);
  D3D9CommandQueue__CommandSubmitted();
  return;
}

// --- Direct3DDevice9Imp::Internal_SetVertexShaderConstantB @0x04098c70 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Internal_SetVertexShaderConstantB
               (int param_1,int param_2,void *param_3,int param_4)

{
  size_t __n;
  int *piVar1;
  
  __n = param_4 * 4;
  memcpy((void *)(param_1 + 0x755c + param_2 * 4),param_3,__n);
  if (*(uint *)(param_1 + 0x75a4) < (uint)(param_4 + param_2)) {
    *(int *)(param_1 + 0x75a4) = param_4 + param_2;
  }
  piVar1 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x29,__n + 8);
  piVar1[1] = param_4;
  *piVar1 = param_2;
  if (param_4 == 0) {
    FUN_0400a810("BoolCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x3051,
                 "void Direct3DDevice9Imp::Internal_SetVertexShaderConstantB(UINT, const WINBOOL*, UINT)"
                );
  }
  memcpy(piVar1 + 2,param_3,__n);
  D3D9CommandQueue__CommandSubmitted();
  return;
}

// --- Direct3DDevice9Imp::Internal_SetVertexShaderConstantF @0x04098800 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Internal_SetVertexShaderConstantF
               (int param_1,int param_2,void *param_3,int param_4)

{
  int *piVar1;
  size_t __n;
  
  __n = param_4 * 0x10;
  memcpy((void *)(param_1 + 0x645c + param_2 * 0x10),param_3,__n);
  if (*(uint *)(param_1 + 0x759c) < (uint)(param_2 + param_4)) {
    *(int *)(param_1 + 0x759c) = param_2 + param_4;
  }
  piVar1 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x27,__n + 8);
  piVar1[1] = param_4;
  *piVar1 = param_2;
  if (param_4 == 0) {
    FUN_0400a810("Vector4fCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x2f97,
                 "void Direct3DDevice9Imp::Internal_SetVertexShaderConstantF(UINT, const FLOAT*, UINT)"
                );
  }
  memcpy(piVar1 + 2,param_3,__n);
  D3D9CommandQueue__CommandSubmitted();
  return;
}

// --- Direct3DDevice9Imp::Internal_SetVertexShaderConstantI @0x04098a40 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__Internal_SetVertexShaderConstantI
               (int param_1,int param_2,void *param_3,int param_4)

{
  int *piVar1;
  size_t __n;
  
  __n = param_4 * 0x10;
  memcpy((void *)(param_1 + 0x745c + param_2 * 0x10),param_3,__n);
  if (*(uint *)(param_1 + 0x75a0) < (uint)(param_2 + param_4)) {
    *(int *)(param_1 + 0x75a0) = param_2 + param_4;
  }
  piVar1 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x28,__n + 8);
  piVar1[1] = param_4;
  *piVar1 = param_2;
  if (param_4 == 0) {
    FUN_0400a810("Vector4iCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x2ffb,
                 "void Direct3DDevice9Imp::Internal_SetVertexShaderConstantI(UINT, const INT*, UINT)"
                );
  }
  memcpy(piVar1 + 2,param_3,__n);
  D3D9CommandQueue__CommandSubmitted();
  return;
}

// --- Direct3DDevice9Imp::LightEnable @0x04087fc0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_LightEnable(int param_1,size_t param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t *psVar4;
  size_t *psVar5;
  size_t *psVar6;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  psVar5 = (size_t *)local_4c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    psVar5 = (size_t *)local_4c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_4c[0] = iVar1 + 0xebc4;
      uStack_50 = 0x40880fe;
      EnterCriticalSection();
      psVar5 = &uStack_50;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        psVar5[3] = (size_t)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        psVar5[2] = 0x3ae;
        psVar5[1] = (size_t)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *psVar5 = (size_t)"!mCurrentD3D9Thread";
        psVar5[-1] = 0x4088084;
        FUN_0400a810();
      }
      psVar5[-1] = 0x4088009;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      psVar5[-1] = 0x40880be;
      iVar3 = FUN_0415b750();
      if (local_30 != iVar3) {
        psVar5[3] = (size_t)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        psVar5[2] = 0x3b3;
        psVar5[1] = (size_t)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *psVar5 = (size_t)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        psVar5[-1] = 0x40880eb;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x75ec);
  if (iVar1 == 0) {
    psVar5[1] = param_2;
    *psVar5 = param_1;
    psVar5[2] = param_3;
                    /* try { // try from 0408811e to 04088122 has its CatchHandler @ 0408814b */
    psVar5[-1] = 0x4088123;
    Direct3DDevice9Imp__Internal_LightEnable();
  }
  else {
    psVar4 = *(size_t **)(iVar1 + 0x18);
    if (*(size_t **)(iVar1 + 0x18) == (size_t *)0x0) {
      *psVar5 = 0xc;
      psVar5[-1] = 0x4088134;
      psVar4 = malloc(*psVar5);
      *(size_t **)(iVar1 + 0x18) = psVar4;
      *psVar4 = param_2;
      psVar4[2] = 0;
      psVar4[1] = param_3;
    }
    else {
      do {
        psVar6 = psVar4;
        if (param_2 == *psVar6) {
          psVar6[1] = param_3;
          goto LAB_04088043;
        }
        psVar4 = (size_t *)psVar6[2];
      } while ((size_t *)psVar6[2] != (size_t *)0x0);
      *psVar5 = 0xc;
      psVar5[-1] = 0x408809c;
      psVar4 = malloc(*psVar5);
      psVar6[2] = (size_t)psVar4;
      *psVar4 = param_2;
      psVar4[2] = 0;
      psVar4[1] = param_3;
    }
  }
LAB_04088043:
  *psVar5 = (size_t)local_20;
  psVar5[-1] = 0x408804e;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::MakeSureTexturesForDrawAreCurrent @0x0408da20 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

void Direct3DDevice9Imp__MakeSureTexturesForDrawAreCurrent(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  
  iVar6 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x8278 + iVar6 * 4);
    if ((iVar4 == 0) || (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x3c + iVar6 * 4) == -1)) {
      *(undefined4 *)(param_2 + iVar6 * 4) = 0;
    }
    else {
      iVar1 = 0;
      if (*(char *)(param_1 + 0xeb4c) == '\0') {
        iVar5 = 0;
        if (iVar6 != 0) {
          do {
            if ((*(int *)(param_1 + 0x8278 + iVar5 * 4) == iVar4) &&
               (iVar1 = memcmp((void *)(param_1 + 0x7c60 + iVar6 * 0x38),
                               (void *)(param_1 + 0x7c60 + iVar5 * 0x38),0x38), iVar1 == 0)) {
              iVar1 = FUN_0408d740(param_1,iVar4,iVar5,0);
              if (iVar6 != iVar5) goto LAB_0408dae9;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar6);
        }
        iVar1 = FUN_0408d740(param_1,iVar4,iVar5,0);
      }
LAB_0408dae9:
      direct3dbasetexture9imp_0406d9b0(iVar4 + 4,iVar1,1);
      if (*(int *)(iVar4 + 0x284) <= iVar1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar4 = *(int *)(iVar4 + 0x244 + iVar1 * 4);
      if (iVar4 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x24f0,
                     "void Direct3DDevice9Imp::MakeSureTexturesForDrawAreCurrent(OpenGLTexture**)");
      }
      *(int *)(param_2 + iVar6 * 4) = iVar4;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x10);
  if ((*(int *)(param_1 + 0x82c8) != 0) && (*(char *)(*(int *)(param_1 + 0xe9ec) + 0x80) != '\0')) {
    local_20 = 4;
    local_24 = param_1;
    do {
      iVar4 = 4 - local_20;
      iVar6 = *(int *)(local_24 + 0x82b8);
      if ((iVar6 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x2c + iVar4 * 4) != -1)) {
        if (*(int *)(param_2 + 0x2c + local_20 * 4) != 0) {
          FUN_0402cd10(0xf,"Conflict! Vertex texture using same texture stage as normal texture!");
        }
        iVar1 = 0;
        if (*(char *)(param_1 + 0xeb4c) == '\0') {
          iVar1 = 0x14 - local_20;
          if (*(int *)(param_1 + 0x8278) == iVar6) {
            iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7c60),0x38
                          );
            uVar3 = 0;
            if (iVar5 != 0) goto LAB_0408dc13;
LAB_0408de8d:
            iVar1 = FUN_0408d740(param_1,iVar6,uVar3,0);
          }
          else {
LAB_0408dc13:
            if (*(int *)(param_1 + 0x827c) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7c98),
                             0x38);
              uVar3 = 1;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8280) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7cd0),
                             0x38);
              uVar3 = 2;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8284) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7d08),
                             0x38);
              uVar3 = 3;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8288) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7d40),
                             0x38);
              uVar3 = 4;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x828c) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7d78),
                             0x38);
              uVar3 = 5;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8290) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7db0),
                             0x38);
              uVar3 = 6;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8294) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7de8),
                             0x38);
              uVar3 = 7;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8298) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7e20),
                             0x38);
              uVar3 = 8;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x829c) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7e58),
                             0x38);
              uVar3 = 9;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82a0) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7e90),
                             0x38);
              uVar3 = 10;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82a4) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7ec8),
                             0x38);
              uVar3 = 0xb;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82a8) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7f00),
                             0x38);
              uVar3 = 0xc;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82ac) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7f38),
                             0x38);
              uVar3 = 0xd;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82b0) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7f70),
                             0x38);
              uVar3 = 0xe;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82b4) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7fa8),
                             0x38);
              uVar3 = 0xf;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            iVar5 = 0;
            if (0 < iVar4) {
              do {
                if ((*(int *)(param_1 + 0x82b8 + iVar5 * 4) == iVar6) &&
                   (iVar2 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),
                                   (void *)(param_1 + 0x7c60 + (iVar5 + 0x10) * 0x38),0x38),
                   iVar2 == 0)) {
                  iVar1 = FUN_0408d740(param_1,iVar6,iVar5,1);
                  goto LAB_0408dd40;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 != iVar4);
            }
            iVar1 = FUN_0408d740(param_1,iVar6,iVar4,1);
          }
        }
LAB_0408dd40:
        direct3dbasetexture9imp_0406d9b0(iVar6 + 4,iVar1,1);
        if (*(int *)(iVar6 + 0x284) <= iVar1) {
          FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                       ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
        }
        iVar6 = *(int *)(iVar6 + 0x244 + iVar1 * 4);
        if (iVar6 == 0) {
          FUN_0400a810(&PTR_DAT_042e85bd,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                       ,0x2536,
                       "void Direct3DDevice9Imp::MakeSureTexturesForDrawAreCurrent(OpenGLTexture**)"
                      );
        }
        *(int *)(param_2 + 0x2c + local_20 * 4) = iVar6;
      }
      local_24 = local_24 + 4;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}

// --- Direct3DDevice9Imp::MultiplyTransform @0x04074ea0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_MultiplyTransform(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x4074f7e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4074f2c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4074ee1;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4074f3b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4074f63;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4074ef9;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::OpenGLSide_Clear @0x04085b60 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

int Direct3DDevice9Imp__OpenGLSide_Clear(int param_1,undefined4 param_2,uint *param_3)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_78;
  uint local_74;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  bVar3 = false;
  uVar14 = *param_3;
  uVar2 = param_3[1];
  if ((uVar14 & 1) != 0) {
    iVar13 = *(int *)(param_1 + 0xc65c);
    bVar3 = false;
    if ((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) {
      bVar3 = true;
      local_3c = iVar13;
    }
    iVar13 = *(int *)(param_1 + 0xc660);
    if ((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) {
      bVar3 = true;
      local_38 = iVar13;
    }
    iVar13 = *(int *)(param_1 + 0xc664);
    if ((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) {
      bVar3 = true;
      local_34 = iVar13;
    }
    iVar13 = *(int *)(param_1 + 0xc668);
    if (((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) || (iVar13 = local_30, bVar3)) {
      local_30 = iVar13;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  bVar16 = false;
  bVar17 = false;
  if (*(int *)(param_1 + 0xc66c) != 0) {
    bVar17 = false;
    if ((uVar14 & 2) != 0) {
      cVar4 = direct3dsurface9imp_040adca0(*(int *)(param_1 + 0xc66c) + 4);
      bVar17 = cVar4 != '\0';
    }
    bVar16 = false;
    if ((uVar14 & 4) != 0) {
      cVar4 = direct3dsurface9imp_040add10(*(int *)(param_1 + 0xc66c) + 4);
      bVar16 = cVar4 != '\0';
    }
  }
  iVar13 = local_34;
  if (bVar3) {
    iVar9 = *(int *)(param_1 + 0xeb48);
    if (((*(char *)(iVar9 + 0x424) != '\x0f') || (*(char *)(iVar9 + 0x425) != '\x0f')) ||
       ((*(char *)(iVar9 + 0x426) != '\x0f' || (*(char *)(iVar9 + 0x427) != '\x0f')))) {
      glColorMask(1,1,1,1);
      *(undefined1 *)(iVar9 + 0x424) = 0xf;
      *(undefined1 *)(iVar9 + 0x425) = 0xf;
      *(undefined1 *)(iVar9 + 0x426) = 0xf;
      *(undefined1 *)(iVar9 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    uVar14 = param_3[2];
    fVar22 = ((float)(uVar14 >> 0x18) + 0.0) / _DAT_042dc5a0;
    fVar18 = (DAT_042dbf34 * 0.0 + (float)(uVar14 & 0xff)) / _DAT_042dc5a0;
    fVar21 = (DAT_042dbf34 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) / _DAT_042dc5a0;
    fVar20 = (DAT_042dbf34 * 0.0 + (float)(uVar14 >> 8 & 0xff)) / _DAT_042dc5a0;
    local_78 = local_3c;
    if (((fVar21 == *(float *)(iVar9 + 0x4a8)) && (fVar20 == *(float *)(iVar9 + 0x4ac))) &&
       ((fVar18 == *(float *)(iVar9 + 0x4b0) && (fVar22 == *(float *)(iVar9 + 0x4b4))))) {
      if (local_3c != 0) goto LAB_04085df0;
LAB_04086528:
      local_78 = local_38;
      if ((local_38 != 0) || (local_78 = local_34, local_34 != 0)) goto LAB_04085df0;
      local_78 = local_30;
      if (local_30 == 0) {
        FUN_0400a810("firstNonZeroRT",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x16f5,"DWORD Direct3DDevice9Imp::OpenGLSide_Clear(DWORD, LPVOID)");
        local_44 = 0;
        iVar13 = 0;
        local_40 = local_30;
      }
      else {
        local_40 = local_34;
        local_44 = local_30;
      }
    }
    else {
      glClearColor(fVar21,fVar20,fVar18,fVar22);
      *(float *)(iVar9 + 0x4a8) = fVar21;
      *(float *)(iVar9 + 0x4ac) = fVar20;
      *(float *)(iVar9 + 0x4b0) = fVar18;
      *(float *)(iVar9 + 0x4b4) = fVar22;
      if (local_3c == 0) goto LAB_04086528;
LAB_04085df0:
      local_40 = local_38;
      local_44 = local_30;
    }
    local_78 = local_78 + 0x70;
    local_74 = 0x4100;
    iVar9 = *(int *)(param_1 + 0xeb48);
    local_4c = 0x4000;
    if (bVar17) goto LAB_04085e1e;
LAB_04085ecd:
    local_48 = 0;
  }
  else {
    if (bVar17) {
      local_78 = *(int *)(param_1 + 0xc66c);
    }
    else {
      if (!bVar16) goto LAB_0408617c;
      local_78 = *(int *)(param_1 + 0xc66c);
    }
    if (local_78 == 0) {
      FUN_0400a810("mOGLDeviceState.CurrentDepthStencil",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x16fa,"DWORD Direct3DDevice9Imp::OpenGLSide_Clear(DWORD, LPVOID)");
      local_78 = *(int *)(param_1 + 0xc66c);
    }
    local_78 = local_78 + 0x70;
    local_44 = local_30;
    local_74 = 0x100;
    local_40 = local_38;
    local_4c = 0;
    iVar9 = *(int *)(param_1 + 0xeb48);
    if (!bVar17) goto LAB_04085ecd;
LAB_04085e1e:
    if (*(char *)(iVar9 + 0x42e) != '\x01') {
      glDepthMask(1);
      *(undefined1 *)(iVar9 + 0x42e) = 1;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    dVar19 = (double)(float)param_3[3];
    dVar1 = *(double *)(iVar9 + 0x4b8);
    *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) & 0xffffffef | 8;
    if (dVar19 != dVar1) {
      (*DAT_0451eec0)(dVar19);
      *(double *)(iVar9 + 0x4b8) = dVar19;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    local_48 = *(undefined4 *)(param_1 + 0xc66c);
    local_4c = local_74;
  }
  uVar5 = 0;
  if (bVar16) {
    if (*(int *)(iVar9 + 0x430) != -1) {
      glStencilMask(0xffffffff);
      cVar4 = FUN_04021f90();
      if (cVar4 != '\0') {
        (*DAT_0451d648)(0x405);
        glStencilMask(0xffffffff);
        (*DAT_0451d648)(0x404);
      }
      *(undefined4 *)(iVar9 + 0x430) = 0xffffffff;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 8;
    uVar14 = param_3[4];
    if (uVar14 != *(uint *)(iVar9 + 0x4c0)) {
      glClearStencil(uVar14);
      *(uint *)(iVar9 + 0x4c0) = uVar14;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    local_4c = local_4c | 0x400;
    uVar5 = *(undefined4 *)(param_1 + 0xc66c);
  }
  FramebufferCache__GetFramebufferHash
            (iVar9 + 0x1f8,local_3c,local_40,iVar13,local_44,local_48,uVar5);
  local_48 = 0;
  puVar11 = param_3;
  if (param_3[1] == 0) {
    iVar13 = *(int *)(param_1 + 0xe9bc);
    local_2c = 0;
    local_28 = 0;
    iVar9 = *(int *)(param_1 + 0xe9c0);
    local_24 = 0;
    local_20 = 0;
    if (iVar13 == 0) {
      if (iVar9 != 0) {
        local_40 = *(int *)(param_1 + 0xe9c4);
        iVar6 = *(int *)(param_1 + 0xe9c8);
        goto LAB_04085fde;
      }
      local_40 = *(int *)(param_1 + 0xe9c4);
      if (local_40 != *(int *)(local_78 + 0x18)) {
        iVar6 = *(int *)(param_1 + 0xe9c8);
        goto LAB_04085fde;
      }
      iVar6 = *(int *)(param_1 + 0xe9c8);
      if (iVar6 != *(int *)(local_78 + 0x1c)) goto LAB_04085fde;
      iVar13 = *(int *)(param_1 + 0xeb48);
      uVar5 = 1;
      if (*(char *)(iVar13 + 0xa8b) != '\0') {
        glDisable(0xc11);
        *(undefined1 *)(iVar13 + 0xa8b) = 0;
      }
    }
    else {
      local_40 = *(int *)(param_1 + 0xe9c4);
      iVar6 = *(int *)(param_1 + 0xe9c8);
LAB_04085fde:
      iVar12 = *(int *)(param_1 + 0xeb48);
      iVar10 = 0;
      if (-1 < local_40) {
        iVar10 = local_40;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if ((((iVar13 != *(int *)(iVar12 + 0x434)) || (iVar9 != *(int *)(iVar12 + 0x438))) ||
          (*(int *)(iVar12 + 0x43c) != iVar10)) || (iVar6 != *(int *)(iVar12 + 0x440))) {
        glScissor(iVar13,iVar9,iVar10,iVar6);
        *(int *)(iVar12 + 0x438) = iVar9;
        *(int *)(iVar12 + 0x434) = iVar13;
        *(int *)(iVar12 + 0x440) = iVar6;
        *(int *)(iVar12 + 0x43c) = iVar10;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
      if (*(char *)(iVar12 + 0xa8b) != '\x01') {
        glEnable(0xc11);
        *(undefined1 *)(iVar12 + 0xa8b) = 1;
      }
      local_2c = *(uint *)(param_1 + 0xe9bc);
      uVar5 = 0;
      local_28 = *(uint *)(param_1 + 0xe9c0);
      local_24 = local_2c + *(int *)(param_1 + 0xe9c4);
      local_20 = *(int *)(param_1 + 0xe9c8) + local_28;
    }
    glClear(local_4c);
    if (bVar3) {
      if (local_3c != 0) {
        direct3dsurface9imp_040b0a40(local_3c + 4,uVar5,&local_2c);
      }
      if (local_38 != 0) {
        direct3dsurface9imp_040b0a40(local_38 + 4,uVar5,&local_2c);
      }
      if (local_34 != 0) {
        direct3dsurface9imp_040b0a40(local_34 + 4,uVar5,&local_2c);
      }
      if (local_30 != 0) {
        direct3dsurface9imp_040b0a40(local_30 + 4,uVar5,&local_2c);
      }
    }
    if ((*(int *)(param_1 + 0xc66c) != 0) && ((bVar17 || (bVar16)))) {
      direct3dsurface9imp_040b0a40(*(int *)(param_1 + 0xc66c) + 4,uVar5,&local_2c);
    }
  }
  else {
    do {
      uVar14 = *(uint *)(param_1 + 0xe9bc);
      uVar15 = puVar11[5];
      if ((int)puVar11[5] < (int)uVar14) {
        uVar15 = uVar14;
      }
      uVar8 = *(uint *)(param_1 + 0xe9c0);
      uVar7 = puVar11[6];
      if ((int)puVar11[6] < (int)uVar8) {
        uVar7 = uVar8;
      }
      uVar14 = uVar14 + *(int *)(param_1 + 0xe9c4);
      local_24 = puVar11[7];
      if ((int)uVar14 < (int)puVar11[7]) {
        local_24 = uVar14;
      }
      uVar8 = uVar8 + *(int *)(param_1 + 0xe9c8);
      local_20 = puVar11[8];
      if ((int)uVar8 < (int)puVar11[8]) {
        local_20 = uVar8;
      }
      local_2c = uVar15;
      local_28 = uVar7;
      if ((((uVar15 == 0) && (uVar7 == 0)) && (*(uint *)(local_78 + 0x18) == local_24)) &&
         (*(uint *)(local_78 + 0x1c) == local_20)) {
        iVar13 = *(int *)(param_1 + 0xeb48);
        uVar5 = 1;
        if (*(char *)(iVar13 + 0xa8b) != '\0') {
          glDisable(0xc11);
          *(undefined1 *)(iVar13 + 0xa8b) = 0;
        }
      }
      else {
        iVar13 = *(int *)(param_1 + 0xeb48);
        iVar9 = 0;
        if (-1 < (int)(local_24 - uVar15)) {
          iVar9 = local_24 - uVar15;
        }
        iVar6 = 0;
        if (-1 < (int)(local_20 - uVar7)) {
          iVar6 = local_20 - uVar7;
        }
        if (((*(uint *)(iVar13 + 0x434) != uVar15) || (*(uint *)(iVar13 + 0x438) != uVar7)) ||
           ((iVar9 != *(int *)(iVar13 + 0x43c) || (iVar6 != *(int *)(iVar13 + 0x440))))) {
          glScissor(uVar15,uVar7,iVar9,iVar6);
          *(uint *)(iVar13 + 0x434) = uVar15;
          *(uint *)(iVar13 + 0x438) = uVar7;
          *(int *)(iVar13 + 0x440) = iVar6;
          *(int *)(iVar13 + 0x43c) = iVar9;
          iVar13 = *(int *)(param_1 + 0xeb48);
        }
        uVar5 = 0;
        if (*(char *)(iVar13 + 0xa8b) != '\x01') {
          glEnable(0xc11);
          *(undefined1 *)(iVar13 + 0xa8b) = 1;
        }
      }
      glClear();
      if (bVar3) {
        if (local_3c == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        do {
          direct3dsurface9imp_040b0a40(local_3c + 4,uVar5,&local_2c);
        } while( true );
      }
      if ((*(int *)(param_1 + 0xc66c) != 0) && ((bVar17 || (bVar16)))) {
        direct3dsurface9imp_040b0a40(*(int *)(param_1 + 0xc66c) + 4,uVar5,&local_2c);
      }
      local_48 = local_48 + 1;
      puVar11 = puVar11 + 4;
    } while (local_48 < param_3[1]);
  }
  cVar4 = FUN_04021f10();
  if (((cVar4 != '\0') && (param_3[2] == 0xff808080)) &&
     ((*param_3 == 5 && ((local_3c != 0 && (iVar13 = *(int *)(local_3c + 0x94), iVar13 != 0)))))) {
    if (*(int *)(iVar13 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
    }
    DAT_04468c38 = *(undefined4 *)(*(int *)(iVar13 + 0x244) + 8);
  }
  OpenGLDebugEvent(2,"Clear()");
LAB_0408617c:
  return uVar2 * 0x10 + 0x14;
}

// --- Direct3DDevice9Imp::OpenGLSide_CopyRects_ScreenSurfaceToTexture @0x04082f20 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

int Direct3DDevice9Imp__OpenGLSide_CopyRects_ScreenSurfaceToTexture
              (int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int **ppiVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int aiStack_7c [4];
  int *local_6c;
  int *local_68;
  int *local_64;
  char *local_60;
  int *local_5c;
  char *local_58;
  int local_54;
  int local_50;
  int *local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  ppiVar7 = &local_6c;
  local_34 = param_3 + 7;
  local_40 = param_3[6] * 0x18 + 0x1c;
  local_3c = local_34 + param_3[6] * 4;
  piVar4 = (int *)param_3[1];
  local_38 = piVar4 + 1;
  if (*(int *)(piVar4[0x25] + 0x228) != 1) {
    local_60 = 
    "DWORD Direct3DDevice9Imp::OpenGLSide_CopyRects_ScreenSurfaceToTexture(DWORD, LPVOID)";
    local_64 = (int *)0x102f;
    local_68 = (int *)0x42f002c;
    local_6c = (int *)0x42f16dc;
    aiStack_7c[3] = 0x4082f8f;
    local_44 = piVar4;
    FUN_0400a810();
    piVar4 = local_44;
  }
  if (*(char *)(param_1 + 0xeb50) == '\0') {
    local_64 = (int *)0x0;
    local_68 = (int *)0x8d40;
    local_6c = *(int **)(param_1 + 0xeb48);
    aiStack_7c[3] = 0x4083419;
    local_44 = piVar4;
    OpenGLContextCache____glewBindFramebuffer();
    iVar8 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar8 + 0x350) != 0x405) {
      local_6c = (int *)0x405;
      aiStack_7c[3] = 0x408343b;
      (*DAT_0451eed4)();
      *(undefined4 *)(iVar8 + 0x350) = 0x405;
      iVar8 = *(int *)(param_1 + 0xeb48);
    }
    if ((*(char *)(iVar8 + 0x34c) == '\0') || (*(int *)(iVar8 + 0x33c) != 0x405)) {
      local_6c = (int *)0x405;
      aiStack_7c[3] = 0x4083473;
      (*DAT_0451eed0)();
      *(undefined1 *)(iVar8 + 0x34c) = 1;
      *(undefined4 *)(iVar8 + 0x33c) = 0x405;
      *(undefined4 *)(iVar8 + 0x340) = 0;
      *(undefined4 *)(iVar8 + 0x344) = 0;
      *(undefined4 *)(iVar8 + 0x348) = 0;
    }
    iVar8 = local_44[0x25];
    if (*(int *)(iVar8 + 0x284) < 1) {
      local_60 = "OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)";
      local_64 = (int *)0x8c;
      local_68 = (int *)0x42f1724;
      local_6c = (int *)0x42f1784;
      aiStack_7c[3] = 0x40834d9;
      FUN_0400a810();
    }
    local_68 = *(int **)(param_1 + 0xeb48);
    local_6c = *(int **)(iVar8 + 0x244);
    aiStack_7c[3] = 0x40834f1;
    FUN_0406d620();
    iVar8 = *(int *)(param_1 + 0xeb48);
    if ((((*(char *)(iVar8 + 0x424) != '\x0f') || (*(char *)(iVar8 + 0x425) != '\x0f')) ||
        (*(char *)(iVar8 + 0x426) != '\x0f')) || (*(char *)(iVar8 + 0x427) != '\x0f')) {
      local_60 = (char *)0x1;
      local_64 = (int *)0x1;
      local_68 = (int *)0x1;
      local_6c = (int *)0x1;
      aiStack_7c[3] = 0x4083531;
      glColorMask();
      *(undefined1 *)(iVar8 + 0x424) = 0xf;
      *(undefined1 *)(iVar8 + 0x425) = 0xf;
      *(undefined1 *)(iVar8 + 0x426) = 0xf;
      *(undefined1 *)(iVar8 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
    }
    if (local_3c != (int *)0x0) {
      if (param_3[6] == 0) goto LAB_04083677;
      local_30 = param_3;
      uVar10 = 0;
      piVar4 = local_34;
      piVar5 = local_3c;
      do {
        local_58 = (char *)piVar4[1];
        uVar10 = uVar10 + 1;
        local_5c = (int *)*piVar4;
        local_50 = piVar4[3] - (int)local_58;
        piVar9 = piVar4 + 2;
        piVar4 = piVar4 + 4;
        local_54 = *piVar9 - (int)local_5c;
        local_60 = (char *)piVar5[1];
        local_64 = (int *)*piVar5;
        local_68 = (int *)0x0;
        piVar5 = piVar5 + 2;
        local_6c = (int *)0xde1;
        aiStack_7c[3] = 0x40835c9;
        glCopyTexSubImage2D();
        uVar6 = local_30[6];
        param_3 = local_30;
      } while (uVar10 < uVar6);
      goto LAB_040835d5;
    }
    uVar10 = 0;
    piVar4 = local_34;
    if (param_3[6] == 0) goto LAB_04083677;
    do {
      local_60 = (char *)piVar4[1];
      uVar10 = uVar10 + 1;
      local_64 = (int *)*piVar4;
      local_50 = piVar4[3] - (int)local_60;
      local_54 = piVar4[2] - (int)local_64;
      local_68 = (int *)0x0;
      local_6c = (int *)0xde1;
      aiStack_7c[3] = 0x4083739;
      local_5c = local_64;
      local_58 = local_60;
      glCopyTexSubImage2D();
      uVar6 = param_3[6];
      piVar4 = piVar4 + 4;
    } while (uVar10 < uVar6);
  }
  else {
    iVar8 = *(int *)(param_1 + 0xeb48);
    if (*(char *)(iVar8 + 0xa8b) != '\0') {
      local_6c = (int *)0xc11;
      aiStack_7c[3] = 0x4082fba;
      glDisable();
      *(undefined1 *)(iVar8 + 0xa8b) = 0;
      iVar8 = *(int *)(param_1 + 0xeb48);
    }
    local_68 = (int *)param_3[2];
    if (local_68 != (int *)*param_3) {
      local_6c = (int *)(iVar8 + 0x1f8);
      local_54 = 0;
      local_58 = (char *)0x0;
      local_5c = (int *)0x0;
      local_60 = (char *)0x0;
      local_64 = (int *)0x0;
      aiStack_7c[3] = 0x408300c;
      puVar3 = (undefined4 *)FramebufferCache__GetFramebufferHash();
      local_64 = (int *)*puVar3;
      local_68 = (int *)0x8ca9;
      local_6c = *(int **)(param_1 + 0xeb48);
      aiStack_7c[3] = 0x4083028;
      OpenGLContextCache____glewBindFramebuffer();
      piVar4 = *(int **)(param_1 + 0xeb48);
      if (((char)piVar4[0xd3] == '\0') || (piVar4[0xcf] != 0x8ce0)) {
        local_6c = (int *)0x8ce0;
        aiStack_7c[3] = 0x4083050;
        (*DAT_0451eed0)();
        *(undefined1 *)(piVar4 + 0xd3) = 1;
        piVar4[0xcf] = 0x8ce0;
        piVar4[0xd0] = 0;
        piVar4[0xd1] = 0;
        piVar4[0xd2] = 0;
        piVar4 = *(int **)(param_1 + 0xeb48);
      }
      local_64 = (int *)0x0;
      local_68 = (int *)0x8ca8;
      aiStack_7c[3] = 0x408309d;
      local_6c = piVar4;
      OpenGLContextCache____glewBindFramebuffer();
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (*(int *)(iVar8 + 0x350) != 0x405) {
        local_6c = (int *)0x405;
        aiStack_7c[3] = 0x40830bc;
        (*DAT_0451eed4)();
        *(undefined4 *)(iVar8 + 0x350) = 0x405;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      if (*(char *)(iVar8 + 0xa8b) != '\0') {
        local_6c = (int *)0xc11;
        aiStack_7c[3] = 0x40830e1;
        glDisable();
        *(undefined1 *)(iVar8 + 0xa8b) = 0;
      }
      local_6c = (int *)0x0;
      aiStack_7c[3] = 0x40830fd;
      FUN_0406f690();
      local_68 = (int *)param_3[2];
      iVar8 = *(int *)(param_1 + 0xeb48);
    }
    local_6c = (int *)(iVar8 + 0x1f8);
    local_54 = 0;
    local_58 = (char *)0x0;
    local_5c = (int *)0x0;
    local_60 = (char *)0x0;
    local_64 = (int *)0x0;
    aiStack_7c[3] = 0x4083140;
    piVar4 = (int *)FramebufferCache__GetFramebufferHash();
    piVar4 = (int *)*piVar4;
    local_54 = 0;
    local_58 = (char *)0x0;
    local_5c = (int *)0x0;
    local_60 = (char *)0x0;
    local_64 = (int *)0x0;
    local_68 = (int *)param_3[3];
    local_6c = (int *)(*(int *)(param_1 + 0xeb48) + 0x1f8);
    aiStack_7c[3] = 0x4083184;
    local_64 = (int *)FramebufferCache__GetFramebufferHash();
    local_64 = (int *)*local_64;
    local_68 = (int *)0x8ca9;
    local_6c = *(int **)(param_1 + 0xeb48);
    aiStack_7c[3] = 0x40831a3;
    local_30 = local_64;
    OpenGLContextCache____glewBindFramebuffer();
    piVar5 = *(int **)(param_1 + 0xeb48);
    if (((char)piVar5[0xd3] == '\0') || (piVar5[0xcf] != 0x8ce0)) {
      local_6c = (int *)0x8ce0;
      aiStack_7c[3] = 0x40831ce;
      local_44 = piVar5;
      (*DAT_0451eed0)();
      local_44[0xcf] = 0x8ce0;
      local_44[0xd0] = 0;
      local_44[0xd1] = 0;
      local_44[0xd2] = 0;
      *(undefined1 *)(local_44 + 0xd3) = 1;
      piVar5 = *(int **)(param_1 + 0xeb48);
    }
    piVar9 = (int *)0x8ce0;
    local_68 = (int *)0x8ca8;
    aiStack_7c[3] = 0x408321f;
    local_6c = piVar5;
    local_64 = piVar4;
    OpenGLContextCache____glewBindFramebuffer();
    if (param_3[2] == *param_3) {
      piVar9 = (int *)0x405;
    }
    if (piVar9 != (int *)(*(int **)(param_1 + 0xeb48))[0xd4]) {
      aiStack_7c[3] = 0x4083246;
      local_6c = piVar9;
      local_44 = *(int **)(param_1 + 0xeb48);
      (*DAT_0451eed4)();
      local_44[0xd4] = (int)piVar9;
    }
    local_6c = (int *)0x1;
    aiStack_7c[3] = 0x4083264;
    FUN_0406f690();
    if (param_3[3] != param_3[1]) {
      local_54 = 0;
      local_58 = (char *)0x0;
      local_5c = (int *)0x0;
      local_60 = (char *)0x0;
      local_64 = (int *)0x0;
      local_6c = (int *)(*(int *)(param_1 + 0xeb48) + 0x1f8);
      aiStack_7c[3] = 0x40832af;
      local_68 = (int *)param_3[1];
      puVar3 = (undefined4 *)FramebufferCache__GetFramebufferHash();
      local_64 = (int *)*puVar3;
      local_68 = (int *)0x8ca9;
      local_6c = *(int **)(param_1 + 0xeb48);
      aiStack_7c[3] = 0x40832cb;
      OpenGLContextCache____glewBindFramebuffer();
      piVar4 = *(int **)(param_1 + 0xeb48);
      if (((char)piVar4[0xd3] == '\0') || (piVar4[0xcf] != 0x8ce0)) {
        local_6c = (int *)0x8ce0;
        aiStack_7c[3] = 0x40832f3;
        (*DAT_0451eed0)();
        *(undefined1 *)(piVar4 + 0xd3) = 1;
        piVar4[0xcf] = 0x8ce0;
        piVar4[0xd0] = 0;
        piVar4[0xd1] = 0;
        piVar4[0xd2] = 0;
        piVar4 = *(int **)(param_1 + 0xeb48);
      }
      local_68 = (int *)0x8ca8;
      local_64 = local_30;
      aiStack_7c[3] = 0x408333f;
      local_6c = piVar4;
      OpenGLContextCache____glewBindFramebuffer();
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (*(int *)(iVar8 + 0x350) != 0x8ce0) {
        local_6c = (int *)0x8ce0;
        aiStack_7c[3] = 0x408335e;
        (*DAT_0451eed4)();
        *(undefined4 *)(iVar8 + 0x350) = 0x8ce0;
      }
      local_6c = (int *)0x0;
      aiStack_7c[3] = 0x408337d;
      FUN_0406f690();
    }
    uVar6 = param_3[6];
    if (local_3c != (int *)0x0) {
LAB_040835d5:
      if (uVar6 != 0) {
        local_30 = (int *)0x0;
        piVar4 = local_34;
        piVar5 = local_3c;
        local_34 = param_3;
        do {
          local_3c = (int *)0x0;
          piVar9 = piVar4 + 3;
          local_2c = *piVar5;
          piVar1 = piVar4 + 1;
          if (((local_2c == 0) && (local_3c = (int *)0x0, piVar5[1] == 0)) &&
             (local_34[4] == piVar4[2] - *piVar4)) {
            local_3c = (int *)(uint)(*piVar9 - *piVar1 == local_34[5]);
          }
          local_24 = local_2c + (piVar4[2] - *piVar4);
          local_28 = piVar5[1];
          piVar4 = piVar4 + 4;
          piVar5 = piVar5 + 2;
          local_6c = local_38;
          local_20 = (*piVar9 - *piVar1) + local_28;
          local_64 = &local_2c;
          local_68 = local_3c;
          aiStack_7c[3] = 0x4083662;
          direct3dsurface9imp_040b0a40();
          local_30 = (int *)((int)local_30 + 1);
          param_3 = local_34;
        } while (local_30 < (int *)local_34[6]);
      }
      goto LAB_04083677;
    }
  }
  uVar10 = 0;
  piVar4 = local_34;
  if (uVar6 != 0) {
    do {
      local_30 = (int *)piVar4[3];
      local_68 = (int *)0x0;
      if (((*piVar4 == 0) && (piVar4[1] == 0)) && (piVar4[2] == param_3[4])) {
        local_68 = (int *)(uint)(local_30 == (int *)param_3[5]);
      }
      uVar10 = uVar10 + 1;
      local_6c = local_38;
      aiStack_7c[3] = 0x40833e9;
      local_64 = piVar4;
      direct3dsurface9imp_040b0a40();
      piVar4 = piVar4 + 4;
    } while (uVar10 < (uint)param_3[6]);
  }
LAB_04083677:
  piVar4 = (int *)param_3[2];
  if (piVar4 != (int *)*param_3) {
    aiStack_7c[3] = 0x4083686;
    local_6c = piVar4;
    (**(code **)(*piVar4 + 8))();
    ppiVar7 = (int **)(aiStack_7c + 3);
  }
  piVar4 = (int *)param_3[3];
  if (piVar4 != (int *)param_3[1]) {
    iVar8 = *piVar4;
    *ppiVar7 = piVar4;
    pcVar2 = *(code **)(iVar8 + 8);
    ppiVar7[-1] = (int *)0x4083699;
    (*pcVar2)();
    ppiVar7 = ppiVar7 + -1;
  }
  iVar8 = *(int *)*param_3;
  *ppiVar7 = (int *)*param_3;
  pcVar2 = *(code **)(iVar8 + 8);
  ppiVar7[-1] = (int *)0x40836a6;
  (*pcVar2)();
  iVar8 = *(int *)param_3[1];
  ppiVar7[-1] = (int *)param_3[1];
  pcVar2 = *(code **)(iVar8 + 8);
  ppiVar7[-2] = (int *)0x40836b4;
  (*pcVar2)();
  return local_40;
}

// --- Direct3DDevice9Imp::OpenGLSide_CreateScreenBuffers @0x0407feb0 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_CreateScreenBuffers(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc650) != 0) {
    FUN_0400a810("!mOGLDeviceState.ScreenRenderTarget",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x32c,"DWORD Direct3DDevice9Imp::OpenGLSide_CreateScreenBuffers(DWORD, LPVOID)");
  }
  iVar3 = *param_3;
  *(int *)(param_1 + 0xc650) = iVar3;
  if (*(int *)(iVar3 + 0x94) == 0) {
    if (*(int *)(param_1 + 0xc654) != 0) {
      FUN_0400a810("!mOGLDeviceState.DownsampleTexture",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x334,"DWORD Direct3DDevice9Imp::OpenGLSide_CreateScreenBuffers(DWORD, LPVOID)")
      ;
    }
    if (*(int *)(param_1 + 0xc658) != 0) {
      FUN_0400a810("!mOGLDeviceState.DownsampleFramebuffer",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x335,"DWORD Direct3DDevice9Imp::OpenGLSide_CreateScreenBuffers(DWORD, LPVOID)")
      ;
    }
    uVar2 = Direct3DDevice9Imp__CreateTextureInOpenGL(param_1);
    iVar4 = *(int *)(param_1 + 0xeb48);
    *(undefined4 *)(param_1 + 0xc654) = uVar2;
    if (*(int *)(iVar4 + 0x234) != 0x84c0) {
      (*DAT_0451eeac)(0x84c0);
      *(undefined4 *)(iVar4 + 0x234) = 0x84c0;
      iVar4 = *(int *)(param_1 + 0xeb48);
      uVar2 = *(undefined4 *)(param_1 + 0xc654);
    }
    FUN_040c6ee0(iVar4,0xde1,uVar2);
    glTexParameteri(0xde1,0x2802,0x812f);
    glTexParameteri(0xde1,0x2803,0x812f);
    glTexParameteri(0xde1,0x2800,0x2601);
    glTexParameteri(0xde1,0x2801,0x2601);
    glTexParameteri(0xde1,0x8a48,0x8a4a);
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      glTexParameteri(0xde1,0x8191,0);
    }
    cVar1 = FUN_04021f50();
    if (cVar1 == '\0') {
      glTexImage2D(0xde1,0,*(undefined4 *)(iVar3 + 0xb0),*(undefined4 *)(iVar3 + 0x88),
                   *(undefined4 *)(iVar3 + 0x8c),0,*(undefined4 *)(iVar3 + 0xac),
                   *(undefined4 *)(iVar3 + 0xa8),0);
    }
    else {
      (*DAT_0451e148)(0xde1,1,*(undefined4 *)(iVar3 + 0xb0),*(undefined4 *)(iVar3 + 0x88),
                      *(undefined4 *)(iVar3 + 0x8c));
    }
    glTexParameteri(0xde1,0x813d,0);
    uVar2 = FUN_040c6d40(*(undefined4 *)(param_1 + 0xeb48));
    *(undefined4 *)(param_1 + 0xc658) = uVar2;
    (*DAT_0451e674)(0x8d40,0x8ce0,0xde1,*(undefined4 *)(param_1 + 0xc654),0);
    OpenGLContextCache____glewBindFramebuffer
              (*(undefined4 *)(param_1 + 0xeb48),0x8ca9,*(undefined4 *)(param_1 + 0xc658));
    iVar3 = (*DAT_0451e688)(0x8ca9);
    if (iVar3 != 0x8cd5) {
      FUN_0400a810("__glewCheckFramebufferStatus( 0x8CA9 ) == 0x8CD5",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x350,"DWORD Direct3DDevice9Imp::OpenGLSide_CreateScreenBuffers(DWORD, LPVOID)")
      ;
    }
  }
  return 4;
}

// --- Direct3DDevice9Imp::OpenGLSide_DrawIndexedPrimitive @0x040a05a0 ---
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_DrawIndexedPrimitive
          (int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  char *local_b0;
  uint local_a4;
  undefined1 local_98 [64];
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  void *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int local_24;
  char local_1d [13];
  
  cVar6 = OpenGLContextCache__MaterialShininess(param_1,*param_3,param_3[1],local_1d);
  if (cVar6 == '\0') {
    FUN_0402cd10(0xf,"Couldn\'t set up render pipeline in DrawIndexedPrimitive! Skipping the draw.")
    ;
    return 0x28;
  }
  if ((DAT_0451ca41 == '\0') || (*(char *)(param_1 + 0xeb4c) == '\0')) {
    Direct3DDevice9Imp__MakeSureTexturesForDrawAreCurrent(param_1,local_98);
    OpenGLContextCache__PointAttenuation(param_1);
    OpenGLContextCache__glLodBias(param_1,local_98);
    bVar4 = false;
    cVar6 = *(char *)(param_1 + 0xeb4c);
  }
  else {
    OpenGLContextCache__PointAttenuation(param_1);
    Direct3DDevice9Imp__SetupTexturesForDraw(param_1);
    bVar4 = true;
    cVar6 = *(char *)(param_1 + 0xeb4c);
  }
  if ((cVar6 == '\0') &&
     (FUN_0408b2e0(param_1,*(undefined4 *)(param_1 + 0xe9ec)), local_1d[0] != '\0')) {
    FUN_040e8c90(*(undefined4 *)(param_1 + 0xe9ec),*(undefined4 *)(param_1 + 0xc));
  }
  OpenGLContextCache__UpdateTextureMatrices(param_1,*(undefined1 *)(param_3 + 9));
  uVar12 = (uint)(*(int *)(*(int *)(param_1 + 0x7c0c) + 0x3c) == 0x66);
  iVar2 = uVar12 * 2 + 0x1403;
  if (param_3[2] == 0) {
    Direct3DDevice9Imp__SetupVertexAttributeArrays(param_1,param_3[3],0);
    OpenGLContextCache____glewBindBuffer
              (*(undefined4 *)(param_1 + 0xeb48),0x8893,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c0c) + 0x50) + 0x18));
    iVar15 = *(int *)(param_1 + 0xeb48);
    if (*(char *)(iVar15 + 0x18c) != '\0') {
      if (*(int *)(iVar15 + 0x14c) != 0) {
        (*DAT_0451e548)(0,0);
        *(undefined4 *)(iVar15 + 0x14c) = 0;
      }
      if (*(int *)(iVar15 + 0x150) != 0) {
        (*DAT_0451e548)(1,0);
        *(undefined4 *)(iVar15 + 0x150) = 0;
      }
      if (*(int *)(iVar15 + 0x154) != 0) {
        (*DAT_0451e548)(2,0);
        *(undefined4 *)(iVar15 + 0x154) = 0;
      }
      if (*(int *)(iVar15 + 0x158) != 0) {
        (*DAT_0451e548)(3,0);
        *(undefined4 *)(iVar15 + 0x158) = 0;
      }
      if (*(int *)(iVar15 + 0x15c) != 0) {
        (*DAT_0451e548)(4,0);
        *(undefined4 *)(iVar15 + 0x15c) = 0;
      }
      if (*(int *)(iVar15 + 0x160) != 0) {
        (*DAT_0451e548)(5,0);
        *(undefined4 *)(iVar15 + 0x160) = 0;
      }
      if (*(int *)(iVar15 + 0x164) != 0) {
        (*DAT_0451e548)(6,0);
        *(undefined4 *)(iVar15 + 0x164) = 0;
      }
      if (*(int *)(iVar15 + 0x168) != 0) {
        (*DAT_0451e548)(7,0);
        *(undefined4 *)(iVar15 + 0x168) = 0;
      }
      if (*(int *)(iVar15 + 0x16c) != 0) {
        (*DAT_0451e548)(8,0);
        *(undefined4 *)(iVar15 + 0x16c) = 0;
      }
      if (*(int *)(iVar15 + 0x170) != 0) {
        (*DAT_0451e548)(9,0);
        *(undefined4 *)(iVar15 + 0x170) = 0;
      }
      if (*(int *)(iVar15 + 0x174) != 0) {
        (*DAT_0451e548)(10,0);
        *(undefined4 *)(iVar15 + 0x174) = 0;
      }
      if (*(int *)(iVar15 + 0x178) != 0) {
        (*DAT_0451e548)(0xb,0);
        *(undefined4 *)(iVar15 + 0x178) = 0;
      }
      if (*(int *)(iVar15 + 0x17c) != 0) {
        (*DAT_0451e548)(0xc,0);
        *(undefined4 *)(iVar15 + 0x17c) = 0;
      }
      if (*(int *)(iVar15 + 0x180) != 0) {
        (*DAT_0451e548)(0xd,0);
        *(undefined4 *)(iVar15 + 0x180) = 0;
      }
      if (*(int *)(iVar15 + 0x184) != 0) {
        (*DAT_0451e548)(0xe,0);
        *(undefined4 *)(iVar15 + 0x184) = 0;
      }
      if (*(int *)(iVar15 + 0x188) != 0) {
        (*DAT_0451e548)(0xf,0);
        *(undefined4 *)(iVar15 + 0x188) = 0;
      }
      *(undefined1 *)(iVar15 + 0x18c) = 0;
    }
    if (DAT_04468c2c == 0) {
      FUN_0400a810("DrawRangeElements_MaxVertices",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x2d1e,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_DrawIndexedPrimitive(DWORD, LPVOID)");
    }
    if (DAT_04468c28 == 0) {
      FUN_0400a810("DrawRangeElements_MaxIndices",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x2d1f,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_DrawIndexedPrimitive(DWORD, LPVOID)");
    }
    if (DAT_04468c2c < (int)param_3[6]) {
      iVar15 = param_3[8];
LAB_040a0b19:
      glDrawElements(param_3[7],iVar15,iVar2,param_3[4]);
    }
    else {
      iVar15 = param_3[8];
      if (DAT_04468c28 < iVar15) goto LAB_040a0b19;
      (*DAT_0451eeb8)(param_3[7],param_3[5],param_3[6] + param_3[5],iVar15,iVar2,param_3[4]);
    }
    DAT_044dac20 = 0;
    DAT_044dac2c = param_3[5];
    DAT_044dac28 = param_3[6];
    DAT_04408c8c = param_3[4];
    DAT_044dac24 = uVar12;
    OpenGLDebugEvent(1,"DrawPrimitive: glDraw(Range)Elements()");
    DAT_044dac28 = 0;
    DAT_04408c8c = 0xffffffff;
    goto LAB_040a0750;
  }
  if ((*(char *)(param_1 + 0xeb4c) != '\0') || (DAT_0451ca5a != '\0')) {
    Direct3DDevice9Imp__SetupVertexAttributeArrays(param_1,param_3[3],param_3[2]);
    OpenGLContextCache____glewBindBuffer
              (*(undefined4 *)(param_1 + 0xeb48),0x8893,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c0c) + 0x50) + 0x18));
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      (*DAT_0451e54c)(param_3[7],param_3[8],iVar2,param_3[4],param_3[2]);
    }
    else {
      (*DAT_0451ea80)(param_3[7],param_3[8],iVar2,param_3[4],param_3[2]);
    }
    DAT_044dac2c = param_3[5];
    DAT_044dac28 = param_3[6];
    DAT_04408c8c = param_3[4];
    DAT_044dac20 = param_3[2];
    DAT_044dac24 = uVar12;
    OpenGLDebugEvent(1,"DrawIndexedPrimitive: instanced glDrawElementsInstancedARB");
    DAT_044dac28 = 0;
    DAT_04408c8c = 0xffffffff;
    goto LAB_040a0750;
  }
  local_38 = (int *)0x0;
  local_2c = (int *)0x0;
  local_40 = (void *)0x0;
  local_3c = (int *)0x0;
  iVar15 = param_3[3];
  local_34 = (int *)0x0;
  iVar3 = *(int *)(param_1 + 0xe9d4);
  local_30 = (int *)0x0;
  local_b0 = (char *)(*(int *)(param_1 + 0xe9ec) + 9);
  cVar6 = *(char *)(*(int *)(param_1 + 0xe9ec) + 9);
  pcVar10 = local_b0;
  while (cVar6 != -1) {
    if (cVar6 == '\0') {
      if (pcVar10[1] == '\0') goto LAB_040a0cf5;
    }
    else if (cVar6 == '\t') {
      if (pcVar10[1] != '\0') {
        FUN_0400a810("positionInfo->UsageIndex == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x2943,
                     "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                    );
      }
LAB_040a0cf5:
      if (*pcVar10 != -1) goto LAB_040a0d04;
      break;
    }
    pcVar10 = pcVar10 + 2;
    cVar6 = *pcVar10;
  }
  FUN_0400a810("positionInfo->Usage != 0xFF",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
               ,0x2948,
               "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
              );
LAB_040a0d04:
  bVar5 = false;
  local_a4 = 0;
  do {
    if (local_a4 == 0) {
      iVar8 = *(int *)(iVar3 + 0x24);
      iVar16 = (*(int *)(iVar3 + 0x28) - iVar8 >> 3) * -0x55555555;
      if (iVar16 != 0) {
        iVar11 = 0;
        iVar14 = 0;
        do {
          cVar6 = *(char *)(iVar8 + iVar11);
          if (cVar6 == '\0') {
            if (((char *)(iVar8 + iVar11))[1] == '\0') goto LAB_040a0dc8;
          }
          else if (cVar6 == '\t') goto LAB_040a0dc8;
          iVar14 = iVar14 + 1;
          iVar11 = iVar11 + 0x18;
        } while (iVar14 != iVar16);
      }
LAB_040a1215:
      (*DAT_0451ecc8)(local_a4);
      if (local_a4 == 0) {
        FUN_0400a810("i",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x2976,
                     "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                    );
      }
      (*DAT_0451eb9c)(local_a4,0,0,0,0);
    }
    else {
      pcVar7 = pcVar10 + 2;
      if (pcVar10 != local_b0) {
        pcVar7 = local_b0;
      }
      if (*pcVar7 == -1) goto LAB_040a11b0;
      iVar8 = *(int *)(iVar3 + 0x24);
      iVar14 = -1;
      iVar16 = (*(int *)(iVar3 + 0x28) - iVar8 >> 3) * -0x55555555;
      if (iVar16 != 0) {
        iVar11 = 0;
        iVar14 = 0;
        do {
          if ((*pcVar7 == *(char *)(iVar8 + iVar11)) && (((char *)(iVar8 + iVar11))[1] == pcVar7[1])
             ) goto LAB_040a0dbd;
          iVar14 = iVar14 + 1;
          iVar11 = iVar11 + 0x18;
        } while (iVar14 != iVar16);
        iVar14 = -1;
      }
LAB_040a0dbd:
      local_b0 = pcVar7 + 2;
LAB_040a0dc8:
      if (iVar14 == -1) goto LAB_040a1215;
      iVar8 = iVar8 + iVar14 * 0x18;
      if (*(int *)(iVar8 + 4) == 0) {
                    /* try { // try from 040a0deb to 040a14ec has its CatchHandler @ 040a15a5 */
        (*DAT_0451ecc0)();
        OpenGLContextCache____glewBindBuffer
                  (*(undefined4 *)(param_1 + 0xeb48),0x8892,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8178) + 0x54) + 0x18));
        iVar16 = *(int *)(param_1 + 0x8180);
        iVar11 = iVar15 * iVar16 + *(int *)(param_1 + 0x817c);
        (&DAT_044dac40)[local_a4] = iVar11;
        (*DAT_0451eb7c)(local_a4,*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0xc),
                        *(undefined1 *)(iVar8 + 0x14),iVar16,iVar11 + *(int *)(iVar8 + 8));
        bVar5 = true;
      }
      else {
        (*DAT_0451ecc8)(local_a4);
        local_54 = *(int *)(iVar8 + 0x10);
        local_58 = local_a4;
        iVar16 = *(int *)(iVar8 + 4);
        local_50 = *(int *)(iVar8 + 0xc);
        local_4c = (uint)*(byte *)(iVar8 + 0x14);
        local_48 = *(int *)(param_1 + 0x10 + (iVar16 + 0x817) * 0x10);
        iVar11 = (int)local_30 - (int)local_34 >> 3;
        if (iVar11 == 0) {
LAB_040a1382:
          if (*(int *)(param_1 + 0x14 + (iVar16 + 0x817) * 0x10) != -0x7fffffff) {
            FUN_0400a810("mOGLDeviceState.StreamSources[a.Stream].Divider == (UINT) ( (2<<30) | 1 )"
                         ,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                         ,0x29a1,
                         "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                        );
            iVar16 = *(int *)(iVar8 + 4);
          }
          local_28 = iVar16;
          local_24 = eON_Buffer__GetOpenGLSideDataRegion
                               (*(undefined4 *)
                                 (*(int *)(param_1 + 8 + (iVar16 + 0x817) * 0x10) + 0x54),
                                *(undefined4 *)(param_1 + 0xeb48));
          if (local_30 == local_2c) {
                    /* try { // try from 040a15e9 to 040a15ed has its CatchHandler @ 040a15a5 */
            FUN_040a36c0(&local_34,local_30,&local_28);
          }
          else {
            if (local_30 != (int *)0x0) {
              *local_30 = local_28;
              local_30[1] = local_24;
            }
            local_30 = local_30 + 2;
          }
          iVar16 = *(int *)(iVar8 + 4);
          iVar11 = iVar15 * local_48 + local_24;
        }
        else {
          iVar9 = 0;
          iVar14 = *local_34;
          piVar1 = local_34;
          while (iVar16 != iVar14) {
            iVar9 = iVar9 + 1;
            if (iVar11 == iVar9) goto LAB_040a1382;
            piVar1 = local_34 + iVar9 * 2;
            iVar14 = *piVar1;
          }
          iVar11 = iVar15 * local_48 + piVar1[1];
          if (iVar11 == 0) goto LAB_040a1382;
        }
        local_44 = iVar11 + *(int *)(iVar8 + 8) + *(int *)(param_1 + 0xc + (iVar16 + 0x817) * 0x10);
        if (local_3c == local_38) {
                    /* try { // try from 040a1538 to 040a159f has its CatchHandler @ 040a15a5 */
          FUN_040a3870(&local_40,local_3c,&local_58);
        }
        else {
          if (local_3c != (int *)0x0) {
            *local_3c = local_58;
            local_3c[1] = local_54;
            local_3c[2] = local_50;
            local_3c[3] = local_4c;
            local_3c[4] = local_48;
            local_3c[5] = local_44;
          }
          local_3c = local_3c + 6;
        }
      }
    }
    local_a4 = local_a4 + 1;
  } while (local_a4 != 0x10);
LAB_040a0e7b:
  if (!bVar5) {
    FUN_0400a810("zeroSourceUsed",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x29b5,
                 "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                );
  }
  OpenGLContextCache____glewBindBuffer
            (*(undefined4 *)(param_1 + 0xeb48),0x8893,
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c0c) + 0x50) + 0x18));
  uVar17 = 0;
  if (param_3[2] != 0) {
    local_a4 = 0;
    do {
      if (((int)local_3c - (int)local_40 >> 3) * -0x55555555 != 0) {
        iVar15 = 0;
        uVar17 = 0;
        do {
          puVar13 = (undefined4 *)((int)local_40 + iVar15);
          Direct3DDevice9Imp__SetVertexAttrib
                    (param_1,*puVar13,puVar13[1],puVar13[2],puVar13[3],puVar13[5]);
          uVar17 = uVar17 + 1;
          iVar15 = iVar15 + 0x18;
          puVar13[5] = puVar13[5] + puVar13[4];
        } while (uVar17 < (uint)(((int)local_3c - (int)local_40 >> 3) * -0x55555555));
      }
      if (DAT_04468c2c == 0) {
        FUN_0400a810("DrawRangeElements_MaxVertices",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x2cfe,
                     "DWORD Direct3DDevice9Imp::OpenGLSide_DrawIndexedPrimitive(DWORD, LPVOID)");
      }
      if (DAT_04468c28 == 0) {
        FUN_0400a810("DrawRangeElements_MaxIndices",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x2cff,
                     "DWORD Direct3DDevice9Imp::OpenGLSide_DrawIndexedPrimitive(DWORD, LPVOID)");
      }
      if (DAT_04468c2c < (int)param_3[6]) {
        iVar15 = param_3[8];
LAB_040a0f94:
        glDrawElements(param_3[7],iVar15,iVar2,param_3[4]);
      }
      else {
        iVar15 = param_3[8];
        if (DAT_04468c28 < iVar15) goto LAB_040a0f94;
        (*DAT_0451eeb8)(param_3[7],param_3[5],param_3[6] + param_3[5],iVar15,iVar2,param_3[4]);
      }
      local_a4 = local_a4 + 1;
      uVar17 = param_3[2];
    } while (local_a4 < uVar17);
  }
  DAT_044dac2c = param_3[5];
  DAT_044dac28 = param_3[6];
  DAT_04408c8c = param_3[4];
  DAT_044dac20 = uVar17;
  DAT_044dac24 = uVar12;
  OpenGLDebugEvent(1,"DrawIndexedPrimitive: instanced glDrawElements/glDrawRangeElements");
  DAT_044dac28 = 0;
  DAT_04408c8c = 0xffffffff;
  (*DAT_0451ecc8)(0);
  (*DAT_0451ecc8)(1);
  (*DAT_0451ecc8)(2);
  (*DAT_0451ecc8)(3);
  (*DAT_0451ecc8)(4);
  (*DAT_0451ecc8)(5);
  (*DAT_0451ecc8)(6);
  (*DAT_0451ecc8)(7);
  (*DAT_0451ecc8)(8);
  (*DAT_0451ecc8)(9);
  (*DAT_0451ecc8)(10);
  (*DAT_0451ecc8)(0xb);
  (*DAT_0451ecc8)(0xc);
  (*DAT_0451ecc8)(0xd);
  (*DAT_0451ecc8)(0xe);
  (*DAT_0451ecc8)(0xf);
  puVar13 = *(undefined4 **)(param_1 + 0xeb48);
  puVar13[0x65] = 0;
  *puVar13 = 0xffffffff;
  puVar13[1] = 0xffffffff;
  puVar13[2] = 0xffffffff;
  puVar13[3] = 0xffffffff;
  puVar13[4] = 0xffffffff;
  puVar13[5] = 0xffffffff;
  puVar13[6] = 0xffffffff;
  puVar13[7] = 0xffffffff;
  puVar13[8] = 0xffffffff;
  puVar13[9] = 0xffffffff;
  puVar13[10] = 0xffffffff;
  puVar13[0xb] = 0xffffffff;
  puVar13[0xc] = 0xffffffff;
  puVar13[0xd] = 0xffffffff;
  puVar13[0xe] = 0xffffffff;
  puVar13[0xf] = 0xffffffff;
  puVar13[0x10] = 0;
  if (local_34 != (int *)0x0) {
    operator_delete(local_34);
  }
  if (local_40 != (void *)0x0) {
    operator_delete(local_40);
  }
LAB_040a0750:
  DAT_04468c38 = 0;
  if (!bVar4) {
    FUN_040972d0(param_1);
  }
  *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) & 0xffffe01c;
  return 0x28;
LAB_040a11b0:
  do {
    (*DAT_0451ecc8)(local_a4);
    local_a4 = local_a4 + 1;
  } while (local_a4 != 0x10);
  goto LAB_040a0e7b;
}

// --- Direct3DDevice9Imp::OpenGLSide_InitThread @0x0409a9b0 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__OpenGLSide_InitThread(int param_1,undefined4 param_2,int *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  byte bVar13;
  undefined4 local_20 [4];
  
  bVar13 = 0;
  piVar5 = (int *)OpenGLWrapperLinux__ctor();
  iVar9 = *piVar5;
  puVar10 = (undefined4 *)*param_3;
  DAT_04408b60 = param_3[2] != -0x80000000;
  *(int **)(param_1 + 0xeb44) = piVar5;
  bVar12 = 0xfffffffe < DAT_04411598;
  DAT_04411598 = DAT_04411598 + 1;
  DAT_0441159c = DAT_0441159c + (uint)bVar12;
  cVar4 = (**(code **)(iVar9 + 8))(piVar5,*puVar10,param_3[1],puVar10 + 1);
  pvVar6 = (void *)*param_3;
  if (pvVar6 != (void *)0x0) {
    FUN_0406ba50((int)pvVar6 + 0x60,*(undefined4 *)((int)pvVar6 + 0x68));
    FUN_0406b8c0((int)pvVar6 + 0x48,*(undefined4 *)((int)pvVar6 + 0x50));
    FUN_0406b730((int)pvVar6 + 0x30,*(undefined4 *)((int)pvVar6 + 0x38));
    operator_delete(pvVar6);
  }
  if (cVar4 != '\0') {
    cVar4 = Direct3DDevice9Imp__DetermineSharedContextCapabilities(param_1);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0xebf4) = 1;
      return 0xc;
    }
    pvVar6 = operator_new(0xa98);
                    /* try { // try from 0409aaa3 to 0409aaa7 has its CatchHandler @ 0409afc4 */
    OpenGLContextCache__OpenGLContextCache(pvVar6,0xffff0000,*(undefined4 *)(param_1 + 0xeb44));
    iVar9 = param_3[1];
    *(void **)(param_1 + 0xeb48) = pvVar6;
    if (iVar9 == 0) {
      FUN_0400a810("cmdBody->DisplayWindow",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x64b,"DWORD Direct3DDevice9Imp::OpenGLSide_InitThread(DWORD, LPVOID)");
    }
    (**(code **)(**(int **)(param_1 + 0xeb44) + 0x2c))(*(int **)(param_1 + 0xeb44),param_3[1]);
    if (DAT_0451c932 != '\0') {
      glHint(0x8534,0x1102 - (uint)(*(char *)(param_1 + 0xeb52) == '\0'));
    }
    iVar9 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar9 + 0x444) != 0x203) {
      glDepthFunc(0x203);
      *(undefined4 *)(iVar9 + 0x444) = 0x203;
    }
    bzero((void *)(param_1 + 0x7a28),0x10);
    *(undefined4 *)(param_1 + 0x7a38) = 0;
    *(undefined4 *)(param_1 + 0x7a3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7a40) = 0x3f800000;
    if (*(char *)(param_1 + 0xeb4c) != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      pvVar6 = operator_new(0xf8c);
                    /* try { // try from 0409ab79 to 0409ab7d has its CatchHandler @ 0409afd6 */
      shader_pch_InitStreamedBufferNames(pvVar6,uVar2);
      *(void **)(param_1 + 0xeb78) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        FUN_0400a810("mUniformBuffers",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x65e,"DWORD Direct3DDevice9Imp::OpenGLSide_InitThread(DWORD, LPVOID)");
      }
      glGetIntegerv(0x8a34,local_20);
      iVar9 = *(int *)(param_1 + 0xeb78);
      uVar2 = *(undefined4 *)(param_1 + 0xeb48);
      *(undefined4 *)(iVar9 + 0x2cc) = local_20[0];
      *(undefined4 *)(iVar9 + 0x2c4) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x2c0);
      *(undefined4 *)(iVar9 + 0x310) = local_20[0];
      *(undefined4 *)(iVar9 + 0x308) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x304);
      *(undefined4 *)(iVar9 + 0x354) = local_20[0];
      *(undefined4 *)(iVar9 + 0x34c) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x348);
      *(undefined4 *)(iVar9 + 0x398) = local_20[0];
      *(undefined4 *)(iVar9 + 0x390) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x38c);
      *(undefined4 *)(iVar9 + 0x3dc) = local_20[0];
      *(undefined4 *)(iVar9 + 0x3d4) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x3d0);
      *(undefined4 *)(iVar9 + 0x420) = local_20[0];
      *(undefined4 *)(iVar9 + 0x418) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x414);
      *(undefined4 *)(iVar9 + 0x464) = local_20[0];
      *(undefined4 *)(iVar9 + 0x45c) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x458);
      *(undefined4 *)(iVar9 + 0x4a8) = local_20[0];
      *(undefined4 *)(iVar9 + 0x4a0) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x49c);
      *(undefined4 *)(iVar9 + 0x4f4) = local_20[0];
      *(undefined4 *)(iVar9 + 0x4ec) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x4e8);
      *(undefined4 *)(iVar9 + 0x538) = local_20[0];
      *(undefined4 *)(iVar9 + 0x530) = uVar2;
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x52c);
      *(undefined4 *)(iVar9 + 0x57c) = local_20[0];
      *(undefined4 *)(iVar9 + 0x574) = uVar2;
      puVar10 = (undefined4 *)(param_1 + 0x8430);
      eON_UniformBufferStreamed__MakeNewBuffer(iVar9 + 0x570);
      iVar9 = *(int *)(param_1 + 0xeb78);
      uVar7 = 0x200;
      puVar11 = (undefined4 *)(iVar9 + 0x92c);
      bVar12 = ((uint)puVar11 & 1) != 0;
      if (bVar12) {
        puVar11 = (undefined4 *)(iVar9 + 0x92d);
        puVar10 = (undefined4 *)(param_1 + 0x8431);
        *(undefined1 *)(iVar9 + 0x92c) = *(undefined1 *)(param_1 + 0x8430);
        uVar7 = 0x1ff;
      }
      if (((uint)puVar11 & 2) != 0) {
        uVar1 = *(undefined2 *)puVar10;
        uVar7 = uVar7 - 2;
        puVar10 = (undefined4 *)((int)puVar10 + 2);
        *(undefined2 *)puVar11 = uVar1;
        puVar11 = (undefined4 *)((int)puVar11 + 2);
      }
      iVar9 = 0;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      }
      if ((uVar7 & 2) != 0) {
        *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
        iVar9 = 2;
      }
      if (bVar12) {
        *(undefined1 *)((int)puVar11 + iVar9) = *(undefined1 *)((int)puVar10 + iVar9);
      }
      fVar3 = DAT_042dbf3c;
      iVar9 = *(int *)(param_1 + 0xeb78);
      *(undefined4 *)(iVar9 + 0x76c) = *(undefined4 *)(param_1 + 0x7a28);
      *(undefined4 *)(iVar9 + 0x770) = *(undefined4 *)(param_1 + 0x7a2c);
      *(undefined4 *)(iVar9 + 0x774) = *(undefined4 *)(param_1 + 0x7a30);
      *(undefined4 *)(iVar9 + 0x778) = *(undefined4 *)(param_1 + 0x7a34);
      iVar9 = *(int *)(param_1 + 0xeb78);
      *(undefined4 *)(iVar9 + 0x77c) = *(undefined4 *)(param_1 + 0x7a40);
      *(undefined4 *)(iVar9 + 0x780) = *(undefined4 *)(param_1 + 0x7a3c);
      *(float *)(iVar9 + 0x784) =
           fVar3 / (*(float *)(param_1 + 0x7a3c) - *(float *)(param_1 + 0x7a38));
      *(int *)(param_1 + 0xc648) = *(int *)(param_1 + 0xc648) + 1;
    }
    Direct3DDevice9Imp__PrepareVertexBufferForDrawQuad(param_1);
    if (DAT_04468c2c == 0) {
      glGetIntegerv(33000,&DAT_04468c2c);
      FUN_0402cd10(0x14,
                   "Recommended max number of vertices addressed in one glDrawRangeElements() call: %d"
                   ,DAT_04468c2c);
      if (DAT_04468c2c == 0) {
        FUN_0400a810("DrawRangeElements_MaxVertices",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x676,"DWORD Direct3DDevice9Imp::OpenGLSide_InitThread(DWORD, LPVOID)");
      }
    }
    if (DAT_04468c28 == 0) {
      glGetIntegerv(0x80e9,&DAT_04468c28);
      FUN_0402cd10(0x14,
                   "Recommended max number of indices addressed in one glDrawRangeElements() call: %d"
                   ,DAT_04468c28);
      if (DAT_04468c28 == 0) {
        FUN_0400a810("DrawRangeElements_MaxIndices",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x67c,"DWORD Direct3DDevice9Imp::OpenGLSide_InitThread(DWORD, LPVOID)");
      }
    }
    shader_pch_PrecompilationStart(*(undefined4 *)(param_1 + 0xeb54));
    ShaderCache__GetCopyProgram
              (*(undefined4 *)(param_1 + 0xeb54),*(undefined4 *)(param_1 + 0xeb48),0);
    eON_SetEvent(*(undefined4 *)(param_1 + 0xecc0));
    return 0xc;
  }
  FUN_0402cd10(0x14,"Warning: failed to create OpenGL context, when initializing Direct3DDevice9!");
  *(undefined1 *)(param_1 + 0xebf4) = 1;
  return 0xc;
}

// --- Direct3DDevice9Imp::OpenGLSide_Present @0x0409d7f0 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__OpenGLSide_Present(int ******param_1)

{
  int ***pppiVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *****pppppiVar5;
  int ******ppppppiVar6;
  int *****pppppiVar7;
  undefined4 *puVar8;
  int *****pppppiVar9;
  int iVar10;
  char *pcVar11;
  int ****ppppiVar12;
  int ******ppppppiVar13;
  int iVar14;
  int ******ppppppiVar15;
  undefined4 uStack_ec;
  int *****local_e8;
  int *****local_e4;
  int *****local_e0;
  int *****local_dc;
  int *****local_d8;
  int *****local_d4;
  int *****pppppiStack_d0;
  int *****local_cc;
  int ***local_c8;
  int ***local_c4;
  int ***local_c0;
  uint local_bc;
  undefined4 local_b8;
  int *****local_ac;
  int *****local_a8;
  int *****local_a4;
  int *****local_a0;
  int *****local_9c;
  int ***local_98;
  int *****local_94;
  int *****local_90;
  int ****local_88;
  int local_84;
  int *****local_80;
  int ***local_7c;
  int *****local_48;
  int *****local_44;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_34;
  int local_30;
  int local_2c;
  int *****local_28;
  int *****local_24;
  int ****local_20 [4];
  
  local_dc = param_1[0x3ad2];
  local_e0 = (int *****)0x409d80d;
  FUN_040c6c50();
  local_dc = (int *****)param_1;
  local_e0 = (int *****)0x409d815;
  Direct3DDevice9Imp__FrameRenderStart();
  local_d8 = (int *****)&local_44;
  local_dc = (int *****)&local_48;
  local_e0 = (int *****)0x409d827;
  FUN_0402d440();
  local_d8 = (int *****)&local_3c;
  local_dc = (int *****)&local_40;
  local_e0 = (int *****)0x409d839;
  FUN_0402d560();
  local_dc = (int *****)0x0;
  local_40 = (int *****)((int)local_40 + (int)local_48);
  local_3c = (int *****)((int)local_3c + (int)local_44);
  local_d4 = (int *****)&local_24;
  local_d8 = (int *****)&local_28;
  local_e0 = (int *****)0x409d85f;
  MainGameWindow_GetDisplayDimensions();
  pppppiVar5 = param_1[0x3194];
  if (pppppiVar5 == (int *****)0x0) {
    pppppiStack_d0 = (int *****)0x42f4680;
    local_d4 = (int *****)0xa9a;
    local_d8 = (int *****)0x42f002c;
    local_dc = (int *****)0x42f3078;
    local_e0 = (int *****)0x409e6db;
    FUN_0400a810();
    pppppiVar5 = param_1[0x3194];
  }
  ppppiVar12 = pppppiVar5[0x25];
  if (ppppiVar12 == (int ****)0x0) {
    pppppiVar9 = param_1[0x3ad2];
    pppppiVar7 = pppppiVar5;
    if (*(char *)((int)pppppiVar9 + 0xa8b) != '\0') {
      local_dc = (int *****)0xc11;
      local_e0 = (int *****)0x409e10d;
      glDisable();
      *(undefined1 *)((int)pppppiVar9 + 0xa8b) = 0;
      pppppiVar7 = param_1[0x3194];
      pppppiVar9 = param_1[0x3ad2];
    }
    local_dc = pppppiVar9 + 0x7e;
    local_c4 = (int ***)0x0;
    local_c8 = (int ***)0x0;
    local_cc = (int *****)0x0;
    pppppiStack_d0 = (int *****)0x0;
    local_d4 = (int *****)0x0;
    local_e0 = (int *****)0x409e15a;
    local_d8 = pppppiVar7;
    puVar8 = (undefined4 *)FramebufferCache__GetFramebufferHash();
    local_d4 = (int *****)*puVar8;
    local_d8 = (int *****)0x8ca8;
    local_dc = param_1[0x3ad2];
    local_e0 = (int *****)0x409e176;
    OpenGLContextCache____glewBindFramebuffer();
    pppppiVar9 = param_1[0x3ad2];
    if (pppppiVar9[0xd4] != (int ****)0x8ce0) {
      local_dc = (int *****)0x8ce0;
      local_e0 = (int *****)0x409e195;
      (*DAT_0451eed4)();
      pppppiVar9[0xd4] = (int ****)0x8ce0;
      pppppiVar9 = param_1[0x3ad2];
    }
    local_d4 = param_1[0x3196];
    local_d8 = (int *****)0x8ca9;
    local_e0 = (int *****)0x409e1bf;
    local_dc = pppppiVar9;
    OpenGLContextCache____glewBindFramebuffer();
    pppppiVar9 = param_1[0x3ad2];
    if ((*(char *)(pppppiVar9 + 0xd3) == '\0') || (pppppiVar9[0xcf] != (int ****)0x8ce0)) {
      local_dc = (int *****)0x8ce0;
      local_e0 = (int *****)0x409e1e7;
      (*DAT_0451eed0)();
      *(undefined1 *)(pppppiVar9 + 0xd3) = 1;
      pppppiVar9[0xcf] = (int ****)0x8ce0;
      pppppiVar9[0xd0] = (int ****)0x0;
      pppppiVar9[0xd1] = (int ****)0x0;
      pppppiVar9[0xd2] = (int ****)0x0;
    }
    pppppiStack_d0 = (int *****)pppppiVar5[0x23];
    local_d4 = (int *****)pppppiVar5[0x22];
    local_b8 = 0x2600;
    local_bc = 0x4000;
    local_c8 = (int ***)0x0;
    local_cc = (int *****)0x0;
    local_d8 = (int *****)0x0;
    local_dc = (int *****)0x0;
    local_e0 = (int *****)0x409e267;
    local_c4 = (int ***)local_d4;
    local_c0 = (int ***)pppppiStack_d0;
    (*DAT_0451e68c)();
    pppppiVar9 = param_1[0x3ad2];
    if (pppppiVar9[0x8d] != (int ****)0x84c0) {
      local_dc = (int *****)0x84c0;
      local_e0 = (int *****)0x409e286;
      (*DAT_0451eeac)();
      pppppiVar9[0x8d] = (int ****)0x84c0;
      pppppiVar9 = param_1[0x3ad2];
    }
    local_d4 = param_1[0x3195];
    local_d8 = (int *****)0xde1;
    local_e0 = (int *****)0x409e2b0;
    local_dc = pppppiVar9;
    FUN_040c6ee0();
    local_84 = 0;
    local_88 = (int ****)0x0;
    ppppppiVar6 = (int ******)pppppiVar5[0x22];
    ppppiVar12 = pppppiVar5[0x23];
    local_80 = (int *****)ppppppiVar6;
    local_7c = (int ***)ppppiVar12;
    if (DAT_0451ca41 != '\0') {
      local_d4 = (int *****)0x1;
      if (ppppppiVar6 == (int ******)((int)local_40 - (int)local_48)) {
        local_d4 = (int *****)(uint)(ppppiVar12 != (int ****)((int)local_3c - (int)local_44));
      }
      local_dc = (int *****)(param_1 + 0x3ae7);
      local_d8 = (int *****)0x0;
      local_e0 = (int *****)0x409e309;
      pppppiVar9 = (int *****)FUN_040e4f70();
      if (pppppiVar9 != (int *****)param_1[0x3ad2][0xae]) {
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e330;
        local_d8 = pppppiVar9;
        local_a0 = param_1[0x3ad2];
        (*DAT_0451e3c4)();
        local_a0[0xae] = (int ****)pppppiVar9;
      }
      ppppiVar12 = pppppiVar5[0x23];
      ppppppiVar6 = (int ******)pppppiVar5[0x22];
    }
    local_bc = 0;
    local_cc = (int *****)ppppppiVar6;
    local_c8 = (int ***)ppppiVar12;
  }
  else {
    if ((int)ppppiVar12[0xa1] < 1) {
      pppppiStack_d0 = (int *****)0x42f46c0;
      local_d4 = (int *****)0x8c;
      local_d8 = (int *****)0x42f1724;
      local_dc = (int *****)0x42f1784;
      local_e0 = (int *****)0x409d8a9;
      FUN_0400a810();
    }
    local_dc = (int *****)ppppiVar12[0x91];
    local_d8 = param_1[0x3ad2];
    local_e0 = (int *****)0x409d8c7;
    local_a4 = local_dc;
    FUN_0406d620();
    local_88 = (int ****)0x0;
    local_84 = 0;
    local_94 = (int *****)0x1;
    local_80 = (int *****)pppppiVar5[0x22];
    local_90 = (int *****)pppppiVar5[0x23];
    if ((int ******)local_80 == (int ******)((int)local_40 - (int)local_48)) {
      local_94 = (int *****)(uint)(local_90 != (int *****)((int)local_3c - (int)local_44));
    }
    local_7c = (int ***)local_90;
    if (DAT_0451ca41 == '\0') {
      local_dc = local_a4;
      local_d8 = local_94;
      local_e0 = (int *****)0x409d93b;
      FUN_0406d530();
    }
    else {
      local_dc = local_a4;
      local_e0 = (int *****)0x409dbb8;
      uVar4 = FUN_0406d510();
      local_d8 = (int *****)(uVar4 & 0xff);
      local_dc = (int *****)(param_1 + 0x3ae7);
      local_d4 = local_94;
      local_e0 = (int *****)0x409dbd7;
      local_d8 = (int *****)FUN_040e4f70();
      if (local_d8 != (int *****)param_1[0x3ad2][0xae]) {
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409dc06;
        local_a4 = param_1[0x3ad2];
        local_a0 = local_d8;
        (*DAT_0451e3c4)();
        local_a4[0xae] = (int ****)local_a0;
      }
    }
    local_bc = (uint)(ppppiVar12[0x86] == (int ***)0x140b || ppppiVar12[0x86] == (int ***)0x1406);
    local_cc = (int *****)pppppiVar5[0x22];
    local_c8 = (int ***)pppppiVar5[0x23];
  }
  pppppiStack_d0 = (int *****)&local_48;
  local_c0 = (int ***)0x0;
  local_c4 = (int ***)0x0;
  local_d8 = (int *****)0x0;
  local_dc = (int *****)param_1;
  local_e0 = (int *****)0x409d9a1;
  local_d4 = &local_88;
  glDrawArrays();
  param_1[0x3a76] = (int *****)0x1;
  local_90 = (int *****)CONCAT31(local_90._1_3_,0 < (int)local_48);
  bVar2 = 0 < (int)local_44;
  if ((0 < (int)local_48) || (bVar2)) {
    ppppppiVar6 = (int ******)param_1[0x3ad2];
    if ((*(char *)(ppppppiVar6 + 0x109) != '\x0f') ||
       (((*(char *)((int)ppppppiVar6 + 0x425) != '\x0f' ||
         (*(char *)((int)ppppppiVar6 + 0x426) != '\x0f')) ||
        (*(char *)((int)ppppppiVar6 + 0x427) != '\x0f')))) {
      pppppiStack_d0 = (int *****)0x1;
      local_d4 = (int *****)0x1;
      local_d8 = (int *****)0x1;
      local_dc = (int *****)0x1;
      local_e0 = (int *****)0x409dca6;
      local_a0 = (int *****)ppppppiVar6;
      glColorMask();
      *(undefined1 *)(local_a0 + 0x109) = 0xf;
      *(undefined1 *)((int)local_a0 + 0x425) = 0xf;
      *(undefined1 *)((int)local_a0 + 0x426) = 0xf;
      *(undefined1 *)((int)local_a0 + 0x427) = 0xf;
      param_1[0x3a81] = (int *****)((uint)param_1[0x3a81] | 4);
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if ((((float)ppppppiVar6[0x12a] != 0.0) || ((float)ppppppiVar6[299] != 0.0)) ||
       (((float)ppppppiVar6[300] != 0.0 || ((float)ppppppiVar6[0x12d] != 0.0)))) {
      pppppiStack_d0 = (int *****)0x0;
      local_d4 = (int *****)0x0;
      local_d8 = (int *****)0x0;
      local_dc = (int *****)0x0;
      local_e0 = (int *****)0x409dd1a;
      local_a0 = (int *****)ppppppiVar6;
      glClearColor();
      local_a0[0x12a] = (int ****)0x0;
      local_a0[299] = (int ****)0x0;
      local_a0[300] = (int ****)0x0;
      local_a0[0x12d] = (int ****)0x0;
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if (*(char *)((int)ppppppiVar6 + 0xa8b) != '\x01') {
      local_dc = (int *****)0xc11;
      local_e0 = (int *****)0x409dd69;
      local_a0 = (int *****)ppppppiVar6;
      glEnable();
      *(undefined1 *)((int)local_a0 + 0xa8b) = 1;
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if ((char)local_90 != '\0') {
      ppppppiVar15 = (int ******)local_48;
      if ((int)local_48 < 0) {
        ppppppiVar15 = (int ******)0x0;
      }
      ppppppiVar13 = (int ******)0x0;
      if (-1 < (int)local_24) {
        ppppppiVar13 = (int ******)local_24;
      }
      if (((ppppppiVar6[0x10d] != (int *****)0x0) || (ppppppiVar6[0x10e] != (int *****)0x0)) ||
         (((int ******)ppppppiVar6[0x10f] != ppppppiVar15 ||
          (ppppppiVar13 != (int ******)ppppppiVar6[0x110])))) {
        local_d8 = (int *****)0x0;
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e5ae;
        local_d4 = (int *****)ppppppiVar15;
        pppppiStack_d0 = (int *****)ppppppiVar13;
        local_a8 = (int *****)ppppppiVar15;
        local_a4 = (int *****)ppppppiVar13;
        local_a0 = (int *****)ppppppiVar6;
        glScissor();
        local_a0[0x10d] = (int ****)0x0;
        local_a0[0x10e] = (int ****)0x0;
        local_a0[0x10f] = (int ****)local_a8;
        local_a0[0x110] = (int ****)local_a4;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e5ec;
      glClear();
      ppppppiVar6 = (int ******)param_1[0x3ad2];
      local_90 = (int *****)(int ******)0x0;
      if (-1 < (int)local_28 - (int)local_40) {
        local_90 = (int *****)((int)local_28 - (int)local_40);
      }
      local_94 = (int *****)(int ******)0x0;
      if (-1 < (int)local_24) {
        local_94 = local_24;
      }
      if ((((local_40 != ppppppiVar6[0x10d]) || (ppppppiVar6[0x10e] != (int *****)0x0)) ||
          (local_90 != ppppppiVar6[0x10f])) || (local_94 != ppppppiVar6[0x110])) {
        local_dc = local_40;
        local_a4 = local_40;
        local_d8 = (int *****)0x0;
        local_e0 = (int *****)0x409e66c;
        local_d4 = local_90;
        pppppiStack_d0 = local_94;
        local_a0 = (int *****)ppppppiVar6;
        glScissor();
        local_a0[0x10d] = (int ****)local_a4;
        local_a0[0x10e] = (int ****)0x0;
        local_a0[0x110] = (int ****)local_94;
        local_a0[0x10f] = (int ****)local_90;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e6ac;
      glClear();
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if (bVar2) {
      ppppppiVar15 = (int ******)local_28;
      if ((int)local_28 < 0) {
        ppppppiVar15 = (int ******)0x0;
      }
      ppppppiVar13 = (int ******)0x0;
      if (-1 < (int)local_44) {
        ppppppiVar13 = (int ******)local_44;
      }
      if (((ppppppiVar6[0x10d] != (int *****)0x0) || (ppppppiVar6[0x10e] != (int *****)0x0)) ||
         ((ppppppiVar15 != (int ******)ppppppiVar6[0x10f] ||
          ((int ******)ppppppiVar6[0x110] != ppppppiVar13)))) {
        local_d8 = (int *****)0x0;
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e46a;
        local_d4 = (int *****)ppppppiVar15;
        pppppiStack_d0 = (int *****)ppppppiVar13;
        local_a4 = (int *****)ppppppiVar13;
        local_a0 = (int *****)ppppppiVar6;
        glScissor();
        local_a0[0x10d] = (int ****)0x0;
        local_a0[0x10e] = (int ****)0x0;
        local_a0[0x10f] = (int ****)ppppppiVar15;
        local_a0[0x110] = (int ****)local_a4;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e4a2;
      glClear();
      pppppiVar5 = param_1[0x3ad2];
      if ((int)local_28 < 0) {
        local_28 = (int *****)0x0;
      }
      local_90 = (int *****)((int)local_24 - (int)local_3c);
      ppppppiVar6 = (int ******)0x0;
      if (-1 < (int)local_90) {
        ppppppiVar6 = (int ******)local_90;
      }
      if (((pppppiVar5[0x10d] != (int ****)0x0) || (local_3c != (int *****)pppppiVar5[0x10e])) ||
         (((int *****)pppppiVar5[0x10f] != local_28 ||
          ((int ******)pppppiVar5[0x110] != ppppppiVar6)))) {
        local_d8 = local_3c;
        local_a0 = local_3c;
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e50e;
        local_d4 = local_28;
        pppppiStack_d0 = (int *****)ppppppiVar6;
        local_a8 = local_28;
        local_a4 = (int *****)ppppppiVar6;
        glScissor();
        pppppiVar5[0x10d] = (int ****)0x0;
        pppppiVar5[0x10e] = (int ****)local_a0;
        pppppiVar5[0x10f] = (int ****)local_a8;
        pppppiVar5[0x110] = (int ****)local_a4;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e548;
      glClear();
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if (*(char *)((int)ppppppiVar6 + 0xa8b) != '\0') {
      local_dc = (int *****)0xc11;
      local_e0 = (int *****)0x409ddae;
      local_a0 = (int *****)ppppppiVar6;
      glDisable();
      *(undefined1 *)((int)local_a0 + 0xa8b) = 0;
    }
    param_1[0x3a76] = (int *****)((int)param_1[0x3a76] + -1);
  }
  else {
    param_1[0x3a76] = (int *****)0x0;
  }
  ppppppiVar6 = (int ******)param_1[0x3a78];
  ppppppiVar15 = &local_dc;
  if ((ppppppiVar6 != (int ******)0x0) &&
     (ppppppiVar15 = &local_dc, param_1[0x3ace] != (int *****)0x0)) {
    local_d4 = local_20;
    local_20[0] = (int ****)0x0;
    local_ac = (int *****)((int)local_40 - (int)local_48);
    local_9c = local_44;
    local_90 = local_3c;
    local_d8 = (int *****)0x0;
    local_e0 = (int *****)0x409de0e;
    local_dc = (int *****)ppppppiVar6;
    (*(code *)(*ppppppiVar6)[0x12])();
    ppppiVar12 = local_20[0];
    local_94 = (int *****)local_20[0][0x22];
    iVar10 = (int)param_1[0x3acf] - (int)param_1[0x3a79];
    iVar14 = (int)param_1[0x3ad0] - (int)param_1[0x3a7a];
    if ((-(int)local_94 < iVar10) &&
       (((iVar14 < (int)local_ac &&
         (local_90 = (int *****)((int)local_90 - (int)local_9c), -(int)local_20[0][0x23] < iVar14))
        && (iVar14 < (int)local_90)))) {
      if (iVar10 < 0) {
        local_88 = (int ****)-iVar10;
        local_38 = local_48;
      }
      else {
        local_88 = (int ****)0x0;
        local_38 = (int *****)((int)local_48 + iVar10);
      }
      local_9c = (int *****)((int)local_94 + iVar10);
      local_80 = local_94;
      ppppppiVar6 = (int ******)local_9c;
      if ((int)local_ac < (int)local_9c) {
        local_80 = (int *****)((int)local_ac - iVar10);
        ppppppiVar6 = (int ******)local_ac;
      }
      local_30 = (int)ppppppiVar6 + (int)local_48;
      if (iVar14 < 0) {
        local_84 = -iVar14;
        local_34 = local_44;
      }
      else {
        local_84 = 0;
        local_34 = (int *****)((int)local_44 + iVar14);
      }
      local_98 = local_20[0][0x23];
      local_94 = (int *****)((int)local_98 + iVar14);
      local_7c = local_98;
      ppppppiVar6 = (int ******)local_94;
      if ((int)local_90 < (int)local_94) {
        local_7c = (int ***)((int)local_90 - iVar14);
        ppppppiVar6 = (int ******)local_90;
      }
      local_2c = (int)local_44 + (int)ppppppiVar6;
      local_90 = param_1[0x3a78];
      if ((int)local_90[0xa1] < 1) {
        local_dc = (int *****)0x42f46c0;
        local_e0 = (int *****)0x8c;
        local_e4 = (int *****)0x42f1724;
        local_e8 = (int *****)0x42f1784;
        uStack_ec = 0x409df56;
        FUN_0400a810();
      }
      local_e4 = param_1[0x3ad2];
      local_e8 = (int *****)local_90[0x91];
      uStack_ec = 0x409df7a;
      local_a0 = local_e8;
      FUN_0406d620();
      if (DAT_0451ca41 == '\0') {
        local_e4 = (int *****)0x0;
        local_e8 = local_a0;
        uStack_ec = 0x409e7b2;
        FUN_0406d530();
      }
      else {
        local_e8 = local_a0;
        uStack_ec = 0x409df95;
        uVar4 = FUN_0406d510();
        local_e0 = (int *****)0x0;
        local_e4 = (int *****)(uVar4 & 0xff);
        local_e8 = (int *****)(param_1 + 0x3ae7);
        uStack_ec = 0x409dfb2;
        local_e4 = (int *****)FUN_040e4f70();
        if (local_e4 != (int *****)param_1[0x3ad2][0xae]) {
          local_e8 = (int *****)0x0;
          uStack_ec = 0x409dfdd;
          local_a4 = param_1[0x3ad2];
          local_a0 = local_e4;
          (*DAT_0451e3c4)();
          local_a4[0xae] = (int ****)local_a0;
        }
      }
      local_cc = (int *****)0x1;
      pppppiStack_d0 = (int *****)0x0;
      local_c8 = (int ***)(uint)((int *****)local_90[0x86] == (int *****)0x140b ||
                                (int *****)local_90[0x86] == (int *****)0x1406);
      local_d4 = (int *****)ppppiVar12[0x23];
      local_d8 = (int *****)ppppiVar12[0x22];
      local_e4 = (int *****)0x0;
      local_e8 = (int *****)param_1;
      local_dc = (int *****)&local_38;
      uStack_ec = 0x409e055;
      local_e0 = &local_88;
      glDrawArrays();
    }
    uStack_ec = 0x409e068;
    local_e8 = (int *****)local_20[0];
    (*(code *)(*local_20[0])[2])();
    ppppppiVar15 = (int ******)&uStack_ec;
  }
  ppppiVar12 = *param_1[0x3ad1];
  *ppppppiVar15 = param_1[0x3ad1];
  pppiVar1 = ppppiVar12[3];
  ppppppiVar15[-1] = (int *****)0x409da06;
  (*(code *)pppiVar1)();
  ppppppiVar15[1] = (int *****)"Present()";
  DAT_04468c38 = 0;
  *ppppppiVar15 = (int *****)0x3;
  ppppppiVar15[-1] = (int *****)0x409da24;
  OpenGLDebugEvent();
  ppppppiVar15[-1] = (int *****)0x409da29;
  uVar4 = glGetError();
  if (uVar4 != 0) {
    iVar14 = 0;
LAB_0409da58:
    do {
      pcVar11 = "GL_STACK_OVERFLOW";
      if (uVar4 != 0x503) {
        if (uVar4 < 0x504) {
          pcVar11 = "GL_INVALID_VALUE";
          if (((uVar4 != 0x501) && (pcVar11 = "GL_INVALID_OPERATION", uVar4 < 0x502)) &&
             (pcVar11 = "GL_INVALID_ENUM", uVar4 != 0x500)) {
LAB_0409da89:
            pcVar11 = "!!!unknown!!!";
          }
        }
        else {
          pcVar11 = "GL_OUT_OF_MEMORY";
          if (((uVar4 != 0x505) && (pcVar11 = "GL_STACK_UNDERFLOW", 0x504 < uVar4)) &&
             ((pcVar11 = "GL_INVALID_FRAMEBUFFER_OPERATION", uVar4 != 0x506 &&
              (pcVar11 = "GL_TABLE_TOO_LARGE", uVar4 != 0x8031)))) goto LAB_0409da89;
        }
      }
      ppppppiVar15[3] = (int *****)uVar4;
      ppppppiVar15[2] = (int *****)pcVar11;
      if (iVar14 == 0) {
        ppppppiVar15[1] = (int *****)"glGetError in Present() shows error %s (%#05x)";
        iVar14 = 1;
        *ppppppiVar15 = (int *****)0xf;
        ppppppiVar15[-1] = (int *****)0x409da4f;
        FUN_0402cd10();
        ppppppiVar15[-1] = (int *****)0x409da54;
        uVar4 = glGetError();
        if (uVar4 == 0) break;
        goto LAB_0409da58;
      }
      ppppppiVar15[1] = (int *****)"    and %s (%#05x)";
      iVar14 = iVar14 + 1;
      *ppppppiVar15 = (int *****)0xf;
      ppppppiVar15[-1] = (int *****)0x409dab3;
      FUN_0402cd10();
      ppppppiVar15[-1] = (int *****)0x409dab8;
      uVar4 = glGetError();
    } while (uVar4 != 0);
  }
  *ppppppiVar15 = (int *****)param_1;
  ppppppiVar15[-1] = (int *****)0x409dac4;
  Direct3DDevice9Imp__FrameRenderEnd();
  param_1[0x3a7c] = (int *****)((int)param_1[0x3a7c] + 1);
  ppppppiVar15[-1] = (int *****)0x409dad0;
  pppppiVar5 = (int *****)eON_timeGetTime();
  param_1[0x3a7d] = pppppiVar5;
  if ((*(char *)(param_1 + 0x3a7e) != '\0') &&
     (uVar4 = (int)pppppiVar5 - (int)param_1[0x3a80], 1000 < uVar4)) {
    pppppiVar5 = param_1[0x3a7c];
    pppppiVar9 = param_1[0x3a7f];
    ppppppiVar15[1] = (int *****)"Fps: %.3f\n";
    *ppppppiVar15 = &local_88;
    *(double *)(ppppppiVar15 + 2) =
         (double)((((float)((uint)((int)pppppiVar5 - (int)pppppiVar9) >> 0x10) * DAT_042dbf34 +
                   (float)((int)pppppiVar5 - (int)pppppiVar9 & 0xffff)) * _DAT_042f73a8) /
                 ((float)(uVar4 >> 0x10) * DAT_042dbf34 + (float)(uVar4 & 0xffff)));
    ppppppiVar15[-1] = (int *****)0x409e3dc;
    sprintf((char *)*ppppppiVar15,(char *)ppppppiVar15[1]);
    *ppppppiVar15 = &local_88;
    ppppppiVar15[-1] = (int *****)0x409e3e4;
    puts((char *)*ppppppiVar15);
    ppppppiVar15[1] = &local_88;
    *ppppppiVar15 = (int *****)0x14;
    ppppppiVar15[-1] = (int *****)0x409e3f4;
    FUN_0402cd10();
    param_1[0x3a80] = param_1[0x3a7d];
    param_1[0x3a7f] = param_1[0x3a7c];
  }
  while (DAT_0441163d != '\0') {
    *ppppppiVar15 = (int *****)0xb44;
    ppppppiVar15[-1] = (int *****)0x409db04;
    glIsEnabled();
    *ppppppiVar15 = (int *****)&DAT_000186a0;
    ppppppiVar15[-1] = (int *****)0x409db10;
    usleep((__useconds_t)*ppppppiVar15);
  }
  *ppppppiVar15 = (int *****)param_1;
  ppppppiVar15[-1] = (int *****)0x409db21;
  Direct3DDevice9Imp__Fence_Tick();
  pppppiVar5 = param_1[0x3af6];
  while (pppppiVar5 != (int *****)0x0) {
    pppppiVar9 = (int *****)pppppiVar5[6];
    ppppppiVar15[1] = (int *****)param_1;
    *ppppppiVar15 = pppppiVar5 + 1;
    ppppppiVar15[-1] = (int *****)0x409db62;
    cVar3 = FUN_040a5960();
    if (cVar3 == '\0') break;
    *ppppppiVar15 = (int *****)(param_1[0x3af6][5] + 1);
    ppppppiVar15[-1] = (int *****)0x409db44;
    Direct3DSurface9Imp__TransferDataFromPBO();
    param_1[0x3af6] = pppppiVar9;
    pppppiVar5 = pppppiVar9;
  }
  *ppppppiVar15 = param_1[0x3b30];
  ppppppiVar15[-1] = (int *****)0x409db74;
  eON_SetEvent();
  if (DAT_04468c30 == '\0') {
    ppppppiVar15[-2] = (int *****)0x409db87;
    FUN_040bc3d0();
    ppppppiVar15[-2] = (int *****)0x409db8c;
    FUN_040bca40();
    ppppppiVar15[-2] = (int *****)0x409db95;
    FUN_040ad550();
    ppppppiVar15[-2] = (int *****)0x409db9a;
    FUN_040b7190();
    DAT_04468c30 = '\x01';
  }
  return 4;
}

// --- Direct3DDevice9Imp::OpenGLSide_SetRenderState @0x04088480 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_SetRenderState(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar3 = _DAT_042dc5a0;
  fVar6 = DAT_042dbf34;
  switch(*param_3) {
  case 7:
    *(undefined4 *)(param_1 + 0x7a50) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 8;
    break;
  case 8:
    iVar2 = param_3[1];
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x7a20) = 0x1b01;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else if (iVar2 == 3) {
      *(undefined4 *)(param_1 + 0x7a20) = 0x1b02;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x7a20) = 0x1b00;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      FUN_0402cd10(0xf,"Unsupported D3DRS_FILLMODE value: %u",iVar2);
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(undefined4 *)(param_1 + 0x7a20) = 0x1b02;
    }
    break;
  case 9:
    *(uint *)(param_1 + 0x7a24) = (param_3[1] != 1) + 0x1d00;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  default:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x1bc8,"DWORD Direct3DDevice9Imp::OpenGLSide_SetRenderState(DWORD, LPVOID)");
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0x7a54) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 8;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x7a4c) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x13:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,"Unsupported D3DRS_SRCBLEND value: %u",param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x79d8) = 0;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x79d8) = 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x79d8) = 0x300;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x79d8) = 0x301;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x79d8) = 0x302;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x79d8) = 0x303;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x79d8) = 0x304;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x79d8) = 0x305;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x79d8) = 0x306;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x79d8) = 0x307;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x79d8) = 0x308;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x79d8) = 0x2ff;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xd:
      *(undefined4 *)(param_1 + 0x79d8) = 0x2fe;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x79d8) = 0x8001;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xf:
      *(undefined4 *)(param_1 + 0x79d8) = 0x8002;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0x14:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,"Unsupported D3DRS_DESTBLEND value: %u",param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x79dc) = 0;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x79dc) = 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x79dc) = 0x300;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x79dc) = 0x301;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x79dc) = 0x302;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x79dc) = 0x303;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x79dc) = 0x304;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x79dc) = 0x305;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x79dc) = 0x306;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x79dc) = 0x307;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x79dc) = 0x308;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x79dc) = 0x8001;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xf:
      *(undefined4 *)(param_1 + 0x79dc) = 0x8002;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0x16:
    iVar2 = param_3[1];
    if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x7ad5) = 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(undefined4 *)(param_1 + 0x7ad8) = 0x405;
    }
    else if (iVar2 == 3) {
      *(undefined1 *)(param_1 + 0x7ad5) = 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(undefined4 *)(param_1 + 0x7ad8) = 0x404;
    }
    else {
      if (iVar2 != 1) {
        FUN_0400a810("cmdBody->Value == D3DCULL_NONE",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x1ac1,"DWORD Direct3DDevice9Imp::OpenGLSide_SetRenderState(DWORD, LPVOID)");
      }
      *(undefined1 *)(param_1 + 0x7ad5) = 0;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0x17:
    switch(param_3[1]) {
    default:
      *(undefined4 *)(param_1 + 0x7a14) = 0x201;
      FUN_0402cd10(0xf,"Unknown value for D3DRS_ZFUNC!");
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x7a14) = 0x200;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x7a14) = 0x201;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x7a14) = 0x202;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x7a14) = 0x203;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x7a14) = 0x204;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x7a14) = 0x205;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x7a14) = 0x206;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x7a14) = 0x207;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0x18:
    fVar6 = ((float)((uint)param_3[1] >> 0x10) * DAT_042dbf34 + (float)(param_3[1] & 0xffff)) /
            _DAT_042dc5a0;
    *(float *)(param_1 + 0x79d4) = fVar6;
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      *(float *)(*(int *)(param_1 + 0xeb78) + 0x788) = fVar6;
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(int *)(param_1 + 0xc648) = *(int *)(param_1 + 0xc648) + 1;
    }
    break;
  case 0x19:
    *(undefined4 *)(param_1 + 0x79d0) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x1a:
    *(undefined4 *)(param_1 + 0x7a58) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x1b:
    *(undefined4 *)(param_1 + 0x7a44) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x22:
    uVar4 = param_3[1];
    *(float *)(param_1 + 0x7a28) =
         (DAT_042dbf34 * 0.0 + (float)(uVar4 >> 0x10 & 0xff)) / _DAT_042dc5a0;
    *(float *)(param_1 + 0x7a2c) = (fVar6 * 0.0 + (float)(uVar4 >> 8 & 0xff)) / fVar3;
    *(float *)(param_1 + 0x7a30) = (fVar6 * 0.0 + (float)(uVar4 & 0xff)) / fVar3;
    *(float *)(param_1 + 0x7a34) = ((float)(uVar4 >> 0x18) + 0.0) / fVar3;
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xeb78);
      *(undefined4 *)(iVar2 + 0x76c) = *(undefined4 *)(param_1 + 0x7a28);
      *(undefined4 *)(iVar2 + 0x770) = *(undefined4 *)(param_1 + 0x7a2c);
      *(undefined4 *)(iVar2 + 0x774) = *(undefined4 *)(param_1 + 0x7a30);
      *(undefined4 *)(iVar2 + 0x778) = *(undefined4 *)(param_1 + 0x7a34);
      *(int *)(param_1 + 0xc648) = *(int *)(param_1 + 0xc648) + 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0x24:
    fVar6 = (float)param_3[1];
    *(float *)(param_1 + 0x7a38) = fVar6;
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(float *)(*(int *)(param_1 + 0xeb78) + 0x784) =
           DAT_042dbf3c / (*(float *)(param_1 + 0x7a3c) - fVar6);
      *(int *)(param_1 + 0xc648) = *(int *)(param_1 + 0xc648) + 1;
    }
    break;
  case 0x25:
    uVar5 = param_3[1];
    *(undefined4 *)(param_1 + 0x7a3c) = uVar5;
    fVar6 = DAT_042dbf3c;
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xeb78);
      *(undefined4 *)(iVar2 + 0x780) = uVar5;
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(float *)(iVar2 + 0x784) =
           fVar6 / (*(float *)(param_1 + 0x7a3c) - *(float *)(param_1 + 0x7a38));
      *(int *)(param_1 + 0xc648) = *(int *)(param_1 + 0xc648) + 1;
    }
    break;
  case 0x26:
    uVar5 = param_3[1];
    *(undefined4 *)(param_1 + 0x7a40) = uVar5;
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0xeb78) + 0x77c) = uVar5;
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(int *)(param_1 + 0xc648) = *(int *)(param_1 + 0xc648) + 1;
    }
    break;
  case 0x28:
    *(undefined4 *)(param_1 + 0x7a78) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x34:
    *(undefined4 *)(param_1 + 0x7a7c) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 8;
    break;
  case 0x35:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(10,"Unrecognized stencil op %u - setting KEEP instead!",param_3[1]);
    case 1:
      uVar5 = 0x1e00;
      break;
    case 2:
      uVar5 = 0;
      break;
    case 3:
      uVar5 = 0x1e01;
      break;
    case 4:
      uVar5 = 0x1e02;
      break;
    case 5:
      uVar5 = 0x1e03;
      break;
    case 6:
      uVar5 = 0x150a;
      break;
    case 7:
      uVar5 = 0x8507;
      break;
    case 8:
      uVar5 = 0x8508;
    }
    *(undefined4 *)(param_1 + 0x79f4) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x36:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(10,"Unrecognized stencil op %u - setting KEEP instead!",param_3[1]);
    case 1:
      uVar5 = 0x1e00;
      break;
    case 2:
      uVar5 = 0;
      break;
    case 3:
      uVar5 = 0x1e01;
      break;
    case 4:
      uVar5 = 0x1e02;
      break;
    case 5:
      uVar5 = 0x1e03;
      break;
    case 6:
      uVar5 = 0x150a;
      break;
    case 7:
      uVar5 = 0x8507;
      break;
    case 8:
      uVar5 = 0x8508;
    }
    *(undefined4 *)(param_1 + 0x79f8) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x37:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(10,"Unrecognized stencil op %u - setting KEEP instead!",param_3[1]);
    case 1:
      uVar5 = 0x1e00;
      break;
    case 2:
      uVar5 = 0;
      break;
    case 3:
      uVar5 = 0x1e01;
      break;
    case 4:
      uVar5 = 0x1e02;
      break;
    case 5:
      uVar5 = 0x1e03;
      break;
    case 6:
      uVar5 = 0x150a;
      break;
    case 7:
      uVar5 = 0x8507;
      break;
    case 8:
      uVar5 = 0x8508;
    }
    *(undefined4 *)(param_1 + 0x79fc) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x38:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,
                   "Unknown value for D3DRS_STENCILFUNC: %u! Setting D3DCMP_ALWAYS as a fallback.",
                   param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(undefined4 *)(param_1 + 0x7a00) = 0x207;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x7a00) = 0x200;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x7a00) = 0x201;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x7a00) = 0x202;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x7a00) = 0x203;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x7a00) = 0x204;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x7a00) = 0x205;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x7a00) = 0x206;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x7a00) = 0x207;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0x39:
    *(undefined4 *)(param_1 + 0x7a80) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x3a:
    *(undefined4 *)(param_1 + 0x7a84) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x3b:
    *(undefined4 *)(param_1 + 0x7a88) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 8;
    break;
  case 0x3c:
    uVar1 = param_3[1];
    *(uint *)(param_1 + 0xc64c) = uVar1;
    fVar3 = _DAT_042dc5a0;
    fVar6 = DAT_042dbf34;
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xeb78);
      *(float *)(iVar2 + 0x64c) =
           (DAT_042dbf34 * 0.0 + (float)(uVar1 >> 0x10 & 0xff)) / _DAT_042dc5a0;
      *(float *)(iVar2 + 0x650) = (fVar6 * 0.0 + (float)(uVar1 >> 8 & 0xff)) / fVar3;
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(float *)(iVar2 + 0x654) = (fVar6 * 0.0 + (float)(uVar1 & 0xff)) / fVar3;
      *(float *)(iVar2 + 0x658) = ((float)(uVar1 >> 0x18) + 0.0) / fVar3;
      *(int *)(param_1 + 0xc644) = *(int *)(param_1 + 0xc644) + 1;
    }
    break;
  case 0x89:
    *(undefined4 *)(param_1 + 0x79cc) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x8b:
    uVar5 = param_3[1];
    *(int *)(param_1 + 0x7a1c) = *(int *)(param_1 + 0x7a1c) + 1;
    *(undefined4 *)(param_1 + 0x7a18) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x98:
    uVar4 = param_3[1];
    *(uint *)(param_1 + 0x7c04) = uVar4;
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      *(int *)(param_1 + 0x7bfc) = *(int *)(param_1 + 0x7bfc) + 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    else {
      *(uint *)(param_1 + 0x7c08) = (uint)((uVar4 & 1) != 0);
      if ((uVar4 >> 1 & 1) != 0) {
        *(int *)(param_1 + 0x7c08) = *(int *)(param_1 + 0x7c08) + 1;
      }
      if ((uVar4 >> 2 & 1) != 0) {
        *(int *)(param_1 + 0x7c08) = *(int *)(param_1 + 0x7c08) + 1;
      }
      if ((uVar4 >> 3 & 1) != 0) {
        *(int *)(param_1 + 0x7c08) = *(int *)(param_1 + 0x7c08) + 1;
      }
      if ((uVar4 >> 4 & 1) != 0) {
        *(int *)(param_1 + 0x7c08) = *(int *)(param_1 + 0x7c08) + 1;
      }
      if ((uVar4 >> 4 & 2) != 0) {
        *(int *)(param_1 + 0x7c08) = *(int *)(param_1 + 0x7c08) + 1;
      }
      *(int *)(param_1 + 0x7c00) = *(int *)(param_1 + 0x7c00) + 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0x9a:
    uVar5 = param_3[1];
    *(undefined1 *)(param_1 + 0x7ad4) = 1;
    *(undefined4 *)(param_1 + 0x7aa4) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x9b:
    *(undefined4 *)(param_1 + 0x7abc) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x9c:
    *(undefined4 *)(param_1 + 0x7aa8) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x9d:
    uVar5 = param_3[1];
    *(undefined1 *)(param_1 + 0x7ad4) = 1;
    *(undefined4 *)(param_1 + 0x7aac) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x9e:
    uVar5 = param_3[1];
    *(undefined1 *)(param_1 + 0x7ad4) = 1;
    *(undefined4 *)(param_1 + 0x7ab0) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0x9f:
    uVar5 = param_3[1];
    *(undefined1 *)(param_1 + 0x7ad4) = 1;
    *(undefined4 *)(param_1 + 0x7ab4) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xa0:
    uVar5 = param_3[1];
    *(undefined1 *)(param_1 + 0x7ad4) = 1;
    *(undefined4 *)(param_1 + 0x7ab8) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xa6:
    *(undefined4 *)(param_1 + 0x7ac0) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xa8:
    *(undefined4 *)(param_1 + 0x7a60) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 4;
    break;
  case 0xab:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,"Unsupported D3DRS_BLENDOP value: %u",param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x79e8) = 0x8006;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x79e8) = 0x800a;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x79e8) = 0x800b;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x79e8) = 0x8007;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x79e8) = 0x8008;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0xae:
    *(undefined4 *)(param_1 + 0x7a5c) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xaf:
    *(undefined4 *)(param_1 + 0x7a94) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xb0:
    *(undefined4 *)(param_1 + 0x7a74) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xb4:
    *(undefined4 *)(param_1 + 0x7a98) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xb6:
    *(undefined4 *)(param_1 + 0x7a9c) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xb7:
    *(undefined4 *)(param_1 + 0x7aa0) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xb9:
    *(undefined4 *)(param_1 + 0x7a8c) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 8;
    break;
  case 0xba:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(10,"Unrecognized stencil op %u - setting KEEP instead!",param_3[1]);
    case 1:
      uVar5 = 0x1e00;
      break;
    case 2:
      uVar5 = 0;
      break;
    case 3:
      uVar5 = 0x1e01;
      break;
    case 4:
      uVar5 = 0x1e02;
      break;
    case 5:
      uVar5 = 0x1e03;
      break;
    case 6:
      uVar5 = 0x150a;
      break;
    case 7:
      uVar5 = 0x8507;
      break;
    case 8:
      uVar5 = 0x8508;
    }
    *(undefined4 *)(param_1 + 0x7a04) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xbb:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(10,"Unrecognized stencil op %u - setting KEEP instead!",param_3[1]);
    case 1:
      uVar5 = 0x1e00;
      break;
    case 2:
      uVar5 = 0;
      break;
    case 3:
      uVar5 = 0x1e01;
      break;
    case 4:
      uVar5 = 0x1e02;
      break;
    case 5:
      uVar5 = 0x1e03;
      break;
    case 6:
      uVar5 = 0x150a;
      break;
    case 7:
      uVar5 = 0x8507;
      break;
    case 8:
      uVar5 = 0x8508;
    }
    *(undefined4 *)(param_1 + 0x7a08) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xbc:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(10,"Unrecognized stencil op %u - setting KEEP instead!",param_3[1]);
    case 1:
      uVar5 = 0x1e00;
      break;
    case 2:
      uVar5 = 0;
      break;
    case 3:
      uVar5 = 0x1e01;
      break;
    case 4:
      uVar5 = 0x1e02;
      break;
    case 5:
      uVar5 = 0x1e03;
      break;
    case 6:
      uVar5 = 0x150a;
      break;
    case 7:
      uVar5 = 0x8507;
      break;
    case 8:
      uVar5 = 0x8508;
    }
    *(undefined4 *)(param_1 + 0x7a0c) = uVar5;
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xbd:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,
                   "Unknown value for D3DRS_CCW_STENCILFUNC: %u! Setting D3DCMP_ALWAYS as a fallback."
                   ,param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      *(undefined4 *)(param_1 + 0x7a10) = 0x207;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x7a10) = 0x200;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x7a10) = 0x201;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x7a10) = 0x202;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x7a10) = 0x203;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x7a10) = 0x204;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x7a10) = 0x205;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x7a10) = 0x206;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x7a10) = 0x207;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0xbe:
    *(undefined4 *)(param_1 + 0x7a64) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 4;
    break;
  case 0xbf:
    *(undefined4 *)(param_1 + 0x7a68) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 4;
    break;
  case 0xc0:
    *(undefined4 *)(param_1 + 0x7a6c) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04) | 4;
    break;
  case 0xc1:
    *(undefined4 *)(param_1 + 0x79f0) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xc2:
    *(undefined4 *)(param_1 + 0x7a70) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xc3:
    *(undefined4 *)(param_1 + 0x7a90) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xce:
    *(undefined4 *)(param_1 + 0x7a48) = param_3[1];
    uVar4 = *(uint *)(param_1 + 0xea04);
    break;
  case 0xcf:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,"Unsupported D3DRS_SRCBLENDALPHA value: %u",param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x79e0) = 0;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x79e0) = 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x79e0) = 0x300;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x79e0) = 0x301;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x79e0) = 0x302;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x79e0) = 0x303;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x79e0) = 0x304;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x79e0) = 0x305;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x79e0) = 0x306;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x79e0) = 0x307;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x79e0) = 0x308;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x79e0) = 0x2ff;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xd:
      *(undefined4 *)(param_1 + 0x79e0) = 0x2fe;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x79e0) = 0x8001;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xf:
      *(undefined4 *)(param_1 + 0x79e0) = 0x8002;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0xd0:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,"Unsupported D3DRS_DESTBLENDALPHA value: %u",param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x79e4) = 0;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x79e4) = 1;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x79e4) = 0x300;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x79e4) = 0x301;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x79e4) = 0x302;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x79e4) = 0x303;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x79e4) = 0x304;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x79e4) = 0x305;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x79e4) = 0x306;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x79e4) = 0x307;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x79e4) = 0x308;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x79e4) = 0x8001;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 0xf:
      *(undefined4 *)(param_1 + 0x79e4) = 0x8002;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
    break;
  case 0xd1:
    switch(param_3[1]) {
    default:
      FUN_0402cd10(0xf,"Unsupported D3DRS_BLENDOPALPHA value: %u",param_3[1]);
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x79ec) = 0x8006;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x79ec) = 0x800a;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x79ec) = 0x800b;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x79ec) = 0x8007;
      uVar4 = *(uint *)(param_1 + 0xea04);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x79ec) = 0x8008;
      uVar4 = *(uint *)(param_1 + 0xea04);
    }
  }
  *(uint *)(param_1 + 0xea04) = uVar4 | 0x20;
  return 8;
}

// --- Direct3DDevice9Imp::OpenGLSide_SetSamplerState @0x0408af90 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_SetSamplerState(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  
  fVar4 = _DAT_042dc5a0;
  fVar3 = DAT_042dbf34;
  bVar7 = (byte)*param_3;
  iVar1 = param_1 + 0x7c60 + *param_3 * 0x38;
  iVar2 = param_3[1];
  switch(iVar2) {
  default:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x21b6,"DWORD Direct3DDevice9Imp::OpenGLSide_SetSamplerState(DWORD, LPVOID)");
    bVar7 = (byte)*param_3;
    break;
  case 1:
  case 2:
  case 3:
    uVar8 = param_3[2];
    iVar6 = 0x812f;
    if (uVar8 != 3) {
      if (uVar8 < 4) {
        iVar6 = 0x8370;
        if (uVar8 != 2) {
LAB_0408b1c5:
          iVar6 = 0x2901;
        }
      }
      else {
        iVar6 = 0x812d;
        if (uVar8 != 4) {
          if (uVar8 != 5) goto LAB_0408b1c5;
          cVar5 = FUN_04021f30();
          iVar6 = (-(uint)(cVar5 == '\0') & 0xffffa1be) + 0x8743;
        }
      }
    }
    *(int *)(iVar1 + (iVar2 + -1) * 4) = iVar6;
    bVar7 = (byte)*param_3;
    break;
  case 4:
    *(float *)(iVar1 + 0x20) =
         (DAT_042dbf34 * 0.0 + (float)*(byte *)((int)param_3 + 10)) / _DAT_042dc5a0;
    *(float *)(iVar1 + 0x24) = (fVar3 * 0.0 + (float)*(byte *)((int)param_3 + 9)) / fVar4;
    *(float *)(iVar1 + 0x28) = (fVar3 * 0.0 + (float)*(byte *)(param_3 + 2)) / fVar4;
    *(float *)(iVar1 + 0x2c) = ((float)*(byte *)((int)param_3 + 0xb) + 0.0) / fVar4;
    break;
  case 5:
    *(uint *)(iVar1 + 0x10) = (param_3[2] != 1) + 0x2600;
    break;
  case 6:
    *(uint *)(iVar1 + 0xc) = (param_3[2] != 1) + 0x2600;
    break;
  case 7:
    uVar8 = 0x2600;
    if (param_3[2] != 1) {
      uVar8 = ~-(uint)(param_3[2] == 0) & 0x2601;
    }
    *(uint *)(iVar1 + 0x14) = uVar8;
    break;
  case 8:
    *(int *)(iVar1 + 0x30) = param_3[2];
    break;
  case 9:
    *(int *)(iVar1 + 0x1c) = param_3[2];
    break;
  case 10:
    *(int *)(iVar1 + 0x18) = param_3[2];
    break;
  case 0xb:
    *(bool *)(iVar1 + 0x34) = param_3[2] != 0;
    bVar7 = (byte)*param_3;
  }
  *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) | 1 << (bVar7 & 0x1f);
  *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 0x800;
  return 0xc;
}

// --- Direct3DDevice9Imp::OpenGLSide_SetTextureStageState @0x0408ab60 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_SetTextureStageState(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  iVar2 = *param_3;
  iVar7 = param_1 + 0x82c0 + iVar2 * 0x1c;
  switch(param_3[1]) {
  case 7:
    *(int *)(iVar7 + 0xc) = param_3[2];
    break;
  case 8:
    *(int *)(iVar7 + 0x10) = param_3[2];
    break;
  case 9:
    *(int *)(iVar7 + 0x14) = param_3[2];
    break;
  case 10:
    *(int *)(iVar7 + 0x18) = param_3[2];
    break;
  default:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x212a,"DWORD Direct3DDevice9Imp::OpenGLSide_SetTextureStageState(DWORD, LPVOID)")
    ;
    break;
  case 0x16:
    iVar4 = param_3[2];
    *(int *)(iVar7 + 0x1c) = iVar4;
    if (*(char *)(param_1 + 0xeb4c) != '\0') {
      *(int *)(*(int *)(param_1 + 0xeb78) + 0xc + (iVar2 + 0x65) * 0x10) = iVar4;
      *(int *)(param_1 + 0xc644) = *(int *)(param_1 + 0xc644) + 1;
    }
    break;
  case 0x17:
    iVar4 = param_3[2];
    *(int *)(iVar7 + 0x20) = iVar4;
    if (*(char *)(param_1 + 0xeb4c) != '\0') {
      *(int *)(*(int *)(param_1 + 0xeb78) + 0x10 + (iVar2 + 0x65) * 0x10) = iVar4;
      *(int *)(param_1 + 0xc644) = *(int *)(param_1 + 0xc644) + 1;
    }
    break;
  case 0x20:
    uVar3 = param_3[2];
    cVar1 = *(char *)(param_1 + 0xeb4c);
    *(uint *)(iVar7 + 0x24) = uVar3;
    fVar6 = _DAT_042dc5a0;
    fVar5 = DAT_042dbf34;
    if (cVar1 != '\0') {
      iVar7 = (iVar2 + 0x5c) * 0x10 + *(int *)(param_1 + 0xeb78);
      *(float *)(iVar7 + 0xc) = (DAT_042dbf34 * 0.0 + (float)(uVar3 >> 0x10 & 0xff)) / _DAT_042dc5a0
      ;
      *(float *)(iVar7 + 0x10) = (fVar5 * 0.0 + (float)(uVar3 >> 8 & 0xff)) / fVar6;
      *(float *)(iVar7 + 0x14) = (fVar5 * 0.0 + (float)(uVar3 & 0xff)) / fVar6;
      *(float *)(iVar7 + 0x18) = ((float)(uVar3 >> 0x18) + 0.0) / fVar6;
      *(int *)(param_1 + 0xc644) = *(int *)(param_1 + 0xc644) + 1;
    }
  }
  return 0xc;
}

// --- Direct3DDevice9Imp::OpenGLSide_SetTransform @0x04086b50 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_SetTransform(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_3[0x10];
  if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x83b0) = *param_3;
    *(undefined4 *)(param_1 + 0x83b4) = param_3[1];
    *(undefined4 *)(param_1 + 0x83b8) = param_3[2];
    *(undefined4 *)(param_1 + 0x83bc) = param_3[3];
    *(undefined4 *)(param_1 + 0x83c0) = param_3[4];
    *(undefined4 *)(param_1 + 0x83c4) = param_3[5];
    *(undefined4 *)(param_1 + 0x83c8) = param_3[6];
    *(undefined4 *)(param_1 + 0x83cc) = param_3[7];
    *(undefined4 *)(param_1 + 0x83d0) = param_3[8];
    *(undefined4 *)(param_1 + 0x83d4) = param_3[9];
    *(undefined4 *)(param_1 + 0x83d8) = param_3[10];
    *(undefined4 *)(param_1 + 0x83dc) = param_3[0xb];
    *(undefined4 *)(param_1 + 0x83e0) = param_3[0xc];
    *(undefined4 *)(param_1 + 0x83e4) = param_3[0xd];
    *(undefined4 *)(param_1 + 0x83e8) = param_3[0xe];
    uVar2 = param_3[0xf];
    *(int *)(param_1 + 0xc630) = *(int *)(param_1 + 0xc630) + 1;
    *(undefined4 *)(param_1 + 0x83ec) = uVar2;
    *(int *)(param_1 + 0x79c4) = *(int *)(param_1 + 0x79c4) + 1;
  }
  else if (iVar3 == 0x100) {
    *(undefined4 *)(param_1 + 0x8630) = *param_3;
    *(undefined4 *)(param_1 + 0x8634) = param_3[1];
    *(undefined4 *)(param_1 + 0x8638) = param_3[2];
    *(undefined4 *)(param_1 + 0x863c) = param_3[3];
    *(undefined4 *)(param_1 + 0x8640) = param_3[4];
    *(undefined4 *)(param_1 + 0x8644) = param_3[5];
    *(undefined4 *)(param_1 + 0x8648) = param_3[6];
    *(undefined4 *)(param_1 + 0x864c) = param_3[7];
    *(undefined4 *)(param_1 + 0x8650) = param_3[8];
    *(undefined4 *)(param_1 + 0x8654) = param_3[9];
    *(undefined4 *)(param_1 + 0x8658) = param_3[10];
    *(undefined4 *)(param_1 + 0x865c) = param_3[0xb];
    *(undefined4 *)(param_1 + 0x8660) = param_3[0xc];
    *(undefined4 *)(param_1 + 0x8664) = param_3[0xd];
    *(undefined4 *)(param_1 + 0x8668) = param_3[0xe];
    uVar2 = param_3[0xf];
    *(int *)(param_1 + 0xc63c) = *(int *)(param_1 + 0xc63c) + 1;
    *(undefined4 *)(param_1 + 0x866c) = uVar2;
  }
  else {
    if (iVar3 == 3) {
      uVar2 = *param_3;
      *(undefined4 *)(param_1 + 0x83f0) = uVar2;
      *(undefined4 *)(param_1 + 0x83f4) = param_3[1];
      *(undefined4 *)(param_1 + 0x83f8) = param_3[2];
      *(undefined4 *)(param_1 + 0x83fc) = param_3[3];
      *(undefined4 *)(param_1 + 0x8400) = param_3[4];
      *(undefined4 *)(param_1 + 0x8404) = param_3[5];
      *(undefined4 *)(param_1 + 0x8408) = param_3[6];
      *(undefined4 *)(param_1 + 0x840c) = param_3[7];
      *(undefined4 *)(param_1 + 0x8410) = param_3[8];
      *(undefined4 *)(param_1 + 0x8414) = param_3[9];
      *(undefined4 *)(param_1 + 0x8418) = param_3[10];
      *(undefined4 *)(param_1 + 0x841c) = param_3[0xb];
      *(undefined4 *)(param_1 + 0x8420) = param_3[0xc];
      *(undefined4 *)(param_1 + 0x8424) = param_3[0xd];
      *(undefined4 *)(param_1 + 0x8428) = param_3[0xe];
      *(undefined4 *)(param_1 + 0x842c) = param_3[0xf];
      if (*(char *)(param_1 + 0xeb4c) != '\0') {
        iVar3 = *(int *)(param_1 + 0xeb78);
        *(undefined4 *)(iVar3 + 0x82c) = uVar2;
        *(undefined4 *)(iVar3 + 0x830) = *(undefined4 *)(param_1 + 0x83f4);
        *(undefined4 *)(iVar3 + 0x834) = *(undefined4 *)(param_1 + 0x83f8);
        *(undefined4 *)(iVar3 + 0x838) = *(undefined4 *)(param_1 + 0x83fc);
        *(undefined4 *)(iVar3 + 0x83c) = *(undefined4 *)(param_1 + 0x8400);
        *(undefined4 *)(iVar3 + 0x840) = *(undefined4 *)(param_1 + 0x8404);
        *(undefined4 *)(iVar3 + 0x844) = *(undefined4 *)(param_1 + 0x8408);
        *(undefined4 *)(iVar3 + 0x848) = *(undefined4 *)(param_1 + 0x840c);
        *(undefined4 *)(iVar3 + 0x84c) = *(undefined4 *)(param_1 + 0x8410);
        *(undefined4 *)(iVar3 + 0x850) = *(undefined4 *)(param_1 + 0x8414);
        *(undefined4 *)(iVar3 + 0x854) = *(undefined4 *)(param_1 + 0x8418);
        *(undefined4 *)(iVar3 + 0x858) = *(undefined4 *)(param_1 + 0x841c);
        *(undefined4 *)(iVar3 + 0x85c) = *(undefined4 *)(param_1 + 0x8420);
        *(undefined4 *)(iVar3 + 0x860) = *(undefined4 *)(param_1 + 0x8424);
        *(undefined4 *)(iVar3 + 0x864) = *(undefined4 *)(param_1 + 0x8428);
        *(undefined4 *)(iVar3 + 0x868) = *(undefined4 *)(param_1 + 0x842c);
      }
      *(int *)(param_1 + 0xc634) = *(int *)(param_1 + 0xc634) + 1;
      return 0x44;
    }
    if (iVar3 - 0x10U < 8) {
      uVar2 = *param_3;
      iVar3 = (iVar3 - 0x10U) * 0x40;
      puVar1 = (undefined4 *)(param_1 + 0x8430 + iVar3);
      *puVar1 = uVar2;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      puVar1[3] = param_3[3];
      puVar1[4] = param_3[4];
      puVar1[5] = param_3[5];
      puVar1[6] = param_3[6];
      puVar1[7] = param_3[7];
      puVar1[8] = param_3[8];
      puVar1[9] = param_3[9];
      puVar1[10] = param_3[10];
      puVar1[0xb] = param_3[0xb];
      puVar1[0xc] = param_3[0xc];
      puVar1[0xd] = param_3[0xd];
      puVar1[0xe] = param_3[0xe];
      puVar1[0xf] = param_3[0xf];
      if (*(char *)(param_1 + 0xeb4c) != '\0') {
        iVar3 = iVar3 + 0x920 + *(int *)(param_1 + 0xeb78);
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
        *(undefined4 *)(iVar3 + 0x10) = puVar1[1];
        *(undefined4 *)(iVar3 + 0x14) = puVar1[2];
        *(undefined4 *)(iVar3 + 0x18) = puVar1[3];
        *(undefined4 *)(iVar3 + 0x1c) = puVar1[4];
        *(undefined4 *)(iVar3 + 0x20) = puVar1[5];
        *(undefined4 *)(iVar3 + 0x24) = puVar1[6];
        *(undefined4 *)(iVar3 + 0x28) = puVar1[7];
        *(undefined4 *)(iVar3 + 0x2c) = puVar1[8];
        *(undefined4 *)(iVar3 + 0x30) = puVar1[9];
        *(undefined4 *)(iVar3 + 0x34) = puVar1[10];
        *(undefined4 *)(iVar3 + 0x38) = puVar1[0xb];
        *(undefined4 *)(iVar3 + 0x3c) = puVar1[0xc];
        *(undefined4 *)(iVar3 + 0x40) = puVar1[0xd];
        *(undefined4 *)(iVar3 + 0x44) = puVar1[0xe];
        *(undefined4 *)(iVar3 + 0x48) = puVar1[0xf];
      }
      *(int *)(param_1 + 0xc638) = *(int *)(param_1 + 0xc638) + 1;
      return 0x44;
    }
    if (iVar3 - 0x101U < 0xff) {
      puVar1 = (undefined4 *)(param_1 + 0x4630 + iVar3 * 0x40);
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      puVar1[3] = param_3[3];
      puVar1[4] = param_3[4];
      puVar1[5] = param_3[5];
      puVar1[6] = param_3[6];
      puVar1[7] = param_3[7];
      puVar1[8] = param_3[8];
      puVar1[9] = param_3[9];
      puVar1[10] = param_3[10];
      puVar1[0xb] = param_3[0xb];
      puVar1[0xc] = param_3[0xc];
      puVar1[0xd] = param_3[0xd];
      puVar1[0xe] = param_3[0xe];
      puVar1[0xf] = param_3[0xf];
      *(int *)(param_1 + 0xc640) = *(int *)(param_1 + 0xc640) + 1;
      return 0x44;
    }
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x17e1,"DWORD Direct3DDevice9Imp::OpenGLSide_SetTransform(DWORD, LPVOID)");
  }
  return 0x44;
}

// --- Direct3DDevice9Imp::OpenGLSide_ShutdownDevice @0x0409e800 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__OpenGLSide_ShutdownDevice(int param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  int aiStack_108 [47];
  int *local_4c [7];
  int *local_30;
  undefined4 local_20 [4];
  
  ppiVar6 = local_4c;
  piVar7 = *(int **)(param_1 + 0xe9e0);
  if (piVar7 != (int *)0x0) {
    aiStack_108[0x2e] = 0x409e81e;
    local_4c[0] = piVar7;
    (**(code **)(*piVar7 + 8))();
    *(undefined4 *)(param_1 + 0xe9e0) = 0;
    ppiVar6 = (int **)(aiStack_108 + 0x2e);
  }
  piVar7 = *(int **)(param_1 + 0xc65c);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e83d;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0xc65c) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0xc660);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e85c;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0xc660) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0xc664);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e87b;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0xc664) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0xc668);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e89a;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0xc668) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0xc66c);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e8b9;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0xc66c) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0xe9d4);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e8d8;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0xe9d4) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8278);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e8f7;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8278) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x827c);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e916;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x827c) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8280);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e935;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8280) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8284);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e954;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8284) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8288);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e973;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8288) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x828c);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e992;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x828c) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8290);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e9b1;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8290) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8294);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e9d0;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8294) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8298);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409e9ef;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8298) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x829c);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ea0e;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x829c) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82a0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ea2d;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82a0) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82a4);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ea4c;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82a4) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82a8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ea6b;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82a8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82ac);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ea8a;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82ac) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82b0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eaa9;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82b0) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82b4);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eac8;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82b4) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82b8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eae7;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82b8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82bc);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eb06;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82bc) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82c0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eb25;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82c0) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x82c4);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eb44;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x82c4) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8178);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eb63;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8178) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8188);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eb82;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8188) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8198);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409eba1;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8198) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x81a8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ebc0;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x81a8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x81b8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ebdf;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x81b8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x81c8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ebfe;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x81c8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x81d8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ec1d;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x81d8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x81e8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ec3c;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x81e8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x81f8);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ec5b;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x81f8) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8208);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ec7a;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8208) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8218);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ec99;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8218) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8228);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ecb8;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8228) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8238);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ecd7;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8238) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8248);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ecf6;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8248) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8258);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ed15;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8258) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x8268);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ed34;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x8268) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x7c0c);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ed53;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x7c0c) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x7c58);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ed72;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x7c58) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  piVar7 = *(int **)(param_1 + 0x7c5c);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    *ppiVar6 = piVar7;
    pcVar1 = *(code **)(iVar5 + 8);
    ppiVar6[-1] = (int *)0x409ed91;
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x7c5c) = 0;
    ppiVar6 = ppiVar6 + -1;
  }
  iVar5 = param_1 + 0xc674;
  iVar4 = *(int *)(param_1 + 0xc67c);
  while (iVar4 != iVar5) {
    ppiVar6[1] = (int *)*(int *)(iVar4 + 0x20);
    *ppiVar6 = (int *)*(undefined4 *)(param_1 + 0xeb48);
    ppiVar6[-1] = (int *)0x409edc5;
    FUN_040c6dd0();
    iVar2 = *(int *)(iVar4 + 0x14);
    *ppiVar6 = (int *)param_1;
    ppiVar6[1] = (int *)iVar2;
    ppiVar6[-1] = (int *)0x409edd4;
    Direct3DDevice9Imp__DeleteTextureInOpenGL();
    *ppiVar6 = (int *)iVar4;
    ppiVar6[-1] = (int *)0x409eddc;
    iVar4 = std::_Rb_tree_increment((_Rb_tree_node_base *)*ppiVar6);
  }
  ppiVar6[1] = (int *)*(int *)(param_1 + 0xc678);
  *ppiVar6 = (int *)(param_1 + 0xc670);
  ppiVar6[-1] = (int *)0x409edfa;
  FUN_040a2eb0();
  *(int *)(param_1 + 0xc67c) = iVar5;
  *(undefined4 *)(param_1 + 0xc678) = 0;
  *(int *)(param_1 + 0xc680) = iVar5;
  *(undefined4 *)(param_1 + 0xc684) = 0;
  *ppiVar6 = (int *)param_1;
  ppiVar6[-1] = (int *)0x409ee22;
  Direct3DDevice9Imp__DeleteVertexBufferForDrawQuad();
  ppiVar6[-1] = (int *)0x409ee27;
  glFinish();
  *ppiVar6 = (int *)param_1;
  ppiVar6[-1] = (int *)0x409ee2f;
  Direct3DDevice9Imp__Fence_Tick();
  iVar5 = *(int *)(param_1 + 0xebd8);
  while (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0x18);
    ppiVar6[1] = (int *)param_1;
    *ppiVar6 = (int *)(iVar5 + 4);
    ppiVar6[-1] = (int *)0x409ee72;
    cVar3 = FUN_040a5960();
    if (cVar3 == '\0') break;
    *ppiVar6 = (int *)(*(int *)(*(int *)(param_1 + 0xebd8) + 0x14) + 4);
    ppiVar6[-1] = (int *)0x409ee54;
    Direct3DSurface9Imp__TransferDataFromPBO();
    *(int *)(param_1 + 0xebd8) = iVar4;
    iVar5 = iVar4;
  }
  if (*(int *)(param_1 + 0xebc4) != 0) {
    ppiVar6[3] = (int *)"DWORD Direct3DDevice9Imp::OpenGLSide_ShutdownDevice(DWORD, LPVOID)";
    ppiVar6[2] = (int *)0x24c;
    ppiVar6[1] = (int *)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
    ;
    *ppiVar6 = (int *)"FenceList == __null";
    ppiVar6[-1] = (int *)0x409eea4;
    FUN_0400a810();
  }
  if (*(int *)(param_1 + 0xebc8) != 0) {
    ppiVar6[3] = (int *)"DWORD Direct3DDevice9Imp::OpenGLSide_ShutdownDevice(DWORD, LPVOID)";
    ppiVar6[2] = (int *)0x24d;
    ppiVar6[1] = (int *)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
    ;
    *ppiVar6 = (int *)"FenceListTail == __null";
    ppiVar6[-1] = (int *)0x409eed2;
    FUN_0400a810();
  }
  iVar5 = *(int *)(param_1 + 0xebd0);
  if (iVar5 != *(int *)(param_1 + 0xebcc)) {
    do {
      *ppiVar6 = (int *)0x1;
      ppiVar6[1] = (int *)(iVar5 + -4);
      ppiVar6[-1] = (int *)0x409eef4;
      (*DAT_0451e974)();
      iVar5 = *(int *)(param_1 + 0xebd0) + -4;
      *(int *)(param_1 + 0xebd0) = iVar5;
    } while (iVar5 != *(int *)(param_1 + 0xebcc));
  }
  iVar5 = *(int *)(param_1 + 0xebe0);
  if (iVar5 != *(int *)(param_1 + 0xebdc)) {
    do {
      local_20[0] = *(undefined4 *)(iVar5 + -4);
      ppiVar6[1] = local_20;
      *ppiVar6 = (int *)0x1;
      ppiVar6[-1] = (int *)0x409ef37;
      (*DAT_0451ed24)();
      iVar5 = *(int *)(param_1 + 0xebe0) + -4;
      *(int *)(param_1 + 0xebe0) = iVar5;
    } while (iVar5 != *(int *)(param_1 + 0xebdc));
  }
  *ppiVar6 = (int *)(param_1 + 0xeb20);
  ppiVar6[-1] = (int *)0x409ef5c;
  pthread_mutex_lock((pthread_mutex_t *)*ppiVar6);
  piVar7 = *(int **)(param_1 + 0xeb1c);
  local_30 = (int *)(param_1 + 0xeb14);
  if (local_30 != piVar7) {
    do {
      *ppiVar6 = (int *)(*piVar7 + 4);
      ppiVar6[-1] = (int *)0x409ef7d;
      direct3dquery9imp_040a5cc0();
      piVar7 = (int *)piVar7[2];
    } while (local_30 != piVar7);
  }
  *ppiVar6 = (int *)(param_1 + 0xeb20);
  ppiVar6[-1] = (int *)0x409ef8d;
  pthread_mutex_unlock((pthread_mutex_t *)*ppiVar6);
  iVar5 = *(int *)(param_1 + 0xeb78);
  if (iVar5 != 0) {
    *ppiVar6 = (int *)iVar5;
    ppiVar6[-1] = (int *)0x409ef9f;
    FUN_040effb0();
    *ppiVar6 = (int *)iVar5;
    ppiVar6[-1] = (int *)0x409efa7;
    operator_delete(*ppiVar6);
    *(undefined4 *)(param_1 + 0xeb78) = 0;
  }
  if (DAT_04468c30 == '\0') {
    ppiVar6[-1] = (int *)0x409efc1;
    FUN_040bc3d0();
    ppiVar6[-1] = (int *)0x409efc6;
    FUN_040bca40();
    ppiVar6[-1] = (int *)0x409efcb;
    FUN_040ad550();
    ppiVar6[-1] = (int *)0x409efd5;
    FUN_040b7190();
    DAT_04468c30 = '\x01';
  }
  return 0;
}

// --- Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture @0x04084810 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_StretchRect_SimpleRenderbuffer2Texture
          (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4c;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  iVar1 = param_3[1];
  iVar7 = *param_3;
  uVar2 = *(undefined4 *)(iVar1 + 0xc4);
  if (param_3[6] == 0) {
    local_44 = param_3[8];
    if (param_3[7] == 0) {
      local_40 = param_3[9];
      if ((local_44 == *(int *)(iVar1 + 0x88)) && (local_4c = 1, local_40 == *(int *)(iVar1 + 0x8c))
         ) goto LAB_04084857;
    }
    else {
      local_40 = param_3[9];
    }
  }
  else {
    local_44 = param_3[8];
    local_40 = param_3[9];
  }
  local_4c = 0;
LAB_04084857:
  local_44 = local_44 - param_3[6];
  local_40 = local_40 - param_3[7];
  if (param_3[4] - param_3[2] != local_44) {
    FUN_0400a810("width == ( cmdBody->SourceRect.right - cmdBody->SourceRect.left )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x13ce,
                 "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                );
  }
  if (param_3[5] - param_3[3] != local_40) {
    FUN_0400a810("height == ( cmdBody->SourceRect.bottom - cmdBody->SourceRect.top )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x13cf,
                 "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                );
  }
  if (*(int *)(iVar7 + 0x70) == *(int *)(iVar1 + 0x70)) {
    puVar4 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,*param_3,0,0,0,0,0);
    uVar2 = *puVar4;
    puVar4 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,param_3[1],0,0,0,0,0);
    OpenGLContextCache____glewBindFramebuffer(*(undefined4 *)(param_1 + 0xeb48),0x8ca9,*puVar4);
    iVar7 = *(int *)(param_1 + 0xeb48);
    if ((*(char *)(iVar7 + 0x34c) == '\0') || (*(int *)(iVar7 + 0x33c) != 0x8ce0)) {
      (*DAT_0451eed0)(0x8ce0);
      *(undefined4 *)(iVar7 + 0x33c) = 0x8ce0;
      *(undefined4 *)(iVar7 + 0x340) = 0;
      *(undefined4 *)(iVar7 + 0x344) = 0;
      *(undefined4 *)(iVar7 + 0x348) = 0;
      *(undefined1 *)(iVar7 + 0x34c) = 1;
      iVar7 = *(int *)(param_1 + 0xeb48);
    }
    OpenGLContextCache____glewBindFramebuffer(iVar7,0x8ca8,uVar2);
    iVar7 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar7 + 0x350) != 0x8ce0) {
      (*DAT_0451eed4)(0x8ce0);
      *(undefined4 *)(iVar7 + 0x350) = 0x8ce0;
      iVar7 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(iVar7 + 0xa8b) != '\0') {
      glDisable(0xc11);
      *(undefined1 *)(iVar7 + 0xa8b) = 0;
    }
    (*DAT_0451e68c)(param_3[2],param_3[3],param_3[4],param_3[5],param_3[6],param_3[7],param_3[8],
                    param_3[9],0x4000,0x2600);
  }
  else if (*(int *)(iVar7 + 0xa0) < 2) {
    FramebufferCache__GetFramebufferHash
              (*(int *)(param_1 + 0xeb48) + 0x1f8,*(undefined4 *)(iVar7 + 0x10),0,0,0,0,0);
    iVar7 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar7 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
    }
    iVar7 = *(int *)(iVar7 + 0x244);
    if (*(int *)(iVar7 + 0xc) != 0xde1) {
      FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x1414,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                  );
    }
    FUN_0406d620(iVar7,*(undefined4 *)(param_1 + 0xeb48));
    iVar7 = *(int *)(param_1 + 0xeb48);
    if ((((*(char *)(iVar7 + 0x424) != '\x0f') || (*(char *)(iVar7 + 0x425) != '\x0f')) ||
        (*(char *)(iVar7 + 0x426) != '\x0f')) || (*(char *)(iVar7 + 0x427) != '\x0f')) {
      glColorMask(1,1,1,1);
      *(undefined1 *)(iVar7 + 0x424) = 0xf;
      *(undefined1 *)(iVar7 + 0x425) = 0xf;
      *(undefined1 *)(iVar7 + 0x426) = 0xf;
      *(undefined1 *)(iVar7 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
    }
    glCopyTexSubImage2D(0xde1,uVar2,param_3[6],param_3[7],param_3[2],param_3[3],local_44,local_40);
  }
  else {
    if (*(char *)(param_1 + 0xeb50) == '\0') {
      FUN_0400a810("mMultisampleSupported",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x13e7,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                  );
    }
    puVar4 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,*param_3,0,0,0,0,0);
    uVar2 = *puVar4;
    local_2c = local_44;
    local_28 = local_40;
    FUN_04084100(param_1,*(undefined4 *)(iVar7 + 0x70),0,&local_2c,&local_28,&local_24,local_20);
    OpenGLContextCache____glewBindFramebuffer(*(undefined4 *)(param_1 + 0xeb48),0x8ca9,local_20[0]);
    iVar5 = *(int *)(param_1 + 0xeb48);
    if ((*(char *)(iVar5 + 0x34c) == '\0') || (*(int *)(iVar5 + 0x33c) != 0x8ce0)) {
      (*DAT_0451eed0)(0x8ce0);
      *(undefined4 *)(iVar5 + 0x33c) = 0x8ce0;
      *(undefined4 *)(iVar5 + 0x340) = 0;
      *(undefined4 *)(iVar5 + 0x344) = 0;
      *(undefined4 *)(iVar5 + 0x348) = 0;
      *(undefined1 *)(iVar5 + 0x34c) = 1;
      iVar5 = *(int *)(param_1 + 0xeb48);
    }
    OpenGLContextCache____glewBindFramebuffer(iVar5,0x8ca8,uVar2);
    iVar5 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar5 + 0x350) != 0x8ce0) {
      (*DAT_0451eed4)(0x8ce0);
      *(undefined4 *)(iVar5 + 0x350) = 0x8ce0;
      iVar5 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(iVar5 + 0xa8b) != '\0') {
      glDisable(0xc11);
      *(undefined1 *)(iVar5 + 0xa8b) = 0;
    }
    (*DAT_0451e68c)(param_3[2],param_3[3],param_3[4],param_3[5],0,0,local_44,local_40,0x4000,0x2600)
    ;
    iVar5 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar5 + 0x234) != 0x84c0) {
      (*DAT_0451eeac)(0x84c0);
      *(undefined4 *)(iVar5 + 0x234) = 0x84c0;
      iVar5 = *(int *)(param_1 + 0xeb48);
    }
    FUN_040c6ee0(iVar5,0xde1,local_24);
    if (DAT_0451ca41 != '\0') {
      iVar6 = FUN_040e4f70(param_1 + 0xeb9c,0,0);
      iVar5 = *(int *)(param_1 + 0xeb48);
      if (iVar6 != *(int *)(iVar5 + 0x2b8)) {
        (*DAT_0451e3c4)(0,iVar6);
        *(int *)(iVar5 + 0x2b8) = iVar6;
      }
    }
    local_3c = 0;
    local_38 = 0;
    if ((*(int *)(iVar7 + 0xa8) == 0x140b) || (*(int *)(iVar7 + 0xa8) == 0x1406)) {
      iVar7 = param_3[1];
      bVar3 = *(int *)(iVar7 + 0xa8) != 0x140b && *(int *)(iVar7 + 0xa8) != 0x1406;
    }
    else {
      bVar3 = false;
      iVar7 = param_3[1];
    }
    local_34 = local_44;
    local_30 = local_40;
    glDrawArrays(param_1,iVar7,&local_3c,param_3 + 6,local_2c,local_28,1,0,bVar3);
  }
  direct3dsurface9imp_040b0a40(iVar1 + 4,local_4c,param_3 + 6);
  (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
  (**(code **)(*(int *)param_3[1] + 8))((int *)param_3[1]);
  return 0x2c;
}

// --- Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture @0x04083a10 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_StretchRect_SimpleTexture2Texture
          (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  bVar11 = false;
  iVar1 = param_3[1];
  iVar2 = *param_3;
  iVar3 = param_3[8];
  iVar4 = param_3[6];
  iVar5 = param_3[9];
  iVar9 = param_3[7];
  if (((iVar4 == 0) && (bVar11 = false, iVar9 == 0)) &&
     (bVar11 = false, iVar3 == *(int *)(iVar1 + 0x88))) {
    bVar11 = iVar5 == *(int *)(iVar1 + 0x8c);
  }
  iVar6 = *(int *)(iVar1 + 0xc4);
  if (iVar6 == 0) {
    iVar3 = *(int *)(iVar2 + 0x94);
    iVar4 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar3 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      iVar5 = *(int *)(iVar3 + 0x244);
      iVar9 = *(int *)(iVar5 + 0xc);
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x244);
      iVar9 = *(int *)(iVar5 + 0xc);
    }
    if (iVar9 != 0xde1) {
      FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x131a,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture(DWORD, LPVOID)"
                  );
    }
    FUN_0406d470(iVar5);
    FUN_0406d620(iVar5,*(undefined4 *)(param_1 + 0xeb48));
    if (DAT_0451ca41 == '\0') {
      FUN_0406d530(iVar5,0);
    }
    else {
      uVar8 = FUN_0406d510(iVar5);
      iVar9 = FUN_040e4f70(param_1 + 0xeb9c,uVar8,0);
      iVar5 = *(int *)(param_1 + 0xeb48);
      if (iVar9 != *(int *)(iVar5 + 0x2b8)) {
        (*DAT_0451e3c4)(0,iVar9);
        *(int *)(iVar5 + 0x2b8) = iVar9;
      }
    }
    if ((*(int *)(iVar3 + 0x218) == 0x140b) || (bVar10 = false, *(int *)(iVar3 + 0x218) == 0x1406))
    {
      iVar3 = *(int *)(iVar4 + 0x218);
      bVar10 = iVar3 != 0x140b && iVar3 != 0x1406;
    }
    glDrawArrays(param_1,param_3[1],param_3 + 2,param_3 + 6,*(undefined4 *)(iVar2 + 0x88),
                 *(undefined4 *)(iVar2 + 0x8c),1,0,bVar10);
  }
  else {
    if (iVar6 < 1) {
      FUN_0400a810("surfaceLevel > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x1328,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture(DWORD, LPVOID)"
                  );
    }
    FramebufferCache__GetFramebufferHash
              (*(int *)(param_1 + 0xeb48) + 0x1f8,*(undefined4 *)(iVar2 + 0x10),0,0,0,0,0);
    iVar2 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar2 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      iVar2 = *(int *)(iVar2 + 0x244);
      iVar7 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x244);
      iVar7 = *(int *)(iVar2 + 0xc);
    }
    if (iVar7 != 0xde1) {
      FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x132b,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture(DWORD, LPVOID)"
                  );
    }
    FUN_0406d620(iVar2,*(undefined4 *)(param_1 + 0xeb48));
    iVar2 = *(int *)(param_1 + 0xeb48);
    if (((*(char *)(iVar2 + 0x424) != '\x0f') || (*(char *)(iVar2 + 0x425) != '\x0f')) ||
       ((*(char *)(iVar2 + 0x426) != '\x0f' || (*(char *)(iVar2 + 0x427) != '\x0f')))) {
      glColorMask(1,1,1,1);
      *(undefined1 *)(iVar2 + 0x424) = 0xf;
      *(undefined1 *)(iVar2 + 0x425) = 0xf;
      *(undefined1 *)(iVar2 + 0x426) = 0xf;
      *(undefined1 *)(iVar2 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
    }
    glCopyTexSubImage2D(0xde1,iVar6,param_3[6],param_3[7],param_3[2],param_3[3],iVar3 - iVar4,
                        iVar5 - iVar9);
  }
  direct3dsurface9imp_040b0a40(iVar1 + 4,bVar11,param_3 + 6);
  (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
  (**(code **)(*(int *)param_3[1] + 8))((int *)param_3[1]);
  return 0x2c;
}

// --- Direct3DDevice9Imp::OpenGLSide_StretchRect_Texture2TextureOrRenderbuffer @0x04083ea0 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_StretchRect_Texture2TextureOrRenderbuffer
          (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  
  bVar8 = false;
  iVar1 = param_3[10];
  iVar2 = param_3[1];
  iVar3 = *param_3;
  if (((param_3[6] == 0) && (param_3[7] == 0)) && (param_3[8] == *(int *)(iVar2 + 0x88))) {
    bVar8 = param_3[9] == *(int *)(iVar2 + 0x8c);
  }
  iVar4 = *(int *)(iVar3 + 0x94);
  if (*(int *)(iVar4 + 0x284) < 1) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar7 = *(int *)(iVar4 + 0x244);
  if (*(int *)(iVar7 + 0xc) != 0xde1) {
    FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x134a,
                 "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_Texture2TextureOrRenderbuffer(DWORD, LPVOID)"
                );
  }
  FUN_0406d470(iVar7);
  FUN_0406d620(iVar7,*(undefined4 *)(param_1 + 0xeb48));
  if (DAT_0451ca41 == '\0') {
    FUN_0406d530(iVar7,iVar1 != 1);
  }
  else {
    uVar5 = FUN_0406d510(iVar7);
    iVar7 = FUN_040e4f70(param_1 + 0xeb9c,uVar5,iVar1 != 1);
    iVar1 = *(int *)(param_1 + 0xeb48);
    if (iVar7 != *(int *)(iVar1 + 0x2b8)) {
      (*DAT_0451e3c4)(0,iVar7);
      *(int *)(iVar1 + 0x2b8) = iVar7;
    }
  }
  if ((*(int *)(iVar4 + 0x218) == 0x140b) || (bVar6 = false, *(int *)(iVar4 + 0x218) == 0x1406)) {
    bVar6 = *(int *)(iVar2 + 0xa8) != 0x140b && *(int *)(iVar2 + 0xa8) != 0x1406;
  }
  glDrawArrays(param_1,*(undefined4 *)(iVar2 + 0x10),param_3 + 2,param_3 + 6,
               *(undefined4 *)(iVar3 + 0x88),*(undefined4 *)(iVar3 + 0x8c),
               *(int *)(iVar2 + 0x90) == 2,0,bVar6);
  direct3dsurface9imp_040b0a40(iVar2 + 4,bVar8,param_3 + 6);
  (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
  (**(code **)(*(int *)param_3[1] + 8))((int *)param_3[1]);
  return 0x2c;
}

// --- Direct3DDevice9Imp::OpenGLThreadRunloop @0x04080890 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__OpenGLThreadRunloop(int param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_FS_OFFSET;
  undefined1 local_3c [16];
  int local_2c;
  char local_25;
  uint local_24;
  int local_20;
  
  piVar7 = (int *)local_3c;
  local_25 = '\0';
  *(undefined4 *)(param_1 + 0xebf8) =
       *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130) + 0xc);
  do {
    *piVar7 = param_1 + 0xec00;
    piVar7[-1] = 0x40808c3;
    iVar4 = D3D9CommandQueue__TryExecuteNextCommand();
    iVar6 = 0;
    if (*(int *)(param_1 + 0xebe8) != 0) {
      if (*(int *)(param_1 + 0xebe8) == 1) {
        iVar6 = *(int *)(param_1 + 0xebec);
        local_24 = *(uint *)(iVar6 + 0x24);
        local_20 = *(int *)(iVar6 + 0x28);
        iVar5 = (local_20 - *(int *)(param_1 + 0xec84)) -
                (uint)(local_24 < *(uint *)(param_1 + 0xec80));
        if ((-1 < iVar5) && ((0 < iVar5 || (local_24 != *(uint *)(param_1 + 0xec80))))) {
          do {
            *piVar7 = param_1 + 0xec00;
            piVar7[-1] = 0x4080a31;
            iVar6 = D3D9CommandQueue__TryExecuteNextCommand();
            if (iVar6 == 0) {
              piVar7[3] = (int)"void Direct3DDevice9Imp::FlushUntilCommand(ULONGLONG)";
              piVar7[2] = 0x4c8;
              piVar7[1] = (int)
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
              ;
              *piVar7 = (int)"commandExecuted";
              piVar7[-1] = 0x4080b14;
              FUN_0400a810();
            }
          } while (((local_20 != *(int *)(param_1 + 0xec84) ||
                     local_24 != *(uint *)(param_1 + 0xec80)) &&
                   (*(char *)(param_1 + 0xebf4) == '\0')) && (DAT_0441163c == '\0'));
          goto LAB_04080a68;
        }
LAB_04080a6e:
        *piVar7 = iVar6;
        piVar7[-1] = 0x4080a76;
        Direct3DQuery9Imp__TestQuery();
      }
      else {
        if (*(int *)(param_1 + 0xebe8) == 2) {
LAB_04080a68:
          iVar6 = *(int *)(param_1 + 0xebec);
          goto LAB_04080a6e;
        }
        piVar7[3] = (int)"bool Direct3DDevice9Imp::ExecuteOutOfBoundsCommand()";
        piVar7[2] = 0x4de;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"false";
        piVar7[-1] = 0x408090d;
        FUN_0400a810();
      }
      *(undefined4 *)(param_1 + 0xebe8) = 0;
      *piVar7 = *(undefined4 *)(param_1 + 0xebf0);
      piVar7[-1] = 0x4080925;
      eON_SetEvent();
      iVar6 = 1;
      piVar7 = piVar7 + -1;
    }
    if (iVar4 == 0) {
      piVar7[1] = *(undefined4 *)(param_1 + 0xeb48);
      *piVar7 = *(undefined4 *)(param_1 + 0xeb54);
      piVar7[-1] = 0x4080a9b;
      local_2c = iVar6;
      cVar3 = ShaderCache__PrecompileNextShaderOrProgramInTable();
      if (cVar3 == '\0' && local_2c == 0) {
        if (local_25 == '\0') {
          piVar7[1] = 1000;
          *piVar7 = *(undefined4 *)(param_1 + 0xec1c);
          piVar7[-1] = 0x4080b36;
          iVar4 = eON_WaitForSingleObject();
          piVar7 = piVar7 + -2;
          local_25 = iVar4 == 0x102;
        }
        else {
          piVar7[1] = (int)
                      "No OpenGL commands for full second. Flushing GL to make sure it hasn\'t deadlocked."
          ;
          *piVar7 = 0x14;
          piVar7[-1] = 0x4080ac3;
          FUN_0402cd10();
          piVar7[-1] = 0x4080ac8;
          glFlush();
          piVar7[1] = 0xffffffff;
          *piVar7 = *(undefined4 *)(param_1 + 0xec1c);
          piVar7[-1] = 0x4080ade;
          eON_WaitForSingleObject();
          local_25 = '\0';
          piVar7 = piVar7 + -2;
        }
      }
    }
    if ((*(char *)(param_1 + 0xebf4) != '\0') || (DAT_0441163c != '\0')) {
      iVar4 = *(int *)(param_1 + 0xeb54);
      if (iVar4 == 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::OpenGLThreadRunloop()";
        piVar7[2] = 0x514;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mShaderCache";
        piVar7[-1] = 0x4080b84;
        FUN_0400a810();
        iVar4 = *(int *)(param_1 + 0xeb54);
      }
      *piVar7 = iVar4;
      piVar7[-1] = 0x4080961;
      FUN_040e55f0();
      if (*(int *)(param_1 + 0xeb48) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0xeb48) + 0x224);
        iVar6 = **(int **)(param_1 + 0xeb44);
        *piVar7 = (int)*(int **)(param_1 + 0xeb44);
        piVar7[1] = iVar4;
        pcVar1 = *(code **)(iVar6 + 0x18);
        piVar7[-1] = 0x4080983;
        (*pcVar1)();
        iVar4 = *(int *)(param_1 + 0xeb48);
        if (iVar4 != 0) {
          *piVar7 = iVar4;
          piVar7[-1] = 0x4080995;
          OpenGLContextCache___OpenGLContextCache();
          *piVar7 = iVar4;
          piVar7[-1] = 0x408099d;
          operator_delete((void *)*piVar7);
        }
        *(undefined4 *)(param_1 + 0xeb48) = 0;
      }
      piVar2 = *(int **)(param_1 + 0xeb44);
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
        *piVar7 = (int)piVar2;
        pcVar1 = *(code **)(iVar4 + 4);
        piVar7[-1] = 0x40809b9;
        (*pcVar1)();
        *(undefined4 *)(param_1 + 0xeb44) = 0;
      }
      *piVar7 = *(undefined4 *)(param_1 + 0xecc0);
      piVar7[-1] = 0x40809d1;
      eON_SetEvent();
      if (DAT_0441163c != '\0') {
        piVar7[-1] = *(undefined4 *)(param_1 + 0xebf8);
        piVar7[-2] = 0x40809eb;
        eON_SuspendThread();
      }
      return;
    }
  } while( true );
}

// --- Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw @0x040a0090 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_040a0090(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *local_4c;
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar11 = *(int *)(param_1 + 0xe9d4);
  local_4c = (char *)(*(int *)(param_1 + 0xe9ec) + 9);
  cVar2 = *(char *)(*(int *)(param_1 + 0xe9ec) + 9);
  pcVar9 = local_4c;
  while (cVar2 != -1) {
    if (cVar2 == '\0') {
      if (pcVar9[1] == '\0') goto LAB_040a00f5;
    }
    else if (cVar2 == '\t') {
      if ((pcVar9[1] == '\0') ||
         (FUN_0400a810("positionInfo->UsageIndex == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                       ,0x2943,
                       "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                      ), *pcVar9 != -1)) goto LAB_040a00f5;
      break;
    }
    pcVar9 = pcVar9 + 2;
    cVar2 = *pcVar9;
  }
  FUN_0400a810("positionInfo->Usage != 0xFF",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
               ,0x2948,
               "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
              );
LAB_040a00f5:
  local_48 = 0;
  bVar4 = false;
  do {
    if (local_48 == 0) {
      iVar6 = *(int *)(iVar11 + 0x24);
      iVar12 = (*(int *)(iVar11 + 0x28) - iVar6 >> 3) * -0x55555555;
      if (iVar12 != 0) {
        iVar10 = 0;
        iVar8 = 0;
        do {
          cVar2 = *(char *)(iVar6 + iVar10);
          if (cVar2 == '\0') {
            if (((char *)(iVar6 + iVar10))[1] == '\0') goto LAB_040a0190;
          }
          else if (cVar2 == '\t') goto LAB_040a0190;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0x18;
        } while (iVar8 != iVar12);
      }
      (*DAT_0451ecc8)(0);
LAB_040a02b7:
      FUN_0400a810("i",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x2976,
                   "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                  );
LAB_040a02db:
      (*DAT_0451eb9c)(local_48,0,0,0,0);
    }
    else {
      pcVar5 = local_4c + 2;
      if (local_4c != pcVar9) {
        pcVar5 = local_4c;
      }
      if (*pcVar5 == -1) goto LAB_040a0508;
      iVar8 = -1;
      iVar6 = *(int *)(iVar11 + 0x24);
      iVar12 = (*(int *)(iVar11 + 0x28) - iVar6 >> 3) * -0x55555555;
      if (iVar12 != 0) {
        iVar10 = 0;
        iVar8 = 0;
        do {
          if ((*pcVar5 == *(char *)(iVar6 + iVar10)) && (((char *)(iVar6 + iVar10))[1] == pcVar5[1])
             ) goto LAB_040a0185;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0x18;
        } while (iVar12 != iVar8);
        iVar8 = -1;
      }
LAB_040a0185:
      local_4c = pcVar5 + 2;
LAB_040a0190:
      if (iVar8 == -1) {
        (*DAT_0451ecc8)(local_48);
        if (local_48 == 0) goto LAB_040a02b7;
        goto LAB_040a02db;
      }
      iVar6 = iVar6 + iVar8 * 0x18;
      if (*(int *)(iVar6 + 4) == 0) {
        (*DAT_0451ecc0)();
        OpenGLContextCache____glewBindBuffer
                  (*(undefined4 *)(param_1 + 0xeb48),0x8892,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8178) + 0x54) + 0x18));
        iVar12 = *(int *)(param_1 + 0x8180);
        iVar8 = param_2 * iVar12 + *(int *)(param_1 + 0x817c);
        (&DAT_044dac40)[local_48] = iVar8;
        (*DAT_0451eb7c)(local_48,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0xc),
                        *(undefined1 *)(iVar6 + 0x14),iVar12,iVar8 + *(int *)(iVar6 + 8));
        bVar4 = true;
      }
      else {
        (*DAT_0451ecc8)(local_48);
        local_38 = *(int *)(iVar6 + 0x10);
        iVar12 = *(int *)(iVar6 + 4);
        local_34 = *(int *)(iVar6 + 0xc);
        local_3c = local_48;
        local_30 = (uint)*(byte *)(iVar6 + 0x14);
        piVar3 = (int *)*param_4;
        local_2c = *(int *)(param_1 + 0x10 + (iVar12 + 0x817) * 0x10);
        iVar8 = param_4[1] - (int)piVar3 >> 3;
        if (iVar8 == 0) {
LAB_040a0392:
          if (*(int *)(param_1 + 0x14 + (iVar12 + 0x817) * 0x10) != -0x7fffffff) {
            FUN_0400a810("mOGLDeviceState.StreamSources[a.Stream].Divider == (UINT) ( (2<<30) | 1 )"
                         ,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                         ,0x29a1,
                         "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                        );
            iVar12 = *(int *)(iVar6 + 4);
          }
          local_24 = iVar12;
          local_20 = eON_Buffer__GetOpenGLSideDataRegion
                               (*(undefined4 *)
                                 (*(int *)(param_1 + 8 + (iVar12 + 0x817) * 0x10) + 0x54),
                                *(undefined4 *)(param_1 + 0xeb48));
          piVar3 = (int *)param_4[1];
          if (piVar3 == (int *)param_4[2]) {
            FUN_040a36c0(param_4,piVar3,&local_24);
          }
          else {
            if (piVar3 != (int *)0x0) {
              *piVar3 = local_24;
              piVar3[1] = local_20;
            }
            param_4[1] = piVar3 + 2;
          }
          iVar12 = *(int *)(iVar6 + 4);
          iVar8 = param_2 * local_2c + local_20;
        }
        else {
          iVar7 = 0;
          iVar10 = *piVar3;
          piVar1 = piVar3;
          while (iVar12 != iVar10) {
            iVar7 = iVar7 + 1;
            if (iVar7 == iVar8) goto LAB_040a0392;
            piVar1 = piVar3 + iVar7 * 2;
            iVar10 = *piVar1;
          }
          iVar8 = param_2 * local_2c + piVar1[1];
          if (iVar8 == 0) goto LAB_040a0392;
        }
        local_28 = iVar8 + *(int *)(iVar6 + 8) + *(int *)(param_1 + 0xc + (iVar12 + 0x817) * 0x10);
        piVar3 = *(int **)(param_3 + 4);
        if (piVar3 == *(int **)(param_3 + 8)) {
          FUN_040a3870(param_3,piVar3,&local_3c);
        }
        else {
          if (piVar3 != (int *)0x0) {
            *piVar3 = local_3c;
            piVar3[1] = local_38;
            piVar3[2] = local_34;
            piVar3[3] = local_30;
            piVar3[4] = local_2c;
            piVar3[5] = local_28;
          }
          *(int **)(param_3 + 4) = piVar3 + 6;
        }
      }
    }
    local_48 = local_48 + 1;
  } while (local_48 != 0x10);
LAB_040a023a:
  if (!bVar4) {
    FUN_0400a810("zeroSourceUsed",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x29b5,
                 "void Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw(INT, std::vector<Direct3DDevice9Imp::InstanceDataUpdateInfo>&, std::vector<Direct3DDevice9Imp::InstancedStreamSource>&)"
                );
  }
  return;
LAB_040a0508:
  do {
    iVar11 = local_48 + 1;
    (*DAT_0451ecc8)(local_48);
    local_48 = iVar11;
  } while (iVar11 != 0x10);
  goto LAB_040a023a;
}

// --- Direct3DDevice9Imp::PrepareVertexBufferForDrawQuad @0x04080ed0 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__PrepareVertexBufferForDrawQuad(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  cVar1 = DAT_0451ca88;
  cVar4 = '\x01';
  if (DAT_0451ca55 == '\0') {
    cVar4 = *(char *)(param_1 + 0xeb4d);
  }
  if (*(int *)(param_1 + 0xe9a0) != 0) {
    FUN_0400a810("!mOGLDeviceState.DrawQuadBufferID",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x8e3,"void Direct3DDevice9Imp::PrepareVertexBufferForDrawQuad()");
  }
  uVar2 = FUN_040ba100(param_1);
  *(undefined4 *)(param_1 + 0xe9a0) = uVar2;
  OpenGLContextCache____glewBindBuffer(*(undefined4 *)(param_1 + 0xeb48),0x8892,uVar2);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0xe9a4) = 0;
    *(undefined4 *)(param_1 + 0xe9a8) = 0;
    if (cVar1 != '\0') {
      (*DAT_0451e894)(0x8892,0xff0,0,0xc2);
      iVar3 = (*DAT_0451e520)(0x8892,0,0xff0,0xc2);
      *(int *)(param_1 + 0xe9a8) = iVar3;
      if (iVar3 != 0) {
        return;
      }
      FUN_0400a810("mOGLDeviceState.DrawQuadBufferPtr",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x8f6,"void Direct3DDevice9Imp::PrepareVertexBufferForDrawQuad()");
      return;
    }
  }
  (*DAT_0451ed30)(0x8892,0xff0,0,0x88e0);
  return;
}

// --- Direct3DDevice9Imp::Present @0x04078620 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__Present(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 local_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar8 = local_4c;
  iVar5 = param_1[3];
  local_24 = iVar5;
  if (iVar5 != 0) {
    piVar8 = local_4c;
    if (*(char *)(iVar5 + 0xebbc) != '\0') {
      local_4c[0] = iVar5 + 0xebc4;
      local_50 = 0x40788fe;
      EnterCriticalSection();
      piVar8 = &local_50;
    }
    if (*(int *)(iVar5 + 0xec64) == 0) {
      if (*(int *)(iVar5 + 0xebc0) != 0) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3ae;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"!mCurrentD3D9Thread";
        piVar8[-1] = 0x4078834;
        FUN_0400a810();
      }
      piVar8[-1] = 0x407866d;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar5 + 0xebc0) = uVar3;
    }
    else {
      local_30 = *(int *)(iVar5 + 0xebc0);
      piVar8[-1] = 0x40788b6;
      iVar6 = FUN_0415b750();
      if (local_30 != iVar6) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3b3;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar8[-1] = 0x40788e3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar5 + 0xec64) = *(int *)(iVar5 + 0xec64) + 1;
  }
  if ((char)param_1[0x1d7e] != '\0') {
    piVar8[1] = (int)
                "Direct3DDevice9Imp::Present() seems to be called between BeginScene() and EndScene()!"
    ;
    *piVar8 = 10;
    piVar8[-1] = 0x407889c;
    FUN_0402cd10();
  }
  if (*(char *)((int)param_1 + 0x75f9) == '\0') {
    piVar8[1] = (int)"Present() call with no BeginScene()/EndScene() pair and no Clear() call!";
    *piVar8 = 10;
    piVar8[-1] = 0x407887c;
    FUN_0402cd10();
  }
  *(undefined1 *)((int)param_1 + 0x75f9) = 0;
  if ((((param_3 != 0) || (param_2 != 0)) || ((param_4 != 0 && (param_1[0x16] != param_4)))) ||
     (param_5 != 0)) {
    piVar8[1] = (int)"Direct3DDevice9Imp::Present() - not all arguments are NULL!";
    *piVar8 = 10;
                    /* try { // try from 040786c9 to 0407877e has its CatchHandler @ 04078935 */
    piVar8[-1] = 0x40786ce;
    FUN_0402cd10();
  }
  piVar8[-1] = 0x40786d3;
  uVar4 = FUN_0413d940();
  if (0xfa000000 < uVar4) {
    if (DAT_04468c3c == '\0') {
      piVar8[1] = (int)
                  "Free virtual address space dangerously low (3.9 GB taken out of 4 GB possible to address in a 32-bit process)!\r\nReleasing old OpenGL textures, trying to avoid crash.\r\nPlease consider lowering graphic quality settings or resolution to decrease the amount of memory used by the game.\r\nThis warning is given only once per game run."
      ;
      *piVar8 = 0xf;
                    /* try { // try from 040787af to 040787f6 has its CatchHandler @ 04078935 */
      piVar8[-1] = 0x40787b4;
      FUN_0402cd10();
      piVar8[-1] = 0x40787b9;
      cVar2 = FUN_0402d6a0();
      if (cVar2 != '\0') {
        *piVar8 = (int)param_1;
                    /* try { // try from 04078913 to 04078917 has its CatchHandler @ 04078935 */
        piVar8[-1] = 0x4078918;
        FUN_040b9a40();
      }
      piVar8[-1] = 0x40787c6;
      cVar2 = FUN_0402d6a0();
      if ((cVar2 == '\0') && (DAT_04468c3c == '\0')) {
        piVar8[3] = 0;
        piVar8[2] = (int)"Free virtual memory address space dangerously low!";
        piVar8[1] = (int)
                    "Free virtual address space dangerously low (3.9 GB taken out of 4 GB possible to address in a 32-bit process)!\r\nReleasing old OpenGL textures, trying to avoid crash.\r\nPlease consider lowering graphic quality settings or resolution to decrease the amount of memory used by the game.\r\nThis warning is given only once per game run."
        ;
        *piVar8 = 0;
        piVar8[-1] = 0x40787f7;
        eON_MessageBoxA();
        piVar8 = piVar8 + -4;
      }
      DAT_04468c3c = '\x01';
    }
    iVar5 = *param_1;
    *piVar8 = (int)param_1;
    pcVar1 = *(code **)(iVar5 + 0x1c);
    piVar8[-1] = 0x40786ef;
    (*pcVar1)();
  }
  *piVar8 = param_1[0x3b30];
  piVar8[-1] = 0x40786fd;
  eON_ResetEvent();
  piVar8[2] = 4;
  piVar8[1] = 4;
  *piVar8 = (int)param_1;
  piVar8[-1] = (int)(param_1 + 0x3b00);
  piVar8[-2] = 0x4078722;
  D3D9CommandQueue__GetNextCommandPointer();
  piVar8[-1] = (int)(param_1 + 0x3b00);
  piVar8[-2] = 0x407872a;
  D3D9CommandQueue__CommandSubmitted();
  cVar2 = DAT_04468c30;
  param_1[0x1d83] = param_1[0x1d83] + 1;
  if (cVar2 != '\0') {
                    /* try { // try from 04078840 to 0407889b has its CatchHandler @ 04078935 */
    piVar8[-2] = 0x4078845;
    FUN_040bc390();
    piVar8[-2] = 0x407884a;
    FUN_040bca00();
    piVar8[-2] = 0x407884f;
    FUN_040ad510();
    piVar8[-2] = 0x4078855;
    FUN_040b7150();
    DAT_04468c30 = '\0';
  }
  *piVar8 = 0xffffffff;
  piVar8[-1] = param_1[0x3b30];
  piVar8[-2] = 0x4078756;
  eON_WaitForSingleObject();
  piVar7 = piVar8 + -3;
  piVar8[-4] = 0x407875e;
  iVar5 = eON_timeGetTime();
  uVar4 = iVar5 - _DAT_04468c40;
  _DAT_04468c40 = iVar5;
  if (uVar4 < 0x19) {
    piVar8[-3] = 0x19 - uVar4;
    piVar8[-4] = 0x407877f;
    eON_Sleep();
    piVar7 = piVar8 + -4;
  }
  *piVar7 = (int)local_20;
  piVar7[-1] = 0x407878d;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::ProcessVertices @0x04072cd0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_ProcessVertices(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x4072dae;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4072d5c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4072d11;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4072d6b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4072d93;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4072d29;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::Reset @0x0409f240 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__Reset(int *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  int local_a8 [12];
  char *local_78;
  int local_58;
  int *local_54;
  int *local_50;
  undefined1 local_44 [8];
  uint local_3c;
  uint local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20 [4];
  
  puVar13 = (uint *)(local_a8 + 0xb);
  if (param_2 == (uint *)0x0) {
    local_78 = "Direct3DDevice9Imp::Reset() called with pParams == NULL - invalid! Failing.";
    local_a8[0xb] = 10;
    local_a8[10] = 0x40a0074;
    FUN_0402cd10();
    return 0x8876086c;
  }
  if (((*param_2 == 0) || (param_2[1] == 0)) && (param_2[8] == 0)) {
    local_78 = 
    "Direct3DDevice9Imp::Reset() called with fullscreen request but no back buffer dimensions! Failing."
    ;
    local_a8[0xb] = 10;
    local_a8[10] = 0x40a0041;
    FUN_0402cd10();
    return 0x8876086c;
  }
  iVar6 = param_1[3];
  local_24 = &local_28;
  local_28 = iVar6;
  if (iVar6 != 0) {
    puVar13 = (uint *)(local_a8 + 0xb);
    if (*(char *)(iVar6 + 0xebbc) != '\0') {
      local_a8[0xb] = iVar6 + 0xebc4;
      local_a8[10] = 0x409fe91;
      EnterCriticalSection();
      puVar13 = (uint *)(local_a8 + 10);
    }
    if (*(int *)(iVar6 + 0xec64) == 0) {
      if (*(int *)(iVar6 + 0xebc0) != 0) {
        puVar13[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar13[2] = 0x3ae;
        puVar13[1] = (uint)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar13 = (uint)"!mCurrentD3D9Thread";
        puVar13[-1] = 0x409f328;
        FUN_0400a810();
      }
      puVar13[-1] = 0x409f2ac;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar6 + 0xebc0) = uVar5;
    }
    else {
      iVar2 = *(int *)(iVar6 + 0xebc0);
      puVar13[-1] = 0x409fe52;
      iVar9 = FUN_0415b750();
      if (iVar2 != iVar9) {
        puVar13[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar13[2] = 0x3b3;
        puVar13[1] = (uint)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar13 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar13[-1] = 0x409fe7e;
        FUN_0400a810();
      }
    }
    *(int *)(iVar6 + 0xec64) = *(int *)(iVar6 + 0xec64) + 1;
  }
                    /* try { // try from 0409f2b9 to 0409f2d9 has its CatchHandler @ 040a0046 */
  puVar13[-1] = 0x409f2be;
  iVar6 = eON_GetCurrentThreadId();
  if (iVar6 != param_1[0x1d79]) {
    puVar13[1] = (uint)
                 "Direct3DDevice9Imp::Reset() called from different thread than the one that made the device! Failing."
    ;
    *puVar13 = 10;
    puVar13[-1] = 0x409f2da;
    FUN_0402cd10();
    uVar5 = 0x88760827;
    goto LAB_0409f2df;
  }
  piVar7 = (int *)param_1[0x1d7a];
  if (piVar7 == (int *)0x0) {
    puVar13[3] = (uint)"virtual HRESULT Direct3DDevice9Imp::Reset(D3DPRESENT_PARAMETERS*)";
    puVar13[2] = 0x7d6;
    puVar13[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
    ;
    *puVar13 = (uint)"mDeviceState.InitialDeviceStateBlock";
                    /* try { // try from 0409ff7f to 040a0022 has its CatchHandler @ 040a0046 */
    puVar13[-1] = 0x409ff84;
    FUN_0400a810();
    piVar7 = (int *)param_1[0x1d7a];
  }
  iVar6 = *piVar7;
  *puVar13 = (uint)piVar7;
                    /* try { // try from 0409f340 to 0409f9c6 has its CatchHandler @ 040a0046 */
  pcVar1 = *(code **)(iVar6 + 0x14);
  puVar13[-1] = 0x409f343;
  (*pcVar1)();
  iVar6 = *(int *)param_1[0x1d7a];
  puVar13[-1] = (uint)param_1[0x1d7a];
  pcVar1 = *(code **)(iVar6 + 8);
  puVar13[-2] = 0x409f354;
  (*pcVar1)();
  param_1[0x1d7a] = 0;
  iVar6 = *param_1;
  piVar14 = (int *)(puVar13 + -2);
  param_1[0x14bf] = 0;
  param_1[0x3194] = 0;
  param_1[0x14c1] = 0;
  param_1[0x3197] = 0;
  *puVar13 = 0;
  puVar13[-1] = 0;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x9c);
  puVar13[-3] = 0x409f3a4;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 1;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x9c);
  puVar13[-3] = 0x409f3bf;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 2;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x9c);
  puVar13[-3] = 0x409f3da;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 3;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x9c);
  puVar13[-3] = 0x409f3f5;
  (*pcVar1)();
  iVar6 = param_1[0x14c0];
  iVar2 = *param_1;
  puVar13[-2] = (uint)param_1;
  puVar13[-1] = iVar6;
  pcVar1 = *(code **)(iVar2 + 0xa4);
  puVar13[-3] = 0x409f40a;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 0;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f425;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 1;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f440;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 2;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f45b;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 3;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f476;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 4;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f491;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 5;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f4ac;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 6;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f4c7;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 7;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f4e2;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 8;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f4fd;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 9;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f518;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 10;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f533;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 0xb;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f54e;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 0xc;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f569;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 0xd;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f584;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 0xe;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f59f;
  (*pcVar1)();
  iVar6 = *param_1;
  *puVar13 = 0;
  puVar13[-1] = 0xf;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x10c);
  puVar13[-3] = 0x409f5ba;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 0;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f5e5;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 1;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f610;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 2;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f63b;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 3;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f666;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 4;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f691;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 5;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f6bc;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 6;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f6e7;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 7;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f712;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 8;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f73d;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 9;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f768;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 10;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f793;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 0xb;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f7be;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 0xc;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f7e9;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 0xd;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f814;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 0xe;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f83f;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = 0;
  puVar13[-1] = 0xf;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x198);
  puVar13[-3] = 0x409f86a;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[-1] = 0;
  puVar13[-2] = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x1a8);
  puVar13[-3] = 0x409f87d;
  (*pcVar1)();
  piVar7 = (int *)param_1[0x1d76];
  if (piVar7 != (int *)0x0) {
    iVar6 = *piVar7;
    puVar13[-2] = (uint)piVar7;
    pcVar1 = *(code **)(iVar6 + 8);
    puVar13[-3] = 0x409f88f;
    (*pcVar1)();
    param_1[0x1d76] = 0;
    piVar14 = (int *)(puVar13 + -3);
    *puVar13 = 0xc;
    puVar13[-1] = 0x25;
    puVar13[-2] = (uint)param_1;
    puVar13[-3] = (uint)(param_1 + 0x3b00);
    puVar13[-4] = 0x409f8be;
    puVar8 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar13[-3] = (uint)(param_1 + 0x3b00);
    puVar13[-4] = 0x409f8da;
    D3D9CommandQueue__CommandSubmitted();
  }
  if (param_1[0x1d75] != 0) {
    *piVar14 = param_1[0x1d75];
    piVar14[-1] = 0x409f8ec;
    eON_DestroyCursor();
    param_1[0x1d75] = 0;
    piVar14 = piVar14 + -1;
  }
  piVar7 = (int *)param_1[0x3ad6];
  if (piVar7 != (int *)0x0) {
    iVar6 = *piVar7;
    *piVar14 = (int)piVar7;
    pcVar1 = *(code **)(iVar6 + 8);
    piVar14[-1] = 0x409f90b;
    (*pcVar1)();
    param_1[0x3ad6] = 0;
    piVar14 = piVar14 + -1;
    param_1[0x3ad7] = 0;
    param_1[0x3ad8] = 0;
    param_1[0x3ad9] = 0;
  }
  piVar7 = (int *)param_1[0x3ada];
  if (piVar7 != (int *)0x0) {
    iVar6 = *piVar7;
    *piVar14 = (int)piVar7;
    pcVar1 = *(code **)(iVar6 + 8);
    piVar14[-1] = 0x409f948;
    (*pcVar1)();
    param_1[0x3ada] = 0;
    piVar14 = piVar14 + -1;
    param_1[0x3adb] = 0;
    param_1[0x3adc] = 0;
    param_1[0x3add] = 0;
  }
  *piVar14 = param_1[0x3b30];
  piVar14[-1] = 0x409f981;
  eON_ResetEvent();
  piVar7 = param_1 + 0x3b00;
  piVar14[2] = 0;
  piVar14[1] = 8;
  *piVar14 = (int)param_1;
  piVar14[-1] = (int)piVar7;
  piVar14[-2] = 0x409f9a9;
  local_50 = piVar7;
  D3D9CommandQueue__GetNextCommandPointer();
  piVar14[-1] = (int)piVar7;
  piVar14[-2] = 0x409f9b1;
  D3D9CommandQueue__CommandSubmitted();
  *piVar14 = 0xffffffff;
  piVar14[-1] = param_1[0x3b30];
  piVar14[-2] = 0x409f9c7;
  eON_WaitForSingleObject();
  piVar15 = piVar14 + -3;
  puVar13 = (uint *)(piVar14 + -3);
  iVar6 = param_1[0x14c0];
  local_54 = param_1 + 0x3a9b;
  piVar14[-3] = (int)(param_1 + 0x3a9b);
  piVar7 = param_1 + 15000;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_58 = 2 - (uint)(iVar6 == 0);
  piVar14[-4] = 0x409fa05;
  pthread_mutex_lock((pthread_mutex_t *)piVar14[-3]);
  piVar11 = (int *)param_1[0x3a9a];
  if ((piVar7 != piVar11) &&
     (local_58 != (((uint)((int)piVar7 - (int)(piVar11 + 3)) >> 2) * 0x2aaaaaab & 0x3fffffff) + 1))
  {
    do {
      local_20[0] = *piVar11;
      if ((local_20[0] != param_1[0x14bf]) && (local_20[0] != param_1[0x14c0])) {
        iVar6 = *(int *)(local_20[0] + 4);
        piVar14[-3] = local_20[0] + 4;
                    /* try { // try from 0409fa56 to 0409faa9 has its CatchHandler @ 040a0079 */
        pcVar1 = *(code **)(iVar6 + 0x34);
        piVar14[-4] = 0x409fa59;
        cVar4 = (*pcVar1)();
        if (cVar4 == '\0') {
          if (local_30 == local_2c) {
            piVar14[-2] = (int)local_30;
            piVar14[-1] = (int)local_20;
            piVar14[-3] = (int)&local_34;
                    /* try { // try from 0409fe3d to 0409fe41 has its CatchHandler @ 040a0079 */
            piVar14[-4] = 0x409fe42;
            FUN_040a3530();
          }
          else {
            piVar10 = (int *)0x0;
            if (local_30 != (int *)0x0) {
              *local_30 = local_20[0];
              piVar10 = local_30;
            }
            local_30 = piVar10 + 1;
          }
        }
      }
      piVar11 = (int *)piVar11[2];
    } while (piVar7 != piVar11);
  }
  piVar14[-3] = (int)local_54;
  piVar14[-4] = 0x409fa8f;
  pthread_mutex_unlock((pthread_mutex_t *)piVar14[-3]);
  piVar7 = local_34;
  if (local_30 != local_34) {
    do {
      do {
        iVar6 = *(int *)*piVar7;
        *piVar15 = *piVar7;
        pcVar1 = *(code **)(iVar6 + 8);
        piVar15[-1] = 0x409faaa;
        iVar6 = (*pcVar1)();
        piVar16 = piVar15 + -1;
        puVar13 = (uint *)(piVar15 + -1);
        piVar15 = piVar15 + -1;
      } while (iVar6 != 0);
      piVar7 = piVar7 + 1;
      piVar15 = piVar16;
    } while (piVar7 != local_30);
  }
  if (local_34 != (int *)0x0) {
    *puVar13 = (uint)local_34;
    puVar13[-1] = 0x409fac8;
    operator_delete((void *)*puVar13);
  }
  DAT_04408b60 = param_2[0xd] != 0x80000000;
  bVar19 = 0xfffffffe < DAT_04411598;
  DAT_04411598 = DAT_04411598 + 1;
  DAT_0441159c = DAT_0441159c + (uint)bVar19;
  if (((((*param_2 != param_1[0xf]) || (param_2[1] != param_1[0x10])) ||
       ((param_2[2] != param_1[0x11] ||
        ((((param_2[3] != param_1[0x12] || (param_2[4] != param_1[0x13])) ||
          (param_2[5] != param_1[0x14])) ||
         ((param_2[6] != param_1[0x15] || (param_2[7] != param_1[0x16])))))))) ||
      (param_2[8] != param_1[0x17])) ||
     (((param_2[9] != param_1[0x18] || (param_2[10] != param_1[0x19])) ||
      ((param_2[0xb] != param_1[0x1a] ||
       ((param_2[0xc] != param_1[0x1b] || (param_2[0xd] != param_1[0x1c])))))))) {
    *puVar13 = (uint)param_1;
                    /* try { // try from 0409faf6 to 0409fe24 has its CatchHandler @ 040a0046 */
    puVar13[-1] = 0x409fafb;
    FUN_04080220();
    if ((*param_2 == 0) ||
       (uVar12 = *param_2, puVar17 = puVar13, uVar18 = param_2[1], param_2[1] == 0)) {
      uVar12 = param_2[7];
      if (uVar12 == 0) {
        puVar13[-1] = 0x409fff5;
        uVar12 = eON_GetFocus_Thunk();
        if (uVar12 == 0) {
          puVar13[3] = (uint)"virtual HRESULT Direct3DDevice9Imp::Reset(D3DPRESENT_PARAMETERS*)";
          puVar13[2] = 0x863;
          puVar13[1] = (uint)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *puVar13 = (uint)&DAT_042f653c;
          puVar13[-1] = 0x40a0023;
          FUN_0400a810();
        }
      }
      *puVar13 = uVar12;
      puVar13[1] = (uint)local_44;
      puVar13[-1] = 0x409fb25;
      iVar6 = eON_GetClientRect();
      uVar12 = local_3c;
      puVar17 = puVar13 + -2;
      uVar18 = local_38;
      if (iVar6 == 0) {
        puVar13[1] = (uint)"virtual HRESULT Direct3DDevice9Imp::Reset(D3DPRESENT_PARAMETERS*)";
        *puVar13 = 0x865;
        puVar13[-1] = (uint)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        puVar13[-2] = (uint)"eON_GetClientRect( hwnd, &rect ) != 0";
        puVar13[-3] = 0x409ffdc;
        FUN_0400a810();
        uVar12 = local_3c;
        puVar17 = puVar13 + -2;
        uVar18 = local_38;
      }
    }
    *puVar17 = param_1[0x3b30];
    puVar17[-1] = 0x409fb44;
    eON_ResetEvent();
    piVar7 = local_50;
    puVar17[2] = 0;
    puVar17[1] = 8;
    *puVar17 = (uint)param_1;
    puVar17[-1] = (uint)piVar7;
    puVar17[-2] = 0x409fb66;
    D3D9CommandQueue__GetNextCommandPointer();
    puVar17[-1] = (uint)local_50;
    puVar17[-2] = 0x409fb71;
    D3D9CommandQueue__CommandSubmitted();
    *puVar17 = 0xffffffff;
    puVar17[-1] = param_1[0x3b30];
    puVar17[-2] = 0x409fb87;
    eON_WaitForSingleObject();
    puVar13 = puVar17 + -3;
    uVar3 = param_2[8];
    puVar17[-1] = uVar18;
    puVar17[-2] = uVar12;
    puVar17[-3] = (uint)param_1;
    *puVar17 = (uint)(uVar3 == 0);
    puVar17[-4] = 0x409fbac;
    FUN_040b99b0();
    param_1[0xf] = uVar12;
    param_1[0x10] = uVar18;
    param_1[0x17] = param_2[8];
    param_1[0x18] = param_2[9];
    param_1[0x19] = param_2[10];
    param_1[0x13] = param_2[4];
    param_1[0x14] = param_2[5];
    puVar17[-3] = (uint)param_1;
    puVar17[-4] = 0x409fbdb;
    Direct3DDevice9Imp__CreateScreenBuffers();
  }
  puVar13[1] = param_1[0x1d71];
  *puVar13 = (uint)(param_1 + 0x1d6f);
  puVar13[-1] = 0x409fbf3;
  FUN_04065230();
  param_1[0x1d71] = 0;
  param_1[0x1d72] = (int)(param_1 + 0x1d70);
  param_1[0x1d73] = (int)(param_1 + 0x1d70);
  param_1[0x1d74] = 0;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fc31;
  Direct3DDevice9Imp__Internal_LightEnable();
  puVar13[2] = 0;
  puVar13[1] = 1;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fc49;
  Direct3DDevice9Imp__Internal_LightEnable();
  puVar13[2] = 0;
  puVar13[1] = 2;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fc61;
  Direct3DDevice9Imp__Internal_LightEnable();
  puVar13[2] = 0;
  puVar13[1] = 3;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fc79;
  Direct3DDevice9Imp__Internal_LightEnable();
  puVar13[2] = 0;
  puVar13[1] = 4;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fc91;
  Direct3DDevice9Imp__Internal_LightEnable();
  puVar13[2] = 0;
  puVar13[1] = 5;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fca9;
  Direct3DDevice9Imp__Internal_LightEnable();
  puVar13[2] = 0;
  puVar13[1] = 6;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fcc1;
  Direct3DDevice9Imp__Internal_LightEnable();
  puVar13[2] = 0;
  puVar13[1] = 7;
  *puVar13 = (uint)param_1;
  puVar13[-1] = 0x409fcd9;
  Direct3DDevice9Imp__Internal_LightEnable();
  iVar6 = *param_1;
  uVar12 = param_2[9];
  puVar13[1] = 7;
  *puVar13 = (uint)param_1;
  puVar13[2] = (uint)(uVar12 != 0);
  pcVar1 = *(code **)(iVar6 + 0xec);
  puVar13[-1] = 0x409fcfd;
  (*pcVar1)();
  iVar6 = *param_1;
  puVar13[1] = 1;
  puVar13[2] = (uint)(param_1 + 0x1d7a);
  *puVar13 = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0xf4);
  puVar13[-1] = 0x409fd1a;
  iVar6 = (*pcVar1)();
  if (iVar6 < 0) {
    puVar13[3] = (uint)"virtual HRESULT Direct3DDevice9Imp::Reset(D3DPRESENT_PARAMETERS*)";
    puVar13[2] = 0x881;
    puVar13[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
    ;
    *puVar13 = (uint)
               "((HRESULT)(CreateStateBlock( D3DSBT_ALL, (IDirect3DStateBlock9**) &mDeviceState.InitialDeviceStateBlock )) >= 0)"
    ;
    puVar13[-1] = 0x409ffb3;
    FUN_0400a810();
  }
  uVar12 = (uint)(param_1[0x14bf] != 0);
  if (param_1[0x14c0] == 0) {
LAB_0409fea9:
    if (uVar12 != 0) goto LAB_0409fd6e;
  }
  else {
    *puVar13 = param_1[0x14c0] + 4;
    puVar13[-1] = 0x409fd48;
    cVar4 = direct3dsurface9imp_040adca0();
    if (cVar4 != '\0') {
      uVar12 = uVar12 | 2;
    }
    *puVar13 = param_1[0x14c0] + 4;
    puVar13[-1] = 0x409fd63;
    cVar4 = direct3dsurface9imp_040add10();
    if (cVar4 == '\0') goto LAB_0409fea9;
    uVar12 = uVar12 | 4;
LAB_0409fd6e:
    iVar6 = *param_1;
    puVar13[6] = 0;
    puVar13[5] = 0x3f800000;
    puVar13[4] = 0;
    puVar13[3] = uVar12;
    puVar13[2] = 0;
    puVar13[1] = 0;
    *puVar13 = (uint)param_1;
    pcVar1 = *(code **)(iVar6 + 0xb4);
    puVar13[-1] = 0x409fda5;
    (*pcVar1)();
  }
  uVar12 = param_2[7];
  if (uVar12 == 0) {
    puVar13[-1] = 0x409ffe6;
    uVar12 = eON_GetFocus_Thunk();
  }
  if (param_2[8] == 0) {
    uVar18 = *param_2;
    *(undefined4 *)(uVar12 + 4) = 0;
    uVar3 = param_2[1];
    *(undefined4 *)(uVar12 + 8) = 0;
    *(undefined4 *)(uVar12 + 0x14) = 0;
    *(undefined4 *)(uVar12 + 0x18) = 0;
    *(uint *)(uVar12 + 0xc) = uVar18;
    *(uint *)(uVar12 + 0x10) = uVar3;
    *(uint *)(uVar12 + 0x1c) = uVar18;
    *(uint *)(uVar12 + 0x20) = uVar3;
    puVar13[1] = 1;
    *puVar13 = uVar12;
    puVar13[-1] = 0x409fdfa;
    eON_ShowWindow_Checked();
    puVar13 = puVar13 + -2;
  }
  iVar6 = *param_1;
  puVar13[4] = 0;
  puVar13[3] = 0;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = (uint)param_1;
  pcVar1 = *(code **)(iVar6 + 0x4c);
  puVar13[-1] = 0x409fe25;
  (*pcVar1)();
  uVar5 = 0;
LAB_0409f2df:
  *puVar13 = (uint)&local_24;
  puVar13[-1] = 0x409f2ea;
  direct3ddevice9imp_040a2df0();
  return uVar5;
}

// --- Direct3DDevice9Imp::SetClipStatus @0x04074730 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetClipStatus(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x407480e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40747bc;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4074771;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40747cb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40747f3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4074789;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetCursorPosition @0x040708e0 ---
/* source: direct3ddevice9imp */

void d3d9device_SetCursorPosition(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x40709de;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4070984;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4070928;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407099b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40709c3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *(undefined4 *)(param_1 + 0xeb3c) = param_2;
  *(undefined4 *)(param_1 + 0xeb40) = param_3;
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x4070952;
  direct3ddevice9imp_040a2df0();
  return;
}

// --- Direct3DDevice9Imp::SetCursorProperties @0x040709f0 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__SetCursorProperties(int *param_1,int param_2,int param_3,int *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int local_c0 [31];
  int local_44;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int *local_20 [4];
  
  piVar9 = local_c0 + 0x11;
  if (param_4 == (int *)0x0) {
    uVar3 = 0x8876086c;
  }
  else {
    iVar4 = param_1[3];
    local_24 = &local_28;
    local_28 = iVar4;
    if (iVar4 != 0) {
      piVar9 = local_c0 + 0x11;
      if (*(char *)(iVar4 + 0xebbc) != '\0') {
        local_c0[0x11] = iVar4 + 0xebc4;
        local_c0[0x10] = 0x4070d2e;
        EnterCriticalSection();
        piVar9 = local_c0 + 0x10;
      }
      if (*(int *)(iVar4 + 0xec64) == 0) {
        if (*(int *)(iVar4 + 0xebc0) != 0) {
          piVar9[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar9[2] = 0x3ae;
          piVar9[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar9 = (int)"!mCurrentD3D9Thread";
          piVar9[-1] = 0x4070a94;
          FUN_0400a810();
        }
        piVar9[-1] = 0x4070a41;
        uVar3 = FUN_0415b750();
        *(undefined4 *)(iVar4 + 0xebc0) = uVar3;
      }
      else {
        iVar10 = *(int *)(iVar4 + 0xebc0);
        piVar9[-1] = 0x4070ceb;
        iVar6 = FUN_0415b750();
        if (iVar10 != iVar6) {
          piVar9[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar9[2] = 0x3b3;
          piVar9[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar9 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar9[-1] = 0x4070d17;
          FUN_0400a810();
        }
      }
      *(int *)(iVar4 + 0xec64) = *(int *)(iVar4 + 0xec64) + 1;
    }
    uVar3 = 0x8876086c;
    if (param_4[0x1c] == 0x15) {
      uVar8 = param_4[0x22];
      if ((uVar8 <= *(uint *)(param_1[0x14bf] + 0x88)) &&
         ((uint)param_4[0x23] <= *(uint *)(param_1[0x14bf] + 0x8c))) {
        piVar7 = (int *)param_1[0x1d76];
        piVar5 = piVar9;
        if (piVar7 != (int *)0x0) {
          iVar4 = *piVar7;
          *piVar9 = (int)piVar7;
                    /* try { // try from 04070ad7 to 04070ccf has its CatchHandler @ 04070f12 */
          pcVar1 = *(code **)(iVar4 + 8);
          piVar9[-1] = 0x4070ada;
          (*pcVar1)();
          piVar5 = piVar9 + -1;
          param_1[0x1d76] = 0;
          uVar8 = param_4[0x22];
        }
        if ((uVar8 == 0x20) && (param_4[0x23] == 0x20)) {
          iVar4 = *param_4;
          piVar5[3] = 0x10;
          piVar5[2] = 0;
          piVar5[1] = (int)&local_38;
          *piVar5 = (int)param_4;
                    /* try { // try from 04070d69 to 04070f0c has its CatchHandler @ 04070f12 */
          pcVar1 = *(code **)(iVar4 + 0x34);
          piVar5[-1] = 0x4070d6c;
          iVar4 = (*pcVar1)();
          if (iVar4 < 0) {
            piVar5[-1] = (int)
                         "virtual HRESULT Direct3DDevice9Imp::SetCursorProperties(UINT, UINT, IDirect3DSurface9*)"
            ;
            piVar5[-2] = 0x33b5;
            piVar5[-3] = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            piVar5[-4] = (int)
                         "((HRESULT)(cursorSurface->LockRect( &lockedRect, __null, 0x10 )) >= 0)";
            piVar5[-5] = 0x4070f0d;
            FUN_0400a810();
          }
          piVar5[-5] = 0x4070d7c;
          piVar7 = (int *)FUN_04016a30();
          iVar4 = *piVar7;
          piVar5[2] = param_3;
          piVar5[1] = param_2;
          *piVar5 = param_4[0x23];
          iVar10 = param_4[0x22];
          piVar5[-4] = (int)piVar7;
          piVar5[-1] = iVar10;
          piVar5[-2] = local_38;
          piVar5[-3] = local_34;
          pcVar1 = *(code **)(iVar4 + 0xc);
          piVar5[-5] = 0x4070db6;
          cVar2 = (*pcVar1)();
          if (cVar2 == '\0') {
            piVar5[-1] = (int)
                         "virtual HRESULT Direct3DDevice9Imp::SetCursorProperties(UINT, UINT, IDirect3DSurface9*)"
            ;
            piVar5[-2] = 0x33b8;
            piVar5[-3] = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            piVar5[-4] = (int)
                         "cursor->CreateFromARGBData( (LPCVOID) lockedRect.pBits, lockedRect.Pitch, desc->Width, desc->Height, XHotSpot, YHotSpot ) == true"
            ;
            piVar5[-5] = 0x4070dde;
            FUN_0400a810();
          }
          iVar4 = *param_4;
          piVar5[-4] = (int)param_4;
          pcVar1 = *(code **)(iVar4 + 0x38);
          piVar5[-5] = 0x4070de6;
          (*pcVar1)();
          piVar5[-5] = (int)piVar7;
          piVar5[-6] = 0x4070df1;
          eON_SetCursor();
          piVar9 = piVar5 + -6;
          if (param_1[0x1d75] != 0) {
            piVar5[-6] = param_1[0x1d75];
            piVar5[-7] = 0x4070e09;
            eON_DestroyCursor();
            piVar9 = piVar5 + -7;
          }
          param_1[0x1d75] = (int)piVar7;
        }
        else {
          if (param_1[0x1d75] != 0) {
            *piVar5 = param_1[0x1d75];
            piVar5[-1] = 0x4070b0e;
            eON_DestroyCursor();
            uVar8 = param_4[0x22];
            piVar5 = piVar5 + -1;
          }
          param_1[0x1d75] = 0;
          iVar4 = *param_1;
          piVar5[8] = 0;
          piVar5[7] = (int)(param_1 + 0x1d76);
          piVar5[6] = 0;
          piVar5[5] = 0x15;
          piVar5[4] = 0x200;
          piVar5[3] = 1;
          iVar10 = param_4[0x23];
          piVar5[1] = uVar8;
          piVar5[2] = iVar10;
          *piVar5 = (int)param_1;
          pcVar1 = *(code **)(iVar4 + 100);
          piVar5[-1] = 0x4070b71;
          iVar4 = (*pcVar1)();
          if (iVar4 < 0) {
            piVar5[3] = (int)
                        "virtual HRESULT Direct3DDevice9Imp::SetCursorProperties(UINT, UINT, IDirect3DSurface9*)"
            ;
            piVar5[2] = 0x33c8;
            piVar5[1] = (int)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            *piVar5 = (int)
                      "((HRESULT)(CreateTexture( desc->Width, desc->Height, 1, 0x200, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &mDeviceState.CursorTexture, 0 )) >= 0)"
            ;
            piVar5[-1] = 0x4070ea4;
            FUN_0400a810();
          }
          local_20[0] = (int *)0x0;
          piVar9 = (int *)param_1[0x1d76];
          iVar4 = *piVar9;
          piVar5[2] = (int)local_20;
          piVar5[1] = 0;
          *piVar5 = (int)piVar9;
          pcVar1 = *(code **)(iVar4 + 0x48);
          piVar5[-1] = 0x4070ba0;
          iVar4 = (*pcVar1)();
          if (iVar4 < 0) {
            *piVar5 = (int)
                      "virtual HRESULT Direct3DDevice9Imp::SetCursorProperties(UINT, UINT, IDirect3DSurface9*)"
            ;
            piVar5[-1] = 0x33cc;
            piVar5[-2] = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            piVar5[-3] = (int)
                         "((HRESULT)(mDeviceState.CursorTexture->GetSurfaceLevel( 0, &cursorZeroSurface )) >= 0)"
            ;
            piVar5[-4] = 0x4070e74;
            FUN_0400a810();
          }
          iVar4 = *param_4;
          *piVar5 = 0x10;
          piVar5[-1] = 0;
          piVar5[-2] = (int)&local_38;
          piVar5[-3] = (int)param_4;
          pcVar1 = *(code **)(iVar4 + 0x34);
          piVar5[-4] = 0x4070bca;
          iVar4 = (*pcVar1)();
          if (iVar4 < 0) {
            piVar5[-4] = (int)
                         "virtual HRESULT Direct3DDevice9Imp::SetCursorProperties(UINT, UINT, IDirect3DSurface9*)"
            ;
            piVar5[-5] = 0x33d0;
            piVar5[-6] = (int)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            piVar5[-7] = (int)
                         "((HRESULT)(cursorSurface->LockRect( &lockedSrcRect, __null, 0x10 )) >= 0)"
            ;
            piVar5[-8] = 0x4070e44;
            FUN_0400a810();
          }
          iVar4 = *local_20[0];
          piVar5[-4] = 0x2000;
          piVar5[-5] = 0;
          piVar5[-6] = (int)&local_30;
          piVar5[-7] = (int)local_20[0];
          pcVar1 = *(code **)(iVar4 + 0x34);
          piVar5[-8] = 0x4070bf7;
          iVar4 = (*pcVar1)();
          if (iVar4 < 0) {
            piVar5[-8] = (int)
                         "virtual HRESULT Direct3DDevice9Imp::SetCursorProperties(UINT, UINT, IDirect3DSurface9*)"
            ;
            piVar5[-9] = 0x33d4;
            piVar5[-10] = (int)
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
            ;
            piVar5[-0xb] = (int)
                           "((HRESULT)(cursorZeroSurface->LockRect( &lockedDestRect, __null, 0x2000 )) >= 0)"
            ;
            piVar5[-0xc] = 0x4070ee4;
            FUN_0400a810();
          }
          local_44 = param_4[0x22] << 2;
          if (param_4[0x23] != 0) {
            local_40 = param_4;
            uVar8 = 0;
            iVar4 = local_34;
            iVar10 = local_2c;
            do {
              piVar5[-10] = iVar4;
              uVar8 = uVar8 + 1;
              piVar5[-0xb] = iVar10;
              piVar5[-9] = local_44;
              piVar5[-0xc] = 0x4070c3e;
              memcpy((void *)piVar5[-0xb],(void *)piVar5[-10],piVar5[-9]);
              iVar4 = iVar4 + local_38;
              iVar10 = iVar10 + local_30;
              param_4 = local_40;
            } while (uVar8 < (uint)local_40[0x23]);
          }
          iVar4 = *local_20[0];
          piVar5[-0xb] = (int)local_20[0];
          pcVar1 = *(code **)(iVar4 + 0x38);
          piVar5[-0xc] = 0x4070c5c;
          (*pcVar1)();
          iVar4 = *param_4;
          piVar5[-0xc] = (int)param_4;
          pcVar1 = *(code **)(iVar4 + 0x38);
          piVar5[-0xd] = 0x4070c67;
          (*pcVar1)();
          iVar4 = *local_20[0];
          piVar5[-0xd] = (int)local_20[0];
          pcVar1 = *(code **)(iVar4 + 8);
          piVar5[-0xe] = 0x4070c75;
          (*pcVar1)();
          piVar9 = piVar5 + -0xe;
        }
        piVar9[3] = 0xc;
        piVar9[2] = 0x25;
        *piVar9 = (int)(param_1 + 0x3b00);
        piVar9[1] = (int)param_1;
        piVar9[-1] = 0x4070ca0;
        piVar5 = (int *)D3D9CommandQueue__GetNextCommandPointer();
        piVar7 = (int *)param_1[0x1d76];
        *piVar5 = (int)piVar7;
        if (piVar7 != (int *)0x0) {
          iVar4 = *piVar7;
          *piVar9 = (int)piVar7;
          pcVar1 = *(code **)(iVar4 + 4);
          piVar9[-1] = 0x4070cb9;
          (*pcVar1)();
          piVar9 = piVar9 + -1;
        }
        piVar5[1] = param_2;
        piVar5[2] = param_3;
        *piVar9 = (int)(param_1 + 0x3b00);
        piVar9[-1] = 0x4070cd0;
        D3D9CommandQueue__CommandSubmitted();
        uVar3 = 0;
      }
    }
    *piVar9 = (int)&local_24;
    piVar9[-1] = 0x4070a64;
    direct3ddevice9imp_040a2df0();
  }
  return uVar3;
}

// --- Direct3DDevice9Imp::SetDepthStencilSurface @0x04079270 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetDepthStencilSurface(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int aiStack_60 [12];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar8 = aiStack_60 + 5;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar8 = aiStack_60 + 5;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_60[5] = iVar1 + 0xebc4;
      aiStack_60[4] = 0x40793ee;
      EnterCriticalSection();
      piVar8 = aiStack_60 + 4;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3ae;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"!mCurrentD3D9Thread";
        piVar8[-1] = 0x407938c;
        FUN_0400a810();
      }
      piVar8[-1] = 0x40792bd;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar8[-1] = 0x40793a6;
      iVar6 = FUN_0415b750();
      if (local_30 != iVar6) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3b3;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar8[-1] = 0x40793d3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x5314);
  if (param_2 != piVar2) {
    piVar7 = piVar8;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      *piVar8 = (int)piVar2;
                    /* try { // try from 040792dd to 0407934b has its CatchHandler @ 0407948e */
      pcVar3 = *(code **)(iVar1 + 8);
      piVar8[-1] = 0x40792e0;
      (*pcVar3)();
      piVar7 = piVar8 + -1;
    }
    *(int **)(param_1 + 0x5314) = param_2;
    piVar8 = piVar7;
    if (param_2 != (int *)0x0) {
      iVar1 = *param_2;
      *piVar7 = (int)param_2;
      pcVar3 = *(code **)(iVar1 + 4);
      piVar7[-1] = 0x40792f5;
      (*pcVar3)();
      iVar1 = **(int **)(param_1 + 0x5314);
      piVar7[-1] = (int)*(int **)(param_1 + 0x5314);
      pcVar3 = *(code **)(iVar1 + 4);
      piVar7[-2] = 0x4079306;
      (*pcVar3)();
      piVar8 = piVar7 + -2;
      if ((*(int *)(param_1 + 0x5304) != 0) &&
         (piVar8 = piVar7 + -2, *(int *)(*(int *)(param_1 + 0x5304) + 0x70) == 0x4c4c554e)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x5314) + 0x8c);
        local_30 = *(int *)(*(int *)(param_1 + 0x5314) + 0x88);
        *(undefined4 *)(param_1 + 0x52e0) = 0;
        *(undefined4 *)(param_1 + 0x52e4) = 0;
        *(int *)(param_1 + 0x52ec) = iVar1;
        *(int *)(param_1 + 0x52e8) = local_30;
        if (iVar1 == 0) {
          piVar7[1] = (int)
                      "void Direct3DDevice9Imp::UpdateViewportAndScissorDimensions_D3D9(UINT, UINT)"
          ;
          *piVar7 = 0x152c;
          piVar7[-1] = (int)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          piVar7[-2] = (int)"mDeviceState.Viewport.Height != 0";
                    /* try { // try from 04079487 to 0407948b has its CatchHandler @ 0407948e */
          piVar7[-3] = 0x407948c;
          FUN_0400a810();
        }
        *(int *)(param_1 + 0xcc8) = iVar1;
        *(undefined4 *)(param_1 + 0xcbc) = 0;
        *(undefined4 *)(param_1 + 0xcc0) = 0;
        *(int *)(param_1 + 0xcc4) = local_30;
        piVar8 = piVar7 + -2;
      }
    }
    piVar8[3] = 4;
    piVar8[2] = 0x12;
    piVar8[1] = param_1;
    *piVar8 = param_1 + 0xec00;
    piVar8[-1] = 0x4079342;
    puVar5 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
    *puVar5 = param_2;
    *piVar8 = param_1 + 0xec00;
    piVar8[-1] = 0x407934c;
    D3D9CommandQueue__CommandSubmitted();
  }
  *piVar8 = (int)local_20;
  piVar8[-1] = 0x4079357;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetDialogBoxMode @0x04078270 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetDialogBoxMode(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x407834e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x40782fc;
        FUN_0400a810();
      }
      piVar5[-1] = 0x40782b1;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407830b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4078333;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x40782c9;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetFVF @0x040983d0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetFVF(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x40984ee;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4098494;
        FUN_0400a810();
      }
      piVar5[-1] = 0x409841c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x40984ab;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40984d7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x75ec);
  if (iVar1 == 0) {
    piVar5[1] = param_2 & 0xffffdffe;
    *piVar5 = param_1;
                    /* try { // try from 04098507 to 0409850b has its CatchHandler @ 04098511 */
    piVar5[-1] = 0x409850c;
    d3dstructs_04098020();
  }
  else {
    *(undefined4 *)(iVar1 + 0x8c) = 1;
    *(uint *)(iVar1 + 0x90) = param_2 & 0xffffdffe;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x409845d;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetMaterial @0x04079910 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetMaterial(uint param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  byte bVar13;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  bVar13 = 0;
  local_20[0] = &local_24;
  puVar9 = (uint *)local_4c;
  iVar8 = *(int *)(param_1 + 0xc);
  local_24 = iVar8;
  if (iVar8 != 0) {
    puVar9 = (uint *)local_4c;
    if (*(char *)(iVar8 + 0xebbc) != '\0') {
      local_4c[0] = iVar8 + 0xebc4;
      uStack_50 = 0x4079a7e;
      EnterCriticalSection();
      puVar9 = &uStack_50;
    }
    if (*(int *)(iVar8 + 0xec64) == 0) {
      if (*(int *)(iVar8 + 0xebc0) != 0) {
        puVar9[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar9[2] = 0x3ae;
        puVar9[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar9 = (uint)"!mCurrentD3D9Thread";
        puVar9[-1] = 0x4079a24;
        FUN_0400a810();
      }
      puVar9[-1] = 0x407995a;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar8 + 0xebc0) = uVar4;
    }
    else {
      iVar3 = *(int *)(iVar8 + 0xebc0);
      puVar9[-1] = 0x4079a3b;
      iVar6 = FUN_0415b750();
      if (iVar3 != iVar6) {
        puVar9[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar9[2] = 0x3b3;
        puVar9[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar9 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar9[-1] = 0x4079a67;
        FUN_0400a810();
      }
    }
    *(int *)(iVar8 + 0xec64) = *(int *)(iVar8 + 0xec64) + 1;
  }
  iVar8 = *(int *)(param_1 + 0x75ec);
  if (iVar8 == 0) {
    puVar11 = (undefined4 *)(param_1 + 0x85c);
    puVar9[2] = 0x44;
    *puVar9 = (uint)puVar11;
    puVar9[1] = (uint)param_2;
    puVar9[-1] = 0x4079aad;
    iVar8 = memcmp((void *)*puVar9,(void *)puVar9[1],puVar9[2]);
    if (iVar8 != 0) {
      bVar12 = ((uint)puVar11 & 1) != 0;
      uVar5 = 0x44;
      puVar10 = param_2;
      if (bVar12) {
        puVar11 = (undefined4 *)(param_1 + 0x85d);
        *(undefined1 *)(param_1 + 0x85c) = *(undefined1 *)param_2;
        uVar5 = 0x43;
        puVar10 = (undefined4 *)((int)param_2 + 1);
      }
      if (((uint)puVar11 & 2) != 0) {
        uVar2 = *(undefined2 *)puVar10;
        uVar5 = uVar5 - 2;
        puVar10 = (undefined4 *)((int)puVar10 + 2);
        *(undefined2 *)puVar11 = uVar2;
        puVar11 = (undefined4 *)((int)puVar11 + 2);
      }
      iVar8 = 0;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      }
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
        iVar8 = 2;
      }
      if (bVar12) {
        *(undefined1 *)((int)puVar11 + iVar8) = *(undefined1 *)((int)puVar10 + iVar8);
      }
      local_30 = param_1 + 0xec00;
      puVar9[3] = 0x44;
      puVar9[2] = 0x17;
      puVar9[1] = param_1;
      *puVar9 = local_30;
                    /* try { // try from 04079b0e to 04079b50 has its CatchHandler @ 04079c34 */
      puVar9[-1] = 0x4079b13;
      puVar11 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
      uVar5 = 0x44;
      bVar12 = ((uint)puVar11 & 1) != 0;
      if (bVar12) {
        uVar1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        *(undefined1 *)puVar11 = uVar1;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        uVar5 = 0x43;
      }
      if (((uint)puVar11 & 2) != 0) {
        uVar2 = *(undefined2 *)param_2;
        uVar5 = uVar5 - 2;
        param_2 = (undefined4 *)((int)param_2 + 2);
        *(undefined2 *)puVar11 = uVar2;
        puVar11 = (undefined4 *)((int)puVar11 + 2);
      }
      iVar8 = 0;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *param_2;
        param_2 = param_2 + (uint)bVar13 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      }
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)puVar11 = *(undefined2 *)param_2;
        iVar8 = 2;
      }
      if (bVar12) {
        *(undefined1 *)((int)puVar11 + iVar8) = *(undefined1 *)((int)param_2 + iVar8);
      }
      *puVar9 = local_30;
      puVar9[-1] = 0x4079b51;
      D3D9CommandQueue__CommandSubmitted();
    }
  }
  else {
    puVar11 = (undefined4 *)(iVar8 + 0x98);
    uVar5 = 0x44;
    *(undefined4 *)(iVar8 + 0x94) = 1;
    bVar12 = ((uint)puVar11 & 1) != 0;
    if (bVar12) {
      uVar1 = *(undefined1 *)param_2;
      puVar11 = (undefined4 *)(iVar8 + 0x99);
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)(iVar8 + 0x98) = uVar1;
      uVar5 = 0x43;
    }
    if (((uint)puVar11 & 2) != 0) {
      uVar2 = *(undefined2 *)param_2;
      uVar5 = uVar5 - 2;
      param_2 = (undefined4 *)((int)param_2 + 2);
      *(undefined2 *)puVar11 = uVar2;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
    }
    iVar8 = 0;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *param_2;
      param_2 = param_2 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    if ((uVar5 & 2) != 0) {
      *(undefined2 *)puVar11 = *(undefined2 *)param_2;
      iVar8 = 2;
    }
    if (bVar12) {
      *(undefined1 *)((int)puVar11 + iVar8) = *(undefined1 *)((int)param_2 + iVar8);
    }
  }
  *puVar9 = (uint)local_20;
  puVar9[-1] = 0x40799cb;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetNPatchMode @0x04079ff0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetNPatchMode(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_3c;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x407a10e;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407a0b4;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407a03c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407a0cb;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x407a0f7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x75ec);
  if (iVar1 == 0) {
    if (param_2 != *(float *)(param_1 + 0x8a0)) {
      *(float *)(param_1 + 0x8a0) = param_2;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0xdc) = 1;
    *(float *)(iVar1 + 0xe0) = param_2;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x407a079;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetPaletteEntries @0x040733f0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetPaletteEntries(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x40734ce;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407347c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4073431;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407348b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40734b3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4073449;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetScissorRect @0x04079e20 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetScissorRect(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar5 = local_4c;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    local_20[0] = &local_24;
    local_24 = iVar1;
    if (iVar1 != 0) {
      piVar5 = local_4c;
      if (*(char *)(iVar1 + 0xebbc) != '\0') {
        local_4c[0] = iVar1 + 0xebc4;
        uStack_50 = 0x4079f4e;
        EnterCriticalSection();
        piVar5 = &uStack_50;
      }
      if (*(int *)(iVar1 + 0xec64) == 0) {
        if (*(int *)(iVar1 + 0xebc0) != 0) {
          piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar5[2] = 0x3ae;
          piVar5[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar5 = (int)"!mCurrentD3D9Thread";
          piVar5[-1] = 0x4079ef4;
          FUN_0400a810();
        }
        piVar5[-1] = 0x4079e71;
        uVar2 = FUN_0415b750();
        *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
      }
      else {
        local_30 = *(int *)(iVar1 + 0xebc0);
        piVar5[-1] = 0x4079f0e;
        iVar3 = FUN_0415b750();
        if (local_30 != iVar3) {
          piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
          piVar5[2] = 0x3b3;
          piVar5[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
          piVar5[-1] = 0x4079f3b;
          FUN_0400a810();
        }
      }
      *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x75ec);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xcbc) = *param_2;
      *(undefined4 *)(param_1 + 0xcc0) = param_2[1];
      *(undefined4 *)(param_1 + 0xcc4) = param_2[2];
      *(undefined4 *)(param_1 + 0xcc8) = param_2[3];
      piVar5[3] = 0x10;
      piVar5[2] = 0x2d;
      piVar5[1] = param_1;
      *piVar5 = param_1 + 0xec00;
                    /* try { // try from 04079f9d to 04079fbf has its CatchHandler @ 04079fd2 */
      piVar5[-1] = 0x4079fa2;
      puVar4 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
      *puVar4 = *param_2;
      puVar4[1] = param_2[1];
      puVar4[2] = param_2[2];
      puVar4[3] = param_2[3];
      *piVar5 = param_1 + 0xec00;
      piVar5[-1] = 0x4079fc0;
      D3D9CommandQueue__CommandSubmitted();
    }
    else {
      *(undefined4 *)(iVar1 + 0x100) = 1;
      *(undefined4 *)(iVar1 + 0x104) = *param_2;
      *(undefined4 *)(iVar1 + 0x108) = param_2[1];
      *(undefined4 *)(iVar1 + 0x10c) = param_2[2];
      *(undefined4 *)(iVar1 + 0x110) = param_2[3];
    }
    *piVar5 = (int)local_20;
    piVar5[-1] = 0x4079ec1;
    direct3ddevice9imp_040a2df0();
    uVar2 = 0;
  }
  return uVar2;
}

// --- Direct3DDevice9Imp::SetSoftwareVertexProcessing @0x04072fc0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetSoftwareVertexProcessing(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_30;
  int local_2c [6];
  int local_14;
  int *local_10;
  
  piVar5 = local_2c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_10 = &local_14;
  local_14 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_2c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_2c[0] = iVar1 + 0xebc4;
      uStack_30 = 0x407309e;
      EnterCriticalSection();
      piVar5 = &uStack_30;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407304c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4073001;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407305b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4073083;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *piVar5 = (int)&local_10;
  piVar5[-1] = 0x4073019;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetStreamSource @0x04071fa0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetStreamSource(int param_1,uint param_2,int *param_3,int param_4,int param_5)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int aiStack_60 [6];
  char *local_48;
  uint local_44;
  int local_34;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar7 = aiStack_60 + 5;
  if (0xf < param_2) {
    local_48 = "ERROR!! game wants to use stream %u";
    aiStack_60[5] = 0xf;
    local_44 = param_2;
    aiStack_60[4] = 0x40720db;
    FUN_0402cd10();
  }
  iVar5 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar5;
  if (iVar5 != 0) {
    piVar7 = aiStack_60 + 5;
    if (*(char *)(iVar5 + 0xebbc) != '\0') {
      aiStack_60[5] = iVar5 + 0xebc4;
      aiStack_60[4] = 0x407212e;
      EnterCriticalSection();
      piVar7 = aiStack_60 + 4;
    }
    if (*(int *)(iVar5 + 0xec64) == 0) {
      if (*(int *)(iVar5 + 0xebc0) != 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3ae;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"!mCurrentD3D9Thread";
        piVar7[-1] = 0x40720a4;
        FUN_0400a810();
      }
      piVar7[-1] = 0x4071ff7;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar5 + 0xebc0) = uVar3;
    }
    else {
      local_34 = *(int *)(iVar5 + 0xebc0);
      piVar7[-1] = 0x40720ee;
      iVar4 = FUN_0415b750();
      if (local_34 != iVar4) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3b3;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar7[-1] = 0x407211b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar5 + 0xec64) = *(int *)(iVar5 + 0xec64) + 1;
  }
  iVar5 = *(int *)(param_1 + 0x75ec);
  if (iVar5 == 0) {
    local_34 = param_2 + 0xcc;
    iVar5 = local_34 * 0x10 + param_1;
    piVar2 = *(int **)(iVar5 + 0xc);
    if (param_3 == piVar2) {
      if ((*(int *)(iVar5 + 0x10) == param_4) && (*(int *)(iVar5 + 0x14) == param_5))
      goto LAB_04072068;
    }
    else {
      if (param_3 != (int *)0x0) {
        iVar5 = *param_3;
        *piVar7 = (int)param_3;
                    /* try { // try from 04072164 to 040721eb has its CatchHandler @ 04072211 */
        pcVar1 = *(code **)(iVar5 + 4);
        piVar7[-1] = 0x4072167;
        (*pcVar1)();
        piVar7 = piVar7 + -1;
      }
      if (piVar2 != (int *)0x0) {
        iVar5 = *piVar2;
        *piVar7 = (int)piVar2;
        pcVar1 = *(code **)(iVar5 + 8);
        piVar7[-1] = 0x4072176;
        (*pcVar1)();
        piVar7 = piVar7 + -1;
      }
      *(int **)(param_1 + 0xc + local_34 * 0x10) = param_3;
    }
    iVar5 = local_34 * 0x10 + param_1;
    *(int *)(iVar5 + 0x10) = param_4;
    *(int *)(iVar5 + 0x14) = param_5;
    local_34 = param_1 + 0xec00;
    piVar7[3] = 0x10;
    piVar7[2] = 0x24;
    piVar7[1] = param_1;
    *piVar7 = local_34;
    piVar7[-1] = 0x40721bc;
    puVar6 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
    *puVar6 = param_3;
    if (param_3 != (int *)0x0) {
      iVar5 = *param_3;
      *piVar7 = (int)param_3;
      pcVar1 = *(code **)(iVar5 + 4);
      piVar7[-1] = 0x40721cc;
      (*pcVar1)();
      piVar7 = piVar7 + -1;
    }
    puVar6[1] = param_2;
    puVar6[2] = param_4;
    puVar6[3] = param_5;
    *piVar7 = local_34;
    piVar7[-1] = 0x40721ec;
    D3D9CommandQueue__CommandSubmitted();
  }
  else {
    if (param_3 != (int *)0x0) {
      iVar4 = *param_3;
      *piVar7 = (int)param_3;
                    /* try { // try from 0407201b to 04072052 has its CatchHandler @ 04072211 */
      pcVar1 = *(code **)(iVar4 + 4);
      piVar7[-1] = 0x407201e;
      (*pcVar1)();
      piVar7 = piVar7 + -1;
    }
    if (*(int *)(iVar5 + 4 + (param_2 + 0x264) * 4) == 0) {
      local_30 = param_2 + 0xa1;
    }
    else {
      local_30 = param_2 + 0xa1;
      piVar2 = *(int **)(iVar5 + 4 + local_30 * 0x10);
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
        *piVar7 = (int)piVar2;
        pcVar1 = *(code **)(iVar4 + 8);
        piVar7[-1] = 0x4072053;
        (*pcVar1)();
        piVar7 = piVar7 + -1;
      }
    }
    *(undefined4 *)(iVar5 + 4 + (param_2 + 0x264) * 4) = 1;
    *(int **)(iVar5 + 4 + local_30 * 0x10) = param_3;
  }
LAB_04072068:
  *piVar7 = (int)local_20;
  piVar7[-1] = 0x4072073;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetStreamSourceFreq @0x04071c60 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetStreamSourceFreq(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uStack_50;
  int local_4c;
  char *local_48;
  uint local_44;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar5 = &local_4c;
  if (0xf < param_2) {
    local_44 = param_2;
    local_48 = "ERROR!! game wants to set freq in stream %u";
    local_4c = 0xf;
    uStack_50 = 0x4071d58;
    FUN_0402cd10();
  }
  local_20[0] = &local_24;
  iVar3 = *(int *)(param_1 + 0xc);
  local_24 = iVar3;
  if (iVar3 != 0) {
    piVar5 = &local_4c;
    if (*(char *)(iVar3 + 0xebbc) != '\0') {
      local_4c = iVar3 + 0xebc4;
      uStack_50 = 0x4071dae;
      EnterCriticalSection();
      piVar5 = &uStack_50;
    }
    if (*(int *)(iVar3 + 0xec64) == 0) {
      if (*(int *)(iVar3 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4071d34;
        FUN_0400a810();
      }
      piVar5[-1] = 0x4071cbb;
      uVar1 = FUN_0415b750();
      *(undefined4 *)(iVar3 + 0xebc0) = uVar1;
    }
    else {
      local_30 = *(int *)(iVar3 + 0xebc0);
      piVar5[-1] = 0x4071d6e;
      iVar2 = FUN_0415b750();
      if (local_30 != iVar2) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4071d9b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar3 + 0xec64) = *(int *)(iVar3 + 0xec64) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x75ec);
  if (iVar3 == 0) {
    iVar3 = (param_2 + 0xcc) * 0x10 + param_1;
    if (*(uint *)(iVar3 + 0x18) != param_3) {
      *(uint *)(iVar3 + 0x18) = param_3;
      piVar5[3] = 8;
      piVar5[2] = 0x26;
      piVar5[1] = param_1;
      *piVar5 = param_1 + 0xec00;
                    /* try { // try from 04071dfb to 04071e0c has its CatchHandler @ 04071e12 */
      piVar5[-1] = 0x4071e00;
      puVar4 = (uint *)D3D9CommandQueue__GetNextCommandPointer();
      *puVar4 = param_2;
      puVar4[1] = param_3;
      *piVar5 = param_1 + 0xec00;
      piVar5[-1] = 0x4071e0d;
      D3D9CommandQueue__CommandSubmitted();
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x9d4 + param_2 * 4) = 1;
    *(uint *)(iVar3 + 0x10 + (param_2 + 0xa1) * 0x10) = param_3;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x4071cfc;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::SetTexture @0x040741f0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetTexture(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int aiStack_60 [10];
  uint local_38;
  undefined4 *local_34;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar8 = aiStack_60 + 5;
  iVar1 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar8 = aiStack_60 + 5;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_60[5] = iVar1 + 0xebc4;
      aiStack_60[4] = 0x40743be;
      EnterCriticalSection();
      piVar8 = aiStack_60 + 4;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3ae;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"!mCurrentD3D9Thread";
        piVar8[-1] = 0x4074354;
        FUN_0400a810();
      }
      piVar8[-1] = 0x4074240;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar5;
    }
    else {
      local_34 = *(undefined4 **)(iVar1 + 0xebc0);
      piVar8[-1] = 0x407437e;
      puVar7 = (undefined4 *)FUN_0415b750();
      if (local_34 != puVar7) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3b3;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar8[-1] = 0x40743ab;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  if (param_2 < 0x10) {
    local_34 = (undefined4 *)(param_1 + 0xdcc + param_2 * 4);
LAB_04074263:
    if ((param_3 == (int *)0x0) || ((param_3[0xe] != 2 && (param_3[0xe] != 3)))) {
      iVar1 = *(int *)(param_1 + 0x75ec);
      if (iVar1 == 0) {
        piVar4 = (int *)*local_34;
        if (piVar4 != param_3) {
          if (piVar4 == (int *)0x0) {
            uVar6 = 0;
          }
          else {
            iVar1 = *piVar4;
            *piVar8 = (int)piVar4;
                    /* try { // try from 040743ea to 04074476 has its CatchHandler @ 040744b8 */
            pcVar3 = *(code **)(iVar1 + 8);
            piVar8[-1] = 0x40743ed;
            (*pcVar3)();
            piVar8 = piVar8 + -1;
            uVar6 = 0xffffffff;
          }
          local_38 = (uint)(piVar4 == (int *)0x0);
          *local_34 = param_3;
          if (param_3 != (int *)0x0) {
            iVar1 = *param_3;
            *piVar8 = (int)param_3;
            pcVar3 = *(code **)(iVar1 + 4);
            piVar8[-1] = 0x4074411;
            (*pcVar3)();
            piVar8 = piVar8 + -1;
            uVar6 = local_38;
          }
          local_38 = uVar6;
          piVar8[3] = 0x10;
          piVar8[2] = 0x1d;
          local_34 = (undefined4 *)(param_1 + 0xec00);
          piVar8[1] = param_1;
          *piVar8 = (int)local_34;
          piVar8[-1] = 0x407443e;
          puVar7 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
          *puVar7 = param_3;
          if (param_3 != (int *)0x0) {
            iVar1 = *param_3;
            *piVar8 = (int)param_3;
            pcVar3 = *(code **)(iVar1 + 4);
            piVar8[-1] = 0x407444e;
            (*pcVar3)();
            piVar8 = piVar8 + -1;
          }
          if (param_2 < 0x10) {
            puVar7[1] = param_2;
            puVar7[2] = 0;
          }
          else {
            *(int *)(param_1 + 0xe1c) = *(int *)(param_1 + 0xe1c) + local_38;
            puVar7[1] = param_2 - 0x101;
            puVar7[2] = 1;
          }
          puVar7[3] = *(undefined4 *)(param_1 + 0xe1c);
          *piVar8 = (int)local_34;
          piVar8[-1] = 0x4074477;
          D3D9CommandQueue__CommandSubmitted();
        }
        uVar5 = 0;
      }
      else {
        if (0xf < param_2) {
          param_2 = param_2 - 0xf1;
        }
        if (param_3 != (int *)0x0) {
          iVar2 = *param_3;
          *piVar8 = (int)param_3;
                    /* try { // try from 040742a2 to 040742ce has its CatchHandler @ 040744b8 */
          pcVar3 = *(code **)(iVar2 + 4);
          piVar8[-1] = 0x40742a5;
          (*pcVar3)();
          piVar8 = piVar8 + -1;
        }
        local_30 = param_2 + 0x2c4;
        if ((*(int *)(iVar1 + 4 + local_30 * 4) != 0) &&
           (piVar4 = *(int **)(iVar1 + 4 + (param_2 + 0x2d8) * 4), piVar4 != (int *)0x0)) {
          iVar2 = *piVar4;
          *piVar8 = (int)piVar4;
          pcVar3 = *(code **)(iVar2 + 8);
          piVar8[-1] = 0x40742cf;
          (*pcVar3)();
          piVar8 = piVar8 + -1;
        }
        *(int **)(iVar1 + 4 + (param_2 + 0x2d8) * 4) = param_3;
        uVar5 = 0;
        *(undefined4 *)(iVar1 + 4 + local_30 * 4) = 1;
      }
      goto LAB_040742e3;
    }
  }
  else if (param_2 - 0x101 < 4) {
    local_34 = (undefined4 *)(param_1 + 0xa08 + param_2 * 4);
    goto LAB_04074263;
  }
  uVar5 = 0x8876086c;
LAB_040742e3:
  *piVar8 = (int)local_20;
  piVar8[-1] = 0x40742ee;
  direct3ddevice9imp_040a2df0();
  return uVar5;
}

// --- Direct3DDevice9Imp::SetTransform @0x04086840 ---
/* source: direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__SetTransform(int param_1,size_t param_2,size_t *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  size_t *psVar4;
  size_t *psVar5;
  size_t *psVar6;
  undefined4 uStack_50;
  int local_4c [6];
  size_t *local_34;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  psVar6 = (size_t *)local_4c;
  iVar3 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar3;
  if (iVar3 != 0) {
    psVar6 = (size_t *)local_4c;
    if (*(char *)(iVar3 + 0xebbc) != '\0') {
      local_4c[0] = iVar3 + 0xebc4;
      uStack_50 = 0x4086a5e;
      EnterCriticalSection();
      psVar6 = &uStack_50;
    }
    if (*(int *)(iVar3 + 0xec64) == 0) {
      if (*(int *)(iVar3 + 0xebc0) != 0) {
        psVar6[3] = (size_t)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        psVar6[2] = 0x3ae;
        psVar6[1] = (size_t)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *psVar6 = (size_t)"!mCurrentD3D9Thread";
        psVar6[-1] = 0x4086974;
        FUN_0400a810();
      }
      psVar6[-1] = 0x4086890;
      uVar1 = FUN_0415b750();
      *(undefined4 *)(iVar3 + 0xebc0) = uVar1;
    }
    else {
      local_30 = *(int *)(iVar3 + 0xebc0);
      psVar6[-1] = 0x4086a16;
      iVar2 = FUN_0415b750();
      if (local_30 != iVar2) {
        psVar6[3] = (size_t)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        psVar6[2] = 0x3b3;
        psVar6[1] = (size_t)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *psVar6 = (size_t)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        psVar6[-1] = 0x4086a43;
        FUN_0400a810();
      }
    }
    *(int *)(iVar3 + 0xec64) = *(int *)(iVar3 + 0xec64) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x75ec);
  if (iVar3 == 0) {
    psVar6[2] = (size_t)param_3;
    psVar6[1] = param_2;
    *psVar6 = param_1;
                    /* try { // try from 04086a7b to 04086aa1 has its CatchHandler @ 04086b36 */
    psVar6[-1] = 0x4086a80;
    iVar3 = FUN_04086670();
    uVar1 = 0;
    if (iVar3 == 0) {
      psVar6[2] = param_2;
      psVar6[1] = (size_t)"Unknown state in Direct3DDevice9Imp::SetTransform(): %u";
      *psVar6 = 0xf;
      psVar6[-1] = 0x4086aa2;
      FUN_0402cd10();
      uVar1 = 0x8876086c;
    }
  }
  else {
    psVar4 = *(size_t **)(iVar3 + 0x114);
    if (*(size_t **)(iVar3 + 0x114) == (size_t *)0x0) {
      *psVar6 = 0x48;
      psVar6[-1] = 0x4086ab8;
      psVar4 = malloc(*psVar6);
      *(size_t **)(iVar3 + 0x114) = psVar4;
      *psVar4 = param_2;
      psVar4[1] = *param_3;
      psVar4[2] = param_3[1];
      psVar4[3] = param_3[2];
      psVar4[4] = param_3[3];
      psVar4[5] = param_3[4];
      psVar4[6] = param_3[5];
      psVar4[7] = param_3[6];
      psVar4[8] = param_3[7];
      psVar4[9] = param_3[8];
      psVar4[10] = param_3[9];
      psVar4[0xb] = param_3[10];
      psVar4[0xc] = param_3[0xb];
      psVar4[0xd] = param_3[0xc];
      psVar4[0xe] = param_3[0xd];
      psVar4[0xf] = param_3[0xe];
      uVar1 = 0;
      psVar4[0x10] = param_3[0xf];
      *(undefined4 *)(*(int *)(iVar3 + 0x114) + 0x44) = 0;
    }
    else {
      do {
        psVar5 = psVar4;
        if (param_2 == *psVar5) {
          psVar5[1] = *param_3;
          psVar5[2] = param_3[1];
          psVar5[3] = param_3[2];
          psVar5[4] = param_3[3];
          psVar5[5] = param_3[4];
          psVar5[6] = param_3[5];
          psVar5[7] = param_3[6];
          psVar5[8] = param_3[7];
          psVar5[9] = param_3[8];
          psVar5[10] = param_3[9];
          psVar5[0xb] = param_3[10];
          psVar5[0xc] = param_3[0xb];
          psVar5[0xd] = param_3[0xc];
          psVar5[0xe] = param_3[0xd];
          psVar5[0xf] = param_3[0xe];
          uVar1 = 0;
          psVar5[0x10] = param_3[0xf];
          goto LAB_04086936;
        }
        psVar4 = (size_t *)psVar5[0x11];
      } while ((size_t *)psVar5[0x11] != (size_t *)0x0);
      *psVar6 = 0x48;
      psVar6[-1] = 0x408698f;
      local_34 = psVar5;
      psVar4 = malloc(*psVar6);
      *psVar4 = param_2;
      local_34[0x11] = (size_t)psVar4;
      psVar4[1] = *param_3;
      psVar4[2] = param_3[1];
      psVar4[3] = param_3[2];
      psVar4[4] = param_3[3];
      psVar4[5] = param_3[4];
      psVar4[6] = param_3[5];
      psVar4[7] = param_3[6];
      psVar4[8] = param_3[7];
      psVar4[9] = param_3[8];
      psVar4[10] = param_3[9];
      psVar4[0xb] = param_3[10];
      psVar4[0xc] = param_3[0xb];
      psVar4[0xd] = param_3[0xc];
      psVar4[0xe] = param_3[0xd];
      psVar4[0xf] = param_3[0xe];
      uVar1 = 0;
      psVar4[0x10] = param_3[0xf];
      psVar4[0x11] = 0;
    }
  }
LAB_04086936:
  *psVar6 = (size_t)local_20;
  psVar6[-1] = 0x4086941;
  direct3ddevice9imp_040a2df0();
  return uVar1;
}

// --- Direct3DDevice9Imp::SetupRenderPipeline @0x0408fe70 ---
/* source: direct3ddevice9imp */

undefined4 direct3ddevice9imp_0408fe70(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  byte *pbVar9;
  undefined1 local_fc [88];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  byte local_8e [17];
  undefined1 local_7d;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined2 local_42;
  undefined4 local_40 [5];
  undefined1 local_2c [28];
  
  iVar4 = *(int *)(param_1 + 0x52f8);
  *param_2 = -1;
  if (*(char *)(iVar4 + 0x70) == '\0') {
    iVar2 = *(int *)(param_1 + 0x8a8);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x678) != 0) &&
         (*(int *)(param_1 + 0x3ec) != *(int *)(param_1 + 0x3f0))) {
        *(undefined4 *)(param_1 + 0x3e0) = 0;
        *(undefined4 *)(param_1 + 0x3e4) = 0;
        *(undefined4 *)(param_1 + 1000) = 0;
        if (*(int *)(param_1 + 0x80) != 0) {
          iVar4 = *(int *)(param_1 + 0x84);
          if (iVar4 == 2) {
            *(undefined4 *)(param_1 + 0x3e0) = 1;
          }
          else if (iVar4 == 3) {
            *(undefined4 *)(param_1 + 0x3e4) = 1;
          }
          else if (iVar4 == 1) {
            *(undefined4 *)(param_1 + 1000) = 1;
          }
        }
        if (*(int *)(param_1 + 0xec) != 0) {
          iVar4 = *(int *)(param_1 + 0xf0);
          if (iVar4 == 2) {
            *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
          }
          else if (iVar4 == 3) {
            *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
          }
          else if (iVar4 == 1) {
            *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
          }
        }
        if (*(int *)(param_1 + 0x158) != 0) {
          iVar4 = *(int *)(param_1 + 0x15c);
          if (iVar4 == 2) {
            *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
          }
          else if (iVar4 == 3) {
            *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
          }
          else if (iVar4 == 1) {
            *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
          }
        }
        if (*(int *)(param_1 + 0x1c4) != 0) {
          iVar4 = *(int *)(param_1 + 0x1c8);
          if (iVar4 == 2) {
            *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
          }
          else if (iVar4 == 3) {
            *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
          }
          else if (iVar4 == 1) {
            *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
          }
        }
        if (*(int *)(param_1 + 0x230) != 0) {
          iVar4 = *(int *)(param_1 + 0x234);
          if (iVar4 == 2) {
            *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
          }
          else if (iVar4 == 3) {
            *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
          }
          else if (iVar4 == 1) {
            *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
          }
        }
        if (*(int *)(param_1 + 0x29c) != 0) {
          iVar4 = *(int *)(param_1 + 0x2a0);
          if (iVar4 == 2) {
            *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
          }
          else if (iVar4 == 3) {
            *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
          }
          else if (iVar4 == 1) {
            *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
          }
        }
        if (*(int *)(param_1 + 0x308) != 0) {
          iVar4 = *(int *)(param_1 + 0x30c);
          if (iVar4 == 2) {
            *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
          }
          else if (iVar4 == 3) {
            *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
          }
          else if (iVar4 == 1) {
            *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
          }
        }
        if (*(int *)(param_1 + 0x374) != 0) {
          iVar4 = *(int *)(param_1 + 0x378);
          if (iVar4 == 2) {
            *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
          }
          else if (iVar4 == 3) {
            *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
          }
          else if (iVar4 == 1) {
            *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
          }
        }
        *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3ec);
      }
      bzero(local_2c,0x10);
      fixedPipelineEmulation_040bdb70
                (local_2c,param_1 + 0x80,*(undefined4 *)(param_1 + 0x3e0),
                 *(undefined4 *)(param_1 + 0x3e4),*(undefined4 *)(param_1 + 1000),
                 *(undefined1 *)(param_1 + 0xeb4f));
      iVar4 = FUN_040ec280(*(undefined4 *)(param_1 + 0xeb54),local_2c,local_40);
      bVar3 = false;
      *param_2 = iVar4;
    }
    else {
      local_66 = *(undefined4 *)(iVar4 + 0x44);
      local_62 = *(undefined4 *)(iVar4 + 0x48);
      local_5e = *(undefined4 *)(iVar4 + 0x4c);
      local_5a = *(undefined4 *)(iVar4 + 0x50);
      local_56 = *(undefined4 *)(iVar4 + 0x54);
      local_52 = *(undefined4 *)(iVar4 + 0x58);
      local_4e = *(undefined4 *)(iVar4 + 0x5c);
      local_4a = *(undefined4 *)(iVar4 + 0x60);
      local_46 = *(undefined4 *)(iVar4 + 100);
      local_42 = *(undefined2 *)(iVar4 + 0x68);
      if ((*(char *)(param_1 + 0xeb4c) != '\0') &&
         (local_46 = CONCAT22((short)*(undefined4 *)(param_1 + 0x75b4),(undefined2)local_46),
         *(int *)(param_1 + 0x8a4) == 0)) {
        local_42 = FUN_0408f7c0(param_1 + 0x80);
      }
      iVar4 = Direct3DVertexShader9Imp__GetGLSLVertexShaderIndex(iVar2 + 4,&local_66);
      bVar3 = true;
      *param_2 = iVar4;
    }
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x678);
    *(undefined4 *)(param_1 + 0x678) = 0;
    bzero(local_2c,0x10);
    fixedPipelineEmulation_040bdb70(local_2c,param_1 + 0x80,0,0,0,*(undefined1 *)(param_1 + 0xeb4f))
    ;
    iVar4 = FUN_040ec280(*(undefined4 *)(param_1 + 0xeb54),local_2c,local_40);
    bVar3 = false;
    *param_2 = iVar4;
    *(undefined4 *)(param_1 + 0x678) = uVar7;
    iVar4 = *param_2;
  }
  if (iVar4 == -1) {
    FUN_0402cd10(0xf,"Wasn\'t able to choose vertex shader in SetupRenderPipeline()!!!!");
    uVar7 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x8a4);
    *param_3 = -1;
    if (iVar4 == 0) {
      uVar7 = 0;
      if ((*(char *)(param_1 + 0xeb51) != '\0') && (*(int *)(param_1 + 0x490) != 0)) {
        uVar7 = *(undefined4 *)(param_1 + 0x75b8);
      }
      bzero(local_fc,0x6c);
      fixedPipelineEmulation_040be730
                (local_fc,param_1 + 0x80,uVar7,*(undefined1 *)(param_1 + 0xeb4f));
      puVar6 = local_40;
      if (bVar3) {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x8a8) + 0x24);
      }
      local_a4 = *puVar6;
      local_a0 = puVar6[1];
      local_9c = puVar6[2];
      local_98 = puVar6[3];
      local_94 = puVar6[4];
      iVar4 = shader_pch_PrepareFixedPipelineFragment(*(undefined4 *)(param_1 + 0xeb54),local_fc);
      *param_3 = iVar4;
    }
    else {
      local_8e[0] = 0;
      iVar4 = 0;
      local_8e[1] = 0;
      local_8e[2] = 0;
      local_8e[3] = 0;
      local_8e[4] = 0;
      local_8e[5] = 0;
      local_8e[6] = 0;
      local_8e[7] = 0;
      local_8e[8] = 0;
      local_8e[9] = 0;
      local_8e[10] = 0;
      local_8e[0xb] = 0;
      local_8e[0xc] = 0;
      local_8e[0xd] = 0;
      local_8e[0xe] = 0;
      local_8e[0xf] = 0;
      do {
        iVar2 = *(int *)(param_1 + 0xdcc + iVar4 * 4);
        if (iVar2 == 0) {
          pbVar9 = local_8e + iVar4;
          bVar8 = *pbVar9;
          cVar1 = *(char *)(param_1 + 0xeb4c);
          *pbVar9 = bVar8 & 0xf8 | 1;
          if (cVar1 != '\0') {
            *pbVar9 = bVar8 & 0xe0 | 1;
          }
        }
        else {
          uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x54))(iVar2 + 4);
          if ((uVar5 - 0x46 < 0xe) && ((1 << ((byte)(uVar5 - 0x46) & 0x1f) & 0x36abU) != 0)) {
            if (*(int *)(iVar2 + 0x24) != 3) {
              if (*(int *)(iVar2 + 0x24) == 5) {
                local_8e[iVar4] = local_8e[iVar4] & 0xf8 | 6;
                goto LAB_04090038;
              }
              FUN_0400a810("false",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                           ,0x2096,
                           "void Direct3DDevice9Imp::GetCurrentFragmentCompileArgs(FragmentShaderCompileArgs&) const"
                          );
            }
            local_8e[iVar4] = local_8e[iVar4] & 0xf8 | 5;
          }
          else if (*(int *)(iVar2 + 0x24) == 4) {
            local_8e[iVar4] = local_8e[iVar4] & 0xf8 | 3;
          }
          else if (*(int *)(iVar2 + 0x24) == 5) {
            local_8e[iVar4] = local_8e[iVar4] & 0xf8 | 2;
          }
          else {
            local_8e[iVar4] = local_8e[iVar4] & 0xf8 | 1;
          }
LAB_04090038:
          if (*(char *)(param_1 + 0xeb4c) != '\0') {
            bVar8 = local_8e[iVar4] & 0xe7;
            if (uVar5 == 0x32) {
LAB_040903a2:
              bVar8 = bVar8 | 0x10;
            }
            else if (uVar5 < 0x33) {
              if (uVar5 == 0x1c) {
                bVar8 = bVar8 | 8;
              }
            }
            else if (uVar5 == 0x33) {
              bVar8 = bVar8 | 0x18;
            }
            else if (uVar5 == 0x51) goto LAB_040903a2;
            local_8e[iVar4] = bVar8;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x10);
      local_8e[0x10] = *(int *)(param_1 + 0x4c8) != 0;
      if (*(int *)(param_1 + 0x4c4) == 0) {
        local_7d = 0xff;
      }
      else {
        local_7d = (undefined1)*(undefined4 *)(param_1 + 0x4e0);
      }
      local_7c = 0;
      if ((*(char *)(param_1 + 0xeb51) != '\0') && (*(int *)(param_1 + 0x490) != 0)) {
        local_7c = *(undefined2 *)(param_1 + 0x75b8);
      }
      puVar6 = local_40;
      if (bVar3) {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x8a8) + 0x24);
      }
      local_7a = *puVar6;
      local_76 = puVar6[1];
      local_72 = puVar6[2];
      local_6e = puVar6[3];
      local_6a = puVar6[4];
      iVar4 = Direct3DPixelShader9Imp__GetGLSLFragmentShaderIndex
                        (*(int *)(param_1 + 0x8a4) + 4,local_8e);
      *param_3 = iVar4;
    }
    uVar7 = 1;
    if (iVar4 == -1) {
      FUN_0402cd10(0xf,"Wasn\'t able to choose fragment shader in SetupRenderPipeline()!!!!");
      return 0;
    }
  }
  return uVar7;
}

// --- Direct3DDevice9Imp::SetupTexturesForDraw @0x0408ef80 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

void Direct3DDevice9Imp__SetupTexturesForDraw(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int local_24;
  
  if (*(int *)(param_1 + 0x82c8) != 0) {
    bVar3 = true;
    local_24 = 0x10;
    if (*(char *)(*(int *)(param_1 + 0xe9ec) + 0x80) != '\0') goto LAB_0408efb8;
  }
  if ((*(uint *)(param_1 + 0xea04) & 0x1c00) == 0) {
    bVar3 = false;
    local_24 = 1;
  }
  else {
    bVar3 = false;
    local_24 = *(int *)(param_1 + 0x8164);
    if (*(int *)(param_1 + 0x8164) <= *(int *)(*(int *)(param_1 + 0xe9ec) + 0x7c)) {
      local_24 = *(int *)(*(int *)(param_1 + 0xe9ec) + 0x7c);
    }
    if (local_24 < 1) {
      local_24 = 1;
    }
  }
LAB_0408efb8:
  iVar5 = 0;
  iVar7 = param_1;
  do {
    while ((iVar8 = *(int *)(iVar7 + 0x8278), iVar8 != 0 &&
           (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x3c + iVar5 * 4) != -1))) {
      if (*(int *)(iVar8 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar8 = *(int *)(iVar8 + 0x244);
      if (iVar8 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x25d3,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      uVar6 = 1 << ((byte)iVar5 & 0x1f);
      if ((*(uint *)(param_1 + 0x8160) & uVar6) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState
                          (param_1 + 0xeb9c,param_1 + 0x7c60 + iVar5 * 0x38,uVar2);
        *(undefined4 *)(iVar7 + 0x80c0) = uVar2;
        *(undefined4 *)(iVar7 + 0x8110) = uVar4;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & ~uVar6;
      }
      iVar1 = *(int *)(iVar7 + 0x8110);
      local_40 = *(int *)(param_1 + 0xeb48);
      if (iVar1 != *(int *)(local_40 + 8 + (iVar5 + 0xac) * 4)) {
        (*DAT_0451e3c4)(iVar5,iVar1);
        *(int *)(local_40 + 8 + (iVar5 + 0xac) * 4) = iVar1;
        local_40 = *(int *)(param_1 + 0xeb48);
      }
      iVar7 = iVar7 + 4;
      FUN_040c6e20(local_40,iVar5 + 0x84c0,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 8));
      iVar5 = iVar5 + 1;
      if (local_24 <= iVar5) goto LAB_0408f0fa;
    }
    iVar7 = iVar7 + 4;
    FUN_040c6e20(*(undefined4 *)(param_1 + 0xeb48),iVar5 + 0x84c0,0xde1,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < local_24);
LAB_0408f0fa:
  *(undefined4 *)(param_1 + 0x8164) = *(undefined4 *)(*(int *)(param_1 + 0xe9ec) + 0x7c);
  if (bVar3) {
    iVar7 = *(int *)(param_1 + 0x82b8);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x2c) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 1) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x7fe0,uVar2);
        *(undefined4 *)(param_1 + 0x8100) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffeffff;
        *(undefined4 *)(param_1 + 0x8150) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x8150);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2f4)) {
        (*DAT_0451e3c4)(0xf,iVar5);
        *(int *)(iVar8 + 0x2f4) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,33999,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
    iVar7 = *(int *)(param_1 + 0x82bc);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x30) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 2) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8018,uVar2);
        *(undefined4 *)(param_1 + 0x8104) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffdffff;
        *(undefined4 *)(param_1 + 0x8154) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x8154);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2f0)) {
        (*DAT_0451e3c4)(0xe,iVar5);
        *(int *)(iVar8 + 0x2f0) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,0x84ce,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
    iVar7 = *(int *)(param_1 + 0x82c0);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x34) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 4) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8050,uVar2);
        *(undefined4 *)(param_1 + 0x8108) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffbffff;
        *(undefined4 *)(param_1 + 0x8158) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x8158);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2ec)) {
        (*DAT_0451e3c4)(0xd,iVar5);
        *(int *)(iVar8 + 0x2ec) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,0x84cd,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
    iVar7 = *(int *)(param_1 + 0x82c4);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x38) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 8) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8088,uVar2);
        *(undefined4 *)(param_1 + 0x810c) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfff7ffff;
        *(undefined4 *)(param_1 + 0x815c) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x815c);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2e8)) {
        (*DAT_0451e3c4)(0xc,iVar5);
        *(int *)(iVar8 + 0x2e8) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,0x84cc,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
  }
  return;
}

// --- Direct3DDevice9Imp::SetupVertexAttributeArrays @0x04093480 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__SetupVertexAttributeArrays(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int local_34;
  char *local_2c;
  int local_28;
  
  piVar8 = *(int **)(param_1 + 0xeb48);
  iVar1 = *(int *)(param_1 + 0xe9d4);
  bVar2 = true;
  if (piVar8[0x10] == iVar1 + 0x24) {
    if ((param_3 == 0) && (piVar8[0x11] == param_2)) {
      bVar2 = false;
      if ((*(uint *)(param_1 + 0xea04) & 0x2c0) == 0) {
        piVar8[0x12] = **(int **)(param_1 + 0xe9ec);
        return;
      }
    }
    else {
      bVar2 = true;
    }
  }
  uVar6 = *(int *)(iVar1 + 0x34) - *(int *)(iVar1 + 0x30) >> 2;
  if (0x10 < uVar6) {
    FUN_0400a810("numUsedStreams <= 16",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x2776,"void Direct3DDevice9Imp::SetupVertexAttributeArrays(INT, INT)");
    piVar8 = *(int **)(param_1 + 0xeb48);
  }
  if (bVar2) {
LAB_040934e2:
    local_34 = **(int **)(param_1 + 0xe9ec);
  }
  else {
    if ((*(byte *)(param_1 + 0xea05) & 2) != 0) {
      if (piVar8[100] != uVar6) {
        FUN_0400a810("mOpenGLContextCache->VertexArrays_NumUsedStreams == numUsedStreams",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x277b,"void Direct3DDevice9Imp::SetupVertexAttributeArrays(INT, INT)");
        piVar8 = *(int **)(param_1 + 0xeb48);
      }
      if (uVar6 != 0) {
        iVar9 = *(int *)(iVar1 + 0x30);
        uVar7 = 0;
        do {
          iVar3 = memcmp(piVar8 + (uVar7 + 4) * 4 + 3,
                         (void *)(param_1 + 8 + (*(int *)(iVar9 + uVar7 * 4) + 0x817) * 0x10),0x10);
          if (iVar3 != 0) goto LAB_040934e2;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar6);
      }
    }
    piVar5 = *(int **)(param_1 + 0xe9ec);
    local_34 = *piVar5;
    if (piVar8[0x12] == local_34) {
LAB_04093730:
      piVar8[0x12] = local_34;
      return;
    }
    local_2c = *(char **)(iVar1 + 0x24);
    uVar7 = (*(int *)(iVar1 + 0x28) - (int)local_2c >> 3) * -0x55555555;
    if (uVar7 < 0x10) {
      if (uVar7 == 0) goto LAB_04093730;
    }
    else {
      FUN_0400a810("attribsSize < 16",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x278b,"void Direct3DDevice9Imp::SetupVertexAttributeArrays(INT, INT)");
      piVar5 = *(int **)(param_1 + 0xe9ec);
      piVar8 = *(int **)(param_1 + 0xeb48);
      local_34 = *piVar5;
      local_2c = *(char **)(iVar1 + 0x24);
    }
    if ((*(char *)((int)piVar5 + *piVar8 * 2 + 9) == *local_2c) &&
       (*(char *)((int)piVar5 + *piVar8 * 2 + 10) == local_2c[1])) {
      local_28 = 0x18;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        if (uVar10 == uVar7) goto LAB_04093730;
        pcVar4 = local_2c + local_28;
      } while ((*(char *)((int)piVar5 + piVar8[uVar10] * 2 + 9) == *pcVar4) &&
              (local_28 = local_28 + 0x18,
              *(char *)((int)piVar5 + piVar8[uVar10] * 2 + 10) == pcVar4[1]));
    }
  }
  *piVar8 = -1;
  piVar8[1] = -1;
  piVar8[2] = -1;
  piVar8[3] = -1;
  piVar8[0x10] = iVar1 + 0x24;
  piVar8[0x12] = local_34;
  piVar8[4] = -1;
  piVar8[5] = -1;
  piVar8[6] = -1;
  piVar8[7] = -1;
  piVar8[8] = -1;
  piVar8[9] = -1;
  piVar8[10] = -1;
  piVar8[0xb] = -1;
  piVar8[0xc] = -1;
  piVar8[0xd] = -1;
  piVar8[0xe] = -1;
  piVar8[0xf] = -1;
  piVar8[0x11] = param_2;
  piVar8[100] = uVar6;
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      iVar3 = (uVar7 + 4) * 0x10 + *(int *)(param_1 + 0xeb48);
      iVar9 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar9 = (*(int *)(*(int *)(iVar1 + 0x30) + iVar9) + 0x817) * 0x10 + param_1;
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar9 + 8);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar9 + 0xc);
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar9 + 0x10);
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar9 + 0x14);
    } while (uVar7 != uVar6);
  }
  Direct3DDevice9Imp__VertexArrays_EnableArrays();
  return;
}

// --- Direct3DDevice9Imp::ShowCursor @0x04070750 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_ShowCursor(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_5c [11];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar5 = aiStack_5c + 4;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = aiStack_5c + 4;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_5c[4] = iVar1 + 0xebc4;
      aiStack_5c[3] = 0x40708be;
      EnterCriticalSection();
      piVar5 = aiStack_5c + 3;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4070844;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407079d;
      uVar2 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar2;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x4070876;
      iVar4 = FUN_0415b750();
      if (local_30 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x40708a3;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xeb38);
  *piVar5 = (int)&local_2c;
                    /* try { // try from 040707b6 to 040707f5 has its CatchHandler @ 040708c6 */
  piVar5[-1] = 0x40707bb;
  eON_GetCursorPos();
  *(undefined4 *)(param_1 + 0xeb3c) = local_2c;
  *(undefined4 *)(param_1 + 0xeb40) = local_28;
  if (*(int *)(param_1 + 0x75d4) == 0) {
    piVar6 = piVar5 + -1;
    if (*(int *)(param_1 + 0x75d8) != 0) {
      *(int *)(param_1 + 0xeb38) = param_2;
      piVar6 = piVar5 + -1;
    }
  }
  else {
    *(int *)(param_1 + 0xeb38) = param_2;
    piVar5[-1] = param_2;
    piVar5[-2] = 0x40707e8;
    eON_SetCursorVisible();
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x75d4);
    }
    piVar5[-1] = uVar3;
    piVar5[-2] = 0x40707f6;
    eON_SetCursor();
    piVar6 = piVar5 + -2;
  }
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x4070804;
  direct3ddevice9imp_040a2df0();
  return uVar2;
}

// --- Direct3DDevice9Imp::StretchRect @0x040764b0 ---
/* source: direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__StretchRect
          (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,undefined4 param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *__dest;
  void *__src;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  byte bVar12;
  undefined4 uStackY_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  undefined4 local_fc;
  int *local_f8;
  int *local_f4;
  int *local_e4;
  int *local_e0;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  void *local_38;
  uint local_34;
  void *local_30;
  int local_2c;
  undefined1 local_28 [4];
  int *local_24;
  int *local_20;
  
  bVar12 = 0;
  ppiVar5 = (int **)&stack0xffffff24;
  if (((param_4 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_2 == param_4)) {
    return 0x8876086c;
  }
  uVar7 = 0x8876086c;
  local_2c = param_1[3];
  local_e0 = (int *)0x40764fd;
  direct3ddevice9imp_040704e0();
  ppiVar4 = (int **)&stack0xffffff24;
  if ((param_2[0x1f] != 0) || (ppiVar4 = (int **)&stack0xffffff24, param_4[0x1f] != 0))
  goto LAB_04076504;
  if (param_3 == (int *)0x0) {
    local_54 = param_2[0x22];
    local_5c = 0;
    local_58 = 0;
    local_50 = param_2[0x23];
  }
  else {
    local_5c = *param_3;
    local_58 = param_3[1];
    local_54 = param_3[2];
    local_50 = param_3[3];
    ppiVar4 = (int **)&stack0xffffff24;
    if (local_58 < 0) goto LAB_04076504;
  }
  if (((local_5c < 0) || (local_50 < 0)) || (local_54 < 0)) {
LAB_040767c0:
    uVar7 = 0x8876086c;
    ppiVar4 = (int **)&stack0xffffff24;
    goto LAB_04076504;
  }
  uVar7 = 0x8876086c;
  ppiVar4 = (int **)&stack0xffffff24;
  if ((((param_2[0x22] < local_5c) || (ppiVar4 = (int **)&stack0xffffff24, param_2[0x22] < local_54)
       ) || (ppiVar4 = (int **)&stack0xffffff24, param_2[0x23] < local_58)) ||
     (ppiVar4 = (int **)&stack0xffffff24, param_2[0x23] < local_50)) goto LAB_04076504;
  if (param_5 == (int *)0x0) {
    local_4c = 0;
    local_48 = 0;
    local_44 = param_4[0x22];
    local_40 = param_4[0x23];
  }
  else {
    local_4c = *param_5;
    local_48 = param_5[1];
    local_44 = param_5[2];
    local_40 = param_5[3];
    ppiVar4 = (int **)&stack0xffffff24;
    if (local_48 < 0) goto LAB_04076504;
  }
  if (((local_4c < 0) || (local_40 < 0)) || (local_44 < 0)) goto LAB_040767c0;
  uVar7 = 0x8876086c;
  ppiVar4 = (int **)&stack0xffffff24;
  if (((param_4[0x22] < local_4c) || (ppiVar4 = (int **)&stack0xffffff24, param_4[0x22] < local_44))
     || ((ppiVar4 = (int **)&stack0xffffff24, param_4[0x23] < local_48 ||
         (ppiVar4 = (int **)&stack0xffffff24, param_4[0x23] < local_40)))) goto LAB_04076504;
  iVar8 = local_44 - local_4c;
  piVar9 = (int *)(local_40 - local_48);
  iVar10 = local_54 - local_5c;
  piVar11 = (int *)(local_50 - local_58);
  if (param_2[0x24] == 2) {
    if (*(int *)(param_2[0x25] + 0x228) != 1) {
      local_e0 = (int *)0x4076a35;
      FUN_0400a810();
    }
    if ((piVar9 == piVar11) && (iVar8 == iVar10)) {
      iVar8 = param_4[0x24];
      if (iVar8 != 2) {
LAB_04076a54:
        if (iVar8 != 3) {
          local_e0 = (int *)0x4076a6d;
          FUN_0402cd10();
          ppiVar5 = (int **)&stack0xffffff24;
          goto LAB_04076a6d;
        }
        goto LAB_04076a82;
      }
      local_e0 = (int *)0x4076c5f;
      puVar3 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
      *puVar3 = param_2;
      local_e0 = (int *)0x4076c6b;
      (**(code **)(*param_2 + 4))();
      puVar3[1] = param_4;
      local_e0 = param_4;
      local_e4 = (int *)0x4076c7c;
      (**(code **)(*param_4 + 4))();
LAB_04076c7c:
      local_60 = param_1 + 0x3b00;
      piVar9 = &local_5c;
      piVar11 = puVar3 + 2;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
      piVar9 = &local_4c;
      piVar11 = puVar3 + 6;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
      local_e4 = local_60;
      D3D9CommandQueue__CommandSubmitted();
    }
    else {
      iVar8 = param_4[0x24];
      if (iVar8 != 2) goto LAB_04076a54;
LAB_04076a82:
      if (param_2[0x31] != 0) {
        local_e0 = (int *)0x4076b87;
        FUN_0400a810();
      }
      if ((param_4[0x24] == 2) && (*(int *)(param_4[0x25] + 0x228) != 1)) {
        local_e0 = (int *)0x4076ace;
        FUN_0400a810();
      }
      local_e0 = (int *)0x4076af8;
      puVar3 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
      *puVar3 = param_2;
      local_e0 = (int *)0x4076b04;
      (**(code **)(*param_2 + 4))();
      iVar8 = *param_4;
      puVar3[1] = param_4;
      local_e0 = param_4;
      local_e4 = (int *)0x4076b13;
      (**(code **)(iVar8 + 4))();
LAB_04076b13:
      local_60 = param_1 + 0x3b00;
      piVar9 = &local_5c;
      piVar11 = puVar3 + 2;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
      piVar9 = &local_4c;
      piVar11 = puVar3 + 6;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
      puVar3[10] = param_6;
      local_e4 = local_60;
      D3D9CommandQueue__CommandSubmitted();
    }
    ppiVar4 = &local_e4;
    uVar7 = 0;
    iVar8 = param_1[0x3b11];
    param_4[0x17] = param_1[0x3b10];
    param_4[0x18] = iVar8;
  }
  else {
    if (param_2[0x24] == 3) {
      if (param_4[0x24] == 2) {
        if (param_4[0x31] < 0) {
          local_e0 = (int *)0x4076da0;
          FUN_0400a810();
        }
        if ((piVar11 == piVar9) && (iVar10 == iVar8)) {
          local_e0 = (int *)0x4076d5c;
          puVar3 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
          *puVar3 = param_2;
          local_e0 = (int *)0x4076d68;
          (**(code **)(*param_2 + 4))();
          iVar8 = *param_4;
          puVar3[1] = param_4;
          local_e0 = param_4;
          local_e4 = (int *)0x4076d77;
          (**(code **)(iVar8 + 4))();
          goto LAB_04076c7c;
        }
        local_e0 = (int *)0x4076dcd;
        puVar3 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
        *puVar3 = param_2;
        local_e0 = (int *)0x4076dd9;
        (**(code **)(*param_2 + 4))();
        iVar8 = *param_4;
        puVar3[1] = param_4;
        local_e0 = param_4;
        local_e4 = (int *)0x4076de8;
        (**(code **)(iVar8 + 4))();
        goto LAB_04076b13;
      }
      if (param_4[0x24] == 3) {
        local_e0 = (int *)0x4076d17;
        FUN_0402cd10();
        ppiVar5 = (int **)&stack0xffffff24;
      }
      else {
        local_e0 = (int *)0x4076ce5;
        FUN_0402cd10();
        ppiVar5 = (int **)&stack0xffffff24;
      }
    }
    else {
      if (param_4[0x24] == 2) {
        if ((((param_2[0x1f] == 2) && (param_4[0x1f] == 0)) && (piVar11 == piVar9)) &&
           (iVar10 == iVar8)) {
          local_e0 = (int *)0x4076869;
          FUN_0402cd10();
        }
      }
      else if (param_4[0x24] != 3) {
        if ((piVar11 == piVar9) && (iVar10 == iVar8)) {
                    /* try { // try from 0407670c to 04076bdd has its CatchHandler @ 04076be3 */
          local_e0 = (int *)0x407670f;
          iVar8 = (**(code **)(param_2[1] + 0x40))();
          if (iVar8 < 0) {
            local_e0 = (int *)0x4076bde;
            FUN_0402cd10();
          }
          else {
            local_e0 = (int *)0x407674c;
            iVar8 = (**(code **)(param_4[1] + 0x40))();
            if (-1 < iVar8) {
              uVar2 = local_34 / (uint)param_2[0x22];
              __dest = local_38;
              __src = local_30;
              for (iVar8 = 0; iVar8 < (int)piVar11; iVar8 = iVar8 + 1) {
                local_e0 = (int *)0x407678a;
                memcpy(__dest,__src,iVar10 * uVar2);
                __src = (void *)((int)__src + local_34);
                __dest = (void *)((int)__dest + local_3c);
              }
              goto LAB_04076a6d;
            }
            local_e0 = (int *)0x40767b9;
            FUN_0402cd10();
          }
        }
        goto LAB_040767c0;
      }
      local_24 = (int *)0x0;
      local_e0 = (int *)0x40768b4;
      iVar8 = (**(code **)(*param_1 + 100))();
      if (iVar8 < 0) {
        local_e0 = (int *)0x4076bc5;
        FUN_0402cd10();
        ppiVar5 = (int **)&stack0xffffff24;
      }
      else {
        local_e0 = (int *)0x40768e6;
        iVar8 = (**(code **)(*local_24 + 0x4c))();
        if (-1 < iVar8) {
          local_e4 = (int *)0x10;
          local_f4 = (int *)0x4076910;
          iVar8 = (**(code **)(param_2[1] + 0x40))();
          if (iVar8 < 0) {
                    /* try { // try from 04076c07 to 04076de7 has its CatchHandler @ 04076be3 */
            local_f4 = (int *)0x4076c0c;
            FUN_0402cd10();
            local_f4 = (int *)0x4076c1f;
            (**(code **)(*local_24 + 0x50))();
            ppiVar6 = &local_f8;
            local_f8 = piVar11;
            local_f4 = piVar11;
          }
          else {
            if (local_34 != local_3c) {
              local_e4 = (int *)0x42f4a00;
              local_f4 = (int *)0x4076944;
              FUN_0400a810();
            }
            local_f4 = (int *)0x407695e;
            memcpy(local_38,local_30,(int)piVar11 * local_34);
            local_f4 = (int *)0x407696a;
            (**(code **)(param_2[1] + 0x44))();
            local_f4 = (int *)0x407697d;
            (**(code **)(*local_24 + 0x50))();
            local_20 = (int *)0x0;
            local_f4 = (int *)0x0;
            local_f8 = local_24;
            local_fc = 0x40769a0;
            iVar8 = (**(code **)(*local_24 + 0x48))();
            ppiVar6 = &local_104;
            if (-1 < iVar8) {
              local_f4 = param_5;
              local_f8 = (int *)param_4[4];
              local_fc = 0;
              local_100 = local_20;
              local_104 = param_1;
              local_108 = (int *)0x40769e3;
              uVar7 = (**(code **)(*param_1 + 0x90))();
              local_104 = local_20;
              local_108 = (int *)0x40769f0;
              (**(code **)(*local_20 + 8))();
              local_108 = local_24;
              uStackY_10c = 0x40769fc;
              uStackY_10c = (**(code **)(*local_24 + 8))();
              ppiVar4 = (int **)&uStackY_10c;
              goto LAB_04076504;
            }
            local_100 = (int *)0x42f0810;
            local_104 = (int *)0xf;
            local_108 = (int *)0x4076cfe;
            FUN_0402cd10();
            param_2 = param_2 + 1;
          }
          iVar8 = *local_24;
          *ppiVar6 = local_24;
          pcVar1 = *(code **)(iVar8 + 8);
          ppiVar6[-1] = (int *)0x4076c2c;
          (*pcVar1)();
          uVar7 = 0;
          ppiVar4 = ppiVar6 + -1;
          ppiVar6[-1] = param_2;
          goto LAB_04076504;
        }
        local_f4 = (int *)0x4076b97;
        (**(code **)(*local_24 + 8))();
        local_f4 = (int *)0xf;
        local_f8 = (int *)0x4076bac;
        FUN_0402cd10();
        ppiVar5 = &local_f4;
      }
    }
LAB_04076a6d:
    uVar7 = 0;
    ppiVar4 = ppiVar5;
  }
LAB_04076504:
  *ppiVar4 = (int *)local_28;
  ppiVar4[-1] = (int *)0x407650f;
  direct3ddevice9imp_040a2df0();
  return uVar7;
}

// --- Direct3DDevice9Imp::SubmitNewDataToDrawQuadBuffer @0x04081110 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__SubmitNewDataToDrawQuadBuffer(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  byte bVar11;
  
  bVar11 = 0;
  if ((DAT_0451ca55 == '\0') && (*(char *)(param_1 + 0xeb4d) == '\0')) {
    (*DAT_0451ed30)(0x8892,0x78,0,0x88e0);
    (*DAT_0451ed2c)(0x8892,0,0x78,param_1 + 0xe928);
  }
  else {
    iVar7 = *(int *)(param_1 + 0xe9a4) + 0x78;
    uVar3 = *(int *)(param_1 + 0xe9a4) + 0xf0;
    bVar10 = DAT_0451ca88 == '\0';
    *(int *)(param_1 + 0xe9a4) = iVar7;
    if (bVar10) {
      if (uVar3 < 0xff1) {
        uVar4 = 0x26;
      }
      else {
        *(undefined4 *)(param_1 + 0xe9a4) = 0;
        iVar7 = 0;
        uVar4 = 10;
      }
      puVar8 = (undefined4 *)(*DAT_0451e520)(0x8892,iVar7,0x78,uVar4);
      if (puVar8 == (undefined4 *)0x0) {
        FUN_0400a810("dataOnCard",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x96c,"void Direct3DDevice9Imp::SubmitNewDataToDrawQuadBuffer()");
      }
      puVar9 = (undefined4 *)(param_1 + 0xe928);
      uVar3 = 0x78;
      bVar10 = ((uint)puVar8 & 1) != 0;
      if (bVar10) {
        puVar9 = (undefined4 *)(param_1 + 0xe929);
        *(undefined1 *)puVar8 = *(undefined1 *)(param_1 + 0xe928);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        uVar3 = 0x77;
      }
      if (((uint)puVar8 & 2) != 0) {
        uVar1 = *(undefined2 *)puVar9;
        uVar3 = uVar3 - 2;
        puVar9 = (undefined4 *)((int)puVar9 + 2);
        *(undefined2 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 2);
      }
      iVar7 = 0;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)puVar8 = *(undefined2 *)puVar9;
        iVar7 = 2;
      }
      if (bVar10) {
        *(undefined1 *)((int)puVar8 + iVar7) = *(undefined1 *)((int)puVar9 + iVar7);
      }
      cVar2 = (*DAT_0451ecf0)(0x8892);
      if (cVar2 != '\x01') {
        FUN_0400a810("__glewUnmapBuffer( 0x8892 ) == 1",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x96e,"void Direct3DDevice9Imp::SubmitNewDataToDrawQuadBuffer()");
        return;
      }
    }
    else {
      if (uVar3 < 0xff1) {
        iVar5 = *(int *)(param_1 + 0xe9a8);
      }
      else {
        cVar2 = (*DAT_0451ecf0)(0x8892);
        if (cVar2 != '\x01') {
          FUN_0400a810("__glewUnmapBuffer( 0x8892 ) == 1",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                       ,0x94b,"void Direct3DDevice9Imp::SubmitNewDataToDrawQuadBuffer()");
        }
        iVar5 = (*DAT_0451e520)(0x8892,0,0xff0,0xca);
        *(int *)(param_1 + 0xe9a8) = iVar5;
        if (iVar5 == 0) {
          FUN_0400a810("mOGLDeviceState.DrawQuadBufferPtr",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                       ,0x952,"void Direct3DDevice9Imp::SubmitNewDataToDrawQuadBuffer()");
          iVar5 = *(int *)(param_1 + 0xe9a8);
        }
        *(undefined4 *)(param_1 + 0xe9a4) = 0;
        iVar7 = 0;
      }
      puVar9 = (undefined4 *)(iVar5 + iVar7);
      uVar3 = 0x78;
      puVar8 = (undefined4 *)(param_1 + 0xe928);
      bVar10 = ((uint)puVar9 & 1) != 0;
      if (bVar10) {
        puVar8 = (undefined4 *)(param_1 + 0xe929);
        *(undefined1 *)puVar9 = *(undefined1 *)(param_1 + 0xe928);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        uVar3 = 0x77;
      }
      if (((uint)puVar9 & 2) != 0) {
        uVar1 = *(undefined2 *)puVar8;
        uVar3 = uVar3 - 2;
        puVar8 = (undefined4 *)((int)puVar8 + 2);
        *(undefined2 *)puVar9 = uVar1;
        puVar9 = (undefined4 *)((int)puVar9 + 2);
      }
      iVar7 = 0;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
        iVar7 = 2;
      }
      if (bVar10) {
        *(undefined1 *)((int)puVar9 + iVar7) = *(undefined1 *)((int)puVar8 + iVar7);
        return;
      }
    }
  }
  return;
}

// --- Direct3DDevice9Imp::UpdateViewportAndScissorDimensions_D3D9 @0x04085580 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_04085580(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x52e0) = 0;
  *(undefined4 *)(param_1 + 0x52e4) = 0;
  *(undefined4 *)(param_1 + 0x52e8) = param_2;
  *(int *)(param_1 + 0x52ec) = param_3;
  if (param_3 == 0) {
    FUN_0400a810("mDeviceState.Viewport.Height != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x152c,
                 "void Direct3DDevice9Imp::UpdateViewportAndScissorDimensions_D3D9(UINT, UINT)");
  }
  *(undefined4 *)(param_1 + 0xcc4) = param_2;
  *(int *)(param_1 + 0xcc8) = param_3;
  *(undefined4 *)(param_1 + 0xcbc) = 0;
  *(undefined4 *)(param_1 + 0xcc0) = 0;
  return;
}

// --- Direct3DDevice9Imp::ValidateDevice @0x040734e0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_ValidateDevice(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar5 = local_3c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar5 = local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x407376e;
      EnterCriticalSection();
      piVar5 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x4073714;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407352a;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407372b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4073757;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  uVar3 = 0x88760822;
  if ((((((((*(int *)(param_1 + 0x8c0) != 0) && (*(int *)(param_1 + 0x8bc) != 0)) &&
          (*(int *)(param_1 + 0x8f4) != 0)) &&
         (((*(int *)(param_1 + 0x8f0) != 0 && (*(int *)(param_1 + 0x928) != 0)) &&
          ((*(int *)(param_1 + 0x924) != 0 &&
           ((*(int *)(param_1 + 0x95c) != 0 && (*(int *)(param_1 + 0x958) != 0)))))))) &&
        (*(int *)(param_1 + 0x990) != 0)) &&
       ((((((*(int *)(param_1 + 0x98c) != 0 && (*(int *)(param_1 + 0x9c4) != 0)) &&
           (*(int *)(param_1 + 0x9c0) != 0)) &&
          ((*(int *)(param_1 + 0x9f8) != 0 && (*(int *)(param_1 + 0x9f4) != 0)))) &&
         (*(int *)(param_1 + 0xa2c) != 0)) &&
        (((*(int *)(param_1 + 0xa28) != 0 && (*(int *)(param_1 + 0xa60) != 0)) &&
         (((*(int *)(param_1 + 0xa5c) != 0 &&
           (((*(int *)(param_1 + 0xa94) != 0 && (*(int *)(param_1 + 0xa90) != 0)) &&
            (*(int *)(param_1 + 0xac8) != 0)))) &&
          (((*(int *)(param_1 + 0xac4) != 0 && (*(int *)(param_1 + 0xafc) != 0)) &&
           (*(int *)(param_1 + 0xaf8) != 0)))))))))) &&
      (((*(int *)(param_1 + 0xb30) != 0 && (*(int *)(param_1 + 0xb2c) != 0)) &&
       ((*(int *)(param_1 + 0xb64) != 0 &&
        (((*(int *)(param_1 + 0xb60) != 0 && (*(int *)(param_1 + 0xb98) != 0)) &&
         (*(int *)(param_1 + 0xb94) != 0)))))))) &&
     ((*(int *)(param_1 + 0xbcc) != 0 && (*(int *)(param_1 + 0xbc8) != 0)))) {
    uVar3 = 0;
    *param_2 = 1;
  }
  *piVar5 = (int)local_20;
  piVar5[-1] = 0x40736e2;
  direct3ddevice9imp_040a2df0();
  return uVar3;
}

// --- Direct3DDevice9Imp::VertexArrays_EnableArrays @0x04092e00 ---
/* source: direct3ddevice9imp */

void Direct3DDevice9Imp__VertexArrays_EnableArrays(int param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_38;
  int local_34;
  char *local_30;
  uint local_20;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0xeb48) + 0x40);
  if (*(int *)(*(int *)(param_1 + 0xeb48) + 0x48) == 0) {
    FUN_0400a810("mOpenGLContextCache->VertexArrays_Program",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x2639,"void Direct3DDevice9Imp::VertexArrays_EnableArrays(INT)");
  }
  cVar4 = *(char *)(*(int *)(param_1 + 0xe9ec) + 9);
  if (cVar4 != -1) {
    local_30 = (char *)(*(int *)(param_1 + 0xe9ec) + 9);
    pcVar7 = local_30;
    do {
      if (cVar4 == '\0') {
        if (pcVar7[1] == '\0') goto LAB_04092e7d;
      }
      else if (cVar4 == '\t') {
        if ((pcVar7[1] == '\0') ||
           (FUN_0400a810("positionInfo->UsageIndex == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                         ,0x2647,"void Direct3DDevice9Imp::VertexArrays_EnableArrays(INT)"),
           *pcVar7 != -1)) {
LAB_04092e7d:
          local_34 = 0;
          local_38 = -1;
          local_20 = 0;
          goto LAB_04092e90;
        }
        break;
      }
      pcVar7 = pcVar7 + 2;
      cVar4 = *pcVar7;
    } while (cVar4 != -1);
  }
  FUN_0402cd10();
  return;
LAB_04092e90:
  if (local_20 == 0) {
    iVar6 = 0;
    iVar9 = 0;
    iVar12 = (piVar3[1] - *piVar3 >> 3) * -0x55555555;
    if (iVar12 != 0) {
      do {
        pcVar5 = (char *)(*piVar3 + iVar6);
        cVar4 = *pcVar5;
        if (cVar4 == '\0') {
          if (pcVar5[1] == '\0') {
LAB_040930ab:
            iVar6 = *(int *)(param_1 + 0xeb48);
            if (*(int *)(iVar6 + iVar9 * 4) != -1) {
              FUN_0400a810("mOpenGLContextCache->VertexArrays_LastAppliedAttribNum[j] == -1",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                           ,0x2660,"void Direct3DDevice9Imp::VertexArrays_EnableArrays(INT)");
              iVar6 = *(int *)(param_1 + 0xeb48);
            }
            *(undefined4 *)(iVar6 + iVar9 * 4) = 0;
            goto LAB_04092f59;
          }
        }
        else if (cVar4 == '\t') goto LAB_040930ab;
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 0x18;
      } while (iVar9 != iVar12);
    }
    iVar6 = *(int *)(param_1 + 0xeb48);
LAB_04093110:
    if ((*(uint *)(iVar6 + 0x194) >> (local_20 & 0x1f) & 1) != 0) {
      (*DAT_0451ecc8)(local_20);
      puVar1 = (uint *)(*(int *)(param_1 + 0xeb48) + 0x194);
      *puVar1 = *puVar1 & ~(1 << ((byte)local_20 & 0x1f));
    }
    if (local_20 == 0) {
      FUN_0400a810("i",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x2684,"void Direct3DDevice9Imp::VertexArrays_EnableArrays(INT)");
    }
    (*DAT_0451eb9c)(local_20,0,0,0,0);
  }
  else {
    pcVar5 = local_30 + 2;
    if (local_30 != pcVar7) {
      pcVar5 = local_30;
    }
    if (*pcVar5 == -1) {
      uVar8 = *(uint *)(*(int *)(param_1 + 0xeb48) + 0x194);
      do {
        if ((uVar8 >> (local_20 & 0x1f) & 1) != 0) {
          (*DAT_0451ecc8)(local_20);
          uVar8 = ~(1 << ((byte)local_20 & 0x1f)) & *(uint *)(*(int *)(param_1 + 0xeb48) + 0x194);
          *(uint *)(*(int *)(param_1 + 0xeb48) + 0x194) = uVar8;
        }
        local_20 = local_20 + 1;
      } while (local_20 != 0x10);
      return;
    }
    iVar6 = 0;
    iVar9 = 0;
    iVar12 = (piVar3[1] - *piVar3 >> 3) * -0x55555555;
    if (iVar12 != 0) {
      do {
        pcVar2 = (char *)(*piVar3 + iVar6);
        if ((*pcVar5 == *pcVar2) && (pcVar2[1] == pcVar5[1])) {
          iVar6 = *(int *)(param_1 + 0xeb48);
          if (*(int *)(iVar6 + iVar9 * 4) != -1) {
            FUN_0400a810("mOpenGLContextCache->VertexArrays_LastAppliedAttribNum[j] == -1",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                         ,0x2671,"void Direct3DDevice9Imp::VertexArrays_EnableArrays(INT)");
            iVar6 = *(int *)(param_1 + 0xeb48);
          }
          *(uint *)(iVar6 + iVar9 * 4) = local_20;
          goto LAB_04092f55;
        }
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 0x18;
      } while (iVar9 != iVar12);
    }
    iVar9 = -1;
    iVar6 = *(int *)(param_1 + 0xeb48);
LAB_04092f55:
    local_30 = pcVar5 + 2;
LAB_04092f59:
    if (iVar9 == -1) goto LAB_04093110;
    if ((*(uint *)(iVar6 + 0x194) >> (local_20 & 0x1f) & 1) == 0) {
      (*DAT_0451ecc0)(local_20);
      iVar6 = *(int *)(param_1 + 0xeb48);
      *(uint *)(iVar6 + 0x194) = *(uint *)(iVar6 + 0x194) | 1 << ((byte)local_20 & 0x1f);
    }
    iVar12 = iVar9 * 0x18 + *piVar3;
    iVar9 = *(int *)(iVar12 + 4);
    if (iVar9 == local_38) {
      local_38 = local_38 + 0x817;
      iVar6 = local_34;
    }
    else {
      local_38 = iVar9 + 0x817;
      iVar10 = local_38 * 0x10 + param_1;
      iVar11 = *(int *)(iVar10 + 8);
      if (iVar11 == 0) {
        FUN_0400a810("mOGLDeviceState.StreamSources[currentStreamSource].Buffer",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x2699,"void Direct3DDevice9Imp::VertexArrays_EnableArrays(INT)");
        iVar11 = *(int *)(iVar10 + 8);
        iVar6 = *(int *)(param_1 + 0xeb48);
      }
      OpenGLContextCache____glewBindBuffer
                (iVar6,0x8892,*(undefined4 *)(*(int *)(iVar11 + 0x54) + 0x18));
      local_34 = *(int *)(param_1 + 0x10 + local_38 * 0x10);
      iVar6 = local_34;
      if (local_34 == 0) {
        iVar6 = *(int *)(param_1 + 0xeb48);
        if ((*(uint *)(iVar6 + 0x194) >> (local_20 & 0x1f) & 1) != 0) {
          (*DAT_0451ecc8)(local_20);
          iVar6 = *(int *)(param_1 + 0xeb48);
          *(uint *)(iVar6 + 0x194) = *(uint *)(iVar6 + 0x194) & ~(1 << ((byte)local_20 & 0x1f));
        }
        iVar6 = eON_Buffer__GetOpenGLSideDataRegion
                          (*(undefined4 *)(*(int *)(param_1 + 8 + local_38 * 0x10) + 0x54),iVar6);
        Direct3DDevice9Imp__SetVertexAttrib
                  (param_1,local_20,*(undefined4 *)(iVar12 + 0x10),*(undefined4 *)(iVar12 + 0xc),
                   *(undefined1 *)(iVar12 + 0x14),iVar6 + *(int *)(iVar12 + 8));
        iVar6 = 0;
      }
    }
    iVar11 = *(int *)(param_1 + 0xc + local_38 * 0x10);
    if ((param_2 == 0) || (-1 < *(int *)(param_1 + 0x14 + (*(int *)(iVar12 + 4) + 0x817) * 0x10))) {
      iVar10 = *(int *)(param_1 + 0xeb48);
      if (*(int *)(iVar10 + 0xc + (local_20 + 0x50) * 4) != 0) {
        (*DAT_0451e548)(local_20,0);
        *(undefined4 *)(iVar10 + 0xc + (local_20 + 0x50) * 4) = 0;
        iVar10 = *(int *)(param_1 + 0xeb48);
      }
      iVar11 = iVar11 + local_34 * *(int *)(iVar10 + 0x44);
    }
    else {
      if (DAT_0451ca5a == '\0') {
        FUN_0400a810("(*(const GLboolean*)&__GLEW_ARB_instanced_arrays)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x26b3,"void Direct3DDevice9Imp::VertexArrays_EnableArrays(INT)");
      }
      iVar10 = *(int *)(param_1 + 0xeb48);
      if (*(int *)(iVar10 + 0xc + (local_20 + 0x50) * 4) != 1) {
        (*DAT_0451e548)(local_20,1);
        *(undefined1 *)(iVar10 + 0x18c) = 1;
        *(undefined4 *)(iVar10 + 0xc + (local_20 + 0x50) * 4) = 1;
      }
    }
    (&DAT_044dac40)[local_20] = iVar11;
    (*DAT_0451eb7c)(local_20,*(undefined4 *)(iVar12 + 0x10),*(undefined4 *)(iVar12 + 0xc),
                    *(undefined1 *)(iVar12 + 0x14),iVar6,iVar11 + *(int *)(iVar12 + 8));
    local_38 = iVar9;
  }
  local_20 = local_20 + 1;
  if (local_20 == 0x10) {
    return;
  }
  goto LAB_04092e90;
}

// --- Direct3DStateBlock9Imp::SetSamplerState @0x04073780 ---
/* source: direct3ddevice9imp, direct3dstateblock9imp */

undefined4
Direct3DStateBlock9Imp__SetSamplerState(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar8 = local_4c;
  iVar3 = *(int *)(param_1 + 0xc);
  local_24 = iVar3;
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0xebbc) == '\0') {
      piVar8 = local_4c;
      piVar4 = local_4c;
      if (*(int *)(iVar3 + 0xec64) == 0) goto LAB_040737ba;
LAB_0407391f:
      local_30 = *(int *)(iVar3 + 0xebc0);
      piVar8[-1] = 0x407392d;
      iVar6 = FUN_0415b750();
      if (local_30 != iVar6) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3b3;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar8[-1] = 0x407395a;
        FUN_0400a810();
      }
    }
    else {
      local_4c[0] = iVar3 + 0xebc4;
      uStack_50 = 0x407390e;
      EnterCriticalSection();
      piVar8 = &uStack_50;
      piVar4 = &uStack_50;
      if (*(int *)(iVar3 + 0xec64) != 0) goto LAB_0407391f;
LAB_040737ba:
      piVar8 = piVar4;
      if (*(int *)(iVar3 + 0xebc0) != 0) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3ae;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"!mCurrentD3D9Thread";
        piVar8[-1] = 0x40738f4;
        FUN_0400a810();
      }
      piVar8[-1] = 0x40737cd;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar3 + 0xebc0) = uVar5;
    }
    *(int *)(iVar3 + 0xec64) = *(int *)(iVar3 + 0xec64) + 1;
  }
  if (param_2 < 0x10) {
    iVar6 = *(int *)(param_1 + 0x75ec);
    iVar3 = param_1 + 0x8ac + param_2 * 0x34;
joined_r0x0407386b:
    if (iVar6 != 0) {
      if (0xc < param_3 - 1) {
        piVar8[3] = (int)
                    "void Direct3DStateBlock9Imp::SetSamplerState(DWORD, D3DSAMPLERSTATETYPE, DWORD)"
        ;
        piVar8[2] = 0x13b;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *piVar8 = (int)"Type-1 < 13";
        piVar8[-1] = 0x40738c4;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar6 + 0x118) = 1;
      puVar2 = (ushort *)(iVar6 + 0x11c + param_2 * 2);
      *puVar2 = *puVar2 | (ushort)(1 << ((byte)(param_3 - 1) & 0x1f));
      *(uint *)(iVar6 + 4 + (param_3 + 0x4f + param_2 * 0xd) * 4) = param_4;
      uVar5 = 0;
      goto LAB_04073830;
    }
    switch(param_3) {
    default:
      piVar8[1] = (int)"Unrecognized sampler state value: %u!";
      *piVar8 = 0xf;
      piVar8[2] = param_3;
                    /* try { // try from 0407388d to 040738c3 has its CatchHandler @ 04073ae4 */
      piVar8[-1] = 0x4073892;
      FUN_0402cd10();
      goto LAB_04073892;
    case 1:
    case 2:
    case 3:
      if (*(uint *)(iVar3 + (param_3 - 1) * 4) != param_4) {
        *(uint *)(iVar3 + (param_3 - 1) * 4) = param_4;
LAB_040739b0:
        piVar8[3] = 0xc;
        piVar8[2] = 0x1f;
        piVar8[1] = param_1;
        *piVar8 = param_1 + 0xec00;
        piVar8[-1] = 0x40739d2;
        puVar7 = (uint *)D3D9CommandQueue__GetNextCommandPointer();
        *puVar7 = param_2;
        puVar7[1] = param_3;
        puVar7[2] = param_4;
        *piVar8 = param_1 + 0xec00;
        piVar8[-1] = 0x40739e8;
        D3D9CommandQueue__CommandSubmitted();
        uVar5 = 0;
        goto LAB_04073830;
      }
      break;
    case 4:
      if (*(uint *)(iVar3 + 0xc) != param_4) {
        *(uint *)(iVar3 + 0xc) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 5:
      if (*(uint *)(iVar3 + 0x10) != param_4) {
        *(uint *)(iVar3 + 0x10) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 6:
      if (*(uint *)(iVar3 + 0x14) != param_4) {
        *(uint *)(iVar3 + 0x14) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 7:
      if (*(uint *)(iVar3 + 0x18) != param_4) {
        *(uint *)(iVar3 + 0x18) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 8:
      if (*(uint *)(iVar3 + 0x1c) != param_4) {
        *(uint *)(iVar3 + 0x1c) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 9:
      if (*(uint *)(iVar3 + 0x20) != param_4) {
        *(uint *)(iVar3 + 0x20) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 10:
      if (*(uint *)(iVar3 + 0x24) != param_4) {
        *(uint *)(iVar3 + 0x24) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 0xb:
      if (*(uint *)(iVar3 + 0x28) != param_4) {
        *(uint *)(iVar3 + 0x28) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 0xc:
      if (*(uint *)(iVar3 + 0x2c) != param_4) {
        *(uint *)(iVar3 + 0x2c) = param_4;
        piVar8[1] = (int)"Unsupported sampler state: D3DSAMP_ELEMENTINDEX!";
        *piVar8 = 0xf;
                    /* try { // try from 0407398a to 04073a46 has its CatchHandler @ 04073ae4 */
        piVar8[-1] = 0x407398f;
        FUN_0402cd10();
      }
      break;
    case 0xd:
      if (((*(uint *)(iVar3 + 0x30) != param_4) &&
          (*(uint *)(iVar3 + 0x30) = param_4, param_4 != 0x100)) && (param_4 != 0)) {
        piVar8[1] = (int)"Unsupported sampler state: D3DSAMP_DMAPOFFSET!";
        *piVar8 = 0xf;
        piVar8[-1] = 0x4073a47;
        FUN_0402cd10();
        uVar5 = 0;
        goto LAB_04073830;
      }
    }
    uVar5 = 0;
  }
  else {
    uVar1 = param_2 - 0x101;
    if (uVar1 < 4) {
      iVar6 = *(int *)(param_1 + 0x75ec);
      param_2 = param_2 - 0xf1;
      iVar3 = param_1 + 0xbec + uVar1 * 0x34;
      goto joined_r0x0407386b;
    }
LAB_04073892:
    uVar5 = 0x8876086c;
  }
LAB_04073830:
  *piVar8 = (int)local_20;
  piVar8[-1] = 0x407383b;
  direct3ddevice9imp_040a2df0();
  return uVar5;
}

// --- OpenGLContextCache::UpdateTextureMatrices @0x04093810 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3ddevice9imp, openGlContextCache */

void OpenGLContextCache__UpdateTextureMatrices(int param_1,char param_2)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *puVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  byte bVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined8 in_stack_ffffff34;
  char *pcVar30;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  
  pcVar30 = (char *)((ulonglong)in_stack_ffffff34 >> 0x20);
  bVar22 = 0;
  if ((*(byte *)(param_1 + 0xea04) & 0x80) != 0) {
    cVar5 = *(char *)(*(int *)(param_1 + 0xe9d4) + 0x70);
    iVar6 = *(int *)(param_1 + 0xeb48);
    iVar15 = 0x901 - (uint)(cVar5 == '\0');
    if (iVar15 != *(int *)(iVar6 + 0x418)) {
      glFrontFace(iVar15);
      *(int *)(iVar6 + 0x418) = iVar15;
    }
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
LAB_040938d0:
      bVar8 = *(byte *)(param_1 + 0xea04);
    }
    else {
      if ((cVar5 != '\0') || (*(int *)(param_1 + 0x7c5c) == 0)) {
        if ((*(int *)(param_1 + 0x7aac) != 0) &&
           (((DAT_042dbf3c != *(float *)(param_1 + 0x7ac8) || (*(float *)(param_1 + 0x7acc) != 0.0))
            || (*(float *)(param_1 + 0x7ad0) != 0.0)))) {
          pcVar30 = 
          "Point distance attenuation unhandled in OpenGL Core profile. Some code will be needed in fixed pipeline vertex shader to handle this."
          ;
          FUN_0402cd10(0xf);
        }
        goto LAB_040938d0;
      }
      bVar8 = *(byte *)(param_1 + 0xea04);
    }
    if ((bVar8 & 0x60) != 0) {
      if (((*(int *)(param_1 + 0x7c5c) == 0) &&
          (*(char *)(*(int *)(param_1 + 0xe9d4) + 0x70) != '\0')) ||
         (*(char *)(param_1 + 0x7ad5) == '\0')) {
        iVar6 = *(int *)(param_1 + 0xeb48);
        if (*(char *)(iVar6 + 0xa88) != '\0') {
          glDisable(0xb44);
          *(undefined1 *)(iVar6 + 0xa88) = 0;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0xeb48);
        if (*(char *)(iVar6 + 0xa88) != '\x01') {
          glEnable(0xb44);
          *(undefined1 *)(iVar6 + 0xa88) = 1;
          iVar6 = *(int *)(param_1 + 0xeb48);
        }
        iVar15 = *(int *)(param_1 + 0x7ad8);
        if (iVar15 != *(int *)(iVar6 + 0x41c)) {
          glCullFace(iVar15);
          *(int *)(iVar6 + 0x41c) = iVar15;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0xeb4c) == '\0') {
    iVar6 = *(int *)(param_1 + 0xeb48);
    uVar19 = *(uint *)(param_1 + 0x7c04);
    uVar7 = *(uint *)(iVar6 + 0x420);
    uVar11 = uVar19 & 0x3f;
    if (uVar11 != uVar7) {
      if (*(char *)(iVar6 + 0x218) != '\0') {
        pcVar30 = 
        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
        ;
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0xb7);
        uVar7 = *(uint *)(iVar6 + 0x420);
      }
      uVar7 = uVar7 ^ uVar11;
      if ((uVar7 & 1) != 0) {
        if ((uVar19 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3000);
        }
      }
      if ((uVar7 >> 1 & 1) != 0) {
        if ((uVar11 >> 1 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3001);
        }
      }
      if ((uVar7 >> 2 & 1) != 0) {
        if ((uVar11 >> 2 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3002);
        }
      }
      if ((uVar7 >> 3 & 1) != 0) {
        if ((uVar11 >> 3 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3003);
        }
      }
      if ((uVar7 >> 4 & 1) != 0) {
        if ((uVar11 >> 4 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3004);
        }
      }
      if ((uVar7 >> 4 & 2) != 0) {
        if (uVar11 >> 5 == 0) {
          glDisable(0x3005);
        }
        else {
          glEnable();
        }
      }
      *(uint *)(iVar6 + 0x420) = uVar11;
      uVar19 = *(uint *)(param_1 + 0x7c04);
    }
    cVar5 = '\x01';
    if (*(int *)(param_1 + 0x7c5c) != 0) {
      cVar5 = *(char *)(*(int *)(param_1 + 0xe9d4) + 0x70);
    }
    if ((uVar19 != 0) &&
       ((iVar6 = *(int *)(param_1 + 0xeb48), *(int *)(param_1 + 0x7bfc) != *(int *)(iVar6 + 0x198)
        || ((cVar5 != '\0' && (*(int *)(param_1 + 0xc630) != *(int *)(iVar6 + 0x1a8))))))) {
      if (*(int *)(iVar6 + 0x500) != 0x1700) {
        if (*(char *)(iVar6 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x3bc);
        }
        glMatrixMode(0x1700);
        *(undefined4 *)(iVar6 + 0x500) = 0x1700;
      }
      glPushMatrix();
      if (cVar5 == '\0') {
        glLoadIdentity();
      }
      else {
        glLoadMatrixf(param_1 + 0x83b0);
      }
      glClipPlane(0x3000);
      glClipPlane(0x3001);
      glClipPlane(0x3002);
      glClipPlane(0x3003);
      glClipPlane(0x3004);
      pcVar30 = (char *)(param_1 + 0x7bdc);
      glClipPlane(0x3005);
      *(undefined4 *)(*(int *)(param_1 + 0xeb48) + 0x198) = *(undefined4 *)(param_1 + 0x7bfc);
      glPopMatrix();
    }
  }
  else {
    piVar13 = *(int **)(param_1 + 0xeb78);
    if (*(int *)(param_1 + 0x7c00) != *piVar13) {
      if (*(int *)(param_1 + 0x7c08) == 0) {
        *piVar13 = *(int *)(param_1 + 0x7c00);
        pcVar18 = (char *)0x0;
      }
      else {
        uVar19 = *(uint *)(param_1 + 0x7c04);
        bVar21 = (uVar19 & 1) != 0;
        if (bVar21) {
          piVar13[0x1e3] = *(int *)(param_1 + 0x7adc);
          piVar13[0x1e4] = *(int *)(param_1 + 0x7ae0);
          piVar13[0x1e5] = *(int *)(param_1 + 0x7ae4);
          piVar13[0x1e6] = *(int *)(param_1 + 0x7ae8);
          pcVar30 = (char *)0x0;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),0,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar16 = (char *)(uint)bVar21;
        pcVar18 = pcVar16;
        if ((uVar19 >> 1 & 1) != 0) {
          pcVar30 = pcVar16 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7aec);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7af0);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7af4);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7af8);
          pcVar18 = pcVar16 + 1;
          pcVar30 = (char *)(uint)bVar21;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar16,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar16 = pcVar18;
        if ((uVar19 >> 2 & 1) != 0) {
          pcVar30 = pcVar18 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7afc);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b00);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b04);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b08);
          pcVar16 = pcVar18 + 1;
          pcVar30 = pcVar18;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar18,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar18 = pcVar16;
        if ((uVar19 >> 3 & 1) != 0) {
          pcVar30 = pcVar16 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7b0c);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b10);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b14);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b18);
          pcVar18 = pcVar16 + 1;
          pcVar30 = pcVar16;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar16,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar16 = pcVar18;
        if ((uVar19 >> 4 & 1) != 0) {
          pcVar30 = pcVar18 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7b1c);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b20);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b24);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b28);
          pcVar16 = pcVar18 + 1;
          pcVar30 = pcVar18;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar18,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        if ((uVar19 >> 4 & 2) != 0) {
          pcVar30 = pcVar16 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7b2c);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b30);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b34);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b38);
          pcVar30 = pcVar16;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar16,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar18 = *(char **)(param_1 + 0x7c08);
        *piVar13 = *(int *)(param_1 + 0x7c00);
        if (5 < (int)pcVar18) goto LAB_04093932;
      }
      do {
        pcVar16 = pcVar18 + 1;
        pcVar30 = pcVar18;
        OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar18,0);
        pcVar18 = pcVar16;
      } while (pcVar16 != (char *)0x6);
    }
  }
LAB_04093932:
  uVar19 = *(uint *)(param_1 + 0xea04);
  if ((uVar19 & 0x21) != 0) {
    if (((*(int *)(param_1 + 0x7a78) == 0) && (*(int *)(param_1 + 0x7a74) == 0)) ||
       (((param_2 == '\0' && (*(int *)(param_1 + 0x7a20) != 0x1b01)) ||
        (*(int *)(*(int *)(param_1 + 0xc65c) + 0xa0) != 1)))) {
      cVar5 = '\0';
      bVar21 = *(int *)(param_1 + 0x7a44) != 0;
    }
    else {
      cVar5 = '\x01';
      bVar21 = true;
    }
    iVar6 = *(int *)(param_1 + 0xeb48);
    if (bVar21 != (bool)*(char *)(iVar6 + 0xa89)) {
      if (bVar21 == false) {
        glDisable();
      }
      else {
        glEnable(0xbe2);
      }
      *(bool *)(iVar6 + 0xa89) = bVar21;
      iVar6 = *(int *)(param_1 + 0xeb48);
    }
    if (cVar5 != *(char *)(iVar6 + 0xa92)) {
      if (cVar5 == '\0') {
        glDisable();
      }
      else {
        glEnable(0xb20);
      }
      *(char *)(iVar6 + 0xa92) = cVar5;
      iVar6 = *(int *)(param_1 + 0xeb48);
    }
    if (cVar5 == '\0') {
      iVar15 = *(int *)(param_1 + 0x79d8);
      pcVar18 = *(char **)(param_1 + 0x79dc);
      if (iVar15 == 0x2ff) {
        pcVar18 = (char *)0x303;
        iVar15 = 0x302;
      }
      else if (iVar15 == 0x2fe) {
        pcVar18 = (char *)0x302;
        iVar15 = 0x303;
      }
      if (*(int *)(param_1 + 0x7a48) == 0) {
        if (((iVar15 != *(int *)(iVar6 + 0x460)) || (pcVar18 != *(char **)(iVar6 + 0x464))) ||
           ((iVar15 != *(int *)(iVar6 + 0x468) || (pcVar18 != *(char **)(iVar6 + 0x46c))))) {
          pcVar30 = pcVar18;
          (*DAT_0451edec)(iVar15,pcVar18,iVar15);
          *(int *)(iVar6 + 0x460) = iVar15;
          *(int *)(iVar6 + 0x468) = iVar15;
          *(char **)(iVar6 + 0x464) = pcVar18;
          *(char **)(iVar6 + 0x46c) = pcVar18;
          iVar6 = *(int *)(param_1 + 0xeb48);
        }
        pcVar18 = *(char **)(param_1 + 0x79e8);
        if ((pcVar18 != *(char **)(iVar6 + 0x470)) || (pcVar18 != *(char **)(iVar6 + 0x474))) {
          pcVar30 = pcVar18;
          (*DAT_0451ece4)(pcVar18);
          *(char **)(iVar6 + 0x470) = pcVar18;
          *(char **)(iVar6 + 0x474) = pcVar18;
        }
      }
      else {
        iVar12 = *(int *)(param_1 + 0x79e0);
        iVar14 = *(int *)(param_1 + 0x79e4);
        if (iVar12 == 0x2ff) {
          iVar14 = 0x303;
          iVar12 = 0x302;
        }
        else if (iVar12 == 0x2fe) {
          iVar14 = 0x302;
          iVar12 = 0x303;
        }
        if ((((iVar15 != *(int *)(iVar6 + 0x460)) || (pcVar18 != *(char **)(iVar6 + 0x464))) ||
            (iVar12 != *(int *)(iVar6 + 0x468))) || (iVar14 != *(int *)(iVar6 + 0x46c))) {
          pcVar30 = pcVar18;
          (*DAT_0451edec)(iVar15,pcVar18,iVar12);
          *(int *)(iVar6 + 0x460) = iVar15;
          *(char **)(iVar6 + 0x464) = pcVar18;
          *(int *)(iVar6 + 0x468) = iVar12;
          *(int *)(iVar6 + 0x46c) = iVar14;
          iVar6 = *(int *)(param_1 + 0xeb48);
        }
        iVar15 = *(int *)(param_1 + 0x79e8);
        iVar12 = *(int *)(param_1 + 0x79ec);
        if ((iVar15 != *(int *)(iVar6 + 0x470)) || (iVar12 != *(int *)(iVar6 + 0x474))) {
          pcVar30 = (char *)((ulonglong)*(undefined8 *)(param_1 + 0x79e8) >> 0x20);
          (*DAT_0451ece4)(iVar15);
          *(int *)(iVar6 + 0x470) = iVar15;
          *(int *)(iVar6 + 0x474) = iVar12;
          uVar19 = *(uint *)(param_1 + 0xea04);
          goto LAB_04093add;
        }
      }
    }
    else {
      if ((((*(int *)(iVar6 + 0x460) != 0x302) || (*(int *)(iVar6 + 0x464) != 0x303)) ||
          (*(int *)(iVar6 + 0x468) != 0x302)) || (*(int *)(iVar6 + 0x46c) != 0x303)) {
        pcVar30 = (char *)0x303;
        (*DAT_0451edec)(0x302,0x303,0x302);
        *(undefined4 *)(iVar6 + 0x460) = 0x302;
        *(undefined4 *)(iVar6 + 0x464) = 0x303;
        *(undefined4 *)(iVar6 + 0x468) = 0x302;
        *(undefined4 *)(iVar6 + 0x46c) = 0x303;
        iVar6 = *(int *)(param_1 + 0xeb48);
      }
      if ((*(int *)(iVar6 + 0x470) != 0x8006) || (*(int *)(iVar6 + 0x474) != 0x8006)) {
        pcVar30 = (char *)0x8006;
        (*DAT_0451ece4)(0x8006);
        *(undefined4 *)(iVar6 + 0x470) = 0x8006;
        *(undefined4 *)(iVar6 + 0x474) = 0x8006;
        uVar19 = *(uint *)(param_1 + 0xea04);
        goto LAB_04093add;
      }
    }
    uVar19 = *(uint *)(param_1 + 0xea04);
  }
LAB_04093add:
  if ((uVar19 & 0x22) == 0) {
LAB_04093cf1:
    iVar12 = *(int *)(param_1 + 0xeb48);
  }
  else {
    iVar6 = 0;
    if (*(int *)(param_1 + 0xc66c) != 0) {
      iVar6 = Direct3DSurface9Imp__GetDepthBits(*(int *)(param_1 + 0xc66c) + 4);
    }
    iVar15 = *(int *)(param_1 + 0xeb48);
    fVar28 = *(float *)(param_1 + 0x7a90);
    fVar23 = *(float *)(param_1 + 0x7a94);
    if (((fVar28 != *(float *)(iVar15 + 0xa6c)) || (fVar23 != *(float *)(iVar15 + 0xa70))) ||
       (iVar6 != *(int *)(iVar15 + 0xa74))) {
      *(float *)(iVar15 + 0xa6c) = fVar28;
      *(float *)(iVar15 + 0xa70) = fVar23;
      *(int *)(iVar15 + 0xa74) = iVar6;
      if ((iVar6 == 0) || ((fVar23 == 0.0 && (fVar28 == 0.0)))) {
        glDisable(0x8037);
        glDisable(0x2a02);
        glDisable(0x2a01);
      }
      else {
        glEnable(0x8037);
        glEnable(0x2a02);
        glEnable(0x2a01);
        bVar8 = (byte)*(uint *)(iVar15 + 0xa74);
        bVar21 = (*(uint *)(iVar15 + 0xa74) & 0x20) == 0;
        iVar6 = (uint)bVar21 << (bVar8 & 0x1f);
        iVar12 = ((uint)!bVar21 << (bVar8 & 0x1f)) + -1 + (uint)(iVar6 != 0);
        fVar28 = (float)CONCAT44(iVar12,iVar6 + -1);
        if (iVar12 < 0) {
          fVar28 = fVar28 + _DAT_042f73a4;
        }
        pcVar30 = (char *)(fVar28 * *(float *)(iVar15 + 0xa6c));
        glPolygonOffset(fVar23);
      }
    }
    pcVar18 = (char *)0x0;
    if ((*(int *)(param_1 + 0xc66c) == 0) ||
       (cVar5 = direct3dsurface9imp_040add10(*(int *)(param_1 + 0xc66c) + 4), cVar5 == '\0')) {
      if (*(int *)(param_1 + 0x7a8c) == 0) goto LAB_04093c19;
LAB_04094c04:
      iVar6 = *(int *)(param_1 + 0xeb48);
      iVar15 = *(int *)(param_1 + 0x7a84);
      iVar12 = *(int *)(param_1 + 0x7a10);
      iVar14 = *(int *)(param_1 + 0x7a00);
      if (*(char *)(iVar6 + 0x218) == '\0') {
        cVar5 = FUN_04021f80();
        if (cVar5 == '\0') {
          cVar5 = FUN_04021f90();
          if (cVar5 != '\0') {
            if ((pcVar18 == *(char **)(iVar6 + 0x450)) && (iVar15 == *(int *)(iVar6 + 0x454))) {
              if (iVar14 != *(int *)(iVar6 + 0x448)) {
                pcVar30 = pcVar18;
                glStencilFunc(iVar14,pcVar18,iVar15);
              }
              if (iVar12 == *(int *)(iVar6 + 0x44c)) goto LAB_04094c85;
            }
            else {
              pcVar30 = pcVar18;
              glStencilFunc(iVar14,pcVar18,iVar15);
            }
            (*DAT_0451d648)(CONCAT44(pcVar30,0x405));
            glStencilFunc(iVar12,pcVar18,iVar15);
            (*DAT_0451d648)(0x404);
          }
        }
        else if ((((pcVar18 != *(char **)(iVar6 + 0x450)) || (iVar15 != *(int *)(iVar6 + 0x454))) ||
                 (iVar14 != *(int *)(iVar6 + 0x448))) || (iVar12 != *(int *)(iVar6 + 0x44c))) {
          if (iVar12 == iVar14) goto LAB_040970ab;
          (*DAT_0451dd80)(iVar14,iVar12,pcVar18);
        }
      }
      else if ((pcVar18 == *(char **)(iVar6 + 0x450)) && (iVar15 == *(int *)(iVar6 + 0x454))) {
        if (iVar14 != *(int *)(iVar6 + 0x448)) {
          (*DAT_0451ec6c)(0x404,iVar14,pcVar18);
        }
        if (iVar12 != *(int *)(iVar6 + 0x44c)) {
          (*DAT_0451ec6c)(0x405,iVar14,pcVar18);
        }
      }
      else if (iVar12 == iVar14) {
LAB_040970ab:
        glStencilFunc(iVar12,pcVar18,iVar15);
      }
      else {
        (*DAT_0451ec6c)(0x404,iVar14,pcVar18);
        (*DAT_0451ec6c)(0x405,iVar12,pcVar18);
      }
LAB_04094c85:
      *(int *)(iVar6 + 0x448) = iVar14;
      *(char **)(iVar6 + 0x450) = pcVar18;
      iVar14 = *(int *)(param_1 + 0x7a04);
      *(int *)(iVar6 + 0x44c) = iVar12;
      iVar12 = *(int *)(param_1 + 0x7a0c);
      *(int *)(iVar6 + 0x454) = iVar15;
      iVar6 = *(int *)(param_1 + 0xeb48);
      iVar15 = *(int *)(param_1 + 0x7a08);
      iVar10 = *(int *)(param_1 + 0x79fc);
      iVar9 = *(int *)(param_1 + 0x79f8);
      iVar3 = *(int *)(param_1 + 0x79f4);
      if (((iVar3 != *(int *)(iVar6 + 0x488)) || (iVar9 != *(int *)(iVar6 + 0x48c))) ||
         (iVar10 != *(int *)(iVar6 + 0x490))) {
        if (*(char *)(iVar6 + 0x218) == '\0') {
          cVar5 = FUN_04021f80();
          if (cVar5 == '\0') {
            cVar5 = FUN_04021f90();
            if (cVar5 != '\0') {
              glStencilOp(iVar3,iVar9,iVar10);
            }
          }
          else {
            (*DAT_0451dd7c)(0x404,iVar3,iVar9);
          }
        }
        else {
          (*DAT_0451ec64)(0x404,iVar3,iVar9);
        }
        *(int *)(iVar6 + 0x488) = iVar3;
        *(int *)(iVar6 + 0x48c) = iVar9;
        *(int *)(iVar6 + 0x490) = iVar10;
      }
      if (((iVar14 == *(int *)(iVar6 + 0x494)) && (iVar15 == *(int *)(iVar6 + 0x498))) &&
         (iVar12 == *(int *)(iVar6 + 0x49c))) {
LAB_04093ceb:
        uVar19 = *(uint *)(param_1 + 0xea04);
        goto LAB_04093cf1;
      }
      if (*(char *)(iVar6 + 0x218) == '\0') {
        cVar5 = FUN_04021f80();
        if (cVar5 == '\0') {
          cVar5 = FUN_04021f90();
          if (cVar5 != '\0') {
            (*DAT_0451d648)(0x405);
            glStencilOp(iVar14,iVar15,iVar12);
            (*DAT_0451d648)(0x404);
          }
        }
        else {
          (*DAT_0451dd7c)(0x405,iVar14,iVar15);
        }
      }
      else {
        (*DAT_0451ec64)(0x405,iVar14,iVar15);
      }
      *(int *)(iVar6 + 0x494) = iVar14;
      uVar19 = *(uint *)(param_1 + 0xea04);
      *(int *)(iVar6 + 0x498) = iVar15;
      *(int *)(iVar6 + 0x49c) = iVar12;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    else {
      pcVar18 = *(char **)(param_1 + 0x7a80);
      if (*(int *)(param_1 + 0x7a8c) != 0) goto LAB_04094c04;
LAB_04093c19:
      iVar6 = *(int *)(param_1 + 0x7a00);
      iVar12 = *(int *)(param_1 + 0xeb48);
      iVar15 = *(int *)(param_1 + 0x7a84);
      if (((iVar6 != *(int *)(iVar12 + 0x448)) || (pcVar18 != *(char **)(iVar12 + 0x450))) ||
         (iVar15 != *(int *)(iVar12 + 0x454))) {
        glStencilFunc(iVar6,pcVar18,iVar15);
        *(int *)(iVar12 + 0x448) = iVar6;
        cVar5 = FUN_04021f90();
        if (cVar5 == '\0') {
          *(int *)(iVar12 + 0x44c) = iVar6;
        }
        *(char **)(iVar12 + 0x450) = pcVar18;
        *(int *)(iVar12 + 0x454) = iVar15;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
      iVar6 = *(int *)(param_1 + 0x79f4);
      iVar15 = *(int *)(param_1 + 0x79fc);
      iVar14 = *(int *)(param_1 + 0x79f8);
      if (((iVar6 != *(int *)(iVar12 + 0x488)) || (iVar14 != *(int *)(iVar12 + 0x48c))) ||
         (iVar15 != *(int *)(iVar12 + 0x490))) {
        glStencilOp(iVar6,iVar14,iVar15);
        *(int *)(iVar12 + 0x488) = iVar6;
        *(int *)(iVar12 + 0x48c) = iVar14;
        *(int *)(iVar12 + 0x490) = iVar15;
        cVar5 = FUN_04021f90();
        if (cVar5 == '\0') {
          *(int *)(iVar12 + 0x498) = iVar14;
          *(int *)(iVar12 + 0x494) = iVar6;
          *(int *)(iVar12 + 0x49c) = iVar15;
        }
        goto LAB_04093ceb;
      }
      uVar19 = *(uint *)(param_1 + 0xea04);
    }
  }
  if ((uVar19 & 0x20) != 0) {
    if (DAT_0451c9ca != '\0') {
      if (*(int *)(param_1 + 0x7a98) == 0x4244564e) {
        fVar28 = *(float *)(param_1 + 0x7a9c);
        fVar23 = *(float *)(param_1 + 0x7aa0);
        if (fVar28 <= fVar23) {
          if ((fVar28 != *(float *)(iVar12 + 0xa78)) || (fVar23 != *(float *)(iVar12 + 0xa7c))) {
            (*DAT_0451dbf0)((double)fVar28,(double)fVar23);
            *(float *)(iVar12 + 0xa78) = fVar28;
            *(float *)(iVar12 + 0xa7c) = fVar23;
            iVar12 = *(int *)(param_1 + 0xeb48);
          }
          if (*(char *)(iVar12 + 0xa94) != '\x01') {
            glEnable(0x8890);
            *(undefined1 *)(iVar12 + 0xa94) = 1;
            iVar12 = *(int *)(param_1 + 0xeb48);
          }
          goto LAB_04093d3a;
        }
      }
      if (*(char *)(iVar12 + 0xa94) != '\0') {
        glDisable(0x8890);
        *(undefined1 *)(iVar12 + 0xa94) = 0;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
    }
LAB_04093d3a:
    uVar19 = *(uint *)(param_1 + 0x79f0);
    if (uVar19 != *(uint *)(iVar12 + 0x504)) {
      *(uint *)(iVar12 + 0x504) = uVar19;
      (*DAT_0451edf4)((DAT_042dbf34 * 0.0 + (float)(uVar19 >> 0x10 & 0xff)) / _DAT_042dc5a0,
                      (DAT_042dbf34 * 0.0 + (float)(uVar19 >> 8 & 0xff)) / _DAT_042dc5a0,
                      (DAT_042dbf34 * 0.0 + (float)(uVar19 & 0xff)) / _DAT_042dc5a0);
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(param_1 + 0xeb51) == '\0') {
      iVar6 = *(int *)(param_1 + 0x7a4c);
      bVar21 = iVar6 != 0;
      if (bVar21 != (bool)*(char *)(iVar12 + 0xa8a)) {
        if (*(char *)(iVar12 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x127);
        }
        if (bVar21) {
          glEnable();
        }
        else {
          glDisable(0xbc0);
        }
        iVar6 = *(int *)(param_1 + 0x7a4c);
        *(bool *)(iVar12 + 0xa8a) = bVar21;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 0x79d0);
        fVar28 = *(float *)(param_1 + 0x79d4);
        if ((iVar6 != *(int *)(iVar12 + 0x458)) || (fVar28 != *(float *)(iVar12 + 0x45c))) {
          glAlphaFunc(iVar6);
          *(int *)(iVar12 + 0x458) = iVar6;
          *(float *)(iVar12 + 0x45c) = fVar28;
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
      }
    }
    else if (*(char *)(iVar12 + 0xa8a) != '\0') {
      if (*(char *)(iVar12 + 0x218) != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x127);
      }
      glDisable(0xbc0);
      *(undefined1 *)(iVar12 + 0xa8a) = 0;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    bVar21 = *(int *)(param_1 + 0x7a58) != 0;
    if (bVar21 != (bool)*(char *)(iVar12 + 0xa8f)) {
      if (bVar21) {
        glEnable(0xbd0);
      }
      else {
        glDisable();
      }
      *(bool *)(iVar12 + 0xa8f) = bVar21;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    bVar21 = *(int *)(param_1 + 0x7a70) != 0;
    if (bVar21 != (bool)*(char *)(iVar12 + 0xa90)) {
      if (bVar21) {
        glEnable(0x8db9);
      }
      else {
        glDisable();
      }
      *(bool *)(iVar12 + 0xa90) = bVar21;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    iVar6 = *(int *)(param_1 + 0x7a14);
    if (iVar6 != *(int *)(iVar12 + 0x444)) {
      glDepthFunc(iVar6);
      *(int *)(iVar12 + 0x444) = iVar6;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    iVar6 = *(int *)(param_1 + 0x7a20);
    if (iVar6 != *(int *)(iVar12 + 0x4a0)) {
      (*DAT_0451eec4)(0x408);
      *(int *)(iVar12 + 0x4a0) = iVar6;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
  }
  iVar6 = *(int *)(param_1 + 0x7a5c);
  bVar21 = iVar6 != 0;
  if (bVar21 != (bool)*(char *)(iVar12 + 0xa8b)) {
    if (bVar21) {
      glEnable(0xc11);
    }
    else {
      glDisable();
    }
    *(bool *)(iVar12 + 0xa8b) = bVar21;
    iVar6 = *(int *)(param_1 + 0x7a5c);
    iVar12 = *(int *)(param_1 + 0xeb48);
  }
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x8168);
    iVar15 = *(int *)(param_1 + 0x816c);
    iVar14 = *(int *)(param_1 + 0x8170) - iVar6;
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    iVar9 = *(int *)(param_1 + 0x8174) - iVar15;
    iVar10 = 0;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    if ((((iVar6 != *(int *)(iVar12 + 0x434)) || (iVar15 != *(int *)(iVar12 + 0x438))) ||
        (*(int *)(iVar12 + 0x43c) != iVar14)) || (*(int *)(iVar12 + 0x440) != iVar10)) {
      glScissor(iVar6,iVar15,iVar14);
      *(int *)(iVar12 + 0x434) = iVar6;
      *(int *)(iVar12 + 0x438) = iVar15;
      *(int *)(iVar12 + 0x43c) = iVar14;
      *(int *)(iVar12 + 0x440) = iVar10;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
  }
  if (*(int *)(iVar12 + 0x358) == 0) {
    FUN_0400a810("mOpenGLContextCache->GetCurrentDrawFramebuffer() != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x2aba);
  }
  if (*(char *)(param_1 + 0xeb4c) == '\0') {
    iVar6 = *(int *)(param_1 + 0xeb48);
    bVar21 = *(int *)(param_1 + 0x7aa8) != 0;
    cVar5 = *(char *)(iVar6 + 0x218);
    if (bVar21 != (bool)*(char *)(iVar6 + 0xa91)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x17f);
      }
      if (bVar21) {
        glTexEnvi(0x8861,0x8862,1);
        glEnable(0x8861);
      }
      else {
        glDisable(0x8861);
        glTexEnvi(0x8861,0x8862,0);
      }
      *(bool *)(iVar6 + 0xa91) = bVar21;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(iVar6 + 0x4d0);
    if (*(float *)(param_1 + 0x7ac0) <= *(float *)(iVar6 + 0x4d0)) {
      fVar28 = *(float *)(param_1 + 0x7ac0);
    }
    if (fVar28 != *(float *)(iVar6 + 0x4c8)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2dd);
      }
      (*DAT_0451edcc)(0x8127);
      *(float *)(iVar6 + 0x4c8) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7abc);
    fVar23 = *(float *)(iVar6 + 0x4cc);
    if ((*(float *)(iVar6 + 0x4cc) <= fVar28) &&
       (fVar23 = *(float *)(iVar6 + 0x4c8), fVar28 <= *(float *)(iVar6 + 0x4c8))) {
      fVar23 = fVar28;
    }
    if (fVar23 != *(float *)(iVar6 + 0x4c4)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2d0);
      }
      (*DAT_0451edcc)(0x8126);
      *(float *)(iVar6 + 0x4c4) = fVar23;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    iVar15 = *(int *)(param_1 + 0x7a24);
    if (iVar15 != *(int *)(iVar6 + 0x4a4)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2a3);
      }
      glShadeModel(iVar15);
      *(int *)(iVar6 + 0x4a4) = iVar15;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x4e4),(void *)(param_1 + 0x7a28),0x10);
    if (iVar15 != 0) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2fc);
      }
      glFogfv(0xb66);
      *(undefined4 *)(iVar6 + 0x4e4) = *(undefined4 *)(param_1 + 0x7a28);
      *(undefined4 *)(iVar6 + 0x4e8) = *(undefined4 *)(param_1 + 0x7a2c);
      *(undefined4 *)(iVar6 + 0x4ec) = *(undefined4 *)(param_1 + 0x7a30);
      *(undefined4 *)(iVar6 + 0x4f0) = *(undefined4 *)(param_1 + 0x7a34);
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7a38);
    if (fVar28 != *(float *)(iVar6 + 0x4f4)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x306);
      }
      glFogf(0xb63);
      *(float *)(iVar6 + 0x4f4) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7a3c);
    if (fVar28 != *(float *)(iVar6 + 0x4f8)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x310);
      }
      glFogf(0xb64);
      *(float *)(iVar6 + 0x4f8) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7a40);
    if (fVar28 != *(float *)(iVar6 + 0x4fc)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x31a);
      }
      glFogf(0xb62);
      *(float *)(iVar6 + 0x4fc) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
    }
    if ((*(int *)(param_1 + 0xc630) != *(int *)(iVar6 + 0x1a8)) ||
       (*(int *)(param_1 + 0xc63c) != *(int *)(iVar6 + 0x1ac))) {
      if (*(int *)(iVar6 + 0x500) != 0x1700) {
        if (*(char *)(iVar6 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x3bc);
        }
        glMatrixMode(0x1700);
        *(undefined4 *)(iVar6 + 0x500) = 0x1700;
      }
      glLoadMatrixf(param_1 + 0x83b0);
      glMultMatrixf(param_1 + 0x8630);
      iVar6 = *(int *)(param_1 + 0xeb48);
      *(undefined4 *)(iVar6 + 0x1a8) = *(undefined4 *)(param_1 + 0xc630);
      *(undefined4 *)(iVar6 + 0x1ac) = *(undefined4 *)(param_1 + 0xc63c);
    }
    if (*(int *)(param_1 + 0xc634) != *(int *)(iVar6 + 0x1b0)) {
      if (*(int *)(iVar6 + 0x500) != 0x1701) {
        if (*(char *)(iVar6 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x3bc);
        }
        glMatrixMode(0x1701);
        *(undefined4 *)(iVar6 + 0x500) = 0x1701;
      }
      glLoadMatrixf(param_1 + 0x83f0);
      iVar6 = *(int *)(param_1 + 0xeb48);
      *(undefined4 *)(iVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0xc634);
    }
    if (*(int *)(param_1 + 0xc638) == *(int *)(iVar6 + 0x1b4)) {
      return;
    }
    if (*(char *)(iVar6 + 0x218) != '\0') {
      FUN_0400a810("!mUsingOpenGLCore",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                   ,0x3da);
    }
    local_44 = *(float *)(iVar6 + 0x234);
    local_40 = *(float *)(iVar6 + 0x500);
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x86c),(void *)(param_1 + 0x8430),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c0);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8430));
      *(undefined4 *)(iVar6 + 0x86c) = *(undefined4 *)(param_1 + 0x8430);
      *(undefined4 *)(iVar6 + 0x870) = *(undefined4 *)(param_1 + 0x8434);
      *(undefined4 *)(iVar6 + 0x874) = *(undefined4 *)(param_1 + 0x8438);
      *(undefined4 *)(iVar6 + 0x878) = *(undefined4 *)(param_1 + 0x843c);
      *(undefined4 *)(iVar6 + 0x87c) = *(undefined4 *)(param_1 + 0x8440);
      *(undefined4 *)(iVar6 + 0x880) = *(undefined4 *)(param_1 + 0x8444);
      *(undefined4 *)(iVar6 + 0x884) = *(undefined4 *)(param_1 + 0x8448);
      *(undefined4 *)(iVar6 + 0x888) = *(undefined4 *)(param_1 + 0x844c);
      *(undefined4 *)(iVar6 + 0x88c) = *(undefined4 *)(param_1 + 0x8450);
      *(undefined4 *)(iVar6 + 0x890) = *(undefined4 *)(param_1 + 0x8454);
      *(undefined4 *)(iVar6 + 0x894) = *(undefined4 *)(param_1 + 0x8458);
      *(undefined4 *)(iVar6 + 0x898) = *(undefined4 *)(param_1 + 0x845c);
      *(undefined4 *)(iVar6 + 0x89c) = *(undefined4 *)(param_1 + 0x8460);
      *(undefined4 *)(iVar6 + 0x8a0) = *(undefined4 *)(param_1 + 0x8464);
      *(undefined4 *)(iVar6 + 0x8a4) = *(undefined4 *)(param_1 + 0x8468);
      *(undefined4 *)(iVar6 + 0x8a8) = *(undefined4 *)(param_1 + 0x846c);
      local_40 = 8.25365e-42;
      local_44 = 4.76217e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x8ac),(void *)(param_1 + 0x8470),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c1);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8470));
      *(undefined4 *)(iVar6 + 0x8ac) = *(undefined4 *)(param_1 + 0x8470);
      *(undefined4 *)(iVar6 + 0x8b0) = *(undefined4 *)(param_1 + 0x8474);
      *(undefined4 *)(iVar6 + 0x8b4) = *(undefined4 *)(param_1 + 0x8478);
      *(undefined4 *)(iVar6 + 0x8b8) = *(undefined4 *)(param_1 + 0x847c);
      *(undefined4 *)(iVar6 + 0x8bc) = *(undefined4 *)(param_1 + 0x8480);
      *(undefined4 *)(iVar6 + 0x8c0) = *(undefined4 *)(param_1 + 0x8484);
      *(undefined4 *)(iVar6 + 0x8c4) = *(undefined4 *)(param_1 + 0x8488);
      *(undefined4 *)(iVar6 + 0x8c8) = *(undefined4 *)(param_1 + 0x848c);
      *(undefined4 *)(iVar6 + 0x8cc) = *(undefined4 *)(param_1 + 0x8490);
      *(undefined4 *)(iVar6 + 0x8d0) = *(undefined4 *)(param_1 + 0x8494);
      *(undefined4 *)(iVar6 + 0x8d4) = *(undefined4 *)(param_1 + 0x8498);
      *(undefined4 *)(iVar6 + 0x8d8) = *(undefined4 *)(param_1 + 0x849c);
      *(undefined4 *)(iVar6 + 0x8dc) = *(undefined4 *)(param_1 + 0x84a0);
      *(undefined4 *)(iVar6 + 0x8e0) = *(undefined4 *)(param_1 + 0x84a4);
      *(undefined4 *)(iVar6 + 0x8e4) = *(undefined4 *)(param_1 + 0x84a8);
      *(undefined4 *)(iVar6 + 0x8e8) = *(undefined4 *)(param_1 + 0x84ac);
      local_40 = 8.25365e-42;
      local_44 = 4.76231e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x8ec),(void *)(param_1 + 0x84b0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c2);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x84b0));
      *(undefined4 *)(iVar6 + 0x8ec) = *(undefined4 *)(param_1 + 0x84b0);
      *(undefined4 *)(iVar6 + 0x8f0) = *(undefined4 *)(param_1 + 0x84b4);
      *(undefined4 *)(iVar6 + 0x8f4) = *(undefined4 *)(param_1 + 0x84b8);
      *(undefined4 *)(iVar6 + 0x8f8) = *(undefined4 *)(param_1 + 0x84bc);
      *(undefined4 *)(iVar6 + 0x8fc) = *(undefined4 *)(param_1 + 0x84c0);
      *(undefined4 *)(iVar6 + 0x900) = *(undefined4 *)(param_1 + 0x84c4);
      *(undefined4 *)(iVar6 + 0x904) = *(undefined4 *)(param_1 + 0x84c8);
      *(undefined4 *)(iVar6 + 0x908) = *(undefined4 *)(param_1 + 0x84cc);
      *(undefined4 *)(iVar6 + 0x90c) = *(undefined4 *)(param_1 + 34000);
      *(undefined4 *)(iVar6 + 0x910) = *(undefined4 *)(param_1 + 0x84d4);
      *(undefined4 *)(iVar6 + 0x914) = *(undefined4 *)(param_1 + 0x84d8);
      *(undefined4 *)(iVar6 + 0x918) = *(undefined4 *)(param_1 + 0x84dc);
      *(undefined4 *)(iVar6 + 0x91c) = *(undefined4 *)(param_1 + 0x84e0);
      *(undefined4 *)(iVar6 + 0x920) = *(undefined4 *)(param_1 + 0x84e4);
      *(undefined4 *)(iVar6 + 0x924) = *(undefined4 *)(param_1 + 0x84e8);
      *(undefined4 *)(iVar6 + 0x928) = *(undefined4 *)(param_1 + 0x84ec);
      local_40 = 8.25365e-42;
      local_44 = 4.76245e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x92c),(void *)(param_1 + 0x84f0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c3);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x84f0));
      *(undefined4 *)(iVar6 + 0x92c) = *(undefined4 *)(param_1 + 0x84f0);
      *(undefined4 *)(iVar6 + 0x930) = *(undefined4 *)(param_1 + 0x84f4);
      *(undefined4 *)(iVar6 + 0x934) = *(undefined4 *)(param_1 + 0x84f8);
      *(undefined4 *)(iVar6 + 0x938) = *(undefined4 *)(param_1 + 0x84fc);
      *(undefined4 *)(iVar6 + 0x93c) = *(undefined4 *)(param_1 + 0x8500);
      *(undefined4 *)(iVar6 + 0x940) = *(undefined4 *)(param_1 + 0x8504);
      *(undefined4 *)(iVar6 + 0x944) = *(undefined4 *)(param_1 + 0x8508);
      *(undefined4 *)(iVar6 + 0x948) = *(undefined4 *)(param_1 + 0x850c);
      *(undefined4 *)(iVar6 + 0x94c) = *(undefined4 *)(param_1 + 0x8510);
      *(undefined4 *)(iVar6 + 0x950) = *(undefined4 *)(param_1 + 0x8514);
      *(undefined4 *)(iVar6 + 0x954) = *(undefined4 *)(param_1 + 0x8518);
      *(undefined4 *)(iVar6 + 0x958) = *(undefined4 *)(param_1 + 0x851c);
      *(undefined4 *)(iVar6 + 0x95c) = *(undefined4 *)(param_1 + 0x8520);
      *(undefined4 *)(iVar6 + 0x960) = *(undefined4 *)(param_1 + 0x8524);
      *(undefined4 *)(iVar6 + 0x964) = *(undefined4 *)(param_1 + 0x8528);
      *(undefined4 *)(iVar6 + 0x968) = *(undefined4 *)(param_1 + 0x852c);
      local_40 = 8.25365e-42;
      local_44 = 4.76259e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x96c),(void *)(param_1 + 0x8530),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c4);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8530));
      *(undefined4 *)(iVar6 + 0x96c) = *(undefined4 *)(param_1 + 0x8530);
      *(undefined4 *)(iVar6 + 0x970) = *(undefined4 *)(param_1 + 0x8534);
      *(undefined4 *)(iVar6 + 0x974) = *(undefined4 *)(param_1 + 0x8538);
      *(undefined4 *)(iVar6 + 0x978) = *(undefined4 *)(param_1 + 0x853c);
      *(undefined4 *)(iVar6 + 0x97c) = *(undefined4 *)(param_1 + 0x8540);
      *(undefined4 *)(iVar6 + 0x980) = *(undefined4 *)(param_1 + 0x8544);
      *(undefined4 *)(iVar6 + 0x984) = *(undefined4 *)(param_1 + 0x8548);
      *(undefined4 *)(iVar6 + 0x988) = *(undefined4 *)(param_1 + 0x854c);
      *(undefined4 *)(iVar6 + 0x98c) = *(undefined4 *)(param_1 + 0x8550);
      *(undefined4 *)(iVar6 + 0x990) = *(undefined4 *)(param_1 + 0x8554);
      *(undefined4 *)(iVar6 + 0x994) = *(undefined4 *)(param_1 + 0x8558);
      *(undefined4 *)(iVar6 + 0x998) = *(undefined4 *)(param_1 + 0x855c);
      *(undefined4 *)(iVar6 + 0x99c) = *(undefined4 *)(param_1 + 0x8560);
      *(undefined4 *)(iVar6 + 0x9a0) = *(undefined4 *)(param_1 + 0x8564);
      *(undefined4 *)(iVar6 + 0x9a4) = *(undefined4 *)(param_1 + 0x8568);
      *(undefined4 *)(iVar6 + 0x9a8) = *(undefined4 *)(param_1 + 0x856c);
      local_40 = 8.25365e-42;
      local_44 = 4.76273e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x9ac),(void *)(param_1 + 0x8570),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c5);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8570));
      *(undefined4 *)(iVar6 + 0x9ac) = *(undefined4 *)(param_1 + 0x8570);
      *(undefined4 *)(iVar6 + 0x9b0) = *(undefined4 *)(param_1 + 0x8574);
      *(undefined4 *)(iVar6 + 0x9b4) = *(undefined4 *)(param_1 + 0x8578);
      *(undefined4 *)(iVar6 + 0x9b8) = *(undefined4 *)(param_1 + 0x857c);
      *(undefined4 *)(iVar6 + 0x9bc) = *(undefined4 *)(param_1 + 0x8580);
      *(undefined4 *)(iVar6 + 0x9c0) = *(undefined4 *)(param_1 + 0x8584);
      *(undefined4 *)(iVar6 + 0x9c4) = *(undefined4 *)(param_1 + 0x8588);
      *(undefined4 *)(iVar6 + 0x9c8) = *(undefined4 *)(param_1 + 0x858c);
      *(undefined4 *)(iVar6 + 0x9cc) = *(undefined4 *)(param_1 + 0x8590);
      *(undefined4 *)(iVar6 + 0x9d0) = *(undefined4 *)(param_1 + 0x8594);
      *(undefined4 *)(iVar6 + 0x9d4) = *(undefined4 *)(param_1 + 0x8598);
      *(undefined4 *)(iVar6 + 0x9d8) = *(undefined4 *)(param_1 + 0x859c);
      *(undefined4 *)(iVar6 + 0x9dc) = *(undefined4 *)(param_1 + 0x85a0);
      *(undefined4 *)(iVar6 + 0x9e0) = *(undefined4 *)(param_1 + 0x85a4);
      *(undefined4 *)(iVar6 + 0x9e4) = *(undefined4 *)(param_1 + 0x85a8);
      *(undefined4 *)(iVar6 + 0x9e8) = *(undefined4 *)(param_1 + 0x85ac);
      local_40 = 8.25365e-42;
      local_44 = 4.76287e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x9ec),(void *)(param_1 + 0x85b0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c6);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x85b0));
      *(undefined4 *)(iVar6 + 0x9ec) = *(undefined4 *)(param_1 + 0x85b0);
      *(undefined4 *)(iVar6 + 0x9f0) = *(undefined4 *)(param_1 + 0x85b4);
      *(undefined4 *)(iVar6 + 0x9f4) = *(undefined4 *)(param_1 + 0x85b8);
      *(undefined4 *)(iVar6 + 0x9f8) = *(undefined4 *)(param_1 + 0x85bc);
      *(undefined4 *)(iVar6 + 0x9fc) = *(undefined4 *)(param_1 + 0x85c0);
      *(undefined4 *)(iVar6 + 0xa00) = *(undefined4 *)(param_1 + 0x85c4);
      *(undefined4 *)(iVar6 + 0xa04) = *(undefined4 *)(param_1 + 0x85c8);
      *(undefined4 *)(iVar6 + 0xa08) = *(undefined4 *)(param_1 + 0x85cc);
      *(undefined4 *)(iVar6 + 0xa0c) = *(undefined4 *)(param_1 + 0x85d0);
      *(undefined4 *)(iVar6 + 0xa10) = *(undefined4 *)(param_1 + 0x85d4);
      *(undefined4 *)(iVar6 + 0xa14) = *(undefined4 *)(param_1 + 0x85d8);
      *(undefined4 *)(iVar6 + 0xa18) = *(undefined4 *)(param_1 + 0x85dc);
      *(undefined4 *)(iVar6 + 0xa1c) = *(undefined4 *)(param_1 + 0x85e0);
      *(undefined4 *)(iVar6 + 0xa20) = *(undefined4 *)(param_1 + 0x85e4);
      *(undefined4 *)(iVar6 + 0xa24) = *(undefined4 *)(param_1 + 0x85e8);
      *(undefined4 *)(iVar6 + 0xa28) = *(undefined4 *)(param_1 + 0x85ec);
      local_40 = 8.25365e-42;
      local_44 = 4.76301e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0xa2c),(void *)(param_1 + 0x85f0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c7);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x85f0));
      *(undefined4 *)(iVar6 + 0xa2c) = *(undefined4 *)(param_1 + 0x85f0);
      *(undefined4 *)(iVar6 + 0xa30) = *(undefined4 *)(param_1 + 0x85f4);
      *(undefined4 *)(iVar6 + 0xa34) = *(undefined4 *)(param_1 + 0x85f8);
      *(undefined4 *)(iVar6 + 0xa38) = *(undefined4 *)(param_1 + 0x85fc);
      *(undefined4 *)(iVar6 + 0xa3c) = *(undefined4 *)(param_1 + 0x8600);
      *(undefined4 *)(iVar6 + 0xa40) = *(undefined4 *)(param_1 + 0x8604);
      *(undefined4 *)(iVar6 + 0xa44) = *(undefined4 *)(param_1 + 0x8608);
      *(undefined4 *)(iVar6 + 0xa48) = *(undefined4 *)(param_1 + 0x860c);
      *(undefined4 *)(iVar6 + 0xa4c) = *(undefined4 *)(param_1 + 0x8610);
      *(undefined4 *)(iVar6 + 0xa50) = *(undefined4 *)(param_1 + 0x8614);
      *(undefined4 *)(iVar6 + 0xa54) = *(undefined4 *)(param_1 + 0x8618);
      *(undefined4 *)(iVar6 + 0xa58) = *(undefined4 *)(param_1 + 0x861c);
      *(undefined4 *)(iVar6 + 0xa5c) = *(undefined4 *)(param_1 + 0x8620);
      *(undefined4 *)(iVar6 + 0xa60) = *(undefined4 *)(param_1 + 0x8624);
      *(undefined4 *)(iVar6 + 0xa64) = *(undefined4 *)(param_1 + 0x8628);
      *(undefined4 *)(iVar6 + 0xa68) = *(undefined4 *)(param_1 + 0x862c);
      local_40 = 8.25365e-42;
      local_44 = 4.76315e-41;
    }
    if ((float)*(int *)(iVar6 + 0x234) != local_44) {
      (*DAT_0451eeac)(*(int *)(iVar6 + 0x234));
    }
    if ((float)*(int *)(iVar6 + 0x500) != local_40) {
      glMatrixMode(*(int *)(iVar6 + 0x500));
    }
    *(undefined4 *)(*(int *)(param_1 + 0xeb48) + 0x1b4) = *(undefined4 *)(param_1 + 0xc638);
    return;
  }
  iVar6 = *(int *)(param_1 + 0xe9ec);
  uVar19 = 1;
  iVar15 = *(int *)(iVar6 + 0x16c);
  bVar21 = iVar15 == 0;
  if (bVar21) {
    uVar19 = 2;
    FUN_040f03f0(*(undefined4 *)(param_1 + 0xeb78),*(undefined4 *)(iVar6 + 0x164),
                 *(undefined4 *)(iVar6 + 0x168));
    iVar15 = *(int *)(iVar6 + 0x170);
  }
  uVar7 = (uint)bVar21;
  if (iVar15 == 1) {
    FUN_040f0410(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x16c + uVar19 * 4);
    uVar7 = uVar19;
  }
  uVar19 = uVar7;
  if (iVar15 == 2) {
    uVar19 = uVar7 + 1;
    FUN_040f0480(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  }
  uVar7 = uVar19;
  if (iVar15 == 3) {
    uVar7 = uVar19 + 1;
    FUN_040f04f0(*(undefined4 *)(param_1 + 0xeb78),
                 *(undefined4 *)(*(int *)(param_1 + 0xe9ec) + 0x164),
                 *(undefined4 *)(*(int *)(param_1 + 0xe9ec) + 0x168));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar19 * 4);
  }
  uVar19 = uVar7;
  if (iVar15 == 4) {
    uVar19 = uVar7 + 1;
    FUN_040f0510(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  }
  uVar7 = uVar19;
  if (iVar15 == 5) {
    uVar7 = uVar19 + 1;
    FUN_040f0580(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar19 * 4);
  }
  uVar19 = uVar7;
  if (iVar15 == 6) {
    uVar19 = uVar7 + 1;
    FUN_040f05f0(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  }
  uVar7 = uVar19;
  if (iVar15 == 7) {
    uVar7 = uVar19 + 1;
    FUN_040f0660(*(undefined4 *)(param_1 + 0xeb78),*(undefined4 *)(param_1 + 0xc644),uVar19);
    iVar15 = *(int *)(iVar6 + 0x170 + uVar19 * 4);
  }
  if (iVar15 == 8) {
    if ((*(byte *)(param_1 + 0xea05) & 1) == 0) {
      iVar12 = *(int *)(param_1 + 0xc648);
      iVar15 = *(int *)(param_1 + 0xeb78);
    }
    else {
      local_2c = 0;
      local_28 = 0;
      iVar15 = *(int *)(param_1 + 0xeb78);
      local_24 = DAT_042f7398 /
                 ((float)(*(uint *)(param_1 + 0xe9c4) >> 0x10) * DAT_042dbf34 +
                 (float)(*(uint *)(param_1 + 0xe9c4) & 0xffff));
      local_20 = DAT_042f7398 /
                 ((float)(*(uint *)(param_1 + 0xe9c8) >> 0x10) * DAT_042dbf34 +
                 (float)(*(uint *)(param_1 + 0xe9c8) & 0xffff));
      iVar12 = memcmp((void *)(iVar15 + 0x75c),&local_2c,0x10);
      if (iVar12 == 0) {
        iVar12 = *(int *)(param_1 + 0xc648);
      }
      else {
        *(undefined4 *)(iVar15 + 0x75c) = local_2c;
        *(undefined4 *)(iVar15 + 0x760) = local_28;
        *(float *)(iVar15 + 0x764) = local_24;
        *(float *)(iVar15 + 0x768) = local_20;
        iVar15 = *(int *)(param_1 + 0xeb78);
        iVar12 = *(int *)(param_1 + 0xc648) + 1;
        *(int *)(param_1 + 0xc648) = iVar12;
      }
    }
    FUN_040f06d0(iVar15,iVar12,uVar7);
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
    uVar7 = uVar7 + 1;
  }
  if (iVar15 != 9) goto joined_r0x04096c8c;
  iVar15 = *(int *)(param_1 + 0xeb78);
  if (*(int *)(param_1 + 0xc630) == *(int *)(iVar15 + 4)) {
    if (*(int *)(param_1 + 0xc63c) != *(int *)(iVar15 + 8)) goto LAB_04094ecc;
    if (*(int *)(param_1 + 0xc634) != *(int *)(iVar15 + 0xc)) {
      local_5c = *(float *)(iVar15 + 0x7ec);
      local_60 = *(float *)(iVar15 + 0x7f0);
      local_64 = *(float *)(iVar15 + 0x7f4);
      goto LAB_040967d3;
    }
  }
  else {
    *(undefined4 *)(iVar15 + 0x8ac) = *(undefined4 *)(param_1 + 0x83b0);
    *(undefined4 *)(iVar15 + 0x8b0) = *(undefined4 *)(param_1 + 0x83b4);
    *(undefined4 *)(iVar15 + 0x8b4) = *(undefined4 *)(param_1 + 0x83b8);
    *(undefined4 *)(iVar15 + 0x8b8) = *(undefined4 *)(param_1 + 0x83bc);
    *(undefined4 *)(iVar15 + 0x8bc) = *(undefined4 *)(param_1 + 0x83c0);
    *(undefined4 *)(iVar15 + 0x8c0) = *(undefined4 *)(param_1 + 0x83c4);
    *(undefined4 *)(iVar15 + 0x8c4) = *(undefined4 *)(param_1 + 0x83c8);
    *(undefined4 *)(iVar15 + 0x8c8) = *(undefined4 *)(param_1 + 0x83cc);
    *(undefined4 *)(iVar15 + 0x8cc) = *(undefined4 *)(param_1 + 0x83d0);
    *(undefined4 *)(iVar15 + 0x8d0) = *(undefined4 *)(param_1 + 0x83d4);
    *(undefined4 *)(iVar15 + 0x8d4) = *(undefined4 *)(param_1 + 0x83d8);
    *(undefined4 *)(iVar15 + 0x8d8) = *(undefined4 *)(param_1 + 0x83dc);
    *(undefined4 *)(iVar15 + 0x8dc) = *(undefined4 *)(param_1 + 0x83e0);
    *(undefined4 *)(iVar15 + 0x8e0) = *(undefined4 *)(param_1 + 0x83e4);
    *(undefined4 *)(iVar15 + 0x8e4) = *(undefined4 *)(param_1 + 0x83e8);
    *(undefined4 *)(iVar15 + 0x8e8) = *(undefined4 *)(param_1 + 0x83ec);
    iVar15 = *(int *)(param_1 + 0xeb78);
LAB_04094ecc:
    *(float *)(iVar15 + 0x7ec) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x7f0) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x7f4) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x7f8) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83ec);
    *(float *)(iVar15 + 0x7fc) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x800) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x804) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x808) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83ec);
    *(float *)(iVar15 + 0x80c) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x810) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x814) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x818) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83ec);
    *(float *)(iVar15 + 0x81c) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x820) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x824) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x828) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83ec);
    iVar12 = *(int *)(param_1 + 0xeb78);
    local_40 = *(float *)(iVar12 + 0x800);
    local_44 = *(float *)(iVar12 + 0x810);
    local_48 = *(float *)(iVar12 + 0x804);
    fVar28 = *(float *)(iVar12 + 0x814);
    local_50 = *(float *)(iVar12 + 0x80c);
    local_4c = *(float *)(iVar12 + 0x7fc);
    fVar25 = *(float *)(iVar12 + 0x7ec);
    fVar23 = *(float *)(iVar12 + 0x7f0);
    fVar27 = local_40 * fVar28 - local_44 * local_48;
    fVar26 = *(float *)(iVar12 + 0x7f4);
    local_54 = local_4c * fVar28 - local_48 * local_50;
    local_58 = local_44 * local_4c - local_40 * local_50;
    dVar29 = (double)((fVar25 * fVar27 - local_54 * fVar23) + local_58 * fVar26);
    iVar15 = iVar12;
    local_64 = fVar26;
    local_60 = fVar23;
    local_5c = fVar25;
    if (dVar29 == _DAT_042f73c0) {
      FUN_0400a810("det != 0.f",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x29ca,"void CalculateOpenGLNormal(Matrix3x4*, const D3DXMATRIX*)");
      local_40 = *(float *)(iVar12 + 0x800);
      local_48 = *(float *)(iVar12 + 0x804);
      fVar28 = *(float *)(iVar12 + 0x814);
      local_44 = *(float *)(iVar12 + 0x810);
      local_50 = *(float *)(iVar12 + 0x80c);
      iVar15 = *(int *)(param_1 + 0xeb78);
      local_4c = *(float *)(iVar12 + 0x7fc);
      fVar23 = *(float *)(iVar12 + 0x7f0);
      fVar26 = *(float *)(iVar12 + 0x7f4);
      fVar27 = local_40 * fVar28 - local_44 * local_48;
      local_54 = local_4c * fVar28 - local_48 * local_50;
      fVar25 = *(float *)(iVar12 + 0x7ec);
      local_58 = local_44 * local_4c - local_40 * local_50;
      local_64 = *(float *)(iVar15 + 0x7f4);
      local_60 = *(float *)(iVar15 + 0x7f0);
      local_5c = *(float *)(iVar15 + 0x7ec);
    }
    dVar24 = _DAT_042f73c8;
    *(undefined4 *)(iVar12 + 0x908) = 0;
    dVar24 = dVar24 / dVar29;
    uVar4 = *(undefined4 *)(param_1 + 0xc630);
    *(undefined4 *)(iVar12 + 0x918) = 0;
    *(undefined4 *)(iVar12 + 0x928) = 0;
    *(float *)(iVar12 + 0x8fc) = (float)((double)fVar27 * dVar24);
    uVar19 = DAT_042f73b0;
    *(float *)(iVar12 + 0x900) =
         (float)((double)(float)((uint)(fVar28 * fVar23 - local_44 * fVar26) ^ DAT_042f73b0) *
                dVar24);
    *(float *)(iVar12 + 0x904) = (float)((double)(local_48 * fVar23 - local_40 * fVar26) * dVar24);
    *(float *)(iVar12 + 0x90c) = (float)((double)(float)((uint)local_54 ^ uVar19) * dVar24);
    *(float *)(iVar12 + 0x910) = (float)((double)(fVar28 * fVar25 - local_50 * fVar26) * dVar24);
    *(float *)(iVar12 + 0x91c) = (float)((double)local_58 * dVar24);
    *(float *)(iVar12 + 0x914) =
         (float)((double)(float)((uint)(local_48 * fVar25 - fVar26 * local_4c) ^ uVar19) * dVar24);
    *(float *)(iVar12 + 0x920) =
         (float)((double)(float)((uint)(local_44 * fVar25 - local_50 * fVar23) ^ uVar19) * dVar24);
    *(float *)(iVar12 + 0x924) = (float)((double)(fVar25 * local_40 - fVar23 * local_4c) * dVar24);
    *(undefined4 *)(iVar15 + 4) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0xc63c);
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
    *(undefined4 *)(iVar15 + 8) = uVar4;
LAB_040967d3:
    fVar28 = *(float *)(iVar15 + 0x7f8);
    fVar23 = *(float *)(iVar15 + 0x7f0);
    *(float *)(iVar15 + 0x86c) =
         local_5c * *(float *)(param_1 + 0x83f0) + local_60 * *(float *)(param_1 + 0x8400) +
         local_64 * *(float *)(param_1 + 0x8410) + *(float *)(param_1 + 0x8420) * fVar28;
    fVar26 = *(float *)(iVar15 + 0x7ec);
    fVar25 = *(float *)(iVar15 + 0x7f4);
    *(float *)(iVar15 + 0x870) =
         *(float *)(param_1 + 0x83f4) * fVar26 + *(float *)(param_1 + 0x8404) * fVar23 +
         *(float *)(param_1 + 0x8414) * fVar25 + *(float *)(param_1 + 0x8424) * fVar28;
    *(float *)(iVar15 + 0x874) =
         *(float *)(param_1 + 0x83f8) * fVar26 + *(float *)(param_1 + 0x8408) * fVar23 +
         *(float *)(param_1 + 0x8418) * fVar25 + *(float *)(param_1 + 0x8428) * fVar28;
    fVar27 = *(float *)(iVar15 + 0x800);
    fVar1 = *(float *)(iVar15 + 0x804);
    *(float *)(iVar15 + 0x878) =
         fVar26 * *(float *)(param_1 + 0x83fc) + fVar23 * *(float *)(param_1 + 0x840c) +
         fVar25 * *(float *)(param_1 + 0x841c) + fVar28 * *(float *)(param_1 + 0x842c);
    fVar28 = *(float *)(iVar15 + 0x7fc);
    fVar23 = *(float *)(iVar15 + 0x808);
    *(float *)(iVar15 + 0x87c) =
         *(float *)(param_1 + 0x83f0) * fVar28 + *(float *)(param_1 + 0x8400) * fVar27 +
         *(float *)(param_1 + 0x8410) * fVar1 + *(float *)(param_1 + 0x8420) * fVar23;
    *(float *)(iVar15 + 0x880) =
         *(float *)(param_1 + 0x83f4) * fVar28 + *(float *)(param_1 + 0x8404) * fVar27 +
         *(float *)(param_1 + 0x8414) * fVar1 + *(float *)(param_1 + 0x8424) * fVar23;
    *(float *)(iVar15 + 0x884) =
         *(float *)(param_1 + 0x83f8) * fVar28 + *(float *)(param_1 + 0x8408) * fVar27 +
         *(float *)(param_1 + 0x8418) * fVar1 + *(float *)(param_1 + 0x8428) * fVar23;
    fVar26 = *(float *)(iVar15 + 0x810);
    fVar25 = *(float *)(iVar15 + 0x814);
    *(float *)(iVar15 + 0x888) =
         fVar28 * *(float *)(param_1 + 0x83fc) + fVar27 * *(float *)(param_1 + 0x840c) +
         fVar1 * *(float *)(param_1 + 0x841c) + fVar23 * *(float *)(param_1 + 0x842c);
    fVar28 = *(float *)(iVar15 + 0x80c);
    fVar23 = *(float *)(iVar15 + 0x818);
    *(float *)(iVar15 + 0x88c) =
         *(float *)(param_1 + 0x83f0) * fVar28 + *(float *)(param_1 + 0x8400) * fVar26 +
         *(float *)(param_1 + 0x8410) * fVar25 + *(float *)(param_1 + 0x8420) * fVar23;
    *(float *)(iVar15 + 0x890) =
         *(float *)(param_1 + 0x83f4) * fVar28 + *(float *)(param_1 + 0x8404) * fVar26 +
         *(float *)(param_1 + 0x8414) * fVar25 + *(float *)(param_1 + 0x8424) * fVar23;
    *(float *)(iVar15 + 0x894) =
         *(float *)(param_1 + 0x83f8) * fVar28 + *(float *)(param_1 + 0x8408) * fVar26 +
         *(float *)(param_1 + 0x8418) * fVar25 + *(float *)(param_1 + 0x8428) * fVar23;
    fVar27 = *(float *)(iVar15 + 0x820);
    fVar1 = *(float *)(iVar15 + 0x828);
    *(float *)(iVar15 + 0x898) =
         fVar28 * *(float *)(param_1 + 0x83fc) + fVar26 * *(float *)(param_1 + 0x840c) +
         fVar25 * *(float *)(param_1 + 0x841c) + fVar23 * *(float *)(param_1 + 0x842c);
    *(float *)(iVar15 + 0x89c) =
         *(float *)(param_1 + 0x83f0) * *(float *)(iVar15 + 0x81c) +
         *(float *)(param_1 + 0x8400) * *(float *)(iVar15 + 0x820) +
         *(float *)(param_1 + 0x8410) * *(float *)(iVar15 + 0x824) +
         *(float *)(param_1 + 0x8420) * fVar1;
    fVar28 = *(float *)(iVar15 + 0x81c);
    fVar23 = *(float *)(iVar15 + 0x824);
    *(float *)(iVar15 + 0x8a0) =
         *(float *)(param_1 + 0x83f4) * fVar28 + *(float *)(param_1 + 0x8404) * fVar27 +
         *(float *)(param_1 + 0x8414) * fVar23 + *(float *)(param_1 + 0x8424) * fVar1;
    *(float *)(iVar15 + 0x8a4) =
         *(float *)(param_1 + 0x83f8) * fVar28 + *(float *)(param_1 + 0x8408) * fVar27 +
         *(float *)(param_1 + 0x8418) * fVar23 + *(float *)(param_1 + 0x8428) * fVar1;
    *(float *)(iVar15 + 0x8a8) =
         fVar28 * *(float *)(param_1 + 0x83fc) + fVar27 * *(float *)(param_1 + 0x840c) +
         fVar23 * *(float *)(param_1 + 0x841c) + fVar1 * *(float *)(param_1 + 0x842c);
    iVar15 = *(int *)(param_1 + 0xeb78);
    *(undefined4 *)(iVar15 + 0xc) = *(undefined4 *)(param_1 + 0xc634);
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
  }
  FUN_040f0760(iVar15,uVar7);
  iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  uVar7 = uVar7 + 1;
joined_r0x04096c8c:
  uVar19 = uVar7;
  if (iVar15 == 10) {
    iVar6 = *(int *)(param_1 + 0xeb78);
    if (*(int *)(param_1 + 0xc640) != *(int *)(iVar6 + 0x14)) {
      puVar20 = (undefined4 *)(iVar6 + 0xb2c);
      uVar19 = 0x100;
      puVar17 = (undefined4 *)(param_1 + 0x8630);
      bVar21 = ((uint)puVar20 & 1) != 0;
      if (bVar21) {
        puVar20 = (undefined4 *)(iVar6 + 0xb2d);
        puVar17 = (undefined4 *)(param_1 + 0x8631);
        *(undefined1 *)(iVar6 + 0xb2c) = *(undefined1 *)(param_1 + 0x8630);
        uVar19 = 0xff;
      }
      if (((uint)puVar20 & 2) != 0) {
        uVar2 = *(undefined2 *)puVar17;
        uVar19 = uVar19 - 2;
        puVar17 = (undefined4 *)((int)puVar17 + 2);
        *(undefined2 *)puVar20 = uVar2;
        puVar20 = (undefined4 *)((int)puVar20 + 2);
      }
      for (uVar11 = uVar19 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar20 = *puVar17;
        puVar17 = puVar17 + (uint)bVar22 * -2 + 1;
        puVar20 = puVar20 + (uint)bVar22 * -2 + 1;
      }
      iVar6 = 0;
      if ((uVar19 & 2) != 0) {
        *(undefined2 *)puVar20 = *(undefined2 *)puVar17;
        iVar6 = 2;
      }
      if (bVar21) {
        *(undefined1 *)((int)puVar20 + iVar6) = *(undefined1 *)((int)puVar17 + iVar6);
      }
      iVar6 = *(int *)(param_1 + 0xeb78);
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0xc640);
    }
    uVar19 = uVar7 + 1;
    FUN_040f07d0(iVar6,*(undefined4 *)(param_1 + 0xc638),uVar7);
  }
  FUN_040c7220(*(undefined4 *)(param_1 + 0xeb48),uVar19);
  return;
}

// --- SetRenderTarget @0x040794b0 ---
/* source: direct3ddevice9imp */

undefined4 SetRenderTarget(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_60 [6];
  char *local_48;
  uint local_44;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar7 = aiStack_60 + 5;
  if (3 < param_2) {
    local_44 = param_2;
    local_48 = "SetRenderTarget() called with RenderTargetIndex %d > 3. Handle it!!";
    aiStack_60[5] = 0xf;
    aiStack_60[4] = 0x4079750;
    FUN_0402cd10();
    return 0x8876086c;
  }
  local_24 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  if (local_24 != 0) {
    local_38 = local_24;
    piVar7 = aiStack_60 + 5;
    if (*(char *)(local_24 + 0xebbc) != '\0') {
      aiStack_60[5] = local_24 + 0xebc4;
      aiStack_60[4] = 0x4079711;
      EnterCriticalSection();
      piVar7 = aiStack_60 + 4;
    }
    if (*(int *)(local_38 + 0xec64) == 0) {
      if (*(int *)(local_38 + 0xebc0) != 0) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3ae;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"!mCurrentD3D9Thread";
        piVar7[-1] = 0x407969f;
        FUN_0400a810();
      }
      piVar7[-1] = 0x407950c;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(local_38 + 0xebc0) = uVar3;
    }
    else {
      local_30 = *(int *)(local_38 + 0xebc0);
      piVar7[-1] = 0x40796c1;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        piVar7[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar7[2] = 0x3b3;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar7 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar7[-1] = 0x40796f1;
        FUN_0400a810();
      }
    }
    *(int *)(local_38 + 0xec64) = *(int *)(local_38 + 0xec64) + 1;
  }
  local_30 = param_2 + 0x14c0;
  piVar1 = *(int **)(param_1 + 4 + local_30 * 4);
  if (param_3 != piVar1) {
    local_34 = CONCAT31(local_34._1_3_,param_2 == 0);
    if ((((param_3 == (int *)0x0) && (param_2 == 0)) &&
        (uVar3 = 0x8876086c, *(char *)(param_1 + 0x5318) == '\0')) ||
       ((param_3 != (int *)0x0 && (uVar3 = 0x8876086c, (*(byte *)(param_3 + 0x1e) & 1) == 0))))
    goto LAB_0407963a;
    piVar6 = piVar7;
    if (piVar1 != (int *)0x0) {
      iVar5 = *piVar1;
      *piVar7 = (int)piVar1;
                    /* try { // try from 0407955b to 04079637 has its CatchHandler @ 04079789 */
      pcVar2 = *(code **)(iVar5 + 8);
      piVar7[-1] = 0x407955e;
      (*pcVar2)();
      piVar6 = piVar7 + -1;
    }
    *(int **)(param_1 + 4 + local_30 * 4) = param_3;
    piVar7 = piVar6;
    if (param_3 != (int *)0x0) {
      iVar5 = *param_3;
      *piVar6 = (int)param_3;
      pcVar2 = *(code **)(iVar5 + 4);
      piVar6[-1] = 0x4079578;
      (*pcVar2)();
      piVar7 = *(int **)(param_1 + 4 + local_30 * 4);
      iVar5 = *piVar7;
      piVar6[-1] = (int)piVar7;
      pcVar2 = *(code **)(iVar5 + 4);
      piVar6[-2] = 0x407958a;
      (*pcVar2)();
      piVar7 = piVar6 + -2;
      if (((char)local_34 != '\0') &&
         ((iVar5 = *(int *)(param_1 + 0x5304), *(int *)(iVar5 + 0x70) != 0x4c4c554e ||
          (iVar5 = *(int *)(param_1 + 0x5314), piVar7 = piVar6 + -2, iVar5 != 0)))) {
        local_30 = *(int *)(iVar5 + 0x8c);
        local_34 = *(undefined4 *)(iVar5 + 0x88);
        *(undefined4 *)(param_1 + 0x52e0) = 0;
        *(undefined4 *)(param_1 + 0x52e4) = 0;
        *(undefined4 *)(param_1 + 0x52e8) = local_34;
        *(int *)(param_1 + 0x52ec) = local_30;
        if (local_30 == 0) {
          piVar6[1] = (int)
                      "void Direct3DDevice9Imp::UpdateViewportAndScissorDimensions_D3D9(UINT, UINT)"
          ;
          *piVar6 = 0x152c;
          piVar6[-1] = (int)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
          ;
          piVar6[-2] = (int)"mDeviceState.Viewport.Height != 0";
                    /* try { // try from 0407977f to 04079783 has its CatchHandler @ 04079789 */
          piVar6[-3] = 0x4079784;
          FUN_0400a810();
        }
        *(undefined4 *)(param_1 + 0xcbc) = 0;
        *(undefined4 *)(param_1 + 0xcc0) = 0;
        *(undefined4 *)(param_1 + 0xcc4) = local_34;
        *(int *)(param_1 + 0xcc8) = local_30;
        piVar7 = piVar6 + -2;
      }
    }
    local_30 = param_1 + 0xec00;
    piVar7[3] = 8;
    piVar7[2] = 0x11;
    piVar7[1] = param_1;
    *piVar7 = local_30;
    piVar7[-1] = 0x4079628;
    puVar4 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
    *puVar4 = param_3;
    puVar4[1] = param_2;
    *piVar7 = local_30;
    piVar7[-1] = 0x4079638;
    D3D9CommandQueue__CommandSubmitted();
  }
  uVar3 = 0;
LAB_0407963a:
  *piVar7 = (int)local_20;
  piVar7[-1] = 0x4079648;
  local_38 = uVar3;
  direct3ddevice9imp_040a2df0();
  return local_38;
}

// --- d3d9device_EvictManagedResources @0x0409eff0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_EvictManagedResources(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 local_50;
  int local_4c [7];
  int local_30;
  int local_28;
  int *local_24;
  int *local_20 [4];
  
  puVar11 = (uint *)local_4c;
  iVar9 = *(int *)(param_1 + 0xc);
  local_24 = &local_28;
  local_28 = iVar9;
  if (iVar9 != 0) {
    puVar11 = (uint *)local_4c;
    if (*(char *)(iVar9 + 0xebbc) != '\0') {
      local_4c[0] = iVar9 + 0xebc4;
      local_50 = 0x409f221;
      EnterCriticalSection();
      puVar11 = &local_50;
    }
    if (*(int *)(iVar9 + 0xec64) == 0) {
      if (*(int *)(iVar9 + 0xebc0) != 0) {
        puVar11[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar11[2] = 0x3ae;
        puVar11[1] = (uint)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar11 = (uint)"!mCurrentD3D9Thread";
        puVar11[-1] = 0x409f1bc;
        FUN_0400a810();
      }
      puVar11[-1] = 0x409f03a;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar9 + 0xebc0) = uVar4;
    }
    else {
      iVar3 = *(int *)(iVar9 + 0xebc0);
      puVar11[-1] = 0x409f1e2;
      iVar8 = FUN_0415b750();
      if (iVar3 != iVar8) {
        puVar11[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar11[2] = 0x3b3;
        puVar11[1] = (uint)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar11 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar11[-1] = 0x409f20e;
        FUN_0400a810();
      }
    }
    *(int *)(iVar9 + 0xec64) = *(int *)(iVar9 + 0xec64) + 1;
  }
  *puVar11 = 0xc;
                    /* try { // try from 0409f04e to 0409f160 has its CatchHandler @ 0409f229 */
  puVar11[-1] = 0x409f053;
  piVar5 = operator_new(*puVar11);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  local_30 = param_1 + 0xea90;
  *puVar11 = param_1 + 0xea90;
  puVar11[-1] = 0x409f07d;
  pthread_mutex_lock((pthread_mutex_t *)*puVar11);
  piVar10 = *(int **)(param_1 + 0xea8c);
joined_r0x0409f090:
  piVar7 = (int *)puVar11;
  if (piVar10 != (int *)(param_1 + 0xea84)) {
    do {
      piVar1 = (int *)*piVar10;
      iVar9 = piVar1[9];
      if (((iVar9 == 5) || (iVar9 == 3)) || (puVar11 = (uint *)piVar7, iVar9 == 4)) {
        iVar9 = *piVar1;
        *piVar7 = (int)piVar1;
        pcVar2 = *(code **)(iVar9 + 4);
        piVar7[-1] = 0x409f0be;
        local_20[0] = piVar1;
        (*pcVar2)();
        puVar11 = (uint *)(piVar7 + -1);
        if (1 < (uint)local_20[0][0xa3]) {
          puVar6 = (undefined4 *)piVar5[1];
          if (puVar6 != (undefined4 *)piVar5[2]) goto code_r0x0409f0d9;
          *piVar7 = (int)puVar6;
          piVar7[1] = (int)local_20;
          piVar7[-1] = (int)piVar5;
                    /* try { // try from 0409f18e to 0409f192 has its CatchHandler @ 0409f229 */
          piVar7[-2] = 0x409f193;
          Direct3DDevice9Imp__EvictManagedResources();
          puVar11 = (uint *)(piVar7 + -1);
        }
      }
      piVar10 = (int *)piVar10[2];
      piVar7 = (int *)puVar11;
      if (piVar10 == (int *)(param_1 + 0xea84)) break;
    } while( true );
  }
  *puVar11 = local_30;
  puVar11[-1] = 0x409f0fc;
  pthread_mutex_unlock((pthread_mutex_t *)*puVar11);
  piVar10 = (int *)*piVar5;
  piVar7 = (int *)piVar5[1];
  if (piVar10 != piVar7) {
    do {
      *puVar11 = *piVar10 + 4;
      puVar11[-1] = 0x409f11d;
      Direct3DBaseTexture9Imp__EvictManagedResourcesD3D9();
      piVar7 = (int *)piVar5[1];
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar7);
    if (piVar10 != (int *)*piVar5) {
      puVar11[3] = 4;
      puVar11[2] = 7;
      puVar11[1] = param_1;
      *puVar11 = param_1 + 0xec00;
      puVar11[-1] = 0x409f157;
      puVar6 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
      *puVar6 = piVar5;
      *puVar11 = param_1 + 0xec00;
      puVar11[-1] = 0x409f161;
      D3D9CommandQueue__CommandSubmitted();
      goto LAB_0409f161;
    }
  }
  if (piVar7 != (int *)0x0) {
    *puVar11 = (uint)piVar7;
    puVar11[-1] = 0x409f1cd;
    operator_delete((void *)*puVar11);
  }
  *puVar11 = (uint)piVar5;
  puVar11[-1] = 0x409f1d5;
  operator_delete((void *)*puVar11);
LAB_0409f161:
  *puVar11 = (uint)&local_24;
  puVar11[-1] = 0x409f16c;
  direct3ddevice9imp_040a2df0();
  return 0;
code_r0x0409f0d9:
  iVar9 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = local_20[0];
    iVar9 = piVar5[1];
  }
  piVar10 = (int *)piVar10[2];
  piVar5[1] = iVar9 + 4;
  puVar11 = (uint *)(piVar7 + -1);
  goto joined_r0x0409f090;
}

// --- d3d9device_SetIndices @0x04098fe0 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetIndices(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int aiStack_5c [11];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar6 = aiStack_5c + 4;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar6 = aiStack_5c + 4;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_5c[4] = iVar1 + 0xebc4;
      aiStack_5c[3] = 0x409912e;
      EnterCriticalSection();
      piVar6 = aiStack_5c + 3;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x40990cc;
        FUN_0400a810();
      }
      piVar6[-1] = 0x409902f;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar6[-1] = 0x40990e6;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x4099113;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x75ec);
  if (iVar1 == 0) {
    piVar6[1] = (int)param_2;
    *piVar6 = param_1;
                    /* try { // try from 04099147 to 0409914b has its CatchHandler @ 04099151 */
    piVar6[-1] = 0x409914c;
    Direct3DDevice9Imp__SetIndices();
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      *piVar6 = (int)param_2;
                    /* try { // try from 04099053 to 04099074 has its CatchHandler @ 04099151 */
      pcVar2 = *(code **)(iVar5 + 4);
      piVar6[-1] = 0x4099056;
      (*pcVar2)();
      piVar6 = piVar6 + -1;
    }
    if ((*(int *)(iVar1 + 0x974) != 0) && (piVar3 = *(int **)(iVar1 + 0x978), piVar3 != (int *)0x0))
    {
      iVar5 = *piVar3;
      *piVar6 = (int)piVar3;
      pcVar2 = *(code **)(iVar5 + 8);
      piVar6[-1] = 0x4099075;
      (*pcVar2)();
      piVar6 = piVar6 + -1;
    }
    *(undefined4 *)(iVar1 + 0x974) = 1;
    *(int **)(iVar1 + 0x978) = param_2;
  }
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x4099093;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- d3d9device_SetPixelShader @0x04099700 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetPixelShader(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int **ppiVar6;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_50;
  int *local_4c;
  undefined *local_48;
  int **local_44;
  int local_30;
  int *local_28;
  int local_24;
  int *local_20 [4];
  
  ppiVar6 = &local_4c;
  if (param_2 != (int *)0x0) {
    local_44 = &local_28;
    local_48 = &DAT_042db598;
    local_4c = param_2;
    local_50 = 0x4099729;
    iVar3 = (**(code **)*param_2)();
    if (iVar3 == -0x7fffbffe) {
      return 0x8876086c;
    }
    local_58 = local_28;
    local_5c = 0x4099742;
    (**(code **)(*local_28 + 8))();
    ppiVar6 = (int **)&local_5c;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar3;
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0xebbc) != '\0') {
      *ppiVar6 = (int *)(iVar3 + 0xebc4);
      ppiVar6[-1] = (int *)0x409986e;
      EnterCriticalSection();
      ppiVar6 = ppiVar6 + -1;
    }
    if (*(int *)(iVar3 + 0xec64) == 0) {
      if (*(int *)(iVar3 + 0xebc0) != 0) {
        ppiVar6[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        ppiVar6[2] = (int *)0x3ae;
        ppiVar6[1] = (int *)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *ppiVar6 = (int *)"!mCurrentD3D9Thread";
        ppiVar6[-1] = (int *)0x4099814;
        FUN_0400a810();
      }
      ppiVar6[-1] = (int *)0x409977f;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar3 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar3 + 0xebc0);
      ppiVar6[-1] = (int *)0x409982e;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        ppiVar6[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        ppiVar6[2] = (int *)0x3b3;
        ppiVar6[1] = (int *)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *ppiVar6 = (int *)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        ppiVar6[-1] = (int *)0x409985b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar3 + 0xec64) = *(int *)(iVar3 + 0xec64) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x75ec);
  if (iVar3 == 0) {
    ppiVar6[1] = param_2;
    *ppiVar6 = (int *)param_1;
                    /* try { // try from 04099887 to 0409988b has its CatchHandler @ 040998a2 */
    ppiVar6[-1] = (int *)0x409988c;
    Direct3DDevice9Imp__SetPixelShader();
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      *ppiVar6 = param_2;
                    /* try { // try from 040997a3 to 040997c4 has its CatchHandler @ 040998a2 */
      pcVar1 = *(code **)(iVar5 + 4);
      ppiVar6[-1] = (int *)0x40997a6;
      (*pcVar1)();
      ppiVar6 = ppiVar6 + -1;
    }
    if ((*(int *)(iVar3 + 0x97c) != 0) && (piVar2 = *(int **)(iVar3 + 0x980), piVar2 != (int *)0x0))
    {
      iVar5 = *piVar2;
      *ppiVar6 = piVar2;
      pcVar1 = *(code **)(iVar5 + 8);
      ppiVar6[-1] = (int *)0x40997c5;
      (*pcVar1)();
      ppiVar6 = ppiVar6 + -1;
    }
    *(undefined4 *)(iVar3 + 0x97c) = 1;
    *(int **)(iVar3 + 0x980) = param_2;
  }
  *ppiVar6 = (int *)local_20;
  ppiVar6[-1] = (int *)0x40997e3;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- d3d9device_SetVertexDeclaration @0x04097e50 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetVertexDeclaration(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int aiStack_5c [11];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  piVar6 = aiStack_5c + 4;
  local_20[0] = &local_24;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    piVar6 = aiStack_5c + 4;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      aiStack_5c[4] = iVar1 + 0xebc4;
      aiStack_5c[3] = 0x4097f9e;
      EnterCriticalSection();
      piVar6 = aiStack_5c + 3;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3ae;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"!mCurrentD3D9Thread";
        piVar6[-1] = 0x4097f3c;
        FUN_0400a810();
      }
      piVar6[-1] = 0x4097e9f;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar1 + 0xebc0);
      piVar6[-1] = 0x4097f56;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        piVar6[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar6[2] = 0x3b3;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar6 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar6[-1] = 0x4097f83;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x75ec);
  if (iVar1 == 0) {
    piVar6[1] = (int)param_2;
    *piVar6 = param_1;
                    /* try { // try from 04097fb7 to 04097fbb has its CatchHandler @ 04097fc1 */
    piVar6[-1] = 0x4097fbc;
    Direct3DDevice9Imp__SetVertexDeclaration();
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      *piVar6 = (int)param_2;
                    /* try { // try from 04097ec3 to 04097ee4 has its CatchHandler @ 04097fc1 */
      pcVar2 = *(code **)(iVar5 + 4);
      piVar6[-1] = 0x4097ec6;
      (*pcVar2)();
      piVar6 = piVar6 + -1;
    }
    if ((*(int *)(iVar1 + 0x98c) != 0) && (piVar3 = *(int **)(iVar1 + 0x990), piVar3 != (int *)0x0))
    {
      iVar5 = *piVar3;
      *piVar6 = (int)piVar3;
      pcVar2 = *(code **)(iVar5 + 8);
      piVar6[-1] = 0x4097ee5;
      (*pcVar2)();
      piVar6 = piVar6 + -1;
    }
    *(undefined4 *)(iVar1 + 0x98c) = 1;
    *(int **)(iVar1 + 0x990) = param_2;
  }
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x4097f03;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- d3d9device_SetVertexShader @0x04098600 ---
/* source: direct3ddevice9imp */

undefined4 d3d9device_SetVertexShader(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int **ppiVar6;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_50;
  int *local_4c;
  undefined *local_48;
  int **local_44;
  int local_30;
  int *local_28;
  int local_24;
  int *local_20 [4];
  
  ppiVar6 = &local_4c;
  if (param_2 != (int *)0x0) {
    local_44 = &local_28;
    local_48 = &DAT_042db5a8;
    local_4c = param_2;
    local_50 = 0x4098629;
    iVar3 = (**(code **)*param_2)();
    if (iVar3 == -0x7fffbffe) {
      return 0x8876086c;
    }
    local_58 = local_28;
    local_5c = 0x4098642;
    (**(code **)(*local_28 + 8))();
    ppiVar6 = (int **)&local_5c;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  local_20[0] = &local_24;
  local_24 = iVar3;
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0xebbc) != '\0') {
      *ppiVar6 = (int *)(iVar3 + 0xebc4);
      ppiVar6[-1] = (int *)0x409876e;
      EnterCriticalSection();
      ppiVar6 = ppiVar6 + -1;
    }
    if (*(int *)(iVar3 + 0xec64) == 0) {
      if (*(int *)(iVar3 + 0xebc0) != 0) {
        ppiVar6[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        ppiVar6[2] = (int *)0x3ae;
        ppiVar6[1] = (int *)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *ppiVar6 = (int *)"!mCurrentD3D9Thread";
        ppiVar6[-1] = (int *)0x4098714;
        FUN_0400a810();
      }
      ppiVar6[-1] = (int *)0x409867f;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar3 + 0xebc0) = uVar4;
    }
    else {
      local_30 = *(int *)(iVar3 + 0xebc0);
      ppiVar6[-1] = (int *)0x409872e;
      iVar5 = FUN_0415b750();
      if (local_30 != iVar5) {
        ppiVar6[3] = (int *)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        ppiVar6[2] = (int *)0x3b3;
        ppiVar6[1] = (int *)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *ppiVar6 = (int *)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        ppiVar6[-1] = (int *)0x409875b;
        FUN_0400a810();
      }
    }
    *(int *)(iVar3 + 0xec64) = *(int *)(iVar3 + 0xec64) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x75ec);
  if (iVar3 == 0) {
    ppiVar6[1] = param_2;
    *ppiVar6 = (int *)param_1;
                    /* try { // try from 04098787 to 0409878b has its CatchHandler @ 040987a2 */
    ppiVar6[-1] = (int *)0x409878c;
    Direct3DDevice9Imp__SetVertexShader();
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      *ppiVar6 = param_2;
                    /* try { // try from 040986a3 to 040986c4 has its CatchHandler @ 040987a2 */
      pcVar1 = *(code **)(iVar5 + 4);
      ppiVar6[-1] = (int *)0x40986a6;
      (*pcVar1)();
      ppiVar6 = ppiVar6 + -1;
    }
    if ((*(int *)(iVar3 + 0x984) != 0) && (piVar2 = *(int **)(iVar3 + 0x988), piVar2 != (int *)0x0))
    {
      iVar5 = *piVar2;
      *ppiVar6 = piVar2;
      pcVar1 = *(code **)(iVar5 + 8);
      ppiVar6[-1] = (int *)0x40986c5;
      (*pcVar1)();
      ppiVar6 = ppiVar6 + -1;
    }
    *(undefined4 *)(iVar3 + 0x984) = 1;
    *(int **)(iVar3 + 0x988) = param_2;
  }
  *ppiVar6 = (int *)local_20;
  ppiVar6[-1] = (int *)0x40986e3;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- direct3ddevice9imp_040704e0 @0x040704e0 ---
/* source: direct3ddevice9imp */

void __regparm3 direct3ddevice9imp_040704e0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_20;
  int local_1c [4];
  
  piVar5 = local_1c;
  *param_1 = param_2;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_1c[0] = iVar1 + 0xebc4;
      uStack_20 = 0x40705a6;
      EnterCriticalSection();
      piVar5 = &uStack_20;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3ae;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"!mCurrentD3D9Thread";
        piVar5[-1] = 0x407055c;
        FUN_0400a810();
      }
      piVar5[-1] = 0x407051a;
      uVar3 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xebc0);
      piVar5[-1] = 0x407056b;
      iVar4 = FUN_0415b750();
      if (iVar2 != iVar4) {
        piVar5[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar5[2] = 0x3b3;
        piVar5[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar5 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar5[-1] = 0x4070593;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  return;
}

// --- direct3ddevice9imp_040803c0 @0x040803c0 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_040803c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_20;
  int local_1c [4];
  
  piVar4 = local_1c;
  if (*(char *)(param_1 + 0xeb7c) != '\0') {
    local_1c[0] = param_1 + 0xeb84;
    uStack_20 = 0x4080486;
    EnterCriticalSection();
    piVar4 = &uStack_20;
  }
  if (*(int *)(param_1 + 0xec24) == 0) {
    if (*(int *)(param_1 + 0xeb80) != 0) {
      piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
      piVar4[2] = 0x3ae;
      piVar4[1] = (int)
                  "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      *piVar4 = (int)"!mCurrentD3D9Thread";
      piVar4[-1] = 0x4080434;
      FUN_0400a810();
    }
    piVar4[-1] = 0x40803f5;
    uVar2 = FUN_0415b750();
    *(undefined4 *)(param_1 + 0xeb80) = uVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xeb80);
    piVar4[-1] = 0x408044b;
    iVar3 = FUN_0415b750();
    if (iVar1 != iVar3) {
      piVar4[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
      piVar4[2] = 0x3b3;
      piVar4[1] = (int)
                  "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
      ;
      *piVar4 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
      piVar4[-1] = 0x4080473;
      FUN_0400a810();
    }
  }
  *(int *)(param_1 + 0xec24) = *(int *)(param_1 + 0xec24) + 1;
  return;
}

// --- direct3ddevice9imp_04080490 @0x04080490 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_04080490(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xeb80);
  iVar1 = FUN_0415b750();
  if (iVar2 != iVar1) {
    FUN_0400a810("mCurrentD3D9Thread == thread_GetCurrentThreadId()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x3bf,"void Direct3DDevice9Imp::MultithreadedGuard_Leave()");
  }
  iVar2 = *(int *)(param_1 + 0xec24) + -1;
  *(int *)(param_1 + 0xec24) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xeb80) = 0;
  }
  if (*(char *)(param_1 + 0xeb7c) != '\0') {
    LeaveCriticalSection(param_1 + 0xeb84);
  }
  return;
}

// --- direct3ddevice9imp_040806a0 @0x040806a0 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_040806a0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_3 - *(int *)(param_1 + 0xec84)) - (uint)(param_2 < *(uint *)(param_1 + 0xec80));
  if ((-1 < iVar1) && ((0 < iVar1 || (param_2 != *(uint *)(param_1 + 0xec80))))) {
    iVar1 = D3D9CommandQueue__TryExecuteNextCommand(param_1 + 0xec00);
    while( true ) {
      if (iVar1 == 0) {
        FUN_0400a810("commandExecuted",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x4c8,"void Direct3DDevice9Imp::FlushUntilCommand(ULONGLONG)");
      }
      if (((param_3 == *(int *)(param_1 + 0xec84) && param_2 == *(uint *)(param_1 + 0xec80)) ||
          (*(char *)(param_1 + 0xebf4) != '\0')) || (DAT_0441163c != '\0')) break;
      iVar1 = D3D9CommandQueue__TryExecuteNextCommand(param_1 + 0xec00);
    }
  }
  return;
}

// --- direct3ddevice9imp_04080760 @0x04080760 ---
/* source: direct3ddevice9imp */

undefined4 direct3ddevice9imp_04080760(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xebe8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xebe8) == 1) {
    iVar3 = *(int *)(param_1 + 0xebec);
    uVar1 = *(uint *)(iVar3 + 0x24);
    iVar2 = *(int *)(iVar3 + 0x28);
    iVar4 = (iVar2 - *(int *)(param_1 + 0xec84)) - (uint)(uVar1 < *(uint *)(param_1 + 0xec80));
    if ((-1 < iVar4) && ((0 < iVar4 || (uVar1 != *(uint *)(param_1 + 0xec80))))) {
      do {
        iVar3 = D3D9CommandQueue__TryExecuteNextCommand(param_1 + 0xec00);
        if (iVar3 == 0) {
          FUN_0400a810("commandExecuted",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                       ,0x4c8,"void Direct3DDevice9Imp::FlushUntilCommand(ULONGLONG)");
        }
      } while (((iVar2 != *(int *)(param_1 + 0xec84) || uVar1 != *(uint *)(param_1 + 0xec80)) &&
               (*(char *)(param_1 + 0xebf4) == '\0')) && (DAT_0441163c == '\0'));
      goto LAB_04080840;
    }
  }
  else {
    if (*(int *)(param_1 + 0xebe8) != 2) {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x4de,"bool Direct3DDevice9Imp::ExecuteOutOfBoundsCommand()");
      goto LAB_040807af;
    }
LAB_04080840:
    iVar3 = *(int *)(param_1 + 0xebec);
  }
  Direct3DQuery9Imp__TestQuery(iVar3);
LAB_040807af:
  *(undefined4 *)(param_1 + 0xebe8) = 0;
  eON_SetEvent(*(undefined4 *)(param_1 + 0xebf0));
  return 1;
}

// --- direct3ddevice9imp_0408f6f0 @0x0408f6f0 ---
/* source: direct3ddevice9imp */

undefined4 direct3ddevice9imp_0408f6f0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x52f8);
  piVar3 = *(int **)(iVar2 + 0x30);
  uVar5 = *(int *)(iVar2 + 0x34) - (int)piVar3 >> 2;
  if (uVar5 < 0x11) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else {
    FUN_0400a810("numUsedStreams <= 16",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x26e8,
                 "bool Direct3DDevice9Imp::ValidateStreamSourcesForDraw(INT, ULONG, ULONG, INT)");
    piVar3 = *(int **)(iVar2 + 0x30);
  }
  iVar2 = *(int *)(param_1 + 0xc + (*piVar3 + 0xcc) * 0x10);
  if (iVar2 != 0) {
    uVar4 = 0;
    cVar1 = *(char *)(iVar2 + 0x5c);
    while (cVar1 == '\0') {
      uVar4 = uVar4 + 1;
      if (uVar4 == uVar5) {
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0xc + (piVar3[uVar4] + 0xcc) * 0x10);
      if (iVar2 == 0) break;
      cVar1 = *(char *)(iVar2 + 0x5c);
    }
  }
  FUN_0402cd10(10,"Game trying to render with invalid vertex buffer ( %p ), returning INVALIDCALL.",
               iVar2);
  return 0;
}

// --- direct3ddevice9imp_0409a7c0 @0x0409a7c0 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_0409a7c0(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int in_FS_OFFSET;
  bool bVar2;
  undefined1 local_20 [16];
  
  if (*(int *)(param_1 + 0xebf8) == *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130) + 0xc))
  {
    if (param_2 < 8) {
      bVar2 = param_3 != (int *)0x0;
      switch(param_2) {
      case 0:
        if (bVar2) {
          (**(code **)(*param_3 + 0x48))(param_3);
        }
        break;
      default:
        if (bVar2) {
          (**(code **)(*param_3 + 0x5c))(param_3);
        }
        break;
      case 4:
        if (bVar2) {
          (**(code **)(*param_3 + 0x24))(param_3);
        }
        break;
      case 5:
      case 6:
        if (bVar2) {
          (**(code **)(*param_3 + 0x3c))(param_3);
        }
        break;
      case 7:
        if (bVar2) {
          (**(code **)(*param_3 + 0x18))(param_3);
        }
      }
    }
    else {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x34f8,"DWORD Direct3DDevice9Imp::OpenGLSide_DeleteObject(DWORD, LPVOID)");
    }
  }
  else {
    direct3ddevice9imp_040704e0();
                    /* try { // try from 0409a819 to 0409a830 has its CatchHandler @ 0409a8ee */
    puVar1 = (uint *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x2f,8);
    *puVar1 = param_2;
    puVar1[1] = (uint)param_3;
    D3D9CommandQueue__CommandSubmitted(param_1 + 0xec00);
    direct3ddevice9imp_040a2df0(local_20);
  }
  return;
}

// --- direct3ddevice9imp_0409a900 @0x0409a900 ---
/* source: direct3ddevice9imp */

undefined4 direct3ddevice9imp_0409a900(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  bool bVar2;
  
  if (*param_3 < 8) {
    piVar1 = (int *)param_3[1];
    bVar2 = piVar1 != (int *)0x0;
    switch(*param_3) {
    case 0:
      if (bVar2) {
        (**(code **)(*piVar1 + 0x48))(piVar1);
      }
      break;
    default:
      if (bVar2) {
        (**(code **)(*piVar1 + 0x5c))(piVar1);
        return 8;
      }
      break;
    case 4:
      if (bVar2) {
        (**(code **)(*piVar1 + 0x24))(piVar1);
      }
      break;
    case 5:
    case 6:
      if (bVar2) {
        (**(code **)(*piVar1 + 0x3c))(piVar1);
        return 8;
      }
      break;
    case 7:
      if (bVar2) {
        (**(code **)(*piVar1 + 0x18))(piVar1);
      }
    }
  }
  else {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x34f8,"DWORD Direct3DDevice9Imp::OpenGLSide_DeleteObject(DWORD, LPVOID)");
  }
  return 8;
}

// --- direct3ddevice9imp_0409bd10 @0x0409bd10 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_0409bd10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int local_11c [58];
  undefined4 *local_34;
  undefined4 *local_30;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar10 = local_11c + 0x34;
  iVar2 = param_1[3];
  *param_1 = &PTR_direct3ddevice9imp_0409bd10_042f6888;
  local_24 = iVar2;
  if (iVar2 != 0) {
    piVar10 = local_11c + 0x34;
    if (*(char *)(iVar2 + 0xebbc) != '\0') {
      local_11c[0x34] = iVar2 + 0xebc4;
      local_11c[0x33] = 0x409c9be;
      EnterCriticalSection();
      piVar10 = local_11c + 0x33;
    }
    if (*(int *)(iVar2 + 0xec64) == 0) {
      if (*(int *)(iVar2 + 0xebc0) != 0) {
        piVar10[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar10[2] = 0x3ae;
        piVar10[1] = (int)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar10 = (int)"!mCurrentD3D9Thread";
                    /* try { // try from 0409c90f to 0409c913 has its CatchHandler @ 0409ca60 */
        piVar10[-1] = 0x409c914;
        FUN_0400a810();
      }
                    /* try { // try from 0409bd5b to 0409bd5f has its CatchHandler @ 0409ca60 */
      piVar10[-1] = 0x409bd60;
      uVar7 = FUN_0415b750();
      *(undefined4 *)(iVar2 + 0xebc0) = uVar7;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0xebc0);
                    /* try { // try from 0409c976 to 0409c9bd has its CatchHandler @ 0409ca60 */
      piVar10[-1] = 0x409c97b;
      iVar9 = FUN_0415b750();
      if (iVar5 != iVar9) {
        piVar10[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar10[2] = 0x3b3;
        piVar10[1] = (int)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar10 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar10[-1] = 0x409c9a7;
        FUN_0400a810();
      }
    }
    *(int *)(iVar2 + 0xec64) = *(int *)(iVar2 + 0xec64) + 1;
  }
  DAT_044116b0 = 0;
  DAT_044116ac = 0;
  piVar10[1] = 0;
  *piVar10 = (int)FUN_0406f980;
                    /* try { // try from 0409bd90 to 0409c840 has its CatchHandler @ 0409ca40 */
  piVar10[-1] = 0x409bd95;
  MainGameWindow_RegisterForFullscreenToggle();
  piVar3 = (int *)param_1[0x3ad6];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bda7;
    (*pcVar4)();
    param_1[0x3ad6] = 0;
    piVar10 = piVar10 + -1;
    param_1[0x3ad7] = 0;
    param_1[0x3ad8] = 0;
    param_1[0x3ad9] = 0;
  }
  piVar3 = (int *)param_1[0x3ada];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bde4;
    (*pcVar4)();
    param_1[0x3ada] = 0;
    piVar10 = piVar10 + -1;
    param_1[0x3adb] = 0;
    param_1[0x3adc] = 0;
    param_1[0x3add] = 0;
  }
  piVar3 = (int *)param_1[0x1d76];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409be21;
    (*pcVar4)();
    param_1[0x1d76] = 0;
    piVar10 = piVar10 + -1;
  }
  if (param_1[0x1d75] != 0) {
    *piVar10 = param_1[0x1d75];
    piVar10[-1] = 0x409be40;
    eON_DestroyCursor();
    param_1[0x1d75] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x14c1];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409be5f;
    (*pcVar4)();
    param_1[0x14c1] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x14c2];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409be7e;
    (*pcVar4)();
    param_1[0x14c2] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x14c3];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409be9d;
    (*pcVar4)();
    param_1[0x14c3] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x14c4];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bebc;
    (*pcVar4)();
    param_1[0x14c4] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x14c5];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bedb;
    (*pcVar4)();
    param_1[0x14c5] = 0;
    piVar10 = piVar10 + -1;
  }
  *piVar10 = (int)param_1;
  piVar10[-1] = 0x409bef0;
  FUN_04080220();
  piVar3 = (int *)param_1[0x14be];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bf02;
    (*pcVar4)();
    param_1[0x14be] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x373];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bf21;
    (*pcVar4)();
    param_1[0x373] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x374];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bf40;
    (*pcVar4)();
    param_1[0x374] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x375];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bf5f;
    (*pcVar4)();
    param_1[0x375] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x376];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bf7e;
    (*pcVar4)();
    param_1[0x376] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x377];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bf9d;
    (*pcVar4)();
    param_1[0x377] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x378];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bfbc;
    (*pcVar4)();
    param_1[0x378] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x379];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bfdb;
    (*pcVar4)();
    param_1[0x379] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x37a];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409bffa;
    (*pcVar4)();
    param_1[0x37a] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x37b];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c019;
    (*pcVar4)();
    param_1[0x37b] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x37c];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c038;
    (*pcVar4)();
    param_1[0x37c] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x37d];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c057;
    (*pcVar4)();
    param_1[0x37d] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x37e];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c076;
    (*pcVar4)();
    param_1[0x37e] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x37f];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c095;
    (*pcVar4)();
    param_1[0x37f] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x380];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c0b4;
    (*pcVar4)();
    param_1[0x380] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x381];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c0d3;
    (*pcVar4)();
    param_1[0x381] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x382];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c0f2;
    (*pcVar4)();
    param_1[0x382] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[899];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c111;
    (*pcVar4)();
    param_1[899] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[900];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c130;
    (*pcVar4)();
    param_1[900] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x385];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c14f;
    (*pcVar4)();
    param_1[0x385] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x386];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c16e;
    (*pcVar4)();
    param_1[0x386] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x333];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c18d;
    (*pcVar4)();
    param_1[0x333] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x337];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c1ac;
    (*pcVar4)();
    param_1[0x337] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x33b];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c1cb;
    (*pcVar4)();
    param_1[0x33b] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x33f];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c1ea;
    (*pcVar4)();
    param_1[0x33f] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x343];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c209;
    (*pcVar4)();
    param_1[0x343] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x347];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c228;
    (*pcVar4)();
    param_1[0x347] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x34b];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c247;
    (*pcVar4)();
    param_1[0x34b] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x34f];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c266;
    (*pcVar4)();
    param_1[0x34f] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x353];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c285;
    (*pcVar4)();
    param_1[0x353] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x357];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c2a4;
    (*pcVar4)();
    param_1[0x357] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x35b];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c2c3;
    (*pcVar4)();
    param_1[0x35b] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x35f];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c2e2;
    (*pcVar4)();
    param_1[0x35f] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x363];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c301;
    (*pcVar4)();
    param_1[0x363] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x367];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c320;
    (*pcVar4)();
    param_1[0x367] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x36b];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c33f;
    (*pcVar4)();
    param_1[0x36b] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x36f];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c35e;
    (*pcVar4)();
    param_1[0x36f] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x216];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c37d;
    (*pcVar4)();
    param_1[0x216] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x229];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c39c;
    (*pcVar4)();
    param_1[0x229] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x22a];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c3bb;
    (*pcVar4)();
    param_1[0x22a] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x1d7b];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c3da;
    (*pcVar4)();
    param_1[0x1d7b] = 0;
    piVar10 = piVar10 + -1;
  }
  piVar3 = (int *)param_1[0x1d7a];
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    *piVar10 = (int)piVar3;
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c3f9;
    (*pcVar4)();
    param_1[0x1d7a] = 0;
    piVar10 = piVar10 + -1;
  }
  puVar1 = param_1 + 0x3a93;
  puVar8 = (undefined4 *)param_1[0x3a95];
  while (puVar8 != puVar1) {
    iVar2 = *(int *)puVar8[5];
    *piVar10 = (int)puVar8[5];
    pcVar4 = *(code **)(iVar2 + 8);
    piVar10[-1] = 0x409c42b;
    (*pcVar4)();
    piVar10[-1] = (int)puVar8;
    piVar10[-2] = 0x409c436;
    puVar8 = (undefined4 *)std::_Rb_tree_increment((_Rb_tree_node_base *)piVar10[-1]);
    piVar10 = piVar10 + -1;
  }
  local_34 = param_1 + 0x3a92;
  piVar10[1] = param_1[0x3a94];
  *piVar10 = (int)local_34;
  piVar10[-1] = 0x409c45a;
  FUN_040a3070();
  cVar6 = DAT_04468c30;
  param_1[0x3a95] = puVar1;
  param_1[0x3a94] = 0;
  param_1[0x3a96] = puVar1;
  param_1[14999] = 0;
  if (cVar6 != '\0') {
    piVar10[-1] = 0x409c94d;
    FUN_040bc390();
    piVar10[-1] = 0x409c952;
    FUN_040bca00();
    piVar10[-1] = 0x409c957;
    FUN_040ad510();
    piVar10[-1] = 0x409c95c;
    FUN_040b7150();
    DAT_04468c30 = '\0';
  }
  piVar10[3] = 0;
  local_30 = param_1 + 0x3b00;
  piVar10[2] = 0x30;
  piVar10[1] = (int)param_1;
  *piVar10 = (int)(param_1 + 0x3b00);
  piVar10[-1] = 0x409c4ae;
  D3D9CommandQueue__GetNextCommandPointer();
  *piVar10 = (int)local_30;
  piVar10[-1] = 0x409c4b9;
  D3D9CommandQueue__CommandSubmitted();
  puVar1 = local_30;
  piVar10[3] = 0;
  piVar10[2] = 0x31;
  piVar10[1] = (int)param_1;
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c4d8;
  D3D9CommandQueue__GetNextCommandPointer();
  *piVar10 = (int)local_30;
  piVar10[-1] = 0x409c4e3;
  D3D9CommandQueue__CommandSubmitted();
  iVar2 = param_1[0x3afe];
  if (iVar2 != 0) {
    piVar10[1] = -1;
    *piVar10 = iVar2;
    piVar10[-1] = 0x409c4fd;
    eON_WaitForSingleObject();
    piVar10[-2] = param_1[0x3afe];
    piVar10[-3] = 0x409c50e;
    eON_CloseHandle();
    param_1[0x3afe] = 0;
    piVar10 = piVar10 + -3;
  }
  if (DAT_04468c30 != '\0') {
                    /* try { // try from 0409c920 to 0409c95b has its CatchHandler @ 0409ca40 */
    piVar10[-1] = 0x409c925;
    FUN_040bc390();
    piVar10[-1] = 0x409c92a;
    FUN_040bca00();
    piVar10[-1] = 0x409c92f;
    FUN_040ad510();
    piVar10[-1] = 0x409c935;
    FUN_040b7150();
    DAT_04468c30 = '\0';
  }
  iVar2 = param_1[0x3ad5];
  if (iVar2 != 0) {
    *piVar10 = iVar2;
    piVar10[-1] = 0x409c53c;
    FUN_040ea8a0();
    *piVar10 = iVar2;
    piVar10[-1] = 0x409c544;
    operator_delete((void *)*piVar10);
    param_1[0x3ad5] = 0;
  }
  puVar1 = param_1 + 0x3a9b;
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c55c;
  pthread_mutex_lock((pthread_mutex_t *)*piVar10);
  piVar3 = (int *)param_1[0x3a9a];
  while (piVar3 != param_1 + 15000) {
    *(undefined4 *)(*piVar3 + 0x20) = 0;
    iVar2 = param_1[0x3a9a];
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    piVar3 = (int *)param_1[0x3a9a];
  }
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c5b9;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  puVar1 = param_1 + 0x3aa4;
  piVar10[-1] = 0x409c5c7;
  pthread_mutex_destroy((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c5cf;
  pthread_mutex_lock((pthread_mutex_t *)*piVar10);
  piVar3 = (int *)param_1[0x3aa3];
  while (piVar3 != param_1 + 0x3aa1) {
    *(undefined4 *)(*piVar3 + 0x20) = 0;
    iVar2 = param_1[0x3aa3];
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    piVar3 = (int *)param_1[0x3aa3];
  }
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c629;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  puVar1 = param_1 + 0x3aad;
  piVar10[-1] = 0x409c637;
  pthread_mutex_destroy((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c63f;
  pthread_mutex_lock((pthread_mutex_t *)*piVar10);
  piVar3 = (int *)param_1[0x3aac];
  while (piVar3 != param_1 + 0x3aaa) {
    *(undefined4 *)(*piVar3 + 0x20) = 0;
    iVar2 = param_1[0x3aac];
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    piVar3 = (int *)param_1[0x3aac];
  }
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c699;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  puVar1 = param_1 + 0x3ab6;
  piVar10[-1] = 0x409c6a7;
  pthread_mutex_destroy((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c6af;
  pthread_mutex_lock((pthread_mutex_t *)*piVar10);
  piVar3 = (int *)param_1[0x3ab5];
  while (piVar3 != param_1 + 0x3ab3) {
    *(undefined4 *)(*piVar3 + 0x20) = 0;
    iVar2 = param_1[0x3ab5];
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    piVar3 = (int *)param_1[0x3ab5];
  }
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c709;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  puVar1 = param_1 + 0x3abf;
  piVar10[-1] = 0x409c717;
  pthread_mutex_destroy((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c71f;
  pthread_mutex_lock((pthread_mutex_t *)*piVar10);
  piVar3 = (int *)param_1[0x3abe];
  while (piVar3 != param_1 + 0x3abc) {
    *(undefined4 *)(*piVar3 + 0x20) = 0;
    iVar2 = param_1[0x3abe];
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    piVar3 = (int *)param_1[0x3abe];
  }
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c779;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  puVar1 = param_1 + 0x3ac8;
  piVar10[-1] = 0x409c787;
  pthread_mutex_destroy((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c78f;
  pthread_mutex_lock((pthread_mutex_t *)*piVar10);
  piVar3 = (int *)param_1[0x3ac7];
  while (piVar3 != param_1 + 0x3ac5) {
    *(undefined4 *)(*piVar3 + 0x20) = 0;
    if (piVar3[2] != 0) {
      *(int *)(piVar3[2] + 4) = piVar3[1];
    }
    if (piVar3[1] != 0) {
      *(int *)(piVar3[1] + 8) = piVar3[2];
    }
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3 = (int *)param_1[0x3ac7];
  }
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c7e3;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)puVar1;
  piVar10[-1] = 0x409c7eb;
  pthread_mutex_destroy((pthread_mutex_t *)*piVar10);
  *piVar10 = (int)param_1;
  piVar10[-1] = 0x409c7f3;
  FUN_040b98e0();
  *piVar10 = (int)(param_1 + 4);
  piVar10[-1] = 0x409c7fe;
  eON_DeleteCriticalSection();
  piVar11 = piVar10 + -1;
  if (*(char *)(param_1 + 0x3adf) != '\0') {
    piVar10[-1] = (int)(param_1 + 0x3ae1);
    piVar10[-2] = 0x409c818;
    eON_DeleteCriticalSection();
    piVar11 = piVar10 + -2;
    *(undefined1 *)(param_1 + 0x3adf) = 0;
  }
  *piVar11 = param_1[0x3afc];
  piVar11[-1] = 0x409c830;
  eON_CloseHandle();
  piVar11[-1] = param_1[0x3b30];
  piVar11[-2] = 0x409c841;
  eON_CloseHandle();
  DAT_04468c34 = 0;
  piVar11[-2] = (int)local_20;
                    /* try { // try from 0409c854 to 0409c858 has its CatchHandler @ 0409ca60 */
  piVar11[-3] = 0x409c859;
  direct3ddevice9imp_040a2df0();
  piVar11[-2] = (int)local_30;
                    /* try { // try from 0409c85f to 0409c863 has its CatchHandler @ 0409c9c6 */
  piVar11[-3] = 0x409c864;
  D3D9CommandQueue___D3D9CommandQueue();
  if (param_1[0x3af7] != 0) {
    piVar11[-2] = param_1[0x3af7];
    piVar11[-3] = 0x409c876;
    operator_delete((void *)piVar11[-2]);
  }
  if (param_1[0x3af3] != 0) {
    piVar11[-2] = param_1[0x3af3];
    piVar11[-3] = 0x409c888;
    operator_delete((void *)piVar11[-2]);
  }
  piVar11[-2] = (int)(param_1 + 0x3ae7);
                    /* try { // try from 0409c891 to 0409c895 has its CatchHandler @ 0409ca64 */
  piVar11[-3] = 0x409c896;
  FUN_040e5090();
  piVar11[-1] = param_1[0x3a94];
  piVar11[-2] = (int)local_34;
  piVar11[-3] = 0x409c8ab;
  FUN_040a3070();
  piVar11[-1] = param_1[0x319e];
  piVar11[-2] = (int)(param_1 + 0x319c);
  piVar11[-3] = 0x409c8c3;
  FUN_040a2eb0();
  piVar11[-1] = param_1[0x1d71];
  piVar11[-2] = (int)(param_1 + 0x1d6f);
  piVar11[-3] = 0x409c8db;
  FUN_04065230();
  piVar11[-2] = (int)param_1;
  piVar11[-3] = 0x409c8e3;
  FUN_04030320();
  return;
}

// --- direct3ddevice9imp_040a2df0 @0x040a2df0 ---
/* source: direct3ddevice9imp */

void direct3ddevice9imp_040a2df0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xebc0);
    iVar2 = FUN_0415b750();
    if (iVar3 != iVar2) {
      FUN_0400a810("mCurrentD3D9Thread == thread_GetCurrentThreadId()",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x3bf,"void Direct3DDevice9Imp::MultithreadedGuard_Leave()");
    }
    iVar3 = *(int *)(iVar1 + 0xec64) + -1;
    *(int *)(iVar1 + 0xec64) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0xebc0) = 0;
    }
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      LeaveCriticalSection(iVar1 + 0xebc4);
      return;
    }
  }
  return;
}

// --- attached helper FUN_00065980 @0x04065980 (call-graph exclusive to this TU) ---
void FUN_04065980(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042ee308;
  direct3ddevice9imp_0409bd10();
  return;
}

// --- attached helper FUN_000659c0 @0x040659c0 (call-graph exclusive to this TU) ---
void FUN_040659c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042ee308;
  direct3ddevice9imp_0409bd10(param_1);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_00068380 @0x04068380 (call-graph exclusive to this TU) ---
void FUN_04068380(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042ef3a8;
  direct3ddevice9imp_0409bd10();
  return;
}

// --- attached helper FUN_00068b60 @0x04068b60 (call-graph exclusive to this TU) ---
void FUN_04068b60(int param_1,undefined4 param_2)

{
  d3d9device_SetPixelShader(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_00068b90 @0x04068b90 (call-graph exclusive to this TU) ---
void FUN_04068b90(int param_1,undefined4 param_2)

{
  d3d9device_SetPixelShader(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_00068c80 @0x04068c80 (call-graph exclusive to this TU) ---
void FUN_04068c80(int param_1,undefined4 param_2)

{
  d3d9device_SetIndices(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_00068cb0 @0x04068cb0 (call-graph exclusive to this TU) ---
void FUN_04068cb0(int param_1,undefined4 param_2)

{
  d3d9device_SetIndices(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_00069140 @0x04069140 (call-graph exclusive to this TU) ---
void FUN_04069140(int param_1,undefined4 param_2)

{
  d3d9device_SetVertexShader(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_00069170 @0x04069170 (call-graph exclusive to this TU) ---
void FUN_04069170(int param_1,undefined4 param_2)

{
  d3d9device_SetVertexShader(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_00069320 @0x04069320 (call-graph exclusive to this TU) ---
void FUN_04069320(int param_1,undefined4 param_2)

{
  d3d9device_SetVertexDeclaration(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_00069350 @0x04069350 (call-graph exclusive to this TU) ---
void FUN_04069350(int param_1,undefined4 param_2)

{
  d3d9device_SetVertexDeclaration(param_1 + 0x40,param_2);
  return;
}

// --- attached helper FUN_0006a680 @0x0406a680 (call-graph exclusive to this TU) ---
void FUN_0406a680(int param_1,undefined4 param_2,undefined4 param_3)

{
  SetRenderTarget(param_1 + 0x40,param_2,param_3);
  return;
}

// --- attached helper FUN_0006a6b0 @0x0406a6b0 (call-graph exclusive to this TU) ---
void FUN_0406a6b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  SetRenderTarget(param_1 + 0x40,param_2,param_3);
  return;
}

// --- attached helper FUN_0006b560 @0x0406b560 (call-graph exclusive to this TU) ---
void FUN_0406b560(int param_1)

{
  d3d9device_EvictManagedResources(param_1 + 0x40);
  return;
}

// --- attached helper FUN_0006b580 @0x0406b580 (call-graph exclusive to this TU) ---
void FUN_0406b580(int param_1)

{
  d3d9device_EvictManagedResources(param_1 + 0x40);
  return;
}

// --- attached helper FUN_0006b680 @0x0406b680 (call-graph exclusive to this TU) ---
void FUN_0406b680(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042ef3a8;
  direct3ddevice9imp_0409bd10(param_1 + 0x10);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_0006c130 @0x0406c130 (call-graph exclusive to this TU) ---
undefined4 FUN_0406c130(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x204);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x204);
}

// --- attached helper FUN_0006c190 @0x0406c190 (call-graph exclusive to this TU) ---
undefined4 FUN_0406c190(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x228);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x228);
}

// --- attached helper FUN_0006c1f0 @0x0406c1f0 (call-graph exclusive to this TU) ---
undefined4 FUN_0406c1f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  uVar2 = 0;
  if (((*(byte *)(param_1 + 0x20d) & 4) != 0) && (uVar2 = 0x8876086c, param_2 - 1U < 3)) {
    *(int *)(param_1 + 0x208) = param_2;
    uVar2 = 0;
  }
  if (iVar1 != 0) {
    direct3ddevice9imp_04080490(iVar1 + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_0006c260 @0x0406c260 (call-graph exclusive to this TU) ---
undefined4 FUN_0406c260(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x208);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x208);
}

// --- attached helper FUN_0006c2c0 @0x0406c2c0 (call-graph exclusive to this TU) ---
void FUN_0406c2c0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1[7] != 0) {
    direct3ddevice9imp_040803c0(param_1[7] + 0x40);
    iVar1 = param_1[7];
  }
  if ((*(byte *)((int)param_1 + 0x20d) & 4) != 0) {
                    /* try { // try from 0406c306 to 0406c322 has its CatchHandler @ 0406c34a */
    D3D9CommandQueue__GetNextCommandPointer(iVar1 + 0xec40,param_1,0x35,0);
    (**(code **)(*param_1 + 0xc))(param_1);
    D3D9CommandQueue__CommandSubmitted(param_1[7] + 0xec40);
    iVar1 = param_1[7];
  }
  if (iVar1 == 0) {
    return;
  }
  direct3ddevice9imp_04080490();
  return;
}

// --- attached helper FUN_0006c370 @0x0406c370 (call-graph exclusive to this TU) ---
int FUN_0406c370(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[7] != 0) {
    direct3ddevice9imp_040803c0(param_1[7] + 0x40);
  }
  iVar2 = 0;
  if (param_1[0xd] == 1) {
                    /* try { // try from 0406c3c5 to 0406c419 has its CatchHandler @ 0406c425 */
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if (iVar2 - 1U <= param_2) {
      param_2 = iVar2 - 1U;
    }
    param_1[0x81] = param_2;
    piVar1 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1[7] + 0xec40,param_1,0x34,4);
    *piVar1 = param_1[0x81];
    (**(code **)(*param_1 + 0xc))(param_1);
    D3D9CommandQueue__CommandSubmitted(param_1[7] + 0xec40);
    iVar2 = param_1[0x81];
  }
  if (param_1[7] != 0) {
    direct3ddevice9imp_04080490(param_1[7] + 0x40);
  }
  return iVar2;
}

// --- attached helper FUN_0006ecc0 @0x0406ecc0 (call-graph exclusive to this TU) ---
int FUN_0406ecc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(param_1 + 0x288);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (iVar3 == 1)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
        return 0;
      }
    }
    else {
      direct3ddevice9imp_0409a7c0(*(int *)(param_1 + 0x1c) + 0x40,2,piVar1);
    }
  }
  return iVar2 + -1;
}

// --- attached helper FUN_0006ed40 @0x0406ed40 (call-graph exclusive to this TU) ---
void __regparm3 FUN_0406ed40(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_0009ca70 @0x0409ca70 (call-graph exclusive to this TU) ---
void FUN_0409ca70(void *param_1)

{
  direct3ddevice9imp_0409bd10(param_1);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_000a3b40 @0x040a3b40 (call-graph exclusive to this TU) ---
int FUN_040a3b40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x3c))(piVar1);
        return 0;
      }
    }
    else {
      direct3ddevice9imp_0409a7c0(*(int *)(param_1 + 0x1c) + 0x40,6,piVar1);
    }
  }
  return iVar2 + -1;
}

// --- attached helper FUN_000a3ba0 @0x040a3ba0 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_040a3ba0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar1;
                    /* try { // try from 040a3be0 to 040a3c19 has its CatchHandler @ 040a3c57 */
    uVar2 = RetainSharedMemoryRegion(*(undefined4 *)(param_1 + 0x4c),iVar1 == 0);
    _DAT_04468cec = _DAT_04468cec - *(int *)(param_1 + 0x5c);
    _DAT_04468ce8 = _DAT_04468ce8 - *(int *)(param_1 + 0x58);
    DAT_04468ce4 = DAT_04468ce4 - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c));
    FUN_040bbcc0(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x58,param_1 + 0x5c);
    _DAT_04468ce8 = _DAT_04468ce8 + *(int *)(param_1 + 0x58);
    _DAT_04468cec = _DAT_04468cec + *(int *)(param_1 + 0x5c);
    DAT_04468ce4 = DAT_04468ce4 + *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_000a3c80 @0x040a3c80 (call-graph exclusive to this TU) ---
undefined4 FUN_040a3c80(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = *(undefined4 *)(param_1 + 0x3c);
  param_2[2] = *(undefined4 *)(param_1 + 0x40);
  param_2[3] = *(undefined4 *)(param_1 + 0x44);
  param_2[4] = *(undefined4 *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return 0;
}

// --- attached helper FUN_000a41d0 @0x040a41d0 (call-graph exclusive to this TU) ---
undefined4 FUN_040a41d0(int param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x10) + 0x40);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 == (void *)0x0) {
    *param_3 = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8876086c;
    if (uVar1 <= *param_3) {
      *param_3 = uVar1;
      uVar2 = 0;
      memcpy(param_2,*(void **)(param_1 + 0x14),*(size_t *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x10) + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_000a4260 @0x040a4260 (call-graph exclusive to this TU) ---
undefined4 FUN_040a4260(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  undefined4 local_20;
  int *local_1c [4];
  
  iVar1 = 0;
  ppiVar3 = local_1c;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_1c[0] = (int *)(*(int *)(param_1 + 0x10) + 0x40);
    local_20 = 0x40a4282;
    direct3ddevice9imp_040803c0();
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (param_2 == (int *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    *param_2 = iVar1;
    local_1c[0] = *(int **)(param_1 + 0x10);
    if (local_1c[0] == (int *)0x0) {
      return 0;
    }
                    /* try { // try from 040a4297 to 040a4299 has its CatchHandler @ 040a42d2 */
    local_20 = 0x40a429a;
    (**(code **)(*local_1c[0] + 4))();
    iVar1 = *(int *)(param_1 + 0x10);
    ppiVar3 = (int **)&local_20;
    uVar2 = 0;
  }
  if (iVar1 != 0) {
    *ppiVar3 = (int *)(iVar1 + 0x40);
    ppiVar3[-1] = (int *)0x40a42b1;
    direct3ddevice9imp_04080490();
  }
  return uVar2;
}

// --- attached helper FUN_000a4e20 @0x040a4e20 (call-graph exclusive to this TU) ---
int FUN_040a4e20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x24))(piVar1);
        return 0;
      }
    }
    else {
      direct3ddevice9imp_0409a7c0(*(int *)(param_1 + 0x1c) + 0x40,4,piVar1);
    }
  }
  return iVar2 + -1;
}

// --- attached helper FUN_000a4e80 @0x040a4e80 (call-graph exclusive to this TU) ---
void __regparm3 FUN_040a4e80(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_000a5010 @0x040a5010 (call-graph exclusive to this TU) ---
undefined4 FUN_040a5010(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x20);
}

// --- attached helper FUN_000a5070 @0x040a5070 (call-graph exclusive to this TU) ---
undefined4 FUN_040a5070(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int **ppiVar3;
  undefined4 local_30;
  int *local_2c [7];
  int *local_10;
  
  ppiVar3 = local_2c;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    local_10 = (int *)(param_1 + 0x1c);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      local_2c[0] = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
      local_30 = 0x40a509c;
      direct3ddevice9imp_040803c0();
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
    }
    *param_2 = uVar2;
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
                    /* try { // try from 040a50ad to 040a50af has its CatchHandler @ 040a50df */
      local_30 = 0x40a50b0;
      local_2c[0] = piVar1;
      (**(code **)(*piVar1 + 4))();
      ppiVar3 = (int **)&local_30;
    }
    uVar2 = 0;
    if (*local_10 != 0) {
      *ppiVar3 = (int *)(*local_10 + 0x40);
      ppiVar3[-1] = (int *)0x40a50c9;
      direct3ddevice9imp_04080490();
    }
  }
  return uVar2;
}

// --- attached helper FUN_000a5100 @0x040a5100 (call-graph exclusive to this TU) ---
undefined4 FUN_040a5100(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
  }
  return 0;
}

// --- attached helper FUN_000a5ea0 @0x040a5ea0 (call-graph exclusive to this TU) ---
void __regparm3 FUN_040a5ea0(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_000a5ec0 @0x040a5ec0 (call-graph exclusive to this TU) ---
undefined4 FUN_040a5ec0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  *param_2 = uVar1;
                    /* try { // try from 040a5ef4 to 040a5ef6 has its CatchHandler @ 040a5f15 */
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))(*(int **)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return 0;
}

// --- attached helper FUN_000a5f30 @0x040a5f30 (call-graph exclusive to this TU) ---
undefined4 FUN_040a5f30(int *param_1,undefined4 *param_2,int *param_3,size_t param_4,int param_5)

{
  void *__dest;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *__src;
  int iVar4;
  void *__dest_00;
  undefined4 uVar5;
  undefined4 *puVar6;
  size_t sVar7;
  char local_44;
  uint local_40;
  undefined4 local_2c;
  int *local_28;
  
  if (param_1[7] != 0) {
    direct3ddevice9imp_040803c0(param_1[7] + 0x40);
  }
  if ((param_4 == 0) || (param_3 == (int *)0x0)) {
LAB_040a6060:
    uVar5 = 0x8876086c;
  }
  else {
    local_44 = '\0';
    if (param_5 == 1) {
      if (param_4 != 4) goto LAB_040a6060;
      local_44 = '\x01';
    }
                    /* try { // try from 040a5f84 to 040a5f86 has its CatchHandler @ 040a618d */
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    uVar5 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    local_2c = CONCAT31(local_2c._1_3_,local_44);
    if (local_44 == '\0') {
      local_28 = malloc(param_4);
      if (local_28 == (int *)0x0) {
        uVar5 = 0x8007000e;
        goto LAB_040a601f;
      }
      memcpy(local_28,param_3,param_4);
    }
    else {
                    /* try { // try from 040a6045 to 040a60aa has its CatchHandler @ 040a618d */
      (**(code **)(*param_3 + 0xc))(param_3);
      local_28 = param_3;
    }
    __src = (undefined4 *)param_1[0xb];
    if (__src == (undefined4 *)param_1[0xc]) {
      local_40 = 0x1c;
      iVar4 = (int)__src - param_1[10] >> 2;
      if (iVar4 * -0x49249249 != 0) {
        local_40 = 0xfffffffc;
        if ((uint)(iVar4 * -0x49249249) < (uint)(iVar4 * 0x6db6db6e) || iVar4 * 0x49249249 == 0) {
          local_40 = iVar4 * 8;
          if (0x9249249 < (uint)(iVar4 * 0x6db6db6e)) {
            local_40 = 0xfffffffc;
          }
        }
      }
      __dest_00 = operator_new(local_40);
      puVar6 = (undefined4 *)(iVar4 * 4 + (int)__dest_00);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = uVar5;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar6[4] = local_2c;
        puVar6[5] = local_28;
        puVar6[6] = param_4;
      }
      sVar7 = 0;
      iVar4 = (int)__src - param_1[10] >> 2;
      if (iVar4 * -0x49249249 != 0) {
        sVar7 = iVar4 * 4;
        memmove(__dest_00,(void *)param_1[10],sVar7);
      }
      __dest = (void *)((int)__dest_00 + sVar7 + 0x1c);
      sVar7 = 0;
      iVar4 = param_1[0xb] - (int)__src >> 2;
      if (iVar4 * -0x49249249 != 0) {
        sVar7 = iVar4 * 4;
        memmove(__dest,__src,sVar7);
      }
      if ((void *)param_1[10] != (void *)0x0) {
        operator_delete((void *)param_1[10]);
      }
      param_1[10] = (int)__dest_00;
      uVar5 = 0;
      param_1[0xb] = sVar7 + (int)__dest;
      param_1[0xc] = (int)__dest_00 + local_40;
    }
    else {
      iVar4 = 0;
      if (__src != (undefined4 *)0x0) {
        *__src = uVar5;
        __src[1] = uVar1;
        __src[2] = uVar2;
        __src[3] = uVar3;
        __src[4] = local_2c;
        __src[5] = local_28;
        __src[6] = param_4;
        iVar4 = param_1[0xb];
      }
      uVar5 = 0;
      param_1[0xb] = iVar4 + 0x1c;
    }
  }
LAB_040a601f:
  if (param_1[7] != 0) {
    direct3ddevice9imp_04080490(param_1[7] + 0x40);
  }
  return uVar5;
}

// --- attached helper FUN_000a61c0 @0x040a61c0 (call-graph exclusive to this TU) ---
undefined4 FUN_040a61c0(int param_1,void *param_2)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *__s1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = (*(int *)(param_1 + 0x2c) - iVar1 >> 2) * -0x49249249;
  if (iVar2 != 0) {
    iVar5 = 0;
    iVar7 = 0;
    do {
      __s1 = (void *)(iVar1 + iVar5);
      iVar3 = memcmp(__s1,param_2,0x10);
      if (iVar3 == 0) {
        __ptr = *(int **)((int)__s1 + 0x14);
        if (*(char *)((int)__s1 + 0x10) == '\0') {
          free(__ptr);
        }
        else {
                    /* try { // try from 040a6251 to 040a6253 has its CatchHandler @ 040a62d5 */
          (**(code **)(*__ptr + 0x10))(__ptr);
        }
        iVar1 = *(int *)(param_1 + 0x28);
        puVar4 = (undefined4 *)((iVar2 + -1) * 0x1c + iVar1);
        *(undefined4 *)(iVar1 + iVar5) = *puVar4;
        *(undefined4 *)(iVar1 + 4 + iVar5) = puVar4[1];
        *(undefined4 *)(iVar1 + 8 + iVar5) = puVar4[2];
        *(undefined4 *)(iVar1 + 0xc + iVar5) = puVar4[3];
        *(undefined4 *)(iVar1 + 0x10 + iVar5) = puVar4[4];
        *(undefined4 *)(iVar1 + 0x14 + iVar5) = puVar4[5];
        *(undefined4 *)(iVar1 + 0x18 + iVar5) = puVar4[6];
        uVar6 = 0;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -0x1c;
        goto LAB_040a62a5;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (iVar7 != iVar2);
  }
  uVar6 = 0x88760866;
LAB_040a62a5:
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return uVar6;
}

// --- attached helper FUN_000a62f0 @0x040a62f0 (call-graph exclusive to this TU) ---
undefined4 FUN_040a62f0(int param_1,void *param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  uint __n;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *__s1;
  
  if (param_4 == (uint *)0x0) {
    uVar6 = 0x8876086c;
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    iVar3 = (*(int *)(param_1 + 0x2c) - iVar1 >> 2) * -0x49249249;
    if (iVar3 != 0) {
      iVar5 = 0;
      iVar7 = 0;
      do {
        __s1 = (void *)(iVar1 + iVar5);
        iVar4 = memcmp(__s1,param_2,0x10);
        if (iVar4 == 0) {
          __n = *(uint *)((int)__s1 + 0x18);
          if (param_3 == (undefined4 *)0x0) {
            *param_4 = __n;
            uVar6 = 0;
          }
          else if (*param_4 < __n) {
            *param_4 = __n;
            uVar6 = 0x88760867;
          }
          else if (*(char *)((int)__s1 + 0x10) == '\0') {
            uVar6 = 0;
            memcpy(param_3,*(void **)((int)__s1 + 0x14),__n);
          }
          else {
            piVar2 = *(int **)((int)__s1 + 0x14);
            *param_3 = piVar2;
                    /* try { // try from 040a63c3 to 040a63c5 has its CatchHandler @ 040a63f2 */
            (**(code **)(*piVar2 + 0xc))(piVar2);
            uVar6 = 0;
          }
          goto LAB_040a638d;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x1c;
      } while (iVar7 != iVar3);
    }
    uVar6 = 0x88760866;
LAB_040a638d:
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
  }
  return uVar6;
}

// --- attached helper FUN_000a6410 @0x040a6410 (call-graph exclusive to this TU) ---
undefined4 FUN_040a6410(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x34) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  if (iVar1 != 0) {
    direct3ddevice9imp_04080490(iVar1 + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_000a6470 @0x040a6470 (call-graph exclusive to this TU) ---
undefined4 FUN_040a6470(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x34) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
  }
  if (iVar1 != 0) {
    direct3ddevice9imp_04080490(iVar1 + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_000a64c0 @0x040a64c0 (call-graph exclusive to this TU) ---
undefined4 FUN_040a64c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x20);
}

// --- attached helper FUN_000a6880 @0x040a6880 (call-graph exclusive to this TU) ---
void __regparm3 FUN_040a6880(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_000a68a0 @0x040a68a0 (call-graph exclusive to this TU) ---
undefined4 FUN_040a68a0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int **ppiVar2;
  undefined4 local_30;
  int *local_2c [7];
  int *local_10;
  
  ppiVar2 = local_2c;
  local_10 = (int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) != 0) {
    local_2c[0] = (int *)(*(int *)(param_1 + 0x10) + 0x40);
    local_30 = 0x40a68c6;
    direct3ddevice9imp_040803c0();
    if ((*(int *)(param_1 + 0x10) != 0) && (param_2 != (int *)0x0)) {
      *param_2 = *(int *)(param_1 + 0x10);
      local_2c[0] = *(int **)(param_1 + 0x10);
                    /* try { // try from 040a68db to 040a68dd has its CatchHandler @ 040a6907 */
      local_30 = 0x40a68de;
      (**(code **)(*local_2c[0] + 4))();
      ppiVar2 = (int **)&local_30;
      uVar1 = 0;
      goto LAB_040a68e3;
    }
  }
  uVar1 = 0x8876086c;
LAB_040a68e3:
  if (*local_10 != 0) {
    *ppiVar2 = (int *)(*local_10 + 0x40);
    ppiVar2[-1] = (int *)0x40a68f7;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- attached helper FUN_000abb90 @0x040abb90 (call-graph exclusive to this TU) ---
void FUN_040abb90(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int **ppiVar7;
  uint *puVar8;
  int local_9c [20];
  int *local_4c [7];
  uint *local_30;
  int *local_20;
  
  local_20 = param_1 + 4;
  *param_1 = &PTR_FUN_042f80c8;
  if (param_1[4] != 0) {
    local_4c[0] = (int *)(param_1[4] + 0x40);
                    /* try { // try from 040abbb5 to 040abbb9 has its CatchHandler @ 040ac008 */
    local_9c[0x13] = 0x40abbba;
    direct3ddevice9imp_040803c0();
  }
  ppiVar7 = local_4c;
  if ((param_1[0x25c] != 0) &&
     (piVar2 = (int *)param_1[0x25d], ppiVar7 = local_4c, piVar2 != (int *)0x0)) {
                    /* try { // try from 040abbd3 to 040abe4d has its CatchHandler @ 040ac06e */
    local_9c[0x13] = 0x40abbd6;
    local_4c[0] = piVar2;
    (**(code **)(*piVar2 + 8))();
    ppiVar7 = (int **)(local_9c + 0x13);
  }
  if ((param_1[0x25e] != 0) && (piVar2 = (int *)param_1[0x25f], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abbf5;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x260] != 0) && (piVar2 = (int *)param_1[0x261], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abc14;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x262] != 0) && (piVar2 = (int *)param_1[0x263], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abc33;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x264] != 0) && (piVar2 = (int *)param_1[0x284], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abc52;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x265] != 0) && (piVar2 = (int *)param_1[0x288], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abc71;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x266] != 0) && (piVar2 = (int *)param_1[0x28c], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abc90;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x267] != 0) && (piVar2 = (int *)param_1[0x290], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abcaf;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x268] != 0) && (piVar2 = (int *)param_1[0x294], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abcce;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x269] != 0) && (piVar2 = (int *)param_1[0x298], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abced;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x26a] != 0) && (piVar2 = (int *)param_1[0x29c], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abd0c;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x26b] != 0) && (piVar2 = (int *)param_1[0x2a0], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abd2b;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x26c] != 0) && (piVar2 = (int *)param_1[0x2a4], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abd4a;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x26d] != 0) && (piVar2 = (int *)param_1[0x2a8], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abd69;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x26e] != 0) && (piVar2 = (int *)param_1[0x2ac], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abd88;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x26f] != 0) && (piVar2 = (int *)param_1[0x2b0], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abda7;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x270] != 0) && (piVar2 = (int *)param_1[0x2b4], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abdc6;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x271] != 0) && (piVar2 = (int *)param_1[0x2b8], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abde5;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x272] != 0) && (piVar2 = (int *)param_1[700], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abe04;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  if ((param_1[0x273] != 0) && (piVar2 = (int *)param_1[0x2c0], piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    *ppiVar7 = piVar2;
    pcVar3 = *(code **)(iVar5 + 8);
    ppiVar7[-1] = (int *)0x40abe23;
    (*pcVar3)();
    ppiVar7 = ppiVar7 + -1;
  }
  iVar5 = 0;
  do {
    if ((param_1[iVar5 + 0x2c4] != 0) &&
       (piVar2 = (int *)param_1[iVar5 + 0x2d8], piVar2 != (int *)0x0)) {
      iVar4 = *piVar2;
      *ppiVar7 = piVar2;
      pcVar3 = *(code **)(iVar4 + 8);
      ppiVar7[-1] = (int *)0x40abe4e;
      (*pcVar3)();
      ppiVar7 = ppiVar7 + -1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x14);
  iVar5 = param_1[5];
  if (iVar5 == 0) goto LAB_040abe8e;
  do {
    param_1[5] = *(undefined4 *)(iVar5 + 8);
    *ppiVar7 = (int *)iVar5;
    ppiVar7[-1] = (int *)0x40abe6e;
    free(*ppiVar7);
    iVar5 = param_1[5];
  } while (iVar5 != 0);
  iVar5 = param_1[6];
  if (iVar5 == 0) goto LAB_040abeb1;
  do {
    param_1[6] = *(undefined4 *)(iVar5 + 0x6c);
    *ppiVar7 = (int *)iVar5;
    ppiVar7[-1] = (int *)0x40abe8e;
    free(*ppiVar7);
LAB_040abe8e:
    iVar5 = param_1[6];
  } while (iVar5 != 0);
  iVar5 = param_1[0x44];
  while (iVar5 != 0) {
    param_1[0x44] = *(undefined4 *)(iVar5 + 0x44);
    *ppiVar7 = (int *)iVar5;
    ppiVar7[-1] = (int *)0x40abeb1;
    free(*ppiVar7);
LAB_040abeb1:
    iVar5 = param_1[0x44];
  }
  if (*local_20 != 0) {
    *ppiVar7 = (int *)(*local_20 + 0x40);
                    /* try { // try from 040abeca to 040abece has its CatchHandler @ 040ac008 */
    ppiVar7[-1] = (int *)0x40abecf;
    direct3ddevice9imp_04080490();
  }
  puVar8 = param_1 + 0x483;
  if (param_1[0x483] != 0) {
    uVar6 = 0;
    local_30 = puVar8;
    do {
      puVar1 = puVar8 + 3;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 3;
      *ppiVar7 = (int *)*puVar1;
      ppiVar7[-1] = (int *)0x40abf01;
      free(*ppiVar7);
    } while (uVar6 < *local_30);
  }
  puVar8 = param_1 + 0x452;
  if (param_1[0x452] != 0) {
    uVar6 = 0;
    local_30 = puVar8;
    do {
      puVar1 = puVar8 + 3;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 3;
      *ppiVar7 = (int *)*puVar1;
      ppiVar7[-1] = (int *)0x40abf31;
      free(*ppiVar7);
    } while (uVar6 < *local_30);
  }
  puVar8 = param_1 + 0x421;
  if (param_1[0x421] != 0) {
    uVar6 = 0;
    local_30 = puVar8;
    do {
      puVar1 = puVar8 + 3;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 3;
      *ppiVar7 = (int *)*puVar1;
      ppiVar7[-1] = (int *)0x40abf61;
      free(*ppiVar7);
    } while (uVar6 < *local_30);
  }
  puVar8 = param_1 + 0x3f0;
  if (param_1[0x3f0] != 0) {
    uVar6 = 0;
    local_30 = puVar8;
    do {
      puVar1 = puVar8 + 3;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 3;
      *ppiVar7 = (int *)*puVar1;
      ppiVar7[-1] = (int *)0x40abf91;
      free(*ppiVar7);
    } while (uVar6 < *local_30);
  }
  puVar8 = param_1 + 0x3bf;
  if (param_1[0x3bf] != 0) {
    uVar6 = 0;
    local_30 = puVar8;
    do {
      puVar1 = puVar8 + 3;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 3;
      *ppiVar7 = (int *)*puVar1;
      ppiVar7[-1] = (int *)0x40abfc1;
      free(*ppiVar7);
    } while (uVar6 < *local_30);
  }
  puVar8 = param_1 + 0x38e;
  local_30 = puVar8;
  if (param_1[0x38e] != 0) {
    uVar6 = 0;
    do {
      puVar1 = puVar8 + 3;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 3;
      *ppiVar7 = (int *)*puVar1;
      ppiVar7[-1] = (int *)0x40abff1;
      free(*ppiVar7);
    } while (uVar6 < *local_30);
  }
  *ppiVar7 = param_1;
  ppiVar7[-1] = (int *)0x40ac000;
  FUN_04030320();
  return;
}

// --- attached helper FUN_000ac500 @0x040ac500 (call-graph exclusive to this TU) ---
void __regparm3 FUN_040ac500(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_000ac520 @0x040ac520 (call-graph exclusive to this TU) ---
undefined4 FUN_040ac520(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
  }
  return 0;
}

// --- attached helper FUN_000ac6d0 @0x040ac6d0 (call-graph exclusive to this TU) ---
undefined4 FUN_040ac6d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    }
    *param_2 = *(undefined4 *)(param_1 + 0x6c);
    param_2[1] = *(undefined4 *)(param_1 + 0x70);
    param_2[2] = *(undefined4 *)(param_1 + 0x74);
    param_2[3] = *(undefined4 *)(param_1 + 0x78);
    param_2[4] = *(undefined4 *)(param_1 + 0x7c);
    param_2[5] = *(undefined4 *)(param_1 + 0x80);
    param_2[6] = *(undefined4 *)(param_1 + 0x84);
    param_2[7] = *(undefined4 *)(param_1 + 0x88);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
  }
  return uVar1;
}

// --- attached helper FUN_000ac760 @0x040ac760 (call-graph exclusive to this TU) ---
undefined4 FUN_040ac760(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    if (*(int *)(param_1 + 0x1c) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
    }
  }
  return 0;
}

// --- attached helper FUN_000b0f80 @0x040b0f80 (call-graph exclusive to this TU) ---
void __regparm3 FUN_040b0f80(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_000b1420 @0x040b1420 (call-graph exclusive to this TU) ---
undefined4 FUN_040b1420(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
                    /* try { // try from 040b1452 to 040b1456 has its CatchHandler @ 040b1473 */
  FUN_0406df80(param_1 + 0x28c,param_2);
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return 0;
}

// --- attached helper FUN_000b15e0 @0x040b15e0 (call-graph exclusive to this TU) ---
int FUN_040b15e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x3c))(piVar1);
        return 0;
      }
    }
    else {
      direct3ddevice9imp_0409a7c0(*(int *)(param_1 + 0x1c) + 0x40,5,piVar1);
    }
  }
  return iVar2 + -1;
}

// --- attached helper FUN_000b1640 @0x040b1640 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_040b1640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + -1;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x54) = iVar1;
                    /* try { // try from 040b1684 to 040b16bd has its CatchHandler @ 040b16ff */
    uVar2 = RetainSharedMemoryRegion(*(undefined4 *)(param_1 + 0x50),iVar1 == 0);
    _DAT_044a385c = _DAT_044a385c - *(int *)(param_1 + 0x60);
    _DAT_044a3858 = _DAT_044a3858 - *(int *)(param_1 + 0x5c);
    DAT_044a3854 = DAT_044a3854 - (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60));
    FUN_040bbcc0(*(undefined4 *)(param_1 + 0x50),param_1 + 0x5c,param_1 + 0x60);
    _DAT_044a3858 = _DAT_044a3858 + *(int *)(param_1 + 0x5c);
    _DAT_044a385c = _DAT_044a385c + *(int *)(param_1 + 0x60);
    DAT_044a3854 = DAT_044a3854 + *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_000b1720 @0x040b1720 (call-graph exclusive to this TU) ---
undefined4 FUN_040b1720(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = *(undefined4 *)(param_1 + 0x3c);
  param_2[2] = *(undefined4 *)(param_1 + 0x40);
  param_2[3] = *(undefined4 *)(param_1 + 0x44);
  param_2[4] = *(undefined4 *)(param_1 + 0x48);
  param_2[5] = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return 0;
}

// --- attached helper FUN_000b2e80 @0x040b2e80 (call-graph exclusive to this TU) ---
int FUN_040b2e80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = param_1 + 2;
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 + -1 == 0) {
    if (*(char *)((int)param_1 + 0x66) != '\0') {
      (**(code **)(*param_1 + 0xc))(param_1);
      return 1;
    }
    if (param_1[7] == 0) {
      piVar2 = (int *)param_1[3];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
    }
    else {
      direct3ddevice9imp_0409a7c0(param_1[7] + 0x40,7,param_1[3]);
    }
  }
  return iVar1 + -1;
}

// --- attached helper FUN_000b2f00 @0x040b2f00 (call-graph exclusive to this TU) ---
undefined4 FUN_040b2f00(int param_1,void *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    if (param_2 != (void *)0x0) {
      memcpy(param_2,*(void **)(param_1 + 0x3c),*(int *)(param_1 + 0x38) << 3);
    }
    *param_3 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return uVar1;
}

// --- attached helper FUN_000b3050 @0x040b3050 (call-graph exclusive to this TU) ---
undefined4 FUN_040b3050(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
    if (*(int *)(param_1 + 0x1c) != 0) {
      *param_2 = *(int *)(param_1 + 0x1c);
                    /* try { // try from 040b3080 to 040b3082 has its CatchHandler @ 040b30ae */
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))(*(int **)(param_1 + 0x1c));
      if (*(int *)(param_1 + 0x1c) != 0) {
        direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
      }
      return 0;
    }
  }
  return 0x8876086c;
}

// --- attached helper FUN_000b4b70 @0x040b4b70 (call-graph exclusive to this TU) ---
undefined4 FUN_040b4b70(int param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x10) + 0x40);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 == (void *)0x0) {
    *param_3 = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8876086c;
    if (uVar1 <= *param_3) {
      *param_3 = uVar1;
      uVar2 = 0;
      memcpy(param_2,*(void **)(param_1 + 0x14),*(size_t *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x10) + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_000b4c00 @0x040b4c00 (call-graph exclusive to this TU) ---
undefined4 FUN_040b4c00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x10) + 0x40);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
    }
    *param_2 = uVar2;
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
                    /* try { // try from 040b4c37 to 040b4c39 has its CatchHandler @ 040b4c72 */
    (**(code **)(*piVar1 + 4))(piVar1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x10) + 0x40);
    }
  }
  return uVar2;
}

// --- attached helper FUN_000b5920 @0x040b5920 (call-graph exclusive to this TU) ---
void __regparm3 FUN_040b5920(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_000b5d90 @0x040b5d90 (call-graph exclusive to this TU) ---
undefined4 FUN_040b5d90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x54) + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x54);
  }
  *param_2 = uVar1;
                    /* try { // try from 040b5dc4 to 040b5dc6 has its CatchHandler @ 040b5de5 */
  (**(code **)(**(int **)(param_1 + 0x54) + 4))(*(int **)(param_1 + 0x54));
  if (*(int *)(param_1 + 0x54) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x54) + 0x40);
  }
  return 0;
}

// --- attached helper FUN_000b5e00 @0x040b5e00 (call-graph exclusive to this TU) ---
undefined4 FUN_040b5e00(int param_1,void *param_2)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *__s1;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x54) + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = (*(int *)(param_1 + 0x4c) - iVar1 >> 2) * -0x49249249;
  if (iVar2 != 0) {
    iVar5 = 0;
    iVar7 = 0;
    do {
      __s1 = (void *)(iVar1 + iVar5);
      iVar3 = memcmp(__s1,param_2,0x10);
      if (iVar3 == 0) {
        __ptr = *(int **)((int)__s1 + 0x14);
        if (*(char *)((int)__s1 + 0x10) == '\0') {
          free(__ptr);
        }
        else {
                    /* try { // try from 040b5e91 to 040b5e93 has its CatchHandler @ 040b5f15 */
          (**(code **)(*__ptr + 0x10))(__ptr);
        }
        iVar1 = *(int *)(param_1 + 0x48);
        puVar4 = (undefined4 *)((iVar2 + -1) * 0x1c + iVar1);
        *(undefined4 *)(iVar1 + iVar5) = *puVar4;
        *(undefined4 *)(iVar1 + 4 + iVar5) = puVar4[1];
        *(undefined4 *)(iVar1 + 8 + iVar5) = puVar4[2];
        *(undefined4 *)(iVar1 + 0xc + iVar5) = puVar4[3];
        *(undefined4 *)(iVar1 + 0x10 + iVar5) = puVar4[4];
        *(undefined4 *)(iVar1 + 0x14 + iVar5) = puVar4[5];
        *(undefined4 *)(iVar1 + 0x18 + iVar5) = puVar4[6];
        uVar6 = 0;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1c;
        goto LAB_040b5ee5;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (iVar7 != iVar2);
  }
  uVar6 = 0x88760866;
LAB_040b5ee5:
  if (*(int *)(param_1 + 0x54) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x54) + 0x40);
  }
  return uVar6;
}

// --- attached helper FUN_000b5f30 @0x040b5f30 (call-graph exclusive to this TU) ---
undefined4 FUN_040b5f30(int param_1,void *param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  uint __n;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *__s1;
  
  if (param_4 == (uint *)0x0) {
    uVar6 = 0x8876086c;
  }
  else {
    if (*(int *)(param_1 + 0x54) != 0) {
      direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x54) + 0x40);
    }
    iVar1 = *(int *)(param_1 + 0x48);
    iVar3 = (*(int *)(param_1 + 0x4c) - iVar1 >> 2) * -0x49249249;
    if (iVar3 != 0) {
      iVar5 = 0;
      iVar7 = 0;
      do {
        __s1 = (void *)(iVar1 + iVar5);
        iVar4 = memcmp(__s1,param_2,0x10);
        if (iVar4 == 0) {
          __n = *(uint *)((int)__s1 + 0x18);
          if (param_3 == (undefined4 *)0x0) {
            *param_4 = __n;
            uVar6 = 0;
          }
          else if (*param_4 < __n) {
            *param_4 = __n;
            uVar6 = 0x88760867;
          }
          else if (*(char *)((int)__s1 + 0x10) == '\0') {
            uVar6 = 0;
            memcpy(param_3,*(void **)((int)__s1 + 0x14),__n);
          }
          else {
            piVar2 = *(int **)((int)__s1 + 0x14);
            *param_3 = piVar2;
                    /* try { // try from 040b6003 to 040b6005 has its CatchHandler @ 040b6032 */
            (**(code **)(*piVar2 + 0xc))(piVar2);
            uVar6 = 0;
          }
          goto LAB_040b5fcd;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x1c;
      } while (iVar7 != iVar3);
    }
    uVar6 = 0x88760866;
LAB_040b5fcd:
    if (*(int *)(param_1 + 0x54) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x54) + 0x40);
    }
  }
  return uVar6;
}

// --- attached helper FUN_000b6140 @0x040b6140 (call-graph exclusive to this TU) ---
undefined4 FUN_040b6140(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    if (*(int *)(param_1 + 0x54) != 0) {
      direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x54) + 0x40);
    }
    *param_2 = *(undefined4 *)(param_1 + 0x60);
    param_2[1] = *(undefined4 *)(param_1 + 100);
    param_2[2] = *(undefined4 *)(param_1 + 0x68);
    param_2[3] = *(undefined4 *)(param_1 + 0x6c);
    param_2[4] = *(undefined4 *)(param_1 + 0x70);
    param_2[5] = *(undefined4 *)(param_1 + 0x74);
    param_2[6] = *(undefined4 *)(param_1 + 0x78);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      direct3ddevice9imp_04080490(*(int *)(param_1 + 0x54) + 0x40);
    }
  }
  return uVar1;
}

// --- attached helper FUN_000b61c0 @0x040b61c0 (call-graph exclusive to this TU) ---
undefined4 FUN_040b61c0(int *param_1,undefined4 *param_2,int *param_3,size_t param_4,int param_5)

{
  void *__dest;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *__src;
  bool bVar4;
  int iVar5;
  void *__dest_00;
  undefined4 uVar6;
  undefined4 *puVar7;
  size_t sVar8;
  undefined1 local_45;
  uint local_40;
  undefined4 local_2c;
  int *local_28;
  
  if ((param_4 == 0) || (param_3 == (int *)0x0)) {
    return 0x8876086c;
  }
  local_45 = 0;
  bVar4 = false;
  if (param_5 == 1) {
    if (param_4 != 4) {
      return 0x8876086c;
    }
    local_45 = 1;
    bVar4 = true;
  }
  if (param_1[0x15] != 0) {
    direct3ddevice9imp_040803c0(param_1[0x15] + 0x40);
  }
                    /* try { // try from 040b6218 to 040b621a has its CatchHandler @ 040b6433 */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  uVar6 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  local_2c = CONCAT31(local_2c._1_3_,local_45);
  if (bVar4) {
                    /* try { // try from 040b62f5 to 040b635a has its CatchHandler @ 040b6433 */
    (**(code **)(*param_3 + 0xc))(param_3);
    local_28 = param_3;
  }
  else {
    local_28 = malloc(param_4);
    if (local_28 == (int *)0x0) {
      uVar6 = 0x8007000e;
      goto LAB_040b62b5;
    }
    memcpy(local_28,param_3,param_4);
  }
  __src = (undefined4 *)param_1[0x13];
  if (__src == (undefined4 *)param_1[0x14]) {
    local_40 = 0x1c;
    iVar5 = (int)__src - param_1[0x12] >> 2;
    if (iVar5 * -0x49249249 != 0) {
      local_40 = 0xfffffffc;
      if ((uint)(iVar5 * -0x49249249) < (uint)(iVar5 * 0x6db6db6e) || iVar5 * 0x49249249 == 0) {
        local_40 = iVar5 * 8;
        if (0x9249249 < (uint)(iVar5 * 0x6db6db6e)) {
          local_40 = 0xfffffffc;
        }
      }
    }
    __dest_00 = operator_new(local_40);
    puVar7 = (undefined4 *)(iVar5 * 4 + (int)__dest_00);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = uVar6;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar7[4] = local_2c;
      puVar7[5] = local_28;
      puVar7[6] = param_4;
    }
    sVar8 = 0;
    iVar5 = (int)__src - param_1[0x12] >> 2;
    if (iVar5 * -0x49249249 != 0) {
      sVar8 = iVar5 * 4;
      memmove(__dest_00,(void *)param_1[0x12],sVar8);
    }
    __dest = (void *)((int)__dest_00 + sVar8 + 0x1c);
    sVar8 = 0;
    iVar5 = param_1[0x13] - (int)__src >> 2;
    if (iVar5 * -0x49249249 != 0) {
      sVar8 = iVar5 * 4;
      memmove(__dest,__src,sVar8);
    }
    if ((void *)param_1[0x12] != (void *)0x0) {
      operator_delete((void *)param_1[0x12]);
    }
    param_1[0x12] = (int)__dest_00;
    uVar6 = 0;
    param_1[0x13] = sVar8 + (int)__dest;
    param_1[0x14] = (int)__dest_00 + local_40;
  }
  else {
    iVar5 = 0;
    if (__src != (undefined4 *)0x0) {
      *__src = uVar6;
      __src[1] = uVar1;
      __src[2] = uVar2;
      __src[3] = uVar3;
      __src[4] = local_2c;
      __src[5] = local_28;
      __src[6] = param_4;
      iVar5 = param_1[0x13];
    }
    uVar6 = 0;
    param_1[0x13] = iVar5 + 0x1c;
  }
LAB_040b62b5:
  if (param_1[0x15] != 0) {
    direct3ddevice9imp_04080490(param_1[0x15] + 0x40);
  }
  return uVar6;
}

// --- attached helper FUN_000b6460 @0x040b6460 (call-graph exclusive to this TU) ---
void FUN_040b6460(undefined4 *param_1)

{
  undefined4 *__ptr;
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_4c [7];
  int local_30;
  int *local_20;
  
  piVar5 = local_4c;
  local_20 = param_1 + 0x15;
  *param_1 = &PTR_FUN_042fa3c8;
  if (param_1[0x15] != 0) {
    local_4c[0] = param_1[0x15] + 0x40;
                    /* try { // try from 040b6485 to 040b6489 has its CatchHandler @ 040b65bb */
    direct3ddevice9imp_040803c0();
  }
  iVar4 = param_1[0xd];
  while (iVar7 = iVar4, iVar7 != 0) {
    param_1[0xd] = *(undefined4 *)(iVar7 + 0x20);
    *(int *)(iVar7 + 0x20) = DAT_044a7ed4;
    DAT_044a7ed4 = iVar7;
    iVar4 = param_1[0xd];
  }
  __ptr = (undefined4 *)param_1[0x27];
  piVar6 = local_4c;
  if (__ptr != (undefined4 *)0x0) {
    LOCK();
    piVar6 = __ptr + 2;
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uVar3 = *__ptr;
                    /* try { // try from 040b6592 to 040b65aa has its CatchHandler @ 040b65dc */
      local_4c[0] = eON_GetProcessHeap();
      local_4c[1] = 0;
      local_4c[2] = uVar3;
      eON_HeapFree();
      piVar5 = (int *)&stack0xffffffa8;
      free(__ptr);
    }
    param_1[0x27] = 0;
    piVar6 = piVar5;
  }
  iVar4 = param_1[0x12];
  if (param_1[0x13] != iVar4) {
    local_30 = (param_1[0x13] - iVar4 >> 2) * -0x49249249;
    if (local_30 != 0) {
      iVar7 = 0;
      iVar8 = 0;
      do {
        while (piVar2 = *(int **)(iVar4 + iVar7 + 0x14), *(char *)(iVar4 + iVar7 + 0x10) == '\0') {
          iVar8 = iVar8 + 1;
          *piVar6 = (int)piVar2;
          iVar7 = iVar7 + 0x1c;
          piVar6[-1] = 0x40b6537;
          free((void *)*piVar6);
          iVar4 = param_1[0x12];
          if (iVar8 == local_30) goto LAB_040b653f;
        }
        iVar4 = *piVar2;
        *piVar6 = (int)piVar2;
                    /* try { // try from 040b650d to 040b650f has its CatchHandler @ 040b65dc */
        pcVar1 = *(code **)(iVar4 + 0x10);
        piVar6[-1] = 0x40b6510;
        (*pcVar1)();
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x1c;
        iVar4 = param_1[0x12];
      } while (iVar8 != local_30);
    }
LAB_040b653f:
    param_1[0x13] = iVar4;
  }
  DAT_044a3864 = DAT_044a3864 + -1;
  DAT_044a3868 = DAT_044a3868 - param_1[0x26];
  if (*local_20 != 0) {
    *piVar6 = *local_20 + 0x40;
                    /* try { // try from 040b6564 to 040b6568 has its CatchHandler @ 040b65bb */
    piVar6[-1] = 0x40b6569;
    direct3ddevice9imp_04080490();
    iVar4 = param_1[0x12];
  }
  if (iVar4 != 0) {
    *piVar6 = iVar4;
    piVar6[-1] = 0x40b6578;
    operator_delete((void *)*piVar6);
  }
  *piVar6 = (int)param_1;
  piVar6[-1] = 0x40b6580;
  FUN_04030320();
  return;
}

// --- attached helper FUN_000b8240 @0x040b8240 (call-graph exclusive to this TU) ---
int FUN_040b8240(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(param_1 + 0x288);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (iVar3 == 1)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x5c))(piVar1);
        return 0;
      }
    }
    else {
      direct3ddevice9imp_0409a7c0(*(int *)(param_1 + 0x1c) + 0x40,3,piVar1);
    }
  }
  return iVar2 + -1;
}

// --- attached helper FUN_000b82c0 @0x040b82c0 (call-graph exclusive to this TU) ---
void __regparm3 FUN_040b82c0(undefined4 *param_1)

{
  if (*(int *)*param_1 != 0) {
    direct3ddevice9imp_04080490(*(int *)*param_1 + 0x40);
  }
  return;
}

// --- attached helper FUN_000b8330 @0x040b8330 (call-graph exclusive to this TU) ---
undefined4 FUN_040b8330(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int **ppiVar2;
  undefined1 local_34 [4];
  undefined4 uStack_30;
  int *local_2c;
  undefined4 local_28;
  int *local_10;
  
  ppiVar2 = &local_2c;
  local_10 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_2c = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    uStack_30 = 0x40b8356;
    direct3ddevice9imp_040803c0();
  }
  if (param_2 < *(uint *)(param_1 + 0x200)) {
    local_2c = *(int **)(param_1 + 0x1c0 + param_2 * 4);
    local_28 = param_3;
                    /* try { // try from 040b8371 to 040b8373 has its CatchHandler @ 040b83a7 */
    uStack_30 = 0x40b8374;
    uVar1 = (**(code **)(*local_2c + 0x20))();
    ppiVar2 = (int **)local_34;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_10 != 0) {
    *ppiVar2 = (int *)(*local_10 + 0x40);
    ppiVar2[-1] = (int *)0x40b838d;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- attached helper FUN_000b83c0 @0x040b83c0 (call-graph exclusive to this TU) ---
undefined4 FUN_040b83c0(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int **ppiVar2;
  undefined4 local_30;
  int *local_2c [7];
  int *local_10;
  
  ppiVar2 = local_2c;
  local_10 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_2c[0] = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    local_30 = 0x40b83e6;
    direct3ddevice9imp_040803c0();
  }
  if (param_2 < *(uint *)(param_1 + 0x200)) {
    *param_3 = *(undefined4 *)(param_1 + (param_2 + 0x70) * 4);
    local_2c[0] = *(int **)(param_1 + (param_2 + 0x70) * 4);
                    /* try { // try from 040b8401 to 040b8403 has its CatchHandler @ 040b8437 */
    local_30 = 0x40b8404;
    (**(code **)(*local_2c[0] + 4))();
    ppiVar2 = (int **)&local_30;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_10 != 0) {
    *ppiVar2 = (int *)(*local_10 + 0x40);
    ppiVar2[-1] = (int *)0x40b841d;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- attached helper FUN_000b8450 @0x040b8450 (call-graph exclusive to this TU) ---
undefined4
FUN_040b8450(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int **ppiVar2;
  undefined1 local_3c [12];
  undefined4 uStack_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_10;
  
  ppiVar2 = &local_2c;
  local_10 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_2c = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    uStack_30 = 0x40b8476;
    direct3ddevice9imp_040803c0();
  }
  if (param_2 < *(uint *)(param_1 + 0x200)) {
    local_2c = *(int **)(param_1 + 0x1c0 + param_2 * 4);
    local_20 = param_5;
    local_24 = param_4;
    local_28 = param_3;
                    /* try { // try from 040b849f to 040b84a1 has its CatchHandler @ 040b84cf */
    uStack_30 = 0x40b84a2;
    uVar1 = (**(code **)(*local_2c + 0x24))();
    ppiVar2 = (int **)local_3c;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_10 != 0) {
    *ppiVar2 = (int *)(*local_10 + 0x40);
    ppiVar2[-1] = (int *)0x40b84bb;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- attached helper FUN_000b84f0 @0x040b84f0 (call-graph exclusive to this TU) ---
undefined4 FUN_040b84f0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int **ppiVar2;
  undefined4 local_30;
  int *local_2c [7];
  int *local_10;
  
  ppiVar2 = local_2c;
  local_10 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_2c[0] = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    local_30 = 0x40b8516;
    direct3ddevice9imp_040803c0();
  }
  if (param_2 < *(uint *)(param_1 + 0x200)) {
    local_2c[0] = *(int **)(param_1 + 0x1c0 + param_2 * 4);
                    /* try { // try from 040b852a to 040b852c has its CatchHandler @ 040b8557 */
    local_30 = 0x40b852d;
    uVar1 = (**(code **)(*local_2c[0] + 0x28))();
    ppiVar2 = (int **)&local_30;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_10 != 0) {
    *ppiVar2 = (int *)(*local_10 + 0x40);
    ppiVar2[-1] = (int *)0x40b8546;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- attached helper FUN_000b8e00 @0x040b8e00 (call-graph exclusive to this TU) ---
undefined4 FUN_040b8e00(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
                    /* try { // try from 040b8e32 to 040b8e36 has its CatchHandler @ 040b8e53 */
  FUN_040b89b0(param_1 + 0x28c,param_2);
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return 0;
}

