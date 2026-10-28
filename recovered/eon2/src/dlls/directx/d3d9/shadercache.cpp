// Recovered source: eon2/src/dlls/directx/d3d9/shadercache.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- ShaderCache::ClearCaches @0x040e5790 ---
/* source: shadercache */

void ShaderCache__ClearCaches(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = 0;
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      pvVar5 = *(void **)(iVar1 + iVar7 * 4);
      while (pvVar5 != (void *)0x0) {
        pvVar2 = *(void **)((int)pvVar5 + 0xc);
        operator_delete(pvVar5);
        pvVar5 = pvVar2;
      }
      *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  iVar6 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar3 = 0;
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      pvVar5 = *(void **)(iVar1 + iVar7 * 4);
      while (pvVar5 != (void *)0x0) {
        pvVar2 = *(void **)((int)pvVar5 + 0xc);
        operator_delete(pvVar5);
        pvVar5 = pvVar2;
      }
      *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
  }
  iVar6 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar3 = 0;
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      pvVar5 = *(void **)(iVar1 + iVar7 * 4);
      while (pvVar5 != (void *)0x0) {
        pvVar2 = *(void **)((int)pvVar5 + 0x28);
        operator_delete(pvVar5);
        pvVar5 = pvVar2;
      }
      *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
    uVar3 = *(undefined4 *)(param_1 + 0x58);
  }
  iVar6 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar3 = 0;
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      pvVar5 = *(void **)(iVar1 + iVar7 * 4);
      while (pvVar5 != (void *)0x0) {
        pvVar2 = *(void **)((int)pvVar5 + 0x70);
        operator_delete(pvVar5);
        pvVar5 = pvVar2;
      }
      *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
  }
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  pvVar5 = *(void **)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar6 = 0;
      uVar8 = 0;
      do {
        puVar4 = (undefined4 *)((int)pvVar5 + iVar6);
        if (puVar4[1] != 0) {
          FUN_0400a810("!PreparedShaders[i].ShaderID",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                       ,0x6b,"void ShaderCache::ClearCaches()");
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0xb8) + iVar6);
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + 0xc;
        free((void *)*puVar4);
        pvVar5 = *(void **)(param_1 + 0xb8);
      } while (uVar8 < *(uint *)(param_1 + 0xbc));
    }
    free(pvVar5);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}

// --- ShaderCache::CompileShaderForIndex @0x040e5b80 ---
/* source: shadercache */

void ShaderCache__CompileShaderForIndex(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *local_24;
  size_t local_20 [4];
  
  param_2 = param_2 * 0xc;
  piVar1 = (int *)(*(int *)(param_1 + 0xb8) + param_2);
  if (piVar1[1] != 0) {
    FUN_0400a810("!PreparedShaders[shaderIndex].ShaderID",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0xb0,"void ShaderCache::CompileShaderForIndex(UINT)");
    piVar1 = (int *)(*(int *)(param_1 + 0xb8) + param_2);
  }
  local_24 = (char *)*piVar1;
  if (local_24 == (char *)0x0) {
    FUN_0400a810("sourceCode",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0xb3,"void ShaderCache::CompileShaderForIndex(UINT)");
    piVar1 = (int *)(*(int *)(param_1 + 0xb8) + param_2);
  }
  iVar2 = (*DAT_0451ecd8)(~-(uint)((char)piVar1[2] == '\0') + 0x8b31);
  if (iVar2 == 0) {
    FUN_0400a810("shader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0xb8,"void ShaderCache::CompileShaderForIndex(UINT)");
  }
  local_20[0] = strlen(local_24);
  (*DAT_0451ec70)(iVar2,1,&local_24,local_20);
  (*DAT_0451ece0)(iVar2);
  *(int *)(*(int *)(param_1 + 0xb8) + 4 + param_2) = iVar2;
  LOCK();
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
  UNLOCK();
  return;
}

// --- ShaderCache::FillInProgramConstants @0x040ea280 ---
/* WARNING: Removing unreachable block (ram,0x040ea4e9) */
/* source: shadercache */

void ShaderCache__FillInProgramConstants
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *__ptr;
  uint *puVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 local_4c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_24;
  
  if (*(int *)(param_2 + 4) != 2) {
    FUN_0400a810("programData->LinkStage == 2",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0x2a9,
                 "void ShaderCache::FillInProgramConstants(eON_LinkedProgramData*, UINT, UINT, Direct3DVertexShader9*, Direct3DPixelShader9*)"
                );
  }
  __ptr = *(void **)(param_2 + 0x164);
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_2 + 8) == '\0') {
      FUN_0400a810("programData->IsPrelinkedProgram",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x2ad,
                   "void ShaderCache::FillInProgramConstants(eON_LinkedProgramData*, UINT, UINT, Direct3DVertexShader9*, Direct3DPixelShader9*)"
                  );
      __ptr = *(void **)(param_2 + 0x164);
    }
    free(__ptr);
  }
  local_28 = (uint *)0x0;
  local_24 = (uint *)0x0;
  if ((param_5 != 0) && (iVar8 = *(int *)(param_5 + 0x3c), iVar8 != 0)) {
    puVar7 = *(ushort **)(param_5 + 0x38);
    do {
      if ((*(uint *)(param_2 + 0x118) != 0) && (*(uint *)(param_2 + 0x118) <= (uint)*puVar7)) {
                    /* try { // try from 040ea3b8 to 040ea51a has its CatchHandler @ 040ea5e5 */
        FUN_0400a810("!programData->VConstCacheFRegCount || ( p->Index < programData->VConstCacheFRegCount )"
                     ,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                     ,699,
                     "void ShaderCache::FillInProgramConstants(eON_LinkedProgramData*, UINT, UINT, Direct3DVertexShader9*, Direct3DPixelShader9*)"
                    );
      }
      local_4c = CONCAT22(1,*puVar7);
      uVar2 = *(uint *)(puVar7 + 2);
      uVar3 = *(uint *)(puVar7 + 4);
      uVar4 = *(uint *)(puVar7 + 6);
      uVar5 = *(uint *)(puVar7 + 8);
      if (local_24 == (uint *)0x0) {
        FUN_040e5370();
      }
      else {
        if (local_24 != (uint *)0x0) {
          *local_24 = local_4c;
          local_24[1] = uVar2;
          local_24[2] = uVar3;
          local_24[3] = uVar4;
          local_24[4] = uVar5;
          local_24[5] = local_38;
          local_24[6] = local_34;
          local_24[7] = local_30;
          local_24[8] = local_2c;
        }
        local_24 = local_24 + 9;
      }
      puVar7 = puVar7 + 0x12;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((param_6 != 0) && (iVar8 = *(int *)(param_6 + 0x28), iVar8 != 0)) {
    puVar7 = *(ushort **)(param_6 + 0x24);
    do {
      if ((*(uint *)(param_2 + 0x140) != 0) && (*(uint *)(param_2 + 0x140) <= (uint)*puVar7)) {
        FUN_0400a810("!programData->PConstCacheFRegCount || ( p->Index < (DWORD)programData->PConstCacheFRegCount )"
                     ,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                     ,0x2d0,
                     "void ShaderCache::FillInProgramConstants(eON_LinkedProgramData*, UINT, UINT, Direct3DVertexShader9*, Direct3DPixelShader9*)"
                    );
      }
      local_4c = (uint)*puVar7;
      uVar2 = *(uint *)(puVar7 + 2);
      uVar3 = *(uint *)(puVar7 + 4);
      uVar4 = *(uint *)(puVar7 + 6);
      uVar5 = *(uint *)(puVar7 + 8);
      if (local_24 == (uint *)0x0) {
        FUN_040e5370();
      }
      else {
        if (local_24 != (uint *)0x0) {
          *local_24 = local_4c;
          local_24[1] = uVar2;
          local_24[2] = uVar3;
          local_24[3] = uVar4;
          local_24[4] = uVar5;
          local_24[5] = local_38;
          local_24[6] = local_34;
          local_24[7] = local_30;
          local_24[8] = local_2c;
        }
        local_24 = local_24 + 9;
      }
      puVar7 = puVar7 + 0x12;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = ((int)local_24 >> 2) * 0x38e38e39;
  if (iVar8 != 0) {
    *(int *)(param_2 + 0x168) = iVar8;
    puVar6 = malloc(((int)local_24 >> 2) << 2);
    *(uint **)(param_2 + 0x164) = puVar6;
    if (local_24 != (uint *)0x0) {
      do {
        *puVar6 = *local_28;
        puVar6[1] = local_28[1];
        puVar6[2] = local_28[2];
        puVar6[3] = local_28[3];
        puVar6[4] = local_28[4];
        puVar6[5] = local_28[5];
        puVar6[6] = local_28[6];
        puVar6[7] = local_28[7];
        puVar1 = local_28 + 8;
        local_28 = local_28 + 9;
        puVar6[8] = *puVar1;
        puVar6 = puVar6 + 9;
      } while (local_24 != local_28);
    }
  }
  if ((*(int *)(param_1 + 0x10c) != 0) && (*(char *)(param_2 + 8) == '\0')) {
                    /* try { // try from 040ea5d8 to 040ea5dc has its CatchHandler @ 040ea5e5 */
    shader_pch_save_linked_program_info(param_1,param_3,param_4,param_2);
  }
  *(undefined4 *)(param_2 + 4) = 3;
  return;
}

// --- ShaderCache::GetCopyProgram @0x040e5ef0 ---
/* source: shadercache */

undefined4 ShaderCache__GetCopyProgram(int param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *local_30;
  char *local_2c;
  char *local_28;
  size_t local_24;
  size_t local_20 [4];
  
  if (*(int *)(param_1 + 0x100) == 0) {
    cVar1 = FUN_04021ee0();
    if (cVar1 == '\0') {
      local_30 = 
      "\n// Vertex program for StretchRect() and other direct copying functions\n\nattribute vec3 eON_Position;\nattribute vec2 eON_TexCoord;\nvarying vec2 eON_TexCoordV;\n\nvoid main()\n{\n\tgl_Position = vec4( eON_Position, 1.0 );\n\teON_TexCoordV.xy = eON_TexCoord.xy;\n}\n"
      ;
      local_28 = 
      "// Fragment program for StretchRect() and other direct copying functions\n\nuniform sampler2D CopySampler;\nvarying vec2 eON_TexCoordV;\nvoid main()\n{\n\tgl_FragColor = clamp( texture2D( CopySampler, eON_TexCoordV.xy), 0.0, 1.0 );\n}\n"
      ;
      local_2c = 
      "// Fragment program for StretchRect() and other direct copying functions\n\nuniform sampler2D CopySampler;\nvarying vec2 eON_TexCoordV;\nvoid main()\n{\n\tgl_FragColor = texture2D( CopySampler, eON_TexCoordV.xy);\n}\n"
      ;
    }
    else {
      local_30 = 
      "\n#version 150\n\n// Vertex program for StretchRect() and other direct copying functions\n\nin vec3 eON_Position;\nin vec2 eON_TexCoord;\nout vec2 eON_TexCoordV;\n\nvoid main()\n{\n\tgl_Position = vec4( eON_Position, 1.0 );\n\teON_TexCoordV.xy = eON_TexCoord.xy;\n}\n"
      ;
      local_28 = 
      "\n#version 150\n\n// Fragment program for StretchRect() and other direct copying functions\n\nuniform sampler2D CopySampler;\nin vec2 eON_TexCoordV;\nout vec4 FragColor;\n\nvoid main()\n{\n\tFragColor = clamp( texture( CopySampler, eON_TexCoordV.xy ), 0.0, 1.0 );\n}\n"
      ;
      local_2c = 
      "\n#version 150\n\n// Fragment program for StretchRect() and other direct copying functions\n\nuniform sampler2D CopySampler;\nin vec2 eON_TexCoordV;\nout vec4 FragColor;\n\nvoid main()\n{\n\tFragColor = texture( CopySampler, eON_TexCoordV.xy );\n}\n"
      ;
    }
    FUN_0402cd10(5,"Compiling and linking special GLSL copy program in OpenGL...");
    iVar2 = (*DAT_0451ecd8)(0x8b31);
    if (iVar2 == 0) {
      FUN_0400a810("vertexShader",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x233,"GLuint ShaderCache::GetCopyProgram(OpenGLContextCache*, bool)");
    }
    local_24 = strlen(local_30);
    (*DAT_0451ec70)(iVar2,1,&local_30,&local_24);
    (*DAT_0451ece0)(iVar2);
    (*DAT_0451ec9c)(iVar2,0x8b81,local_20);
    if (local_20[0] != 1) {
      FUN_0402cd10(0xf,"Copy vertex shader failed to compile!");
      FUN_0402cd10(0xf,"Shader code:\n%s",local_30);
      (*DAT_0451ec9c)(iVar2,0x8b84,local_20);
      if (local_20[0] == 0) {
        FUN_0402cd10(0xf,"No shader info log.");
      }
      else {
        pvVar3 = malloc(local_20[0]);
        (*DAT_0451eca4)(iVar2,local_20[0],0,pvVar3);
        FUN_0402cd10(0xf,"Shader info log:\n%s",pvVar3);
        free(pvVar3);
      }
    }
    iVar4 = (*DAT_0451ecd8)(0x8b30);
    if (iVar4 == 0) {
      FUN_0400a810("fragmentShader",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x24d,"GLuint ShaderCache::GetCopyProgram(OpenGLContextCache*, bool)");
    }
    local_24 = strlen(local_2c);
    (*DAT_0451ec70)(iVar4,1,&local_2c,&local_24);
    (*DAT_0451ece0)(iVar4);
    (*DAT_0451ec9c)(iVar4,0x8b81,local_20);
    if (local_20[0] != 1) {
      FUN_0402cd10(0xf,"Copy fragment shader failed to compile!");
      FUN_0402cd10(0xf,"Shader code:\n%s",local_2c);
      (*DAT_0451ec9c)(iVar4,0x8b84,local_20);
      if (local_20[0] == 0) {
        FUN_0402cd10(0xf,"No shader info log.");
      }
      else {
        pvVar3 = malloc(local_20[0]);
        (*DAT_0451eca4)(iVar4,local_20[0],0,pvVar3);
        FUN_0402cd10(0xf,"Shader info log:\n%s",pvVar3);
        free(pvVar3);
      }
    }
    iVar5 = (*DAT_0451ecd8)(0x8b30);
    if (iVar5 == 0) {
      FUN_0400a810("fragmentShaderClamp",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x266,"GLuint ShaderCache::GetCopyProgram(OpenGLContextCache*, bool)");
    }
    local_24 = strlen(local_28);
    (*DAT_0451ec70)(iVar5,1,&local_28,&local_24);
    (*DAT_0451ece0)(iVar5);
    (*DAT_0451ec9c)(iVar5,0x8b81,local_20);
    if (local_20[0] != 1) {
      FUN_0402cd10(0xf,"Copy fragment shader with clamp failed to compile!");
      FUN_0402cd10(0xf,"Shader code:\n%s",local_28);
      (*DAT_0451ec9c)(iVar5,0x8b84,local_20);
      if (local_20[0] == 0) {
        FUN_0402cd10(0xf,"No shader info log.");
      }
      else {
        pvVar3 = malloc(local_20[0]);
        (*DAT_0451eca4)(iVar5,local_20[0],0,pvVar3);
        FUN_0402cd10(0xf,"Shader info log:\n%s",pvVar3);
        free(pvVar3);
      }
    }
    iVar6 = (*DAT_0451ecdc)();
    *(int *)(param_1 + 0x100) = iVar6;
    if (iVar6 == 0) {
      FUN_0400a810("mCopyProgram",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x27f,"GLuint ShaderCache::GetCopyProgram(OpenGLContextCache*, bool)");
      iVar6 = *(int *)(param_1 + 0x100);
    }
    (*DAT_0451ecec)(iVar6,iVar2);
    (*DAT_0451ecec)(*(undefined4 *)(param_1 + 0x100),iVar4);
    (*DAT_0451ec74)(*(undefined4 *)(param_1 + 0x100));
    iVar4 = *(int *)(param_1 + 0x100);
    if (iVar4 != *(int *)(param_2 + 0x338)) {
      (*DAT_0451ec14)(iVar4);
      *(int *)(param_2 + 0x338) = iVar4;
      iVar4 = *(int *)(param_1 + 0x100);
    }
    (*DAT_0451ece8)(iVar4,0,"eON_Position");
    (*DAT_0451ece8)(*(undefined4 *)(param_1 + 0x100),1,"eON_TexCoord");
    (*DAT_0451ec74)(*(undefined4 *)(param_1 + 0x100));
    uVar7 = (*DAT_0451ec98)(*(undefined4 *)(param_1 + 0x100),"CopySampler");
    (*DAT_0451ec58)(uVar7,0);
    if (*(int *)(param_1 + 0x100) == 0) {
      FUN_0400a810("mCopyProgram",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x28c,"GLuint ShaderCache::GetCopyProgram(OpenGLContextCache*, bool)");
    }
    iVar4 = (*DAT_0451ecdc)();
    *(int *)(param_1 + 0x104) = iVar4;
    if (iVar4 == 0) {
      FUN_0400a810("mCopyProgramClamp",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x290,"GLuint ShaderCache::GetCopyProgram(OpenGLContextCache*, bool)");
      iVar4 = *(int *)(param_1 + 0x104);
    }
    (*DAT_0451ecec)(iVar4,iVar2);
    (*DAT_0451ecec)(*(undefined4 *)(param_1 + 0x104),iVar5);
    (*DAT_0451ec74)(*(undefined4 *)(param_1 + 0x104));
    iVar2 = *(int *)(param_1 + 0x104);
    if (iVar2 != *(int *)(param_2 + 0x338)) {
      (*DAT_0451ec14)(iVar2);
      *(int *)(param_2 + 0x338) = iVar2;
      iVar2 = *(int *)(param_1 + 0x104);
    }
    (*DAT_0451ece8)(iVar2,0,"eON_Position");
    (*DAT_0451ece8)(*(undefined4 *)(param_1 + 0x104),1,"eON_TexCoord");
    (*DAT_0451ec74)(*(undefined4 *)(param_1 + 0x104));
    uVar7 = (*DAT_0451ec98)(*(undefined4 *)(param_1 + 0x104),"CopySampler");
    (*DAT_0451ec58)(uVar7,0);
    if (*(int *)(param_1 + 0x104) == 0) {
      FUN_0400a810("mCopyProgramClamp",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                   ,0x29d,"GLuint ShaderCache::GetCopyProgram(OpenGLContextCache*, bool)");
    }
  }
  if (param_3 == '\0') {
    return *(undefined4 *)(param_1 + 0x100);
  }
  return *(undefined4 *)(param_1 + 0x104);
}

// --- ShaderCache::LinkedProgram_FinalizeLink @0x040e6c90 ---
/* source: shadercache */

void ShaderCache__LinkedProgram_FinalizeLink(undefined4 param_1,int param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  long lVar11;
  undefined **ppuVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 uVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  int local_230;
  char local_22c [15];
  char local_21d;
  char local_218;
  int local_12c [3];
  int aiStack_120 [61];
  int local_2c;
  int local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [16];
  
  bVar19 = 0;
  if (param_3[1] != 1) {
    FUN_0400a810("data->LinkStage == 1",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0x3ab,
                 "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                );
  }
  iVar8 = *param_3;
  if (iVar8 != *(int *)(param_2 + 0x338)) {
    (*DAT_0451ec14)(iVar8);
    *(int *)(param_2 + 0x338) = iVar8;
  }
  cVar7 = FUN_04021ee0();
  if (cVar7 == '\0') {
    (*DAT_0451eca8)(*param_3,0x8b86,&local_2c);
    uVar16 = local_2c == 0;
    if (0 < local_2c) {
      bVar6 = false;
      local_230 = 0;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      do {
        (*DAT_0451ecb8)(*param_3,local_230,0x100,&local_28,local_24,local_20,local_22c);
        iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
        iVar9 = 0xc;
        pcVar14 = local_22c;
        pcVar15 = "PositionFix";
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          uVar16 = *pcVar14 == *pcVar15;
          pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
          pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
        } while ((bool)uVar16);
        if ((bool)uVar16) {
          param_3[0x21] = iVar8;
        }
        else {
          iVar9 = 0xe;
          bVar17 = false;
          pcVar14 = local_22c;
          pcVar15 = "ViewportSizes";
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            bVar17 = *pcVar14 == *pcVar15;
            pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
            pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
          } while (bVar17);
          if (bVar17) {
            param_3[0x23] = iVar8;
          }
          else {
            iVar9 = 0xe;
            pcVar14 = local_22c;
            pcVar15 = "TextureFactor";
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar17 = *pcVar14 == *pcVar15;
              pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
              pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
            } while (bVar17);
            if (bVar17) {
              param_3[0x24] = iVar8;
            }
            else {
              iVar9 = 9;
              pcVar14 = local_22c;
              pcVar15 = "AlphaRef";
              do {
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                bVar17 = *pcVar14 == *pcVar15;
                pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
              } while (bVar17);
              if (bVar17) {
                param_3[0x22] = iVar8;
              }
              else {
                iVar9 = 0xe;
                pcVar14 = local_22c;
                pcVar15 = "ViewTransform";
                do {
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  bVar17 = *pcVar14 == *pcVar15;
                  pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                  pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                } while (bVar17);
                if (bVar17) {
                  param_3[0x25] = iVar8;
                }
                else {
                  bVar17 = local_28 - 9U == 1;
                  if (local_28 - 9U < 2) {
                    iVar9 = 8;
                    pcVar14 = local_22c;
                    pcVar15 = "PSampler";
                    do {
                      if (iVar9 == 0) break;
                      iVar9 = iVar9 + -1;
                      bVar17 = *pcVar14 == *pcVar15;
                      pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                      pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                    } while (bVar17);
                    if (bVar17) {
                      lVar11 = strtol(local_22c + 8,(char **)0x0,10);
                      if (0xf < lVar11) {
                        FUN_0400a810("samplerNum < 16",
                                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                                     ,0x4d1,
                                     "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                                    );
                      }
                      param_3[lVar11 + 0xf] = iVar8;
                    }
                    else {
                      if (local_28 != 9) goto LAB_040e7b64;
                      iVar9 = 8;
                      bVar17 = true;
                      pcVar14 = local_22c;
                      pcVar15 = "VSampler";
                      do {
                        if (iVar9 == 0) break;
                        iVar9 = iVar9 + -1;
                        bVar17 = *pcVar14 == *pcVar15;
                        pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                        pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                      } while (bVar17);
                      if (!bVar17) goto LAB_040e7b8b;
                      lVar11 = strtol(local_22c + 8,(char **)0x0,10);
                      if (3 < lVar11) {
                        FUN_0400a810("samplerNum < 4",
                                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                                     ,0x4d7,
                                     "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                                    );
                      }
                      param_3[lVar11 + 0xb] = iVar8;
                    }
                  }
                  else if (local_28 == 0x10) {
                    iVar9 = 0xf;
                    bVar17 = true;
                    pcVar14 = local_22c;
                    pcVar15 = "TextureConstant";
                    do {
                      if (iVar9 == 0) break;
                      iVar9 = iVar9 + -1;
                      bVar17 = *pcVar14 == *pcVar15;
                      pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                      pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                    } while (bVar17);
                    if (bVar17) {
                      *(undefined1 *)(param_3 + 0x26) = 1;
                      param_3[local_21d + -9] = iVar8;
                    }
                    else {
LAB_040e8b95:
                      iVar9 = 0xf;
                      pcVar14 = local_22c;
                      pcVar15 = "WorldTransforms";
                      do {
                        if (iVar9 == 0) break;
                        iVar9 = iVar9 + -1;
                        bVar17 = *pcVar14 == *pcVar15;
                        pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                        pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                      } while (bVar17);
                      if (!bVar17) goto LAB_040e7b8b;
                      *(undefined1 *)(param_3 + 0x40) = 1;
                      param_3[local_21d + 0x11] = iVar8;
                    }
                  }
                  else {
LAB_040e7b64:
                    if (local_28 == 0xb) {
                      iVar9 = 10;
                      bVar18 = true;
                      pcVar14 = local_22c;
                      pcVar15 = "BumpEnvMap";
                      do {
                        if (iVar9 == 0) break;
                        iVar9 = iVar9 + -1;
                        bVar18 = *pcVar14 == *pcVar15;
                        pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                        pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                      } while (bVar18);
                      bVar17 = false;
                      if (bVar18) {
                        *(undefined1 *)(param_3 + 0x2f) = 1;
                        param_3[local_22c[10]] = iVar8;
                        goto LAB_040e75be;
                      }
                    }
                    else if (local_28 == 0x15) {
                      iVar9 = 0x14;
                      bVar18 = true;
                      pcVar14 = local_22c;
                      pcVar15 = "LuminanceScaleOffset";
                      do {
                        if (iVar9 == 0) break;
                        iVar9 = iVar9 + -1;
                        bVar18 = *pcVar14 == *pcVar15;
                        pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                        pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                      } while (bVar18);
                      bVar17 = false;
                      if (bVar18) {
                        param_3[local_218 + 8] = iVar8;
                        goto LAB_040e75be;
                      }
                    }
                    else {
                      bVar17 = local_28 == 0x10;
                      if (bVar17) goto LAB_040e8b95;
                    }
LAB_040e7b8b:
                    iVar8 = 0xf;
                    pcVar14 = local_22c;
                    pcVar15 = "VConstFloat[0]";
                    do {
                      if (iVar8 == 0) break;
                      iVar8 = iVar8 + -1;
                      bVar17 = *pcVar14 == *pcVar15;
                      pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                      pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                    } while (bVar17);
                    if (bVar17) {
                      bVar1 = true;
                    }
                    else {
                      iVar8 = 0xd;
                      bVar17 = false;
                      pcVar14 = local_22c;
                      pcVar15 = "VConstInt[0]";
                      do {
                        if (iVar8 == 0) break;
                        iVar8 = iVar8 + -1;
                        bVar17 = *pcVar14 == *pcVar15;
                        pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                        pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                      } while (bVar17);
                      if (bVar17) {
                        bVar2 = true;
                      }
                      else {
                        iVar8 = 0xe;
                        bVar17 = false;
                        pcVar14 = local_22c;
                        pcVar15 = "VConstBool[0]";
                        do {
                          if (iVar8 == 0) break;
                          iVar8 = iVar8 + -1;
                          bVar17 = *pcVar14 == *pcVar15;
                          pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                          pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                        } while (bVar17);
                        if (bVar17) {
                          bVar3 = true;
                        }
                        else {
                          iVar8 = 0xf;
                          bVar17 = false;
                          pcVar14 = local_22c;
                          pcVar15 = "PConstFloat[0]";
                          do {
                            if (iVar8 == 0) break;
                            iVar8 = iVar8 + -1;
                            bVar17 = *pcVar14 == *pcVar15;
                            pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                            pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                          } while (bVar17);
                          if (bVar17) {
                            bVar4 = true;
                          }
                          else {
                            iVar8 = 0xd;
                            bVar17 = false;
                            pcVar14 = local_22c;
                            pcVar15 = "PConstInt[0]";
                            do {
                              if (iVar8 == 0) break;
                              iVar8 = iVar8 + -1;
                              bVar17 = *pcVar14 == *pcVar15;
                              pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                              pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                            } while (bVar17);
                            if (bVar17) {
                              bVar5 = true;
                            }
                            else {
                              iVar8 = 0xe;
                              bVar17 = false;
                              pcVar14 = local_22c;
                              pcVar15 = "PConstBool[0]";
                              do {
                                if (iVar8 == 0) break;
                                iVar8 = iVar8 + -1;
                                bVar17 = *pcVar14 == *pcVar15;
                                pcVar14 = pcVar14 + (uint)bVar19 * -2 + 1;
                                pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                              } while (bVar17);
                              if (bVar17) {
                                bVar6 = true;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_040e75be:
        local_230 = local_230 + 1;
        uVar16 = local_2c == local_230;
      } while (local_230 < local_2c);
      if (bVar1) {
        iVar8 = (*DAT_0451ec98)(*param_3,"VConstFloat[0]");
        param_3[0x47] = iVar8;
        if (iVar8 != -1) {
          param_3[0x46] = 0;
          iVar8 = 0;
          do {
            sprintf((char *)local_12c,"VConstFloat[%d]",iVar8);
            iVar9 = (*DAT_0451ec98)(*param_3,local_12c);
            if (iVar9 != -1) {
              param_3[0x46] = param_3[0x46] + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0x100);
          if (param_3[0x45] != 0) {
            FUN_0400a810("data->VConstCacheF == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                         ,0x517,
                         "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                        );
          }
          if (param_3[0x46] != 0) {
            pvVar10 = calloc(1,param_3[0x46] << 4);
            param_3[0x45] = (int)pvVar10;
          }
        }
      }
      if (bVar2) {
        iVar8 = (*DAT_0451ec98)(*param_3,"VConstInt[0]");
        param_3[0x4b] = iVar8;
        if (iVar8 != -1) {
          param_3[0x4a] = 0;
          sprintf((char *)local_12c,"VConstInt[%d]",0);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",1);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",2);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",3);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",4);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",5);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",6);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",7);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",8);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",9);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",10);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",0xb);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",0xc);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",0xd);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",0xe);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          sprintf((char *)local_12c,"VConstInt[%d]",0xf);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4a] = param_3[0x4a] + 1;
          }
          if (param_3[0x49] != 0) {
            FUN_0400a810("data->VConstCacheI == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                         ,0x530,
                         "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                        );
          }
          if (param_3[0x4a] != 0) {
            pvVar10 = calloc(1,param_3[0x4a] << 4);
            param_3[0x49] = (int)pvVar10;
          }
        }
      }
      if (bVar3) {
        iVar8 = (*DAT_0451ec98)(*param_3,"VConstBool[0]");
        param_3[0x4e] = iVar8;
        if (iVar8 != -1) {
          param_3[0x4d] = 0;
          sprintf((char *)local_12c,"VConstBool[%d]",0);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",1);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",2);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",3);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",4);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",5);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",6);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",7);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",8);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",9);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",10);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",0xb);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",0xc);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",0xd);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",0xe);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          sprintf((char *)local_12c,"VConstBool[%d]",0xf);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x4d] = param_3[0x4d] + 1;
          }
          if (param_3[0x4c] != 0) {
            FUN_0400a810("data->VConstCacheB == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                         ,0x549,
                         "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                        );
          }
          if (param_3[0x4d] != 0) {
            pvVar10 = calloc(1,param_3[0x4d] << 2);
            param_3[0x4c] = (int)pvVar10;
          }
        }
      }
      if (bVar4) {
        iVar8 = (*DAT_0451ec98)(*param_3,"PConstFloat[0]");
        param_3[0x51] = iVar8;
        if (iVar8 != -1) {
          param_3[0x50] = 0;
          iVar8 = 0;
          do {
            sprintf((char *)local_12c,"PConstFloat[%d]",iVar8);
            iVar9 = (*DAT_0451ec98)(*param_3,local_12c);
            if (iVar9 != -1) {
              param_3[0x50] = param_3[0x50] + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0x100);
          if (param_3[0x4f] != 0) {
            FUN_0400a810("data->PConstCacheF == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                         ,0x562,
                         "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                        );
          }
          if (param_3[0x50] != 0) {
            pvVar10 = calloc(1,param_3[0x50] << 4);
            param_3[0x4f] = (int)pvVar10;
          }
        }
      }
      if (bVar5) {
        iVar8 = (*DAT_0451ec98)(*param_3,"PConstInt[0]");
        param_3[0x54] = iVar8;
        if (iVar8 != -1) {
          param_3[0x53] = 0;
          sprintf((char *)local_12c,"PConstInt[%d]",0);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",1);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",2);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",3);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",4);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",5);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",6);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",7);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",8);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",9);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",10);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",0xb);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",0xc);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",0xd);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",0xe);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          sprintf((char *)local_12c,"PConstInt[%d]",0xf);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x53] = param_3[0x53] + 1;
          }
          if (param_3[0x52] != 0) {
            FUN_0400a810("data->PConstCacheI == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                         ,0x57b,
                         "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                        );
          }
          if (param_3[0x53] != 0) {
            pvVar10 = calloc(1,param_3[0x53] << 4);
            param_3[0x52] = (int)pvVar10;
          }
        }
      }
      if (bVar6) {
        iVar8 = (*DAT_0451ec98)(*param_3,"PConstBool[0]");
        param_3[0x57] = iVar8;
        if (iVar8 != -1) {
          param_3[0x56] = 0;
          sprintf((char *)local_12c,"PConstBool[%d]",0);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",1);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",2);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",3);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",4);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",5);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",6);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",7);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",8);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",9);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",10);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",0xb);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",0xc);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",0xd);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",0xe);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          sprintf((char *)local_12c,"PConstBool[%d]",0xf);
          iVar8 = (*DAT_0451ec98)(*param_3,local_12c);
          if (iVar8 != -1) {
            param_3[0x56] = param_3[0x56] + 1;
          }
          if (param_3[0x55] != 0) {
            FUN_0400a810("data->PConstCacheB == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                         ,0x594,
                         "void ShaderCache::LinkedProgram_FinalizeLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                        );
          }
          if (param_3[0x56] != 0) {
            pvVar10 = calloc(1,param_3[0x56] << 2);
            param_3[0x55] = (int)pvVar10;
          }
        }
      }
    }
  }
  else {
    pcVar14 = local_22c + 8;
    builtin_strncpy(local_22c,"VSampler00",0xb);
    sprintf(pcVar14,"%d",0);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0xb] = iVar8;
    }
    sprintf(pcVar14,"%d",1);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0xc] = iVar8;
    }
    sprintf(pcVar14,"%d",2);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0xd] = iVar8;
    }
    sprintf(pcVar14,"%d",3);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0xe] = iVar8;
    }
    local_22c[0] = 0x50;
    sprintf(pcVar14,"%d",0);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0xf] = iVar8;
    }
    sprintf(pcVar14,"%d",1);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x10] = iVar8;
    }
    sprintf(pcVar14,"%d",2);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x11] = iVar8;
    }
    sprintf(pcVar14,"%d",3);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x12] = iVar8;
    }
    sprintf(pcVar14,"%d",4);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x13] = iVar8;
    }
    sprintf(pcVar14,"%d",5);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x14] = iVar8;
    }
    sprintf(pcVar14,"%d",6);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x15] = iVar8;
    }
    sprintf(pcVar14,"%d",7);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x16] = iVar8;
    }
    sprintf(pcVar14,"%d",8);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x17] = iVar8;
    }
    sprintf(pcVar14,"%d",9);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x18] = iVar8;
    }
    sprintf(pcVar14,"%d",10);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x19] = iVar8;
    }
    sprintf(pcVar14,"%d",0xb);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x1a] = iVar8;
    }
    sprintf(pcVar14,"%d",0xc);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x1b] = iVar8;
    }
    sprintf(pcVar14,"%d",0xd);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x1c] = iVar8;
    }
    sprintf(pcVar14,"%d",0xe);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x1d] = iVar8;
    }
    sprintf(pcVar14,"%d",0xf);
    iVar8 = (*DAT_0451ec98)(*param_3,local_22c);
    if (iVar8 != -1) {
      param_3[0x1e] = iVar8;
    }
    ppuVar12 = &PTR_s_AsmVertexFloat_0430a860;
    piVar13 = local_12c;
    for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar13 = (int)*ppuVar12;
      ppuVar12 = ppuVar12 + (uint)bVar19 * -2 + 1;
      piVar13 = piVar13 + (uint)bVar19 * -2 + 1;
    }
    if (local_12c[0] != 0) {
      iVar8 = 0;
      piVar13 = local_12c;
      do {
        iVar9 = (*DAT_0451e0b4)(*param_3,local_12c[0]);
        if (iVar9 != -1) {
          (*DAT_0451e0ac)(*param_3,iVar9,iVar8);
          param_3[iVar8 + 0x5b] = piVar13[2];
          iVar8 = iVar8 + 1;
        }
        piVar13 = piVar13 + 3;
        local_12c[0] = *(int *)((int)piVar13 + ((int)local_12c - (int)local_12c));
      } while (local_12c[0] != 0);
    }
  }
  param_3[0x1f] = 1;
  *(undefined1 *)(param_3 + 0x20) = 0;
  if (param_3[0xf] != -1) {
    (*DAT_0451ec58)(param_3[0xf],0);
    param_3[0x1f] = 1;
  }
  if (param_3[0x10] != -1) {
    (*DAT_0451ec58)(param_3[0x10],1);
    param_3[0x1f] = 2;
  }
  if (param_3[0x11] != -1) {
    (*DAT_0451ec58)(param_3[0x11],2);
    param_3[0x1f] = 3;
  }
  if (param_3[0x12] != -1) {
    (*DAT_0451ec58)(param_3[0x12],3);
    param_3[0x1f] = 4;
  }
  if (param_3[0x13] != -1) {
    (*DAT_0451ec58)(param_3[0x13],4);
    param_3[0x1f] = 5;
  }
  if (param_3[0x14] != -1) {
    (*DAT_0451ec58)(param_3[0x14],5);
    param_3[0x1f] = 6;
  }
  if (param_3[0x15] != -1) {
    (*DAT_0451ec58)(param_3[0x15],6);
    param_3[0x1f] = 7;
  }
  if (param_3[0x16] != -1) {
    (*DAT_0451ec58)(param_3[0x16],7);
    param_3[0x1f] = 8;
  }
  if (param_3[0x17] != -1) {
    (*DAT_0451ec58)(param_3[0x17],8);
    param_3[0x1f] = 9;
  }
  if (param_3[0x18] != -1) {
    (*DAT_0451ec58)(param_3[0x18],9);
    param_3[0x1f] = 10;
  }
  if (param_3[0x19] != -1) {
    (*DAT_0451ec58)(param_3[0x19],10);
    param_3[0x1f] = 0xb;
  }
  if (param_3[0x1a] != -1) {
    (*DAT_0451ec58)(param_3[0x1a],0xb);
    param_3[0x1f] = 0xc;
  }
  if (param_3[0x1b] != -1) {
    (*DAT_0451ec58)(param_3[0x1b],0xc);
    param_3[0x1f] = 0xd;
  }
  if (param_3[0x1c] != -1) {
    (*DAT_0451ec58)(param_3[0x1c],0xd);
    param_3[0x1f] = 0xe;
  }
  if (param_3[0x1d] != -1) {
    (*DAT_0451ec58)(param_3[0x1d],0xe);
    param_3[0x1f] = 0xf;
  }
  if (param_3[0x1e] != -1) {
    (*DAT_0451ec58)(param_3[0x1e],0xf);
    param_3[0x1f] = 0x10;
  }
  iVar8 = param_3[0xb];
  if (iVar8 != -1) {
    if (param_3[0x1e] != -1) {
      FUN_0402cd10(0xf,
                   "Sampler num collision between texture samplers and vertex texture samplers! Avoid it somehow!"
                  );
      iVar8 = param_3[0xb];
    }
    (*DAT_0451ec58)(iVar8,0xf);
    param_3[0x1f] = 0x10;
    *(undefined1 *)(param_3 + 0x20) = 1;
  }
  iVar8 = param_3[0xc];
  if (iVar8 != -1) {
    if (param_3[0x1d] != -1) {
      FUN_0402cd10(0xf,
                   "Sampler num collision between texture samplers and vertex texture samplers! Avoid it somehow!"
                  );
      iVar8 = param_3[0xc];
    }
    (*DAT_0451ec58)(iVar8,0xe);
    param_3[0x1f] = 0x10;
    *(undefined1 *)(param_3 + 0x20) = 1;
  }
  iVar8 = param_3[0xd];
  if (iVar8 != -1) {
    if (param_3[0x1c] != -1) {
      FUN_0402cd10(0xf,
                   "Sampler num collision between texture samplers and vertex texture samplers! Avoid it somehow!"
                  );
      iVar8 = param_3[0xd];
    }
    (*DAT_0451ec58)(iVar8,0xd);
    param_3[0x1f] = 0x10;
    *(undefined1 *)(param_3 + 0x20) = 1;
  }
  iVar8 = param_3[0xe];
  if (iVar8 != -1) {
    if (param_3[0x1b] != -1) {
      FUN_0402cd10(0xf,
                   "Sampler num collision between texture samplers and vertex texture samplers! Avoid it somehow!"
                  );
      iVar8 = param_3[0xe];
    }
    (*DAT_0451ec58)(iVar8,0xc);
    param_3[0x1f] = 0x10;
    *(undefined1 *)(param_3 + 0x20) = 1;
  }
  param_3[1] = 2;
  return;
}

// --- ShaderCache::LinkedProgram_SecondLink @0x040e6660 ---
/* WARNING: Type propagation algorithm not settling */
/* source: shadercache */

void ShaderCache__LinkedProgram_SecondLink(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  byte bVar18;
  uint local_48;
  byte *local_40;
  size_t local_34;
  uint local_30;
  size_t local_2c;
  int local_28 [6];
  
  bVar18 = 0;
  if (param_3[1] != 0) {
    FUN_0400a810("data->LinkStage == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0x317,
                 "void ShaderCache::LinkedProgram_SecondLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                );
  }
  (*DAT_0451eca8)(*param_3,0x8b82,&local_34);
  if (local_34 != 1) {
    FUN_0402cd10(0xf,"Program %u failed to link!",*param_3);
    local_30 = 0;
    (*DAT_0451eca8)(*param_3,0x8b85,&local_30);
    pvVar6 = malloc(local_30 << 2);
    local_2c = 0;
    (*DAT_0451ecb4)(*param_3,local_30,&local_2c,pvVar6);
    if (0 < (int)local_2c) {
      iVar10 = 0;
      do {
        iVar1 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        FUN_0402cd10(0xf,"    attached shader: %u",*(undefined4 *)((int)pvVar6 + iVar1));
      } while (iVar10 < (int)local_2c);
    }
    free(pvVar6);
    (*DAT_0451eca8)(*param_3,0x8b84,&local_34);
    if (local_34 == 0) {
      FUN_0402cd10(0xf,"No program info log.");
      return;
    }
    pvVar6 = malloc(local_34);
    (*DAT_0451ecac)(*param_3,local_34,0,pvVar6);
    FUN_0402cd10(0xf,"Program info log:\n%s",pvVar6);
    free(pvVar6);
    return;
  }
  iVar10 = *param_3;
  if (iVar10 != *(int *)(param_2 + 0x338)) {
    (*DAT_0451ec14)(iVar10);
    *(int *)(param_2 + 0x338) = iVar10;
    iVar10 = *param_3;
  }
  local_2c = 0;
  (*DAT_0451eca8)(iVar10,0x8b8a,&local_2c);
  local_40 = (byte *)0x0;
  if (local_2c != 0) {
    local_40 = malloc(local_2c);
  }
  local_30 = 0;
  (*DAT_0451eca8)(*param_3,0x8b89,&local_30);
  if (0xf < (int)local_30) {
    FUN_0400a810("numAttributes < 16",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0x349,
                 "void ShaderCache::LinkedProgram_SecondLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                );
  }
  if (local_30 != 0) {
    local_48 = 1;
    bVar3 = false;
    do {
      local_28[0] = 0;
      local_28[1] = 0;
      local_28[2] = 0;
      (*DAT_0451ecbc)(*param_3,local_48 - 1,local_2c,local_28,local_28 + 1,local_28 + 2,local_40);
      pbVar8 = local_40 + local_28[0] + -1;
      bVar2 = *pbVar8;
      while ((byte)(bVar2 - 0x30) < 10) {
        pbVar8 = pbVar8 + -1;
        bVar2 = *pbVar8;
      }
      uVar13 = local_40 < pbVar8;
      uVar16 = local_40 == pbVar8;
      if (pbVar8 < local_40) {
        FUN_0400a810("ptr >= attributeNameBuffer",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                     ,0x358,
                     "void ShaderCache::LinkedProgram_SecondLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                    );
      }
      lVar7 = strtol((char *)(pbVar8 + 1),(char **)0x0,10);
      iVar10 = 0x11;
      cVar4 = (char)lVar7;
      bVar2 = pbVar8[1];
      pbVar8[1] = 0;
      pbVar11 = local_40;
      pbVar12 = (byte *)"eON_AttrPosition";
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        uVar13 = *pbVar11 < *pbVar12;
        uVar16 = *pbVar11 == *pbVar12;
        pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
        pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
      } while ((bool)uVar16);
      bVar5 = 0;
      bVar14 = (!(bool)uVar13 && !(bool)uVar16) < (byte)uVar13;
      bVar17 = (!(bool)uVar13 && !(bool)uVar16) == (bool)uVar13;
      if (!bVar17) {
        iVar10 = 0x11;
        bVar5 = 5;
        pbVar11 = local_40;
        pbVar12 = (byte *)"eON_AttrTexCoord";
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          bVar14 = *pbVar11 < *pbVar12;
          bVar17 = *pbVar11 == *pbVar12;
          pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
          pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
        } while (bVar17);
        bVar15 = (!bVar14 && !bVar17) < bVar14;
        bVar14 = (!bVar14 && !bVar17) == bVar14;
        if (!bVar14) {
          iVar10 = 0x12;
          bVar5 = 9;
          pbVar11 = local_40;
          pbVar12 = (byte *)"eON_AttrPositionT";
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar15 = *pbVar11 < *pbVar12;
            bVar14 = *pbVar11 == *pbVar12;
            pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
            pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
          } while (bVar14);
          bVar17 = (!bVar15 && !bVar14) < bVar15;
          bVar14 = (!bVar15 && !bVar14) == bVar15;
          if (!bVar14) {
            iVar10 = 0xe;
            bVar5 = 10;
            pbVar11 = local_40;
            pbVar12 = (byte *)"eON_AttrColor";
            do {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              bVar17 = *pbVar11 < *pbVar12;
              bVar14 = *pbVar11 == *pbVar12;
              pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
              pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
            } while (bVar14);
            bVar15 = (!bVar17 && !bVar14) < bVar17;
            bVar14 = (!bVar17 && !bVar14) == bVar17;
            if (!bVar14) {
              iVar10 = 0xf;
              bVar5 = 3;
              pbVar11 = local_40;
              pbVar12 = (byte *)"eON_AttrNormal";
              do {
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                bVar15 = *pbVar11 < *pbVar12;
                bVar14 = *pbVar11 == *pbVar12;
                pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
              } while (bVar14);
              bVar17 = (!bVar15 && !bVar14) < bVar15;
              bVar14 = (!bVar15 && !bVar14) == bVar15;
              if (!bVar14) {
                iVar10 = 0x10;
                bVar5 = 6;
                pbVar11 = local_40;
                pbVar12 = (byte *)"eON_AttrTangent";
                do {
                  if (iVar10 == 0) break;
                  iVar10 = iVar10 + -1;
                  bVar17 = *pbVar11 < *pbVar12;
                  bVar14 = *pbVar11 == *pbVar12;
                  pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                  pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                } while (bVar14);
                bVar15 = (!bVar17 && !bVar14) < bVar17;
                bVar14 = (!bVar17 && !bVar14) == bVar17;
                if (!bVar14) {
                  iVar10 = 0x11;
                  bVar5 = 7;
                  pbVar11 = local_40;
                  pbVar12 = (byte *)"eON_AttrBinormal";
                  do {
                    if (iVar10 == 0) break;
                    iVar10 = iVar10 + -1;
                    bVar15 = *pbVar11 < *pbVar12;
                    bVar14 = *pbVar11 == *pbVar12;
                    pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                    pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                  } while (bVar14);
                  bVar17 = (!bVar15 && !bVar14) < bVar15;
                  bVar14 = (!bVar15 && !bVar14) == bVar15;
                  if (!bVar14) {
                    iVar10 = 0x14;
                    bVar5 = 1;
                    pbVar11 = local_40;
                    pbVar12 = (byte *)"eON_AttrBlendWeight";
                    do {
                      if (iVar10 == 0) break;
                      iVar10 = iVar10 + -1;
                      bVar17 = *pbVar11 < *pbVar12;
                      bVar14 = *pbVar11 == *pbVar12;
                      pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                      pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                    } while (bVar14);
                    bVar15 = (!bVar17 && !bVar14) < bVar17;
                    bVar14 = (!bVar17 && !bVar14) == bVar17;
                    if (!bVar14) {
                      iVar10 = 0xe;
                      bVar5 = 4;
                      pbVar11 = local_40;
                      pbVar12 = (byte *)"eON_AttrPSize";
                      do {
                        if (iVar10 == 0) break;
                        iVar10 = iVar10 + -1;
                        bVar15 = *pbVar11 < *pbVar12;
                        bVar14 = *pbVar11 == *pbVar12;
                        pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                        pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                      } while (bVar14);
                      bVar17 = (!bVar15 && !bVar14) < bVar15;
                      bVar14 = (!bVar15 && !bVar14) == bVar15;
                      if (!bVar14) {
                        iVar10 = 0x15;
                        bVar5 = 2;
                        pbVar11 = local_40;
                        pbVar12 = (byte *)"eON_AttrBlendIndices";
                        do {
                          if (iVar10 == 0) break;
                          iVar10 = iVar10 + -1;
                          bVar17 = *pbVar11 < *pbVar12;
                          bVar14 = *pbVar11 == *pbVar12;
                          pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                          pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                        } while (bVar14);
                        bVar15 = (!bVar17 && !bVar14) < bVar17;
                        bVar14 = (!bVar17 && !bVar14) == bVar17;
                        if (!bVar14) {
                          iVar10 = 0x13;
                          bVar5 = 8;
                          pbVar11 = local_40;
                          pbVar12 = (byte *)"eON_AttrTessFactor";
                          do {
                            if (iVar10 == 0) break;
                            iVar10 = iVar10 + -1;
                            bVar15 = *pbVar11 < *pbVar12;
                            bVar14 = *pbVar11 == *pbVar12;
                            pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                            pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                          } while (bVar14);
                          bVar17 = (!bVar15 && !bVar14) < bVar15;
                          bVar14 = (!bVar15 && !bVar14) == bVar15;
                          if (!bVar14) {
                            iVar10 = 0xc;
                            bVar5 = 0xb;
                            pbVar11 = local_40;
                            pbVar12 = (byte *)"eON_AttrFog";
                            do {
                              if (iVar10 == 0) break;
                              iVar10 = iVar10 + -1;
                              bVar17 = *pbVar11 < *pbVar12;
                              bVar14 = *pbVar11 == *pbVar12;
                              pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                              pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                            } while (bVar14);
                            bVar15 = (!bVar17 && !bVar14) < bVar17;
                            bVar14 = (!bVar17 && !bVar14) == bVar17;
                            if (!bVar14) {
                              iVar10 = 0xe;
                              bVar5 = 0xc;
                              pbVar11 = local_40;
                              pbVar12 = (byte *)"eON_AttrDepth";
                              do {
                                if (iVar10 == 0) break;
                                iVar10 = iVar10 + -1;
                                bVar15 = *pbVar11 < *pbVar12;
                                bVar14 = *pbVar11 == *pbVar12;
                                pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                                pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                              } while (bVar14);
                              bVar17 = (!bVar15 && !bVar14) < bVar15;
                              bVar14 = (!bVar15 && !bVar14) == bVar15;
                              if (!bVar14) {
                                iVar10 = 0xf;
                                pbVar11 = local_40;
                                pbVar12 = (byte *)"eON_AttrSample";
                                do {
                                  if (iVar10 == 0) break;
                                  iVar10 = iVar10 + -1;
                                  bVar17 = *pbVar11 < *pbVar12;
                                  bVar14 = *pbVar11 == *pbVar12;
                                  pbVar11 = pbVar11 + (uint)bVar18 * -2 + 1;
                                  pbVar12 = pbVar12 + (uint)bVar18 * -2 + 1;
                                } while (bVar14);
                                bVar5 = -((!bVar17 && !bVar14) == bVar17) & 0xd;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pbVar8[1] = bVar2;
      if (cVar4 == '\0' && bVar5 == 0) {
        uVar9 = 0;
        bVar3 = true;
      }
      else if (bVar5 == 9) {
        uVar9 = 0;
        bVar3 = true;
        if (cVar4 != '\0') {
          FUN_0400a810("usageIndex == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                       ,0x38b,
                       "void ShaderCache::LinkedProgram_SecondLink(OpenGLContextCache*, eON_LinkedProgramData*)"
                      );
        }
      }
      else {
        uVar9 = local_48;
        if (bVar3) {
          uVar9 = local_48 - 1;
        }
      }
      *(byte *)((int)param_3 + uVar9 * 2 + 9) = bVar5;
      *(char *)((int)param_3 + uVar9 * 2 + 10) = cVar4;
      (*DAT_0451ece8)(*param_3,uVar9,local_40);
      bVar14 = local_48 < local_30;
      local_48 = local_48 + 1;
    } while (bVar14);
  }
  free(local_40);
  param_3[1] = 1;
  (*DAT_0451ec74)(*param_3);
  return;
}

// --- ShaderCache::LoadEmulatedVertexProgram @0x040ec0f0 ---
/* source: shadercache */

bool ShaderCache__LoadEmulatedVertexProgram(int param_1,FILE *param_2)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  byte bVar7;
  int local_54 [2];
  int local_4c;
  undefined1 local_48 [20];
  undefined1 local_34 [16];
  undefined4 local_24;
  void *local_20 [4];
  
  bVar7 = 0;
  bVar6 = false;
  bzero(local_34,0x10);
  sVar2 = fread(local_34,1,0x10,param_2);
  if (sVar2 == 0x10) {
    sVar2 = fread(local_48,1,0x14,param_2);
    if (sVar2 == 0x14) {
      cVar1 = FUN_040e94b0(param_1,param_2,&local_24,local_20);
      if (cVar1 != '\0') {
        FUN_040edb90(local_54,param_1 + 0x4c,local_34);
        if (*(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4) == local_54[0]) {
          local_4c = FUN_040e5a00(param_1,local_20[0],local_24,1,0);
          free(local_20[0]);
          piVar4 = (int *)FUN_040ee090(param_1 + 0x4c,local_34);
          piVar5 = &local_4c;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar4 = *piVar5;
            piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
            piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
          }
          bVar6 = local_4c != -1;
        }
        else {
          iVar3 = memcmp(local_48,(void *)(local_54[0] + 0x14),0x14);
          if (iVar3 != 0) {
            FUN_0400a810("!memcmp( p.ColorRegisters, (*i).second.ColorRegisters, sizeof(ColorRegisterAssignment) * 10 )"
                         ,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                         ,0x90e,"bool ShaderCache::LoadEmulatedVertexProgram(FILE*)");
          }
          bVar6 = true;
          free(local_20[0]);
        }
      }
    }
  }
  return bVar6;
}

// --- ShaderCache::PrecompileNextShaderOrProgramInTable @0x040ed390 ---
/* source: shadercache */

undefined4 ShaderCache__PrecompileNextShaderOrProgramInTable(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_34;
  
  if (*(int *)(param_1 + 0xc4) != 0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar4 = 0;
      iVar11 = *(int *)(param_1 + 0xb8);
      if (*(int *)(*(int *)(param_1 + 0xb8) + 4) == 0) {
        iVar4 = 0;
      }
      else {
        do {
          iVar4 = iVar4 + 1;
          if (iVar4 == *(int *)(param_1 + 0xbc)) goto LAB_040ed3dd;
          piVar5 = (int *)(iVar11 + 0x10);
          iVar11 = iVar11 + 0xc;
        } while (*piVar5 != 0);
      }
      ShaderCache__CompileShaderForIndex(param_1,iVar4);
      return 1;
    }
LAB_040ed3dd:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0xa51,
                 "bool ShaderCache::PrecompileNextShaderOrProgramInTable(OpenGLContextCache*)");
  }
  if (*(int *)(param_1 + 200) == 0) {
LAB_040ed467:
    cVar2 = *(char *)(param_1 + 0x108);
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xbc);
    if (uVar8 != 0) {
      iVar11 = 0;
      uVar10 = 0;
      bVar3 = false;
      do {
        piVar5 = (int *)(*(int *)(param_1 + 0xb8) + iVar11);
        if ((piVar5[1] != 0) && (*piVar5 != 0)) {
          ShaderCache__VetCompiledShaderForIndex(param_1,uVar10);
          if (*(int *)(param_1 + 200) == 0) goto LAB_040ed467;
          uVar8 = *(uint *)(param_1 + 0xbc);
          bVar3 = true;
        }
        uVar10 = uVar10 + 1;
        iVar11 = iVar11 + 0xc;
      } while (uVar10 < uVar8);
      if (bVar3) goto LAB_040ed467;
    }
    FUN_0400a810("foundUnvettedShader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0xa66,
                 "bool ShaderCache::PrecompileNextShaderOrProgramInTable(OpenGLContextCache*)");
    cVar2 = *(char *)(param_1 + 0x108);
  }
  if (cVar2 != '\0') {
    return 0;
  }
  iVar11 = *(int *)(param_1 + 0xcc);
  if (*(int *)(param_1 + 0xd0) == iVar11) {
    piVar5 = *(int **)(param_1 + 0xe0);
    do {
      if (*(int **)(param_1 + 0xf0) == piVar5) goto LAB_040ed6c7;
      iVar11 = *piVar5;
      if (piVar5 == (int *)(*(int *)(param_1 + 0xe8) + -4)) {
        operator_delete(*(void **)(param_1 + 0xe4));
        iVar4 = *(int *)(param_1 + 0xec);
        *(int *)(param_1 + 0xec) = iVar4 + 4;
        piVar5 = *(int **)(iVar4 + 4);
        *(int **)(param_1 + 0xe4) = piVar5;
        *(int **)(param_1 + 0xe8) = piVar5 + 0x80;
        *(int **)(param_1 + 0xe0) = piVar5;
      }
      else {
        piVar5 = piVar5 + 1;
        *(int **)(param_1 + 0xe0) = piVar5;
      }
      iVar4 = *(int *)(iVar11 + 4);
    } while (iVar4 == 3);
    if (iVar4 == 0) {
      ShaderCache__LinkedProgram_SecondLink(param_1,param_2,iVar11);
      if (*(int *)(iVar11 + 4) == 1) {
        piVar5 = *(int **)(param_1 + 0xf0);
        if (piVar5 == (int *)(*(int *)(param_1 + 0xf8) + -4)) {
          iVar4 = *(int *)(param_1 + 0xfc);
          if ((uint)(*(int *)(param_1 + 0xdc) - (iVar4 - *(int *)(param_1 + 0xd8) >> 2)) < 2) {
            FUN_040eea20(param_1 + 0xd8,1,0);
            iVar4 = *(int *)(param_1 + 0xfc);
          }
          pvVar6 = operator_new(0x200);
          *(void **)(iVar4 + 4) = pvVar6;
          if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
            **(int **)(param_1 + 0xf0) = iVar11;
          }
          iVar11 = *(int *)(param_1 + 0xfc);
          *(int *)(param_1 + 0xfc) = iVar11 + 4;
          iVar4 = *(int *)(iVar11 + 4);
          *(int *)(param_1 + 0xf4) = iVar4;
          *(int *)(param_1 + 0xf8) = iVar4 + 0x200;
          iVar11 = *(int *)(param_1 + 0xd0);
          *(int *)(param_1 + 0xf0) = iVar4;
        }
        else {
          iVar4 = 0;
          if (piVar5 != (int *)0x0) {
            *piVar5 = iVar11;
            iVar4 = *(int *)(param_1 + 0xf0);
          }
          *(int *)(param_1 + 0xf0) = iVar4 + 4;
          iVar11 = *(int *)(param_1 + 0xd0);
        }
        goto LAB_040ed5ae;
      }
    }
    else {
      if (iVar4 != 1) {
        FUN_0400a810("data->LinkStage == 1",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                     ,0xaa6,
                     "bool ShaderCache::PrecompileNextShaderOrProgramInTable(OpenGLContextCache*)");
      }
      ShaderCache__LinkedProgram_FinalizeLink(param_1,param_2,iVar11);
      *(undefined4 *)(iVar11 + 4) = 3;
    }
LAB_040ed6c7:
    iVar11 = *(int *)(param_1 + 0xd0);
  }
  else {
    piVar1 = (int *)(iVar11 + -0x10 + (*(int *)(param_1 + 0xd0) - iVar11 & 0xfffffff0U));
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar11 = *piVar1;
    iVar7 = iVar11 * 0xc;
    piVar5 = (int *)(iVar4 + iVar7);
    if (piVar5[1] == 0) {
      ShaderCache__CompileShaderForIndex(param_1,iVar11);
      iVar4 = *(int *)(param_1 + 0xb8);
      piVar5 = (int *)(iVar4 + iVar7);
    }
    if (*piVar5 != 0) {
      ShaderCache__VetCompiledShaderForIndex(param_1,iVar11);
      iVar4 = *(int *)(param_1 + 0xb8);
      piVar5 = (int *)(iVar4 + iVar7);
    }
    iVar11 = piVar5[1];
    iVar7 = piVar1[1];
    iVar9 = iVar7 * 0xc;
    piVar5 = (int *)(iVar4 + iVar9);
    if (piVar5[1] == 0) {
      ShaderCache__CompileShaderForIndex(param_1,iVar7);
      piVar5 = (int *)(*(int *)(param_1 + 0xb8) + iVar9);
    }
    if (*piVar5 != 0) {
      ShaderCache__VetCompiledShaderForIndex(param_1,iVar7);
      piVar5 = (int *)(*(int *)(param_1 + 0xb8) + iVar9);
    }
    if ((piVar5[1] == 0) || (iVar11 == 0)) {
      free((void *)piVar1[3]);
    }
    else {
      FUN_040e5240();
      if (local_34 == *(int *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0xa0) * 4)) {
        iVar11 = FUN_040ecb20();
      }
      else {
        iVar11 = *(int *)(local_34 + 8);
      }
      if (*(int *)(iVar11 + 4) != 3) {
        if (*(int *)(iVar11 + 4) != 0) {
          FUN_0400a810("data->LinkStage == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                       ,0xa79,
                       "bool ShaderCache::PrecompileNextShaderOrProgramInTable(OpenGLContextCache*)"
                      );
        }
        iVar4 = piVar1[2];
        *(undefined1 *)(iVar11 + 8) = 1;
        iVar7 = *(int *)(param_1 + 0xf8);
        *(int *)(iVar11 + 0x168) = iVar4;
        *(int *)(iVar11 + 0x164) = piVar1[3];
        piVar5 = *(int **)(param_1 + 0xf0);
        if (piVar5 == (int *)(iVar7 + -4)) {
          iVar4 = *(int *)(param_1 + 0xfc);
          if ((uint)(*(int *)(param_1 + 0xdc) - (iVar4 - *(int *)(param_1 + 0xd8) >> 2)) < 2) {
            FUN_040eea20(param_1 + 0xd8,1,0);
            iVar4 = *(int *)(param_1 + 0xfc);
          }
          pvVar6 = operator_new(0x200);
          *(void **)(iVar4 + 4) = pvVar6;
          if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
            **(int **)(param_1 + 0xf0) = iVar11;
          }
          iVar11 = *(int *)(param_1 + 0xfc);
          *(int *)(param_1 + 0xfc) = iVar11 + 4;
          iVar11 = *(int *)(iVar11 + 4);
          *(int *)(param_1 + 0xf4) = iVar11;
          *(int *)(param_1 + 0xf8) = iVar11 + 0x200;
          *(int *)(param_1 + 0xf0) = iVar11;
        }
        else {
          if (piVar5 != (int *)0x0) {
            *piVar5 = iVar11;
          }
          *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 4;
        }
      }
    }
    iVar11 = *(int *)(param_1 + 0xd0) + -0x10;
    *(int *)(param_1 + 0xd0) = iVar11;
  }
LAB_040ed5ae:
  if ((*(int *)(param_1 + 0xcc) == iVar11) && (*(int *)(param_1 + 0xf0) == *(int *)(param_1 + 0xe0))
     ) {
    FUN_0402cd10(0x14,"Shader precompilation finished");
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  return 1;
}

// --- ShaderCache::VetCompiledShaderForIndex @0x040e5cc0 ---
/* source: shadercache */

void ShaderCache__VetCompiledShaderForIndex(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  void *__ptr;
  undefined4 *puVar3;
  char *pcVar4;
  void *__ptr_00;
  size_t local_20 [4];
  
  param_2 = param_2 * 0xc;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xb8) + param_2);
  iVar2 = puVar3[1];
  __ptr = (void *)*puVar3;
  if (iVar2 == 0) {
    FUN_0400a810("shader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0xce,"void ShaderCache::VetCompiledShaderForIndex(UINT)");
  }
  if (__ptr == (void *)0x0) {
    FUN_0400a810("sourceCode",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/shadercache.cpp"
                 ,0xcf,"void ShaderCache::VetCompiledShaderForIndex(UINT)");
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0xb8) + 8 + param_2);
  (*DAT_0451ec9c)(iVar2,0x8b81,local_20);
  if (local_20[0] != 1) {
    pcVar4 = "Fragment";
    if (cVar1 == '\0') {
      pcVar4 = "Vertex";
    }
    FUN_0402cd10(0xf,"%s shader failed to compile!",pcVar4);
    FUN_0402cd10(0xf,"Shader code:\n%s",__ptr);
    (*DAT_0451ec9c)(iVar2,0x8b84,local_20);
    if (local_20[0] == 0) {
      FUN_0402cd10(0xf,"No shader info log.");
    }
    else {
      __ptr_00 = malloc(local_20[0]);
      (*DAT_0451eca4)(iVar2,local_20[0],0,__ptr_00);
      FUN_0402cd10(0xf,"Shader info log:\n%s",__ptr_00);
      free(__ptr_00);
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0xb8) + param_2) = 0;
  free(__ptr);
  LOCK();
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
  UNLOCK();
  return;
}

