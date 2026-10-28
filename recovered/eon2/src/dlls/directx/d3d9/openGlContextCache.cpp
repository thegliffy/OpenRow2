// Recovered source: eon2/src/dlls/directx/d3d9/openGlContextCache.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- OpenGLContextCache::BindUniformBufferRange @0x040c72a0 ---
/* source: openGlContextCache */

void OpenGLContextCache__BindUniformBufferRange
               (int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  if (10 < param_2) {
    FUN_0400a810("bindPointIndex < 11",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x25a,
                 "void OpenGLContextCache::BindUniformBufferRange(GLuint, GLuint, GLuint, GLuint)");
  }
  if (((*(int *)(param_1 + (param_2 + 0xdc) * 4) != param_3) ||
      (*(int *)(param_1 + 0xc + (param_2 + 0xe4) * 4) != param_4)) ||
     (*(int *)(param_1 + 8 + (param_2 + 0xf0) * 4) != param_5)) {
    (*DAT_0451e0cc)(0x8a11,param_2,param_3,param_4,param_5);
    *(int *)(param_1 + 0x360) = param_3;
    *(int *)(param_1 + (param_2 + 0xdc) * 4) = param_3;
    *(int *)(param_1 + 0xc + (param_2 + 0xe4) * 4) = param_4;
    *(int *)(param_1 + 8 + (param_2 + 0xf0) * 4) = param_5;
  }
  return;
}

// --- OpenGLContextCache::CheckCacheIntegrity @0x040c7480 ---
/* source: openGlContextCache */

bool OpenGLContextCache__CheckCacheIntegrity(int param_1)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float *local_c0;
  bool local_b9;
  float *local_b8;
  byte local_b4;
  byte *local_b0;
  undefined1 local_a0 [64];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  byte local_21;
  char local_20;
  char local_1f;
  char local_1e;
  byte local_1d [13];
  
  if (*(char *)(param_1 + 0x218) == '\0') {
    glGetFloatv(0xb66,&local_60);
    iVar5 = memcmp(&local_60,(void *)(param_1 + 0x4e4),0x10);
    if (iVar5 != 0) {
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: fog color in OpenGL is ( %f, %f, %f, %f ), cached is ( %f, %f, %f, %f )"
                   ,(double)local_60,(double)local_5c,(double)local_58,(double)local_54,
                   (double)*(float *)(param_1 + 0x4e4),(double)*(float *)(param_1 + 0x4e8),
                   (double)*(float *)(param_1 + 0x4ec),(double)*(float *)(param_1 + 0x4f0));
    }
    glGetFloatv(0xb63,&local_2c);
    fVar13 = *(float *)(param_1 + 0x4f4);
    bVar10 = fVar13 != local_2c;
    if (bVar10) {
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: fog start in OpenGL is %f, cached is %f",(double)local_2c
                   ,(double)fVar13);
    }
    local_b8 = &local_2c;
    glGetFloatv(0xb64,local_b8);
    fVar13 = *(float *)(param_1 + 0x4f8);
    bVar11 = fVar13 != local_2c;
    if (bVar11) {
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: fog end in OpenGL is %f, cached is %f",(double)local_2c,
                   (double)fVar13);
    }
    glGetFloatv(0xb62,local_b8);
    fVar13 = *(float *)(param_1 + 0x4fc);
    bVar12 = fVar13 != local_2c;
    if (bVar12) {
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: fog density in OpenGL is %f, cached is %f",
                   (double)local_2c,(double)fVar13);
    }
    local_b9 = !bVar12 && (!bVar11 && (!bVar10 && iVar5 == 0));
    glGetBooleanv(0xbc0,local_1d);
    if (local_1d[0] == 0) {
      if (*(char *)(param_1 + 0xa8a) != '\0') {
        pcVar7 = "enabled";
        pcVar4 = "disabled";
        goto LAB_040c9df9;
      }
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0xa8a) == '\0') {
LAB_040c9df9:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: alpha test in OpenGL is %s, cached is %s",pcVar4,pcVar7
                    );
      }
    }
  }
  else {
    local_b9 = true;
  }
  local_b0 = local_1d;
  local_b8 = &local_2c;
  local_c0 = &local_60;
  glGetBooleanv(0xbe2,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa89) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c924f:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: blending in OpenGL is %s, cached is %s",pcVar4,pcVar7);
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa89) == '\0') goto LAB_040c924f;
  }
  glGetBooleanv(0xc11,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa8b) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c920f:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: scissor test in OpenGL is %s, cached is %s",pcVar4,pcVar7
                  );
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa8b) == '\0') goto LAB_040c920f;
  }
  glGetBooleanv(0xb71,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa8c) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c91cf:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: depth test in OpenGL is %s, cached is %s",pcVar4,pcVar7);
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa8c) == '\0') goto LAB_040c91cf;
  }
  glGetBooleanv(0xb90,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa8d) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c918f:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil test in OpenGL is %s, cached is %s",pcVar4,pcVar7
                  );
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa8d) == '\0') goto LAB_040c918f;
  }
  glGetBooleanv(0xbd0,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa8f) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c914f:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: dither in OpenGL is %s, cached is %s",pcVar4,pcVar7);
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa8f) == '\0') goto LAB_040c914f;
  }
  glGetBooleanv(0x8db9,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa90) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
      goto LAB_040c90b7;
    }
LAB_040c75ca:
    if (*(char *)(param_1 + 0x218) == '\0') goto LAB_040c90e2;
LAB_040c75d7:
    local_1d[0] = glIsEnabled(0x3000);
    if (local_1d[0] == 0) {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
      if (*(char *)(param_1 + 0x428) != '\0') goto LAB_040c928f;
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0x428) == '\0') {
LAB_040c928f:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip distance %d in OpenGL Core is %s, cached is %s",0,
                     pcVar4,pcVar7);
      }
    }
    local_1d[0] = glIsEnabled(0x3001);
    if (local_1d[0] == 0) {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
      if (*(char *)(param_1 + 0x429) != '\0') {
LAB_040c93af:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip distance %d in OpenGL Core is %s, cached is %s",1,
                     pcVar4,pcVar7);
      }
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0x429) == '\0') goto LAB_040c93af;
    }
    local_1d[0] = glIsEnabled(0x3002);
    if (local_1d[0] == 0) {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
      if (*(char *)(param_1 + 0x42a) != '\0') {
LAB_040c9367:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip distance %d in OpenGL Core is %s, cached is %s",2,
                     pcVar4,pcVar7);
      }
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0x42a) == '\0') goto LAB_040c9367;
    }
    local_1d[0] = glIsEnabled(0x3003);
    if (local_1d[0] == 0) {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
      if (*(char *)(param_1 + 0x42b) != '\0') {
LAB_040c931f:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip distance %d in OpenGL Core is %s, cached is %s",3,
                     pcVar4,pcVar7);
      }
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0x42b) == '\0') goto LAB_040c931f;
    }
    local_1d[0] = glIsEnabled(0x3004);
    if (local_1d[0] == 0) {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
      if (*(char *)(param_1 + 0x42c) != '\0') {
LAB_040c92d7:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip distance %d in OpenGL Core is %s, cached is %s",4,
                     pcVar4,pcVar7);
      }
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0x42c) == '\0') goto LAB_040c92d7;
    }
    local_1d[0] = glIsEnabled(0x3005);
    if (local_1d[0] == 0) {
      if (*(char *)(param_1 + 0x42d) != '\0') {
        pcVar7 = "enabled";
        pcVar4 = "disabled";
LAB_040c9c67:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip distance %d in OpenGL Core is %s, cached is %s",5,
                     pcVar4,pcVar7);
      }
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0x42d) == '\0') goto LAB_040c9c67;
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa90) != '\0') goto LAB_040c75ca;
LAB_040c90b7:
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: framebuffer SRGB in OpenGL is %s, cached is %s",pcVar4,
                 pcVar7);
    if (*(char *)(param_1 + 0x218) != '\0') goto LAB_040c75d7;
LAB_040c90e2:
    local_1d[0] = glIsEnabled(0x8861);
    if (local_1d[0] == 0) {
      if (*(char *)(param_1 + 0xa91) != '\0') {
        pcVar7 = "enabled";
        pcVar4 = "disabled";
        goto LAB_040c9110;
      }
    }
    else {
      pcVar7 = "disabled";
      pcVar4 = "enabled";
      if (*(char *)(param_1 + 0xa91) == '\0') {
LAB_040c9110:
        local_b9 = false;
        FUN_0402cd10(0xf,"OPENGL CACHE FAIL: point sprite in OpenGL is %s, cached is %s",pcVar4,
                     pcVar7);
      }
    }
  }
  glGetBooleanv(0xb20,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa92) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c9be7:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: line smoothing in OpenGL is %s, cached is %s",pcVar4,
                   pcVar7);
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa92) == '\0') goto LAB_040c9be7;
  }
  glGetBooleanv(0xb44,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0xa88) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c9c27:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: cull face in OpenGL is %s, cached is %s",pcVar4,pcVar7);
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0xa88) == '\0') goto LAB_040c9c27;
  }
  glGetIntegerv(0x8825,&local_28);
  if (*(int *)(param_1 + 0x33c) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: draw buffer 0 in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x33c));
  }
  glGetIntegerv(0x8826,&local_28);
  if (*(int *)(param_1 + 0x340) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: draw buffer 1 in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x340));
  }
  glGetIntegerv(0x8827,&local_28);
  if (*(int *)(param_1 + 0x344) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: draw buffer 2 in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x344));
  }
  glGetIntegerv(0x8828,&local_28);
  if (*(int *)(param_1 + 0x348) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: draw buffer 3 in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x348));
  }
  glGetIntegerv(0xc02,&local_28);
  if (*(int *)(param_1 + 0x350) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: read buffer in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x350));
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    glGetIntegerv(0xbc1,&local_28);
    if (*(int *)(param_1 + 0x458) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: alpha test function in OpenGL is %d, cached is %d",
                   local_28,*(int *)(param_1 + 0x458));
    }
    glGetFloatv(0xbc2,local_b8);
    if (*(float *)(param_1 + 0x45c) != local_2c) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: alpha test reference value in OpenGL is %f, cached is %f"
                   ,(double)local_2c,(double)*(float *)(param_1 + 0x45c));
    }
  }
  glGetIntegerv(0x8009,&local_28);
  if (*(int *)(param_1 + 0x470) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: blend op RGB in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x470));
  }
  glGetIntegerv(0x883d,&local_28);
  if (*(int *)(param_1 + 0x474) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: blend op alpha in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x474));
  }
  glGetIntegerv(0x80c9,&local_28);
  if (*(int *)(param_1 + 0x460) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: blend source RGB in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x460));
  }
  glGetIntegerv(0x80c8,&local_28);
  if (*(int *)(param_1 + 0x464) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: blend dest RGB in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x464));
  }
  glGetIntegerv(0x80cb,&local_28);
  if (*(int *)(param_1 + 0x468) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: blend source alpha in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x468));
  }
  glGetIntegerv(0x80ca,&local_28);
  if (*(int *)(param_1 + 0x46c) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: blend dest alpha in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x46c));
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    uVar3 = *(uint *)(param_1 + 0x420);
    glGetBooleanv(0x3000,local_b0);
    local_b4 = (byte)uVar3;
    if (local_1d[0] != (local_b4 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if (*(char *)(param_1 + 0xa88) != '\0') {
        pcVar7 = "enabled";
      }
      if (local_1d[0] == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip plane %d in OpenGL is %s, cached is %s",0,pcVar4,
                   pcVar7);
    }
    glGetBooleanv(0x3001,local_b0);
    local_b4 = (byte)(uVar3 >> 1);
    if (local_1d[0] != (local_b4 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if (*(char *)(param_1 + 0xa88) != '\0') {
        pcVar7 = "enabled";
      }
      if (local_1d[0] == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip plane %d in OpenGL is %s, cached is %s",1,pcVar4,
                   pcVar7);
    }
    glGetBooleanv(0x3002,local_b0);
    local_b4 = (byte)(uVar3 >> 2);
    if (local_1d[0] != (local_b4 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if (*(char *)(param_1 + 0xa88) != '\0') {
        pcVar7 = "enabled";
      }
      if (local_1d[0] == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip plane %d in OpenGL is %s, cached is %s",2,pcVar4,
                   pcVar7);
    }
    glGetBooleanv(0x3003,local_b0);
    local_b4 = (byte)(uVar3 >> 3);
    if (local_1d[0] != (local_b4 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if (*(char *)(param_1 + 0xa88) != '\0') {
        pcVar7 = "enabled";
      }
      if (local_1d[0] == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip plane %d in OpenGL is %s, cached is %s",3,pcVar4,
                   pcVar7);
    }
    glGetBooleanv(0x3004,local_b0);
    local_b4 = (byte)(uVar3 >> 4);
    if (local_1d[0] != (local_b4 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if (*(char *)(param_1 + 0xa88) != '\0') {
        pcVar7 = "enabled";
      }
      if (local_1d[0] == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip plane %d in OpenGL is %s, cached is %s",4,pcVar4,
                   pcVar7);
    }
    glGetBooleanv(0x3005,local_b0);
    if (local_1d[0] != ((byte)(uVar3 >> 5) & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "enabled";
      if (*(char *)(param_1 + 0xa88) == '\0') {
        pcVar7 = "disabled";
      }
      if (local_1d[0] == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clip plane %d in OpenGL is %s, cached is %s",5,pcVar4,
                   pcVar7);
    }
  }
  glGetFloatv(0xc22,local_c0);
  if (local_60 != *(float *)(param_1 + 0x4a8)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clear color red in OpenGL is %f, cached is %f",
                 (double)local_60,(double)*(float *)(param_1 + 0x4a8));
  }
  if (local_5c != *(float *)(param_1 + 0x4ac)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clear color green in OpenGL is %f, cached is %f",
                 (double)local_5c,(double)*(float *)(param_1 + 0x4ac));
  }
  if (local_58 != *(float *)(param_1 + 0x4b0)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clear color blue in OpenGL is %f, cached is %f",
                 (double)local_58,(double)*(float *)(param_1 + 0x4b0));
  }
  if (local_54 != *(float *)(param_1 + 0x4b4)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: clear color alpha in OpenGL is %f, cached is %f",
                 (double)local_54,(double)*(float *)(param_1 + 0x4b4));
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    if (DAT_0451c9c8 != '\0') {
      (*DAT_0451d888)(0xc23,0,&local_21);
      bVar2 = *(byte *)(param_1 + 0x424);
      bVar10 = (bVar2 & 2) != 0;
      bVar11 = (bVar2 & 4) != 0;
      bVar12 = (bVar2 & 8) != 0;
      if (local_21 != (bVar2 & 1)) {
        pcVar4 = "enabled";
        pcVar7 = "disabled";
        if ((bVar2 & 1) != 0) {
          pcVar7 = "enabled";
        }
        if (local_21 == 0) {
          pcVar4 = "disabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u for red in OpenGL is %s, cached is %s"
                     ,0,pcVar4,pcVar7);
      }
      if ((bool)local_20 != bVar10) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar10) {
          pcVar7 = "enabled";
        }
        if (local_20 != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u green in OpenGL is %s, cached is %s"
                     ,0,pcVar4,pcVar7);
      }
      if ((bool)local_1f != bVar11) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar11) {
          pcVar7 = "enabled";
        }
        if (local_1f != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u blue in OpenGL is %s, cached is %s"
                     ,0,pcVar4,pcVar7);
      }
      if ((bool)local_1e != bVar12) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar12) {
          pcVar7 = "enabled";
        }
        if (local_1e != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask draw buffer %u for alpha in OpenGL is %s, cached is %s"
                     ,0,pcVar4,pcVar7);
      }
      (*DAT_0451d888)(0xc23,1,&local_21);
      bVar2 = *(byte *)(param_1 + 0x425);
      bVar10 = (bVar2 & 2) != 0;
      bVar11 = (bVar2 & 4) != 0;
      bVar12 = (bVar2 & 8) != 0;
      if (local_21 != (bVar2 & 1)) {
        pcVar4 = "enabled";
        pcVar7 = "disabled";
        if ((bVar2 & 1) != 0) {
          pcVar7 = "enabled";
        }
        if (local_21 == 0) {
          pcVar4 = "disabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u for red in OpenGL is %s, cached is %s"
                     ,1,pcVar4,pcVar7);
      }
      if ((bool)local_20 != bVar10) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar10) {
          pcVar7 = "enabled";
        }
        if (local_20 != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u green in OpenGL is %s, cached is %s"
                     ,1,pcVar4,pcVar7);
      }
      if ((bool)local_1f != bVar11) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar11) {
          pcVar7 = "enabled";
        }
        if (local_1f != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u blue in OpenGL is %s, cached is %s"
                     ,1,pcVar4,pcVar7);
      }
      if ((bool)local_1e != bVar12) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar12) {
          pcVar7 = "enabled";
        }
        if (local_1e != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask draw buffer %u for alpha in OpenGL is %s, cached is %s"
                     ,1,pcVar4,pcVar7);
      }
      (*DAT_0451d888)(0xc23,2,&local_21);
      bVar2 = *(byte *)(param_1 + 0x426);
      bVar10 = (bVar2 & 2) != 0;
      bVar11 = (bVar2 & 4) != 0;
      bVar12 = (bVar2 & 8) != 0;
      if (local_21 != (bVar2 & 1)) {
        pcVar4 = "enabled";
        pcVar7 = "disabled";
        if ((bVar2 & 1) != 0) {
          pcVar7 = "enabled";
        }
        if (local_21 == 0) {
          pcVar4 = "disabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u for red in OpenGL is %s, cached is %s"
                     ,2,pcVar4,pcVar7);
      }
      if ((bool)local_20 != bVar10) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar10) {
          pcVar7 = "enabled";
        }
        if (local_20 != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u green in OpenGL is %s, cached is %s"
                     ,2,pcVar4,pcVar7);
      }
      if ((bool)local_1f != bVar11) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar11) {
          pcVar7 = "enabled";
        }
        if (local_1f != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask for draw buffer %u blue in OpenGL is %s, cached is %s"
                     ,2,pcVar4,pcVar7);
      }
      if ((bool)local_1e != bVar12) {
        pcVar4 = "disabled";
        pcVar7 = "disabled";
        if (bVar12) {
          pcVar7 = "enabled";
        }
        if (local_1e != '\0') {
          pcVar4 = "enabled";
        }
        local_b9 = false;
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: color mask draw buffer %u for alpha in OpenGL is %s, cached is %s"
                     ,2,pcVar4,pcVar7);
      }
      (*DAT_0451d888)(0xc23,3,&local_21);
      goto LAB_040c81ab;
    }
    glGetBooleanv(0xc23,&local_21);
    bVar2 = *(byte *)(param_1 + 0x424);
    bVar10 = (bVar2 & 2) != 0;
    bVar11 = (bVar2 & 4) != 0;
    bVar12 = (bVar2 & 8) != 0;
    if (local_21 != (bVar2 & 1)) {
      pcVar4 = "disabled";
      pcVar7 = "enabled";
      if ((bVar2 & 1) == 0) {
        pcVar7 = "disabled";
      }
      if (local_21 != 0) {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: color mask for red in OpenGL is %s, cached is %s",pcVar4,
                   pcVar7);
    }
    if ((bool)local_20 != bVar10) {
      pcVar4 = "disabled";
      pcVar7 = "enabled";
      if (!bVar10) {
        pcVar7 = "disabled";
      }
      if (local_20 != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: color mask for green in OpenGL is %s, cached is %s",
                   pcVar4,pcVar7);
    }
    if ((bool)local_1f != bVar11) {
      pcVar4 = "disabled";
      pcVar7 = "enabled";
      if (!bVar11) {
        pcVar7 = "disabled";
      }
      if (local_1f != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: color mask for blue in OpenGL is %s, cached is %s",pcVar4
                   ,pcVar7);
    }
    if ((bool)local_1e != bVar12) {
      pcVar4 = "disabled";
      pcVar7 = "enabled";
      if (!bVar12) {
        pcVar7 = "disabled";
      }
      if (local_1e != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: color mask for alpha in OpenGL is %s, cached is %s",
                   pcVar4,pcVar7);
    }
  }
  else {
    (*DAT_0451eb2c)(0xc23,0,&local_21);
    bVar2 = *(byte *)(param_1 + 0x424);
    bVar10 = (bVar2 & 2) != 0;
    bVar11 = (bVar2 & 4) != 0;
    bVar12 = (bVar2 & 8) != 0;
    if (local_21 != (bVar2 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if ((bVar2 & 1) != 0) {
        pcVar7 = "enabled";
      }
      if (local_21 == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u for red in OpenGL is %s, cached is %s"
                   ,0,pcVar4,pcVar7);
    }
    if ((bool)local_20 != bVar10) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar10) {
        pcVar7 = "enabled";
      }
      if (local_20 != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u green in OpenGL is %s, cached is %s"
                   ,0,pcVar4,pcVar7);
    }
    if ((bool)local_1f != bVar11) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar11) {
        pcVar7 = "enabled";
      }
      if (local_1f != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u blue in OpenGL is %s, cached is %s"
                   ,0,pcVar4,pcVar7);
    }
    if ((bool)local_1e != bVar12) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar12) {
        pcVar7 = "enabled";
      }
      if (local_1e != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask draw buffer %u for alpha in OpenGL is %s, cached is %s"
                   ,0,pcVar4,pcVar7);
    }
    (*DAT_0451eb2c)(0xc23,1,&local_21);
    bVar2 = *(byte *)(param_1 + 0x425);
    bVar10 = (bVar2 & 2) != 0;
    bVar11 = (bVar2 & 4) != 0;
    bVar12 = (bVar2 & 8) != 0;
    if (local_21 != (bVar2 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if ((bVar2 & 1) != 0) {
        pcVar7 = "enabled";
      }
      if (local_21 == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u for red in OpenGL is %s, cached is %s"
                   ,1,pcVar4,pcVar7);
    }
    if ((bool)local_20 != bVar10) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar10) {
        pcVar7 = "enabled";
      }
      if (local_20 != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u green in OpenGL is %s, cached is %s"
                   ,1,pcVar4,pcVar7);
    }
    if ((bool)local_1f != bVar11) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar11) {
        pcVar7 = "enabled";
      }
      if (local_1f != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u blue in OpenGL is %s, cached is %s"
                   ,1,pcVar4,pcVar7);
    }
    if ((bool)local_1e != bVar12) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar12) {
        pcVar7 = "enabled";
      }
      if (local_1e != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask draw buffer %u for alpha in OpenGL is %s, cached is %s"
                   ,1,pcVar4,pcVar7);
    }
    (*DAT_0451eb2c)(0xc23,2,&local_21);
    bVar2 = *(byte *)(param_1 + 0x426);
    bVar10 = (bVar2 & 2) != 0;
    bVar11 = (bVar2 & 4) != 0;
    bVar12 = (bVar2 & 8) != 0;
    if (local_21 != (bVar2 & 1)) {
      pcVar4 = "enabled";
      pcVar7 = "disabled";
      if ((bVar2 & 1) != 0) {
        pcVar7 = "enabled";
      }
      if (local_21 == 0) {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u for red in OpenGL is %s, cached is %s"
                   ,2,pcVar4,pcVar7);
    }
    if ((bool)local_20 != bVar10) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar10) {
        pcVar7 = "enabled";
      }
      if (local_20 != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u green in OpenGL is %s, cached is %s"
                   ,2,pcVar4,pcVar7);
    }
    if ((bool)local_1f != bVar11) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar11) {
        pcVar7 = "enabled";
      }
      if (local_1f != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u blue in OpenGL is %s, cached is %s"
                   ,2,pcVar4,pcVar7);
    }
    if ((bool)local_1e != bVar12) {
      pcVar4 = "disabled";
      pcVar7 = "disabled";
      if (bVar12) {
        pcVar7 = "enabled";
      }
      if (local_1e != '\0') {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask draw buffer %u for alpha in OpenGL is %s, cached is %s"
                   ,2,pcVar4,pcVar7);
    }
    (*DAT_0451eb2c)(0xc23,3,&local_21);
LAB_040c81ab:
    bVar2 = *(byte *)(param_1 + 0x427);
    bVar10 = (bVar2 & 2) != 0;
    bVar11 = (bVar2 & 4) != 0;
    bVar12 = (bVar2 & 8) != 0;
    if (local_21 != (bVar2 & 1)) {
      pcVar4 = "disabled";
      pcVar7 = "enabled";
      if ((bVar2 & 1) == 0) {
        pcVar7 = "disabled";
      }
      if (local_21 != 0) {
        pcVar4 = "enabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u for red in OpenGL is %s, cached is %s"
                   ,3,pcVar4,pcVar7);
    }
    if ((bool)local_20 != bVar10) {
      pcVar4 = "enabled";
      pcVar7 = "enabled";
      if (!bVar10) {
        pcVar7 = "disabled";
      }
      if (local_20 == '\0') {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u green in OpenGL is %s, cached is %s"
                   ,3,pcVar4,pcVar7);
    }
    if ((bool)local_1f != bVar11) {
      pcVar4 = "enabled";
      pcVar7 = "enabled";
      if (!bVar11) {
        pcVar7 = "disabled";
      }
      if (local_1f == '\0') {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask for draw buffer %u blue in OpenGL is %s, cached is %s"
                   ,3,pcVar4,pcVar7);
    }
    if ((bool)local_1e != bVar12) {
      pcVar4 = "enabled";
      pcVar7 = "enabled";
      if (!bVar12) {
        pcVar7 = "disabled";
      }
      if (local_1e == '\0') {
        pcVar4 = "disabled";
      }
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: color mask draw buffer %u for alpha in OpenGL is %s, cached is %s"
                   ,3,pcVar4,pcVar7);
    }
  }
  glGetIntegerv(0xb45,&local_28);
  if (*(int *)(param_1 + 0x41c) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: cull face mode in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x41c));
  }
  glGetFloatv(0xb73,local_b8);
  dVar1 = *(double *)(param_1 + 0x4b8);
  if ((double)local_2c != dVar1) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: depth clear value in OpenGL is %f, cached is %f",
                 (double)local_2c,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  }
  glGetIntegerv(0xb74,&local_28);
  if (*(int *)(param_1 + 0x444) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: depth test op in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x444));
  }
  glGetFloatv(0xb70,&local_34);
  dVar1 = *(double *)(param_1 + 0x408);
  if ((double)local_34 != dVar1) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: near depth distance in OpenGL is %f, cached is %f",
                 (double)local_34,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  }
  dVar1 = *(double *)(param_1 + 0x410);
  if ((double)local_30 != dVar1) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: far depth distance in OpenGL is %f, cached is %f",
                 (double)local_30,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  }
  glGetBooleanv(0xb72,local_b0);
  if (local_1d[0] == 0) {
    if (*(char *)(param_1 + 0x42e) != '\0') {
      pcVar7 = "enabled";
      pcVar4 = "disabled";
LAB_040c9717:
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: depth write mask in OpenGL is %s, cached is %s",pcVar4,
                   pcVar7);
    }
  }
  else {
    pcVar7 = "disabled";
    pcVar4 = "enabled";
    if (*(char *)(param_1 + 0x42e) == '\0') goto LAB_040c9717;
  }
  glGetIntegerv(0xb46,&local_28);
  if (*(int *)(param_1 + 0x418) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: front face in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x418));
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    glGetFloatv(0xb53,local_c0);
    if (local_60 != *(float *)(param_1 + 0x478)) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: ambient color red in OpenGL is %f, cached is %f",
                   (double)local_60,(double)*(float *)(param_1 + 0x478));
    }
    if (local_5c != *(float *)(param_1 + 0x47c)) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: ambient color green in OpenGL is %f, cached is %f",
                   (double)local_5c,(double)*(float *)(param_1 + 0x47c));
    }
    if (local_58 != *(float *)(param_1 + 0x480)) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: ambient color blue in OpenGL is %f, cached is %f",
                   (double)local_58,(double)*(float *)(param_1 + 0x480));
    }
    if (local_54 != *(float *)(param_1 + 0x484)) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: ambient color alpha in OpenGL is %f, cached is %f",
                   (double)local_54,(double)*(float *)(param_1 + 0x484));
    }
    glGetIntegerv(0xba0,&local_28);
    if (*(int *)(param_1 + 0x500) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: matrix mode in OpenGL is %d, cached is %d",local_28,
                   *(int *)(param_1 + 0x500));
    }
  }
  glGetFloatv(0xb11,local_b8);
  if (*(float *)(param_1 + 0x4e0) != local_2c) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: point size in OpenGL is %f, cached is %f",(double)local_2c,
                 (double)*(float *)(param_1 + 0x4e0));
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    glGetFloatv(0x8126,local_b8);
    if (*(float *)(param_1 + 0x4c4) != local_2c) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: minimal point size in OpenGL is %f, cached is %f",
                   (double)local_2c,(double)*(float *)(param_1 + 0x4c4));
    }
    glGetFloatv(0x8127,local_b8);
    if (*(float *)(param_1 + 0x4c8) != local_2c) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: maximal point size in OpenGL is %f, cached is %f",
                   (double)local_2c,(double)*(float *)(param_1 + 0x4c8));
    }
    glGetIntegerv(0xb40,&local_28);
    if (*(int *)(param_1 + 0x4a0) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: polygon mode in OpenGL is %d, cached is %d",local_28,
                   *(int *)(param_1 + 0x4a0));
    }
  }
  if ((*(float *)(param_1 + 0xa70) == 0.0) &&
     ((*(float *)(param_1 + 0xa6c) == 0.0 || (*(int *)(param_1 + 0xa74) == 0)))) {
    glGetBooleanv(0x8037,local_b0);
    if (local_1d[0] != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: polygon offset for filled polygons in OpenGL is enabled, cached is disabled"
                  );
    }
    glGetBooleanv(0x2a02,local_b0);
    if (local_1d[0] != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: polygon offset for lines in OpenGL is enabled, cached is disabled"
                  );
    }
    glGetBooleanv(0x2a01,local_b0);
    if (local_1d[0] != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: polygon offset for points in OpenGL is enabled, cached is disabled"
                  );
    }
  }
  else {
    glGetBooleanv(0x8037,local_b0);
    if (local_1d[0] == 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: polygon offset for filled polygons in OpenGL is disabled, cached is enabled"
                  );
    }
    glGetBooleanv(0x2a02,local_b0);
    if (local_1d[0] == 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: polygon offset for lines in OpenGL is disabled, cached is enabled"
                  );
    }
    glGetBooleanv(0x2a01,local_b0);
    if (local_1d[0] == 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: polygon offset for points in OpenGL is disabled, cached is enabled"
                  );
    }
    glGetFloatv(0x8038,local_b8);
    if (*(float *)(param_1 + 0xa70) != local_2c) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: polygon offset factor in OpenGL is %f, cached is %f",
                   (double)local_2c,(double)*(float *)(param_1 + 0xa70));
    }
    fVar13 = *(float *)(param_1 + 0xa6c);
    fVar14 = powf(2.0,(float)(*(uint *)(param_1 + 0xa74) >> 0x10) * DAT_042dbf34 +
                      (float)(*(uint *)(param_1 + 0xa74) & 0xffff));
    fVar13 = fVar13 * (fVar14 - DAT_042dbf3c);
    glGetFloatv(0x2a00,local_b8);
    if (local_2c != fVar13) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: polygon offset units in OpenGL is %f, cached is %f",
                   (double)local_2c,(double)fVar13);
    }
  }
  glGetIntegerv(0xc10,&local_50);
  if (local_50 != *(int *)(param_1 + 0x434)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: scissor box left in OpenGL is %d, cached is %d",local_50,
                 *(int *)(param_1 + 0x434));
  }
  if (local_4c != *(int *)(param_1 + 0x438)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: scissor box top in OpenGL is %d, cached is %d",local_4c,
                 *(int *)(param_1 + 0x438));
  }
  if (local_48 != *(int *)(param_1 + 0x43c)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: scissor box width in OpenGL is %d, cached is %d",local_48,
                 *(int *)(param_1 + 0x43c));
  }
  if (local_44 != *(int *)(param_1 + 0x440)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: scissor box height in OpenGL is %d, cached is %d",local_44,
                 *(int *)(param_1 + 0x440));
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    glGetIntegerv(0xb54,&local_28);
    if (*(int *)(param_1 + 0x4a4) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: shade model in OpenGL is %d, cached is %d",local_28,
                   *(int *)(param_1 + 0x4a4));
    }
  }
  glGetIntegerv(0xb91,&local_28);
  if (*(int *)(param_1 + 0x4c0) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil clear value in OpenGL is %d, cached is %d",local_28
                 ,*(int *)(param_1 + 0x4c0));
  }
  glGetIntegerv(0xb94,&local_28);
  if (*(int *)(param_1 + 0x488) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil op fail in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x488));
  }
  glGetIntegerv(0xb95,&local_28);
  if (*(int *)(param_1 + 0x48c) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil op pass depth fail in OpenGL is %d, cached is %d",
                 local_28,*(int *)(param_1 + 0x48c));
  }
  glGetIntegerv(0xb96,&local_28);
  if (*(int *)(param_1 + 0x490) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil op pass depth pass in OpenGL is %d, cached is %d",
                 local_28,*(int *)(param_1 + 0x490));
  }
  glGetIntegerv(0xb92,&local_28);
  if (*(int *)(param_1 + 0x448) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil func in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x448));
  }
  glGetIntegerv(0xb97,&local_28);
  if (*(int *)(param_1 + 0x450) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil ref in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x450));
  }
  glGetIntegerv(0xb93,&local_28);
  if (*(int *)(param_1 + 0x454) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil value mask in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x454));
  }
  glGetIntegerv(0xb98,&local_28);
  if (*(int *)(param_1 + 0x430) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: stencil write mask in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x430));
  }
  glGetIntegerv(0x84e0,&local_28);
  iVar5 = *(int *)(param_1 + 0x234);
  if (iVar5 != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: active texture stage in OpenGL is %d, cached is %d",
                 local_28,iVar5);
    iVar5 = *(int *)(param_1 + 0x234);
  }
  iVar8 = 0;
  local_b0 = (byte *)param_1;
  while( true ) {
    iVar9 = iVar8 + 0x84c0;
    if (iVar5 != iVar9) {
      (*DAT_0451eeac)(iVar9);
      *(int *)(param_1 + 0x234) = iVar9;
    }
    if (*(char *)(param_1 + 0x218) == '\0') {
      glGetTexEnvfv(0x8500,0x8501,local_b8);
      if (*(float *)((int)local_b0 + 0x2f8) != local_2c) {
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: lod bias for texture stage %d in OpenGL is %f, cached is %f"
                     ,iVar8,(double)local_2c,(double)*(float *)((int)local_b0 + 0x2f8));
        local_b9 = false;
      }
    }
    else {
      glGetIntegerv(0x8919,&local_28);
      if (*(int *)((int)local_b0 + 0x2b8) != local_28) {
        FUN_0402cd10(0xf,
                     "OPENGL CACHE FAIL: sampler for texture stage %d in OpenGL is %d, cached is %d"
                     ,iVar8,local_28,*(int *)((int)local_b0 + 0x2b8));
        local_b9 = false;
      }
    }
    if (iVar8 == 0xf) break;
    local_b0 = (byte *)((int)local_b0 + 4);
    iVar8 = iVar8 + 1;
    iVar5 = *(int *)(param_1 + 0x234);
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    (*DAT_0451eeac)(0x84c0);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0x86c),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",0)
      ;
    }
    (*DAT_0451eeac)(0x84c1);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0x8ac),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",1)
      ;
    }
    (*DAT_0451eeac)(0x84c2);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0x8ec),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",2)
      ;
    }
    (*DAT_0451eeac)(0x84c3);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0x92c),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",3)
      ;
    }
    (*DAT_0451eeac)(0x84c4);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0x96c),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",4)
      ;
    }
    (*DAT_0451eeac)(0x84c5);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0x9ac),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",5)
      ;
    }
    (*DAT_0451eeac)(0x84c6);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0x9ec),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",6)
      ;
    }
    (*DAT_0451eeac)(0x84c7);
    glGetFloatv(0xba8,local_a0);
    iVar5 = memcmp(local_a0,(void *)(param_1 + 0xa2c),0x40);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: texture matrix for stage %d in OpenGL differs from cached",7)
      ;
    }
  }
  (*DAT_0451eeac)(*(undefined4 *)(param_1 + 0x234));
  glGetIntegerv(0xba2,&local_50);
  if (local_50 != *(int *)(param_1 + 0x3f8)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: viewport left in OpenGL is %d, cached is %d",local_50,
                 *(int *)(param_1 + 0x3f8));
  }
  if (local_4c != *(int *)(param_1 + 0x3fc)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: viewport top in OpenGL is %d, cached is %d",local_4c,
                 *(int *)(param_1 + 0x3fc));
  }
  if (local_48 != *(int *)(param_1 + 0x400)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: viewport width in OpenGL is %d, cached is %d",local_48,
                 *(int *)(param_1 + 0x400));
  }
  if (local_44 != *(int *)(param_1 + 0x404)) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: viewport height in OpenGL is %d, cached is %d",local_44,
                 *(int *)(param_1 + 0x404));
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    glGetFloatv(0x8129,&local_40);
    if (local_40 != *(float *)(param_1 + 0x4d4)) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: point distance attenuation factor %d in OpenGL is %f, cached is %f"
                   ,(double)local_40,(double)*(float *)(param_1 + 0x4d4));
    }
    if (local_3c != *(float *)(param_1 + 0x4d8)) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: point distance attenuation factor %d in OpenGL is %f, cached is %f"
                   ,(double)local_3c,(double)*(float *)(param_1 + 0x4d8));
    }
    if (local_38 != *(float *)(param_1 + 0x4dc)) {
      local_b9 = false;
      FUN_0402cd10(0xf,
                   "OPENGL CACHE FAIL: point distance attenuation factor %d in OpenGL is %f, cached is %f"
                   ,(double)local_38,(double)*(float *)(param_1 + 0x4dc));
    }
  }
  glGetIntegerv(0x8ca6,&local_28);
  if (*(int *)(param_1 + 0x358) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: draw framebuffer binding in OpenGL is %d, cached is %d",
                 local_28,*(int *)(param_1 + 0x358));
  }
  glGetIntegerv(0x8caa,&local_28);
  if (*(int *)(param_1 + 0x354) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: read framebuffer binding in OpenGL is %d, cached is %d",
                 local_28,*(int *)(param_1 + 0x354));
  }
  glGetIntegerv(0x8b8d,&local_28);
  if (*(int *)(param_1 + 0x338) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: current program in OpenGL is %d, cached is %d",local_28,
                 *(int *)(param_1 + 0x338));
  }
  glGetIntegerv(0x8894,&local_28);
  if (*(int *)(param_1 + 0x35c) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: array buffer binding in OpenGL is %d, cached is %d",
                 local_28,*(int *)(param_1 + 0x35c));
  }
  glGetIntegerv(0x8895,&local_28);
  if (*(int *)(param_1 + 0x364) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: element array buffer binding in OpenGL is %d, cached is %d"
                 ,local_28,*(int *)(param_1 + 0x364));
  }
  glGetIntegerv(0x88ef,&local_28);
  if (*(int *)(param_1 + 0x368) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: pixel unpack buffer binding in OpenGL is %d, cached is %d",
                 local_28,*(int *)(param_1 + 0x368));
  }
  glGetIntegerv(0x88ed,&local_28);
  if (*(int *)(param_1 + 0x36c) != local_28) {
    local_b9 = false;
    FUN_0402cd10(0xf,"OPENGL CACHE FAIL: pixel pack buffer binding in OpenGL is %d, cached is %d",
                 local_28,*(int *)(param_1 + 0x36c));
  }
  if (*(char *)(param_1 + 0x218) != '\0') {
    glGetIntegerv(0x8a28,&local_28);
    if (*(int *)(param_1 + 0x360) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding in OpenGL is %d, cached is %d",
                   local_28,*(int *)(param_1 + 0x360));
    }
    (*DAT_0451e0b8)(0x8a28,0,&local_28);
    if (*(int *)(param_1 + 0x370) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   0,local_28,*(int *)(param_1 + 0x370));
    }
    (*DAT_0451e0b8)(0x8a28,1,&local_28);
    if (*(int *)(param_1 + 0x374) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   1,local_28,*(int *)(param_1 + 0x374));
    }
    (*DAT_0451e0b8)(0x8a28,2,&local_28);
    if (*(int *)(param_1 + 0x378) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   2,local_28,*(int *)(param_1 + 0x378));
    }
    (*DAT_0451e0b8)(0x8a28,3,&local_28);
    if (*(int *)(param_1 + 0x37c) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   3,local_28,*(int *)(param_1 + 0x37c));
    }
    (*DAT_0451e0b8)(0x8a28,4,&local_28);
    if (*(int *)(param_1 + 0x380) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   4,local_28,*(int *)(param_1 + 0x380));
    }
    (*DAT_0451e0b8)(0x8a28,5,&local_28);
    if (*(int *)(param_1 + 900) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   5,local_28,*(int *)(param_1 + 900));
    }
    (*DAT_0451e0b8)(0x8a28,6,&local_28);
    if (*(int *)(param_1 + 0x388) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   6,local_28,*(int *)(param_1 + 0x388));
    }
    (*DAT_0451e0b8)(0x8a28,7,&local_28);
    if (*(int *)(param_1 + 0x38c) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   7,local_28,*(int *)(param_1 + 0x38c));
    }
    (*DAT_0451e0b8)(0x8a28,8,&local_28);
    if (*(int *)(param_1 + 0x390) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   8,local_28,*(int *)(param_1 + 0x390));
    }
    (*DAT_0451e0b8)(0x8a28,9,&local_28);
    if (*(int *)(param_1 + 0x394) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   9,local_28,*(int *)(param_1 + 0x394));
    }
    (*DAT_0451e0b8)(0x8a28,10,&local_28);
    if (*(int *)(param_1 + 0x398) != local_28) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: uniform buffer binding %d in OpenGL is %d, cached is %d",
                   10,local_28,*(int *)(param_1 + 0x398));
    }
    if (*(char *)(param_1 + 0x218) != '\0') goto LAB_040c9469;
  }
  if (*(int *)(param_1 + 0x19c) != 0) {
    iVar5 = 0;
    iVar8 = param_1;
    do {
      while( true ) {
        iVar9 = iVar5 + 0x4000;
        glGetLightfv(iVar9,0x1200,local_c0);
        iVar6 = memcmp(local_c0,(void *)(param_1 + 0x608 + iVar5 * 0x10),0x10);
        if (iVar6 != 0) {
          FUN_0402cd10(0xf,"OPENGL CACHE FAIL: light ambient values for light %d differ",iVar5);
          local_b9 = false;
        }
        glGetLightfv(iVar9,0x1201,local_c0);
        iVar6 = memcmp(local_c0,(void *)(param_1 + 0x508 + iVar5 * 0x10),0x10);
        if (iVar6 != 0) {
          FUN_0402cd10(0xf,"OPENGL CACHE FAIL: light diffuse values for light %d differ",iVar5);
          local_b9 = false;
        }
        glGetLightfv(iVar9,0x1202,local_c0);
        iVar6 = memcmp(local_c0,(void *)(param_1 + 0x588 + iVar5 * 0x10),0x10);
        if (iVar6 != 0) {
          FUN_0402cd10(0xf,"OPENGL CACHE FAIL: light specular values for light %d differ",iVar5);
          local_b9 = false;
        }
        glGetLightfv(iVar9,0x1207,local_b8);
        if (*(float *)(iVar8 + 0x7c8) != local_2c) {
          FUN_0402cd10(0xf,"OPENGL CACHE FAIL: constant attenuation factor for light %d differs",
                       iVar5);
          local_b9 = false;
        }
        glGetLightfv(iVar9,0x1208,local_b8);
        if (*(float *)(iVar8 + 0x7e8) != local_2c) {
          FUN_0402cd10(0xf,"OPENGL CACHE FAIL: linear attenuation factor for light %d differs",iVar5
                      );
          local_b9 = false;
        }
        glGetLightfv(iVar9,0x1209,local_b8);
        if (*(float *)(iVar8 + 0x808) != local_2c) {
          FUN_0402cd10(0xf,"OPENGL CACHE FAIL: quadratic attenuation factor for light %d differs",
                       iVar5);
          local_b9 = false;
        }
        glGetLightfv(iVar9,0x1205,local_b8);
        if (*(float *)(iVar8 + 0x7a8) != local_2c) {
          FUN_0402cd10(0xf,"OPENGL CACHE FAIL: spot exponent for light %d differs",iVar5);
          local_b9 = false;
        }
        glGetLightfv(iVar9,0x1206,local_b8);
        if ((DAT_042f739c * *(float *)(iVar8 + 0x788)) / DAT_042f73a0 != local_2c) break;
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 4;
        if (iVar5 == 8) goto LAB_040c945b;
      }
      iVar9 = iVar5 + 1;
      iVar8 = iVar8 + 4;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: spot cutoff for light %d differs",iVar5);
      local_b9 = false;
      iVar5 = iVar9;
    } while (iVar9 != 8);
  }
LAB_040c945b:
  if (*(int *)(param_1 + 0x1a0) != 0) {
    glGetMaterialfv(0x404,0x1200,local_c0);
    iVar5 = memcmp(local_c0,(void *)(param_1 + 0x838),0x10);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: material ambient differs");
    }
    glGetMaterialfv(0x404,0x1201,local_c0);
    iVar5 = memcmp(local_c0,(void *)(param_1 + 0x828),0x10);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: material diffuse differs");
    }
    glGetMaterialfv(0x404,0x1202,local_c0);
    iVar5 = memcmp(local_c0,(void *)(param_1 + 0x848),0x10);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: material specular differs");
    }
    glGetMaterialfv(0x404,0x1600,local_c0);
    iVar5 = memcmp(local_c0,(void *)(param_1 + 0x858),0x10);
    if (iVar5 != 0) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: material emission differs");
    }
    glGetMaterialfv(0x404,0x1601,local_b8);
    if (*(float *)(param_1 + 0x868) != local_2c) {
      local_b9 = false;
      FUN_0402cd10(0xf,"OPENGL CACHE FAIL: material shininess differs");
    }
  }
LAB_040c9469:
  iVar5 = glGetError();
  if (iVar5 != 0) {
    FUN_0400a810("err == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x5f5,"bool OpenGLContextCache::CheckCacheIntegrity()");
  }
  if (local_b9 == false) {
    FUN_0400a810(&PTR_DAT_04348b17,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x5f6,"bool OpenGLContextCache::CheckCacheIntegrity()");
  }
  return local_b9;
}

// --- OpenGLContextCache::EnableClipDistance @0x040c73f0 ---
/* source: openGlContextCache */

void OpenGLContextCache__EnableClipDistance(int param_1,int param_2,char param_3)

{
  if (*(char *)(param_1 + 0x218) == '\0') {
    FUN_0400a810("mUsingOpenGLCore",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x277,"void OpenGLContextCache::EnableClipDistance(int32_t, bool)");
  }
  if (*(char *)(param_1 + 0x428 + param_2) != param_3) {
    if (param_3 == '\0') {
      glDisable();
    }
    else {
      glEnable(param_2 + 0x3000);
    }
    *(char *)(param_1 + 0x428 + param_2) = param_3;
  }
  return;
}

// --- OpenGLContextCache::OpenGLContextCache @0x040caf20 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: openGlContextCache */

void OpenGLContextCache__OpenGLContextCache
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  
  FUN_040c5220(param_1 + 0x7e,param_1);
  param_1[0x85] = param_3;
  param_1[0x88] = param_2;
                    /* try { // try from 040caf50 to 040cc053 has its CatchHandler @ 040cc059 */
  uVar1 = FUN_04021ee0();
  *(undefined1 *)(param_1 + 0x86) = uVar1;
  uVar3 = (**(code **)(*(int *)param_1[0x85] + 0x10))((int *)param_1[0x85]);
  param_1[0x89] = uVar3;
  iVar4 = eON_Int_GL_NoteCurrentContext();
  if (iVar4 == 0) {
    FUN_0400a810("GetRawCurrentOpenGLContext()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x58,"OpenGLContextCache::OpenGLContextCache(DWORD, OpenGLWrapper*)");
  }
  uVar1 = DAT_04408b60;
  *(undefined1 *)(param_1 + 0x8c) = DAT_04408b60;
  EnableVerticalSync(param_1[0x89],uVar1);
  iVar4 = eON_Int_GL_NoteCurrentContext();
  if (iVar4 == 0) {
    FUN_0400a810("GetRawCurrentOpenGLContext()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x5d,"OpenGLContextCache::OpenGLContextCache(DWORD, OpenGLWrapper*)");
  }
  if (*(char *)(param_1 + 0x86) != '\0') {
    (*DAT_0451e0a0)(1,param_1 + 0x87);
    (*DAT_0451e0a8)(param_1[0x87]);
  }
  uVar3 = DAT_0441159c;
  param_1[0x8a] = DAT_04411598;
  param_1[0x8b] = uVar3;
  bzero(param_1 + 0x139,0x10);
  glEnable(0x809d);
  if (*(char *)(param_1 + 0x86) == '\0') {
    glDisable(0xb50);
    glFogfv(0xb66,param_1 + 0x139);
    glFogf(0xb63,0);
    glFogf(0xb64,0x3f800000);
    glFogf(0xb62,0x3f800000);
  }
  param_1[0x8d] = 0x84c0;
  bzero(param_1 + 0x8e,0x80);
  bzero(param_1 + 0xae,0x40);
  bzero(param_1 + 0xbe,0x40);
  param_1[0xce] = 0;
  glGetIntegerv(0x8825,param_1 + 0xcf);
  glGetIntegerv(0x8826,param_1 + 0xd0);
  glGetIntegerv(0x8827,param_1 + 0xd1);
  glGetIntegerv(0x8828,param_1 + 0xd2);
  glGetIntegerv(0xc02,param_1 + 0xd4);
  bVar5 = false;
  if ((param_1[0xd0] == 0) && (param_1[0xd1] == 0)) {
    bVar5 = param_1[0xd2] == 0;
  }
  *(bool *)(param_1 + 0xd3) = bVar5;
  *(undefined8 *)(param_1 + 0x102) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0x3ff00000;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  bzero(param_1 + 0xdc,0x2c);
  bzero(param_1 + 0xe7,0x2c);
  bzero(param_1 + 0xf2,0x2c);
  param_1[0xfd] = 0xb;
  param_1[0x106] = 0x901;
  cVar2 = glIsEnabled(0xb44);
  param_1[0x107] = 0x405;
  *(bool *)(param_1 + 0x2a2) = cVar2 != '\0';
  bzero(param_1 + 0x10a,6);
  *(undefined1 *)(param_1 + 0x109) = 0xf;
  param_1[0x66] = 0xffffffff;
  param_1[0x108] = 0;
  *(undefined1 *)((int)param_1 + 0x425) = 0xf;
  *(undefined1 *)((int)param_1 + 0x426) = 0xf;
  *(undefined1 *)((int)param_1 + 0x427) = 0xf;
  glGetBooleanv(0xb72,(int)param_1 + 0x42e);
  glGetIntegerv(0xb98,param_1 + 0x10c);
  cVar2 = glIsEnabled(0xbe2);
  *(bool *)((int)param_1 + 0xa89) = cVar2 != '\0';
  bVar5 = false;
  if (*(char *)(param_1 + 0x86) == '\0') {
    cVar2 = glIsEnabled(0xbc0);
    bVar5 = cVar2 != '\0';
  }
  *(bool *)((int)param_1 + 0xa8a) = bVar5;
  cVar2 = glIsEnabled(0xc11);
  *(bool *)((int)param_1 + 0xa8b) = cVar2 != '\0';
  cVar2 = glIsEnabled(0xb71);
  *(bool *)(param_1 + 0x2a3) = cVar2 != '\0';
  cVar2 = glIsEnabled(0xb90);
  *(bool *)((int)param_1 + 0xa8d) = cVar2 != '\0';
  cVar2 = glIsEnabled(0xbd0);
  *(bool *)((int)param_1 + 0xa8f) = cVar2 != '\0';
  cVar2 = glIsEnabled(0x8db9);
  *(bool *)(param_1 + 0x2a4) = cVar2 != '\0';
  if (*(char *)(param_1 + 0x86) == '\0') {
    cVar2 = glIsEnabled(0x8861);
    *(bool *)((int)param_1 + 0xa91) = cVar2 != '\0';
    if (*(char *)(param_1 + 0x86) == '\0') {
      cVar2 = glIsEnabled(0x8642);
      bVar5 = cVar2 != '\0';
    }
    else {
      bVar5 = true;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0xa91) = 1;
    bVar5 = true;
  }
  *(bool *)((int)param_1 + 0xa93) = bVar5;
  cVar2 = glIsEnabled(0xb20);
  *(bool *)((int)param_1 + 0xa92) = cVar2 != '\0';
  glGetIntegerv(0xc10,&local_34);
  param_1[0x10d] = local_34;
  param_1[0x10e] = local_30;
  param_1[0x10f] = local_2c;
  param_1[0x110] = local_28;
  glGetIntegerv(0xba2,&local_34);
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0xffffffff;
  param_1[0xfe] = local_34;
  param_1[0xff] = local_30;
  param_1[0x100] = local_2c;
  param_1[0x101] = local_28;
  glGetIntegerv(0xb74,param_1 + 0x111);
  param_1[0x112] = 0x207;
  param_1[0x113] = 0x207;
  param_1[0x114] = 0;
  glGetIntegerv(0xb93,param_1 + 0x115);
  param_1[0x116] = 0x207;
  param_1[0x117] = 0;
  param_1[0x118] = 1;
  param_1[0x119] = 0;
  param_1[0x11a] = 1;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0x8006;
  param_1[0x11d] = 0x8006;
  param_1[0x11e] = 0x3e4ccccd;
  param_1[0x11f] = 0x3e4ccccd;
  param_1[0x120] = 0x3e4ccccd;
  param_1[0x121] = 0x3f800000;
  param_1[0x122] = 0x1e00;
  param_1[0x123] = 0x1e00;
  param_1[0x124] = 0x1e00;
  param_1[0x125] = 0x1e00;
  param_1[0x126] = 0x1e00;
  param_1[0x127] = 0x1e00;
  param_1[0x128] = 0x1b02;
  param_1[0x129] = 0x1d01;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0x3ff00000;
  param_1[0x130] = 0;
  glGetFloatv(0xb12,&local_24);
  param_1[0x133] = local_24;
  param_1[0x134] = local_20;
  if (*(char *)(param_1 + 0x86) == '\0') {
    glGetFloatv(0x846d,&local_24);
    if ((local_24 != (float)param_1[0x133]) &&
       (FUN_0402cd10(10,"OPENGL CACHE: point size - aliased min limit is %f, antialiased is %f",
                     (double)local_24,(double)(float)param_1[0x133]),
       (float)param_1[0x133] <= local_24 && local_24 != (float)param_1[0x133])) {
      param_1[0x133] = local_24;
    }
    if ((local_20 != (float)param_1[0x134]) &&
       (FUN_0402cd10(10,"OPENGL CACHE: point size - aliased max limit is %f, antialiased is %f",
                     (double)local_20,(double)(float)param_1[0x134]),
       local_20 < (float)param_1[0x134])) {
      param_1[0x134] = local_20;
    }
    glGetFloatv(0x8126,param_1 + 0x131);
    glGetFloatv(0x8127,param_1 + 0x132);
  }
  else {
    fVar6 = local_20;
    if (_DAT_042e09f0 <= local_20) {
      fVar6 = _DAT_042e09f0;
    }
    param_1[0x131] = 0x3f800000;
    param_1[0x132] = fVar6;
  }
  param_1[0x135] = 0x3f800000;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0x3f800000;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0x3f800000;
  param_1[0x13f] = 0x3f800000;
  param_1[0x67] = 0;
  bzero(param_1 + 0x142,0x80);
  bzero(param_1 + 0x162,0x80);
  bzero(param_1 + 0x182,0x80);
  bzero(param_1 + 0x1ea,0x20);
  bzero(param_1 + 0x1fa,0x20);
  bzero(param_1 + 0x202,0x20);
  bzero(param_1 + 0x6e,0x40);
  param_1[0x185] = 0x3f800000;
  param_1[0x1e2] = 0x40490fdb;
  param_1[0x1f2] = 0x3f800000;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0x3f800000;
  param_1[0x1a5] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0xbf800000;
  param_1[0x1c5] = 0;
  param_1[0x149] = 0x3f800000;
  param_1[0x169] = 0x3f800000;
  param_1[0x189] = 0x3f800000;
  param_1[0x1e3] = 0x40490fdb;
  param_1[499] = 0x3f800000;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0x3f800000;
  param_1[0x1a9] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0xbf800000;
  param_1[0x1c9] = 0;
  param_1[0x14d] = 0x3f800000;
  param_1[0x16d] = 0x3f800000;
  param_1[0x18d] = 0x3f800000;
  param_1[0x1e4] = 0x40490fdb;
  param_1[500] = 0x3f800000;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0x3f800000;
  param_1[0x1ad] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0xbf800000;
  param_1[0x1cd] = 0;
  param_1[0x151] = 0x3f800000;
  param_1[0x171] = 0x3f800000;
  param_1[0x191] = 0x3f800000;
  param_1[0x1e5] = 0x40490fdb;
  param_1[0x1f5] = 0x3f800000;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0x3f800000;
  param_1[0x1b1] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0xbf800000;
  param_1[0x1d1] = 0;
  param_1[0x155] = 0x3f800000;
  param_1[0x175] = 0x3f800000;
  param_1[0x195] = 0x3f800000;
  param_1[0x1e6] = 0x40490fdb;
  param_1[0x1f6] = 0x3f800000;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0x3f800000;
  param_1[0x1b5] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0xbf800000;
  param_1[0x1d5] = 0;
  param_1[0x159] = 0x3f800000;
  param_1[0x179] = 0x3f800000;
  param_1[0x199] = 0x3f800000;
  param_1[0x1e7] = 0x40490fdb;
  param_1[0x1f7] = 0x3f800000;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0x3f800000;
  param_1[0x1b9] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0xbf800000;
  param_1[0x1d9] = 0;
  param_1[0x15d] = 0x3f800000;
  param_1[0x17d] = 0x3f800000;
  param_1[0x19d] = 0x3f800000;
  param_1[0x1e8] = 0x40490fdb;
  param_1[0x1f8] = 0x3f800000;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0x3f800000;
  param_1[0x1bd] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0xbf800000;
  param_1[0x1dd] = 0;
  param_1[0x161] = 0x3f800000;
  param_1[0x181] = 0x3f800000;
  param_1[0x1a1] = 0x3f800000;
  param_1[0x1e9] = 0x40490fdb;
  param_1[0x1f9] = 0x3f800000;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0x3f800000;
  param_1[0x1c1] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0xbf800000;
  param_1[0x1e1] = 0;
  param_1[0x142] = 0x3f800000;
  param_1[0x143] = 0x3f800000;
  param_1[0x144] = 0x3f800000;
  param_1[0x145] = 0x3f800000;
  param_1[0x162] = 0x3f800000;
  param_1[0x163] = 0x3f800000;
  param_1[0x164] = 0x3f800000;
  param_1[0x165] = 0x3f800000;
  param_1[0x68] = 0;
  param_1[0x20a] = 0x3f4ccccd;
  param_1[0x20b] = 0x3f4ccccd;
  param_1[0x20c] = 0x3f4ccccd;
  param_1[0x20d] = 0x3f800000;
  param_1[0x20e] = 0x3e4ccccd;
  param_1[0x20f] = 0x3e4ccccd;
  param_1[0x210] = 0x3e4ccccd;
  param_1[0x211] = 0x3f800000;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0x3f800000;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0x3f800000;
  param_1[0x21a] = 0;
  param_1[0x69] = 0;
  param_1[0x140] = 0x1700;
  param_1[0x141] = 0;
  *(undefined1 *)(param_1 + 0x2a5) = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0x3f800000;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x65] = 0;
  bzero(param_1 + 0x13,0x100);
  bzero(param_1 + 0x53,0x40);
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  if (*(char *)(param_1 + 0x86) == '\0') {
    (*DAT_0451eeac)(0x84c0);
    glGetFloatv(0xba8,param_1 + 0x21b);
    (*DAT_0451eeac)(0x84c1);
    glGetFloatv(0xba8,param_1 + 0x22b);
    (*DAT_0451eeac)(0x84c2);
    glGetFloatv(0xba8,param_1 + 0x23b);
    (*DAT_0451eeac)(0x84c3);
    glGetFloatv(0xba8,param_1 + 0x24b);
    (*DAT_0451eeac)(0x84c4);
    glGetFloatv(0xba8,param_1 + 0x25b);
    (*DAT_0451eeac)(0x84c5);
    glGetFloatv(0xba8,param_1 + 0x26b);
    (*DAT_0451eeac)(0x84c6);
    glGetFloatv(0xba8,param_1 + 0x27b);
    (*DAT_0451eeac)(0x84c7);
    glGetFloatv(0xba8,param_1 + 0x28b);
    (*DAT_0451eeac)(param_1[0x8d]);
  }
  else {
    bzero(param_1 + 0x21b,0x200);
  }
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  glGetFloatv((-(uint)(*(char *)(param_1 + 0x86) == '\0') & 0x795b) + 0xb12,&local_24);
  param_1[0x2a0] = local_24;
  param_1[0x2a1] = local_20;
  cVar2 = OpenGLContextCache__CheckCacheIntegrity(param_1);
  if (cVar2 == '\0') {
    FUN_0400a810("CheckCacheIntegrity()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x15c,"OpenGLContextCache::OpenGLContextCache(DWORD, OpenGLWrapper*)");
    return;
  }
  return;
}

// --- OpenGLContextCache::__glewBindBuffer @0x040c70d0 ---
/* source: openGlContextCache */

void OpenGLContextCache____glewBindBuffer(int param_1,int param_2,int param_3)

{
  if (param_2 == 0x8892) {
    if (*(int *)(param_1 + 0x35c) != param_3) {
      (*DAT_0451ed34)(0x8892,param_3);
      *(int *)(param_1 + 0x35c) = param_3;
      return;
    }
  }
  else if (param_2 == 0x8a11) {
    if (*(int *)(param_1 + 0x360) != param_3) {
      (*DAT_0451ed34)(0x8a11,param_3);
      *(int *)(param_1 + 0x360) = param_3;
      return;
    }
  }
  else if (param_2 == 0x8893) {
    if (*(int *)(param_1 + 0x364) != param_3) {
      (*DAT_0451ed34)(0x8893,param_3);
      *(int *)(param_1 + 0x364) = param_3;
    }
  }
  else if (param_2 == 0x88ec) {
    if (*(int *)(param_1 + 0x368) != param_3) {
      (*DAT_0451ed34)(0x88ec,param_3);
      *(int *)(param_1 + 0x368) = param_3;
    }
  }
  else {
    if (param_2 != 0x88eb) {
      FUN_0400a810("target == 0x88EB",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                   ,0x230,"void OpenGLContextCache::__glewBindBuffer(GLenum, GLuint)");
    }
    if (*(int *)(param_1 + 0x36c) != param_3) {
      (*DAT_0451ed34)(0x88eb,param_3);
      *(int *)(param_1 + 0x36c) = param_3;
    }
  }
  return;
}

// --- OpenGLContextCache::__glewBindFramebuffer @0x040c6f70 ---
/* source: openGlContextCache */

void OpenGLContextCache____glewBindFramebuffer(int param_1,int param_2,int param_3)

{
  if (param_2 == 0x8d40) {
    if ((*(int *)(param_1 + 0x358) != param_3) || (param_3 != *(int *)(param_1 + 0x354))) {
      (*DAT_0451e694)(0x8d40,param_3);
      *(int *)(param_1 + 0x358) = param_3;
      *(int *)(param_1 + 0x354) = param_3;
      *(undefined4 *)(param_1 + 0x33c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x34c) = 0;
      *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
      return;
    }
  }
  else if (param_2 == 0x8ca9) {
    if (*(int *)(param_1 + 0x358) != param_3) {
      (*DAT_0451e694)(0x8ca9,param_3);
      *(int *)(param_1 + 0x358) = param_3;
      *(undefined4 *)(param_1 + 0x33c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x34c) = 0;
      return;
    }
  }
  else {
    if (param_2 != 0x8ca8) {
      FUN_0400a810("target == 0x8CA8",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                   ,0x202,"void OpenGLContextCache::__glewBindFramebuffer(GLenum, GLuint)");
    }
    if (*(int *)(param_1 + 0x354) != param_3) {
      (*DAT_0451e694)(0x8ca8,param_3);
      *(int *)(param_1 + 0x354) = param_3;
      *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
    }
  }
  return;
}

// --- OpenGLContextCache::~OpenGLContextCache @0x040c6b00 ---
/* source: openGlContextCache */

void OpenGLContextCache___OpenGLContextCache(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  
  iVar2 = *(int *)(param_1 + 0x224);
  if (iVar2 == 0) {
    FUN_0400a810("mContext",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.cpp"
                 ,0x161,"OpenGLContextCache::~OpenGLContextCache()");
    iVar2 = *(int *)(param_1 + 0x224);
  }
                    /* try { // try from 040c6b2f to 040c6b9e has its CatchHandler @ 040c6c35 */
  cVar1 = (**(code **)(**(int **)(param_1 + 0x214) + 0x1c))(*(int **)(param_1 + 0x214),iVar2);
  local_20 = 0;
  if (cVar1 == '\0') {
    local_20 = eON_Int_GL_NoteCurrentContext();
    (**(code **)(**(int **)(param_1 + 0x214) + 0x18))
              (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x224));
  }
  FUN_040c5600(param_1 + 0x1f8);
  if (*(char *)(param_1 + 0x218) != '\0') {
    (*DAT_0451e0a8)(0);
    (*DAT_0451e0a4)(1,param_1 + 0x21c);
  }
  if (cVar1 == '\0') {
    eON_Int_GL_RestoreCachedMakeCurrent(local_20);
  }
  else {
                    /* try { // try from 040c6bc3 to 040c6c29 has its CatchHandler @ 040c6c35 */
    (**(code **)(**(int **)(param_1 + 0x214) + 0x18))(*(int **)(param_1 + 0x214),0);
  }
  (**(code **)(**(int **)(param_1 + 0x214) + 0x20))
            (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x224));
  FUN_040c5670();
  return;
}

