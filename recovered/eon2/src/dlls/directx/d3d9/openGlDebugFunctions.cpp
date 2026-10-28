// Recovered source: eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DumpTextureDataByIDBoundInTextureStages @0x040cfbc0 ---
/* source: openGlDebugFunctions */

void __regparm3
DumpTextureDataByIDBoundInTextureStages
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_28;
  undefined4 local_24;
  int local_20 [4];
  
  if (param_3 == 0) {
    (**(code **)*param_1)(param_1,"Texture ID 0 doesn\'t identify any texture!\n");
  }
  glGetIntegerv(0x8872,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xe48,
                 "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                );
  }
  glGetIntegerv(0x84e0,&local_24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xe4c,
                 "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                );
  }
  if (0 < local_28) {
    iVar1 = 0;
    do {
      (*DAT_0451eeac)(iVar1 + 0x84c0);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xe51,
                     "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                    );
      }
      glGetIntegerv(0x8068,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xe55,
                     "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                    );
      }
      if (local_20[0] == param_3) {
        SaveDDS(param_4);
        break;
      }
      glGetIntegerv(0x8069,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xe5c,
                     "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                    );
      }
      if (local_20[0] == param_3) {
        SaveDDS(param_4);
        break;
      }
      glGetIntegerv(0x806a,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xe63,
                     "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                    );
      }
      if (local_20[0] == param_3) {
        (**(code **)*param_1)
                  (param_1,"Texture ID %d belongs to volume texture, can\'t save!",param_3);
        break;
      }
      glGetIntegerv(0x8514,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xe6a,
                     "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                    );
      }
      if (local_20[0] == param_3) {
        SaveDDS(param_4);
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_28);
  }
  (*DAT_0451eeac)(local_24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xe73,
                 "void DumpTextureDataByIDBoundInTextureStages(OpenGlDebugWriter*, const char*, GLint, GLint, GLint)"
                );
  }
  return;
}

// --- OGLC_Buffer @0x040dda20 ---
/* source: openGlDebugFunctions */

void OGLC_Buffer(char *param_1)

{
  int iVar1;
  ushort **ppuVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  byte bVar8;
  int local_28;
  int local_24;
  int local_20 [4];
  
  bVar8 = 0;
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    uVar6 = DAT_044dac80 == 0;
    if ((bool)uVar6) {
      FUN_040d9ba0();
    }
    iVar1 = 2;
    pcVar4 = param_1;
    pcVar5 = "V";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      uVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    } while ((bool)uVar6);
    if ((bool)uVar6) {
      glGetIntegerv(0x8894,&local_28);
      iVar1 = glGetError();
      if (iVar1 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x114f,"void OGLC_Buffer(const char*)");
      }
      if (local_28 == 0) {
        if (DAT_04408c90 != '\0') {
          puts("No valid OpenGL buffer bound to vertex buffer binding point!.");
        }
      }
      else {
        OpenGL_LogState_Buffer();
      }
    }
    else {
      iVar1 = 2;
      bVar7 = false;
      pcVar4 = param_1;
      pcVar5 = "E";
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar7 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
      } while (bVar7);
      if (bVar7) {
        glGetIntegerv(0x8895,&local_28);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x115d,"void OGLC_Buffer(const char*)");
        }
        if (local_28 == 0) {
          if (DAT_04408c90 != '\0') {
            puts("No valid OpenGL buffer bound to element buffer binding point!.");
          }
        }
        else {
          OpenGL_LogState_Buffer();
        }
      }
      else {
        iVar1 = 2;
        bVar7 = false;
        pcVar4 = param_1;
        pcVar5 = "U";
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar7 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
          pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
        } while (bVar7);
        if (bVar7) {
          glGetIntegerv(0x8a28,&local_28);
          iVar1 = glGetError();
          if (iVar1 != 0) {
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0x116b,"void OGLC_Buffer(const char*)");
          }
          if (local_28 == 0) {
            if (DAT_04408c90 != '\0') {
              puts("No valid OpenGL buffer bound to uniform buffer binding point!.");
            }
          }
          else {
            OpenGL_LogState_Buffer();
          }
        }
        else {
          if (*param_1 == 'V') {
            if ((param_1[1] == 'A') &&
               (ppuVar2 = __ctype_b_loc(), (*(byte *)((int)*ppuVar2 + param_1[2] * 2 + 1) & 8) != 0)
               ) {
              lVar3 = strtol(param_1 + 2,(char **)0x0,10);
              glGetIntegerv(0x8869,&local_28);
              iVar1 = glGetError();
              if (iVar1 != 0) {
                FUN_0400a810("glGetError() == 0",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                             ,0x117b,"void OGLC_Buffer(const char*)");
              }
              if (local_28 <= lVar3) {
                if (DAT_04408c90 == '\0') {
                  return;
                }
                printf("Vertex attribute index (%d) higher than maximum available (%d)!\n",lVar3,
                       local_28 + -1);
                return;
              }
              (*DAT_0451ec80)(lVar3,0x889f,&local_24);
              iVar1 = glGetError();
              if (iVar1 != 0) {
                FUN_0400a810("glGetError() == 0",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                             ,0x1185,"void OGLC_Buffer(const char*)");
              }
              if (local_24 == 0) {
                if (DAT_04408c90 == '\0') {
                  return;
                }
                puts("No valid OpenGL buffer bound to this vertex attribute binding point!.");
                return;
              }
              glGetIntegerv(0x8894,local_20);
              iVar1 = glGetError();
              if (iVar1 != 0) {
                FUN_0400a810("glGetError() == 0",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                             ,0x118f,"void OGLC_Buffer(const char*)");
              }
              if (local_24 != local_20[0]) {
                (*DAT_0451ed34)(0x8892,local_24);
                iVar1 = glGetError();
                if (iVar1 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x1194,"void OGLC_Buffer(const char*)");
                }
              }
              OpenGL_LogState_Buffer();
              if (local_24 == local_20[0]) {
                return;
              }
              (*DAT_0451ed34)(0x8892,local_20[0]);
              iVar1 = glGetError();
              if (iVar1 == 0) {
                return;
              }
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0x119c,"void OGLC_Buffer(const char*)");
              return;
            }
          }
          else if (((*param_1 == 'U') && (param_1[1] == 'B')) &&
                  (ppuVar2 = __ctype_b_loc(),
                  (*(byte *)((int)*ppuVar2 + param_1[2] * 2 + 1) & 8) != 0)) {
            lVar3 = strtol(param_1 + 2,(char **)0x0,10);
            glGetIntegerv(0x8a2f,local_20);
            iVar1 = glGetError();
            if (iVar1 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0x11a5,"void OGLC_Buffer(const char*)");
            }
            if (local_20[0] <= lVar3) {
              if (DAT_04408c90 == '\0') {
                return;
              }
              printf("Uniform buffer index (%d) higher than maximum available (%d)!\n",lVar3,
                     local_20[0] + -1);
              return;
            }
            (*DAT_0451e0b8)(0x8a28,lVar3,&local_24);
            iVar1 = glGetError();
            if (iVar1 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0x11af,"void OGLC_Buffer(const char*)");
            }
            if (local_24 == 0) {
              if (DAT_04408c90 == '\0') {
                return;
              }
              puts("No valid OpenGL buffer bound to this uniform binding point!.");
              return;
            }
            glGetIntegerv(0x8a28,&local_28);
            iVar1 = glGetError();
            if (iVar1 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0x11b9,"void OGLC_Buffer(const char*)");
            }
            if (local_24 != local_28) {
              (*DAT_0451ed34)(0x8a11,local_24);
              iVar1 = glGetError();
              if (iVar1 != 0) {
                FUN_0400a810("glGetError() == 0",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                             ,0x11be,"void OGLC_Buffer(const char*)");
              }
            }
            OpenGL_LogState_Buffer();
            if (local_24 == local_28) {
              return;
            }
            (*DAT_0451ed34)(0x8a11,local_28);
            iVar1 = glGetError();
            if (iVar1 == 0) {
              return;
            }
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0x11c6,"void OGLC_Buffer(const char*)");
            return;
          }
          printf("Unrecognized OpenGL buffer binding point \'%s\'.\n",param_1);
        }
      }
    }
  }
  return;
}

// --- OGLC_DumpBoundTexturesInStage @0x040df550 ---
/* source: openGlDebugFunctions */

void OGLC_DumpBoundTexturesInStage(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  char local_430 [1024];
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == (undefined4 *)0x0) {
      FUN_040d9ba0();
    }
    glGetIntegerv(0x8872,&local_30);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1400,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
    if (local_30 <= param_1) {
      puts("Invalid stage number!.");
      return;
    }
    glGetIntegerv(0x84e0,&local_2c);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1409,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
    (*DAT_0451eeac)(param_1 + 0x84c0);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x140c,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
    glGetIntegerv(0x8068,&local_28);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1410,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
    if (local_28 != 0) {
      (**(code **)*DAT_044dac80)
                (DAT_044dac80,"Stage %d, texture binding 1D = %d, texture dump unhandled!",param_1,
                 local_28);
    }
    glGetIntegerv(0x8069,&local_28);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1415,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
    if (local_28 != 0) {
      glGetTexParameteriv(0xde1,0x813c,&local_24);
      iVar1 = glGetError();
      if (iVar1 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x141a,"void OGLC_DumpBoundTexturesInStage(int32_t)");
      }
      glGetTexParameteriv(0xde1,0x813d,local_20);
      iVar1 = glGetError();
      if (iVar1 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x141c,"void OGLC_DumpBoundTexturesInStage(int32_t)");
      }
      if (local_24 <= local_20[0]) {
        iVar1 = local_24;
        do {
          puVar2 = &DAT_044daca0;
          if (DAT_044daca0 == '\0') {
            puVar2 = &DAT_04328763;
          }
          sprintf(local_430,"%stex%d_2D_id%d_lvl%d.tiff",puVar2,param_1,local_28,iVar1);
          FUN_0401a1d0(local_430);
          iVar3 = iVar1 + 1;
          SaveDDS(iVar1);
          iVar1 = iVar3;
        } while (iVar3 <= local_20[0]);
      }
    }
    glGetIntegerv(0x806a,&local_28);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1427,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
    if (local_28 != 0) {
      (**(code **)*DAT_044dac80)
                (DAT_044dac80,"Stage %d, texture binding 3D = %d, texture dump unhandled!",param_1,
                 local_28);
    }
    glGetIntegerv(0x8514,&local_28);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x142c,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
    if (local_28 != 0) {
      glGetTexParameteriv(0x8513,0x813c,local_20);
      iVar1 = glGetError();
      if (iVar1 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x1431,"void OGLC_DumpBoundTexturesInStage(int32_t)");
      }
      glGetTexParameteriv(0x8513,0x813d,&local_24);
      iVar1 = glGetError();
      if (iVar1 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x1433,"void OGLC_DumpBoundTexturesInStage(int32_t)");
      }
      if (local_20[0] <= local_24) {
        iVar1 = local_20[0];
        do {
          puVar2 = &DAT_044daca0;
          if (DAT_044daca0 == '\0') {
            puVar2 = &DAT_04328763;
          }
          sprintf(local_430,"%stex%d_2D_id%d_lvl%d_face%d.tiff",puVar2,param_1,local_28,iVar1,0);
          FUN_0401a1d0(local_430);
          SaveDDS(iVar1);
          puVar2 = &DAT_044daca0;
          if (DAT_044daca0 == '\0') {
            puVar2 = &DAT_04328763;
          }
          sprintf(local_430,"%stex%d_2D_id%d_lvl%d_face%d.tiff",puVar2,param_1,local_28,iVar1,1);
          FUN_0401a1d0(local_430);
          SaveDDS(iVar1);
          puVar2 = &DAT_044daca0;
          if (DAT_044daca0 == '\0') {
            puVar2 = &DAT_04328763;
          }
          sprintf(local_430,"%stex%d_2D_id%d_lvl%d_face%d.tiff",puVar2,param_1,local_28,iVar1,2);
          FUN_0401a1d0(local_430);
          SaveDDS(iVar1);
          puVar2 = &DAT_044daca0;
          if (DAT_044daca0 == '\0') {
            puVar2 = &DAT_04328763;
          }
          sprintf(local_430,"%stex%d_2D_id%d_lvl%d_face%d.tiff",puVar2,param_1,local_28,iVar1,3);
          FUN_0401a1d0(local_430);
          SaveDDS(iVar1);
          puVar2 = &DAT_044daca0;
          if (DAT_044daca0 == '\0') {
            puVar2 = &DAT_04328763;
          }
          sprintf(local_430,"%stex%d_2D_id%d_lvl%d_face%d.tiff",puVar2,param_1,local_28,iVar1,4);
          FUN_0401a1d0(local_430);
          SaveDDS(iVar1);
          puVar2 = &DAT_044daca0;
          if (DAT_044daca0 == '\0') {
            puVar2 = &DAT_04328763;
          }
          sprintf(local_430,"%stex%d_2D_id%d_lvl%d_face%d.tiff",puVar2,param_1,local_28,iVar1,5);
          FUN_0401a1d0(local_430);
          iVar3 = iVar1 + 1;
          SaveDDS(iVar1);
          iVar1 = iVar3;
        } while (iVar3 <= local_24);
      }
    }
    (*DAT_0451eeac)(local_2c);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1441,"void OGLC_DumpBoundTexturesInStage(int32_t)");
    }
  }
  return;
}

// --- OGLC_DumpBuffer @0x040d8520 ---
/* source: openGlDebugFunctions */

void __regparm3 OGLC_DumpBuffer(char *param_1,char *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ushort **ppuVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  int *piVar11;
  void *pvVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  char *pcVar16;
  code *pcVar17;
  uint uVar18;
  undefined2 *puVar19;
  uint *puVar20;
  char *pcVar21;
  int iVar22;
  undefined1 uVar23;
  bool bVar24;
  byte bVar25;
  uint local_570;
  uint local_56c;
  int *local_568;
  uint *local_564;
  uint local_55c [256];
  uint local_15c [64];
  char local_5c [32];
  uint local_3c [3];
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 local_20 [4];
  
  bVar25 = 0;
  uVar23 = DAT_044daca0 == '\0';
  if ((bool)uVar23) {
    strcpy((char *)local_55c,param_2);
  }
  else {
    strcpy((char *)local_55c,&DAT_044daca0);
    strcat((char *)local_55c,param_2);
  }
  local_564 = local_55c;
  FUN_0401a1d0(local_564);
  iVar13 = 2;
  pcVar16 = param_1;
  pcVar21 = "V";
  do {
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    uVar23 = *pcVar16 == *pcVar21;
    pcVar16 = pcVar16 + (uint)bVar25 * -2 + 1;
    pcVar21 = pcVar21 + (uint)bVar25 * -2 + 1;
  } while ((bool)uVar23);
  if ((bool)uVar23) {
    glGetIntegerv(0x8894,local_3c + 2);
    iVar13 = glGetError();
    if (iVar13 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1240,"void OGLC_DumpBuffer(const char*, const char*, int)");
    }
    if (local_3c[2] == 0) {
      if (DAT_04408c90 == '\0') {
        return;
      }
      puts("No valid OpenGL buffer bound to vertex buffer binding point!.");
      return;
    }
    OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo();
    return;
  }
  iVar13 = 2;
  bVar24 = false;
  pcVar16 = param_1;
  pcVar21 = "E";
  do {
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    bVar24 = *pcVar16 == *pcVar21;
    pcVar16 = pcVar16 + (uint)bVar25 * -2 + 1;
    pcVar21 = pcVar21 + (uint)bVar25 * -2 + 1;
  } while (bVar24);
  if (bVar24) {
    glGetIntegerv(0x8895,local_3c + 2);
    iVar13 = glGetError();
    if (iVar13 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x124e,"void OGLC_DumpBuffer(const char*, const char*, int)");
    }
    if (local_3c[2] == 0) {
      if (DAT_04408c90 == '\0') {
        return;
      }
      puts("No valid OpenGL buffer bound to element buffer binding point!.");
      return;
    }
    (*DAT_0451ed14)(0x8893,0x88bc,&local_30);
    iVar13 = glGetError();
    if (iVar13 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1258,"void OGLC_DumpBuffer(const char*, const char*, int)");
    }
    if (local_30 != 0) {
      printf("Can\'t map element buffer %d, as it\'s currently mapped!.\n",local_3c[2]);
      return;
    }
    local_2c = 0;
    if (DAT_0451cad3 == '\0') {
      (*DAT_0451ed14)(0x8893,0x8764,&local_2c);
      iVar13 = glGetError();
      if (iVar13 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x126c,"void OGLC_DumpBuffer(const char*, const char*, int)");
      }
    }
    else {
      local_3c[0] = 0;
      local_3c[1] = 0;
      (*DAT_0451ea70)(0x8893,0x8764,local_3c);
      iVar13 = glGetError();
      if (iVar13 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x1266,"void OGLC_DumpBuffer(const char*, const char*, int)");
      }
      local_2c = local_3c[0];
    }
    if (DAT_0451ca55 == '\0') {
      return;
    }
    iVar13 = (*DAT_0451e520)(0x8893,0,local_2c,1);
    iVar22 = glGetError();
    if (iVar22 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1272,"void OGLC_DumpBuffer(const char*, const char*, int)");
    }
    if (iVar13 == 0) {
      printf("Failed to map element buffer %d through gl3MapBufferRange()!.\n",local_3c[2]);
      return;
    }
    if (param_3 != 0) {
      local_570 = local_2c >> 2;
      local_568 = operator_new(0xc);
      *local_568 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
      local_568[1] = 0;
      local_568[2] = 0;
      puVar20 = local_564;
      do {
        puVar14 = puVar20;
        uVar7 = *puVar14 + 0xfefefeff & ~*puVar14;
        uVar15 = uVar7 & 0x80808080;
        puVar20 = puVar14 + 1;
      } while (uVar15 == 0);
      if ((uVar7 & 0x8080) == 0) {
        puVar20 = (uint *)((int)puVar14 + 6);
        uVar15 = uVar15 >> 0x10;
      }
      pcVar16 = (char *)((int)puVar20 +
                        (-(int)local_564 - (uint)CARRY1((byte)uVar15,(byte)uVar15)) + -2);
      pvVar12 = malloc((size_t)pcVar16);
      local_568[1] = (int)pvVar12;
      memcpy(pvVar12,local_564,(size_t)pcVar16);
      pcVar17 = *(code **)*local_568;
      pcVar16 = "32-bit";
    }
    else {
      local_570 = local_2c >> 1;
      local_568 = operator_new(0xc);
      *local_568 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
      local_568[1] = 0;
      local_568[2] = 0;
      puVar20 = local_564;
      do {
        puVar14 = puVar20;
        uVar7 = *puVar14 + 0xfefefeff & ~*puVar14;
        uVar15 = uVar7 & 0x80808080;
        puVar20 = puVar14 + 1;
      } while (uVar15 == 0);
      if ((uVar7 & 0x8080) == 0) {
        puVar20 = (uint *)((int)puVar14 + 6);
        uVar15 = uVar15 >> 0x10;
      }
      pcVar16 = (char *)((int)puVar20 +
                        (-(int)local_564 - (uint)CARRY1((byte)uVar15,(byte)uVar15)) + -2);
      pvVar12 = malloc((size_t)pcVar16);
      local_568[1] = (int)pvVar12;
      memcpy(pvVar12,local_564,(size_t)pcVar16);
      pcVar17 = *(code **)*local_568;
      pcVar16 = "16-bit";
    }
    local_56c = 0xffffffff;
    (*pcVar17)(local_568,"Index buffer %d, size %u, element count %d, %s\n\n",local_3c[2],local_2c,
               local_570,pcVar16);
    (**(code **)*local_568)
              (local_568,
               "=========================================================================\n");
    puVar20 = local_15c;
    for (iVar22 = 0x40; iVar22 != 0; iVar22 = iVar22 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + (uint)bVar25 * -2 + 1;
    }
    uVar15 = 0;
    if (local_570 != 0) {
      local_56c = 0xffffffff;
      iVar22 = 0;
      pcVar16 = "\t";
      uVar7 = 0;
      if (param_3 != 0) {
        while( true ) {
          strcat((char *)local_15c,pcVar16);
          uVar8 = *(uint *)(iVar13 + uVar7 * 4);
          if (uVar8 < local_56c) {
            local_56c = uVar8;
          }
          if (uVar15 < uVar8) {
            uVar15 = uVar8;
          }
          iVar22 = iVar22 + 1;
          sprintf(local_5c,"%u",uVar8);
          strcat((char *)local_15c,local_5c);
          if (0x13 < iVar22) {
            puVar20 = local_15c;
            do {
              puVar14 = puVar20;
              uVar8 = *puVar14 + 0xfefefeff & ~*puVar14;
              uVar9 = uVar8 & 0x80808080;
              puVar20 = puVar14 + 1;
            } while (uVar9 == 0);
            uVar18 = uVar9 >> 0x10;
            puVar20 = (uint *)((int)puVar14 + 6);
            if ((uVar8 & 0x8080) != 0) {
              puVar20 = puVar14 + 1;
              uVar18 = uVar9;
            }
            puVar19 = (undefined2 *)((int)puVar20 + (-3 - (uint)CARRY1((byte)uVar18,(byte)uVar18)));
            iVar22 = 0;
            *puVar19 = 0xa2c;
            *(undefined1 *)(puVar19 + 1) = 0;
            (**(code **)*local_568)(local_568,local_15c);
            local_15c[0]._0_1_ = 0;
          }
          uVar7 = uVar7 + 1;
          if (uVar7 == local_570) break;
          pcVar16 = "\t";
          if (iVar22 != 0) {
            pcVar16 = ", ";
          }
        }
      }
      else {
        while( true ) {
          strcat((char *)local_15c,pcVar16);
          uVar8 = (uint)*(ushort *)(iVar13 + uVar7 * 2);
          if (uVar8 < local_56c) {
            local_56c = uVar8;
          }
          if (uVar15 < uVar8) {
            uVar15 = uVar8;
          }
          iVar22 = iVar22 + 1;
          sprintf(local_5c,"%u",uVar8);
          strcat((char *)local_15c,local_5c);
          if (0x13 < iVar22) {
            puVar20 = local_15c;
            do {
              puVar14 = puVar20;
              uVar8 = *puVar14 + 0xfefefeff & ~*puVar14;
              uVar9 = uVar8 & 0x80808080;
              puVar20 = puVar14 + 1;
            } while (uVar9 == 0);
            uVar18 = uVar9 >> 0x10;
            puVar20 = (uint *)((int)puVar14 + 6);
            if ((uVar8 & 0x8080) != 0) {
              puVar20 = puVar14 + 1;
              uVar18 = uVar9;
            }
            puVar19 = (undefined2 *)((int)puVar20 + (-3 - (uint)CARRY1((byte)uVar18,(byte)uVar18)));
            iVar22 = 0;
            *puVar19 = 0xa2c;
            *(undefined1 *)(puVar19 + 1) = 0;
            (**(code **)*local_568)(local_568,local_15c);
            local_15c[0]._0_1_ = 0;
          }
          uVar7 = uVar7 + 1;
          if (uVar7 == local_570) break;
          pcVar16 = "\t";
          if (iVar22 != 0) {
            pcVar16 = ", ";
          }
        }
      }
      if (iVar22 != 0) {
        puVar20 = local_15c;
        do {
          puVar14 = puVar20;
          uVar7 = *puVar14 + 0xfefefeff & ~*puVar14;
          uVar8 = uVar7 & 0x80808080;
          puVar20 = puVar14 + 1;
        } while (uVar8 == 0);
        uVar9 = uVar8 >> 0x10;
        puVar20 = (uint *)((int)puVar14 + 6);
        if ((uVar7 & 0x8080) != 0) {
          puVar20 = puVar14 + 1;
          uVar9 = uVar8;
        }
        *(undefined2 *)((int)puVar20 + (-3 - (uint)CARRY1((byte)uVar9,(byte)uVar9))) = 10;
        (**(code **)*local_568)(local_568,local_15c);
      }
    }
    (**(code **)*local_568)
              (local_568,
               "=========================================================================\n");
    (**(code **)*local_568)(local_568,"Lowest value in buffer: %u, highest: %u\n",local_56c,uVar15);
    (**(code **)(*local_568 + 0xc))(local_568);
    (*DAT_0451ecf0)(0x8893);
    iVar13 = glGetError();
    if (iVar13 == 0) {
      return;
    }
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x12ae,"void OGLC_DumpBuffer(const char*, const char*, int)");
    return;
  }
  if (*param_1 == 'V') {
    if ((param_1[1] == 'A') &&
       (ppuVar5 = __ctype_b_loc(), (*(byte *)((int)*ppuVar5 + param_1[2] * 2 + 1) & 8) != 0)) {
      lVar6 = strtol(param_1 + 2,(char **)0x0,10);
      glGetIntegerv(0x8869,&local_2c);
      iVar13 = glGetError();
      if (iVar13 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x12b7,"void OGLC_DumpBuffer(const char*, const char*, int)");
      }
      if ((int)local_2c <= lVar6) {
        printf("Vertex attribute index (%d) higher than maximum available (%d)!\n",lVar6,
               local_2c - 1);
        return;
      }
      (*DAT_0451ec80)(lVar6,0x889f,&local_30);
      iVar13 = glGetError();
      if (iVar13 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x12c0,"void OGLC_DumpBuffer(const char*, const char*, int)");
      }
      if (local_30 == 0) {
        if (DAT_04408c90 == '\0') {
          return;
        }
        puts("No valid OpenGL buffer bound to this vertex attribute binding point!.");
        return;
      }
      glGetIntegerv(0x8894,local_3c + 2);
      iVar13 = glGetError();
      if (iVar13 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x12ca,"void OGLC_DumpBuffer(const char*, const char*, int)");
      }
      if (local_30 != local_3c[2]) {
        (*DAT_0451ed34)(0x8892,local_30);
        iVar13 = glGetError();
        if (iVar13 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x12cf,"void OGLC_DumpBuffer(const char*, const char*, int)");
        }
      }
      OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo();
      if (local_30 == local_3c[2]) {
        return;
      }
      (*DAT_0451ed34)(0x8892,local_3c[2]);
      iVar13 = glGetError();
      if (iVar13 == 0) {
        return;
      }
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x12d7,"void OGLC_DumpBuffer(const char*, const char*, int)");
      return;
    }
LAB_040d85bc:
    printf("Unrecognized OpenGL buffer binding point \'%s\'.\n",param_1);
    return;
  }
  if (((*param_1 != 'U') || (param_1[1] != 'B')) ||
     (ppuVar5 = __ctype_b_loc(), (*(byte *)((int)*ppuVar5 + param_1[2] * 2 + 1) & 8) == 0))
  goto LAB_040d85bc;
  lVar6 = strtol(param_1 + 2,(char **)0x0,10);
  if (DAT_0451ca01 == '\0') {
    return;
  }
  glGetIntegerv(0x8a2f,local_3c + 2);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x12e3,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
  if ((int)local_3c[2] <= lVar6) {
    printf("Uniform buffer index (%d) higher than maximum available (%d)!\n",lVar6,local_3c[2] - 1);
    return;
  }
  (*DAT_0451e0b8)(0x8a28,lVar6,&local_30);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x12ec,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
  if (local_30 == 0) {
    if (DAT_04408c90 == '\0') {
      return;
    }
    printf("No valid OpenGL buffer bound to uniform binding point %d.\n",lVar6);
    return;
  }
  if (10 < lVar6) {
    printf("Don\'t know how to interpret uniform binding point %d.\n",lVar6);
    return;
  }
  glGetIntegerv(0x8a28,&local_2c);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x12fc,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
  if (local_30 != local_2c) {
    (*DAT_0451ed34)(0x8a11,local_30);
    iVar13 = glGetError();
    if (iVar13 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1301,"void OGLC_DumpBuffer(const char*, const char*, int)");
    }
  }
  (*DAT_0451ed14)(0x8a11,0x88bc,&local_28);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x1307,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
  if (local_28 != 0) {
    printf("Uniform buffer %d already mapped!!.\n",local_30);
    goto LAB_040d901a;
  }
  (*DAT_0451e0b8)(0x8a2a,lVar6,&local_24);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x130e,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
  (*DAT_0451e0b8)(0x8a29,lVar6,local_20);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x1311,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
  if (local_24 < 1) goto LAB_040d901a;
  pfVar10 = (float *)(*DAT_0451e520)(0x8a11,local_20[0],local_24,1);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x1316,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
  if (pfVar10 == (float *)0x0) {
    printf("Failed to map uniform buffer %d through gl3MapBufferRange()!.\n",local_30);
    goto LAB_040d901a;
  }
  piVar11 = operator_new(0xc);
  uVar15 = 0xffffffff;
  *piVar11 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
  piVar11[1] = 0;
  piVar11[2] = 0;
  puVar20 = local_564;
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    uVar7 = *puVar20;
    puVar20 = (uint *)((int)puVar20 + (uint)bVar25 * -2 + 1);
  } while ((char)uVar7 != '\0');
  pvVar12 = malloc(~uVar15);
  piVar11[1] = (int)pvVar12;
  memcpy(pvVar12,local_564,~uVar15);
  if (local_24 == 0x100) {
    iVar13 = 0;
    do {
      pfVar1 = pfVar10 + 3;
      pfVar2 = pfVar10 + 2;
      pfVar3 = pfVar10 + 1;
      fVar4 = *pfVar10;
      iVar22 = iVar13 + 1;
      pfVar10 = pfVar10 + 4;
      (**(code **)*piVar11)
                (piVar11,"%04d: ( %d, %d, %d, %d )\n",iVar13,fVar4,*pfVar3,*pfVar2,*pfVar1);
      iVar13 = iVar22;
    } while (iVar22 != 0x10);
  }
  else if (local_24 < 0x101) {
    if (local_24 == 0x40) {
      iVar13 = 0;
      do {
        pcVar16 = "TRUE";
        if (pfVar10[iVar13] == 0.0) {
          pcVar16 = "FALSE";
        }
        iVar22 = iVar13 + 1;
        (**(code **)*piVar11)(piVar11,"%04d: %d (%s)\n",iVar13,pfVar10[iVar13],pcVar16);
        iVar13 = iVar22;
      } while (iVar22 != 0x10);
    }
    else if (local_24 == 0x90) {
      iVar13 = 0;
      (**(code **)*piVar11)(piVar11,"PositionFix: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"OpenGL_FogColor: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"OpenGL_FogDensity: %f\n",(double)pfVar10[8]);
      (**(code **)*piVar11)(piVar11,"OpenGL_FogEnd: %f\n",(double)pfVar10[9]);
      (**(code **)*piVar11)(piVar11,"OpenGL_FogScale: %f\n",(double)pfVar10[10]);
      (**(code **)*piVar11)(piVar11,"AlphaRef: %f\n",(double)pfVar10[0xb]);
      do {
        (**(code **)*piVar11)(piVar11,"OpenGL_ClipPlanes[%d]: ",iVar13);
        iVar13 = iVar13 + 1;
        FUN_040090a0();
      } while (iVar13 != 6);
    }
    else {
      if (local_24 != 0x18) goto LAB_040d92d7;
      (**(code **)*piVar11)(piVar11,"BumpEnvMatrix: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"LuminanceScale: %f\n",(double)pfVar10[4]);
      (**(code **)*piVar11)(piVar11,"LuminanceOffset: %f\n",(double)pfVar10[5]);
    }
  }
  else if (local_24 == 400) {
    iVar13 = 0;
    do {
      (**(code **)*piVar11)(piVar11,"TextureStageConstant[%d]: ",iVar13);
      iVar13 = iVar13 + 1;
      FUN_040090a0();
    } while (iVar13 != 8);
    iVar13 = 0;
    (**(code **)*piVar11)(piVar11,"TextureFactor: ");
    FUN_040090a0();
    do {
      (**(code **)*piVar11)(piVar11,"LuminanceScaleOffset[%d]: ",iVar13);
      iVar13 = iVar13 + 1;
      FUN_040090a0();
    } while (iVar13 != 8);
    iVar13 = 0;
    do {
      (**(code **)*piVar11)(piVar11,"BumpEnvMap[%d]: ",iVar13);
      iVar13 = iVar13 + 1;
      FUN_040090a0();
    } while (iVar13 != 8);
  }
  else if (local_24 < 0x191) {
    if (local_24 == 0x140) {
      (**(code **)*piVar11)(piVar11,"OpenGL_ModelViewMatrix:\n");
      FUN_040090e2();
      (**(code **)*piVar11)(piVar11,"OpenGL_ProjectionMatrix:\n");
      FUN_040090e2();
      (**(code **)*piVar11)(piVar11,"OpenGL_ModelViewProjectionMatrix:\n");
      FUN_040090e2();
      (**(code **)*piVar11)(piVar11,"ViewTransform:\n");
      FUN_040090e2();
      (**(code **)*piVar11)(piVar11,"ViewportSizes: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"OpenGL_NormalMatrix:\n");
      (**(code **)*piVar11)
                (piVar11,"\t{ %f, %f, %f, %f }\n",(double)pfVar10[0x44],(double)pfVar10[0x45],
                 (double)pfVar10[0x46],(double)pfVar10[0x47]);
      (**(code **)*piVar11)
                (piVar11,"\t{ %f, %f, %f, %f }\n",(double)pfVar10[0x48],(double)pfVar10[0x49],
                 (double)pfVar10[0x4a],(double)pfVar10[0x4b]);
      (**(code **)*piVar11)
                (piVar11,"\t{ %f, %f, %f, %f }\n",(double)pfVar10[0x4c],(double)pfVar10[0x4d],
                 (double)pfVar10[0x4e],(double)pfVar10[0x4f]);
    }
    else {
LAB_040d92d7:
      printf("Unrecognized size of uniform buffer: %d! Can\'t interpret it.\n",local_24);
    }
  }
  else if (local_24 == 0x660) {
    iVar13 = 0;
    do {
      (**(code **)*piVar11)(piVar11,"OpenGL_TextureMatrix[%d]:\n",iVar13);
      iVar13 = iVar13 + 1;
      FUN_040090e2();
    } while (iVar13 != 8);
    iVar13 = 0;
    do {
      (**(code **)*piVar11)(piVar11,"WorldTransforms[%d]:\n",iVar13);
      iVar13 = iVar13 + 1;
      FUN_040090e2();
    } while (iVar13 != 4);
    iVar13 = 0;
    do {
      (**(code **)*piVar11)(piVar11,"OpenGL_LightSource[%d]:\n",iVar13);
      iVar22 = iVar13 + 1;
      (**(code **)*piVar11)(piVar11,"\tAmbient: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"\tDiffuse: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"\tSpecular: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"\tPosition: ");
      FUN_040090a0();
      (**(code **)*piVar11)(piVar11,"\tSpotDirection: ");
      (**(code **)*piVar11)
                (piVar11,"{ %f, %f, %f }\n",(double)pfVar10[iVar13 * 0x18 + 0xd0],
                 (double)pfVar10[iVar13 * 0x18 + 0xd1],(double)pfVar10[iVar13 * 0x18 + 0xd2]);
      (**(code **)*piVar11)(piVar11,"\tSpotExponent: %f\n",(double)pfVar10[iVar13 * 0x18 + 0xd3]);
      (**(code **)*piVar11)(piVar11,"\tSpotCosCutoff: %f\n",(double)pfVar10[iVar13 * 0x18 + 0xd4]);
      (**(code **)*piVar11)
                (piVar11,"\tConstantAttenuation: %f\n",(double)pfVar10[iVar13 * 0x18 + 0xd5]);
      (**(code **)*piVar11)
                (piVar11,"\tLinearAttenuation: %f\n",(double)pfVar10[iVar13 * 0x18 + 0xd6]);
      (**(code **)*piVar11)
                (piVar11,"\tQuadraticAttenuation: %f\n",(double)pfVar10[iVar13 * 0x18 + 0xd7]);
      iVar13 = iVar22;
    } while (iVar22 != 8);
    (**(code **)*piVar11)(piVar11,"OpenGL_LightModelAmbient: ");
    FUN_040090a0();
    (**(code **)*piVar11)(piVar11,"OpenGL_Material:\n");
    (**(code **)*piVar11)(piVar11,"\tEmission: ");
    FUN_040090a0();
    (**(code **)*piVar11)(piVar11,"\tAmbient: ");
    FUN_040090a0();
    (**(code **)*piVar11)(piVar11,"\tDiffuse: ");
    FUN_040090a0();
    (**(code **)*piVar11)(piVar11,"\tSpecular: ");
    FUN_040090a0();
    (**(code **)*piVar11)(piVar11,"\tShininess: %f\n",(double)pfVar10[0x194]);
    (**(code **)*piVar11)
              (piVar11,"\tpadding (unused): %f, %f, %f\n",(double)pfVar10[0x195],
               (double)pfVar10[0x196],(double)pfVar10[0x197]);
  }
  else {
    if (local_24 != 0x1000) goto LAB_040d92d7;
    iVar13 = 0;
    do {
      pfVar1 = pfVar10 + 3;
      pfVar2 = pfVar10 + 2;
      pfVar3 = pfVar10 + 1;
      fVar4 = *pfVar10;
      iVar22 = iVar13 + 1;
      pfVar10 = pfVar10 + 4;
      (**(code **)*piVar11)
                (piVar11,"%04d: ( %f, %f, %f, %f )\n",iVar13,(double)fVar4,(double)*pfVar3,
                 (double)*pfVar2,(double)*pfVar1);
      iVar13 = iVar22;
    } while (iVar22 != 0x100);
  }
  (**(code **)(*piVar11 + 0xc))(piVar11);
  (*DAT_0451ecf0)(0x8a11);
  iVar13 = glGetError();
  if (iVar13 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x1351,"void OGLC_DumpBuffer(const char*, const char*, int)");
  }
LAB_040d901a:
  if (local_30 == local_2c) {
    return;
  }
  (*DAT_0451ed34)(0x8a11,local_2c);
  iVar13 = glGetError();
  if (iVar13 == 0) {
    return;
  }
  FUN_0400a810("glGetError() == 0",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
               ,0x1359,"void OGLC_DumpBuffer(const char*, const char*, int)");
  return;
}

// --- OGLC_DumpBuffers @0x040def50 ---
/* source: openGlDebugFunctions */

void OGLC_DumpBuffers(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_250 [64];
  int aiStack_150 [64];
  char local_4e [32];
  char local_2e [10];
  int local_24;
  int local_20 [4];
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    if (DAT_04408c8c != -1) {
      iVar2 = eON_Int_GL_NoteCurrentContext();
      if (iVar2 == 0) {
        puts("No valid OpenGL context in calling thread!.");
      }
      else {
        if (DAT_044dac80 == 0) {
          FUN_040d9ba0();
        }
        OGLC_DumpBuffer();
      }
    }
    if (DAT_044dac28 != 0) {
      local_24 = 0;
      glGetIntegerv(0x8869,&local_24);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x137e,"void OGLC_DumpBuffers()");
      }
      if (0 < local_24) {
        iVar2 = 0;
        iVar5 = 0;
        do {
          while( true ) {
            (*DAT_0451ec80)(iVar2,0x8622,local_20);
            iVar3 = glGetError();
            if (iVar3 != 0) break;
            if (local_20[0] != 0) goto LAB_040df074;
LAB_040df01f:
            iVar2 = iVar2 + 1;
            if (local_24 <= iVar2) goto LAB_040df0e8;
          }
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x1389,"void OGLC_DumpBuffers()");
          if (local_20[0] == 0) goto LAB_040df01f;
LAB_040df074:
          (*DAT_0451ec80)(iVar2,0x889f,local_20);
          iVar3 = glGetError();
          if (iVar3 != 0) {
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0x138d,"void OGLC_DumpBuffers()");
          }
          iVar3 = local_20[0];
          if (0 < iVar5) {
            iVar4 = 0;
            iVar1 = local_250[0];
            while (iVar1 != local_20[0]) {
              iVar4 = iVar4 + 1;
              if (iVar4 == iVar5) goto LAB_040df0c4;
              iVar1 = local_250[iVar4];
            }
            goto LAB_040df01f;
          }
LAB_040df0c4:
          aiStack_150[iVar5] = iVar2;
          iVar2 = iVar2 + 1;
          local_250[iVar5] = iVar3;
          iVar5 = iVar5 + 1;
        } while (iVar2 < local_24);
LAB_040df0e8:
        if (0 < iVar5) {
          iVar2 = 0;
          do {
            sprintf(local_2e,"VA%d",aiStack_150[iVar2]);
            sprintf(local_4e,"vertexBuffer%d.txt",local_250[iVar2]);
            iVar3 = eON_Int_GL_NoteCurrentContext();
            if (iVar3 == 0) {
              puts("No valid OpenGL context in calling thread!.");
            }
            else {
              if (DAT_044dac80 == 0) {
                FUN_040d9ba0();
              }
              OGLC_DumpBuffer();
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != iVar5);
        }
      }
    }
    DumpUniformBuffers();
  }
  return;
}

// --- OGLC_DumpDraw @0x040dfdb0 ---
/* source: openGlDebugFunctions */

void OGLC_DumpDraw(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  void *__dest;
  char *pcVar10;
  uint *puVar11;
  uint *puVar12;
  char local_828 [1024];
  uint local_428 [256];
  undefined4 local_28;
  int local_24;
  int local_20 [4];
  
  iVar3 = eON_Int_GL_NoteCurrentContext();
  if (iVar3 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    strcpy(local_828,&DAT_044daca0);
    OGLC_SetRootSavePath(param_1);
    FUN_040df390(param_3,param_2 < 2);
    if (param_2 != 3) {
      puVar4 = &DAT_044daca0;
      if (DAT_044daca0 == '\0') {
        puVar4 = &DAT_04328763;
      }
      sprintf((char *)local_428,"%sfb.txt",puVar4);
      FUN_0401a1d0(local_428);
      piVar5 = operator_new(0xc);
      *piVar5 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
      piVar5[1] = 0;
      piVar5[2] = 0;
      puVar12 = local_428;
      do {
        puVar11 = puVar12;
        uVar6 = *puVar11 + 0xfefefeff & ~*puVar11;
        uVar7 = uVar6 & 0x80808080;
        puVar12 = puVar11 + 1;
      } while (uVar7 == 0);
      if ((uVar6 & 0x8080) == 0) {
        puVar12 = (uint *)((int)puVar11 + 6);
        uVar7 = uVar7 >> 0x10;
      }
      pcVar10 = (char *)((int)puVar12 +
                        (-(int)local_428 - (uint)CARRY1((byte)uVar7,(byte)uVar7)) + -2);
      pvVar8 = malloc((size_t)pcVar10);
      piVar5[1] = (int)pvVar8;
      memcpy(pvVar8,local_428,(size_t)pcVar10);
      glGetIntegerv(0x8ca6,&local_28);
      iVar3 = glGetError();
      if (iVar3 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x1468,"void OGLC_DumpDraw(const char*, uint32_t, const char*)");
      }
      OpenGL_LogState_Framebuffer();
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    if (param_2 < 2) {
      glGetIntegerv(0x8b8d,&local_28);
      iVar3 = glGetError();
      if (iVar3 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x1473,"void OGLC_DumpDraw(const char*, uint32_t, const char*)");
      }
      puVar4 = &DAT_044daca0;
      if (DAT_044daca0 == '\0') {
        puVar4 = &DAT_04328763;
      }
      sprintf((char *)local_428,"%sprogram%d.txt",puVar4,local_28);
      FUN_0401a1d0(local_428);
      piVar5 = operator_new(0xc);
      *piVar5 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
      piVar5[1] = 0;
      piVar5[2] = 0;
      puVar12 = local_428;
      do {
        puVar11 = puVar12;
        uVar6 = *puVar11 + 0xfefefeff & ~*puVar11;
        uVar7 = uVar6 & 0x80808080;
        puVar12 = puVar11 + 1;
      } while (uVar7 == 0);
      if ((uVar6 & 0x8080) == 0) {
        puVar12 = (uint *)((int)puVar11 + 6);
        uVar7 = uVar7 >> 0x10;
      }
      pcVar10 = (char *)((int)puVar12 +
                        (-(int)local_428 - (uint)CARRY1((byte)uVar7,(byte)uVar7)) + -2);
      pvVar8 = malloc((size_t)pcVar10);
      piVar5[1] = (int)pvVar8;
      memcpy(pvVar8,local_428,(size_t)pcVar10);
      uVar1 = local_28;
      cVar2 = (*DAT_0451ec7c)(local_28);
      if (cVar2 == '\0') {
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xbc3,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
        }
        (**(code **)*piVar5)(piVar5,"Program ID %d is not a valid program ID!",uVar1);
      }
      else {
        openGlDebugFunctions_040d0cc0();
      }
      (**(code **)(*piVar5 + 0xc))(piVar5);
      (*DAT_0451eca8)(local_28,0x8b85,&local_24);
      iVar3 = glGetError();
      if (iVar3 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x1481,"void OGLC_DumpDraw(const char*, uint32_t, const char*)");
      }
      if (local_24 != 0) {
        local_20[0] = 0;
        pvVar8 = malloc(local_24 << 2);
        (*DAT_0451ecb4)(local_28,local_24,local_20,pvVar8);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x1487,"void OGLC_DumpDraw(const char*, uint32_t, const char*)");
        }
        if (0 < local_24) {
          iVar3 = 0;
          do {
            puVar4 = &DAT_044daca0;
            if (DAT_044daca0 == '\0') {
              puVar4 = &DAT_04328763;
            }
            sprintf((char *)local_428,"%sshader%d.txt",puVar4,
                    *(undefined4 *)((int)pvVar8 + iVar3 * 4));
            FUN_0401a1d0(local_428);
            piVar5 = operator_new(0xc);
            *piVar5 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
            piVar5[1] = 0;
            piVar5[2] = 0;
            puVar12 = local_428;
            do {
              puVar11 = puVar12;
              uVar6 = *puVar11 + 0xfefefeff & ~*puVar11;
              uVar7 = uVar6 & 0x80808080;
              puVar12 = puVar11 + 1;
            } while (uVar7 == 0);
            if ((uVar6 & 0x8080) == 0) {
              puVar12 = (uint *)((int)puVar11 + 6);
              uVar7 = uVar7 >> 0x10;
            }
            pcVar10 = (char *)((int)puVar12 +
                              (-(int)local_428 - (uint)CARRY1((byte)uVar7,(byte)uVar7)) + -2);
            __dest = malloc((size_t)pcVar10);
            piVar5[1] = (int)__dest;
            memcpy(__dest,local_428,(size_t)pcVar10);
            uVar1 = *(undefined4 *)((int)pvVar8 + iVar3 * 4);
            cVar2 = (*DAT_0451ec78)(uVar1);
            if (cVar2 == '\0') {
              iVar9 = glGetError();
              if (iVar9 != 0) {
                FUN_0400a810("glGetError() == 0",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                             ,0xce0,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
              }
              (**(code **)*piVar5)(piVar5,"Shader ID %d is not a valid shader ID!",uVar1);
            }
            else {
              openGlDebugFunctions_040d4420();
            }
            iVar3 = iVar3 + 1;
            (**(code **)(*piVar5 + 0xc))(piVar5);
          } while (iVar3 < local_24);
        }
        free(pvVar8);
      }
      puVar4 = &DAT_044daca0;
      if (DAT_044daca0 == '\0') {
        puVar4 = &DAT_04328763;
      }
      sprintf((char *)local_428,"%stextureStages.txt",puVar4);
      FUN_0401a1d0(local_428);
      piVar5 = operator_new(0xc);
      *piVar5 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
      piVar5[1] = 0;
      piVar5[2] = 0;
      puVar12 = local_428;
      do {
        puVar11 = puVar12;
        uVar6 = *puVar11 + 0xfefefeff & ~*puVar11;
        uVar7 = uVar6 & 0x80808080;
        puVar12 = puVar11 + 1;
      } while (uVar7 == 0);
      if ((uVar6 & 0x8080) == 0) {
        puVar12 = (uint *)((int)puVar11 + 6);
        uVar7 = uVar7 >> 0x10;
      }
      pcVar10 = (char *)((int)puVar12 +
                        (-(int)local_428 - (uint)CARRY1((byte)uVar7,(byte)uVar7)) + -2);
      pvVar8 = malloc((size_t)pcVar10);
      piVar5[1] = (int)pvVar8;
      memcpy(pvVar8,local_428,(size_t)pcVar10);
      glGetIntegerv(0x8872,local_20);
      iVar3 = glGetError();
      if (iVar3 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x14a5,"void OGLC_DumpDraw(const char*, uint32_t, const char*)");
      }
      if (0 < local_20[0]) {
        iVar3 = 0;
        do {
          while( true ) {
            glGetIntegerv(0x8872,&local_24);
            iVar9 = glGetError();
            if (iVar9 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0xb22,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
            }
            if (iVar3 < local_24) break;
            iVar9 = iVar3 + 1;
            (**(code **)*piVar5)
                      (piVar5,"Texture stage %d is not a valid texture stage index!\n",iVar3);
            iVar3 = iVar9;
            if (local_20[0] <= iVar9) goto LAB_040e01be;
          }
          iVar3 = iVar3 + 1;
          OpenGL_LogState_BoundSampler();
        } while (iVar3 < local_20[0]);
      }
LAB_040e01be:
      (**(code **)(*piVar5 + 0xc))(piVar5);
      OGLC_DumpBuffers();
      iVar3 = eON_Int_GL_NoteCurrentContext();
      if (iVar3 == 0) {
        puts("No valid OpenGL context in calling thread!.");
      }
      else {
        if (DAT_044dac80 == 0) {
          FUN_040d9ba0();
        }
        glGetIntegerv(0x8872,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x144a,"void OGLC_DumpBoundTextures()");
        }
        if (0 < local_24) {
          iVar3 = 0;
          do {
            iVar9 = iVar3 + 1;
            OGLC_DumpBoundTexturesInStage(iVar3);
            iVar3 = iVar9;
          } while (iVar9 < local_24);
        }
      }
    }
    OGLC_DumpFB();
    OGLC_SetRootSavePath(local_828);
  }
  return;
}

// --- OGLC_DumpFB @0x040de570 ---
/* source: openGlDebugFunctions */

void OGLC_DumpFB(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char local_420 [1024];
  int local_20 [4];
  
  iVar3 = eON_Int_GL_NoteCurrentContext();
  if (iVar3 == 0) {
    puts("No valid OpenGL context in calling thread!.");
    return;
  }
  if (DAT_044dac80 == 0) {
    FUN_040d9ba0();
  }
  glGetIntegerv(0x8ca6,local_20);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x1205,"void OGLC_DumpFB()");
  }
  iVar3 = (-(uint)(local_20[0] == 0) & 0xfffffffe) + 4;
  bVar6 = local_20[0] == 0;
  iVar5 = 0;
  do {
    while( true ) {
      sprintf(local_420,"%sfb%d.tiff",&DAT_044daca0,iVar5);
      FUN_0401a1d0(local_420);
      iVar1 = local_20[0];
      if ((local_20[0] != 0) && (cVar2 = (*DAT_0451e654)(local_20[0]), cVar2 == '\0')) break;
      iVar5 = iVar5 + 1;
      openGlDebugFunctions_040d2a80(0,bVar6);
      if (iVar3 <= iVar5) goto LAB_040de671;
    }
    iVar4 = glGetError();
    if (iVar4 == 0) {
      printf("Framebuffer ID %d is not a valid framebuffer ID!\n",iVar1);
    }
    else {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xe81,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
      printf("Framebuffer ID %d is not a valid framebuffer ID!\n",iVar1);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar3);
LAB_040de671:
  sprintf(local_420,"%sfbDepth.tiff",&DAT_044daca0);
  FUN_0401a1d0(local_420);
  iVar3 = local_20[0];
  if ((local_20[0] == 0) || (cVar2 = (*DAT_0451e654)(local_20[0]), cVar2 != '\0')) {
    openGlDebugFunctions_040d2a80(1,bVar6);
  }
  else {
    iVar5 = glGetError();
    if (iVar5 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xe81,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    printf("Framebuffer ID %d is not a valid framebuffer ID!\n",iVar3);
  }
  sprintf(local_420,"%sfbStencil.tiff",&DAT_044daca0);
  FUN_0401a1d0(local_420);
  if ((local_20[0] != 0) && (cVar2 = (*DAT_0451e654)(local_20[0]), cVar2 == '\0')) {
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xe81,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    printf("Framebuffer ID %d is not a valid framebuffer ID!\n",local_20[0]);
    return;
  }
  openGlDebugFunctions_040d2a80(2,bVar6);
  return;
}

// --- OGLC_SetRootSavePath @0x040df210 ---
/* source: openGlDebugFunctions */

void OGLC_SetRootSavePath(char *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char local_40c;
  char local_40b [1023];
  
  strcpy(&DAT_044daca0,param_1);
  puVar6 = (uint *)&DAT_044daca0;
  do {
    puVar5 = puVar6;
    uVar1 = *puVar5 + 0xfefefeff & ~*puVar5;
    uVar2 = uVar1 & 0x80808080;
    puVar6 = puVar5 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar6 = (uint *)((int)puVar5 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  puVar7 = (undefined1 *)((int)puVar6 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)));
  if (puVar7[-1] != '/') {
    *puVar7 = 0x2f;
    puVar7[1] = 0;
  }
  strcpy(&local_40c,&DAT_044daca0);
  pcVar8 = &local_40c;
  if (local_40c == '~') {
    pcVar8 = local_40b;
    local_40c = local_40b[0];
  }
  if (local_40c != '/') {
    FUN_0400a810("*ptr == \'/\'",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x13bc,"void OGLC_SetRootSavePath(const char*)");
  }
  pcVar8 = pcVar8 + 2;
  do {
    if (pcVar8[-1] == '/') {
      pcVar8[-1] = '\0';
      iVar3 = mkdir(&local_40c,0x1fd);
      if (iVar3 == -1) {
        piVar4 = __errno_location();
        iVar3 = *piVar4;
        if (iVar3 != 0x11) {
          if (iVar3 == 0x14) {
            printf("Path \'%s\' is not a folder!\n",&local_40c);
            return;
          }
          if (iVar3 == 2) {
            printf("Parent path to \'%s\' not found!\n",&local_40c);
            return;
          }
          if (iVar3 == 0xd) {
            printf("Couldn\'t create \'%s\' (permission denied). Hardcode your own default root folder in SetDefaultRootSavePath() in file openGlDebugFunctions.mm? It won\'t try to create it then.\n"
                   ,&local_40c);
            return;
          }
        }
      }
      pcVar8[-1] = '/';
      if (*pcVar8 == '\0') {
        return;
      }
    }
    pcVar8 = pcVar8 + 1;
  } while( true );
}

// --- OGLC_StopOnProgramUpdatePresent @0x040e0920 ---
/* source: openGlDebugFunctions */

void OGLC_StopOnProgramUpdatePresent(void)

{
  int iVar1;
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    puts("No valid OpenGL context in calling thread!.");
    return;
  }
  if (DAT_044dac80 == 0) {
    FUN_040d9ba0();
  }
  DAT_044db0a0 = 4;
  glGetIntegerv(0x8b8d,&DAT_044db0ac);
  iVar1 = glGetError();
  if (iVar1 == 0) {
    return;
  }
  FUN_0400a810("glGetError() == 0",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
               ,0x1543,"void OGLC_StopOnProgramUpdatePresent(int32_t)");
  return;
}

// --- OpenGLDebugEvent @0x040e0590 ---
/* source: openGlDebugFunctions */

void OpenGLDebugEvent(uint param_1,int param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  char local_c20 [1024];
  char local_820 [1024];
  char local_420 [1024];
  int local_20 [4];
  
  if (DAT_044dac80 == 0) {
    FUN_040d9ba0();
  }
  iVar3 = DAT_044db0a8;
  if (DAT_044db0a0 == 7) {
    if (param_1 != 3) {
      return;
    }
    puVar2 = &DAT_044daca0;
    if (DAT_044daca0 == '\0') {
      puVar2 = &DAT_04328763;
    }
    sprintf(local_c20,"%sbackbufferDump",puVar2);
    strcpy(local_820,&DAT_044daca0);
    OGLC_SetRootSavePath(local_c20);
    iVar3 = DAT_044db0a4;
    DAT_044db0a4 = DAT_044db0a4 + 1;
    sprintf(local_420,"/bb%d.tiff",iVar3);
    strcat(local_c20,local_420);
    openGlDebugFunctions_040d2a80(0,1);
    OGLC_SetRootSavePath(local_820);
    return;
  }
  if (DAT_044db0a0 == 5) {
    if (param_1 != 3) {
      return;
    }
    DAT_044db0a0 = 6;
    DAT_044db0a8 = 0;
    DAT_04408c90 = 0;
    FUN_0402cd10(0x14,"Frame dump started");
    puts("Frame dump started... please wait, this might take a minute for complicated frames.");
    return;
  }
  if (DAT_044db0a0 == 6) {
    DAT_044db0a8 = DAT_044db0a8 + 1;
    puVar2 = &DAT_044daca0;
    if (DAT_044daca0 == '\0') {
      puVar2 = &DAT_04328763;
    }
    sprintf(local_420,"%sframeDump/%08d/",puVar2,iVar3);
    FUN_0402cd10(0x14,"Frame dump - dumping event %u",DAT_044db0a8 + -1);
    OGLC_DumpDraw(local_420,param_1,param_2);
    if (param_1 != 3) {
      return;
    }
    FUN_0402cd10(0x14,"Frame dump finished");
    puts("Frame dump finished");
    DAT_04408c90 = 1;
    DAT_044db0a0 = 0;
    return;
  }
  iVar3 = DAT_044db0ac;
  if (DAT_044db0a0 == 4) {
    if (param_1 == 3) goto LAB_040e07df;
    if (1 < param_1) {
      return;
    }
    glGetIntegerv(0x8b8d,local_20);
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1519,"void OpenGLDebugEvent(uint32_t, const char*)");
    }
    iVar3 = local_20[0];
    if (DAT_044db0ac == local_20[0]) {
      return;
    }
  }
  DAT_044db0ac = iVar3;
  switch(DAT_044db0a0) {
  default:
    goto switchD_040e07b0_caseD_0;
  case 1:
    if ((param_1 != 3) && (1 < param_1)) {
      return;
    }
switchD_040e07b0_caseD_4:
    if (param_1 != 3) {
LAB_040e07d2:
      if (DAT_044db0b0 != 0) {
        DAT_044db0b0 = DAT_044db0b0 + -1;
switchD_040e07b0_caseD_0:
        return;
      }
    }
LAB_040e07df:
    if (param_2 != 0) {
      printf("Event: %s\n",param_2);
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 2:
    if ((param_1 == 3) || (param_1 < 2)) goto switchD_040e07b0_caseD_4;
    if (param_1 != 2) {
      return;
    }
    goto LAB_040e07d2;
  case 3:
    if (param_1 != 3) {
      return;
    }
    goto LAB_040e07df;
  case 4:
  case 7:
    goto switchD_040e07b0_caseD_4;
  }
}

// --- OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo @0x040d6f40 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo(uint param_1,char *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *__ptr;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  void *pvVar10;
  undefined **ppuVar11;
  float *pfVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  char *pcVar16;
  undefined2 *puVar17;
  float fVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_988;
  int local_97c;
  int local_978;
  size_t local_970;
  int local_96c;
  int local_95c;
  size_t local_958;
  uint local_954;
  uint local_94c [512];
  uint local_14c [5];
  undefined *local_138;
  undefined4 local_134;
  undefined *local_130;
  undefined1 local_12c;
  float local_4c [4];
  uint local_3c;
  undefined4 local_38;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20 [4];
  
  (*DAT_0451ed14)(0x8892,0x88bc,&local_30);
  iVar5 = glGetError();
  if (iVar5 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x379);
  }
  if (local_30 != 0) {
    printf("Can\'t map vertex array buffer %d, as it\'s currently mapped!.\n",param_1);
    return;
  }
  local_2c = 0;
  if (DAT_0451cad3 == '\0') {
    (*DAT_0451ed14)(0x8892,0x8764,&local_2c);
    iVar5 = glGetError();
    uVar20 = local_2c;
    if (iVar5 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x38b);
      uVar20 = local_2c;
    }
  }
  else {
    local_3c = 0;
    local_38 = 0;
    (*DAT_0451ea70)(0x8892,0x8764,&local_3c);
    iVar5 = glGetError();
    uVar20 = local_3c;
    if (iVar5 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x385);
      uVar20 = local_3c;
    }
  }
  local_2c = uVar20;
  if (DAT_0451ca55 != '\0') {
    iVar5 = (*DAT_0451e520)(0x8892,0,local_2c);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x392);
    }
    if (iVar5 == 0) {
      printf("Failed to map vertex array buffer %d through gl3MapBufferRange()!.\n",param_1);
    }
    else {
      local_28 = 0;
      glGetIntegerv(0x8869,&local_28);
      iVar6 = glGetError();
      if (iVar6 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x39c);
      }
      __ptr = malloc(local_28 * 0x1c);
      if (__ptr != (void *)0x0) {
        if (0 < local_28) {
          local_958 = 0;
          iVar6 = 0;
          bVar2 = true;
          local_954 = 0xffffffff;
          local_978 = -1;
          local_970 = -1;
          do {
            (*DAT_0451ec80)(iVar6,0x8622,&local_24);
            iVar7 = glGetError();
            if (iVar7 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0x3b3);
            }
            sVar9 = local_958;
            if (local_24 != 0) {
              (*DAT_0451ec80)(iVar6,0x889f,&local_24);
              iVar7 = glGetError();
              if (iVar7 != 0) {
                FUN_0400a810("glGetError() == 0",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                             ,0x3b8);
              }
              if (local_24 == param_1) {
                piVar19 = (int *)(local_958 * 0x1c + (int)__ptr);
                *piVar19 = iVar6;
                (*DAT_0451ec80)(iVar6,0x8623,piVar19 + 3);
                iVar7 = glGetError();
                if (iVar7 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x3c0);
                }
                (*DAT_0451ec80)(iVar6,0x8624,piVar19 + 1);
                iVar7 = glGetError();
                if (iVar7 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x3c2);
                }
                if (local_978 == -1) {
                  local_978 = piVar19[1];
                  bVar22 = false;
                }
                else {
                  bVar22 = piVar19[1] != local_978;
                }
                (*DAT_0451ec80)(iVar6,0x8625,piVar19 + 2);
                iVar7 = glGetError();
                if (iVar7 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x3ca);
                }
                (*DAT_0451ec80)(iVar6,0x886a,&local_24);
                iVar7 = glGetError();
                if (iVar7 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x3cc);
                }
                *(bool *)((int)piVar19 + 0x19) = local_24 != 0;
                (*DAT_0451ec8c)(iVar6,0x8645,local_20);
                iVar7 = glGetError();
                if (iVar7 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x3cf);
                }
                piVar19[4] = local_20[0];
                if (local_970 == -1) {
                  local_970 = (&DAT_044dac40)[iVar6];
                  bVar3 = bVar22;
                }
                else {
                  bVar3 = true;
                  if ((&DAT_044dac40)[iVar6] == local_970) {
                    bVar3 = bVar22;
                  }
                }
                piVar19[5] = local_20[0] - (&DAT_044dac40)[iVar6];
                (*DAT_0451ec80)(iVar6,0x88fd,&local_24);
                iVar7 = glGetError();
                if (iVar7 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x3d9);
                }
                *(bool *)(piVar19 + 6) = local_24 != 0;
                (*DAT_0451ec80)(iVar6,0x88fe,&local_24);
                iVar7 = glGetError();
                if (iVar7 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x3dd);
                }
                if (1 < local_24) {
                  printf("Vertex array buffer %d has non-typical divisor: %d\n",param_1,local_24);
                }
                *(bool *)((int)piVar19 + 0x1b) = local_24 != 0;
                uVar8 = (uint)(local_24 != 0);
                uVar20 = uVar8;
                if (((local_954 != 0xffffffff) && (uVar20 = local_954, uVar8 != local_954)) ||
                   (local_954 = uVar20, sVar9 = local_958 + 1, bVar3)) {
                  local_958 = local_958 + 1;
                  bVar2 = false;
                  sVar9 = local_958;
                }
              }
            }
            local_958 = sVar9;
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_28);
          if (local_958 != 0) {
            qsort(__ptr,local_958,0x1c,FUN_040cc450);
            if ((local_954 == 1) && (DAT_044dac20 != 0)) {
              local_988 = DAT_044dac20;
              local_97c = 0;
            }
            else {
              local_97c = DAT_044dac2c;
              local_988 = DAT_044dac28;
            }
            piVar19 = operator_new(0xc);
            *piVar19 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
            piVar19[1] = 0;
            piVar19[2] = 0;
            sVar9 = strlen(param_2);
            pvVar10 = malloc(sVar9 + 1);
            piVar19[1] = (int)pvVar10;
            memcpy(pvVar10,param_2,sVar9 + 1);
            (**(code **)*piVar19)
                      (piVar19,
                       "Vertex buffer %d, size %u, start vertex for the draw within buffer %u, vertex count for the draw %d:\n"
                       ,param_1,local_2c,local_97c,local_988);
            if (!bVar2) {
              (**(code **)*piVar19)
                        (piVar19,
                         "(different attributes of the same buffer are placed under different offset, or with different stride, so it\'s impossible to determine unused parts of vertex)\n"
                        );
            }
            (**(code **)*piVar19)
                      (piVar19,
                       "============================ VERTEX BUFFER INFO SET UP IN VERTEX ATTRIBS =======================================\n"
                      );
            local_970 = 0;
            local_96c = 0;
            pvVar10 = __ptr;
            do {
              *(undefined1 *)((int)pvVar10 + 0x1a) = 0;
              iVar6 = *(int *)((int)pvVar10 + 0x14);
              if (bVar2) {
                if (local_96c < iVar6) {
                  (**(code **)*piVar19)(piVar19,"\tOffset: %d - %d unidentified bytes\n",iVar6);
                  iVar6 = *(int *)((int)pvVar10 + 0x14);
                }
                else if (iVar6 < local_96c) {
                  (**(code **)*piVar19)
                            (piVar19,"\t\t%d BYTES ARE SHARED WITH THE FOLLOWING ATTRIBUTE!\n",
                             local_96c - iVar6);
                  iVar6 = *(int *)((int)pvVar10 + 0x14);
                }
              }
              ppuVar11 = &PTR_DAT_04302ae3;
              if (*(char *)((int)pvVar10 + 0x19) == '\0') {
                ppuVar11 = (undefined **)&DAT_04302ae7;
              }
              uVar20 = *(int *)((int)pvVar10 + 8) - 0x1401;
              pcVar16 = "!!!unknown!!!";
              if (uVar20 < 0xb) {
                pcVar16 = (&PTR_s_GL_UNSIGNED_BYTE_04308c60)[uVar20];
              }
              (**(code **)*piVar19)
                        (piVar19,
                         "\tOffset: %d (in buffer: %d ), Size: %d, type: %s, stride: %d, normalized: %s\n"
                         ,iVar6,*(undefined4 *)((int)pvVar10 + 0x10),
                         *(undefined4 *)((int)pvVar10 + 0xc),pcVar16,
                         *(undefined4 *)((int)pvVar10 + 4),ppuVar11);
              if (*(char *)((int)pvVar10 + 0x18) == '\0') {
                uVar20 = *(uint *)((int)pvVar10 + 0x14);
                uVar8 = *(uint *)((int)pvVar10 + 4);
                if (uVar8 < uVar20) goto LAB_040d768f;
              }
              else {
                (**(code **)*piVar19)
                          (piVar19,
                           "\t\tThis attribute has integer values, which are currently not handled or listed. Add code if you need them.\n"
                          );
                uVar20 = *(uint *)((int)pvVar10 + 0x14);
                *(undefined1 *)((int)pvVar10 + 0x1a) = 1;
                uVar8 = *(uint *)((int)pvVar10 + 4);
                if (uVar8 < uVar20) {
LAB_040d768f:
                  (**(code **)*piVar19)
                            (piVar19,
                             "\t\tTHIS ATTRIBUTE STARTS BEYOND THE END OF VERTEX DATA (OFFSET %d, VERTEX STRIDE %d)! IT WILL BE SKIPPED.\n"
                             ,uVar20);
                  printf("Vertex array buffer %d, vertex attrib at offset %d starts beyond end of vertex data (stride %d)!\n"
                         ,param_1,*(undefined4 *)((int)pvVar10 + 0x14));
                  *(undefined1 *)((int)pvVar10 + 0x1a) = 1;
                  uVar20 = *(uint *)((int)pvVar10 + 0x14);
                  uVar8 = *(uint *)((int)pvVar10 + 4);
                }
              }
              local_954 = 0;
              uVar15 = *(int *)((int)pvVar10 + 8) - 0x1401;
              if (uVar15 < 0xb) {
                local_954 = *(int *)((int)pvVar10 + 0xc) * *(int *)(&DAT_04308ca0 + uVar15 * 4);
              }
              local_96c = local_954 + uVar20;
              if ((int)uVar8 < local_96c) {
                (**(code **)*piVar19)
                          (piVar19,
                           "\t\tTHIS ATTRIBUTE ENDS BEYOND THE END OF VERTEX DATA (OFFSET %d, SIZE %d, VERTEX STRIDE %d)! IT WILL BE SKIPPED.\n"
                           ,uVar20);
                printf("Vertex array buffer %d, vertex attrib at offset %d ends beyond end of vertex data (stride %d)!\n"
                       ,param_1,*(undefined4 *)((int)pvVar10 + 0x14));
                *(undefined1 *)((int)pvVar10 + 0x1a) = 1;
                uVar8 = *(uint *)((int)pvVar10 + 4);
              }
              if (local_2c < local_97c * uVar8 + *(int *)((int)pvVar10 + 0x10)) {
                (**(code **)*piVar19)
                          (piVar19,
                           "\t\tVALUES FROM THIS ATTRIBUTE SUBMITTED FOR OPENGL TO DRAW START BEYOND BUFFER END! IT WILL BE SKIPPED.\n"
                          );
                *(undefined1 *)((int)pvVar10 + 0x1a) = 1;
                printf("Vertex array buffer %d, vertex attrib at offset %d - values from it submitted for OpenGL to draw start beyond buffer end!\n"
                       ,param_1,*(undefined4 *)((int)pvVar10 + 0x14));
              }
              else if (local_2c <
                       uVar8 * (local_97c + -1 + local_988) +
                       *(int *)((int)pvVar10 + 0x10) + local_954) {
                (**(code **)*piVar19)
                          (piVar19,
                           "\t\tVALUES FROM THIS ATTRIBUTE SUBMITTED FOR OPENGL TO DRAW EXTEND BEYOND BUFFER END! IT WILL BE SKIPPED.\n"
                          );
                printf("Vertex array buffer %d, vertex attrib at offset %d - values from it submitted for OpenGL to draw extend beyond buffer end!\n"
                       ,param_1,*(undefined4 *)((int)pvVar10 + 0x14));
                *(undefined1 *)((int)pvVar10 + 0x1a) = 1;
              }
              local_970 = local_970 + 1;
              pvVar10 = (void *)((int)pvVar10 + 0x1c);
              if (local_970 == local_958) {
                (**(code **)*piVar19)
                          (piVar19,
                           "================================= INTERPRETED VERTEX BUFFER CONTENTS ===========================================\n"
                          );
                if (0 < local_988) {
                  local_95c = 0;
                  do {
                    local_94c[0]._0_1_ = '\0';
                    sVar9 = 0;
                    pvVar10 = __ptr;
                    do {
                      if (*(char *)((int)pvVar10 + 0x1a) == '\0') {
                        if ((char)local_94c[0] == '\0') {
                          sprintf((char *)local_94c,"%08d: ",local_95c);
                        }
                        else {
                          puVar14 = local_94c;
                          do {
                            puVar13 = puVar14;
                            uVar8 = *puVar13 + 0xfefefeff & ~*puVar13;
                            uVar20 = uVar8 & 0x80808080;
                            puVar14 = puVar13 + 1;
                          } while (uVar20 == 0);
                          if ((uVar8 & 0x8080) == 0) {
                            puVar14 = (uint *)((int)puVar13 + 6);
                            uVar20 = uVar20 >> 0x10;
                          }
                          puVar17 = (undefined2 *)
                                    ((int)puVar14 + (-3 - (uint)CARRY1((byte)uVar20,(byte)uVar20)));
                          *puVar17 = 0x202c;
                          *(undefined1 *)(puVar17 + 1) = 0;
                        }
                        iVar21 = 0;
                        iVar6 = *(int *)((int)pvVar10 + 0xc);
                        uVar20 = *(int *)((int)pvVar10 + 8) - 0x1401;
                        iVar7 = (local_95c + local_97c) * *(int *)((int)pvVar10 + 4) +
                                *(int *)((int)pvVar10 + 0x10);
                        if (uVar20 < 0xb) {
                          iVar21 = *(int *)(&DAT_04308ca0 + uVar20 * 4) * iVar6;
                        }
                        if (local_2c < (uint)(iVar21 + iVar7)) {
                          local_14c[0] = 0x79656228;
                          local_14c[1] = 0x20646e6f;
                          local_14c[2] = 0x20646e65;
                          local_14c[3] = 0x6220666f;
                          local_14c[4] = 0x65666675;
                          local_138 = (undefined *)CONCAT13(local_138._3_1_,0x2972);
                        }
                        else {
                          pfVar12 = (float *)(iVar7 + iVar5);
                          switch(uVar20) {
                          case 0:
                            if (iVar6 == 1) {
LAB_040d809e:
                              sprintf((char *)local_14c,"%u");
                            }
                            else if (iVar6 == 2) {
                              uVar8 = (uint)*(byte *)((int)pfVar12 + 1);
                              uVar20 = (uint)*(byte *)pfVar12;
LAB_040d81b7:
                              sprintf((char *)local_14c,"{ %u, %u }",uVar20,uVar8);
                            }
                            else if (iVar6 == 3) {
                              uVar8 = (uint)*(byte *)((int)pfVar12 + 1);
                              uVar20 = (uint)*(byte *)pfVar12;
LAB_040d822b:
                              sprintf((char *)local_14c,"{ %u, %u, %u }",uVar20,uVar8);
                            }
                            else if (iVar6 == 4) {
                              uVar8 = (uint)*(byte *)((int)pfVar12 + 1);
                              uVar20 = (uint)*(byte *)pfVar12;
LAB_040d8001:
                              sprintf((char *)local_14c,"{ %u, %u, %u, %u }",uVar20,uVar8);
                            }
                            else {
                              local_14c[0] = 0x686e7528;
                              local_14c[1] = 0x6c646e61;
                              local_14c[2] = 0x75206465;
                              local_14c[3] = 0x6769736e;
                              local_14c[4] = 0x2064656e;
                              local_138 = (undefined *)0x72616863;
                              local_134 = 0x756f6320;
                              local_130 = &DAT_0029746e;
                            }
                            break;
                          case 1:
                            if (iVar6 == 1) {
                              sprintf((char *)local_14c,"%d",(int)(short)*(ushort *)pfVar12);
                            }
                            else if (iVar6 == 2) {
                              sprintf((char *)local_14c,"{ %d, %d }",(int)(short)*(ushort *)pfVar12,
                                      (int)(short)*(ushort *)((int)pfVar12 + 2));
                            }
                            else if (iVar6 == 3) {
                              sprintf((char *)local_14c,"{ %d, %d, %d }",
                                      (int)(short)*(ushort *)pfVar12,
                                      (int)(short)*(ushort *)((int)pfVar12 + 2),
                                      (int)(short)*(ushort *)(pfVar12 + 1));
                            }
                            else if (iVar6 == 4) {
                              sprintf((char *)local_14c,"{ %d, %d, %d, %d }",
                                      (int)(short)*(ushort *)pfVar12,
                                      (int)(short)*(ushort *)((int)pfVar12 + 2),
                                      (int)(short)*(ushort *)(pfVar12 + 1),
                                      (int)(short)*(ushort *)((int)pfVar12 + 6));
                            }
                            else {
                              local_14c[0] = 0x686e7528;
                              local_14c[1] = 0x6c646e61;
                              local_14c[2] = 0x73206465;
                              local_14c[3] = 0x74726f68;
                              local_14c[4] = 0x756f6320;
                              local_138 = &DAT_0029746e;
                            }
                            break;
                          case 2:
                            if (iVar6 == 1) goto LAB_040d809e;
                            if (iVar6 == 2) {
                              uVar8 = (uint)*(ushort *)((int)pfVar12 + 2);
                              uVar20 = (uint)*(ushort *)pfVar12;
                              goto LAB_040d81b7;
                            }
                            if (iVar6 == 3) {
                              uVar8 = (uint)*(ushort *)((int)pfVar12 + 2);
                              uVar20 = (uint)*(ushort *)pfVar12;
                              goto LAB_040d822b;
                            }
                            if (iVar6 == 4) {
                              uVar8 = (uint)*(ushort *)((int)pfVar12 + 2);
                              uVar20 = (uint)*(ushort *)pfVar12;
                              goto LAB_040d8001;
                            }
                            local_14c[0] = 0x686e7528;
                            local_14c[1] = 0x6c646e61;
                            local_14c[2] = 0x75206465;
                            local_14c[3] = 0x6769736e;
                            local_14c[4] = 0x2064656e;
                            local_138 = (undefined *)0x726f6873;
                            local_134 = 0x6f632074;
                            local_130 = (undefined *)0x29746e75;
                            local_12c = 0;
                            break;
                          default:
                            local_14c[0] = 0x686e7528;
                            local_14c[1] = 0x6c646e61;
                            local_14c[2] = 0x74206465;
                            local_14c[3] = 0x29657079;
                            local_14c[4] = local_14c[4] & 0xffffff00;
                            break;
                          case 5:
                            if (iVar6 == 1) {
                              fVar18 = *pfVar12;
LAB_040d80f5:
                              sprintf((char *)local_14c,"%f",(double)fVar18);
                            }
                            else {
                              if (iVar6 == 2) {
                                fVar24 = *pfVar12;
                                fVar18 = pfVar12[1];
                                goto LAB_040d813d;
                              }
                              if (iVar6 == 3) {
                                fVar25 = *pfVar12;
                                fVar18 = pfVar12[1];
                                fVar24 = pfVar12[2];
                                goto LAB_040d82c3;
                              }
                              if (iVar6 != 4) goto LAB_040d7c01;
                              fVar23 = *pfVar12;
                              fVar18 = pfVar12[1];
                              fVar24 = pfVar12[2];
                              fVar25 = pfVar12[3];
LAB_040d7cda:
                              sprintf((char *)local_14c,"{ %f, %f, %f, %f }",(double)fVar23,
                                      (double)fVar18,(double)fVar24,(double)fVar25);
                            }
                            break;
                          case 10:
                            iVar7 = 0;
                            if (0 < iVar6) {
                              do {
                                uVar1 = *(ushort *)((int)pfVar12 + iVar7 * 2);
                                uVar20 = uVar1 & 0x3ff;
                                uVar8 = (uint)(uVar1 >> 0xf);
                                uVar15 = (int)(uint)uVar1 >> 10 & 0x1f;
                                if (uVar15 == 0) {
                                  fVar18 = (float)(uVar8 << 0x1f);
                                  uVar4 = uVar15;
                                  if ((uVar1 & 0x3ff) != 0) {
                                    do {
                                      uVar15 = uVar4;
                                      uVar20 = uVar20 * 2;
                                      uVar4 = uVar15 - 1;
                                    } while ((uVar20 & 0x400) == 0);
                                    uVar20 = uVar20 & 0xfffffbff;
LAB_040d7c5f:
                                    fVar18 = (float)(uVar20 << 0xd | uVar8 << 0x1f |
                                                    (uVar15 + 0x70) * 0x800000);
                                  }
                                }
                                else {
                                  if (uVar15 != 0x1f) goto LAB_040d7c5f;
                                  uVar8 = uVar8 << 0x1f;
                                  if ((uVar1 & 0x3ff) != 0) {
                                    uVar8 = uVar8 | uVar20 << 0xd;
                                  }
                                  fVar18 = (float)(uVar8 | 0x7f800000);
                                }
                                local_4c[iVar7] = fVar18;
                                iVar7 = iVar7 + 1;
                              } while (iVar7 != iVar6);
                              fVar18 = local_4c[0];
                              if (iVar7 == 1) goto LAB_040d80f5;
                            }
                            fVar24 = local_4c[0];
                            fVar18 = local_4c[1];
                            if (iVar6 == 2) {
LAB_040d813d:
                              sprintf((char *)local_14c,"{ %f, %f }",(double)fVar24,(double)fVar18);
                            }
                            else {
                              fVar25 = local_4c[0];
                              fVar24 = local_4c[2];
                              if (iVar6 == 3) {
LAB_040d82c3:
                                sprintf((char *)local_14c,"{ %f, %f, %f }",(double)fVar25,
                                        (double)fVar18,(double)fVar24);
                              }
                              else {
                                fVar23 = local_4c[0];
                                fVar25 = local_4c[3];
                                if (iVar6 == 4) goto LAB_040d7cda;
LAB_040d7c01:
                                local_14c[0] = 0x686e7528;
                                local_14c[1] = 0x6c646e61;
                                local_14c[2] = 0x66206465;
                                local_14c[3] = 0x74616f6c;
                                local_14c[4] = 0x756f6320;
                                local_138 = &DAT_0029746e;
                              }
                            }
                          }
                        }
                        puVar14 = local_14c;
                        do {
                          puVar13 = puVar14;
                          uVar8 = *puVar13 + 0xfefefeff & ~*puVar13;
                          uVar20 = uVar8 & 0x80808080;
                          puVar14 = puVar13 + 1;
                        } while (uVar20 == 0);
                        if ((uVar8 & 0x8080) == 0) {
                          puVar14 = (uint *)((int)puVar13 + 6);
                          uVar20 = uVar20 >> 0x10;
                        }
                        if (0xff < (int)puVar14 +
                                   ((-3 - (uint)CARRY1((byte)uVar20,(byte)uVar20)) - (int)local_14c)
                           ) {
                          FUN_0400a810("strlen(valueBuffer) < sizeof(valueBuffer)",
                                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                                      );
                        }
                        strcat((char *)local_94c,(char *)local_14c);
                      }
                      sVar9 = sVar9 + 1;
                      pvVar10 = (void *)((int)pvVar10 + 0x1c);
                    } while (sVar9 != local_958);
                    puVar14 = local_94c;
                    do {
                      puVar13 = puVar14;
                      uVar8 = *puVar13 + 0xfefefeff & ~*puVar13;
                      uVar20 = uVar8 & 0x80808080;
                      puVar14 = puVar13 + 1;
                    } while (uVar20 == 0);
                    if ((uVar8 & 0x8080) == 0) {
                      puVar14 = (uint *)((int)puVar13 + 6);
                      uVar20 = uVar20 >> 0x10;
                    }
                    uVar20 = (int)puVar14 +
                             ((-3 - (uint)CARRY1((byte)uVar20,(byte)uVar20)) - (int)local_94c);
                    if (0x7ff < uVar20) {
                      FUN_0400a810("strlen( lineBuffer ) < sizeof( lineBuffer)",
                                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                                  );
                      puVar14 = local_94c;
                      do {
                        puVar13 = puVar14;
                        uVar8 = *puVar13 + 0xfefefeff & ~*puVar13;
                        uVar20 = uVar8 & 0x80808080;
                        puVar14 = puVar13 + 1;
                      } while (uVar20 == 0);
                      if ((uVar8 & 0x8080) == 0) {
                        puVar14 = (uint *)((int)puVar13 + 6);
                        uVar20 = uVar20 >> 0x10;
                      }
                      uVar20 = (int)puVar14 +
                               ((-3 - (uint)CARRY1((byte)uVar20,(byte)uVar20)) - (int)local_94c);
                    }
                    *(undefined2 *)((int)local_94c + uVar20) = 10;
                    (**(code **)*piVar19)(piVar19,local_94c);
                    local_94c[0]._0_1_ = 0;
                    local_95c = local_95c + 1;
                  } while (local_95c != local_988);
                }
                (**(code **)*piVar19)
                          (piVar19,
                           "================================================================================================================\n"
                          );
                (**(code **)(*piVar19 + 0xc))(piVar19);
                (*DAT_0451ecf0)(0x8892);
                iVar5 = glGetError();
                if (iVar5 != 0) {
                  FUN_0400a810("glGetError() == 0",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x4cb,
                               "void OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo(GLint, const char*)"
                              );
                }
                free(__ptr);
                return;
              }
            } while( true );
          }
        }
        (*DAT_0451ecf0)(0x8892);
        iVar5 = glGetError();
        if (iVar5 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x3f0,
                       "void OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo(GLint, const char*)"
                      );
        }
        free(__ptr);
        printf("Vertex array buffer %d isn\'t bound to any vertex attribs, so can\'t interpret it!\n"
               ,param_1);
        return;
      }
      (*DAT_0451ecf0)(0x8892);
      iVar5 = glGetError();
      if (iVar5 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x3a2,
                     "void OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo(GLint, const char*)"
                    );
      }
      puts("Failed to allocate memory for vertex attrib info table!");
    }
  }
  return;
}

// --- OpenGL_LogState_BoundSampler @0x040d63e0 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_BoundSampler(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [4];
  
  glGetIntegerv(0x84e0,&local_2c);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb2c,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
  }
  iVar2 = param_2 + 0x84c0;
  if (iVar2 != local_2c) {
    (*DAT_0451eeac)(iVar2);
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xb31,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
    }
  }
  glGetIntegerv(0x8068,&local_28);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb38,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
  }
  bVar1 = local_28 != 0;
  if (bVar1) {
    (**(code **)*param_1)(param_1,"Unit %2d : GL_TEXTURE_BINDING_1D: %d\n",param_2,local_28);
    OpenGL_LogState_BoundTexture();
  }
  glGetIntegerv(0x8069,&local_28);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb40,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
  }
  bVar5 = local_28 != 0;
  if (bVar5) {
    (**(code **)*param_1)(param_1,"Unit %2d : GL_TEXTURE_BINDING_2D: %d\n",param_2,local_28);
    OpenGL_LogState_BoundTexture();
  }
  glGetIntegerv(0x806a,&local_28);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb48,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
  }
  bVar6 = local_28 != 0;
  if (bVar6) {
    (**(code **)*param_1)(param_1,"Unit %2d : GL_TEXTURE_BINDING_3D: %d\n",param_2,local_28);
    OpenGL_LogState_BoundTexture();
  }
  glGetIntegerv(0x8514,&local_28);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb50,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
  }
  if (local_28 == 0) {
    if (!bVar6 && (!bVar5 && !bVar1)) goto LAB_040d64db;
  }
  else {
    (**(code **)*param_1)(param_1,"Unit %2d : GL_TEXTURE_BINDING_CUBE_MAP: %d\n",param_2,local_28);
    OpenGL_LogState_BoundTexture();
  }
  if (DAT_0451ca41 == '\0') goto LAB_040d64db;
  glGetIntegerv(0x8919,&local_28);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb5d,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
  }
  if (local_28 == 0) goto LAB_040d64db;
  (**(code **)*param_1)(param_1,"Unit %2d : GL_SAMPLER_BINDING: %d\n",param_2,local_28);
  (*DAT_0451e3b0)(local_28,0x1004,&local_3c);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xae2,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)
            (param_1,"\tGL_TEXTURE_BORDER_COLOR: ( %f, %f, %f, %f )\n",(double)local_3c,
             (double)local_38,(double)local_34,(double)local_30);
  (*DAT_0451e3ac)(local_28,0x2801,&local_24);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xae7,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  pcVar4 = "GL_NEAREST_MIPMAP_NEAREST";
  if (local_24 != 0x2700) {
    if (local_24 < 0x2701) {
      pcVar4 = "GL_NEAREST";
      if ((local_24 != 0x2600) && (pcVar4 = "GL_LINEAR", local_24 != 0x2601)) {
LAB_040d6635:
        pcVar4 = "!!!unknown!!!";
      }
    }
    else {
      pcVar4 = "GL_NEAREST_MIPMAP_LINEAR";
      if (((local_24 != 0x2702) && (pcVar4 = "GL_LINEAR_MIPMAP_NEAREST", 0x2701 < local_24)) &&
         (pcVar4 = "GL_LINEAR_MIPMAP_LINEAR", local_24 != 0x2703)) goto LAB_040d6635;
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MIN_FILTER: %s\n",pcVar4);
  (*DAT_0451e3ac)(local_28,0x2800,&local_24);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaeb,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  pcVar4 = "GL_NEAREST_MIPMAP_NEAREST";
  if (local_24 != 0x2700) {
    if (local_24 < 0x2701) {
      pcVar4 = "GL_NEAREST";
      if ((local_24 != 0x2600) && (pcVar4 = "GL_LINEAR", local_24 != 0x2601)) {
LAB_040d66aa:
        pcVar4 = "!!!unknown!!!";
      }
    }
    else {
      pcVar4 = "GL_NEAREST_MIPMAP_LINEAR";
      if (((local_24 != 0x2702) && (pcVar4 = "GL_LINEAR_MIPMAP_NEAREST", 0x2701 < local_24)) &&
         (pcVar4 = "GL_LINEAR_MIPMAP_LINEAR", local_24 != 0x2703)) goto LAB_040d66aa;
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MAG_FILTER: %s\n",pcVar4);
  (*DAT_0451e3ac)(local_28,0x2802,&local_24);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaef,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  pcVar4 = "GL_CLAMP_TO_EDGE";
  if (local_24 != 0x812f) {
    if (local_24 < 0x8130) {
      pcVar4 = "GL_REPEAT";
      if ((local_24 != 0x2901) && (pcVar4 = "GL_CLAMP_TO_BORDER", local_24 != 0x812d)) {
LAB_040d671a:
        pcVar4 = "!!!unknown!!!";
      }
    }
    else {
      pcVar4 = "GL_MIRRORED_REPEAT";
      if ((local_24 != 0x8370) && (pcVar4 = "GL_MIRROR_CLAMP_EXT", local_24 != 0x8742))
      goto LAB_040d671a;
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_WRAP_S: %s\n",pcVar4);
  (*DAT_0451e3ac)(local_28,0x2803,&local_24);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaf3,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  pcVar4 = "GL_CLAMP_TO_EDGE";
  if (local_24 != 0x812f) {
    if (local_24 < 0x8130) {
      pcVar4 = "GL_REPEAT";
      if ((local_24 != 0x2901) && (pcVar4 = "GL_CLAMP_TO_BORDER", local_24 != 0x812d)) {
LAB_040d6789:
        pcVar4 = "!!!unknown!!!";
      }
    }
    else {
      pcVar4 = "GL_MIRRORED_REPEAT";
      if ((local_24 != 0x8370) && (pcVar4 = "GL_MIRROR_CLAMP_EXT", local_24 != 0x8742))
      goto LAB_040d6789;
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_WRAP_T: %s\n",pcVar4);
  (*DAT_0451e3ac)(local_28,0x8072,&local_24);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaf7,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  pcVar4 = "GL_CLAMP_TO_EDGE";
  if (local_24 != 0x812f) {
    if (local_24 < 0x8130) {
      pcVar4 = "GL_REPEAT";
      if ((local_24 != 0x2901) && (pcVar4 = "GL_CLAMP_TO_BORDER", local_24 != 0x812d)) {
LAB_040d67f8:
        pcVar4 = "!!!unknown!!!";
      }
    }
    else {
      pcVar4 = "GL_MIRRORED_REPEAT";
      if ((local_24 != 0x8370) && (pcVar4 = "GL_MIRROR_CLAMP_EXT", local_24 != 0x8742))
      goto LAB_040d67f8;
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_WRAP_R: %s\n",pcVar4);
  (*DAT_0451e3b0)(local_28,0x813a,local_20);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xafc,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MIN_LOD: %f\n",(double)local_20[0]);
  (*DAT_0451e3b0)(local_28,0x813b,local_20);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb00,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MAX_LOD: %f\n",(double)local_20[0]);
  (*DAT_0451e3b0)(local_28,0x8501,local_20);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb04,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_LOD_BIAS: %f\n",(double)local_20[0]);
  (*DAT_0451e3ac)(local_28,0x884c,&local_24);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb08,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  if (local_24 == 0) {
    (**(code **)*param_1)(param_1,"\tGL_TEXTURE_COMPARE_MODE: GL_NONE\n");
  }
  else {
    (**(code **)*param_1)(param_1,"\tGL_TEXTURE_COMPARE_MODE: unknown value ( %#x )\n",local_24);
    (*DAT_0451e3ac)(local_28,0x884d,&local_24);
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xb0d,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
    }
    pcVar4 = "!!!unknown!!!";
    if (local_24 - 0x200U < 8) {
      pcVar4 = (&PTR_s_GL_NEVER_043081c0)[local_24 - 0x200U];
    }
    (**(code **)*param_1)(param_1,"\t\tGL_TEXTURE_COMPARE_FUNC: %s\n",pcVar4);
  }
  (*DAT_0451e3ac)(local_28,0x8a48,&local_24);
  iVar3 = glGetError();
  if (iVar3 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xb14,"void OpenGL_LogState_BoundSampler(OpenGlDebugWriter*, GLint)");
  }
  pcVar4 = "GL_DECODE_EXT";
  if ((local_24 != 0x8a49) && (pcVar4 = "GL_SKIP_DECODE_EXT", local_24 != 0x8a4a)) {
    pcVar4 = "!!!unknown!!!";
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_SRGB_DECODE_EXT: %s\n",pcVar4);
  (**(code **)*param_1)(param_1,"\t\n");
LAB_040d64db:
  if (iVar2 != local_2c) {
    (*DAT_0451eeac)(local_2c);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xb69,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
      return;
    }
  }
  return;
}

// --- OpenGL_LogState_BoundTexLevel @0x040d4890 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_BoundTexLevel(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *local_30;
  int local_20 [4];
  
  (*DAT_0451eec8)(param_1,param_2,0x1000,param_3);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9c6,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  (*DAT_0451eec8)(param_1,param_2,0x1001,param_3 + 4);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9c8,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  (*DAT_0451eec8)(param_1,param_2,0x8071,param_3 + 8);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9ca,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  if (DAT_0451ca13 == '\0') {
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined1 *)(param_3 + 0x10) = 0;
  }
  else {
    (*DAT_0451eec8)(param_1,param_2,0x9106,param_3 + 0xc);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x9d0,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
    (*DAT_0451eec8)(param_1,param_2,0x9107,local_20);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x9d3,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
    *(bool *)(param_3 + 0x10) = local_20[0] != 0;
  }
  local_30 = local_20;
  (*DAT_0451eec8)(param_1,param_2,0x1003,param_3 + 0x14);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9dd,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  (*DAT_0451eec8)(param_1,param_2,0x805c,param_3 + 0x18);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9df,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    *(undefined4 *)(param_3 + 0x34) = 0;
  }
  else {
    (*DAT_0451eec8)(param_1,param_2,0x8c10,param_3 + 0x34);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x9e3,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
  }
  (*DAT_0451eec8)(param_1,param_2,0x805d,param_3 + 0x1c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9e8,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  if (*(int *)(param_3 + 0x1c) == 0) {
    *(undefined4 *)(param_3 + 0x38) = 0;
  }
  else {
    (*DAT_0451eec8)(param_1,param_2,0x8c11,param_3 + 0x38);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x9ec,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
  }
  (*DAT_0451eec8)(param_1,param_2,0x805e,param_3 + 0x20);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9f1,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  if (*(int *)(param_3 + 0x20) == 0) {
    *(undefined4 *)(param_3 + 0x3c) = 0;
  }
  else {
    (*DAT_0451eec8)(param_1,param_2,0x8c12,param_3 + 0x3c);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x9f5,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
  }
  (*DAT_0451eec8)(param_1,param_2,0x805f,param_3 + 0x24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x9fa,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  if (*(int *)(param_3 + 0x24) == 0) {
    *(undefined4 *)(param_3 + 0x40) = 0;
  }
  else {
    (*DAT_0451eec8)(param_1,param_2,0x8c13,param_3 + 0x40);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x9fe,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
  }
  (*DAT_0451eec8)(param_1,param_2,0x884a,param_3 + 0x28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa03,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  if (*(int *)(param_3 + 0x28) == 0) {
    *(undefined4 *)(param_3 + 0x44) = 0;
  }
  else {
    (*DAT_0451eec8)(param_1,param_2,0x8c16,param_3 + 0x44);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xa07,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
  }
  (*DAT_0451eec8)(param_1,param_2,0x88f1,param_3 + 0x2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa0c,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  (*DAT_0451eec8)(param_1,param_2,0x8c3f,param_3 + 0x30);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa0e,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  (*DAT_0451eec8)(param_1,param_2,0x86a1,local_30);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa11,
                 "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                );
  }
  *(bool *)(param_3 + 0x48) = local_20[0] != 0;
  if (local_20[0] != 0) {
    (*DAT_0451eec8)(param_1,param_2,0x86a0,param_3 + 0x4c);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xa16,
                   "void OpenGL_LogState_BoundTexLevel(OpenGlDebugWriter*, GLenum, int32_t, TexLevelInfo*)"
                  );
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x4c) = 0;
  }
  *(undefined4 *)(param_3 + 0x50) = 0;
  return;
}

// --- OpenGL_LogState_BoundTexture @0x040d59d0 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_BoundTexture(undefined4 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20 [4];
  
  glGetTexParameterfv(param_2,0x1004,&local_3c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa91,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  (**(code **)*param_1)
            (param_1,"\tGL_TEXTURE_BORDER_COLOR: ( %f, %f, %f, %f )\n",(double)local_3c,
             (double)local_38,(double)local_34,(double)local_30);
  glGetTexParameteriv(param_2,0x2801,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa96,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  pcVar2 = "GL_NEAREST_MIPMAP_NEAREST";
  if (local_2c != 0x2700) {
    if (local_2c < 0x2701) {
      pcVar2 = "GL_NEAREST";
      if ((local_2c != 0x2600) && (pcVar2 = "GL_LINEAR", local_2c != 0x2601)) goto LAB_040d6102;
    }
    else {
      pcVar2 = "GL_NEAREST_MIPMAP_LINEAR";
      if ((local_2c != 0x2702) &&
         ((pcVar2 = "GL_LINEAR_MIPMAP_NEAREST", 0x2701 < local_2c &&
          (pcVar2 = "GL_LINEAR_MIPMAP_LINEAR", local_2c != 0x2703)))) {
LAB_040d6102:
        pcVar2 = "!!!unknown!!!";
      }
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MIN_FILTER: %s\n",pcVar2);
  glGetTexParameteriv(param_2,0x2800,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa99,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  pcVar2 = "GL_NEAREST_MIPMAP_NEAREST";
  if (local_2c != 0x2700) {
    if (local_2c < 0x2701) {
      pcVar2 = "GL_NEAREST";
      if ((local_2c == 0x2600) || (pcVar2 = "GL_LINEAR", local_2c == 0x2601)) goto LAB_040d5b08;
    }
    else {
      pcVar2 = "GL_NEAREST_MIPMAP_LINEAR";
      if ((local_2c == 0x2702) ||
         ((pcVar2 = "GL_LINEAR_MIPMAP_NEAREST", local_2c < 0x2702 ||
          (pcVar2 = "GL_LINEAR_MIPMAP_LINEAR", local_2c == 0x2703)))) goto LAB_040d5b08;
    }
    pcVar2 = "!!!unknown!!!";
  }
LAB_040d5b08:
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MAG_FILTER: %s\n",pcVar2);
  glGetTexParameteriv(param_2,0x2802,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa9c,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  pcVar2 = "GL_CLAMP_TO_EDGE";
  if (local_2c != 0x812f) {
    if (local_2c < 0x8130) {
      pcVar2 = "GL_REPEAT";
      if ((local_2c != 0x2901) && (pcVar2 = "GL_CLAMP_TO_BORDER", local_2c != 0x812d)) {
        pcVar2 = "!!!unknown!!!";
      }
    }
    else {
      pcVar2 = "GL_MIRRORED_REPEAT";
      if ((local_2c != 0x8370) && (pcVar2 = "GL_MIRROR_CLAMP_EXT", local_2c != 0x8742)) {
        pcVar2 = "!!!unknown!!!";
      }
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_WRAP_S: %s\n",pcVar2);
  glGetTexParameteriv(param_2,0x2803,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xa9f,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  pcVar2 = "GL_CLAMP_TO_EDGE";
  if (local_2c != 0x812f) {
    if (local_2c < 0x8130) {
      pcVar2 = "GL_REPEAT";
      if ((local_2c != 0x2901) && (pcVar2 = "GL_CLAMP_TO_BORDER", local_2c != 0x812d)) {
        pcVar2 = "!!!unknown!!!";
      }
    }
    else {
      pcVar2 = "GL_MIRRORED_REPEAT";
      if ((local_2c != 0x8370) && (pcVar2 = "GL_MIRROR_CLAMP_EXT", local_2c != 0x8742)) {
        pcVar2 = "!!!unknown!!!";
      }
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_WRAP_T: %s\n",pcVar2);
  glGetTexParameteriv(param_2,0x8072,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaa2,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  pcVar2 = "GL_CLAMP_TO_EDGE";
  if (local_2c != 0x812f) {
    if (local_2c < 0x8130) {
      pcVar2 = "GL_REPEAT";
      if ((local_2c != 0x2901) && (pcVar2 = "GL_CLAMP_TO_BORDER", local_2c != 0x812d)) {
        pcVar2 = "!!!unknown!!!";
      }
    }
    else {
      pcVar2 = "GL_MIRRORED_REPEAT";
      if ((local_2c != 0x8370) && (pcVar2 = "GL_MIRROR_CLAMP_EXT", local_2c != 0x8742)) {
        pcVar2 = "!!!unknown!!!";
      }
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_WRAP_R: %s\n",pcVar2);
  glGetTexParameterfv(param_2,0x813a,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaa7,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MIN_LOD: %f\n",(double)local_28);
  glGetTexParameterfv(param_2,0x813b,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaaa,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MAX_LOD: %f\n",(double)local_28);
  glGetTexParameteriv(param_2,0x813c,&local_24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaaf,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_BASE_LEVEL: %d\n",local_24);
  glGetTexParameteriv(param_2,0x813d,local_20);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xab3,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_MAX_LEVEL: %d\n",local_20[0]);
  glGetTexParameterfv(param_2,0x8501,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xab7,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_LOD_BIAS: %f\n",(double)local_28);
  glGetTexParameteriv(param_2,0x884c,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xabb,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  if (local_2c != 0) {
    if (local_2c == 0x884e) {
      (**(code **)*param_1)(param_1,"\tGL_TEXTURE_COMPARE_MODE: GL_COMPARE_R_TO_TEXTURE\n");
      glGetTexParameteriv(param_2,0x884d,&local_2c);
      iVar1 = glGetError();
      if (iVar1 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xac4,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
      }
      pcVar2 = "!!!unknown!!!";
      if (local_2c - 0x200U < 8) {
        pcVar2 = (&PTR_s_GL_NEVER_043081c0)[local_2c - 0x200U];
      }
      (**(code **)*param_1)(param_1,"\tGL_TEXTURE_COMPARE_FUNC: %s\n",pcVar2);
    }
    else {
      (**(code **)*param_1)(param_1,"\tGL_TEXTURE_COMPARE_MODE: unknown value ( %#x )\n",local_2c);
    }
  }
  glGetTexParameteriv(param_2,0x8a48,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xaca,"void OpenGL_LogState_BoundTexture(OpenGlDebugWriter*, GLenum)");
  }
  pcVar2 = "GL_DECODE_EXT";
  if ((local_2c != 0x8a49) && (pcVar2 = "GL_SKIP_DECODE_EXT", local_2c != 0x8a4a)) {
    pcVar2 = "!!!unknown!!!";
  }
  (**(code **)*param_1)(param_1,"\tGL_TEXTURE_SRGB_DECODE_EXT: %s\n",pcVar2);
  (**(code **)*param_1)(param_1,"\t\n");
  if (local_20[0] < local_24) {
    (**(code **)*param_1)(param_1,"\tBase texture level > max level, data makes no sense!\n\t\n");
    return;
  }
  if (param_2 == 0x8513) {
    (**(code **)*param_1)(param_1,"\tTexture face: %s\n\t\n","GL_TEXTURE_CUBE_MAP_POSITIVE_X");
    OpenGL_LogState_CompressedTexture(local_20[0]);
    (**(code **)*param_1)(param_1,"\tTexture face: %s\n\t\n","GL_TEXTURE_CUBE_MAP_NEGATIVE_X");
    OpenGL_LogState_CompressedTexture(local_20[0]);
    (**(code **)*param_1)(param_1,"\tTexture face: %s\n\t\n","GL_TEXTURE_CUBE_MAP_POSITIVE_Y");
    OpenGL_LogState_CompressedTexture(local_20[0]);
    (**(code **)*param_1)(param_1,"\tTexture face: %s\n\t\n","GL_TEXTURE_CUBE_MAP_NEGATIVE_Y");
    OpenGL_LogState_CompressedTexture(local_20[0]);
    (**(code **)*param_1)(param_1,"\tTexture face: %s\n\t\n","GL_TEXTURE_CUBE_MAP_POSITIVE_Z");
    OpenGL_LogState_CompressedTexture(local_20[0]);
    (**(code **)*param_1)(param_1,"\tTexture face: %s\n\t\n","GL_TEXTURE_CUBE_MAP_NEGATIVE_Z");
    OpenGL_LogState_CompressedTexture(local_20[0]);
    return;
  }
  OpenGL_LogState_CompressedTexture(local_20[0]);
  return;
}

// --- OpenGL_LogState_Buffer @0x040cff20 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_Buffer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  bool bVar5;
  char local_d2 [4];
  undefined4 auStack_ce [3];
  undefined4 auStack_c2 [2];
  undefined4 uStack_ba;
  undefined1 auStack_b6 [122];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20 [4];
  
  (**(code **)*param_1)(param_1,"Buffer ID: %d\n",param_3);
  local_3c = 0;
  local_38 = 0;
  (*DAT_0451ea70)(param_2,0x8764,&local_3c);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd29,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
  }
  (**(code **)*param_1)(param_1,"\tGL_BUFFER_SIZE: %lld\n",local_3c,local_38);
  (*DAT_0451ed14)(param_2,0x8765,&local_24);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd2c,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
  }
  pcVar3 = "!!!unknown!!!";
  if (local_24 - 0x88e0 < 0xb) {
    pcVar3 = (&PTR_s_GL_STREAM_DRAW_043089c0)[local_24 - 0x88e0];
  }
  (**(code **)*param_1)(param_1,"\tGL_BUFFER_USAGE: %s\n",pcVar3);
  (*DAT_0451ed14)(param_2,0x88bb,&local_24);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd2f,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
  }
  pcVar3 = "!!!unknown!!!";
  if (local_24 - 35000 < 3) {
    pcVar3 = (&PTR_s_GL_READ_ONLY_043089ec)[local_24 - 35000];
  }
  (**(code **)*param_1)(param_1,"\tGL_BUFFER_ACCESS: %s\n",pcVar3);
  (*DAT_0451ed14)(param_2,0x911f,&local_24);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd32,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
  }
  uVar1 = local_24;
  local_d2[0] = '\0';
  bVar5 = (local_24 & 1) != 0;
  if (bVar5) {
    sVar4 = strlen(local_d2);
    builtin_strncpy(local_d2 + sVar4,"GL_M",4);
    *(undefined4 *)((int)auStack_ce + sVar4) = 0x525f5041;
    *(undefined4 *)((int)auStack_ce + sVar4 + 4) = 0x5f444145;
    *(undefined **)((int)auStack_ce + sVar4 + 8) = &DAT_00544942;
  }
  bVar5 = !bVar5;
  if ((uVar1 & 2) != 0) {
    if (!bVar5) {
      sVar4 = strlen(local_d2);
      pcVar3 = local_d2 + sVar4;
      pcVar3[0] = '|';
      pcVar3[1] = '\0';
    }
    sVar4 = strlen(local_d2);
    builtin_strncpy(local_d2 + sVar4,"GL_M",4);
    *(undefined4 *)((int)auStack_ce + sVar4) = 0x575f5041;
    *(undefined4 *)((int)auStack_ce + sVar4 + 4) = 0x45544952;
    *(undefined4 *)((int)auStack_ce + sVar4 + 8) = 0x5449425f;
    *(undefined1 *)((int)auStack_c2 + sVar4) = 0;
    bVar5 = false;
  }
  if ((uVar1 & 4) != 0) {
    if (!bVar5) {
      sVar4 = strlen(local_d2);
      pcVar3 = local_d2 + sVar4;
      pcVar3[0] = '|';
      pcVar3[1] = '\0';
    }
    sVar4 = strlen(local_d2);
    builtin_strncpy(local_d2 + sVar4,"GL_M",4);
    *(undefined4 *)((int)auStack_ce + sVar4) = 0x495f5041;
    *(undefined4 *)((int)auStack_ce + sVar4 + 4) = 0x4c41564e;
    *(undefined4 *)((int)auStack_ce + sVar4 + 8) = 0x54414449;
    *(undefined4 *)((int)auStack_c2 + sVar4) = 0x41525f45;
    *(undefined4 *)((int)auStack_c2 + sVar4 + 4) = 0x5f45474e;
    *(undefined **)((int)&uStack_ba + sVar4) = &DAT_00544942;
    bVar5 = false;
  }
  if ((uVar1 & 8) != 0) {
    if (!bVar5) {
      sVar4 = strlen(local_d2);
      pcVar3 = local_d2 + sVar4;
      pcVar3[0] = '|';
      pcVar3[1] = '\0';
    }
    sVar4 = strlen(local_d2);
    builtin_strncpy(local_d2 + sVar4,"GL_M",4);
    *(undefined4 *)((int)auStack_ce + sVar4) = 0x495f5041;
    *(undefined4 *)((int)auStack_ce + sVar4 + 4) = 0x4c41564e;
    *(undefined4 *)((int)auStack_ce + sVar4 + 8) = 0x54414449;
    *(undefined4 *)((int)auStack_c2 + sVar4) = 0x55425f45;
    *(undefined4 *)((int)auStack_c2 + sVar4 + 4) = 0x52454646;
    *(undefined4 *)((int)&uStack_ba + sVar4) = 0x5449425f;
    auStack_b6[sVar4] = 0;
    bVar5 = false;
  }
  if ((uVar1 & 0x10) != 0) {
    if (!bVar5) {
      sVar4 = strlen(local_d2);
      pcVar3 = local_d2 + sVar4;
      pcVar3[0] = '|';
      pcVar3[1] = '\0';
    }
    sVar4 = strlen(local_d2);
    builtin_strncpy(local_d2 + sVar4,"GL_M",4);
    *(undefined4 *)((int)auStack_ce + sVar4) = 0x465f5041;
    *(undefined4 *)((int)auStack_ce + sVar4 + 4) = 0x4853554c;
    *(undefined4 *)((int)auStack_ce + sVar4 + 8) = 0x5058455f;
    *(undefined4 *)((int)auStack_c2 + sVar4) = 0x4943494c;
    *(undefined4 *)((int)auStack_c2 + sVar4 + 4) = 0x49425f54;
    *(undefined2 *)((int)&uStack_ba + sVar4) = 0x54;
    bVar5 = false;
  }
  if ((uVar1 & 0x20) == 0) {
    if (bVar5) {
      sVar4 = strlen(local_d2);
      pcVar3 = local_d2 + sVar4;
      pcVar3[0] = '0';
      pcVar3[1] = '\0';
    }
  }
  else {
    if (!bVar5) {
      sVar4 = strlen(local_d2);
      pcVar3 = local_d2 + sVar4;
      pcVar3[0] = '|';
      pcVar3[1] = '\0';
    }
    sVar4 = strlen(local_d2);
    builtin_strncpy(local_d2 + sVar4,"GL_M",4);
    *(undefined4 *)((int)auStack_ce + sVar4) = 0x555f5041;
    *(undefined4 *)((int)auStack_ce + sVar4 + 4) = 0x4e59534e;
    *(undefined4 *)((int)auStack_ce + sVar4 + 8) = 0x4f524843;
    *(undefined4 *)((int)auStack_c2 + sVar4) = 0x455a494e;
    *(undefined4 *)((int)auStack_c2 + sVar4 + 4) = 0x49425f44;
    *(undefined2 *)((int)&uStack_ba + sVar4) = 0x54;
  }
  (**(code **)*param_1)(param_1,"\tGL_BUFFER_ACCESS_FLAGS: %s\n",local_d2);
  (*DAT_0451ed14)(param_2,0x88bc,&local_24);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd37,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
  }
  if (local_24 != 0) {
    (*DAT_0451ed10)(param_2,0x88bd,local_20);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xd3c,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
    }
    local_34 = 0;
    local_30 = 0;
    (*DAT_0451ea70)(param_2,0x9121,&local_34);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xd3f,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
    }
    local_2c = 0;
    local_28 = 0;
    (*DAT_0451ea70)(param_2,0x9120,&local_2c);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xd42,"void OpenGL_LogState_Buffer(OpenGlDebugWriter*, GLenum, GLint)");
    }
    (**(code **)*param_1)
              (param_1,"\tBuffer range at offset %lld, length %lld is mapped at %p\n",local_34,
               local_30,local_2c,local_28,local_20[0]);
    return;
  }
  (**(code **)*param_1)(param_1,"\tBuffer is not mapped\n");
  return;
}

// --- OpenGL_LogState_BufferMask @0x040d0890 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_BufferMask(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int local_2c;
  undefined4 local_28;
  char local_21;
  char local_20;
  char local_1f;
  char local_1e;
  char local_1d [13];
  
  (**(code **)*param_1)(param_1,"Buffer Masks\n");
  local_2c = 0;
  glGetIntegerv(0x8824,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4f9,"void OpenGL_LogState_BufferMask(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_MAX_DRAW_BUFFERS: %d\n",local_2c);
  if (DAT_0451eb2c == (code *)0x0) {
    if (DAT_0451d888 == (code *)0x0) {
      glGetBooleanv(0xc23,&local_21);
      iVar1 = glGetError();
      if (iVar1 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x514,"void OpenGL_LogState_BufferMask(OpenGlDebugWriter*)");
      }
      pcVar2 = "TRUE";
      pcVar6 = "TRUE";
      pcVar3 = "TRUE";
      pcVar5 = "TRUE";
      if (local_1e == '\0') {
        pcVar6 = "FALSE";
      }
      if (local_1f == '\0') {
        pcVar3 = "FALSE";
      }
      if (local_20 == '\0') {
        pcVar5 = "FALSE";
      }
      if (local_21 == '\0') {
        pcVar2 = "FALSE";
      }
      (**(code **)*param_1)
                (param_1,"\t\tGL_COLOR_WRITEMASK global: ( %s, %s, %s, %s )\n",pcVar2,pcVar5,pcVar3,
                 pcVar6);
    }
    else if (0 < local_2c) {
      iVar1 = 0;
      do {
        (*DAT_0451d888)(0xc23,iVar1,&local_21);
        iVar4 = glGetError();
        if (iVar4 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x50c,"void OpenGL_LogState_BufferMask(OpenGlDebugWriter*)");
        }
        pcVar5 = "TRUE";
        pcVar2 = "TRUE";
        if (local_1e == '\0') {
          pcVar2 = "FALSE";
        }
        pcVar3 = "TRUE";
        if (local_1f == '\0') {
          pcVar5 = "FALSE";
        }
        pcVar6 = "TRUE";
        if (local_20 == '\0') {
          pcVar6 = "FALSE";
        }
        if (local_21 == '\0') {
          pcVar3 = "FALSE";
        }
        iVar4 = iVar1 + 1;
        (**(code **)*param_1)
                  (param_1,"\t\tGL_COLOR_WRITEMASK for buffer %d: ( %s, %s, %s, %s )\n",iVar1,pcVar3
                   ,pcVar6,pcVar5,pcVar2);
        iVar1 = iVar4;
      } while (iVar4 < local_2c);
    }
  }
  else if (0 < local_2c) {
    iVar1 = 0;
    do {
      (*DAT_0451eb2c)(0xc23,iVar1,&local_21);
      iVar4 = glGetError();
      if (iVar4 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x502,"void OpenGL_LogState_BufferMask(OpenGlDebugWriter*)");
      }
      pcVar5 = "TRUE";
      pcVar2 = "TRUE";
      if (local_1e == '\0') {
        pcVar2 = "FALSE";
      }
      pcVar3 = "TRUE";
      if (local_1f == '\0') {
        pcVar5 = "FALSE";
      }
      pcVar6 = "TRUE";
      if (local_20 == '\0') {
        pcVar6 = "FALSE";
      }
      if (local_21 == '\0') {
        pcVar3 = "FALSE";
      }
      iVar4 = iVar1 + 1;
      (**(code **)*param_1)
                (param_1,"\t\tGL_COLOR_WRITEMASK for buffer %d: ( %s, %s, %s, %s )\n",iVar1,pcVar3,
                 pcVar6,pcVar5,pcVar2);
      iVar1 = iVar4;
    } while (iVar4 < local_2c);
  }
  glGetBooleanv(0xb72,local_1d);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x51b,"void OpenGL_LogState_BufferMask(OpenGlDebugWriter*)");
  }
  pcVar2 = "TRUE";
  if (local_1d[0] == '\0') {
    pcVar2 = "FALSE";
  }
  (**(code **)*param_1)(param_1,"\tGL_DEPTH_WRITEMASK: %s\n",pcVar2);
  glGetIntegerv(0xb93,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x520,"void OpenGL_LogState_BufferMask(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_STENCIL_VALUE_MASK: %#x\n",local_28);
  glGetIntegerv(0xb98,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x523,"void OpenGL_LogState_BufferMask(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_STENCIL_WRITEMASK: %#x\n",local_28);
  return;
}

// --- OpenGL_LogState_BufferObjectBindings @0x040ccdf0 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_BufferObjectBindings(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  (**(code **)*param_1)(param_1,"Buffer Object Bindings\n");
  glGetIntegerv(0x8894,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x530,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_ARRAY_BUFFER_BINDING: %d\n",local_2c);
  glGetIntegerv(0x8895,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x538,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_ELEMENT_ARRAY_BUFFER_BINDING: %d\n",local_2c);
  if (DAT_0451e0d0 != 0) {
    glGetIntegerv(0x8a28,&local_2c);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x53d,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
    }
    (**(code **)*param_1)(param_1,"\tGL_UNIFORM_BUFFER_BINDING: %d\n",local_2c);
    local_28 = 0;
    glGetIntegerv(0x8a2f,&local_28);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x542,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
    }
    (**(code **)*param_1)(param_1,"\tGL_MAX_UNIFORM_BUFFER_BINDINGS: %d\n",local_28);
    if (local_28 < 0x3d) {
      if (local_28 < 1) goto LAB_040ccff0;
    }
    else {
      local_28 = 0x3c;
    }
    iVar1 = 0;
    do {
      while( true ) {
        (*DAT_0451e0b8)(0x8a28,iVar1,&local_2c);
        iVar2 = glGetError();
        if (iVar2 == 0) break;
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x54b,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
        if (local_2c == 0) goto LAB_040ccf17;
LAB_040ccf6c:
        (*DAT_0451e0b8)(0x8a29,iVar1,&local_24);
        iVar2 = glGetError();
        if (iVar2 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x550,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
        }
        (*DAT_0451e0b8)(0x8a2a,iVar1,local_20);
        iVar2 = glGetError();
        if (iVar2 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x552,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
        }
        iVar2 = iVar1 + 1;
        (**(code **)*param_1)
                  (param_1,
                   "\t\tIndexed GL_UNIFORM_BUFFER_BINDING for index %d: %d ( start: %d, size: %d )\n"
                   ,iVar1,local_2c,local_24,local_20[0]);
        iVar1 = iVar2;
        if (local_28 <= iVar2) goto LAB_040ccff0;
      }
      if (local_2c != 0) goto LAB_040ccf6c;
LAB_040ccf17:
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_28);
  }
LAB_040ccff0:
  glGetIntegerv(0x88ed,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x559,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_PIXEL_PACK_BUFFER_BINDING: %d\n",local_2c);
  glGetIntegerv(0x88ef,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x55c,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_PIXEL_UNPACK_BUFFER_BINDING: %d\n",local_2c);
  glGetIntegerv(0x8ca6,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x55f,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_DRAW_FRAMEBUFFER_BINDING: %d\n",local_2c);
  glGetIntegerv(0x8caa,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x562,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_READ_FRAMEBUFFER_BINDING: %d\n",local_2c);
  glGetIntegerv(0x8ca7,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x565,"void OpenGL_LogState_BufferObjectBindings(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_RENDERBUFFER_BINDING: %d\n",local_2c);
  return;
}

// --- OpenGL_LogState_Framebuffer @0x040ce990 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_Framebuffer(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_24;
  int local_20 [4];
  
  glGetIntegerv(0x8ca6,&local_24);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x97c,"void OpenGL_LogState_Framebuffer(OpenGlDebugWriter*, GLint)");
  }
  if (param_2 != 0) {
    cVar1 = (*DAT_0451e654)(param_2);
    if (cVar1 == '\0') {
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x980,"void OpenGL_LogState_Framebuffer(OpenGlDebugWriter*, GLint)");
      }
      (**(code **)*param_1)(param_1,"Framebuffer ID %d is not a valid framebuffer ID!",param_2);
      return;
    }
  }
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x984,"void OpenGL_LogState_Framebuffer(OpenGlDebugWriter*, GLint)");
  }
  if (param_2 != local_24) {
    (*DAT_0451e694)(0x8ca9,param_2);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x989,"void OpenGL_LogState_Framebuffer(OpenGlDebugWriter*, GLint)");
    }
  }
  if (param_2 == 0) {
    (**(code **)*param_1)(param_1,"Framebuffer object 0 (screen buffer)\n");
    OpenGL_LogState_FramebufferAttachment();
    OpenGL_LogState_FramebufferAttachment();
    OpenGL_LogState_FramebufferAttachment();
    OpenGL_LogState_FramebufferAttachment();
    OpenGL_LogState_FramebufferAttachment();
    OpenGL_LogState_FramebufferAttachment();
  }
  else {
    (**(code **)*param_1)(param_1,"Framebuffer object %d info\n",param_2);
    glGetIntegerv(0x8cdf,local_20);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x99b,"void OpenGL_LogState_Framebuffer(OpenGlDebugWriter*, GLint)");
    }
    if (0 < local_20[0]) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        OpenGL_LogState_FramebufferAttachment();
      } while (iVar2 < local_20[0]);
    }
    OpenGL_LogState_FramebufferAttachment();
    OpenGL_LogState_FramebufferAttachment();
  }
  if (param_2 != local_24) {
    (*DAT_0451e694)(0x8ca9,local_24);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x9a6,"void OpenGL_LogState_Framebuffer(OpenGlDebugWriter*, GLint)");
      return;
    }
  }
  return;
}

// --- OpenGL_LogState_FramebufferAttachment @0x040cde70 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_FramebufferAttachment(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  byte bVar9;
  char local_1a4 [256];
  char local_a4 [64];
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  bVar9 = 0;
  (*DAT_0451e65c)(0x8ca9,param_2,0x8cd0,&local_64);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x8ee,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  if (local_64 == 0) {
    return;
  }
  local_60 = 0;
  if (local_64 == 0x8218) {
LAB_040ce1e0:
    iVar2 = local_60;
    uVar6 = OpenGL_BufferToString();
    (**(code **)*param_1)
              (param_1,"\tattachment %s is default framebuffer attachment ( name is %d )\n",uVar6,
               iVar2);
  }
  else {
    (*DAT_0451e65c)(0x8ca9,param_2,0x8cd1,&local_60);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8f8,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
    }
    iVar2 = local_60;
    if (local_64 == 0x8218) goto LAB_040ce1e0;
    if (local_64 == 0x1702) {
      (*DAT_0451e65c)(0x8ca9,param_2,0x8cd2,&local_5c);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x901,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      (*DAT_0451e65c)(0x8ca9,param_2,0x8cd3,&local_58);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x903,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      (*DAT_0451e65c)(0x8ca9,param_2,0x8cd4,&local_54);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x905,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      (*DAT_0451e65c)(0x8ca9,param_2,0x8da7,&local_50);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x907,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      iVar2 = 0xde1;
      if (local_58 != 0) {
        iVar2 = local_58;
      }
      iVar8 = (-(uint)(local_58 == 0) & 0xffff88ce) + 0x8513;
      glGetIntegerv((-(uint)(local_58 == 0) & 0xfffffb55) + 0x8514,&local_4c);
      iVar4 = glGetError();
      if (iVar4 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x911,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      if (local_4c != local_60) {
        glBindTexture(iVar8,local_60);
        iVar4 = glGetError();
        if (iVar4 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x917,
                       "void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
        }
      }
      (*DAT_0451eec8)(iVar2,local_5c,0x1000,&local_48);
      iVar4 = glGetError();
      if (iVar4 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x91d,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      (*DAT_0451eec8)(iVar2,local_5c,0x1001,&local_44);
      iVar4 = glGetError();
      if (iVar4 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x91f,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      (*DAT_0451eec8)(iVar2,local_5c,0x1003,&local_40);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x921,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)"
                    );
      }
      if (local_4c != local_60) {
        glBindTexture(iVar8,local_4c);
        iVar2 = glGetError();
        if (iVar2 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x927,
                       "void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
        }
      }
      pcVar3 = ", layered";
      pcVar1 = *(code **)*param_1;
      if (local_50 == 0) {
        pcVar3 = "";
      }
      uVar6 = OpenGL_InternalFormatToString(local_40);
      iVar2 = local_60;
      uVar5 = OpenGL_BufferToString();
      (*pcVar1)(param_1,"\tattachment %s is a texture ( ID %d, level %d, %d x %d, %s%s )\n",uVar5,
                iVar2,local_5c,local_48,local_44,uVar6,pcVar3);
      if (local_58 != 0) {
        pcVar3 = "!!!unknown!!!";
        if (local_58 - 0x8515U < 6) {
          pcVar3 = (&PTR_s_GL_TEXTURE_CUBE_MAP_POSITIVE_X_04308748)[local_58 - 0x8515U];
        }
        (**(code **)*param_1)(param_1,"\t\tcube map face: %s\n",pcVar3);
      }
      if (local_50 != 0) {
        (**(code **)*param_1)(param_1,"\t\tlayer: %s\n",local_54);
      }
    }
    else if (local_64 == 0x8d41) {
      uVar6 = OpenGL_BufferToString();
      (**(code **)*param_1)(param_1,"\tattachment %s is a renderbuffer ( ID %d )\n",uVar6,iVar2);
      OpenGL_LogState_Renderbuffer();
    }
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8212,&local_3c);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x938,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8213,&local_38);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x93a,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8214,&local_34);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x93c,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8215,&local_30);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x93e,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8216,&local_2c);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x940,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8217,&local_28);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x942,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8211,&local_24);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x944,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  (*DAT_0451e65c)(0x8ca9,param_2,0x8210,local_20);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x946,"void OpenGL_LogState_FramebufferAttachment(OpenGlDebugWriter*, GLenum)");
  }
  pcVar3 = local_1a4;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + (uint)bVar9 * -8 + 4;
  }
  pcVar3 = local_a4;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + (uint)bVar9 * -8 + 4;
  }
  pcVar3 = "GL_LINEAR";
  if ((local_20[0] != 0x2601) && (pcVar3 = "!!!unknown!!!", local_20[0] == 0x8c40)) {
    pcVar3 = "GL_SRGB";
  }
  pcVar7 = "GL_FLOAT";
  if (local_24 != 0x1406) {
    if (local_24 < 0x1407) {
      pcVar7 = "GL_INT";
      if ((local_24 == 0x1404) || (pcVar7 = "GL_UNSIGNED_INT", local_24 == 0x1405))
      goto LAB_040ce0fc;
    }
    else {
      pcVar7 = "GL_UNSIGNED_NORMALIZED";
      if ((local_24 == 0x8c17) || (pcVar7 = "GL_SIGNED_NORMALIZED", local_24 == 0x8f9c))
      goto LAB_040ce0fc;
    }
    pcVar7 = "!!!unknown!!!";
  }
LAB_040ce0fc:
  sprintf(local_1a4,"Component type: %s, color encoding: %s",pcVar7,pcVar3);
  if (local_3c != 0) {
    sprintf(local_a4,", red: %d",local_3c,pcVar3);
    strcat(local_1a4,local_a4);
  }
  if (local_38 != 0) {
    sprintf(local_a4,", green: %d",local_38,pcVar3);
    strcat(local_1a4,local_a4);
  }
  if (local_34 != 0) {
    sprintf(local_a4,", blue: %d",local_34,pcVar3);
    strcat(local_1a4,local_a4);
  }
  if (local_30 != 0) {
    sprintf(local_a4,", alpha: %d",local_30,pcVar3);
    strcat(local_1a4,local_a4);
  }
  if (local_2c != 0) {
    sprintf(local_a4,", depth: %d",local_2c);
    strcat(local_1a4,local_a4);
  }
  if (local_28 != 0) {
    sprintf(local_a4,", stencil: %d",local_28);
    strcat(local_1a4,local_a4);
  }
  (**(code **)*param_1)(param_1,&DAT_0430232f,local_1a4);
  return;
}

// --- OpenGL_LogState_Polygons @0x040d9ee0 ---
/* source: openGlDebugFunctions */

void OpenGL_LogState_Polygons(char param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *__ptr;
  char *pcVar6;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  int local_24;
  int local_20 [4];
  
  OpenGL_ReportError();
  iVar4 = eON_Int_GL_NoteCurrentContext();
  if (iVar4 == 0) {
    puts("No valid OpenGL context in calling thread!.");
    return;
  }
  if (DAT_044dac80 == (undefined4 *)0x0) {
    FUN_040d9ba0();
  }
  if (param_2 != 0) {
    (**(code **)*DAT_044dac80)(DAT_044dac80,"Event: %s\n",param_2);
  }
  OpenGL_LogState_RenderTargets();
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Depth\n");
  glGetBooleanv(0xb71,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x5f7,"void OpenGL_LogState_Depth(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_DEPTH_TEST: %s\n",pcVar5);
  glGetFloatv(0xb73,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x5fc,"void OpenGL_LogState_Depth(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_DEPTH_CLEAR_VALUE: %f\n",(double)local_28);
  glGetIntegerv(0xb74,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x601,"void OpenGL_LogState_Depth(OpenGlDebugWriter*)");
  }
  pcVar5 = "!!!unknown!!!";
  if (local_24 - 0x200U < 8) {
    pcVar5 = (&PTR_s_GL_NEVER_043081c0)[local_24 - 0x200U];
  }
  (**(code **)*puVar2)(puVar2,"\tGL_DEPTH_FUNC: %s\n",pcVar5);
  glGetFloatv(0xb70,&local_48);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x606,"void OpenGL_LogState_Depth(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_DEPTH_RANGE: { %f, %f }\n",(double)local_48,(double)local_44);
  glGetBooleanv(0xb72,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x60a,"void OpenGL_LogState_Depth(OpenGlDebugWriter*)");
  }
  pcVar5 = "TRUE";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "FALSE";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_DEPTH_WRITEMASK: %s\n",pcVar5);
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Stencil Test\n");
  glGetBooleanv(0xb90,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7eb,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_TEST: %s\n",pcVar5);
  glGetIntegerv(0xb91,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7f0,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_CLEAR_VALUE: %#x\n",local_24);
  glGetIntegerv(0xb94,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7f3,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  pcVar5 = "GL_REPLACE";
  if (local_24 != 0x1e01) {
    if (local_24 < 0x1e02) {
      pcVar5 = "GL_INVERT";
      if (((local_24 != 0x150a) && (pcVar5 = "GL_KEEP", local_24 != 0x1e00)) &&
         (pcVar5 = "GL_ZERO", local_24 != 0)) {
LAB_040da18a:
        pcVar5 = "!!!unknown!!!";
      }
    }
    else {
      pcVar5 = "GL_DECR";
      if ((((local_24 != 0x1e03) && (pcVar5 = "GL_INCR", 0x1e02 < local_24)) &&
          (pcVar5 = "GL_INCR_WRAP", local_24 != 0x8507)) &&
         (pcVar5 = "GL_DECR_WRAP", local_24 != 0x8508)) goto LAB_040da18a;
    }
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_FAIL: %s\n",pcVar5);
  glGetIntegerv(0xb95,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7f6,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  pcVar5 = "GL_REPLACE";
  if (local_24 != 0x1e01) {
    if (local_24 < 0x1e02) {
      pcVar5 = "GL_INVERT";
      if (((local_24 != 0x150a) && (pcVar5 = "GL_KEEP", local_24 != 0x1e00)) &&
         (pcVar5 = "GL_ZERO", local_24 != 0)) {
LAB_040da1fb:
        pcVar5 = "!!!unknown!!!";
      }
    }
    else {
      pcVar5 = "GL_DECR";
      if (((local_24 != 0x1e03) && (pcVar5 = "GL_INCR", 0x1e02 < local_24)) &&
         ((pcVar5 = "GL_INCR_WRAP", local_24 != 0x8507 &&
          (pcVar5 = "GL_DECR_WRAP", local_24 != 0x8508)))) goto LAB_040da1fb;
    }
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_PASS_DEPTH_FAIL: %s\n",pcVar5);
  glGetIntegerv(0xb96,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7f9,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  pcVar5 = "GL_REPLACE";
  if (local_24 != 0x1e01) {
    if (local_24 < 0x1e02) {
      pcVar5 = "GL_INVERT";
      if (((local_24 != 0x150a) && (pcVar5 = "GL_KEEP", local_24 != 0x1e00)) &&
         (pcVar5 = "GL_ZERO", local_24 != 0)) {
LAB_040da26b:
        pcVar5 = "!!!unknown!!!";
      }
    }
    else {
      pcVar5 = "GL_DECR";
      if (((local_24 != 0x1e03) && (pcVar5 = "GL_INCR", 0x1e02 < local_24)) &&
         ((pcVar5 = "GL_INCR_WRAP", local_24 != 0x8507 &&
          (pcVar5 = "GL_DECR_WRAP", local_24 != 0x8508)))) goto LAB_040da26b;
    }
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_PASS_DEPTH_PASS: %s\n",pcVar5);
  glGetIntegerv(0xb92,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7fc,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  pcVar5 = "!!!unknown!!!";
  if (local_24 - 0x200U < 8) {
    pcVar5 = (&PTR_s_GL_NEVER_043081c0)[local_24 - 0x200U];
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_FUNC: %s\n",pcVar5);
  glGetIntegerv(0xb97,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7ff,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_REF: %#x\n",local_24);
  glGetIntegerv(0xb93,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x802,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_VALUE_MASK: %#x\n",local_24);
  glGetIntegerv(0xb98,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x805,"void OpenGL_LogState_StencilTest(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_WRITEMASK: %#x\n",local_24);
  OpenGL_LogState_BufferMask();
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Clear Colors\n");
  glGetFloatv(0xc22,&local_48);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x56f,"void OpenGL_LogState_ClearColors(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)
            (puVar2,"\tGL_COLOR_CLEAR_VALUE: ( %f, %f, %f, %f )\n",(double)local_48,(double)local_44
             ,(double)local_40,(double)local_3c);
  glGetFloatv(0xb73,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x574,"void OpenGL_LogState_ClearColors(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_DEPTH_CLEAR_VALUE: %f\n",(double)local_28);
  glGetIntegerv(0xb91,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x579,"void OpenGL_LogState_ClearColors(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_STENCIL_CLEAR_VALUE: %d\n",local_24);
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Multisample\n");
  glGetBooleanv(0x809d,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x706,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MULTISAMPLE: %s\n",pcVar5);
  glGetBooleanv(0x809e,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x709,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SAMPLE_ALPHA_TO_COVERAGE: %s\n",pcVar5);
  glGetBooleanv(0x809f,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x70c,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SAMPLE_ALPHA_TO_ONE: %s\n",pcVar5);
  glGetBooleanv(0x80a0,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x70f,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SAMPLE_COVERAGE: %s\n",pcVar5);
  glGetBooleanv(0x80ab,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x712,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SAMPLE_COVERAGE_INVERT: %s\n",pcVar5);
  glGetFloatv(0x80aa,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x717,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SAMPLE_COVERAGE_VALUE: %f\n",(double)local_28);
  glGetIntegerv(0x80a8,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x71c,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SAMPLE_BUFFERS: %d\n",local_24);
  glGetIntegerv(0x80a9,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x71f,"void OpenGL_LogState_Multisample(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SAMPLES: %d\n",local_24);
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Scissor Test & Viewport\n");
  glGetBooleanv(0xc11,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7d3,"void OpenGL_LogState_ScissorTest(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SCISSOR_TEST: %s\n",pcVar5);
  glGetIntegerv(0xc10,&local_38);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7d8,"void OpenGL_LogState_ScissorTest(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)
            (puVar2,"\tGL_SCISSOR_BOX: { %d, %d, %d, %d }\n",local_38,local_34,local_30,local_2c);
  glGetIntegerv(0xba2,&local_38);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7db,"void OpenGL_LogState_ScissorTest(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)
            (puVar2,"\tGL_VIEWPORT: { %d, %d, %d, %d }\n",local_38,local_34,local_30,local_2c);
  cVar3 = glIsEnabled(0x3000);
  pcVar5 = "Enabled";
  if (cVar3 == '\0') {
    pcVar5 = "Disabled";
  }
  local_20[0]._0_1_ = cVar3;
  (**(code **)*puVar2)(puVar2,"\tGL_CLIP_DISTANCE%d: %s\n",0,pcVar5);
  local_20[0]._0_1_ = glIsEnabled(0x3001);
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_CLIP_DISTANCE%d: %s\n",1,pcVar5);
  local_20[0]._0_1_ = glIsEnabled(0x3002);
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_CLIP_DISTANCE%d: %s\n",2,pcVar5);
  local_20[0]._0_1_ = glIsEnabled(0x3003);
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_CLIP_DISTANCE%d: %s\n",3,pcVar5);
  local_20[0]._0_1_ = glIsEnabled(0x3004);
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_CLIP_DISTANCE%d: %s\n",4,pcVar5);
  cVar3 = glIsEnabled(0x3005);
  local_20[0] = CONCAT31(local_20[0]._1_3_,cVar3);
  pcVar5 = "Enabled";
  if (cVar3 == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_CLIP_DISTANCE%d: %s\n",5,pcVar5);
  if (param_1 == '\0') {
    return;
  }
  OpenGL_LogState_VertexArrays();
  puVar2 = DAT_044dac80;
  cVar3 = glIsEnabled(0xbe2);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4d2,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if (cVar3 == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"GL_BLEND: %s\n",pcVar5);
  glGetIntegerv(0x80c9,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4d8,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  pcVar5 = "GL_ONE_MINUS_DST_ALPHA";
  if (local_20[0] != 0x305) {
    if (local_20[0] < 0x306) {
      pcVar5 = "GL_ONE_MINUS_SRC_COLOR";
      if (local_20[0] != 0x301) {
        if (local_20[0] < 0x302) {
          pcVar5 = "GL_ONE";
          if (((local_20[0] != 1) && (pcVar5 = "GL_SRC_COLOR", local_20[0] != 0x300)) &&
             (pcVar5 = "GL_ZERO", local_20[0] != 0)) goto LAB_040da9a4;
        }
        else {
          pcVar5 = "GL_ONE_MINUS_SRC_ALPHA";
          if ((local_20[0] != 0x303) && (pcVar5 = "GL_SRC_ALPHA", 0x303 < local_20[0])) {
            pcVar5 = "GL_DST_ALPHA";
          }
        }
      }
    }
    else {
      pcVar5 = "GL_CONSTANT_COLOR";
      if (local_20[0] != 0x8001) {
        if (local_20[0] < 0x8002) {
          pcVar5 = "GL_ONE_MINUS_DST_COLOR";
          if (((local_20[0] != 0x307) && (pcVar5 = "GL_DST_COLOR", 0x306 < local_20[0])) &&
             (pcVar5 = "GL_SRC_ALPHA_SATURATE", local_20[0] != 0x308)) goto LAB_040da9a4;
        }
        else {
          pcVar5 = "GL_CONSTANT_ALPHA";
          if (((local_20[0] != 0x8003) &&
              (pcVar5 = "GL_ONE_MINUS_CONSTANT_COLOR", 0x8002 < local_20[0])) &&
             ((pcVar5 = "GL_ONE_MINUS_CONSTANT_ALPHA", local_20[0] != 0x8004 &&
              (pcVar5 = "GL_BLEND_COLOR", local_20[0] != 0x8005)))) {
LAB_040da9a4:
            pcVar5 = "!!!unknown!!!";
          }
        }
      }
    }
  }
  (**(code **)*puVar2)(puVar2,"\tGL_BLEND_SRC_RGB: %s\n",pcVar5);
  glGetIntegerv(0x80cb,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4db,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  pcVar5 = "GL_ONE_MINUS_DST_ALPHA";
  if (local_20[0] != 0x305) {
    if (local_20[0] < 0x306) {
      pcVar5 = "GL_ONE_MINUS_SRC_COLOR";
      if (local_20[0] != 0x301) {
        if (local_20[0] < 0x302) {
          pcVar5 = "GL_ONE";
          if (((local_20[0] != 1) && (pcVar5 = "GL_SRC_COLOR", local_20[0] != 0x300)) &&
             (pcVar5 = "GL_ZERO", local_20[0] != 0)) goto LAB_040daa2b;
        }
        else {
          pcVar5 = "GL_ONE_MINUS_SRC_ALPHA";
          if ((local_20[0] != 0x303) && (pcVar5 = "GL_SRC_ALPHA", 0x303 < local_20[0])) {
            pcVar5 = "GL_DST_ALPHA";
          }
        }
      }
    }
    else {
      pcVar5 = "GL_CONSTANT_COLOR";
      if (local_20[0] != 0x8001) {
        if (local_20[0] < 0x8002) {
          pcVar5 = "GL_ONE_MINUS_DST_COLOR";
          if (((local_20[0] != 0x307) && (pcVar5 = "GL_DST_COLOR", 0x306 < local_20[0])) &&
             (pcVar5 = "GL_SRC_ALPHA_SATURATE", local_20[0] != 0x308)) goto LAB_040daa2b;
        }
        else {
          pcVar5 = "GL_CONSTANT_ALPHA";
          if (((local_20[0] != 0x8003) &&
              (pcVar5 = "GL_ONE_MINUS_CONSTANT_COLOR", 0x8002 < local_20[0])) &&
             ((pcVar5 = "GL_ONE_MINUS_CONSTANT_ALPHA", local_20[0] != 0x8004 &&
              (pcVar5 = "GL_BLEND_COLOR", local_20[0] != 0x8005)))) {
LAB_040daa2b:
            pcVar5 = "!!!unknown!!!";
          }
        }
      }
    }
  }
  (**(code **)*puVar2)(puVar2,"\tGL_BLEND_SRC_ALPHA: %s\n",pcVar5);
  glGetIntegerv(0x80c8,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4de,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  pcVar5 = "GL_ONE_MINUS_DST_ALPHA";
  if (local_20[0] != 0x305) {
    if (local_20[0] < 0x306) {
      pcVar5 = "GL_ONE_MINUS_SRC_COLOR";
      if (local_20[0] != 0x301) {
        if (local_20[0] < 0x302) {
          pcVar5 = "GL_ONE";
          if (((local_20[0] != 1) && (pcVar5 = "GL_SRC_COLOR", local_20[0] != 0x300)) &&
             (pcVar5 = "GL_ZERO", local_20[0] != 0)) goto LAB_040dd1cd;
        }
        else {
          pcVar5 = "GL_ONE_MINUS_SRC_ALPHA";
          if ((local_20[0] != 0x303) && (pcVar5 = "GL_SRC_ALPHA", 0x303 < local_20[0])) {
            pcVar5 = "GL_DST_ALPHA";
          }
        }
      }
    }
    else {
      pcVar5 = "GL_CONSTANT_COLOR";
      if (local_20[0] != 0x8001) {
        if (local_20[0] < 0x8002) {
          pcVar5 = "GL_ONE_MINUS_DST_COLOR";
          if (((local_20[0] != 0x307) && (pcVar5 = "GL_DST_COLOR", 0x306 < local_20[0])) &&
             (pcVar5 = "GL_SRC_ALPHA_SATURATE", local_20[0] != 0x308)) goto LAB_040dd1cd;
        }
        else {
          pcVar5 = "GL_CONSTANT_ALPHA";
          if (((local_20[0] != 0x8003) &&
              (pcVar5 = "GL_ONE_MINUS_CONSTANT_COLOR", 0x8002 < local_20[0])) &&
             ((pcVar5 = "GL_ONE_MINUS_CONSTANT_ALPHA", local_20[0] != 0x8004 &&
              (pcVar5 = "GL_BLEND_COLOR", local_20[0] != 0x8005)))) {
LAB_040dd1cd:
            pcVar5 = "!!!unknown!!!";
          }
        }
      }
    }
  }
  (**(code **)*puVar2)(puVar2,"\tGL_BLEND_DST_RGB: %s\n",pcVar5);
  glGetIntegerv(0x80ca,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4e1,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  pcVar5 = "GL_ONE_MINUS_DST_ALPHA";
  if (local_20[0] != 0x305) {
    if (local_20[0] < 0x306) {
      pcVar5 = "GL_ONE_MINUS_SRC_COLOR";
      if (local_20[0] != 0x301) {
        if (local_20[0] < 0x302) {
          pcVar5 = "GL_ONE";
          if (((local_20[0] != 1) && (pcVar5 = "GL_SRC_COLOR", local_20[0] != 0x300)) &&
             (pcVar5 = "GL_ZERO", local_20[0] != 0)) goto LAB_040dd18d;
        }
        else {
          pcVar5 = "GL_ONE_MINUS_SRC_ALPHA";
          if ((local_20[0] != 0x303) && (pcVar5 = "GL_SRC_ALPHA", 0x303 < local_20[0])) {
            pcVar5 = "GL_DST_ALPHA";
          }
        }
      }
    }
    else {
      pcVar5 = "GL_CONSTANT_COLOR";
      if (local_20[0] != 0x8001) {
        if (local_20[0] < 0x8002) {
          pcVar5 = "GL_ONE_MINUS_DST_COLOR";
          if (((local_20[0] != 0x307) && (pcVar5 = "GL_DST_COLOR", 0x306 < local_20[0])) &&
             (pcVar5 = "GL_SRC_ALPHA_SATURATE", local_20[0] != 0x308)) goto LAB_040dd18d;
        }
        else {
          pcVar5 = "GL_CONSTANT_ALPHA";
          if (((local_20[0] != 0x8003) &&
              (pcVar5 = "GL_ONE_MINUS_CONSTANT_COLOR", 0x8002 < local_20[0])) &&
             ((pcVar5 = "GL_ONE_MINUS_CONSTANT_ALPHA", local_20[0] != 0x8004 &&
              (pcVar5 = "GL_BLEND_COLOR", local_20[0] != 0x8005)))) {
LAB_040dd18d:
            pcVar5 = "!!!unknown!!!";
          }
        }
      }
    }
  }
  (**(code **)*puVar2)(puVar2,"\tGL_BLEND_DST_ALPHA: %s\n",pcVar5);
  glGetFloatv(0x8005,&local_48);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4e7,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)
            (puVar2,"\tGL_BLEND_COLOR: ( %f, %f, %f, %f )\n",(double)local_48,(double)local_44,
             (double)local_40,(double)local_3c);
  glGetIntegerv(0x8009,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4eb,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  pcVar5 = "!!!unknown!!!";
  if (local_20[0] - 0x8006U < 6) {
    pcVar5 = (&PTR_s_GL_FUNC_ADD_043083d0)[local_20[0] - 0x8006U];
  }
  (**(code **)*puVar2)(puVar2,"\tGL_BLEND_EQUATION_RGB: %s\n",pcVar5);
  glGetIntegerv(0x883d,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x4ee,"void OpenGL_LogState_Blend(OpenGlDebugWriter*)");
  }
  pcVar5 = "!!!unknown!!!";
  if (local_20[0] - 0x8006U < 6) {
    pcVar5 = (&PTR_s_GL_FUNC_ADD_043083d0)[local_20[0] - 0x8006U];
  }
  (**(code **)*puVar2)(puVar2,"\tGL_BLEND_EQUATION_ALPHA: %s\n",pcVar5);
  OpenGL_LogState_BufferObjectBindings();
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Hints\n");
  glGetIntegerv(0xc52,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x620,"void OpenGL_LogState_Hints(OpenGlDebugWriter*)");
  }
  if (local_20[0] == 0x1100) {
    pcVar5 = "GL_DONT_CARE";
LAB_040dc21d:
    (**(code **)*puVar2)(puVar2,"\tGL_LINE_SMOOTH_HINT: %s\n",pcVar5);
  }
  else {
    if (local_20[0] == 0x1101) {
      pcVar5 = "GL_FASTEST";
      goto LAB_040dc21d;
    }
    if (local_20[0] == 0x1102) {
      pcVar5 = "GL_NICEST";
      goto LAB_040dc21d;
    }
    (**(code **)*puVar2)(puVar2,"\tGL_LINE_SMOOTH_HINT: %#x\n",local_20[0]);
  }
  glGetIntegerv(0xc53,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x628,"void OpenGL_LogState_Hints(OpenGlDebugWriter*)");
  }
  if (local_20[0] == 0x1100) {
    pcVar5 = "GL_DONT_CARE";
LAB_040dcf45:
    (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_SMOOTH_HINT: %s\n",pcVar5);
  }
  else {
    if (local_20[0] == 0x1101) {
      pcVar5 = "GL_FASTEST";
      goto LAB_040dcf45;
    }
    if (local_20[0] == 0x1102) {
      pcVar5 = "GL_NICEST";
      goto LAB_040dcf45;
    }
    (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_SMOOTH_HINT: %#x\n",local_20[0]);
  }
  glGetIntegerv(0x84ef,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x630,"void OpenGL_LogState_Hints(OpenGlDebugWriter*)");
  }
  if (local_20[0] == 0x1100) {
    pcVar5 = "GL_DONT_CARE";
LAB_040dcf25:
    (**(code **)*puVar2)(puVar2,"\tGL_TEXTURE_COMPRESSION_HINT: %s\n",pcVar5);
  }
  else {
    if (local_20[0] == 0x1101) {
      pcVar5 = "GL_FASTEST";
      goto LAB_040dcf25;
    }
    if (local_20[0] == 0x1102) {
      pcVar5 = "GL_NICEST";
      goto LAB_040dcf25;
    }
    (**(code **)*puVar2)(puVar2,"\tGL_TEXTURE_COMPRESSION_HINT: %#x\n",local_20[0]);
  }
  glGetIntegerv(0x8b8b,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x638,"void OpenGL_LogState_Hints(OpenGlDebugWriter*)");
  }
  if (local_20[0] == 0x1100) {
    pcVar5 = "GL_DONT_CARE";
LAB_040dcf65:
    (**(code **)*puVar2)(puVar2,"\tGL_FRAGMENT_SHADER_DERIVATIVE_HINT: %s\n",pcVar5);
  }
  else {
    if (local_20[0] == 0x1101) {
      pcVar5 = "GL_FASTEST";
      goto LAB_040dcf65;
    }
    if (local_20[0] == 0x1102) {
      pcVar5 = "GL_NICEST";
      goto LAB_040dcf65;
    }
    (**(code **)*puVar2)(puVar2,"\tGL_FRAGMENT_SHADER_DERIVATIVE_HINT: %#x\n",local_20[0]);
  }
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Limits\n");
  glGetIntegerv(0xd50,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x68e,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_SUBPIXEL_BIT: %d\n",local_20[0]);
  glGetIntegerv(0x8073,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x691,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_3D_TEXTURE_SIZE: %d\n",local_20[0]);
  glGetIntegerv(0x8b4d,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x694,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_COMBINED_TEXTURE_IMAGE_UNITS: %d\n",local_20[0]);
  glGetIntegerv(0x851c,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x697,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_CUBE_MAP_TEXTURE_SIZE: %d\n",local_20[0]);
  glGetIntegerv(0x80e9,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x69a,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_ELEMENTS_INDICES: %d\n",local_20[0]);
  glGetIntegerv(33000,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x69d,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_ELEMENTS_VERTICES: %d\n",local_20[0]);
  glGetIntegerv(0x8b49,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6a0,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_FRAGMENT_UNIFORM_COMPONENTS: %d\n",local_20[0]);
  glGetIntegerv(0x8872,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6a3,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_TEXTURE_IMAGE_UNITS: %d\n",local_20[0]);
  glGetIntegerv(0x84fd,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6a6,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_TEXTURE_LOD_BIAS: %d\n",local_20[0]);
  glGetIntegerv(0x84ff,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6a9,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_TEXTURE_MAX_ANISOTROPY_EXT: %d\n",local_20[0]);
  glGetIntegerv(0xd33,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6ac,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_TEXTURE_SIZE: %d\n",local_20[0]);
  glGetIntegerv(0x8869,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6af,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_VERTEX_ATTRIBS: %d\n",local_20[0]);
  glGetIntegerv(0x8b4c,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6b2,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_VERTEX_TEXTURE_IMAGE_UNITS: %d\n",local_20[0]);
  glGetIntegerv(0x8b4a,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6b5,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_VERTEX_UNIFORM_COMPONENTS: %d\n",local_20[0]);
  glGetIntegerv(0xd3a,&local_38);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6ba,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_MAX_VIEWPORT_DIMS: { %d, %d }\n",local_38,local_34);
  glGetIntegerv(0x86a2,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6bf,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_NUM_COMPRESSED_TEXTURE_FORMATS: %d\n",local_24);
  if (local_24 != 0) {
    (**(code **)*puVar2)(puVar2,&PTR_DAT_04303505);
    __ptr = malloc(local_24 << 2);
    glGetIntegerv(0x86a3,__ptr);
    iVar4 = glGetError();
    if (iVar4 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x6c7,"void OpenGL_LogState_Limits(OpenGlDebugWriter*)");
    }
    if (0 < local_24) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)((int)__ptr + iVar4 * 4);
        if (iVar1 == 0x9279) {
          pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC";
LAB_040dd000:
          (**(code **)*puVar2)(puVar2,&DAT_0430232f,pcVar5);
        }
        else {
          if (0x9279 < iVar1) {
            if (iVar1 == 0x93bd) {
              pcVar5 = "GL_COMPRESSED_RGBA_ASTC_12x12_KHR";
            }
            else if (iVar1 < 0x93be) {
              if (iVar1 == 0x93b6) {
                pcVar5 = "GL_COMPRESSED_RGBA_ASTC_8x6_KHR";
              }
              else if (iVar1 < 0x93b7) {
                if (iVar1 == 0x93b2) {
                  pcVar5 = "GL_COMPRESSED_RGBA_ASTC_5x5_KHR";
                }
                else if (iVar1 < 0x93b3) {
                  if (iVar1 == 0x93b0) {
                    pcVar5 = "GL_COMPRESSED_RGBA_ASTC_4x4_KHR";
                  }
                  else {
                    if (iVar1 != 0x93b1) goto LAB_040dc3f8;
                    pcVar5 = "GL_COMPRESSED_RGBA_ASTC_5x4_KHR";
                  }
                }
                else {
                  pcVar5 = "GL_COMPRESSED_RGBA_ASTC_6x6_KHR";
                  if ((iVar1 != 0x93b4) &&
                     (pcVar5 = "GL_COMPRESSED_RGBA_ASTC_6x5_KHR", 0x93b4 < iVar1)) {
                    pcVar5 = "GL_COMPRESSED_RGBA_ASTC_8x5_KHR";
                  }
                }
              }
              else if (iVar1 == 0x93b9) {
                pcVar5 = "GL_COMPRESSED_RGBA_ASTC_10x6_KHR";
              }
              else if (iVar1 < 0x93ba) {
                if (iVar1 == 0x93b7) {
                  pcVar5 = "GL_COMPRESSED_RGBA_ASTC_8x8_KHR";
                }
                else {
                  if (iVar1 != 0x93b8) goto LAB_040dc3f8;
                  pcVar5 = "GL_COMPRESSED_RGBA_ASTC_10x5_KHR";
                }
              }
              else {
                pcVar5 = "GL_COMPRESSED_RGBA_ASTC_10x10_KHR";
                if ((iVar1 != 0x93bb) &&
                   (pcVar5 = "GL_COMPRESSED_RGBA_ASTC_10x8_KHR", 0x93bb < iVar1)) {
                  pcVar5 = "GL_COMPRESSED_RGBA_ASTC_12x10_KHR";
                }
              }
            }
            else if (iVar1 == 0x93d6) {
              pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR";
            }
            else if (iVar1 < 0x93d7) {
              if (iVar1 == 0x93d2) {
                pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR";
              }
              else if (iVar1 < 0x93d3) {
                if (iVar1 == 0x93d0) {
                  pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR";
                }
                else {
                  if (iVar1 != 0x93d1) goto LAB_040dc3f8;
                  pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR";
                }
              }
              else {
                pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR";
                if ((iVar1 != 0x93d4) &&
                   (pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR", 0x93d4 < iVar1)) {
                  pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR";
                }
              }
            }
            else if (iVar1 == 0x93da) {
              pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR";
            }
            else if (iVar1 < 0x93db) {
              pcVar6 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR";
              if (0x93d8 < iVar1) {
                pcVar6 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR";
              }
              pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR";
              if (iVar1 != 0x93d8) {
                pcVar5 = pcVar6;
              }
            }
            else if (iVar1 == 0x93dc) {
              pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR";
            }
            else {
              pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR";
              if (0x93db < iVar1) {
                if (iVar1 != 0x93dd) goto LAB_040dc3f8;
                pcVar5 = "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR";
              }
            }
            goto LAB_040dd000;
          }
          if (iVar1 == 0x8b99) {
            pcVar5 = "GL_PALETTE8_RGB5_A1_OES";
            goto LAB_040dd000;
          }
          if (0x8b99 < iVar1) {
            if (iVar1 == 0x9272) {
              pcVar5 = "GL_COMPRESSED_RG11_EAC";
            }
            else if (iVar1 < 0x9273) {
              if (iVar1 == 0x8e8e) {
                pcVar5 = "GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT";
              }
              else if (iVar1 < 0x8e8f) {
                if (iVar1 == 0x8e8c) {
                  pcVar5 = "GL_COMPRESSED_RGBA_BPTC_UNORM";
                }
                else {
                  if (iVar1 != 0x8e8d) goto LAB_040dc3f8;
                  pcVar5 = "GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM";
                }
              }
              else if (iVar1 == 0x9270) {
                pcVar5 = "GL_COMPRESSED_R11_EAC";
              }
              else {
                pcVar5 = "GL_COMPRESSED_SIGNED_R11_EAC";
                if (iVar1 < 0x9271) {
                  if (iVar1 != 0x8e8f) goto LAB_040dc3f8;
                  pcVar5 = "GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT";
                }
              }
            }
            else if (iVar1 == 0x9275) {
              pcVar5 = "GL_COMPRESSED_SRGB8_ETC2";
            }
            else if (iVar1 < 0x9276) {
              if (iVar1 == 0x9273) {
                pcVar5 = "GL_COMPRESSED_SIGNED_RG11_EAC";
              }
              else {
                if (iVar1 != 0x9274) goto LAB_040dc3f8;
                pcVar5 = "GL_COMPRESSED_RGB8_ETC2";
              }
            }
            else {
              pcVar5 = "GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2";
              if ((iVar1 != 0x9277) &&
                 (pcVar5 = "GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2", 0x9277 < iVar1)) {
                pcVar5 = "GL_COMPRESSED_RGBA8_ETC2_EAC";
              }
            }
            goto LAB_040dd000;
          }
          if (iVar1 == 0x8b92) {
            pcVar5 = "GL_PALETTE4_R5_G6_B5_OES";
            goto LAB_040dd000;
          }
          if (0x8b92 < iVar1) {
            if (iVar1 == 0x8b95) {
              pcVar5 = "GL_PALETTE8_RGB8_OES";
            }
            else if (iVar1 < 0x8b96) {
              if (iVar1 == 0x8b93) {
                pcVar5 = "GL_PALETTE4_RGBA4_OES";
              }
              else {
                if (iVar1 != 0x8b94) goto LAB_040dc3f8;
                pcVar5 = "GL_PALETTE4_RGB5_A1_OES";
              }
            }
            else {
              pcVar5 = "GL_PALETTE8_R5_G6_B5_OES";
              if ((iVar1 != 0x8b97) && (pcVar5 = "GL_PALETTE8_RGBA8_OES", 0x8b97 < iVar1)) {
                pcVar5 = "GL_PALETTE8_RGBA4_OES";
              }
            }
            goto LAB_040dd000;
          }
          if (iVar1 == 0x83f2) {
            pcVar5 = "GL_COMPRESSED_RGBA_S3TC_DXT3_EXT";
            goto LAB_040dd000;
          }
          if (0x83f2 < iVar1) {
            if (iVar1 == 0x8b90) {
              pcVar5 = "GL_PALETTE4_RGB8_OES";
            }
            else {
              pcVar5 = "GL_PALETTE4_RGBA8_OES";
              if (iVar1 < 0x8b91) {
                if (iVar1 != 0x83f3) goto LAB_040dc3f8;
                pcVar5 = "GL_COMPRESSED_RGBA_S3TC_DXT5_EXT";
              }
            }
            goto LAB_040dd000;
          }
          if (iVar1 == 0x83f0) {
            pcVar5 = "GL_COMPRESSED_RGB_S3TC_DXT1_EXT";
            goto LAB_040dd000;
          }
          if (iVar1 == 0x83f1) {
            pcVar5 = "GL_COMPRESSED_RGBA_S3TC_DXT1_EXT";
            goto LAB_040dd000;
          }
LAB_040dc3f8:
          (**(code **)*puVar2)(puVar2,"\t\t0x%x\n",iVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_24);
    }
    free(__ptr);
    (**(code **)*puVar2)(puVar2,&DAT_04303511);
  }
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Lines\n");
  glGetFloatv(0xb21,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6db,"void OpenGL_LogState_Lines(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_LINE_WIDTH: %f\n",(double)local_28);
  glGetFloatv(0x846e,&local_48);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6e0,"void OpenGL_LogState_Lines(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)
            (puVar2,"\tGL_ALIASED_LINE_WIDTH_RANGE: { %f, %f }\n",(double)local_48,(double)local_44)
  ;
  glGetBooleanv(0xb20,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6e5,"void OpenGL_LogState_Lines(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_LINE_SMOOTH: %s\n",pcVar5);
  glGetFloatv(0xb23,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6e9,"void OpenGL_LogState_Lines(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_LINE_WIDTH_GRANULARITY: %f\n",(double)local_28);
  glGetFloatv(0xb22,&local_48);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6ed,"void OpenGL_LogState_Lines(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)
            (puVar2,"\tGL_LINE_WIDTH_RANGE: { %f, %f }\n",(double)local_48,(double)local_44);
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Logic Ops\n");
  glGetBooleanv(0xbf2,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6f7,"void OpenGL_LogState_LogicOps(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_COLOR_LOGIC_OP: %s\n",pcVar5);
  glGetIntegerv(0xbf0,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x6fc,"void OpenGL_LogState_LogicOps(OpenGlDebugWriter*)");
  }
  pcVar5 = "!!!unknown!!!";
  if (local_24 - 0x1500U < 0x10) {
    pcVar5 = (&PTR_s_GL_CLEAR_04308540)[local_24 - 0x1500U];
  }
  (**(code **)*puVar2)(puVar2,"\tGL_LOGIC_OP_MODE: %s\n",pcVar5);
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Pixel Mode\n");
  glGetIntegerv(0xd05,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x729,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_ALIGNMENT: %d\n",local_24);
  glGetIntegerv(0x806c,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x72c,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_IMAGE_HEIGHT: %d\n",local_24);
  glGetBooleanv(0xd01,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x731,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  pcVar5 = "TRUE";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "FALSE";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_LSB_FIRST: %s\n",pcVar5);
  glGetIntegerv(0xd02,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x735,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_ROW_LENGTH: %d\n",local_24);
  glGetIntegerv(0x806b,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x738,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_SKIP_IMAGES: %d\n",local_24);
  glGetIntegerv(0xd04,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x73b,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_SKIP_PIXELS: %d\n",local_24);
  glGetIntegerv(0xd03,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x73e,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_SKIP_ROWS: %d\n",local_24);
  glGetBooleanv(0xd00,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x742,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  pcVar5 = "TRUE";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "FALSE";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_PACK_SWAP_BYTES: %s\n",pcVar5);
  glGetIntegerv(0xcf5,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x746,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_UNPACK_ALIGNMENTS: %d\n",local_24);
  glGetIntegerv(0x806e,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x750,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_UNPACK_IMAGE_HEIGHT: %d\n",local_24);
  glGetBooleanv(0xcf1,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x754,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  pcVar5 = "TRUE";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "FALSE";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_UNPACK_LSB_FIRST: %s\n",pcVar5);
  glGetIntegerv(0xcf2,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x758,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_UNPACK_ROW_LENGTH: %d\n",local_24);
  glGetIntegerv(0x806d,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x75b,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_UNPACK_SKIP_IMAGES: %d\n",local_24);
  glGetIntegerv(0xcf3,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x75e,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_UNPACK_SKIP_ROWS: %d\n",local_24);
  glGetBooleanv(0xcf0,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x762,"void OpenGL_LogState_PixelMode(OpenGlDebugWriter*)");
  }
  pcVar5 = "TRUE";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "FALSE";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_UNPACK_SWAP_BYTES: %s\n",pcVar5);
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Points\n");
  glGetFloatv(0xb11,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x76c,"void OpenGL_LogState_Points(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_POINT_SIZE: %f\n",(double)local_28);
  glGetFloatv(0xb12,&local_48);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x771,"void OpenGL_LogState_Points(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)
            (puVar2,"\tGL_POINT_SIZE_RANGE: { %f, %f }\n",(double)local_48,(double)local_44);
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Polygons\n");
  glGetFloatv(0x8038,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7a2,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_OFFSET_FACTOR: %f\n",(double)local_28);
  glGetBooleanv(0xb44,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7a7,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  pcVar5 = "TRUE";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "FALSE";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_CULL_FACE: %s\n",pcVar5);
  glGetIntegerv(0xb45,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7ab,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  if (local_24 == 0x404) {
    pcVar5 = "GL_FRONT";
LAB_040dcf85:
    (**(code **)*puVar2)(puVar2,"\tGL_CULL_FACE_MODE: %s\n",pcVar5);
  }
  else {
    if (local_24 == 0x405) {
      pcVar5 = "GL_BACK";
      goto LAB_040dcf85;
    }
    if (local_24 == 0x408) {
      pcVar5 = "GL_FRONT_AND_BACK";
      goto LAB_040dcf85;
    }
    (**(code **)*puVar2)(puVar2,"\tGL_CULL_FACE_MODE: %#x\n",local_24);
  }
  glGetIntegerv(0xb46,&local_24);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7b3,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  if (local_24 == 0x901) {
    pcVar5 = "GL_CCW";
  }
  else {
    if (local_24 != 0x900) {
      (**(code **)*puVar2)(puVar2,"\tGL_FRONT_FACE: %#x\n",local_24);
      goto LAB_040db873;
    }
    pcVar5 = "GL_CW";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_FRONT_FACE: %s\n",pcVar5);
LAB_040db873:
  glGetBooleanv(0x8037,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7bb,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_OFFSET_FILL: %s\n",pcVar5);
  glGetBooleanv(0x2a02,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7be,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_OFFSET_LINE: %s\n",pcVar5);
  glGetBooleanv(0x2a01,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7c1,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_OFFSET_POINT: %s\n",pcVar5);
  glGetFloatv(0x2a00,&local_28);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7c5,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_OFFSET_UNITS: %f\n",(double)local_28);
  glGetBooleanv(0xb41,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x7c9,"void OpenGL_LogState_Polygons(OpenGlDebugWriter*)");
  }
  pcVar5 = "Enabled";
  if ((char)local_20[0] == '\0') {
    pcVar5 = "Disabled";
  }
  (**(code **)*puVar2)(puVar2,"\tGL_POLYGON_SMOOTH: %s\n",pcVar5);
  OpenGL_LogState_Textures();
  puVar2 = DAT_044dac80;
  (**(code **)*DAT_044dac80)(DAT_044dac80,"Program\n");
  glGetIntegerv(0x8b8d,local_20);
  iVar4 = glGetError();
  if (iVar4 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x83c,"void OpenGL_LogState_Program(OpenGlDebugWriter*)");
  }
  (**(code **)*puVar2)(puVar2,"\tGL_CURRENT_PROGRAM: %d\n",local_20[0]);
  return;
}

// --- OpenGL_LogState_RenderTargets @0x040d0580 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_RenderTargets(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  undefined1 local_24 [7];
  char local_1d [13];
  
  (**(code **)*param_1)(param_1,"Render Targets\n");
  glGetBooleanv(0x8db9,local_1d);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x5ca,"void OpenGL_LogState_RenderTargets(OpenGlDebugWriter*)");
  }
  pcVar2 = "TRUE";
  if (local_1d[0] == '\0') {
    pcVar2 = "FALSE";
  }
  (**(code **)*param_1)(param_1,"\tGL_FRAMEBUFFER_SRGB: %s\n",pcVar2);
  glGetIntegerv(0x8ca6,local_30);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x5cf,"void OpenGL_LogState_RenderTargets(OpenGlDebugWriter*)");
  }
  local_2c = 0;
  glGetIntegerv(0x8824,&local_2c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x5d3,"void OpenGL_LogState_RenderTargets(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_MAX_DRAW_BUFFERS: %d\n",local_2c);
  if (0 < local_2c) {
    iVar1 = 0;
    do {
      glGetIntegerv(iVar1 + 0x8825,&local_28);
      iVar4 = glGetError();
      if (iVar4 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x5da,"void OpenGL_LogState_RenderTargets(OpenGlDebugWriter*)");
      }
      iVar4 = local_28;
      if (local_28 != 0) {
        iVar3 = GL_ColorAttachment_ToString();
        if (iVar3 == 0) {
          (**(code **)*param_1)(param_1,"\t\tGL_DRAW_BUFFER%d: %#x\n",iVar1,iVar4);
        }
        else {
          (**(code **)*param_1)(param_1,"\t\tGL_DRAW_BUFFER%d: %s\n",iVar1,iVar3);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_2c);
  }
  glGetIntegerv(0x8caa,local_24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x5e7,"void OpenGL_LogState_RenderTargets(OpenGlDebugWriter*)");
  }
  glGetIntegerv(0xc02,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x5e9,"void OpenGL_LogState_RenderTargets(OpenGlDebugWriter*)");
  }
  iVar1 = GL_ColorAttachment_ToString();
  if (iVar1 != 0) {
    (**(code **)*param_1)(param_1,"\tGL_READ_BUFFER: %s\n",iVar1);
    return;
  }
  (**(code **)*param_1)(param_1,"\tGL_READ_BUFFER: %#x\n",local_28);
  return;
}

// --- OpenGL_LogState_Renderbuffer @0x040cd710 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_Renderbuffer(undefined4 *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_188 [256];
  char local_88 [64];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20 [4];
  
  bVar6 = 0;
  glGetIntegerv(0x8ca7,&local_48);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x88e,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
  }
  cVar1 = (*DAT_0451e650)(param_2);
  if (cVar1 == '\0') {
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x892,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (**(code **)*param_1)(param_1,"Renderbuffer ID %d is not a valid renderbuffer ID!",param_2);
  }
  else {
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x896,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    if (param_2 != local_48) {
      (*DAT_0451e690)(0x8d41,param_2);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x89b,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
      }
    }
    puVar3 = &DAT_0430227c;
    if (param_3 == '\0') {
      puVar3 = &DAT_04328763;
    }
    (**(code **)*param_1)(param_1,"%sRenderbuffer object %d info\n",puVar3,param_2);
    (*DAT_0451e658)(0x8d41,0x8d42,&local_44);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8a2,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d43,&local_40);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8a4,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d44,&local_3c);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8a6,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d50,&local_38);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8a8,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d51,&local_34);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8aa,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d52,&local_30);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8ac,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d53,&local_2c);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8ae,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d54,&local_28);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8b0,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8d55,&local_24);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8b2,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    (*DAT_0451e658)(0x8d41,0x8cab,local_20);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x8b4,"void OpenGL_LogState_Renderbuffer(OpenGlDebugWriter*, GLint, bool)");
    }
    pcVar5 = local_188;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    pcVar5 = local_88;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    uVar4 = OpenGL_InternalFormatToString(local_3c);
    sprintf(local_188,"%d x %d, format: %s, samples: %d",local_44,local_40,uVar4,local_20[0]);
    uVar7 = local_40;
    uVar8 = local_20[0];
    if (local_38 != 0) {
      sprintf(local_88,", red: %d",local_38,local_40,uVar4,local_20[0]);
      strcat(local_188,local_88);
      uVar7 = local_40;
      uVar8 = local_20[0];
    }
    if (local_34 != 0) {
      sprintf(local_88,", green: %d",local_34,uVar7,uVar4,uVar8);
      strcat(local_188,local_88);
    }
    if (local_30 != 0) {
      sprintf(local_88,", blue: %d",local_30,uVar7,uVar4,uVar8);
      strcat(local_188,local_88);
    }
    if (local_2c != 0) {
      sprintf(local_88,", alpha: %d",local_2c,uVar7,uVar4,uVar8);
      strcat(local_188,local_88);
    }
    if (local_28 != 0) {
      sprintf(local_88,", depth: %d",local_28);
      strcat(local_188,local_88);
    }
    if (local_24 != 0) {
      sprintf(local_88,", stencil: %d",local_24);
      strcat(local_188,local_88);
    }
    puVar3 = &DAT_0430227c;
    if (param_3 == '\0') {
      puVar3 = &DAT_04328763;
    }
    (**(code **)*param_1)(param_1,"%s\t%s\n",puVar3,local_188);
    if (param_2 != local_48) {
      (*DAT_0451e690)(0x8d41,local_48);
      return;
    }
  }
  return;
}

// --- OpenGL_LogState_Textures @0x040cd310 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_Textures(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20 [4];
  
  (**(code **)*param_1)(param_1,"Textures\n");
  glGetIntegerv(0x84e0,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x80f,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_ACTIVE_TEXTURE: %d\n",local_28 + -0x84c0);
  glGetIntegerv(0x8872,&local_24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x813,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_MAX_TEXTURE_IMAGE_UNITS: %d\n",local_24);
  glGetIntegerv(0x8b4c,local_20);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x817,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"\tGL_MAX_VERTEX_TEXTURE_IMAGE_UNITS: %d\n",local_20[0]);
  if (local_24 < 0x11) {
    if (local_24 < 1) goto LAB_040cd4ff;
  }
  else {
    local_24 = 0x10;
  }
  iVar1 = 0;
  do {
    while( true ) {
      (*DAT_0451eeac)(iVar1 + 0x84c0);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x820,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
      }
      glGetIntegerv(0x8068,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x822,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
      }
      if (local_20[0] != 0) {
        (**(code **)*param_1)
                  (param_1,"\t\tUnit %2d : GL_TEXTURE_BINDING_1D: %d\n",iVar1,local_20[0]);
      }
      glGetIntegerv(0x8069,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x826,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
      }
      if (local_20[0] != 0) {
        (**(code **)*param_1)
                  (param_1,"\t\tUnit %2d : GL_TEXTURE_BINDING_2D: %d\n",iVar1,local_20[0]);
      }
      glGetIntegerv(0x806a,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x82a,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
      }
      if (local_20[0] != 0) {
        (**(code **)*param_1)
                  (param_1,"\t\tUnit %2d : GL_TEXTURE_BINDING_3D: %d\n",iVar1,local_20[0]);
      }
      glGetIntegerv(0x8514,local_20);
      iVar2 = glGetError();
      if (iVar2 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x82e,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
      }
      if (local_20[0] != 0) break;
      iVar1 = iVar1 + 1;
      if (local_24 <= iVar1) goto LAB_040cd4ff;
    }
    iVar2 = iVar1 + 1;
    (**(code **)*param_1)
              (param_1,"\t\tUnit %2d : GL_TEXTURE_BINDING_CUBE_MAP: %d\n",iVar1,local_20[0]);
    iVar1 = iVar2;
  } while (iVar2 < local_24);
LAB_040cd4ff:
  (*DAT_0451eeac)(local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x833,"void OpenGL_LogState_Textures(OpenGlDebugWriter*)");
  }
  return;
}

// --- OpenGL_LogState_VertexArrays @0x040cc800 ---
/* source: openGlDebugFunctions */

void __regparm3 OpenGL_LogState_VertexArrays(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20 [4];
  
  local_28 = 0;
  glGetIntegerv(0x8869,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x304,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
  }
  (**(code **)*param_1)(param_1,"GL_MAX_VERTEX_ATTRIBS: %d\n",local_28);
  if (0 < local_28) {
    iVar1 = 0;
    do {
      while( true ) {
        (*DAT_0451ec80)(iVar1,0x8622,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x30d,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        (**(code **)*param_1)(param_1,"Vertex Attrib Array %d\n",iVar1);
        if (local_24 == 0) break;
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_ENABLED: TRUE\n");
        (*DAT_0451ec80)(iVar1,0x8623,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x313,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_SIZE: %d\n",local_24);
        (*DAT_0451ec80)(iVar1,0x8624,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x316,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_STRIDE: %d\n",local_24);
        (*DAT_0451ec80)(iVar1,0x8625,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x319,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        pcVar2 = "!!!unknown!!!";
        if (local_24 - 0x1400U < 0xc) {
          pcVar2 = (&PTR_s_GL_BYTE_04308360)[local_24 - 0x1400U];
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_TYPE: %s\n",pcVar2);
        (*DAT_0451ec80)(iVar1,0x886a,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x31c,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        pcVar2 = "TRUE";
        if (local_24 == 0) {
          pcVar2 = "FALSE";
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_NORMALIZED: %s\n",pcVar2);
        (*DAT_0451ec8c)(iVar1,0x8645,local_20);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,799,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_POINTER: %p\n",local_20[0]);
        (*DAT_0451ec80)(iVar1,0x889f,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x322,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING: %d\n",local_24);
        (*DAT_0451ec80)(iVar1,0x88fd,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x325,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        pcVar2 = "TRUE";
        if (local_24 == 0) {
          pcVar2 = "FALSE";
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_INTEGER: %s\n",pcVar2);
        (*DAT_0451ec80)(iVar1,0x88fe,&local_24);
        iVar3 = glGetError();
        if (iVar3 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0x328,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
        }
        (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_DIVISOR: %d\n",local_24);
LAB_040cca6b:
        iVar1 = iVar1 + 1;
        if (local_28 <= iVar1) {
          return;
        }
      }
      (**(code **)*param_1)(param_1,"\tGL_VERTEX_ATTRIB_ARRAY_ENABLED: FALSE\n");
      if (iVar1 == 0) goto LAB_040cca6b;
      (*DAT_0451ec84)(iVar1,0x8626,&local_48);
      iVar3 = glGetError();
      if (iVar3 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x333,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
      }
      (**(code **)*param_1)
                (param_1,"\tGL_CURRENT_VERTEX_ATTRIB (assumming float): { %f, %f, %f, %f }\n",
                 (double)local_48,(double)local_44,(double)local_40,(double)local_3c);
      if (DAT_0451eb0c == (code *)0x0) goto LAB_040cca6b;
      (*DAT_0451eb0c)(iVar1,0x8626,&local_38);
      iVar3 = glGetError();
      if (iVar3 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0x33a,"void OpenGL_LogState_VertexArrays(OpenGlDebugWriter*)");
      }
      iVar1 = iVar1 + 1;
      (**(code **)*param_1)
                (param_1,"\tGL_CURRENT_VERTEX_ATTRIB (assumming uint32): { %u, %u, %u, %u }\n",
                 local_38,local_34,local_30,local_2c);
    } while (iVar1 < local_28);
  }
  return;
}

// --- SaveDDS @0x040cec50 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: openGlDebugFunctions */

void __regparm3 SaveDDS(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined1 *__ptr;
  char *pcVar7;
  FILE *__s;
  size_t sVar8;
  void *pvVar9;
  size_t sVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  undefined *puVar18;
  undefined4 local_8c4;
  char local_8b4 [1024];
  float local_4b4 [256];
  undefined4 local_b4;
  undefined *local_b0;
  int local_ac;
  int local_a8;
  size_t local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_4c;
  float local_38 [2];
  size_t local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  if (DAT_0451ca13 != '\0') {
    (*DAT_0451eec8)(param_3,param_4,0x9106,&local_30);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xd52,
                   "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                  );
    }
    if (local_30 != 0) {
      puts(
          "Texture we try to get data for is multisampled! Add code to handle this when you need it."
          );
      return;
    }
  }
  strcpy(local_8b4,param_2);
  (*DAT_0451eec8)(param_3,param_4,0x1003,&local_2c);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd60,
                 "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                );
  }
  (*DAT_0451eec8)(param_3,param_4,0x1000,&local_28);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd64,
                 "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                );
  }
  (*DAT_0451eec8)(param_3,param_4,0x1001,&local_24);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd66,
                 "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                );
  }
  (*DAT_0451eec8)(param_3,param_4,0x86a1,local_20);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd6a,
                 "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                );
  }
  if (local_20[0] != 0) {
    (*DAT_0451eec8)(param_3,param_4,0x86a0,&local_30);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xd71,
                   "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                  );
    }
    __ptr = malloc(local_30);
    (*DAT_0451ee8c)(param_3,param_4,__ptr);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xd75,
                   "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                  );
    }
    strcpy((char *)local_4b4,param_2);
    pcVar7 = strrchr((char *)local_4b4,0x2e);
    if (pcVar7 == (char *)0x0) {
      FUN_0400a810(&PTR_DAT_042dc67e,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x136,
                   "void SaveDDS(OpenGlDebugWriter*, const char*, int32_t, int32_t, GLint, const void*, uint32_t)"
                  );
    }
    builtin_strncpy(pcVar7,".dds",5);
    __s = fopen64((char *)local_4b4,"wb");
    if (__s == (FILE *)0x0) {
      (**(code **)*param_1)(param_1,"Couldn\'t open file \'%s\' to write!",local_4b4);
    }
    else {
      local_38[0] = 1.7894982e-19;
      local_38[1] = (float)((uint)local_38[1] & 0xffffff00);
      sVar8 = fwrite(local_38,1,4,__s);
      if (sVar8 == 4) {
        bzero(&local_b4,0x7c);
        local_b4 = 0x7c;
        local_b0 = &DAT_00081007;
        local_a0 = 1;
        local_9c = 1;
        local_a8 = local_28;
        local_4c = 0x1000;
        local_6c = 0x20;
        local_68 = 4;
        local_ac = local_24;
        local_a4 = local_30;
        if (((local_2c - 0x83f0U < 2) || (local_2c == 0x8c4c)) || (local_2c == 0x8c4d)) {
          local_64 = 0x31545844;
        }
        else if ((local_2c == 0x8c4e) || (local_2c == 0x83f2)) {
          local_64 = 0x33545844;
        }
        else if ((local_2c == 0x8c4f) || (local_2c == 0x83f3)) {
          local_64 = 0x35545844;
        }
        sVar8 = fwrite(&local_b4,1,0x7c,__s);
        if (sVar8 == 0x7c) {
          sVar8 = fwrite(__ptr,1,local_30,__s);
          if (local_30 == sVar8) {
            fclose(__s);
          }
          else {
            fclose(__s);
            (**(code **)*param_1)(param_1,"Couldn\'t write to file \'%s\' (3)!",local_4b4);
          }
        }
        else {
          fclose(__s);
          (**(code **)*param_1)(param_1,"Couldn\'t write to file \'%s\' (2)!",local_4b4);
        }
      }
      else {
        fclose(__s);
        (**(code **)*param_1)(param_1,"Couldn\'t write to file \'%s\'!",local_4b4);
      }
    }
    goto LAB_040ceea5;
  }
  sVar8 = local_28 * 4 * local_24;
  __ptr = malloc(sVar8);
  if (local_2c < 0x8231) {
    if (local_2c < 0x822d) {
      if (0x8051 < local_2c) {
        if (local_2c < 0x81a7) {
          if (0x81a4 < local_2c) goto LAB_040cf23f;
          if (local_2c - 0x8056U < 6) goto LAB_040cf790;
        }
        else if (0x8228 < local_2c) goto LAB_040cf470;
        goto LAB_040cf82c;
      }
      if (0x804e < local_2c) goto LAB_040cf470;
      if (local_2c == 0x803c) goto LAB_040cf790;
      if (local_2c < 0x803d) {
        if (local_2c != 0x2a10) goto LAB_040cf82c;
      }
      else if (local_2c != 0x8042) {
        if (local_2c == 0x8043) goto LAB_040cf790;
        goto LAB_040cf82c;
      }
LAB_040cf470:
      local_8c4 = 1;
      goto LAB_040cf47a;
    }
LAB_040ceef3:
    local_8c4 = 1;
    bVar5 = true;
LAB_040cef04:
    if (DAT_04408c90 != '\0') {
      uVar13 = OpenGL_InternalFormatToString(local_2c);
      printf("Texture image has internal format %s. Receiving data as floats, with possibility of rescale.\n"
             ,uVar13);
    }
    pvVar9 = malloc(sVar8 * 4);
    (*DAT_0451eecc)(param_3,param_4,0x1908,0x1406,pvVar9);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xdba,
                   "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                  );
    }
    local_4b4[0] = 3.4028235e+38;
    local_4b4[1] = 3.4028235e+38;
    local_38[0] = 1.1754944e-38;
    local_38[1] = 1.1754944e-38;
    if (0 < (int)sVar8) {
      fVar16 = 3.4028235e+38;
      fVar17 = 1.1754944e-38;
      sVar10 = 0;
      while( true ) {
        fVar1 = *(float *)((int)pvVar9 + sVar10 * 4);
        bVar15 = (int)sVar10 % 4 == 3;
        if (fVar1 < fVar16) {
          local_4b4[bVar15] = fVar1;
        }
        fVar16 = local_4b4[0];
        if (fVar17 < fVar1) {
          local_38[bVar15] = fVar1;
        }
        fVar17 = local_38[0];
        sVar10 = sVar10 + 1;
        if (sVar10 == sVar8) break;
        bVar15 = (int)sVar10 % 4 == 3;
        fVar16 = local_4b4[bVar15];
        fVar17 = local_38[bVar15];
      }
      if (0.0 <= local_4b4[0]) {
        if (local_38[0] <= DAT_042dbf3c) goto LAB_040cf0cc;
        if (0 < (int)sVar8) goto LAB_040cf016;
      }
      else {
LAB_040cf016:
        sVar10 = 0;
        do {
          if ((int)sVar10 % 4 != 3) {
            *(float *)((int)pvVar9 + sVar10 * 4) =
                 (*(float *)((int)pvVar9 + sVar10 * 4) - local_4b4[0]) /
                 (local_38[0] - local_4b4[0]);
          }
          sVar10 = sVar10 + 1;
        } while (sVar10 != sVar8);
      }
      pcVar7 = strrchr(local_8b4,0x2e);
      if (pcVar7 == (char *)0x0) {
        FUN_0400a810(&DAT_04302371,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xdd6,
                     "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                    );
      }
      sprintf(pcVar7,"_min%f_max%f.tiff",SUB84((double)fVar16,0),
              (int)((ulonglong)(double)fVar16 >> 0x20),SUB84((double)fVar17,0),
              (int)((ulonglong)(double)fVar17 >> 0x20));
    }
LAB_040cf0cc:
    fVar17 = local_38[1];
    fVar16 = local_4b4[1];
    if ((!bVar5) && ((local_4b4[1] < 0.0 || (DAT_042dbf3c < local_38[1])))) {
      sVar10 = 0;
      if (0 < (int)sVar8) {
        while (sVar10 = sVar10 + 1, sVar10 != sVar8) {
          if ((int)sVar10 % 4 == 3) {
            *(float *)((int)pvVar9 + sVar10 * 4) =
                 (*(float *)((int)pvVar9 + sVar10 * 4) - local_4b4[1]) /
                 (local_38[1] - local_4b4[1]);
          }
        }
      }
      pcVar7 = strrchr(local_8b4,0x2e);
      if (pcVar7 == (char *)0x0) {
        FUN_0400a810(&DAT_04302371,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xde7,
                     "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                    );
      }
      sprintf(pcVar7,"_amin%f_amax%f.tiff",SUB84((double)fVar16,0),
              (int)((ulonglong)(double)fVar16 >> 0x20),SUB84((double)fVar17,0),
              (int)((ulonglong)(double)fVar17 >> 0x20));
    }
    fVar16 = _DAT_042dc5a0;
    if (0 < (int)sVar8) {
      sVar10 = 0;
      do {
        __ptr[sVar10] = (char)(int)(*(float *)((int)pvVar9 + sVar10 * 4) * fVar16);
        sVar10 = sVar10 + 1;
      } while (sVar10 != sVar8);
    }
    free(pvVar9);
  }
  else {
    if (local_2c < 0x8c42) {
      if (0x8c3f < local_2c) goto LAB_040cf470;
      if (local_2c != 0x881a) {
        if (local_2c < 0x881b) {
          if (local_2c == 0x8814) goto LAB_040cf526;
        }
        else {
          if (local_2c == 0x88f0) goto LAB_040cf23f;
          if (local_2c == 0x8c3a) goto LAB_040ceef3;
        }
LAB_040cf82c:
        uVar13 = OpenGL_InternalFormatToString(local_2c);
        printf("Unhandled internal texture format: %s (%#x)!\n",uVar13,local_2c);
        goto LAB_040ceea5;
      }
LAB_040cf526:
      local_8c4 = 0;
      bVar5 = false;
      goto LAB_040cef04;
    }
    if (local_2c != 0x8c45) {
      if (0x8c45 < local_2c) {
        if (local_2c == 0x8c47) goto LAB_040cf470;
        if ((local_2c < 0x8c47) || (1 < local_2c - 0x8cacU)) goto LAB_040cf82c;
LAB_040cf23f:
        if (DAT_04408c90 != '\0') {
          uVar13 = OpenGL_InternalFormatToString(local_2c);
          printf("Texture image has internal format %s. Receiving data as floats, with possibility of rescale.\n"
                 ,uVar13);
        }
        iVar6 = sVar8 * 4;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 3;
        }
        sVar10 = iVar6 >> 2;
        pvVar9 = malloc(sVar10);
        (*DAT_0451eecc)(param_3,param_4,0x1902,0x1406,pvVar9);
        iVar6 = glGetError();
        if (iVar6 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xe01,
                       "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                      );
        }
        if ((int)sVar10 < 0) {
          sVar10 = sVar10 + 3;
        }
        iVar6 = (int)sVar10 >> 2;
        if (0 < iVar6) {
          iVar11 = 0;
          puVar3 = DAT_04308f04;
          puVar4 = PTR_DAT_04308f00;
          do {
            puVar18 = *(undefined **)((int)pvVar9 + iVar11 * 4);
            iVar11 = iVar11 + 1;
            puVar2 = puVar18;
            if ((float)puVar18 <= (float)puVar4) {
              puVar2 = puVar4;
            }
            if ((float)puVar3 <= (float)puVar18) {
              puVar18 = puVar3;
            }
            puVar3 = puVar18;
            puVar4 = puVar2;
          } while (iVar11 != iVar6);
          if (((float)puVar18 < 0.0) || (DAT_042dbf3c < (float)puVar2)) {
            if (DAT_04408c90 != '\0') {
              printf("Float texture, detected values from outside of (0.0-1.0) range. Minimal value: %f, maximal: %f . Rescaling data to fit in range.\n"
                     ,SUB84((double)(float)puVar18,0),
                     (int)((ulonglong)(double)(float)puVar18 >> 0x20),SUB84((double)(float)puVar2,0)
                     ,(int)((ulonglong)(double)(float)puVar2 >> 0x20));
            }
            iVar11 = 0;
            do {
              *(float *)((int)pvVar9 + iVar11 * 4) =
                   (*(float *)((int)pvVar9 + iVar11 * 4) - (float)puVar18) /
                   ((float)puVar2 - (float)puVar18);
              iVar11 = iVar11 + 1;
            } while (iVar11 != iVar6);
            pcVar7 = strrchr(local_8b4,0x2e);
            if (pcVar7 == (char *)0x0) {
              FUN_0400a810(&DAT_04302371,
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0xe1e,
                           "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                          );
            }
            sprintf(pcVar7,"_min%f_max%f.tiff",SUB84((double)(float)puVar18,0),
                    (int)((ulonglong)(double)(float)puVar18 >> 0x20),SUB84((double)(float)puVar2,0),
                    (int)((ulonglong)(double)(float)puVar2 >> 0x20));
          }
        }
        fVar16 = _DAT_042dc5a0;
        sVar10 = sVar8 + 3;
        if (-1 < (int)sVar8) {
          sVar10 = sVar8;
        }
        if (0 < (int)sVar10 >> 2) {
          iVar6 = 0;
          puVar12 = __ptr;
          do {
            fVar17 = *(float *)((int)pvVar9 + iVar6 * 4);
            iVar6 = iVar6 + 1;
            puVar12[3] = 0xff;
            uVar14 = (undefined1)(int)(fVar17 * fVar16);
            *puVar12 = uVar14;
            puVar12[1] = uVar14;
            puVar12[2] = uVar14;
            puVar12 = puVar12 + 4;
          } while (iVar6 != (int)sVar10 >> 2);
        }
        free(pvVar9);
        local_8c4 = 1;
        goto LAB_040cf4bb;
      }
      if (0x8c43 < local_2c) goto LAB_040cf82c;
    }
LAB_040cf790:
    local_8c4 = 0;
LAB_040cf47a:
    if (DAT_04408c90 != '\0') {
      uVar13 = OpenGL_InternalFormatToString(local_2c);
      printf("Texture image has internal format %s. Receiving data directly.\n",uVar13);
    }
    (*DAT_0451eecc)(param_3,param_4,0x1908,0x8367,__ptr);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xda4,
                   "void DumpTextureDataTakenByTexImage(OpenGlDebugWriter*, const char*, GLenum, GLint)"
                  );
    }
  }
LAB_040cf4bb:
  FUN_04024310(local_8b4,local_28,local_24,1,local_8c4,__ptr);
LAB_040ceea5:
  free(__ptr);
  return;
}

// --- openGlDebugFunctions_040d0cc0 @0x040d0cc0 ---
/* source: openGlDebugFunctions */

void __regparm3 openGlDebugFunctions_040d0cc0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  void *__ptr;
  undefined4 uVar3;
  int iVar4;
  undefined4 *__ptr_00;
  undefined *puVar5;
  int iVar6;
  undefined1 *local_ac;
  int local_a4;
  void *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  size_t local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xbc7,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"Program %d info\n",param_2);
  (*DAT_0451eca8)(param_2,0x8b80,&local_58);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xbce,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  pcVar2 = "TRUE";
  if (local_58 == 0) {
    pcVar2 = "FALSE";
  }
  (**(code **)*param_1)(param_1,"\tGL_DELETE_STATUS: %s\n",pcVar2);
  (*DAT_0451eca8)(param_2,0x8b82,&local_58);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xbd1,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  pcVar2 = "TRUE";
  if (local_58 == 0) {
    pcVar2 = "FALSE";
  }
  (**(code **)*param_1)(param_1,"\tGL_LINK_STATUS: %s\n",pcVar2);
  (*DAT_0451eca8)(param_2,0x8b83,&local_58);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xbd4,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  pcVar2 = "TRUE";
  if (local_58 == 0) {
    pcVar2 = "FALSE";
  }
  (**(code **)*param_1)(param_1,"\tGL_VALIDATE_STATUS: %s\n",pcVar2);
  (*DAT_0451eca8)(param_2,0x8b85,&local_54);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xbd9,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  if (local_54 != 0) {
    local_44 = 0;
    __ptr_00 = malloc(local_54 << 2);
    (*DAT_0451ecb4)(param_2,local_54,&local_44,__ptr_00);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xbdf,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
    }
    pcVar2 = malloc(local_54 * 10);
    *pcVar2 = '\0';
    if (0 < local_54) {
      iVar1 = 0;
      uVar3 = *__ptr_00;
      puVar5 = &DAT_04328763;
      while( true ) {
        iVar1 = iVar1 + 1;
        sprintf((char *)&local_98,"%s%u",puVar5,uVar3);
        strcat(pcVar2,(char *)&local_98);
        if (local_54 <= iVar1) break;
        uVar3 = __ptr_00[iVar1];
        puVar5 = &DAT_04328763;
        if (iVar1 != 0) {
          puVar5 = &DAT_042e7ad2;
        }
      }
    }
    (**(code **)*param_1)(param_1,"\tAttached shaders: %d ( %s )\n",local_54,pcVar2);
    free(pcVar2);
    free(__ptr_00);
  }
  (*DAT_0451eca8)(param_2,0x8b89,&local_50);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xbf3,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"\tActive attributes: %d\n",local_50);
  if (local_50 != 0) {
    (*DAT_0451eca8)(param_2,0x8b8a,&local_44);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xbfb,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
    }
    local_ac = (void *)0x0;
    if (local_44 != 0) {
      local_ac = malloc(local_44 + 1);
      *(undefined1 *)((int)local_ac + local_44) = 0;
    }
    if (0 < local_50) {
      iVar1 = 0;
      do {
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        (*DAT_0451ecbc)(param_2,iVar1,local_44 + 1,&local_40,&local_3c,&local_38,local_ac);
        iVar4 = glGetError();
        if (iVar4 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xc09);
        }
        (*DAT_0451ecb0)(param_2,local_ac);
        iVar4 = glGetError();
        if (iVar4 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xc0b);
        }
        OpenGL_DataTypeToString();
        iVar4 = iVar1 + 1;
        (**(code **)*param_1)(param_1,"\t%04d: %s ( type %s, location %d, size %d )\n",iVar1);
        iVar1 = iVar4;
      } while (iVar4 < local_50);
    }
    free(local_ac);
  }
  (*DAT_0451eca8)(param_2,0x8b86,&local_4c);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xc16,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"\tActive uniforms: %d\n",local_4c);
  if (local_4c != 0) {
    (*DAT_0451eca8)(param_2,0x8b87,&local_38);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xc1e,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
    }
    local_ac = (undefined1 *)0x0;
    if (local_38 != 0) {
      local_ac = malloc(local_38 + 1);
      local_ac[local_38] = 0;
    }
    if (0 < local_4c) {
      local_a4 = 0;
      do {
        if (DAT_0451e0c0 == (code *)0x0) {
          *local_ac = 0;
        }
        else {
          (*DAT_0451e0c0)(param_2,local_a4,local_38 + 1,&local_3c,local_ac);
          iVar1 = glGetError();
          if (iVar1 != 0) {
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                        );
          }
        }
        if (DAT_0451e0bc != (code *)0x0) {
          local_20[0] = local_a4;
          (*DAT_0451e0bc)(param_2,1,local_20,0x8a37,&local_34);
          iVar1 = glGetError();
          if (iVar1 != 0) {
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0xc36);
          }
          (*DAT_0451e0bc)(param_2,1,local_20,0x8a38,&local_30);
          iVar1 = glGetError();
          if (iVar1 != 0) {
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0xc38);
          }
          (*DAT_0451e0bc)(param_2,1,local_20,0x8a3e,&local_24);
          iVar1 = glGetError();
          if (iVar1 != 0) {
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0xc3a);
          }
          uVar3 = OpenGL_DataTypeToString();
          (**(code **)*param_1)(param_1,"\t%04d: %s ( type %s )\n",local_a4,local_ac,uVar3);
          (*DAT_0451e0bc)(param_2,1,local_20,0x8a3a,&local_40);
          iVar1 = glGetError();
          if (iVar1 != 0) {
            FUN_0400a810("glGetError() == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0xc3f);
          }
          if (local_40 == -1) {
            local_44 = (*DAT_0451ec98)(param_2,local_ac);
            iVar1 = glGetError();
            if (iVar1 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0xc43);
            }
            (**(code **)*param_1)
                      (param_1,
                       "\t      ( size %d, DEFAULT uniform block  : location %d, is row major %d )\n"
                       ,local_30,local_44,local_24);
            if (0 < local_30) {
              local_a0 = (void *)0x0;
              do {
                if (local_34 < 0x8b5d) {
                  if ((local_34 < 0x8b5a) && (local_34 != 0x1406)) {
                    if (local_34 < 0x1407) {
                      if (local_34 == 0x1405) goto LAB_040d1828;
                    }
                    else if (local_34 - 0x8b50U < 3) goto LAB_040d1a70;
                    goto LAB_040d1760;
                  }
LAB_040d1a70:
                  (*DAT_0451ec94)(param_2,local_44);
                  iVar1 = glGetError();
                  if (iVar1 != 0) {
                    FUN_0400a810("glGetError() == 0",
                                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                                );
                  }
                }
                else {
                  if (0x8b64 < local_34) {
                    if (local_34 < 0x8b6b) goto LAB_040d1a70;
                    if (local_34 - 0x8dc6U < 3) {
LAB_040d1828:
                      (*DAT_0451eb14)(param_2,local_44);
                      iVar1 = glGetError();
                      if (iVar1 != 0) {
                        FUN_0400a810("glGetError() == 0",
                                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                                    );
                      }
                      goto LAB_040d1784;
                    }
                  }
LAB_040d1760:
                  (*DAT_0451ec90)(param_2,local_44);
                  iVar1 = glGetError();
                  if (iVar1 != 0) {
                    FUN_0400a810("glGetError() == 0",
                                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                                );
                  }
                }
LAB_040d1784:
                (**(code **)*param_1)(param_1,&DAT_043025ed);
                if (local_34 < 0x8b65) {
                  if (0x8b5c < local_34) goto LAB_040d17ac;
                  if (local_34 == 0x8b54) {
                    (**(code **)*param_1)(param_1,"{ %d, %d, %d }");
                  }
                  else if (local_34 < 0x8b55) {
                    if (local_34 == 0x8b50) {
                      (**(code **)*param_1)(param_1,"{ %f, %f }");
                    }
                    else if (local_34 < 0x8b51) {
                      if (local_34 == 0x1405) {
                        (**(code **)*param_1)(param_1,"%u");
                      }
                      else {
                        if (local_34 != 0x1406) {
                          if (local_34 != 0x1404) goto LAB_040d1bae;
                          goto LAB_040d17ac;
                        }
                        (**(code **)*param_1)(param_1,"%f");
                      }
                    }
                    else if (local_34 == 0x8b52) {
                      (**(code **)*param_1)(param_1,"{ %f, %f, %f, %f }");
                    }
                    else if (local_34 < 0x8b53) {
                      (**(code **)*param_1)(param_1,"{ %f, %f, %f }");
                    }
                    else {
                      (**(code **)*param_1)(param_1,"{ %d, %d }");
                    }
                  }
                  else if (local_34 == 0x8b58) {
                    (**(code **)*param_1)(param_1,"{ %s, %s, %s }");
                  }
                  else if (local_34 < 0x8b59) {
                    if (local_34 == 0x8b56) {
                      pcVar2 = "TRUE";
                      if ((char)local_98 == '\0') {
                        pcVar2 = "FALSE";
                      }
                      (**(code **)*param_1)(param_1,pcVar2);
                    }
                    else if (local_34 < 0x8b57) {
                      (**(code **)*param_1)(param_1,"{ %d, %d, %d, %d }");
                    }
                    else {
                      (**(code **)*param_1)(param_1,"{ %s, %s }");
                    }
                  }
                  else if (local_34 == 0x8b5a) {
                    (**(code **)*param_1)(param_1,"{ { %f, %f }, { %f, %f } }");
                  }
                  else if (local_34 < 0x8b5a) {
                    (**(code **)*param_1)(param_1,"{ %s, %s, %s, %s }");
                  }
                  else if (local_34 == 0x8b5b) {
                    (**(code **)*param_1)
                              (param_1,"{ { %f, %f, %f }, { %f, %f, %f }, { %f, %f, %f } }");
                  }
                  else {
                    if (local_34 != 0x8b5c) goto LAB_040d1bae;
                    (**(code **)*param_1)
                              (param_1,
                               "{ { %f, %f, %f, %f }, { %f, %f, %f, %f }, { %f, %f, %f, %f }, { %f, %f, %f, %f } }"
                              );
                  }
                }
                else {
                  if (local_34 < 0x8dc6) {
                    if (local_34 < 0x8dc0) {
                      if (local_34 == 0x8b67) {
                        (**(code **)*param_1)(param_1,"{ { %f, %f, %f }, { %f, %f, %f } }");
                      }
                      else if (local_34 < 0x8b68) {
                        if (local_34 == 0x8b65) {
                          (**(code **)*param_1)(param_1,"{ { %f, %f }, { %f, %f }, { %f, %f } }");
                        }
                        else if (local_34 == 0x8b66) {
                          (**(code **)*param_1)
                                    (param_1,"{ { %f, %f }, { %f, %f }, { %f, %f }, { %f, %f } }");
                        }
                        else {
LAB_040d1bae:
                          (**(code **)*param_1)(param_1,"!!!unknown!!!");
                        }
                      }
                      else if (local_34 == 0x8b69) {
                        (**(code **)*param_1)(param_1,"{ { %f, %f, %f, %f }, { %f, %f, %f, %f } }");
                      }
                      else if (local_34 < 0x8b69) {
                        (**(code **)*param_1)
                                  (param_1,
                                   "{ { %f, %f, %f }, { %f, %f, %f }, { %f, %f, %f }, { %f, %f, %f } }"
                                  );
                      }
                      else {
                        if (local_34 != 0x8b6a) goto LAB_040d1bae;
                        (**(code **)*param_1)
                                  (param_1,
                                   "{ { %f, %f, %f, %f }, { %f, %f, %f, %f }, { %f, %f, %f, %f } }")
                        ;
                      }
                      goto LAB_040d17c8;
                    }
                  }
                  else if (local_34 < 0x8dd9) {
                    if (local_34 < 0x8dc9) {
                      if (local_34 == 0x8dc7) {
                        (**(code **)*param_1)(param_1,"{ %u, %u, %u }",local_98,local_94,local_90);
                      }
                      else if (local_34 < 0x8dc8) {
                        (**(code **)*param_1)(param_1,"{ %u, %u }");
                      }
                      else {
                        (**(code **)*param_1)
                                  (param_1,"{ %u, %u, %u, %u }",local_98,local_94,local_90,local_8c)
                        ;
                      }
                      goto LAB_040d17c8;
                    }
                  }
                  else if (5 < local_34 - 0x9108U) goto LAB_040d1bae;
LAB_040d17ac:
                  (**(code **)*param_1)(param_1,"%d");
                }
LAB_040d17c8:
                (**(code **)*param_1)(param_1,"\n");
                local_a0 = (void *)((int)local_a0 + 1);
                local_44 = local_44 + 1;
              } while ((int)local_a0 < local_30);
            }
          }
          else {
            (*DAT_0451e0bc)(param_2,1,local_20,0x8a3b,&local_44);
            iVar1 = glGetError();
            if (iVar1 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0xc75);
            }
            (*DAT_0451e0bc)(param_2,1,local_20,0x8a3c,&local_2c);
            iVar1 = glGetError();
            if (iVar1 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0xc77);
            }
            (*DAT_0451e0bc)(param_2,1,local_20,0x8a3d,&local_28);
            iVar1 = glGetError();
            if (iVar1 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0xc79);
            }
            (**(code **)*param_1)
                      (param_1,
                       "\t      ( size %d, uniform block %d : offset %d array stride %d, matrix stride %d, is row major %d )\n"
                       ,local_30,local_40,local_44,local_2c,local_28,local_24);
          }
        }
        local_a4 = local_a4 + 1;
      } while (local_a4 < local_4c);
    }
    free(local_ac);
  }
  (*DAT_0451eca8)(param_2,0x8a36,&local_48);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xc89,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"\tActive uniform blocks: %d\n",local_48);
  if (local_48 != 0) {
    (*DAT_0451eca8)(param_2,0x8a35,local_20);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xc91,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
    }
    local_a0 = (void *)0x0;
    iVar1 = 0;
    if (local_20[0] != 0) {
      local_a0 = malloc(local_20[0] + 1);
      *(undefined1 *)((int)local_a0 + local_20[0]) = 0;
      iVar1 = local_20[0];
    }
    if (0 < local_48) {
      iVar4 = 0;
      do {
        (*DAT_0451e0c8)(param_2,iVar4,iVar1 + 1,&local_24,local_a0);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xc9e);
        }
        (*DAT_0451e0c4)(param_2,iVar4,0x8a3f);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xca0);
        }
        (*DAT_0451e0c4)(param_2,iVar4,0x8a40);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xca2);
        }
        (*DAT_0451e0c4)(param_2,iVar4,0x8a42);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xca4);
        }
        (*DAT_0451e0c4)(param_2,iVar4,0x8a44);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xca9);
        }
        (*DAT_0451e0c4)(param_2,iVar4,0x8a45);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xcab);
        }
        (*DAT_0451e0c4)(param_2,iVar4,0x8a46);
        iVar1 = glGetError();
        if (iVar1 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xcad);
        }
        iVar6 = iVar4 + 1;
        (**(code **)*param_1)
                  (param_1,
                   "\t%02d: %s ( binding %d, size %d, active uniforms %d, referenced by: %c%c%c )\n"
                   ,iVar4,local_a0,local_28,local_2c,local_30,(-(local_34 == 0) & 9U) + 0x56,
                   (-(local_44 == 0) & 0x18U) + 0x47,(-(local_40 == 0) & 0x19U) + 0x46);
        iVar1 = local_20[0];
        iVar4 = iVar6;
      } while (iVar6 < local_48);
    }
    free(local_a0);
  }
  (*DAT_0451ec10)(param_2);
  (*DAT_0451eca8)(param_2,0x8b83,&local_58);
  pcVar2 = "GL_FALSE";
  if (local_58 != 0) {
    pcVar2 = "GL_TRUE";
  }
  (**(code **)*param_1)(param_1,"\tProgram validation status: %s\n",pcVar2);
  (*DAT_0451eca8)(param_2,0x8b84,&local_58);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xcbd,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
  }
  if (local_58 != 0) {
    __ptr = malloc(local_58);
    (*DAT_0451ecac)(param_2,local_58,0,__ptr);
    (**(code **)*param_1)
              (param_1,
               "\tProgram info log:\n==============================================\n%s==============================================\n"
               ,__ptr);
    free(__ptr);
    return;
  }
  (**(code **)*param_1)(param_1,"\tNo program info log\n");
  return;
}

// --- openGlDebugFunctions_040d2a80 @0x040d2a80 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: openGlDebugFunctions */

void __regparm3
openGlDebugFunctions_040d2a80(int param_1,int param_2,char *param_3,int param_4,int param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *__ptr;
  void *pvVar8;
  size_t sVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  size_t sVar17;
  undefined1 *__src;
  float fVar18;
  float fVar19;
  undefined *puVar20;
  undefined4 local_474;
  int local_470;
  char *local_464;
  int local_460;
  char local_454 [1024];
  float local_54 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xe85,
                 "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                );
  }
  if (param_4 == 0) {
    if (param_1 == 0) {
      local_460 = 0x400;
      if ((param_2 != 0) && (local_460 = 0x402, param_2 != 1)) {
        puts("Pick color attachment: 0 (front), 1 (back)!");
        return;
      }
    }
    else {
      local_460 = 0x8ce0;
      if (param_2 != 0) {
        if (param_2 == 1) {
          local_460 = 0x8ce1;
        }
        else if (param_2 == 2) {
          local_460 = 0x8ce2;
        }
        else {
          local_460 = 0x8ce3;
          if (param_2 != 3) {
            puts("Pick color attachment index from 0-3 range!");
            return;
          }
        }
      }
    }
  }
  else if (param_4 == 1) {
    local_460 = (-(uint)(param_1 == 0) & 0xffff8b01) + 0x8d00;
  }
  else {
    if (param_4 != 2) {
      printf("Unrecognized data type ( %d ) in DumpFramebufferContent() call!\n",param_4);
      return;
    }
    local_460 = (-(uint)(param_1 == 0) & 0xffff8ae2) + 0x8d20;
  }
  glGetIntegerv(0x8caa,&local_44);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xeb3,
                 "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                );
  }
  glGetIntegerv(0xc02,&local_40);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xeb7,
                 "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                );
  }
  if (param_1 != local_44) {
    (*DAT_0451e694)(0x8ca8,param_1);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xebc,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
  }
  if ((param_4 == 0) && (local_40 != local_460)) {
    (*DAT_0451eed4)(local_460);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xec2,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
  }
  local_3c = -0x33333334;
  (*DAT_0451e65c)(0x8ca8,local_460,0x8cd0,&local_3c);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xec7,
                 "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                );
  }
  if (local_3c == 0) {
    if (DAT_04408c90 != '\0') {
      uVar7 = GL_ColorAttachment_ToString();
      printf("Nothing attached to framebuffer %d, slot %s!\n",param_1,uVar7);
    }
    goto LAB_040d2c3c;
  }
  if (local_3c == 0x8218) {
    FUN_0402d6b0(&local_38,&local_34);
    if (param_4 == 1) {
      local_30 = 0x8cac;
    }
    else {
      if (param_4 != 2) {
        local_30 = 0x8058;
        goto LAB_040d3307;
      }
      local_30 = 0x88f0;
    }
LAB_040d2d21:
    strcpy(local_454,param_3);
    goto LAB_040d2c3c;
  }
  if (local_3c == 0x1702) {
    local_2c = 0;
    (*DAT_0451e65c)(0x8ca8,local_460,0x8cd1,&local_2c);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xeee,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    (*DAT_0451e65c)(0x8ca8,local_460,0x8cd2,&local_28);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xef3,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    (*DAT_0451e65c)(0x8ca8,local_460,0x8cd3,&local_24);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xef8,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    iVar6 = 0xde1;
    if (local_24 != 0) {
      iVar6 = local_24;
    }
    iVar15 = (-(uint)(local_24 == 0) & 0xffff88ce) + 0x8513;
    glGetIntegerv((-(uint)(local_24 == 0) & 0xfffffb55) + 0x8514,local_20);
    iVar16 = glGetError();
    if (iVar16 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xf01,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    if (local_20[0] != local_2c) {
      glBindTexture(iVar15,local_2c);
      iVar16 = glGetError();
      if (iVar16 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xf07,
                     "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                    );
      }
    }
    (*DAT_0451eec8)(iVar6,local_28,0x1000,&local_38);
    iVar16 = glGetError();
    if (iVar16 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xf0c,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    (*DAT_0451eec8)(iVar6,local_28,0x1001,&local_34);
    iVar16 = glGetError();
    if (iVar16 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xf0e,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    (*DAT_0451eec8)(iVar6,local_28,0x1003,&local_30);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xf10,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    if (local_20[0] != local_2c) {
      glBindTexture(iVar15,local_20[0]);
      iVar6 = glGetError();
      if (iVar6 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xf16,
                     "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                    );
      }
    }
LAB_040d3307:
    strcpy(local_454,param_3);
  }
  else {
    if (local_3c != 0x8d41) {
      printf("Unrecognized framebuffer attachment type: %d! Debug this.\n",local_3c);
      goto LAB_040d2d21;
    }
    local_20[0] = 0;
    (*DAT_0451e65c)(0x8ca8,local_460,0x8cd1,local_20);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xf1d,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    glGetIntegerv(0x8ca7,&local_24);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xf21,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    if (local_20[0] != local_24) {
      (*DAT_0451e690)(0x8d41,local_20[0]);
      iVar6 = glGetError();
      if (iVar6 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xf26,
                     "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                    );
      }
    }
    (*DAT_0451e658)(0x8d41,0x8cab,&local_28);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xf2b,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
    if (local_28 == 0) {
      (*DAT_0451e658)(0x8d41,0x8d42,&local_38);
      iVar6 = glGetError();
      if (iVar6 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xf34,
                     "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                    );
      }
      (*DAT_0451e658)(0x8d41,0x8d43,&local_34);
      iVar6 = glGetError();
      if (iVar6 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xf36,
                     "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                    );
      }
      bVar5 = true;
      (*DAT_0451e658)(0x8d41,0x8d44,&local_30);
      iVar6 = glGetError();
      if (iVar6 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xf38,
                     "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                    );
      }
    }
    else {
      bVar5 = false;
      printf("Renderbuffer %d is multisampled - dumping data from such is unhandled atm. Add it?\n",
             local_20[0]);
    }
    if (local_20[0] != local_24) {
      (*DAT_0451e690)(0x8d41,local_24);
      iVar6 = glGetError();
      if (iVar6 != 0) {
        FUN_0400a810("glGetError() == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                     ,0xf3f,
                     "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                    );
      }
    }
    strcpy(local_454,param_3);
    if (!bVar5) goto LAB_040d2c3c;
  }
  local_464 = local_454;
  sVar17 = local_38 * 4 * local_34;
  __ptr = malloc(sVar17);
  iVar6 = local_30;
  if (local_30 < 0x8231) {
    if (local_30 < 0x822d) {
      if (0x8051 < local_30) {
        if (local_30 < 0x81a7) {
          if (0x81a4 < local_30) {
LAB_040d3958:
            if (param_4 == 1) {
              if (DAT_04408c90 != '\0') {
                uVar7 = OpenGL_InternalFormatToString(local_30);
                uVar12 = GL_ColorAttachment_ToString();
                printf("Framebuffer attachment %s has internal depth format %s. Receiving data as floats and rescaling.\n"
                       ,uVar12,uVar7);
              }
              if ((int)sVar17 < 0) {
                sVar17 = sVar17 + 3;
              }
              iVar16 = (int)sVar17 >> 2;
              pvVar8 = malloc(iVar16 * 4);
              glReadPixels(0,0,local_38,local_34,0x1902,0x1406,pvVar8);
              iVar6 = glGetError();
              if (iVar6 != 0) {
                FUN_0400a810("glGetError() == 0",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                             ,0xfe6,
                             "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                            );
              }
              if (0 < iVar16) {
                iVar6 = 0;
                puVar3 = DAT_04308f04;
                puVar4 = PTR_DAT_04308f00;
                do {
                  puVar20 = *(undefined **)((int)pvVar8 + iVar6 * 4);
                  iVar6 = iVar6 + 1;
                  puVar2 = puVar20;
                  if ((float)puVar20 <= (float)puVar4) {
                    puVar2 = puVar4;
                  }
                  if ((float)puVar3 <= (float)puVar20) {
                    puVar20 = puVar3;
                  }
                  puVar3 = puVar20;
                  puVar4 = puVar2;
                } while (iVar6 != iVar16);
                if (((float)puVar20 < 0.0) || (DAT_042dbf3c < (float)puVar2)) {
                  if (DAT_04408c90 != '\0') {
                    printf("Float texture, detected values from outside of (0.0-1.0) range. Minimal value: %f, maximal: %f . Rescaling data to fit in range.\n"
                           ,SUB84((double)(float)puVar20,0),
                           (int)((ulonglong)(double)(float)puVar20 >> 0x20),
                           SUB84((double)(float)puVar2,0),
                           (int)((ulonglong)(double)(float)puVar2 >> 0x20));
                  }
                  iVar6 = 0;
                  do {
                    *(float *)((int)pvVar8 + iVar6 * 4) =
                         (*(float *)((int)pvVar8 + iVar6 * 4) - (float)puVar20) /
                         ((float)puVar2 - (float)puVar20);
                    iVar6 = iVar6 + 1;
                  } while (iVar6 != iVar16);
                  pcVar10 = strrchr(local_464,0x2e);
                  if (pcVar10 == (char *)0x0) {
                    FUN_0400a810(&DAT_04302371,
                                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                                 ,0x1003,
                                 "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                                );
                  }
                  sprintf(pcVar10,"_min%f_max%f.tiff",SUB84((double)(float)puVar20,0),
                          (int)((ulonglong)(double)(float)puVar20 >> 0x20),
                          SUB84((double)(float)puVar2,0),
                          (int)((ulonglong)(double)(float)puVar2 >> 0x20));
                }
                fVar18 = _DAT_042dc5a0;
                iVar6 = 0;
                puVar11 = __ptr;
                do {
                  fVar19 = *(float *)((int)pvVar8 + iVar6 * 4);
                  iVar6 = iVar6 + 1;
                  puVar11[3] = 0xff;
                  uVar13 = (undefined1)(int)(fVar19 * fVar18);
                  *puVar11 = uVar13;
                  puVar11[1] = uVar13;
                  puVar11[2] = uVar13;
                  puVar11 = puVar11 + 4;
                } while (iVar6 != iVar16);
              }
              goto LAB_040d3c80;
            }
            puts("Trying to receive color or stencil information from depth attachment!");
            goto LAB_040d33d0;
          }
          if (local_30 - 0x8056U < 6) goto LAB_040d36f2;
        }
        else if (0x8228 < local_30) goto LAB_040d3618;
        goto LAB_040d33a0;
      }
      if (0x804e < local_30) goto LAB_040d3618;
      if (local_30 == 0x803c) goto LAB_040d36f2;
      if (local_30 < 0x803d) {
        if (local_30 != 0x2a10) goto LAB_040d33a0;
      }
      else if (local_30 != 0x8042) {
        if (local_30 == 0x8043) goto LAB_040d36f2;
        goto LAB_040d33a0;
      }
LAB_040d3618:
      local_474 = 1;
LAB_040d3622:
      if (param_4 == 0) {
        if (DAT_04408c90 != '\0') {
          uVar7 = OpenGL_InternalFormatToString(local_30);
          uVar12 = GL_ColorAttachment_ToString();
          printf("Framebuffer attachment %s has internal format %s. Receiving data directly.\n",
                 uVar12,uVar7);
        }
        glReadPixels(0,0,local_38,local_34,0x1908,0x8367,__ptr);
        iVar6 = glGetError();
        if (iVar6 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xf79,
                       "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                      );
        }
        goto LAB_040d3680;
      }
      uVar7 = OpenGL_InternalFormatToString(local_30);
      printf("Trying to receive depth or stencil information from color attachment! Internal format: %s\n"
             ,uVar7);
    }
    else {
LAB_040d30a5:
      local_474 = 1;
      bVar5 = true;
LAB_040d30b6:
      if (param_4 == 0) {
        if (DAT_04408c90 != '\0') {
          uVar7 = OpenGL_InternalFormatToString(local_30);
          uVar12 = GL_ColorAttachment_ToString();
          printf("Framebuffer attachment %s has internal format %s. Receiving data as floats, with possibility of rescale.\n"
                 ,uVar12,uVar7);
        }
        pvVar8 = malloc(sVar17 * 4);
        glReadPixels(0,0,local_38,local_34,0x1908,0x1406,pvVar8);
        iVar6 = glGetError();
        if (iVar6 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xf97,
                       "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                      );
        }
        local_54[0] = 3.4028235e+38;
        local_54[1] = 3.4028235e+38;
        local_54[2] = 1.1754944e-38;
        local_54[3] = 1.1754944e-38;
        if (0 < (int)sVar17) {
          fVar18 = 3.4028235e+38;
          fVar19 = 1.1754944e-38;
          sVar9 = 0;
          while( true ) {
            fVar1 = *(float *)((int)pvVar8 + sVar9 * 4);
            uVar14 = (uint)((int)sVar9 % 4 == 3);
            if (fVar1 < fVar18) {
              local_54[uVar14] = fVar1;
            }
            fVar18 = local_54[0];
            if (fVar19 < fVar1) {
              local_54[uVar14 + 2] = fVar1;
            }
            fVar19 = local_54[2];
            sVar9 = sVar9 + 1;
            if (sVar9 == sVar17) break;
            uVar14 = (uint)((int)sVar9 % 4 == 3);
            fVar18 = local_54[uVar14];
            fVar19 = local_54[uVar14 + 2];
          }
          if (0.0 <= local_54[0]) {
            if (local_54[2] <= DAT_042dbf3c) goto LAB_040d3264;
            if (0 < (int)sVar17) goto LAB_040d31cd;
          }
          else {
LAB_040d31cd:
            sVar9 = 0;
            do {
              if ((int)sVar9 % 4 != 3) {
                *(float *)((int)pvVar8 + sVar9 * 4) =
                     (*(float *)((int)pvVar8 + sVar9 * 4) - local_54[0]) /
                     (local_54[2] - local_54[0]);
              }
              sVar9 = sVar9 + 1;
            } while (sVar9 != sVar17);
          }
          pcVar10 = strrchr(local_464,0x2e);
          if (pcVar10 == (char *)0x0) {
            FUN_0400a810(&DAT_04302371,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0xfb3,
                         "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                        );
          }
          sprintf(pcVar10,"_min%f_max%f.tiff",SUB84((double)fVar18,0),
                  (int)((ulonglong)(double)fVar18 >> 0x20),SUB84((double)fVar19,0),
                  (int)((ulonglong)(double)fVar19 >> 0x20));
        }
LAB_040d3264:
        fVar19 = local_54[3];
        fVar18 = local_54[1];
        if ((!bVar5) && ((local_54[1] < 0.0 || (DAT_042dbf3c < local_54[3])))) {
          sVar9 = 0;
          if (0 < (int)sVar17) {
            while (sVar9 = sVar9 + 1, sVar9 != sVar17) {
              if ((int)sVar9 % 4 == 3) {
                *(float *)((int)pvVar8 + sVar9 * 4) =
                     (*(float *)((int)pvVar8 + sVar9 * 4) - local_54[1]) /
                     (local_54[3] - local_54[1]);
              }
            }
          }
          pcVar10 = strrchr(local_464,0x2e);
          if (pcVar10 == (char *)0x0) {
            FUN_0400a810(&DAT_04302371,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                         ,0xfc4,
                         "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                        );
          }
          sprintf(pcVar10,"_amin%f_amax%f.tiff",SUB84((double)fVar18,0),
                  (int)((ulonglong)(double)fVar18 >> 0x20),SUB84((double)fVar19,0),
                  (int)((ulonglong)(double)fVar19 >> 0x20));
        }
        fVar18 = _DAT_042dc5a0;
        if (0 < (int)sVar17) {
          sVar9 = 0;
          do {
            __ptr[sVar9] = (char)(int)(*(float *)((int)pvVar8 + sVar9 * 4) * fVar18);
            sVar9 = sVar9 + 1;
          } while (sVar9 != sVar17);
        }
        free(pvVar8);
LAB_040d3680:
        iVar6 = local_38;
        if (param_5 == 0) {
          local_470 = local_34;
        }
        else {
          sVar17 = local_38 * 4;
          pvVar8 = malloc(sVar17);
          local_470 = local_34;
          if (1 < local_34) {
            iVar16 = 0;
            puVar11 = __ptr;
            __src = __ptr + (local_34 + -1) * sVar17;
            do {
              memcpy(pvVar8,puVar11,sVar17);
              memcpy(puVar11,__src,sVar17);
              memcpy(__src,pvVar8,sVar17);
              iVar16 = iVar16 + 1;
              puVar11 = puVar11 + sVar17;
              __src = __src + iVar6 * -4;
            } while (iVar16 < local_34 >> 1);
          }
          free(pvVar8);
        }
        FUN_04024310(local_464,local_38,local_470,1,local_474,__ptr);
      }
      else {
        puts("Trying to receive depth or stencil information from color attachment!");
      }
    }
  }
  else {
    if (local_30 < 0x8c42) {
      if (0x8c3f < local_30) goto LAB_040d3618;
      if (local_30 == 0x881a) {
LAB_040d3910:
        local_474 = 0;
        bVar5 = false;
        goto LAB_040d30b6;
      }
      if (local_30 < 0x881b) {
        if (local_30 == 0x8814) goto LAB_040d3910;
      }
      else {
        if (local_30 == 0x88f0) {
LAB_040d3bc0:
          if (param_4 == 0) {
            puts("Trying to receive color information from depth stencil attachment!");
            goto LAB_040d33d0;
          }
          if (param_4 == 1) {
            if (DAT_04408c90 != '\0') {
              uVar7 = OpenGL_InternalFormatToString(local_30);
              uVar12 = GL_ColorAttachment_ToString();
              printf("Framebuffer attachment %s has internal depth stencil format %s. Receiving depth data as floats and rescaling.\n"
                     ,uVar12,uVar7);
            }
            if ((int)sVar17 < 0) {
              sVar17 = sVar17 + 3;
            }
            iVar16 = (int)sVar17 >> 2;
            pvVar8 = malloc(iVar16 * 4);
            glReadPixels(0,0,local_38,local_34,0x1902,0x1406,pvVar8);
            iVar6 = glGetError();
            if (iVar6 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0x102a,
                           "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                          );
            }
            if (0 < iVar16) {
              iVar6 = 0;
              puVar3 = DAT_04308f04;
              puVar4 = PTR_DAT_04308f00;
              do {
                puVar20 = *(undefined **)((int)pvVar8 + iVar6 * 4);
                iVar6 = iVar6 + 1;
                puVar2 = puVar20;
                if ((float)puVar20 <= (float)puVar4) {
                  puVar2 = puVar4;
                }
                if ((float)puVar3 <= (float)puVar20) {
                  puVar20 = puVar3;
                }
                puVar3 = puVar20;
                puVar4 = puVar2;
              } while (iVar6 != iVar16);
              if (((float)puVar20 < 0.0) || (DAT_042dbf3c < (float)puVar2)) {
                if (DAT_04408c90 != '\0') {
                  printf("Float texture, detected values from outside of (0.0-1.0) range. Minimal value: %f, maximal: %f . Rescaling data to fit in range.\n"
                         ,SUB84((double)(float)puVar20,0),
                         (int)((ulonglong)(double)(float)puVar20 >> 0x20),
                         SUB84((double)(float)puVar2,0),
                         (int)((ulonglong)(double)(float)puVar2 >> 0x20));
                }
                iVar6 = 0;
                do {
                  *(float *)((int)pvVar8 + iVar6 * 4) =
                       (*(float *)((int)pvVar8 + iVar6 * 4) - (float)puVar20) /
                       ((float)puVar2 - (float)puVar20);
                  iVar6 = iVar6 + 1;
                } while (iVar6 != iVar16);
                pcVar10 = strrchr(local_464,0x2e);
                if (pcVar10 == (char *)0x0) {
                  FUN_0400a810(&DAT_04302371,
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                               ,0x1047,
                               "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                              );
                }
                sprintf(pcVar10,"_min%f_max%f.tiff",SUB84((double)(float)puVar20,0),
                        (int)((ulonglong)(double)(float)puVar20 >> 0x20),
                        SUB84((double)(float)puVar2,0),
                        (int)((ulonglong)(double)(float)puVar2 >> 0x20));
              }
              fVar18 = _DAT_042dc5a0;
              iVar6 = 0;
              puVar11 = __ptr;
              do {
                fVar19 = *(float *)((int)pvVar8 + iVar6 * 4);
                iVar6 = iVar6 + 1;
                puVar11[3] = 0xff;
                uVar13 = (undefined1)(int)(fVar19 * fVar18);
                *puVar11 = uVar13;
                puVar11[1] = uVar13;
                puVar11[2] = uVar13;
                puVar11 = puVar11 + 4;
              } while (iVar6 != iVar16);
            }
          }
          else {
            local_474 = 0;
            if (param_4 != 2) goto LAB_040d3680;
            if (DAT_04408c90 != '\0') {
              uVar7 = OpenGL_InternalFormatToString(local_30);
              uVar12 = GL_ColorAttachment_ToString();
              printf("Framebuffer attachment %s has internal depth stencil format %s. Receiving stencil data.\n"
                     ,uVar12,uVar7);
            }
            if ((int)sVar17 < 0) {
              sVar17 = sVar17 + 3;
            }
            sVar17 = (int)sVar17 >> 2;
            pvVar8 = malloc(sVar17);
            glReadPixels(0,0,local_38,local_34,0x1901,0x1401,pvVar8);
            iVar6 = glGetError();
            if (iVar6 != 0) {
              FUN_0400a810("glGetError() == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                           ,0x1063,
                           "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                          );
            }
            if (0 < (int)sVar17) {
              sVar9 = 0;
              puVar11 = __ptr;
              do {
                uVar13 = *(undefined1 *)((int)pvVar8 + sVar9);
                sVar9 = sVar9 + 1;
                puVar11[3] = 0xff;
                *puVar11 = uVar13;
                puVar11[1] = uVar13;
                puVar11[2] = uVar13;
                puVar11 = puVar11 + 4;
              } while (sVar9 != sVar17);
            }
          }
LAB_040d3c80:
          free(pvVar8);
          local_474 = 0;
          goto LAB_040d3680;
        }
        if (local_30 == 0x8c3a) goto LAB_040d30a5;
      }
    }
    else {
      if (local_30 == 0x8c45) {
LAB_040d36f2:
        local_474 = 0;
        goto LAB_040d3622;
      }
      if (local_30 < 0x8c46) {
        if (local_30 < 0x8c44) goto LAB_040d36f2;
      }
      else {
        if (local_30 == 0x8cac) goto LAB_040d3958;
        if (local_30 == 0x8cad) goto LAB_040d3bc0;
        if (local_30 == 0x8c47) goto LAB_040d3618;
      }
    }
LAB_040d33a0:
    uVar7 = OpenGL_InternalFormatToString(local_30);
    printf("Unhandled internal texture format: %s (%#x)!\n",uVar7,iVar6);
  }
LAB_040d33d0:
  free(__ptr);
LAB_040d2c3c:
  if (param_1 != local_44) {
    (*DAT_0451e694)(0x8ca8,local_44);
    iVar6 = glGetError();
    if (iVar6 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x1096,
                   "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                  );
    }
  }
  (*DAT_0451eed4)(local_40);
  iVar6 = glGetError();
  if (iVar6 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0x1099,
                 "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                );
  }
  return;
}

// --- openGlDebugFunctions_040d4420 @0x040d4420 ---
/* source: openGlDebugFunctions */

void __regparm3 openGlDebugFunctions_040d4420(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  int local_28;
  size_t local_24;
  int local_20 [4];
  
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xce4,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
  }
  (**(code **)*param_1)(param_1,"Shader %d info\n",param_2);
  (*DAT_0451ec9c)(param_2,0x8b4f,&local_28);
  iVar1 = glGetError();
  if (iVar1 == 0) {
    if (local_28 != 0x8b31) goto LAB_040d4478;
LAB_040d44ee:
    pcVar2 = "GL_VERTEX_SHADER";
  }
  else {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xcea,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
    if (local_28 == 0x8b31) goto LAB_040d44ee;
LAB_040d4478:
    if (local_28 == 0x8dd9) {
      pcVar2 = "GL_GEOMETRY_SHADER";
    }
    else if (local_28 == 0x8b30) {
      pcVar2 = "GL_FRAGMENT_SHADER";
    }
    else if (local_28 == 0x8e87) {
      pcVar2 = "GL_TESS_EVALUATION_SHADER";
    }
    else {
      if (local_28 != 0x8e88) {
        (**(code **)*param_1)(param_1,"\tGL_SHADER_TYPE: unknown ( %#x )\n",local_28);
        goto LAB_040d4506;
      }
      pcVar2 = "GL_TESS_CONTROL_SHADER";
    }
  }
  (**(code **)*param_1)(param_1,"\tGL_SHADER_TYPE: %s\n",pcVar2);
LAB_040d4506:
  (*DAT_0451ec9c)(param_2,0x8b80,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xcf1,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
  }
  pcVar2 = "TRUE";
  if (local_28 == 0) {
    pcVar2 = "FALSE";
  }
  (**(code **)*param_1)(param_1,"\tGL_DELETE_STATUS: %s\n",pcVar2);
  (*DAT_0451ec9c)(param_2,0x8b81,&local_28);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xcf4,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
  }
  pcVar2 = "TRUE";
  if (local_28 == 0) {
    pcVar2 = "FALSE";
  }
  (**(code **)*param_1)(param_1,"\tGL_COMPILE_STATUS: %s\n",pcVar2);
  (*DAT_0451ec9c)(param_2,0x8b88,&local_24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xcf9,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
  }
  if (local_24 == 0) {
    (**(code **)*param_1)(param_1,"\tNo shader source code\n");
  }
  else {
    pvVar3 = malloc(local_24);
    (*DAT_0451eca0)(param_2,local_24,0,pvVar3);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xcfe,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
    }
    iVar1 = local_24 - 1;
    uVar4 = FUN_0400e0a0();
    uVar4 = FUN_0400e060(uVar4,pvVar3,iVar1);
    (**(code **)*param_1)
              (param_1,
               "\tShader source code (length %u characters, CRC: %#x):\n==============================================\n%s==============================================\n"
               ,local_24 - 1,uVar4,pvVar3);
    free(pvVar3);
  }
  (*DAT_0451ec9c)(param_2,0x8b84,local_20);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                 ,0xd08,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
  }
  if (local_20[0] != 0) {
    pvVar3 = malloc(local_20[0] + 1);
    (*DAT_0451eca4)(param_2,local_20[0] + 1,0,pvVar3);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xd0d,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
    }
    (**(code **)*param_1)
              (param_1,
               "\tShader info log:\n==============================================\n%s==============================================\n"
               ,pvVar3);
    free(pvVar3);
    return;
  }
  (**(code **)*param_1)(param_1,"\tNo shader info log\n");
  return;
}

// --- openGlDebugFunctions_040dd5f0 @0x040dd5f0 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040dd5f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_10 [2];
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == (undefined4 *)0x0) {
      FUN_040d9ba0();
    }
    OpenGL_LogState_VertexArrays();
    OpenGL_LogState_BufferObjectBindings();
    OpenGL_LogState_RenderTargets();
    OpenGL_LogState_BufferMask();
    OpenGL_LogState_Textures();
    puVar1 = DAT_044dac80;
    (**(code **)*DAT_044dac80)(DAT_044dac80,"Program\n");
    glGetIntegerv(0x8b8d,local_10);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x83c,"void OpenGL_LogState_Program(OpenGlDebugWriter*)");
    }
    (**(code **)*puVar1)(puVar1,"\tGL_CURRENT_PROGRAM: %d\n",local_10[0]);
  }
  return;
}

// --- openGlDebugFunctions_040dd7a0 @0x040dd7a0 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040dd7a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_10;
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == (undefined4 *)0x0) {
      FUN_040d9ba0();
    }
    puVar1 = DAT_044dac80;
    glGetIntegerv(0x8872,&local_10);
    iVar2 = glGetError();
    if (iVar2 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xb22,"void OpenGL_LogState_Texture(OpenGlDebugWriter*, int32_t)");
    }
    if (local_10 <= param_1) {
      (**(code **)*puVar1)(puVar1,"Texture stage %d is not a valid texture stage index!\n",param_1);
      return;
    }
    OpenGL_LogState_BoundSampler();
  }
  return;
}

// --- openGlDebugFunctions_040dd880 @0x040dd880 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040dd880(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = eON_Int_GL_NoteCurrentContext();
  if (iVar3 == 0) {
    puts("No valid OpenGL context in calling thread!.");
    return;
  }
  if (DAT_044dac80 == (undefined4 *)0x0) {
    FUN_040d9ba0();
  }
  puVar1 = DAT_044dac80;
  cVar2 = (*DAT_0451ec7c)(param_1);
  if (cVar2 == '\0') {
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xbc3,"void OpenGL_LogState_Program(OpenGlDebugWriter*, GLint)");
    }
    (**(code **)*puVar1)(puVar1,"Program ID %d is not a valid program ID!",param_1);
    return;
  }
  openGlDebugFunctions_040d0cc0();
  return;
}

// --- openGlDebugFunctions_040dd950 @0x040dd950 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040dd950(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = eON_Int_GL_NoteCurrentContext();
  if (iVar3 == 0) {
    puts("No valid OpenGL context in calling thread!.");
    return;
  }
  if (DAT_044dac80 == (undefined4 *)0x0) {
    FUN_040d9ba0();
  }
  puVar1 = DAT_044dac80;
  cVar2 = (*DAT_0451ec78)(param_1);
  if (cVar2 == '\0') {
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0xce0,"void OpenGL_LogState_Shader(OpenGlDebugWriter*, GLint)");
    }
    (**(code **)*puVar1)(puVar1,"Shader ID %d is not a valid shader ID!",param_1);
    return;
  }
  openGlDebugFunctions_040d4420();
  return;
}

// --- openGlDebugFunctions_040de230 @0x040de230 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040de230(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char local_40c [1024];
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    puVar3 = &DAT_044daca0;
    if (DAT_044daca0 == '\0') {
      puVar3 = &DAT_04328763;
    }
    sprintf(local_40c,"%s%s",puVar3,param_3);
    FUN_0401a1d0(local_40c);
    if (param_1 != 0) {
      cVar1 = (*DAT_0451e654)(param_1);
      if (cVar1 == '\0') {
        iVar2 = glGetError();
        if (iVar2 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xe81,
                       "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                      );
        }
        printf("Framebuffer ID %d is not a valid framebuffer ID!\n",param_1);
        return;
      }
    }
    openGlDebugFunctions_040d2a80(0,param_1 == 0);
  }
  return;
}

// --- openGlDebugFunctions_040de350 @0x040de350 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040de350(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char local_40c [1024];
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    puVar3 = &DAT_044daca0;
    if (DAT_044daca0 == '\0') {
      puVar3 = &DAT_04328763;
    }
    sprintf(local_40c,"%s%s",puVar3,param_2);
    FUN_0401a1d0(local_40c);
    if (param_1 != 0) {
      cVar1 = (*DAT_0451e654)(param_1);
      if (cVar1 == '\0') {
        iVar2 = glGetError();
        if (iVar2 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xe81,
                       "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                      );
        }
        printf("Framebuffer ID %d is not a valid framebuffer ID!\n",param_1);
        return;
      }
    }
    openGlDebugFunctions_040d2a80(1,param_1 == 0);
  }
  return;
}

// --- openGlDebugFunctions_040de460 @0x040de460 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040de460(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char local_40c [1024];
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    puVar3 = &DAT_044daca0;
    if (DAT_044daca0 == '\0') {
      puVar3 = &DAT_04328763;
    }
    sprintf(local_40c,"%s%s",puVar3,param_2);
    FUN_0401a1d0(local_40c);
    if (param_1 != 0) {
      cVar1 = (*DAT_0451e654)(param_1);
      if (cVar1 == '\0') {
        iVar2 = glGetError();
        if (iVar2 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                       ,0xe81,
                       "void DumpFramebufferContent(OpenGlDebugWriter*, GLint, uint32_t, const char*, DataTypeToReceive, int32_t)"
                      );
        }
        printf("Framebuffer ID %d is not a valid framebuffer ID!\n",param_1);
        return;
      }
    }
    openGlDebugFunctions_040d2a80(2,param_1 == 0);
  }
  return;
}

// --- openGlDebugFunctions_040dfd00 @0x040dfd00 ---
/* source: openGlDebugFunctions */

void openGlDebugFunctions_040dfd00(void)

{
  int iVar1;
  int iVar2;
  int local_10 [2];
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    glGetIntegerv(0x8872,local_10);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp"
                   ,0x144a,"void OGLC_DumpBoundTextures()");
    }
    if (0 < local_10[0]) {
      iVar1 = 0;
      do {
        iVar2 = iVar1 + 1;
        OGLC_DumpBoundTexturesInStage(iVar1);
        iVar1 = iVar2;
      } while (iVar2 < local_10[0]);
    }
  }
  return;
}

// --- attached helper FUN_000dd6e0 @0x040dd6e0 (call-graph exclusive to this TU) ---
void FUN_040dd6e0(void)

{
  int iVar1;
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 != 0) {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    OpenGL_LogState_Framebuffer();
    return;
  }
  puts("No valid OpenGL context in calling thread!.");
  return;
}

// --- attached helper FUN_000dd740 @0x040dd740 (call-graph exclusive to this TU) ---
void FUN_040dd740(void)

{
  int iVar1;
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 != 0) {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    OpenGL_LogState_Renderbuffer();
    return;
  }
  puts("No valid OpenGL context in calling thread!.");
  return;
}

// --- attached helper FUN_000de100 @0x040de100 (call-graph exclusive to this TU) ---
void FUN_040de100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  char local_40c [1028];
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    puts("No valid OpenGL context in calling thread!.");
  }
  else {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    puVar2 = &DAT_044daca0;
    if (DAT_044daca0 == '\0') {
      puVar2 = &DAT_04328763;
    }
    sprintf(local_40c,"%s%s",puVar2,param_4);
    FUN_0401a1d0(local_40c);
    DumpTextureDataByIDBoundInTextureStages(param_2,param_3);
  }
  return;
}

// --- attached helper FUN_000de930 @0x040de930 (call-graph exclusive to this TU) ---
void FUN_040de930(void)

{
  int iVar1;
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 != 0) {
    if (DAT_044dac80 == 0) {
      FUN_040d9ba0();
    }
    OGLC_DumpBuffer();
    return;
  }
  puts("No valid OpenGL context in calling thread!.");
  return;
}

// --- attached helper FUN_000df390 @0x040df390 (call-graph exclusive to this TU) ---
void FUN_040df390(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  void *__dest;
  uint *puVar5;
  uint *puVar6;
  size_t __size;
  uint local_41c [2];
  undefined2 local_414;
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    puts("No valid OpenGL context in calling thread!.");
    iVar1 = (int)DAT_044dac80;
  }
  else {
    if (DAT_044dac80 == (int *)0x0) {
      FUN_040d9ba0();
    }
    if (DAT_044daca0 == '\0') {
      local_41c[0] = 0x74617473;
      local_41c[1] = 0x78742e65;
      local_414 = 0x74;
    }
    else {
      strcpy((char *)local_41c,&DAT_044daca0);
      puVar6 = local_41c;
      do {
        puVar5 = puVar6;
        uVar3 = *puVar5 + 0xfefefeff & ~*puVar5;
        uVar4 = uVar3 & 0x80808080;
        puVar6 = puVar5 + 1;
      } while (uVar4 == 0);
      if ((uVar3 & 0x8080) == 0) {
        puVar6 = (uint *)((int)puVar5 + 6);
        uVar4 = uVar4 >> 0x10;
      }
      builtin_strncpy((char *)((int)puVar6 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))),
                      "state.txt",10);
    }
    FUN_0401a1d0(local_41c);
    iVar1 = (int)DAT_044dac80;
    piVar2 = operator_new(0xc);
    *piVar2 = (int)&PTR_OpenGLDebugWriter_File__Write_04308e88;
    piVar2[1] = 0;
    piVar2[2] = 0;
    puVar6 = local_41c;
    do {
      puVar5 = puVar6;
      uVar3 = *puVar5 + 0xfefefeff & ~*puVar5;
      uVar4 = uVar3 & 0x80808080;
      puVar6 = puVar5 + 1;
    } while (uVar4 == 0);
    if ((uVar3 & 0x8080) == 0) {
      puVar6 = (uint *)((int)puVar5 + 6);
      uVar4 = uVar4 >> 0x10;
    }
    __size = (int)puVar6 + (-(int)local_41c - (uint)CARRY1((byte)uVar4,(byte)uVar4)) + -2;
    __dest = malloc(__size);
    piVar2[1] = (int)__dest;
    memcpy(__dest,local_41c,__size);
    DAT_044dac80 = piVar2;
    OpenGL_LogState_Polygons(param_2,param_1);
    if (DAT_044dac80 != (int *)0x0) {
      (**(code **)(*DAT_044dac80 + 0xc))(DAT_044dac80);
    }
  }
  DAT_044dac80 = (int *)iVar1;
  return;
}

