// Recovered source: eon2/src/core/linux/opengl_objects.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DetermineMaxSamplesForFormat @0x04021050 ---
/* source: opengl_objects */

undefined4 DetermineMaxSamplesForFormat(void)

{
  _Rb_tree_node_base *p_Var1;
  undefined4 *puVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  char cVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  _Rb_tree_node_base *p_Var13;
  undefined **ppuVar14;
  _Rb_tree_node_base *p_Var15;
  _Rb_tree_node_base *p_Var16;
  int iVar17;
  uint uVar18;
  undefined **ppuVar19;
  char *pcVar20;
  bool bVar21;
  int iVar22;
  uint *local_74;
  _Rb_tree_node_base *local_6c;
  int local_68;
  _Rb_tree_node_base *local_64;
  char local_58 [24];
  undefined **local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  undefined **local_24;
  int local_20 [4];
  
  cVar5 = OpenGLDisplay__OpenGLDisplay();
  if (cVar5 == '\0') {
    return 0;
  }
  cVar5 = FUN_0400d040("force_display",&local_28);
  uVar18 = DAT_04408b64;
  if ((cVar5 != '\0') && (uVar18 = local_28, DAT_044115a4 <= local_28)) {
    FUN_0402cd10(0xf,"SetForcedOpenGLDisplay() - %u is an invalid display index, ignoring",local_28)
    ;
    uVar18 = DAT_04408b64;
  }
  DAT_04408b64 = uVar18;
  piVar6 = operator_new(0x4c);
  *piVar6 = (int)&PTR_opengl_objects_04020090_042e0968;
  piVar6[1] = 0;
  piVar6[3] = 0;
  piVar6[4] = -1;
  piVar6[5] = -1;
  piVar6[6] = -1;
  piVar6[7] = -1;
  piVar6[8] = -1;
  piVar6[9] = 0;
  piVar6[10] = 0;
  piVar6[0xd] = 0;
  piVar6[0xe] = 0;
  piVar6[0xf] = 0;
  piVar6[0x10] = 0;
  piVar6[0x11] = 0;
  *(undefined1 *)(piVar6 + 0x12) = 0;
  local_58[0] = -1;
  local_58[1] = -1;
  local_58[2] = -1;
  local_58[3] = -1;
  local_58[4] = -1;
  local_58[5] = -1;
  local_58[6] = -1;
  local_58[7] = -1;
  local_58[8] = -1;
  local_58[9] = -1;
  local_58[10] = -1;
  local_58[0xb] = -1;
  local_58[0xc] = -1;
  local_58[0xd] = -1;
  local_58[0xe] = -1;
  local_58[0xf] = -1;
  local_58[0x10] = -1;
  local_58[0x11] = -1;
  local_58[0x12] = -1;
  local_58[0x13] = -1;
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  cVar5 = FUN_0400cbc0("opengl32");
  if ((cVar5 == '\0') && (cVar5 = FUN_0400cbc0("openglcore"), cVar5 == '\0')) {
    bVar21 = false;
    cVar5 = FUN_0400cbc0("opengl21");
    if (cVar5 == '\0') goto LAB_04021171;
    FUN_0402cd10(0x14,"Forcing OpenGL 2.1 context usage");
LAB_04021b21:
    pcVar7 = local_58;
    DAT_044115ac = '\0';
    cVar5 = (**(code **)(*piVar6 + 8))(piVar6,*DAT_044115a8,0,pcVar7);
    if (cVar5 == '\0') {
      FUN_0402cd10(0x14,"Creating OpenGL 2.1 context failed");
LAB_04021b6a:
      FUN_0402cd10(0xf,"Failed to initialise OpenGL context!");
      return 0;
    }
  }
  else {
    bVar21 = true;
    FUN_0400cbc0("opengl21");
    FUN_0402cd10(0x14,"Forcing OpenGL Core context usage");
LAB_04021171:
    pcVar7 = local_58;
    DAT_044115ac = '\x01';
    cVar5 = (**(code **)(*piVar6 + 8))(piVar6,*DAT_044115a8,0,pcVar7);
    if (cVar5 == '\0') {
      FUN_0402cd10(0x14,"Creating OpenGL Core context failed");
    }
    if (bVar21) {
      if (cVar5 == '\0') goto LAB_04021b6a;
    }
    else if (cVar5 == '\0') goto LAB_04021b21;
  }
  if (DAT_044115ac != '\0') {
    iVar17 = 0;
    pcVar7 = (char *)glGetString(0x1f02);
    cVar5 = *pcVar7;
    while ((byte)(cVar5 - 0x30U) < 10) {
      pcVar7 = pcVar7 + 1;
      iVar17 = cVar5 + -0x30 + iVar17 * 10;
      cVar5 = *pcVar7;
    }
    if (cVar5 != '.') {
      FUN_0400a810("*ptr == \'.\'",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x4ed,"bool PrepareOpenGLDisplayInformation()");
    }
    cVar5 = pcVar7[1];
    pcVar20 = (char *)0x0;
    if ((byte)(cVar5 - 0x30U) < 10) {
      pcVar7 = pcVar7 + 1;
      do {
        pcVar7 = pcVar7 + 1;
        pcVar20 = (char *)(cVar5 + -0x30 + (int)pcVar20 * 10);
        cVar5 = *pcVar7;
      } while ((byte)(cVar5 - 0x30U) < 10);
    }
    iVar22 = iVar17;
    pcVar7 = pcVar20;
    FUN_0402cd10(0x14,"OpenGL Core context version %u.%u detected",iVar17,pcVar20);
    if ((iVar17 < 3) || (((int)pcVar20 < 2 && (iVar17 == 3)))) {
      FUN_0402cd10(0xf,"OpenGL Core context indicates lower than version 3.2",iVar22,pcVar7);
      return 0;
    }
  }
  iVar17 = glewContextInit();
  if (iVar17 != 0) {
    uVar8 = GLXError_ToString(iVar17);
    FUN_0402cd10(0xf,"GLEW initialisation error: \'%s\'",uVar8,pcVar7);
    pcVar7 = "bool PrepareOpenGLDisplayInformation()";
    FUN_0400a810("0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x506,"bool PrepareOpenGLDisplayInformation()");
  }
  DAT_044115ad = 1;
  uVar8 = glGetString(0x1f01);
  pcVar20 = (char *)glGetString(0x1f00);
  uVar9 = glGetString(0x1f02);
  uVar10 = glGetString(0x8b8c);
  FUN_0402cd10(0x14,"OpenGL information:");
  FUN_0402cd10(0x14,"    renderer: %s",uVar8);
  FUN_0402cd10(0x14,"    vendor: %s",pcVar20);
  FUN_0402cd10(0x14,"    version: %s",uVar9);
  FUN_0402cd10(0x14,"    GLSL version: %s",uVar10);
  pcVar11 = strcasestr(pcVar20,"NVIDIA");
  DAT_044115ae = pcVar11 != (char *)0x0;
  pcVar11 = strcasestr(pcVar20,"INTEL");
  DAT_044115af = pcVar11 != (char *)0x0;
  pcVar20 = strcasestr(pcVar20,"ATI Technologies");
  DAT_044115b0 = pcVar20 != (char *)0x0;
  if ((bool)DAT_044115b0) {
    cVar5 = FUN_0400cbc0("disable_catalyst_workarounds");
    if (cVar5 == '\0') {
      if (DAT_044115b0 != '\0') {
        FUN_0402cd10(0x14,
                     "    Detected ATI/AMD card with fglrx driver, disabling ARB_texture_storage, and ARB_copy_image for low mipmaps of compressed textures due to issues in current drivers."
                    );
        FUN_0402cd10(0x14,
                     "Use --eon_disable_catalyst_workarounds command-line switch to avoid this safeguard."
                    );
        FUN_0402cd10(0x14,
                     "If you experience occasional texture corruption and driver failure, please try --eon_disable_arb_copy_image workaround."
                    );
      }
    }
    else {
      DAT_044115b0 = '\0';
    }
  }
  if (DAT_044115ae != '\0') {
    FUN_0402cd10(0x14,"    Detected NVidia card");
  }
  if (DAT_044115af != '\0') {
    FUN_0402cd10(0x14,"    Detected Intel card");
  }
  glGetIntegerv(0xd33,&local_24);
  DAT_044115b4 = local_24;
  FUN_0402cd10(0x14,"    Max surface size: %d",local_24);
  DAT_044115b8 = '\x01';
  ppuVar14 = &PTR_DAT_042df24d;
  if (((DAT_0451c989 == '\0') && (DAT_0451c9e3 == '\0')) &&
     (DAT_044115b8 = '\x01' - (DAT_0451ca15 == '\0'), DAT_0451ca15 == '\0')) {
    ppuVar14 = (undefined **)&DAT_042df251;
  }
  FUN_0402cd10(0x14,"    Supported and usable: texture_mirror_clamp_to_edge: %s",ppuVar14);
  DAT_044115b9 = DAT_0451ca0b != '\0';
  if ((bool)DAT_044115b9) {
    ppuVar14 = &PTR_DAT_042df24d;
    if (DAT_044115b0 != '\0') {
      DAT_044115b9 = false;
      goto LAB_0402146a;
    }
  }
  else {
LAB_0402146a:
    ppuVar14 = (undefined **)&DAT_042df251;
  }
  FUN_0402cd10(0x14,"    Supported and usable: texture_storage: %s",ppuVar14);
  DAT_044115ba = DAT_0451ca7b != '\0';
  if ((bool)DAT_044115ba) {
    cVar5 = FUN_0400cbc0("disable_arb_copy_image");
    if (cVar5 != '\0') {
      DAT_044115ba = '\0';
      goto LAB_0402149e;
    }
    if (DAT_044115ba == '\0') goto LAB_0402149e;
    ppuVar14 = &PTR_DAT_042df24d;
  }
  else {
LAB_0402149e:
    ppuVar14 = (undefined **)&DAT_042df251;
  }
  FUN_0402cd10(0x14,"    Supported and usable: copy_image: %s",ppuVar14);
  DAT_044115bb = '\0';
  ppuVar14 = (undefined **)&DAT_042df251;
  if ((DAT_044115b9 != '\0') &&
     (DAT_044115bb = '\x01' - (DAT_0451ca0a == '\0'), DAT_0451ca0a != '\0')) {
    ppuVar14 = &PTR_DAT_042df24d;
  }
  FUN_0402cd10(0x14,"    Supported and usable: texture_storage_multisample: %s",ppuVar14);
  DAT_044115bc = '\0';
  ppuVar14 = (undefined **)&DAT_042df251;
  if ((DAT_044115bb != '\0') &&
     (DAT_044115bc = '\x01' - (DAT_0451ca08 == '\0'), DAT_0451ca08 != '\0')) {
    ppuVar14 = &PTR_DAT_042df24d;
  }
  FUN_0402cd10(0x14,"    Supported and usable: texture_view: %s",ppuVar14);
  DAT_044115bd = '\x01';
  ppuVar14 = &PTR_DAT_042df24d;
  if ((DAT_044115ac == '\0') &&
     (DAT_044115bd = '\x01' - (DAT_0451c9e9 == '\0'), DAT_0451c9e9 == '\0')) {
    ppuVar14 = (undefined **)&DAT_042df251;
  }
  FUN_0402cd10(0x14,"    Supported and usable: ATI_separate_stencil: %s",ppuVar14);
  DAT_044115be = '\0';
  ppuVar14 = (undefined **)&DAT_042df251;
  if (((DAT_044115ac == '\0') && (DAT_0451c9e9 == '\0')) &&
     (DAT_044115be = '\x01' - (DAT_0451c99d == '\0'), DAT_0451c99d != '\0')) {
    ppuVar14 = &PTR_DAT_042df24d;
  }
  ppuVar19 = (undefined **)&DAT_042df251;
  FUN_0402cd10(0x14,"    Supported and usable: EXT_stencil_two_side: %s",ppuVar14);
  DAT_044115bf = DAT_0451c98c != '\0';
  ppuVar14 = &PTR_DAT_042df24d;
  if (!(bool)DAT_044115bf) {
    ppuVar14 = (undefined **)&DAT_042df251;
  }
  FUN_0402cd10(0x14,"    Supported and usable: texture_filter_anisotropic: %s",ppuVar14);
  DAT_044115c0 = DAT_0451ca6d != '\0';
  if ((bool)DAT_044115c0) {
    ppuVar19 = &PTR_DAT_042df24d;
  }
  FUN_0402cd10(0x14,"    Supported and usable: explicit_attrib_location: %s",ppuVar19);
  DAT_044115c1 = '\0';
  ppuVar14 = (undefined **)&DAT_042df251;
  if ((DAT_0451c993 != '\0') &&
     (DAT_044115c1 = '\x01' - (DAT_0451c91b == '\0'), DAT_0451c91b != '\0')) {
    ppuVar14 = &PTR_DAT_042df24d;
  }
  ppuVar19 = &PTR_DAT_042df24d;
  FUN_0402cd10(0x14,"    Supported and usable: compressed 3D textures (VTC): %s",ppuVar14);
  DAT_044115c2 = DAT_0451ca86 != '\0';
  ppuVar14 = &PTR_DAT_042df24d;
  if (!(bool)DAT_044115c2) {
    ppuVar14 = (undefined **)&DAT_042df251;
  }
  FUN_0402cd10(0x14,"    Supported and usable: clear_buffer_object: %s",ppuVar14);
  DAT_044115c3 = DAT_0451ca85 != '\0';
  if (!(bool)DAT_044115c3) {
    ppuVar19 = (undefined **)&DAT_042df251;
  }
  FUN_0402cd10(0x14,"    Supported and usable: clear_texture: %s",ppuVar19);
  if (DAT_0451c956 == '\0') {
LAB_040216ff:
    if (DAT_0451c9eb != '\0') {
      local_40 = (undefined **)0x0;
      local_3c = (char *)0x0;
      local_38 = 0;
      local_34 = 0;
      glGetError();
      glGetIntegerv(0x87fc,&local_40);
      iVar17 = glGetError();
      if (iVar17 == 0) {
        ppuVar19 = local_40;
        pcVar7 = local_3c;
        FUN_0402cd10(0x14,
                     "    Available texture memory (from ATI extension): total: %u kB, largest available free block: %u kB, total auxiliary free: %u kB, largest auxiliary free block: %u kB"
                     ,local_40,local_3c,local_38,local_34);
        ppuVar14 = (undefined **)((uint)local_40 >> 10);
        if (ppuVar14 != (undefined **)0x0) goto LAB_0402175b;
      }
    }
    if ((DAT_0451c6c5 == '\0') || (DAT_0451c810 == (code *)0x0)) goto LAB_04021780;
    local_24 = (undefined **)0x0;
    iVar17 = (*DAT_0451c810)(0x8187,&local_24);
    if ((iVar17 == 0) ||
       (ppuVar19 = local_24,
       FUN_0402cd10(0x14,"    Available texture memory (from MESA extension): %u MB",local_24,pcVar7
                   ), ppuVar14 = local_24, local_24 == (undefined **)0x0)) goto LAB_04021780;
  }
  else {
    local_24 = (undefined **)0x0;
    glGetError();
    glGetIntegerv(0x9048,&local_24);
    iVar17 = glGetError();
    if (iVar17 != 0) goto LAB_040216ff;
    ppuVar19 = local_24;
    FUN_0402cd10(0x14,"    Available texture memory (from NVidia extension): %u kB",local_24);
    ppuVar14 = (undefined **)((uint)local_24 >> 10);
    if (ppuVar14 == (undefined **)0x0) goto LAB_040216ff;
  }
LAB_0402175b:
  puVar2 = DAT_044115a8;
  uVar18 = DAT_044115a4;
  if (DAT_044115a4 != 0) {
    uVar12 = 0;
    do {
      iVar17 = puVar2[uVar12];
      uVar12 = uVar12 + 1;
      *(undefined ***)(iVar17 + 8) = ppuVar14;
      *(undefined ***)(iVar17 + 4) = ppuVar14;
    } while (uVar12 != uVar18);
  }
LAB_04021780:
  if (((DAT_044115ac != '\0') || (DAT_0451ca13 != '\0')) &&
     (FUN_0402cd10(0x14,"    Multisample textures test:",ppuVar19,pcVar7), DAT_04408b80 != 0)) {
    local_74 = &DAT_04408b80;
    uVar18 = DAT_04408b80;
    do {
      p_Var3 = DAT_044115d4;
      p_Var13 = DAT_044115d0;
      if (DAT_044115cc == (_Rb_tree_node_base *)0x0) {
LAB_04021a28:
        local_2c = 0;
        local_30 = uVar18;
        if ((DAT_044115d8 == 0) || (uVar18 <= *(uint *)(DAT_044115d4 + 0x10))) {
LAB_04021ab8:
          FUN_040204c0();
          local_6c = local_64;
        }
        else {
          bVar21 = DAT_044115d4 == (_Rb_tree_node_base *)&DAT_044115c8;
          local_6c = operator_new(0x18);
          if (local_6c != (_Rb_tree_node_base *)0x0) {
            *(undefined4 *)local_6c = 0;
            *(undefined4 *)(local_6c + 4) = 0;
            *(undefined4 *)(local_6c + 8) = 0;
            *(undefined4 *)(local_6c + 0xc) = 0;
            *(uint *)(local_6c + 0x10) = local_30;
            *(undefined4 *)(local_6c + 0x14) = local_2c;
          }
          std::_Rb_tree_insert_and_rebalance
                    (bVar21,local_6c,p_Var3,(_Rb_tree_node_base *)&DAT_044115c8);
          DAT_044115d8 = DAT_044115d8 + 1;
        }
      }
      else {
        p_Var4 = DAT_044115cc;
        p_Var15 = (_Rb_tree_node_base *)&DAT_044115c8;
        do {
          while (p_Var16 = p_Var4, uVar18 <= *(uint *)(p_Var16 + 0x10)) {
            p_Var4 = *(_Rb_tree_node_base **)(p_Var16 + 8);
            p_Var15 = p_Var16;
            if (*(_Rb_tree_node_base **)(p_Var16 + 8) == (_Rb_tree_node_base *)0x0)
            goto LAB_040217f5;
          }
          p_Var1 = p_Var16 + 0xc;
          p_Var4 = *(_Rb_tree_node_base **)p_Var1;
          p_Var16 = p_Var15;
        } while (*(_Rb_tree_node_base **)p_Var1 != (_Rb_tree_node_base *)0x0);
LAB_040217f5:
        if (p_Var16 == (_Rb_tree_node_base *)&DAT_044115c8) goto LAB_04021a28;
        local_6c = p_Var16;
        if (uVar18 < *(uint *)(p_Var16 + 0x10)) {
          local_2c = 0;
          if (DAT_044115d0 == p_Var16) {
            local_30 = uVar18;
            local_6c = operator_new(0x18);
            if (local_6c != (_Rb_tree_node_base *)0x0) {
              *(undefined4 *)local_6c = 0;
              *(undefined4 *)(local_6c + 4) = 0;
              *(undefined4 *)(local_6c + 8) = 0;
              *(undefined4 *)(local_6c + 0xc) = 0;
              *(uint *)(local_6c + 0x10) = local_30;
              *(undefined4 *)(local_6c + 0x14) = local_2c;
            }
            std::_Rb_tree_insert_and_rebalance
                      (true,local_6c,p_Var13,(_Rb_tree_node_base *)&DAT_044115c8);
            DAT_044115d8 = DAT_044115d8 + 1;
            goto LAB_040218b0;
          }
          local_30 = uVar18;
          p_Var13 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var16);
          uVar12 = *(uint *)(p_Var13 + 0x10);
          if (uVar12 < uVar18) {
            if (*(int *)(p_Var13 + 0xc) == 0) {
              local_6c = operator_new(0x18);
              if (local_6c != (_Rb_tree_node_base *)0x0) {
                *(undefined4 *)local_6c = 0;
                *(undefined4 *)(local_6c + 4) = 0;
                *(undefined4 *)(local_6c + 8) = 0;
                *(undefined4 *)(local_6c + 0xc) = 0;
                *(uint *)(local_6c + 0x10) = local_30;
                *(undefined4 *)(local_6c + 0x14) = local_2c;
              }
              std::_Rb_tree_insert_and_rebalance
                        (p_Var13 == (_Rb_tree_node_base *)&DAT_044115c8 || uVar18 < uVar12,local_6c,
                         p_Var13,(_Rb_tree_node_base *)&DAT_044115c8);
              DAT_044115d8 = DAT_044115d8 + 1;
            }
            else {
              local_6c = operator_new(0x18);
              if (local_6c != (_Rb_tree_node_base *)0x0) {
                *(undefined4 *)local_6c = 0;
                *(undefined4 *)(local_6c + 4) = 0;
                *(undefined4 *)(local_6c + 8) = 0;
                *(undefined4 *)(local_6c + 0xc) = 0;
                *(uint *)(local_6c + 0x10) = local_30;
                *(undefined4 *)(local_6c + 0x14) = local_2c;
              }
              std::_Rb_tree_insert_and_rebalance
                        (true,local_6c,p_Var16,(_Rb_tree_node_base *)&DAT_044115c8);
              DAT_044115d8 = DAT_044115d8 + 1;
            }
            goto LAB_040218b0;
          }
          goto LAB_04021ab8;
        }
      }
LAB_040218b0:
      local_24 = (undefined **)0x0;
      uVar18 = *local_74;
      glGetIntegerv(0x8d57,&local_24);
      local_68 = 1;
      if (1 < (int)local_24) {
        iVar17 = 2;
        do {
          iVar22 = iVar17;
          local_20[0] = 0;
          glGenTextures(1,local_20);
          if (local_20[0] == 0) {
            FUN_0400a810("tex > 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                         ,0x476,"GLuint DetermineMaxSamplesForFormat(GLuint)");
          }
          glBindTexture(0x9100,local_20[0]);
          glGetError();
          (*DAT_0451e154)(0x9100,iVar22,uVar18,0x20,0x20,1);
          iVar17 = glGetError();
          glBindTexture(0x9100,0);
          glDeleteTextures(1,local_20);
        } while ((iVar17 == 0) &&
                (iVar17 = iVar22 + 1, local_68 = iVar22, iVar22 + 1 <= (int)local_24));
      }
      uVar8 = OpenGL_InternalFormatToString(uVar18);
      FUN_0402cd10(0x14,"        %s (%#x): %d samples",uVar8,uVar18,local_68);
      local_74 = local_74 + 1;
      *(int *)(local_6c + 0x14) = local_68;
      uVar18 = *local_74;
    } while (uVar18 != 0);
  }
  (**(code **)(*piVar6 + 4))(piVar6);
  return 1;
}

// --- EnableVerticalSync @0x04022640 ---
/* source: opengl_objects */

void EnableVerticalSync(uint param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_30;
  
  uVar3 = SDL_GL_GetCurrentContext();
  uVar4 = SDL_GL_GetCurrentWindow();
  puVar2 = DAT_044115e4;
  puVar5 = &DAT_044115e0;
  if (DAT_044115e4 != (undefined *)0x0) {
    do {
      while (puVar6 = puVar2, uVar3 <= *(uint *)(puVar6 + 0x10)) {
        puVar2 = *(undefined **)(puVar6 + 8);
        puVar5 = puVar6;
        if (*(undefined **)(puVar6 + 8) == (undefined *)0x0) goto LAB_04022685;
      }
      puVar1 = (undefined4 *)(puVar6 + 0xc);
      puVar2 = (undefined *)*puVar1;
      puVar6 = puVar5;
    } while ((undefined *)*puVar1 != (undefined *)0x0);
LAB_04022685:
    if ((puVar6 != &DAT_044115e0) && (*(uint *)(puVar6 + 0x10) <= uVar3)) goto LAB_04022692;
  }
  FUN_04020660();
  puVar6 = local_30;
LAB_04022692:
  *(undefined4 *)(puVar6 + 0x14) = uVar4;
  if (param_1 != uVar3) {
    FUN_0400a810("GetRawCurrentOpenGLContext() == context",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x6c0,"void EnableVerticalSync(OpenGLContext*, bool)");
  }
  SDL_GL_SetSwapInterval(param_2);
  return;
}

// --- GetGammaRamp @0x04022b70 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: opengl_objects */

void opengl_objects_04022b70(int *param_1,float *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  ushort *puVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ushort *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  byte bVar17;
  undefined *local_243c;
  uint local_2438;
  undefined *local_2430;
  undefined4 local_241c [768];
  ushort local_181c [256];
  ushort auStack_161c [256];
  ushort auStack_141c [256];
  undefined4 local_121c [128];
  undefined1 local_101c [512];
  undefined1 local_e1c [512];
  undefined4 local_c1c [771];
  
  fVar5 = _DAT_042e09f0;
  fVar4 = DAT_042dbf34;
  bVar17 = 0;
  iVar11 = *param_1;
  puVar13 = DAT_04468ac0;
  if (DAT_044115fc != (undefined *)0x0) {
    puVar10 = &DAT_044115f8;
    puVar9 = DAT_044115fc;
    do {
      while (puVar6 = puVar9, iVar11 <= *(int *)(puVar6 + 0x10)) {
        puVar10 = puVar6;
        puVar9 = *(undefined **)(puVar6 + 8);
        if (*(undefined **)(puVar6 + 8) == (undefined *)0x0) goto LAB_04022bbd;
      }
      puVar15 = (undefined4 *)(puVar6 + 0xc);
      puVar6 = puVar10;
      puVar9 = (undefined *)*puVar15;
    } while ((undefined *)*puVar15 != (undefined *)0x0);
LAB_04022bbd:
    if ((puVar6 != &DAT_044115f8) && (*(int *)(puVar6 + 0x10) <= iVar11)) {
      puVar7 = (ushort *)(puVar6 + 0x14);
      iVar11 = 0;
      do {
        uVar1 = *puVar7;
        iVar11 = iVar11 + 1;
        uVar2 = puVar7[0x100];
        uVar3 = puVar7[0x200];
        puVar7 = puVar7 + 1;
        *param_2 = (fVar4 * 0.0 + (float)uVar1) / fVar5;
        param_2[0x100] = (fVar4 * 0.0 + (float)uVar2) / fVar5;
        param_2[0x200] = (fVar4 * 0.0 + (float)uVar3) / fVar5;
        param_2 = param_2 + 1;
      } while (iVar11 != 0x100);
      return;
    }
  }
  for (; (undefined4 **)puVar13 != &DAT_04468ac0; puVar13 = (undefined4 *)*puVar13) {
    iVar14 = puVar13[2];
    if ((*(int *)(iVar14 + 0x7c) != 0) &&
       (iVar8 = SDL_GetWindowDisplayIndex(*(int *)(iVar14 + 0x7c)), iVar11 == iVar8))
    goto LAB_04022cd8;
  }
  iVar14 = 0;
  FUN_0400a810(&DAT_042df39f,
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp",
               0x771,"void GetGammaRamp(int32_t, GammaRampLinux*)");
LAB_04022cd8:
  iVar14 = SDL_GetWindowGammaRamp(*(undefined4 *)(iVar14 + 0x7c),local_121c,local_101c,local_e1c);
  if (iVar14 != 0) {
    FUN_0400a810("SDL_GetWindowGammaRamp( wl->SDLWindow, gammaRamp->red, gammaRamp->green, gammaRamp->blue ) == 0"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x772,"void GetGammaRamp(int32_t, GammaRampLinux*)");
  }
  puVar13 = local_121c;
  puVar7 = local_181c;
  for (iVar14 = 0x180; iVar14 != 0; iVar14 = iVar14 + -1) {
    *(undefined4 *)puVar7 = *puVar13;
    puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
    puVar7 = puVar7 + ((uint)bVar17 * -2 + 1) * 2;
  }
  if (DAT_044115fc != (undefined *)0x0) {
    local_243c = &DAT_044115f8;
    puVar10 = DAT_044115fc;
    do {
      if (*(int *)(puVar10 + 0x10) < iVar11) {
        puVar9 = *(undefined **)(puVar10 + 0xc);
      }
      else {
        puVar9 = *(undefined **)(puVar10 + 8);
        local_243c = puVar10;
      }
      puVar10 = puVar9;
    } while (puVar9 != (undefined *)0x0);
    if ((local_243c != &DAT_044115f8) && (*(int *)(local_243c + 0x10) <= iVar11)) goto LAB_04022d74;
  }
  puVar13 = local_c1c;
  for (iVar11 = 0x300; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
  }
  puVar13 = local_c1c;
  puVar15 = local_241c;
  for (iVar11 = 0x300; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
    puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
  }
  FUN_0401fe90();
  local_243c = local_2430;
LAB_04022d74:
  puVar7 = local_181c;
  local_2438 = 0xc00;
  puVar12 = (ushort *)(local_243c + 0x14);
  bVar16 = ((uint)puVar12 & 2) != 0;
  if (bVar16) {
    *(ushort *)(local_243c + 0x14) = local_181c[0];
    puVar7 = local_181c + 1;
    puVar12 = (ushort *)(local_243c + 0x16);
    local_2438 = 0xbfe;
  }
  for (local_2438 = local_2438 >> 2; local_2438 != 0; local_2438 = local_2438 - 1) {
    *(undefined4 *)puVar12 = *(undefined4 *)puVar7;
    puVar7 = puVar7 + ((uint)bVar17 * -2 + 1) * 2;
    puVar12 = puVar12 + ((uint)bVar17 * -2 + 1) * 2;
  }
  if (bVar16) {
    *puVar12 = *puVar7;
  }
  fVar5 = _DAT_042e09f0;
  fVar4 = DAT_042dbf34;
  iVar11 = 0;
  do {
    uVar1 = auStack_161c[iVar11];
    uVar2 = auStack_141c[iVar11];
    param_2[iVar11] = (fVar4 * 0.0 + (float)local_181c[iVar11]) / fVar5;
    param_2[iVar11 + 0x100] = (fVar4 * 0.0 + (float)uVar1) / fVar5;
    param_2[iVar11 + 0x200] = (fVar4 * 0.0 + (float)uVar2) / fVar5;
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x100);
  return;
}

// --- OpenGLDebugMessageCallback @0x0401f300 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: opengl_objects */

void OpenGLDebugMessageCallback
               (int param_1,undefined4 param_2,undefined4 param_3,uint param_4,size_t param_5,
               char *param_6)

{
  size_t __size;
  char *pcVar1;
  undefined4 uVar2;
  char *local_a8;
  undefined **local_a4;
  undefined **local_a0;
  undefined *local_94 [10];
  char local_6c [40];
  undefined *local_44 [13];
  
  if (param_4 == 0x826b) {
    return;
  }
  if (param_1 == -1) {
    switch(param_2) {
    case 0x9149:
      local_a8 = "API Error";
      local_a4 = &PTR_DAT_04359a53;
      break;
    case 0x914a:
      local_a8 = "Window System";
      local_a4 = &PTR_DAT_04359a53;
      break;
    case 0x914b:
      local_a8 = "Deprecation";
      local_a4 = &PTR_DAT_04359a53;
      break;
    case 0x914c:
      local_a8 = "Undefined Behaviour";
      local_a4 = &PTR_DAT_04359a53;
      break;
    case 0x914d:
      local_a8 = "Performance";
      local_a4 = &PTR_DAT_04359a53;
      break;
    case 0x914e:
      local_a8 = "Shader Compiler";
      local_a4 = &PTR_DAT_04359a53;
      break;
    case 0x914f:
      local_a8 = "Application";
      local_a4 = &PTR_DAT_04359a53;
      break;
    case 0x9150:
      local_a8 = "Other";
      local_a4 = &PTR_DAT_04359a53;
      break;
    default:
      local_a8 = local_6c;
      sprintf(local_a8,"!!!Unknown Category(%u)!!!",param_2);
      local_a4 = &PTR_DAT_04359a53;
    }
  }
  else {
    switch(param_1) {
    case 0x8246:
      local_a4 = &PTR_DAT_042df09b;
      break;
    case 0x8247:
      local_a4 = (undefined **)0x42df09f;
      break;
    case 0x8248:
      local_a4 = (undefined **)0x42df0ad;
      break;
    case 0x8249:
      local_a4 = (undefined **)0x42df0bd;
      break;
    case 0x824a:
      local_a4 = (undefined **)0x42df0c7;
      break;
    case 0x824b:
      local_a4 = (undefined **)0x42df0d3;
      break;
    default:
      local_a4 = local_94;
      sprintf((char *)local_a4,"!!!Unknown Source(%u)!!!",param_1);
    }
    switch(param_2) {
    case 0x824c:
      local_a8 = "Error";
      break;
    case 0x824d:
      local_a8 = "Deprecated Behaviour";
      break;
    case 0x824e:
      local_a8 = "Undefined Behaviour";
      break;
    case 0x824f:
      local_a8 = "Portability";
      break;
    case 0x8250:
      local_a8 = "Performance";
      break;
    case 0x8251:
      local_a8 = "Other";
      break;
    default:
      local_a8 = local_6c;
      sprintf(local_a8,"!!!Unknown Type(%u)!!!",param_2);
    }
  }
  uVar2 = 0xf;
  local_a0 = (undefined **)0x43285fc;
  if (param_4 == 0x9146) goto LAB_0401f3f5;
  if (param_4 < 0x9147) {
    uVar2 = 5;
    local_a0 = (undefined **)0x4348838;
    if (param_4 == 0x826b) goto LAB_0401f3f5;
  }
  else {
    uVar2 = 10;
    local_a0 = (undefined **)0x43403fd;
    if (param_4 == 0x9147) goto LAB_0401f3f5;
    uVar2 = 5;
    local_a0 = &PTR_DAT_042df13d;
    if (param_4 == 0x9148) goto LAB_0401f3f5;
  }
  local_a0 = local_44;
  uVar2 = 0xf;
  sprintf((char *)local_a0,"!!!Unknown Severity(%u)!!!",param_4);
LAB_0401f3f5:
  if (-1 < (int)param_5) {
    if (_DAT_04411610 == (char *)0x0) {
      pthread_mutex_init((pthread_mutex_t *)&DAT_04411614,(pthread_mutexattr_t *)0x0);
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04411614);
    __size = param_5 + 1;
    if ((int)DAT_0441162c < (int)__size) {
      DAT_0441162c = __size;
      if (_DAT_04411610 == (char *)0x0) {
        _DAT_04411610 = malloc(__size);
      }
      else {
        _DAT_04411610 = realloc(_DAT_04411610,__size);
      }
    }
    if (_DAT_0441160c < (int)param_5) {
      FUN_0400a810("length <= sMaxDebugMessageLength",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0xac7,
                   "void OpenGLDebugMessageCallback(uint32_t, uint32_t, uint32_t, uint32_t, int32_t, const char*, void*)"
                  );
    }
    pcVar1 = _DAT_04411610;
    strncpy(_DAT_04411610,param_6,param_5);
    pcVar1[param_5] = '\0';
    FUN_0402cd10(uVar2,"OGLDM[%s][%s][%s] %u(%#x) : %s",local_a4,local_a8,local_a0,param_3,param_3,
                 pcVar1);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04411614);
    return;
  }
  FUN_0402cd10(uVar2,"OGLDM[%s][%s][%s] %u(%#x) : %s",local_a4,local_a8,local_a0,param_3,param_3,
               param_6);
  return;
}

// --- OpenGLDisplay::OpenGLDisplay @0x04020970 ---
/* source: opengl_objects */

undefined4 OpenGLDisplay__OpenGLDisplay(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  char *__s;
  size_t sVar6;
  char *__dest;
  undefined4 *__ptr;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint local_48;
  undefined1 local_30 [16];
  undefined4 local_20;
  
  if (DAT_044115a0 != '\0') {
    return 1;
  }
  uVar3 = SDL_GetNumVideoDisplays();
  if (uVar3 != 0) {
    DAT_044115a4 = uVar3;
    DAT_044115a8 = malloc(uVar3 << 2);
    local_48 = 0;
    do {
      puVar4 = operator_new(0x30);
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = local_48;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
                    /* try { // try from 04020a0e to 04020c8b has its CatchHandler @ 04020caf */
      iVar5 = SDL_GetDisplayBounds(local_48,puVar4 + 4);
      if (iVar5 != 0) {
        FUN_0400a810("SDL_GetDisplayBounds( DisplayIndex, &Bounds ) == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x1d0,"OpenGLDisplay::OpenGLDisplay(int)");
      }
      __s = (char *)SDL_GetDisplayName(*puVar4);
      if (__s != (char *)0x0) {
        sVar6 = strlen(__s);
        __dest = malloc(sVar6 + 1);
        puVar4[3] = (uint)__dest;
        strcpy(__dest,__s);
      }
      iVar5 = SDL_GetNumDisplayModes(*puVar4);
      if (iVar5 < 0) {
        FUN_0400a810("numDisplayModes >= 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x1dd,"OpenGLDisplay::OpenGLDisplay(int)");
      }
      else if (iVar5 != 0) {
        iVar12 = 0;
        __ptr = malloc(iVar5 * 0x18);
        do {
          local_20 = 0;
          iVar7 = SDL_GetDisplayMode(*puVar4,iVar12,local_30);
          if (iVar7 != 0) {
            FUN_0400a810("SDL_GetDisplayMode( DisplayIndex, i, &mode ) == 0",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                         ,0x1e6,"OpenGLDisplay::OpenGLDisplay(int)");
          }
          eON_FilterDesktopDisplayMode();
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar5);
        iVar12 = 0;
        iVar7 = 0;
        puVar10 = __ptr;
        do {
          iVar7 = (iVar7 + 1) - (uint)(puVar10[5] == 0);
          iVar12 = iVar12 + 1;
          puVar10 = puVar10 + 6;
        } while (iVar12 != iVar5);
        if (iVar7 != 0) {
          pvVar8 = malloc(iVar7 * 4);
          puVar4[8] = (uint)pvVar8;
          pvVar9 = malloc(iVar7 * 0x18);
          puVar4[9] = (uint)pvVar9;
          iVar12 = 0;
          puVar10 = __ptr;
          do {
            if (puVar10[5] != 0) {
              *(int *)((int)pvVar8 + puVar4[10] * 4) = iVar12;
              uVar3 = puVar4[10];
              puVar1 = (undefined4 *)((int)pvVar9 + uVar3 * 0x18);
              *puVar1 = *puVar10;
              puVar1[1] = puVar10[1];
              puVar1[2] = puVar10[2];
              puVar1[3] = puVar10[3];
              puVar1[4] = puVar10[4];
              puVar1[5] = puVar10[5];
              puVar4[10] = uVar3 + 1;
            }
            iVar12 = iVar12 + 1;
            puVar10 = puVar10 + 6;
          } while (iVar12 != iVar5);
        }
        free(__ptr);
      }
      piVar2 = DAT_044115a8;
      uVar3 = DAT_044115a4;
      DAT_044115a8[local_48] = (int)puVar4;
      local_48 = local_48 + 1;
    } while (local_48 < uVar3);
    if (uVar3 != 0) {
      uVar13 = 0;
      piVar11 = piVar2;
      do {
        iVar5 = *piVar11;
        if ((((*(int *)(iVar5 + 0x10) < 1) && (*(int *)(iVar5 + 0x14) < 1)) &&
            (0 < *(int *)(iVar5 + 0x10) + *(int *)(iVar5 + 0x18))) &&
           (0 < *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c))) {
          if (uVar13 == 0) {
            DAT_044115a0 = 1;
            return 1;
          }
          iVar12 = *piVar2;
          *piVar2 = iVar5;
          *piVar11 = iVar12;
          DAT_044115a0 = 1;
          return 1;
        }
        uVar13 = uVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar13 != uVar3);
    }
    DAT_044115a0 = 1;
    return 1;
  }
  FUN_0402cd10(0xf,"PrepareDisplayModesInformation() - SDL_GetNumVideoDisplays() == 0 !!");
  return 0;
}

// --- OpenGLDisplayName @0x04022220 ---
/* source: opengl_objects */

undefined4 OpenGLDisplayName(int *param_1,char *param_2,uint param_3,char param_4)

{
  char *__src;
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_0400a810("display",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x60e,"bool OpenGLDisplayName(OpenGLDisplay*, void*, uint32_t, bool)");
  }
  if (DAT_044115a4 <= *param_1) {
    FUN_0400a810("display->GetDisplayIndex() < (int)DisplayCount",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x60f,"bool OpenGLDisplayName(OpenGLDisplay*, void*, uint32_t, bool)");
  }
  __src = (char *)param_1[3];
  uVar1 = 0;
  if (__src != (char *)0x0) {
    if (param_4 != '\0') {
      eON_MultiByteToWideChar(0,0,__src,0xffffffff,param_2,param_3 >> 1);
      (param_2 + (param_3 >> 1) * 2 + -2)[0] = '\0';
      (param_2 + (param_3 >> 1) * 2 + -2)[1] = '\0';
      return 1;
    }
    strncpy(param_2,__src,param_3 - 1);
    param_2[param_3 - 1] = '\0';
    uVar1 = 1;
  }
  return uVar1;
}

// --- OpenGLDisplayWorkArea @0x04022160 ---
/* source: opengl_objects */

void opengl_objects_04022160(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_0400a810("display",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x5f5,
                 "void OpenGLDisplayWorkArea(OpenGLDisplay*, int32_t*, int32_t*, int32_t*, int32_t*)"
                );
  }
  if (DAT_044115a4 <= *param_1) {
    FUN_0400a810("display->GetDisplayIndex() < (int32_t)DisplayCount",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x5f6,
                 "void OpenGLDisplayWorkArea(OpenGLDisplay*, int32_t*, int32_t*, int32_t*, int32_t*)"
                );
  }
  iVar1 = param_1[6];
  iVar2 = param_1[4];
  iVar3 = param_1[5];
  iVar4 = param_1[7];
  *param_2 = iVar2;
  *param_3 = iVar3;
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2 + iVar1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar3 + iVar4;
  }
  return;
}

// --- OpenGLDisplay_GetD3DCAPS9 @0x04022440 ---
/* source: opengl_objects */

void OpenGLDisplay_GetD3DCAPS9(int param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    return;
  }
  FUN_0400a810("display",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp",
               0x655,"void OpenGLDisplay_GetD3DCAPS9(OpenGLDisplay*, void**)");
  *param_2 = uRam0000002c;
  return;
}

// --- OpenGLDisplay_SetD3DCAPS9 @0x040224a0 ---
/* source: opengl_objects */

void OpenGLDisplay_SetD3DCAPS9(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_0400a810("display",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x65b,"void OpenGLDisplay_SetD3DCAPS9(OpenGLDisplay*, void*)");
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0400a810("display->D3DCAPS9_Ptr == __null",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x65c,"void OpenGLDisplay_SetD3DCAPS9(OpenGLDisplay*, void*)");
  }
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

// --- OpenGLWrapperLinux::ChangeWindow @0x040201a0 ---
/* source: opengl_objects */

undefined4 OpenGLWrapperLinux__ChangeWindow(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_28;
  int local_24;
  int local_20;
  
  if (param_2 == 0) {
    uVar2 = SDL_GL_GetCurrentContext();
    (**(code **)(*param_1 + 0x18))(param_1,0);
    if (param_1[10] != 0) {
      param_1[10] = 0;
      param_1[0xd] = 0;
    }
    cVar1 = eON_Int_IsMainThread();
    if (cVar1 == '\0') {
      local_24 = param_1[0xb];
      local_28 = param_1;
      local_20 = param_1[0xc];
      ThreadBlocked(FUN_04020040,&local_28);
      iVar3 = param_1[0xd];
    }
    else {
      iVar3 = SDL_CreateWindow(&DAT_04328763,param_1[0xb],param_1[0xc],0x80,0x80,0x1a);
      param_1[0xd] = iVar3;
    }
    if (iVar3 == 0) {
      FUN_0400a810("SDLWindow",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x94e,"virtual bool OpenGLWrapperLinux::ChangeWindow(eON_Window*)");
      iVar3 = param_1[0xd];
    }
  }
  else {
    if (param_1[10] == param_2) {
      return 1;
    }
    uVar2 = SDL_GL_GetCurrentContext();
    (**(code **)(*param_1 + 0x18))(param_1,0);
    if ((param_1[10] == 0) && (param_1[0xd] != 0)) {
      cVar1 = eON_Int_IsMainThread();
      if (cVar1 == '\0') {
        ThreadBlocked(FUN_04020010,param_1);
      }
      else {
        SDL_DestroyWindow(param_1[0xd]);
      }
    }
    iVar3 = *(int *)(param_2 + 0x7c);
    param_1[10] = param_2;
    param_1[0xd] = iVar3;
  }
  SDL_GL_MakeCurrent(iVar3,uVar2);
  return 1;
}

// --- OpenGLWrapperLinux::EnableDebugOutput @0x0401f930 ---
/* source: opengl_objects */

void OpenGLWrapperLinux__EnableDebugOutput(int param_1)

{
  int iVar1;
  undefined *local_10 [3];
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  if (DAT_0451ca79 == '\0') {
    if (DAT_0451cac6 == '\0') {
      return;
    }
    glGetIntegerv(0x9143,&DAT_0441160c);
    (*DAT_0451ea4c)(thunk_OpenGLDebugMessageCallback,0);
    (*DAT_0451ea48)(0,0,0,0,1);
    (*DAT_0451ea44)(0x914f,0x9148,0x539,0,"GL_AMD_debug_output OpenGL debug messages activated");
    return;
  }
  glGetIntegerv(0x9143,&DAT_0441160c);
  (*DAT_0451e854)(OpenGLDebugMessageCallback,0);
  (*DAT_0451e850)(0x1100,0x1100,0x1100,0,0,1);
  (*DAT_0451e850)(0x1100,0x1100,0x9148,0,0,0);
  if (DAT_044115af == '\0') {
    if (DAT_044115ae == '\0') goto LAB_0401fa0d;
    local_10[0] = &DAT_00020072;
  }
  else {
    local_10[0] = (undefined *)0xa;
  }
  (*DAT_0451e850)(0x8246,0x8250,0x1100,1,local_10,0);
LAB_0401fa0d:
  glEnable(0x8242);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("err == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0xb0c,"virtual void OpenGLWrapperLinux::EnableDebugOutput()");
  }
  (*DAT_0451e84c)(0x824a,0x8251,0x539,0x9148,0xffffffff,
                  "GL_ARB_debug_output OpenGL debug messages activated");
  return;
}

// --- OpenGLWrapperLinux::MakeCurrent @0x0401fb60 ---
/* source: opengl_objects */

void OpenGLWrapperLinux__MakeCurrent(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = SDL_GL_GetCurrentContext();
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    if (param_2 != *(int *)(param_1 + 0x44)) {
      piVar2 = *(int **)(param_1 + 0x38);
      iVar4 = *(int *)(param_1 + 0x3c) - (int)piVar2 >> 2;
      if (iVar4 == 0) {
LAB_0401fb9c:
        FUN_0400a810("found",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0xa1a,"virtual void OpenGLWrapperLinux::MakeCurrent(OpenGLContext*)");
      }
      else {
        iVar3 = 0;
        iVar1 = *piVar2;
        while (param_2 != iVar1) {
          iVar3 = iVar3 + 1;
          if (iVar3 == iVar4) goto LAB_0401fb9c;
          iVar1 = piVar2[iVar3];
        }
      }
    }
    iVar4 = SDL_GL_GetCurrentContext();
    if (param_2 == iVar4) {
      return;
    }
  }
  SDL_GL_MakeCurrent();
  return;
}

// --- OpenGLWrapperLinux::Open @0x040237f0 ---
/* source: opengl_objects */

undefined4 opengl_objects_040237f0(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  
  puVar5 = &DAT_04328763;
  if (DAT_044115ac == '\0') {
    puVar5 = &DAT_042df3ba;
  }
  pcVar6 = "TRUE";
  if (param_4[5] == 0) {
    pcVar6 = "FALSE";
  }
  FUN_0402cd10(5,
               "OpenGLWrapperLinux::Open: Window = %p, NeedColorToBeFloat = %s, ColorSize = %d, AlphaSize = %d, DepthSize = %d, StencilSize = %d, %susing OpenGL Core"
               ,param_3,pcVar6,*param_4,param_4[1],param_4[2],param_4[3],puVar5);
  if (param_4[5] == 0) {
    param_1[4] = *param_4;
    param_1[5] = param_4[1];
    param_1[6] = param_4[2];
    param_1[7] = param_4[3];
    param_1[8] = param_4[4];
    param_1[9] = param_4[5];
    uVar1 = FUN_0400cbc0("opengl_debug_output");
    param_1[3] = (int)param_2;
    *(undefined1 *)(param_1 + 2) = uVar1;
    OpenGLWrapperLinux__SetupContextAttributes(param_1);
    uVar3 = 0x2fff000a;
    uVar7 = 0x2fff000a;
    if (param_2 != (int *)0x0) {
      if (DAT_044115a4 <= *param_2) {
        FUN_0400a810("display->GetDisplayIndex() < (int32_t)DisplayCount",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x5f6,
                     "void OpenGLDisplayWorkArea(OpenGLDisplay*, int32_t*, int32_t*, int32_t*, int32_t*)"
                    );
      }
      uVar7 = param_2[4] + 10U | 0x2fff0000;
      uVar3 = param_2[5] + 10U | 0x2fff0000;
    }
    param_1[0xb] = uVar7;
    param_1[0xc] = uVar3;
    cVar2 = (**(code **)(*param_1 + 0x2c))(param_1,param_3);
    if (cVar2 != '\0') {
      iVar4 = SDL_GL_CreateContext(param_1[0xd]);
      param_1[0x11] = iVar4;
      if (iVar4 != 0) {
        (**(code **)(*param_1 + 0x24))(param_1);
        param_1[3] = (int)param_2;
        return 1;
      }
      if ((param_1[10] == 0) && (param_1[0xd] != 0)) {
        cVar2 = eON_Int_IsMainThread();
        if (cVar2 == '\0') {
          ThreadBlocked(FUN_04020010,param_1);
        }
        else {
          SDL_DestroyWindow(param_1[0xd]);
          param_1[0xd] = 0;
        }
      }
    }
  }
  return 0;
}

// --- OpenGLWrapperLinux::ReleaseContext @0x0401f850 ---
/* source: opengl_objects */

void OpenGLWrapperLinux__ReleaseContext(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = SDL_GL_GetCurrentContext();
  if (param_2 != iVar4) {
    SDL_GL_MakeCurrent(0,0);
  }
  if (param_2 != *(int *)(param_1 + 0x44)) {
    piVar3 = *(int **)(param_1 + 0x38);
    iVar4 = *(int *)(param_1 + 0x3c) - (int)piVar3 >> 2;
    if (iVar4 != 0) {
      iVar5 = 0;
      iVar2 = *piVar3;
      piVar1 = piVar3;
      while( true ) {
        if (param_2 == iVar2) {
          *piVar1 = piVar3[iVar4 + -1];
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -4;
          SDL_GL_DeleteContext();
          return;
        }
        iVar5 = iVar5 + 1;
        if (iVar5 == iVar4) break;
        piVar1 = piVar3 + iVar5;
        iVar2 = *piVar1;
      }
    }
    FUN_0400a810("found",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0xa4f,"virtual void OpenGLWrapperLinux::ReleaseContext(OpenGLContext*)");
    SDL_GL_DeleteContext();
    return;
  }
  return;
}

// --- OpenGLWrapperLinux::SetupContextAttributes @0x04023140 ---
/* source: opengl_objects */

void OpenGLWrapperLinux__SetupContextAttributes(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SDL_GL_SetAttribute(5,1);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x890,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  iVar1 = SDL_GL_SetAttribute(0xf,1);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_ACCELERATED_VISUAL, 1 ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x891,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  if (*(char *)(param_1 + 8) != '\0') {
    iVar1 = SDL_GL_SetAttribute(0x14,1);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_DEBUG_FLAG ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x895,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0x18) {
    if (iVar1 == 0x1e) {
      iVar1 = SDL_GL_SetAttribute(0,10);
      if (iVar1 != 0) {
        FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 10 ) == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x8a2,"void OpenGLWrapperLinux::SetupContextAttributes()");
      }
      iVar1 = SDL_GL_SetAttribute(1,10);
      if (iVar1 != 0) {
        FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 10 ) == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x8a3,"void OpenGLWrapperLinux::SetupContextAttributes()");
      }
      iVar1 = SDL_GL_SetAttribute(2,10);
      if (iVar1 != 0) {
        FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 10 ) == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x8a4,"void OpenGLWrapperLinux::SetupContextAttributes()");
      }
      goto LAB_040231ce;
    }
    if (iVar1 != -1) {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8a8,"void OpenGLWrapperLinux::SetupContextAttributes()");
      goto LAB_040231ce;
    }
  }
  iVar1 = SDL_GL_SetAttribute(0,8);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 8 ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x89c,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  iVar1 = SDL_GL_SetAttribute(1,8);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 8 ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x89d,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  iVar1 = SDL_GL_SetAttribute(2,8);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 8 ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x89e,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
LAB_040231ce:
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  iVar1 = SDL_GL_SetAttribute(6,iVar1);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, ( Configuration.DepthSize == -1 ) ? 0 : Configuration.DepthSize ) == 0"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x8af,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  iVar1 = SDL_GL_SetAttribute(7,iVar1);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_STENCIL_SIZE, ( Configuration.StencilSize == -1 ) ? 0 : Configuration.StencilSize ) == 0"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x8b0,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    iVar1 = SDL_GL_SetAttribute(0x16,0);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_SHARE_WITH_CURRENT_CONTEXT, 0 ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8b4,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      FUN_0400a810("SDLWindow",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8b8,"void OpenGLWrapperLinux::SetupContextAttributes()");
      iVar1 = *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(param_1 + 0x34);
    }
    SDL_GL_MakeCurrent(iVar2,iVar1);
    iVar1 = SDL_GL_SetAttribute(0x16,1);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_SHARE_WITH_CURRENT_CONTEXT, 1 ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8ba,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
  }
  if (DAT_044115ac == '\0') {
    iVar1 = SDL_GL_SetAttribute(0x11,2);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 2 ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8ca,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
    iVar1 = SDL_GL_SetAttribute(0x12,1);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 1 ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8cb,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
  }
  else {
    iVar1 = SDL_GL_SetAttribute(0x15,1);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE ) == 0"
                   ,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8bf,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
    iVar1 = SDL_GL_SetAttribute(0x11,3);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 3 ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8c4,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
    iVar1 = SDL_GL_SetAttribute(0x12,2);
    if (iVar1 != 0) {
      FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 2 ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                   ,0x8c5,"void OpenGLWrapperLinux::SetupContextAttributes()");
    }
  }
  iVar1 = SDL_GL_SetAttribute(0xd,0);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_MULTISAMPLEBUFFERS, 0 ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x8ce,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  iVar1 = SDL_GL_SetAttribute(0xe,0);
  if (iVar1 != 0) {
    FUN_0400a810("SDL_GL_SetAttribute( SDL_GL_MULTISAMPLESAMPLES, 0 ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x8cf,"void OpenGLWrapperLinux::SetupContextAttributes()");
  }
  return;
}

// --- OpenGLWrapperLinux::~OpenGLWrapperLinux @0x04020090 ---
/* source: opengl_objects */

void opengl_objects_04020090(undefined4 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_opengl_objects_04020090_042e0968;
  if ((int)(param_1[0xf] - param_1[0xe]) >> 2 != 0) {
    FUN_0400a810("OtherContexts.size() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x7f6,"virtual OpenGLWrapperLinux::~OpenGLWrapperLinux()");
  }
  if (param_1[0x11] != 0) {
                    /* try { // try from 040200b7 to 04020142 has its CatchHandler @ 0402014f */
    SDL_GL_DeleteContext(param_1[0x11]);
    param_1[0x11] = 0;
  }
  if ((param_1[10] == 0) && (param_1[0xd] != 0)) {
    cVar1 = eON_Int_IsMainThread();
    if (cVar1 == '\0') {
      ThreadBlocked(FUN_04020010,param_1);
    }
    else {
      SDL_DestroyWindow(param_1[0xd]);
      param_1[0xd] = 0;
    }
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    operator_delete((void *)param_1[0xe]);
  }
  *param_1 = &PTR_FUN_042e09a8;
  return;
}

// --- SetGammaRamp @0x04022f10 ---
/* source: opengl_objects */

void opengl_objects_04022f10(char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  
  if (param_1 == '\0') {
    p_Var4 = DAT_04411600;
    if (DAT_04411600 != (_Rb_tree_node_base *)&DAT_044115f8) {
      do {
        iVar1 = *(int *)(p_Var4 + 0x10);
        for (puVar2 = DAT_04468ac0; (undefined4 **)puVar2 != &DAT_04468ac0;
            puVar2 = (undefined4 *)*puVar2) {
          iVar5 = puVar2[2];
          if ((*(int *)(iVar5 + 0x7c) != 0) &&
             (iVar3 = SDL_GetWindowDisplayIndex(*(int *)(iVar5 + 0x7c)), iVar1 == iVar3))
          goto LAB_04023060;
        }
        iVar5 = 0;
        FUN_0400a810(&DAT_042df39f,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x764,"void SetGammaRamp(int32_t, GammaRampLinux*, bool)");
LAB_04023060:
        SDL_SetWindowGammaRamp
                  (*(undefined4 *)(iVar5 + 0x7c),p_Var4 + 0x614,p_Var4 + 0x814,p_Var4 + 0xa14);
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4);
        if (p_Var4 == (_Rb_tree_node_base *)&DAT_044115f8) {
          return;
        }
      } while( true );
    }
  }
  else {
    p_Var4 = DAT_04411600;
    if (DAT_04411600 != (_Rb_tree_node_base *)&DAT_044115f8) {
      do {
        iVar1 = *(int *)(p_Var4 + 0x10);
        for (puVar2 = DAT_04468ac0; (undefined4 **)puVar2 != &DAT_04468ac0;
            puVar2 = (undefined4 *)*puVar2) {
          iVar5 = puVar2[2];
          if ((*(int *)(iVar5 + 0x7c) != 0) &&
             (iVar3 = SDL_GetWindowDisplayIndex(*(int *)(iVar5 + 0x7c)), iVar1 == iVar3))
          goto LAB_04022fa0;
        }
        iVar5 = 0;
        FUN_0400a810(&DAT_042df39f,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                     ,0x764,"void SetGammaRamp(int32_t, GammaRampLinux*, bool)");
LAB_04022fa0:
        SDL_SetWindowGammaRamp
                  (*(undefined4 *)(iVar5 + 0x7c),p_Var4 + 0x14,p_Var4 + 0x214,p_Var4 + 0x414);
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4);
      } while (p_Var4 != (_Rb_tree_node_base *)&DAT_044115f8);
    }
  }
  return;
}

// --- SetUserGammaRamp @0x04022700 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: opengl_objects */

void SetUserGammaRamp(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  byte bVar17;
  uint local_243c;
  undefined *local_2438;
  int local_2430;
  undefined4 local_241c [768];
  undefined1 local_181c [512];
  undefined2 auStack_161c [256];
  undefined2 auStack_141c [256];
  undefined1 local_121c [512];
  undefined1 local_101c [512];
  undefined1 local_e1c [512];
  undefined4 local_c1c [771];
  
  fVar3 = _DAT_042e09f0;
  bVar17 = 0;
  iVar4 = *param_1;
  if (DAT_044115fc == (undefined *)0x0) {
    iVar9 = 0;
  }
  else {
    puVar8 = DAT_044115fc;
    puVar14 = &DAT_044115f8;
    do {
      while (puVar15 = puVar8, *(int *)(puVar15 + 0x10) < iVar4) {
        puVar12 = (undefined4 *)(puVar15 + 0xc);
        puVar8 = (undefined *)*puVar12;
        puVar15 = puVar14;
        if ((undefined *)*puVar12 == (undefined *)0x0) goto LAB_0402274b;
      }
      puVar8 = *(undefined **)(puVar15 + 8);
      puVar14 = puVar15;
    } while (*(undefined **)(puVar15 + 8) != (undefined *)0x0);
LAB_0402274b:
    if ((puVar15 != &DAT_044115f8) && (*(int *)(puVar15 + 0x10) <= iVar4)) {
      puVar6 = (undefined2 *)(puVar15 + 0x14);
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 1;
        fVar1 = param_2[0x100];
        *puVar6 = (short)(int)(*param_2 * fVar3);
        fVar2 = param_2[0x200];
        param_2 = param_2 + 1;
        puVar6[0x100] = (short)(int)(fVar1 * fVar3);
        puVar6[0x200] = (short)(int)(fVar2 * fVar3);
        puVar6 = puVar6 + 1;
      } while (iVar9 != 0x100);
      goto LAB_040227c6;
    }
    iVar9 = 0;
  }
  do {
    puVar12 = (undefined4 *)local_181c;
    fVar3 = param_2[iVar9 + 0x100];
    *(short *)((int)puVar12 + iVar9 * 2) = (short)(int)(param_2[iVar9] * _DAT_042e09f0);
    fVar1 = param_2[iVar9 + 0x200];
    auStack_161c[iVar9] = (short)(int)(fVar3 * _DAT_042e09f0);
    auStack_141c[iVar9] = (short)(int)(fVar1 * _DAT_042e09f0);
    iVar9 = iVar9 + 1;
    puVar11 = DAT_04468ac0;
  } while (iVar9 != 0x100);
  for (; (undefined4 **)puVar11 != &DAT_04468ac0; puVar11 = (undefined4 *)*puVar11) {
    iVar9 = puVar11[2];
    if ((*(int *)(iVar9 + 0x7c) != 0) &&
       (iVar7 = SDL_GetWindowDisplayIndex(*(int *)(iVar9 + 0x7c)), iVar4 == iVar7))
    goto LAB_04022925;
  }
  iVar9 = 0;
  FUN_0400a810(&DAT_042df39f,
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp",
               0x771,"void GetGammaRamp(int32_t, GammaRampLinux*)");
LAB_04022925:
  iVar9 = SDL_GetWindowGammaRamp(*(undefined4 *)(iVar9 + 0x7c),local_121c,local_101c,local_e1c);
  if (iVar9 != 0) {
    FUN_0400a810("SDL_GetWindowGammaRamp( wl->SDLWindow, gammaRamp->red, gammaRamp->green, gammaRamp->blue ) == 0"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x772,"void GetGammaRamp(int32_t, GammaRampLinux*)");
  }
  puVar8 = DAT_044115fc;
  if (DAT_044115fc == (undefined *)0x0) {
LAB_040229d1:
    puVar11 = local_c1c;
    for (iVar9 = 0x300; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
    }
    puVar11 = local_c1c;
    puVar13 = local_241c;
    for (iVar9 = 0x300; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
    }
    FUN_0401fe90();
    puVar8 = DAT_044115fc;
    local_2438 = (undefined *)0xc00;
    puVar11 = (undefined4 *)(local_2430 + 0x14);
    bVar16 = ((uint)puVar11 & 2) != 0;
    if (bVar16) {
      puVar12 = (undefined4 *)(local_181c + 2);
      *(undefined2 *)(local_2430 + 0x14) = local_181c._0_2_;
      puVar11 = (undefined4 *)(local_2430 + 0x16);
      local_2438 = (undefined *)0xbfe;
    }
    for (uVar10 = (uint)local_2438 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar11 = *puVar12;
      puVar12 = puVar12 + (uint)bVar17 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
    }
    if (bVar16) {
      *(undefined2 *)puVar11 = *(undefined2 *)puVar12;
    }
    if (puVar8 != (undefined *)0x0) goto LAB_04022a58;
  }
  else {
    local_2438 = &DAT_044115f8;
    puVar14 = DAT_044115fc;
    do {
      while (puVar15 = puVar14, *(int *)(puVar15 + 0x10) < iVar4) {
        puVar14 = *(undefined **)(puVar15 + 0xc);
        if (*(undefined **)(puVar15 + 0xc) == (undefined *)0x0) goto LAB_040229b0;
      }
      puVar14 = *(undefined **)(puVar15 + 8);
      local_2438 = puVar15;
    } while (*(undefined **)(puVar15 + 8) != (undefined *)0x0);
LAB_040229b0:
    if ((local_2438 == &DAT_044115f8) || (iVar4 < *(int *)(local_2438 + 0x10))) goto LAB_040229d1;
    local_243c = 0xc00;
    puVar11 = (undefined4 *)(local_2438 + 0x14);
    bVar16 = ((uint)puVar11 & 2) != 0;
    if (bVar16) {
      puVar12 = (undefined4 *)(local_181c + 2);
      *(undefined2 *)(local_2438 + 0x14) = local_181c._0_2_;
      local_243c = 0xbfe;
      puVar11 = (undefined4 *)(local_2438 + 0x16);
    }
    for (local_243c = local_243c >> 2; local_243c != 0; local_243c = local_243c - 1) {
      *puVar11 = *puVar12;
      puVar12 = puVar12 + (uint)bVar17 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
    }
    if (bVar16) {
      *(undefined2 *)puVar11 = *(undefined2 *)puVar12;
    }
LAB_04022a58:
    puVar14 = &DAT_044115f8;
    do {
      while (puVar15 = puVar8, *(int *)(puVar15 + 0x10) < iVar4) {
        puVar12 = (undefined4 *)(puVar15 + 0xc);
        puVar8 = (undefined *)*puVar12;
        puVar15 = puVar14;
        if ((undefined *)*puVar12 == (undefined *)0x0) goto LAB_04022a7a;
      }
      puVar8 = *(undefined **)(puVar15 + 8);
      puVar14 = puVar15;
    } while (*(undefined **)(puVar15 + 8) != (undefined *)0x0);
LAB_04022a7a:
    if ((puVar15 != &DAT_044115f8) && (*(int *)(puVar15 + 0x10) <= iVar4)) goto LAB_040227c6;
  }
  puVar15 = &DAT_044115f8;
  FUN_0400a810("it != sGammaRamps.end()",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp",
               0x781,"void SetUserGammaRamp(OpenGLDisplay*, GammaRamp*)");
LAB_040227c6:
  cVar5 = FUN_0402d6a0();
  puVar12 = DAT_04468ac0;
  if (cVar5 == '\0') {
    return;
  }
  for (; (undefined4 **)puVar12 != &DAT_04468ac0; puVar12 = (undefined4 *)*puVar12) {
    iVar9 = puVar12[2];
    if ((*(int *)(iVar9 + 0x7c) != 0) &&
       (iVar7 = SDL_GetWindowDisplayIndex(*(int *)(iVar9 + 0x7c)), iVar4 == iVar7))
    goto LAB_04022838;
  }
  iVar9 = 0;
  FUN_0400a810(&DAT_042df39f,
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp",
               0x764,"void SetGammaRamp(int32_t, GammaRampLinux*, bool)");
LAB_04022838:
  SDL_SetWindowGammaRamp
            (*(undefined4 *)(iVar9 + 0x7c),puVar15 + 0x14,puVar15 + 0x214,puVar15 + 0x414);
  return;
}

// --- TestSurfaceCompatibility @0x04020d10 ---
/* source: opengl_objects */

void TestSurfaceCompatibility
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,char param_7)

{
  int iVar1;
  int local_28;
  int local_24;
  undefined4 local_20 [4];
  
  glGetError();
  local_28 = 0;
  glGenTextures(1,&local_28);
  if (local_28 == 0) {
    FUN_0400a810("texColor",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x43b,
                 "void TestSurfaceCompatibility(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, bool)"
                );
  }
  local_24 = 0;
  glGenTextures(1,&local_24);
  if (local_24 == 0) {
    FUN_0400a810("texDepthStencil",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x43f,
                 "void TestSurfaceCompatibility(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, bool)"
                );
  }
  (*DAT_0451eeac)(0x84c0);
  glBindTexture(0xde1,local_28);
  glTexImage2D(0xde1,0,param_1,0x20,0x20,0,param_2,param_3,0);
  glBindTexture(0xde1,local_24);
  glTexImage2D(0xde1,0,param_4,0x20,0x20,0,param_5,param_6,0);
  glBindTexture(0xde1,0);
  local_20[0] = 0;
  (*DAT_0451e668)(1,local_20);
  (*DAT_0451e694)(0x8d40,local_20[0]);
  (*DAT_0451ea74)(0x8d40,0x8ce0,local_28,0);
  (*DAT_0451ea74)(0x8d40,(-(uint)(param_7 == '\0') & 0xae6) + 0x821a,local_24,0);
  (*DAT_0451eed0)(0x8ce0);
  (*DAT_0451eed4)(0x8ce0);
  iVar1 = (*DAT_0451e688)(0x8d40);
  FUN_0402cd10(0x14,"Complete result: %#x",iVar1);
  if (iVar1 != 0x8cd5) {
    FUN_0400a810("completeResult == 0x8CD5",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x455,
                 "void TestSurfaceCompatibility(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, bool)"
                );
  }
  (*DAT_0451e694)(0x8d40,0);
  (*DAT_0451eed0)(0x405);
  (*DAT_0451eed4)(0x405);
  (*DAT_0451e684)(1,local_20);
  glDeleteTextures(1,&local_28);
  glDeleteTextures(1,&local_24);
  iVar1 = glGetError();
  if (iVar1 != 0) {
    FUN_0400a810("glGetError() == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/opengl_objects.cpp"
                 ,0x45f,
                 "void TestSurfaceCompatibility(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, bool)"
                );
  }
  FUN_0402cd10(0x14,"Test done.");
  return;
}

// --- attached helper FUN_0001f7e0 @0x0401f7e0 (call-graph exclusive to this TU) ---
void FUN_0401f7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = -1;
  if (0 < param_4) {
    iVar1 = param_4;
  }
  OpenGLDebugMessageCallback(0xffffffff,param_2,param_1,param_3,iVar1,param_5,param_6);
  return;
}

// --- attached helper FUN_000c6c50 @0x040c6c50 (call-graph exclusive to this TU) ---
void FUN_040c6c50(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_04408b60;
  if (*(int *)(param_1 + 0x22c) != DAT_0441159c || *(int *)(param_1 + 0x228) != DAT_04411598) {
    if (*(char *)(param_1 + 0x230) != DAT_04408b60) {
      *(char *)(param_1 + 0x230) = DAT_04408b60;
      EnableVerticalSync(*(undefined4 *)(param_1 + 0x224),cVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x214) + 0x28))
              (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x224));
    glViewport(*(undefined4 *)(param_1 + 0x3f8),*(undefined4 *)(param_1 + 0x3fc),
               *(undefined4 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x404));
    glScissor(*(undefined4 *)(param_1 + 0x434),*(undefined4 *)(param_1 + 0x438),
              *(undefined4 *)(param_1 + 0x43c),*(undefined4 *)(param_1 + 0x440));
    iVar2 = DAT_0441159c;
    *(int *)(param_1 + 0x228) = DAT_04411598;
    *(int *)(param_1 + 0x22c) = iVar2;
  }
  return;
}

