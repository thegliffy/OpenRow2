// Recovered source: eon2/src/dlls/directx/d3d9/pixelformatdata.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- PixelFormatData::MakeSureMultisamplingTested @0x040e0eb0 ---
/* source: pixelformatdata */

void __regparm3 PixelFormatData__MakeSureMultisamplingTested(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_30;
  int local_20 [4];
  
  uVar2 = eON_Int_GL_NoteCurrentContext();
  uVar3 = eON_Int_GL_NoteCurrentContext();
  local_30 = (int *)OpenGLWrapperLinux__ctor();
  cVar1 = (**(code **)(*local_30 + 8))(local_30,*param_1,param_2,param_1 + 1);
  if (cVar1 == '\0') {
    (**(code **)(*local_30 + 4))(local_30);
    eON_Int_GL_RestoreCachedMakeCurrent(uVar3);
    local_30 = (int *)0x0;
  }
  iVar4 = (**(code **)(*local_30 + 0x10))(local_30);
  if (iVar4 == 0) {
    FUN_0400a810("context",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,0x308,"void PixelFormatData::MakeSureMultisamplingTested(HWND)");
  }
  iVar6 = 2;
  do {
    *(undefined1 *)((int)param_1 + iVar6 + 0x1d) = 0;
    (*DAT_0451e664)(1,local_20);
    iVar5 = glGetError();
    if (iVar5 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                   ,0x310,"void PixelFormatData::MakeSureMultisamplingTested(HWND)");
    }
    if (local_20[0] == 0) {
      FUN_0400a810("index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                   ,0x311,"void PixelFormatData::MakeSureMultisamplingTested(HWND)");
    }
    (*DAT_0451e690)(0x8d41,local_20[0]);
    if ((DAT_0451cad2 == '\0') && (DAT_0451ca65 == '\0')) {
      if (DAT_0451c9c2 == '\0') {
        FUN_0400a810("(*(const GLboolean*)&__GLEW_EXT_framebuffer_multisample)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                     ,0x31a,"void PixelFormatData::MakeSureMultisamplingTested(HWND)");
      }
      (*DAT_0451d810)(0x8d41,iVar6,0x8058,0x80,0x80);
    }
    else {
      (*DAT_0451e648)(0x8d41,iVar6,0x8058,0x80,0x80);
    }
    iVar5 = glGetError();
    if (iVar5 == 0) {
      *(undefined1 *)((int)param_1 + iVar6 + 0x1d) = 1;
    }
    iVar6 = iVar6 + 1;
    (*DAT_0451e690)(0x8d41,0);
    (*DAT_0451e680)(1,local_20);
  } while (iVar6 != 0x11);
  (**(code **)(*local_30 + 0x20))(local_30,iVar4);
  (**(code **)(*local_30 + 4))(local_30);
  eON_Int_GL_RestoreCachedMakeCurrent(uVar2);
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  return;
}

// --- PixelFormatData::PrepareRenderbuffer @0x040e21a0 ---
/* source: pixelformatdata */

undefined4 __regparm3
PixelFormatData__PrepareRenderbuffer
          (undefined4 param_1,int *param_2,undefined4 param_3,char param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  uint local_28;
  undefined4 local_24;
  char local_1e;
  undefined1 local_1d [13];
  
  cVar1 = PixelFormatData__MapTextureFormatToGL
                    (param_1,param_3,local_30,local_2c,&local_28,&local_1e,local_1d);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_1e != '\0') {
    return 0;
  }
  (*DAT_0451e664)(1,param_2);
  if (*param_2 == 0) {
    return 0;
  }
  iVar2 = glGetError();
  if (iVar2 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,600,
                 "bool PixelFormatData::PrepareRenderbuffer(D3DFORMAT, GLuint&, bool, bool, bool*)")
    ;
  }
  (*DAT_0451e690)(0x8d41,*param_2);
  (*DAT_0451e64c)(0x8d41,local_28,0x80,0x80);
  iVar2 = glGetError();
  if (iVar2 != 0) {
    return 0;
  }
  bVar4 = local_28 == 0x88f0;
  bVar5 = local_28 == 0x84f9;
  if (bVar5) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,0x192,"bool IsStencil(GLuint)");
  }
  bVar5 = bVar5 || bVar4;
  if (param_5 != 0) {
    *(bool *)param_5 = bVar5;
  }
  if ((char)param_3 == '\0') {
    return 1;
  }
  if (param_4 == '\0') {
    return 1;
  }
  if (local_28 == 0x84f9) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,0x186,"bool IsDepth(GLuint)");
LAB_040e2474:
    (*DAT_0451e668)(1,&local_24);
    (*DAT_0451e694)(0x8d40,local_24);
    bVar4 = false;
  }
  else {
    if (local_28 < 0x84fa) {
      if (2 < local_28 - 0x81a5) goto LAB_040e2474;
    }
    else if (local_28 != 0x88f0) goto LAB_040e2474;
    (*DAT_0451e668)(1,&local_24);
    (*DAT_0451e694)(0x8d40,local_24);
    (*DAT_0451e67c)(0x8d40,0x8d00,0x8d41,*param_2);
    bVar4 = true;
  }
  if (bVar5) {
    (*DAT_0451e67c)(0x8d40,0x8d20,0x8d41,*param_2);
  }
  if ((bVar4) || (bVar5)) {
    (*DAT_0451eed0)(0);
    (*DAT_0451eed4)(0);
  }
  else {
    (*DAT_0451e67c)(0x8d40,0x8ce0,0x8d41,*param_2);
    (*DAT_0451eed0)(0x8ce0);
    (*DAT_0451eed4)(0x8ce0);
  }
  iVar2 = (*DAT_0451e688)(0x8d40);
  (*DAT_0451e694)(0x8d40,0);
  (*DAT_0451e684)(1,&local_24);
  uVar3 = 0;
  if (iVar2 == 0x8cd6) {
    if (*param_2 == 0) {
      FUN_0400a810("index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                   ,0x287,
                   "bool PixelFormatData::PrepareRenderbuffer(D3DFORMAT, GLuint&, bool, bool, bool*)"
                  );
      uVar3 = 0;
    }
  }
  else if ((iVar2 != 0x8cdd) && (uVar3 = 1, iVar2 != 0x8cd5)) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,0x28a,
                 "bool PixelFormatData::PrepareRenderbuffer(D3DFORMAT, GLuint&, bool, bool, bool*)")
    ;
    uVar3 = 0;
  }
  return uVar3;
}

// --- PixelFormatData::PrepareTexture @0x040e1960 ---
/* source: pixelformatdata */

undefined4 __regparm3
PixelFormatData__PrepareTexture(int param_1,int *param_2,char param_3,char param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool local_41;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  char local_1e;
  undefined1 local_1d [13];
  
  cVar2 = PixelFormatData__MapTextureFormatToGL
                    (param_1,param_4,&local_30,&local_2c,&local_28,&local_1e,local_1d);
  if (cVar2 == '\0') {
    return 0;
  }
  glGenTextures(1,param_2);
  iVar3 = *param_2;
  if (iVar3 == 0) {
    return 0;
  }
  if (param_3 == '\0') {
    glBindTexture(0xde1,iVar3);
    glTexParameterf(0xde1,0x2801,0x46180400);
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                   ,0x1d2,
                   "bool PixelFormatData::PrepareTexture(D3DFORMAT, GLuint&, bool, bool, bool)");
    }
    if (local_1e == '\0') {
      uVar5 = 0xde1;
      glTexImage2D(0xde1,0,local_28,0x80,0x80,0,local_2c,local_30,0);
    }
    else {
      uVar4 = 0x2000;
      if (param_1 != 0x31545844) {
        uVar4 = 0x4000;
      }
      uVar5 = 0xde1;
      (*DAT_0451eea0)(0xde1,0,local_2c,0x80,0x80,0,uVar4,0);
    }
  }
  else {
    glBindTexture(0x8513,iVar3);
    glTexParameterf(0x8513,0x2801,0x46180400);
    iVar3 = glGetError();
    if (iVar3 != 0) {
      FUN_0400a810("glGetError() == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                   ,0x1b5,
                   "bool PixelFormatData::PrepareTexture(D3DFORMAT, GLuint&, bool, bool, bool)");
    }
    if (local_1e == '\0') {
      uVar5 = 0x8515;
      glTexImage2D(0x8515,0,local_28,0x80,0x80,0,local_2c,local_30,0);
      glTexImage2D(0x8516,0,local_28,0x80,0x80,0,local_2c,local_30,0);
      glTexImage2D(0x8517,0,local_28,0x80,0x80,0,local_2c,local_30,0);
      glTexImage2D(0x8518,0,local_28,0x80,0x80,0,local_2c,local_30,0);
      glTexImage2D(0x8519,0,local_28,0x80,0x80,0,local_2c,local_30,0);
      glTexImage2D(0x851a,0,local_28,0x80,0x80,0,local_2c,local_30,0);
    }
    else {
      uVar5 = 0x8515;
      uVar4 = 0x4000;
      if (param_1 == 0x31545844) {
        uVar4 = 0x2000;
      }
      (*DAT_0451eea0)(0x8515,0,local_2c,0x80,0x80,0,uVar4,0);
      (*DAT_0451eea0)(0x8516,0,local_2c,0x80,0x80,0,uVar4,0);
      (*DAT_0451eea0)(0x8517,0,local_2c,0x80,0x80,0,uVar4,0);
      (*DAT_0451eea0)(0x8518,0,local_2c,0x80,0x80,0,uVar4,0);
      (*DAT_0451eea0)(0x8519,0,local_2c,0x80,0x80,0,uVar4,0);
      (*DAT_0451eea0)(0x851a,0,local_2c,0x80,0x80,0,uVar4,0);
    }
  }
  iVar3 = glGetError();
  if (iVar3 != 0) {
    return 0;
  }
  if (param_4 == '\0') {
    return 1;
  }
  if (param_5 == '\0') {
    return 1;
  }
  if (local_28 == 0x84f9) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,0x186,"bool IsDepth(GLuint)");
    bVar1 = false;
    goto LAB_040e1ad1;
  }
  if (local_28 < 0x84fa) {
    if (local_28 - 0x81a5 < 3) {
LAB_040e205b:
      bVar1 = true;
      goto LAB_040e1ad1;
    }
  }
  else if (local_28 == 0x88f0) goto LAB_040e205b;
  bVar1 = false;
LAB_040e1ad1:
  if (local_28 == 0x84f9) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,0x192,"bool IsStencil(GLuint)");
  }
  local_41 = local_28 == 0x84f9 || local_28 == 0x88f0;
  (*DAT_0451e668)(1,&local_24);
  (*DAT_0451e694)(0x8d40,local_24);
  if (bVar1) {
    (*DAT_0451e674)(0x8d40,0x8d00,uVar5,*param_2,0);
  }
  if (local_41) {
    (*DAT_0451e674)(0x8d40,0x8d20,uVar5,*param_2,0);
  }
  if ((bVar1) || (local_41)) {
    (*DAT_0451eed0)(0);
    (*DAT_0451eed4)(0);
  }
  else {
    (*DAT_0451e674)(0x8d40,0x8ce0,uVar5,*param_2,0);
    (*DAT_0451eed0)(0x8ce0);
    (*DAT_0451eed4)(0x8ce0);
  }
  iVar3 = (*DAT_0451e688)(0x8d40);
  (*DAT_0451e694)(0x8d40,0);
  (*DAT_0451e684)(1,&local_24);
  uVar5 = 0;
  if (iVar3 == 0x8cd6) {
    if (*param_2 == 0) {
      FUN_0400a810("index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                   ,0x205,
                   "bool PixelFormatData::PrepareTexture(D3DFORMAT, GLuint&, bool, bool, bool)");
      uVar5 = 0;
    }
  }
  else if ((iVar3 != 0x8cdd) && (uVar5 = 1, iVar3 != 0x8cd5)) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                 ,0x208,"bool PixelFormatData::PrepareTexture(D3DFORMAT, GLuint&, bool, bool, bool)"
                );
    uVar5 = 0;
  }
  return uVar5;
}

// --- PixelFormatData::PrepareVolumeTexture @0x040e28d0 ---
/* source: pixelformatdata */

bool PixelFormatData__PrepareVolumeTexture(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1e;
  undefined1 local_1d [13];
  
  bVar4 = false;
  *param_3 = 0;
  if (param_2 != 0x4c4c554e) {
    cVar1 = PixelFormatData__MapTextureFormatToGL
                      (param_2,0,&local_2c,&local_28,&local_24,&local_1e,local_1d);
    if (cVar1 != '\0') {
      glGenTextures(1,param_3);
      if (*param_3 != 0) {
        glBindTexture(0x806f,*param_3);
        glTexParameterf(0x806f,0x2801,0x46180400);
        iVar2 = glGetError();
        if (iVar2 != 0) {
          FUN_0400a810("glGetError() == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                       ,0x22d,"bool PixelFormatData::PrepareVolumeTexture(D3DFORMAT, GLuint&)");
        }
        if (local_1e == '\0') {
          (*DAT_0451eeb4)(0x806f,0,local_24,0x40,0x40,0x40,0,local_28,local_2c,0);
        }
        else {
          uVar3 = 0x20000;
          if (param_2 != 0x31545844) {
            uVar3 = 0x40000;
          }
          (*DAT_0451ee9c)(0x806f,0,local_28,0x40,0x40,0x40,0,uVar3,0);
        }
        iVar2 = glGetError();
        bVar4 = iVar2 == 0;
      }
    }
  }
  return bVar4;
}

// --- PixelFormatData::TestFramebuffer @0x040e2b50 ---
/* source: pixelformatdata */

undefined4
PixelFormatData__TestFramebuffer
          (undefined4 param_1,int param_2,char param_3,char param_4,int param_5,char param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20 [4];
  
  uVar1 = 0;
  if (param_5 != 0) {
    (*DAT_0451e668)(1,local_20);
    (*DAT_0451e694)(0x8d40,local_20[0]);
    if (param_2 == 0) {
      (*DAT_0451eed0)(0);
      (*DAT_0451eed4)(0);
    }
    else {
      if (param_3 == '\0') {
        (*DAT_0451e674)(0x8d40,0x8ce0,(-(uint)(param_4 == '\0') & 0xffff88cc) + 0x8515,param_2,0);
      }
      else {
        (*DAT_0451e67c)(0x8d40,0x8ce0,0x8d41,param_2);
      }
      (*DAT_0451eed0)(0x8ce0);
      (*DAT_0451eed4)(0x8ce0);
    }
    (*DAT_0451e67c)(0x8d40,0x8d00,0x8d41,param_5);
    if (param_6 != '\0') {
      (*DAT_0451e67c)(0x8d40,0x8d20,0x8d41,param_5);
    }
    iVar2 = (*DAT_0451e688)(0x8d40);
    (*DAT_0451e694)(0x8d40,0);
    (*DAT_0451e684)(1,local_20);
    if ((iVar2 == 0x8cd6) || (iVar2 == 0x8cdd)) {
      return 0;
    }
    uVar1 = 1;
    if (iVar2 != 0x8cd5) {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                   ,0x2c3,"bool PixelFormatData::TestFramebuffer(GLuint, bool, bool, GLuint, bool)")
      ;
      uVar1 = 0;
    }
  }
  return uVar1;
}

// --- PixelFormatData::TestSurfaceOrTexture @0x040e30c0 ---
/* source: pixelformatdata */

undefined1 PixelFormatData__TestSurfaceOrTexture(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_44;
  undefined4 *local_40;
  int local_3c;
  int local_38;
  undefined1 local_34;
  int local_30;
  int local_2c;
  undefined1 local_28;
  int local_24;
  int local_20 [4];
  
  puVar1 = param_1 + 0xd;
  puVar9 = puVar1;
  puVar8 = (undefined4 *)param_1[0xe];
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    do {
      while (puVar10 = puVar8, iVar4 = memcmp(puVar10 + 4,param_2,8), -1 < iVar4) {
        puVar9 = puVar10;
        puVar8 = (undefined4 *)puVar10[2];
        if ((undefined4 *)puVar10[2] == (undefined4 *)0x0) goto LAB_040e3113;
      }
      piVar7 = puVar10 + 3;
      puVar10 = puVar9;
      puVar8 = (undefined4 *)*piVar7;
    } while ((undefined4 *)*piVar7 != (undefined4 *)0x0);
LAB_040e3113:
    if ((puVar1 != puVar10) && (iVar4 = memcmp(param_2,puVar10 + 4,8), -1 < iVar4)) {
      return *(undefined1 *)(puVar10 + 6);
    }
  }
  uVar5 = eON_Int_GL_NoteCurrentContext();
  uVar6 = eON_Int_GL_NoteCurrentContext();
  piVar7 = (int *)OpenGLWrapperLinux__ctor();
  cVar2 = (**(code **)(*piVar7 + 8))(piVar7,*param_1,0,param_1 + 1);
  if (cVar2 == '\0') {
    (**(code **)(*piVar7 + 4))(piVar7);
    eON_Int_GL_RestoreCachedMakeCurrent(uVar6);
    puVar8 = puVar1;
    puVar10 = puVar1;
    puVar9 = (undefined4 *)param_1[0xe];
    if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
      do {
        puVar8 = puVar9;
        iVar4 = memcmp(puVar8 + 4,param_2,8);
        if (iVar4 < 0) {
          puVar9 = (undefined4 *)puVar8[3];
          puVar8 = puVar10;
        }
        else {
          puVar9 = (undefined4 *)puVar8[2];
        }
        puVar10 = puVar8;
      } while (puVar9 != (undefined4 *)0x0);
      if ((puVar1 != puVar8) && (iVar4 = memcmp(param_2,puVar8 + 4,8), -1 < iVar4))
      goto LAB_040e3439;
    }
    local_3c = *param_2;
    local_34 = 0;
    local_38 = param_2[1];
    FUN_040e3cd0(&local_40,param_1 + 0xc,puVar8,&local_3c);
    puVar8 = local_40;
LAB_040e3439:
    *(undefined1 *)(puVar8 + 6) = 0;
    return 0;
  }
  uVar6 = (**(code **)(*piVar7 + 0x10))(piVar7);
  local_24 = 0;
  if (*(char *)((int)param_2 + 5) == '\0') {
    if (*param_2 == 0x4c4c554e) {
LAB_040e334d:
      local_24 = 0;
      local_20[0] = 0;
      uVar3 = 1;
    }
    else {
      uVar3 = PixelFormatData__PrepareTexture((char)param_2[1],(char)param_2[1]);
      local_20[0] = local_24;
      if (local_24 != 0) {
        glDeleteTextures(1,local_20);
      }
    }
  }
  else {
    local_44 = *param_2;
    if (local_44 == 0x4244564e) {
      uVar3 = DAT_0451c9ca != '\0';
    }
    else {
      cVar2 = (char)param_2[1];
      if (cVar2 == '\0') {
        FUN_0400a810("test.IsRenderTarget",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/pixelformatdata.cpp"
                     ,0x102,
                     "bool PixelFormatData::TestSurfaceOrTexture(const PixelFormatData::TextureOrSurfaceTest&)"
                    );
        local_44 = *param_2;
        cVar2 = (char)param_2[1];
      }
      local_24 = 0;
      if (local_44 == 0x4c4c554e) goto LAB_040e334d;
      uVar3 = PixelFormatData__PrepareRenderbuffer(cVar2,0);
      local_20[0] = local_24;
      if (local_24 != 0) {
        (*DAT_0451e680)(1,local_20);
      }
    }
  }
  (**(code **)(*piVar7 + 0x20))(piVar7,uVar6);
  (**(code **)(*piVar7 + 4))(piVar7);
  eON_Int_GL_RestoreCachedMakeCurrent(uVar5);
  puVar8 = puVar1;
  puVar10 = puVar1;
  puVar9 = (undefined4 *)param_1[0xe];
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    do {
      puVar8 = puVar9;
      iVar4 = memcmp(puVar8 + 4,param_2,8);
      if (iVar4 < 0) {
        puVar9 = (undefined4 *)puVar8[3];
        puVar8 = puVar10;
      }
      else {
        puVar9 = (undefined4 *)puVar8[2];
      }
      puVar10 = puVar8;
    } while (puVar9 != (undefined4 *)0x0);
    if ((puVar1 != puVar8) && (iVar4 = memcmp(param_2,puVar8 + 4,8), -1 < iVar4)) goto LAB_040e3341;
  }
  local_30 = *param_2;
  local_28 = 0;
  local_2c = param_2[1];
  FUN_040e3cd0(&local_40,param_1 + 0xc,puVar8,&local_30);
  puVar8 = local_40;
LAB_040e3341:
  *(undefined1 *)(puVar8 + 6) = uVar3;
  return uVar3;
}

