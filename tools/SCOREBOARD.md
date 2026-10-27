# Naming wave log

Full history of naming waves. The README scoreboard keeps only the latest 12 rows; this file is the complete table.

| Wave | Method | Applied | New functions |
|---|---|---|---|
| 230 | Hand-read tier batch #1: both-tag (v1.6.0+v1.6.40) source-closure re-run on libpng — source call-graph closure with byte-identical-across-both-tags candidates; 042c5210->png_get_channels applied (REV-unique edge from ledger anchor png_image_read_background, body verified line-by-line); 2nd closure hit png_icc_tag_name rejected on body read (error-severity ladder, not the char-quoter); feature joins (literals+constants) 0 hits confirming dry; board 5175->5176 (`tools/decomp_notes_wave230_handread_batch1.md`). | 1 | 1 |
| 229 | Import-lookup lane: whole-file {name_ptr, fn_ptr} data-pair scan (no z-field requirement) catching the import-lookup form the wave-228 dispatch scan excluded; cross-lane validation 2,151 named-target pairs at 100% agreement, zero conflicts; 51 unique unused names applied on unique unnamed slots with body checks (none contradicted; content bodies corroborate: DirectSoundCreate->eON_DirectSoundCreate8, XInputGetState->EnsureGamepadConnected, SysAllocString family allocators, SHILCreateFromPath->eON_WideCharToMultiByte); dsound/xinput/ole32-oleaut32/sysarr/ws2_32/shell32/imagehlp families; board 5125->5175 (`tools/decomp_notes_wave229_import_lookup_lane.md`). | 50 | 50 |
| 228 | Dispatch-lane extended whole-file: whole-file scan for {name_ptr, fn_ptr, 0} stride-12 entries (2,237 found; wave-227 scope was a subset); 47 applied — user32 (DeferWindowPos, Escape, keybd_event, mouse_event, wsprintf/wvsprintf A/W), winmm (aux*, mci*, midiOut*, mmio*), ws2_32 (InetPton/Ntop A/W, canonical spelling chosen over aliases), shell32 (ILFree, Shell_NotifyIconA/W, SHGetFolderPathAndSubDirW), ole32/oleaut32/rpcrt4/imagehlp singletons, D3DPERF_*, XInput*, SelectClipRgn, CreateDirectoryExA/W; 106 held (44 names checker-parked elsewhere, rest multi-implementation names per DLL); 1,918/1,918 cross-lane exact matches zero conflicts; lane exhausted; board 5078->5125 (`tools/decomp_notes_wave228_dispatch_lane.md`, `decomp/wave228_full_dispatch_inventory.json`). | 47 | 47 |
| 227 | Full Win32-emulation name-table harvest: whole-file scan for the game's own {name_ptr, fn_ptr, 0} export-table entries (820 across ~28 runs); 100% cross-lane agreement, zero conflicts; 71 entries renamed to eON_<name> on 65 unique slots (six ANSI macro alias pairs) after body-semantics checks incl. intra-table cross-references; families: _l* file API, lstr*, console I/O, FLS, heap, locale/collation, process/system, interlocked; board 5000->5078 cumulative (`tools/decomp_notes_wave227_name_table_harvest.md`, `decomp/wave227_win32_name_tables.json`). | 65 | 65 |
| 226 | kernel32-emulation name-table lane: game's own {name_ptr, fn_ptr, 0} dispatch table (vaddr 0x0432f0a4, 37 entries, multiple parallel copies); 100% agreement with checker names on all overlaps + 2 runtime corroborations (wave 225); 12 body-verified renames applied (FindFirstFileA/W, FindNextFileA/W, GetFileAttributesW, SetFileAttributesW, RemoveDirectoryA, FlushFileBuffers, SetFileInformationByHandle, LockFile, UnlockFile, GetLogicalDrives); 9 name-pool entries held (names already parked by checker lane); GetLogicalDrives returns 0xc bitmask (`tools/decomp_notes_wave226_name_table_lane.md`, `decomp/wave226_kernel32_name_table.json`). | 12 | 12 |
| 225 | gdb runtime lane on the live process: emulated Win32 file-API chain runtime-corroborated (create path splits via vpfs_04047220); .bbsave filename tails = wall-clock save time (both saves match mtime to the second); eON_DeleteFileW semantic mismatch flagged; 0 rule-legal renames (`tools/decomp_notes_wave225_runtime_gdb_lane.md`, artifacts `decomp/wave225/`). | 0 | 0 |
| 224 | Runtime write path demonstrated live: boot on Xvfb, new game -> world -> pause SAVE GAME produced real 240KB bbsave + profile.dat + EonRegistry.xml rewrite through emulated Win32 layer; DFEngine cache scan + vpfsdb backup dance via strace; clean kernel32 shutdown (`tools/decomp_notes_wave224_runtime_write_demo.md`, artifacts `decomp/wave224/`). | 0 | 0 |
| 223 | Lead closures, no renames: done.tsv audit (13 rule-passers all already named live); anim-hash lead re-derived = data table inside glxewInit/glewInit; engine single-owner string scan dry (`tools/decomp_notes_wave223_lead_closures.md`). | 0 | 0 |
| 222 | Matcher re-scan single-owner strings vs both libpng tags: 042a5350→png_user_version_check, 042c12c0→png_deflate_claim; 042a9940 hold (`tools/decomp_notes_wave222_png_source_pair.md`). | 2 | 2 |
| 221 | libstdc++ lane (wave-215 Next) closed: 04101c50→vector::_M_range_insert, 0410f860→vector<bool>::_M_insert_aux — single-owner strings physically inline in body, control flow verbatim vs vendor/gcc 4.3.4; 0400bfd0 hold confirmed (multi-string game function) (`tools/decomp_notes_wave221_libstdcxx_lane.md`). | 2 | 2 |
| 220 | Checker-lane review (manual tier): pngerror.c cluster resolved from vendor source — 042a95f0→png_safecat, 042a9510→png_format_buffer, 042a9a30→png_chunk_warning, 042a9ea0→png_benign_error; 2 checker names were one slot off; call graph closes both ways; read-back verified (`tools/decomp_notes_wave220_pngerror_cluster.md`). | 4 | 2 |
| 219 | ICC csstatics: relaxed matcher, all applied names body-verified individually; malloc family split by error/warning/NULL-base paths; 042a95f0 safecat-duplicate reverted to checker lane (`tools/decomp_notes_wave219_icc_malloc.md`). | 12 | 12 |
| 218 | colorspace/ICC statics district: rebuilt matcher over unnamed seed owners, both tags; ascii pair split by control flow (`tools/decomp_notes_wave218_colorspace_district.md`). | 12 | 12 |
| 217 | held png_set_* family body-matched vs vendor source; 042a6070 corrected to png_convert_to_rfc1123; +042a5e30 png_convert_to_rfc1123_buffer (`tools/decomp_notes_wave217_pngset_family.md`). | 12 | 11 |
| 216 | full-ledger audit of all named functions: 0 contradictions; 1,500/1,674 string-tier body-confirmed (`tools/decomp_notes_wave216_full_audit.md`). | 0 | 0 |
| 215 | per-function source sets + body-string verification (22 applied, 10 held for control-flow) (`tools/decomp_notes_wave215_perfunction_source_match.md`). | 22 | 22 |
| 214 | zlib district probe: matcher + call-graph dead end, documented (`tools/decomp_notes_wave214_zlib_dead_end.md`). | 0 | 0 |
| 213 | v1.6.40-only string matches + compression-setter struct-field split + image pair body-read (`tools/decomp_notes_wave213_v1640_stragglers.md`). | 8 | 8 |
| 212 | png_crc_error + png_default_read_data body matches (v1.6.0) (`tools/decomp_notes_wave212_crc_error_and_default_read.md`). | 2 | 2 |
| 211 | png.c/pngerror.c helper bodies line-by-line (reset_crc/calculate_crc/read_data/format_number) (`tools/decomp_notes_wave211_helper_bodies.md`). | 4 | 4 |
| 210 | pngwriter side + simple-API reader sweep vs v1.6.0 (unique literal-set matches, seed-uniqueness gate) (`tools/decomp_notes_wave210_pngwriter_side.md`). | 33 | 33 |
| 209 | Libpng reader district completion: pngrutil handler bodies vs v1.6.0 via call-graph anchors + distinctive-string locks (`tools/decomp_notes_wave209_pngrutil_completion.md`). | 18 | 18 |
| 208 | Libpng reader-district source match vs v1.6.0: chunk handlers, pngset setters, pngerror cluster + crc helpers (`tools/decomp_notes_wave208_libpng_chunk_district.md`). | 21 | 21 |
| 207 | Vtable aligner unfreeze: dumps refreshed from live, MM*/AudioRenderClient lanes re-gated, 7 slots (`tools/decomp_notes_wave207_vtable_unfreeze.md`). | 7 | 7 |
| 206 | XAudio2 MANUAL_ORDER pinned to eON observed layout; aligner shift-0 fits named the 4 gap slots (`tools/decomp_notes_wave206_xaudio2_pinned.md`). | 4 | 4 |
| 205 | Loader name-table mega-batch: static-binary dispatch tables, single-ref gates, ~420 checker-name agreements (`tools/decomp_notes_wave205_loader_name_table.md`). | 1,166 | 1,166 |
| 204 | TranslateAccelerator + DeleteTimerQueue (`tools/decomp_notes_wave204_accel_timerqueue.md`). | 8 | 8 |
| 203 | IsMainThread + SetErrorMode + Wnd gates (`tools/decomp_notes_wave203_mainthread_errormode.md`). | 10 | 10 |
| 202 | Thread APIs GetCurrent/Priority/Terminate (`tools/decomp_notes_wave202_thread_apis.md`). | 11 | 9 new + 2 renames |
| 201 | Local/Dos FileTime + GetThreadTimes (`tools/decomp_notes_wave201_filetime_threadtimes.md`). | 11 | 11 |
| 200 | ExitCodeThread + TLS + ThreadMap (`tools/decomp_notes_wave200_exitcode_tls_threadmap.md`). | 17 | 16 new + 1 rename |
| 199 | SetTimer/KillTimer (`tools/decomp_notes_wave199_settimer_killtimer.md`). | 8 | 6 new + 2 renames |
| 198 | MsgExtra + QueueStatus_Flags (`tools/decomp_notes_wave198_msgextra_queuestatus.md`). | 7 | 7 |
| 197 | Shader ALU/token (`tools/decomp_notes_wave197_shader_alu_token.md`). | 4 | 4 |
| 196 | ShaderData regs/caps (`tools/decomp_notes_wave196_shaderdata_regs.md`). | 10 | 10 |
| 195 | ShaderData varyings (`tools/decomp_notes_wave195_shaderdata_varyings.md`). | 13 | 13 |
| 194 | Direct3D9ExImp thunks (`tools/decomp_notes_wave194_d3d9ex_thunks.md`). | 15 | 15 |
| 193 | D3D9 CheckDeviceType/helpers (`tools/decomp_notes_wave193_d3d9_checkdevicetype.md`). | 7 | 7 |
| 192 | D3D9 CreateDevice/Adapter (`tools/decomp_notes_wave192_d3d9_createdevice.md`). | 6 | 6 |
| 191 | MonitorFrom + relmouse/GL (`tools/decomp_notes_wave191_monitorfrom_relmouse.md`). | 9 | 9 |
| 190 | OpenGLDisplay + WrapperLinux (`tools/decomp_notes_wave190_opengldisplay_wrapper.md`). | 15 | 15 |
| 189 | PropVariant + AudioRenderClient (`tools/decomp_notes_wave189_propvariant_audiorender.md`). | 8 | 8 |
| 188 | LoadStringW + cursor warp (`tools/decomp_notes_wave188_loadstringw_cursorwarp.md`). | 9 | 9 |
| 187 | MapWindowPoints + Enum/Dialog (`tools/decomp_notes_wave187_mapwindow_enum_dialog.md`). | 10 | 10 |
| 186 | GetActiveWindow + GetUpdateRect (`tools/decomp_notes_wave186_activewindow_updaterect.md`). | 7 | 7 |
| 185 | WindowLinux + SendDlgItemMessage (`tools/decomp_notes_wave185_wnd_dlgitem_frameextents.md`). | 14 | 14 |
| 184 | CursorPos + SetFocus_Checked (`tools/decomp_notes_wave184_cursor_setfocus_checked.md`). | 6 | 6 |
| 183 | GetFocus + WindowLinux (`tools/decomp_notes_wave183_getfocus_wndlinux.md`). | 4 | 4 |
| 182 | SetFocus + SDL wnd (`tools/decomp_notes_wave182_setfocus_sdl_wnd.md`). | 6 | 6 |
| 181 | IsIconic/Show/SetText (`tools/decomp_notes_wave181_isiconic_show_settext.md`). | 7 | 7 |
| 180 | Wnd SDL sync (`tools/decomp_notes_wave180_wnd_sdl_sync.md`). | 4 | 4 |
| 179 | Wnd SetPosition/SetSize (`tools/decomp_notes_wave179_wnd_setpos_size.md`). | 2 | 2 |
| 178 | MouseMove/Wheel/buttons (`tools/decomp_notes_wave178_mousemove_wheel_buttons.md`). | 5 | 5 |
| 177 | mouse/kbd filters + buttons (`tools/decomp_notes_wave177_mouse_kbd_filters_buttons.md`). | 4 | 4 |
| 176 | MsgPost + NCCalcSize (`tools/decomp_notes_wave176_msgpost_nccalcsize.md`). | 7 | 7 |
| 175 | Class atom table (`tools/decomp_notes_wave175_class_atom_table.md`). | 2 | 2 |
| 174 | PropStore insert + time thunk (`tools/decomp_notes_wave174_propstore_insert_time_thunk.md`). | 2 | 2 |
| 173 | RegisterClassExA core (`tools/decomp_notes_wave173_registerclass_core.md`). | 1 | 0 |
| 172 | AudioClient dtor + GetClassInfoA (`tools/decomp_notes_wave172_audioclient_dtor_getclassinfo.md`). | 2 | 1 |
| 171 | AudioUnit Pause/Stop (`tools/decomp_notes_wave171_audiounit_pause_stop.md`). | 2 | 2 |
| 170 | AudioUnit Start/Drain (`tools/decomp_notes_wave170_audiounit_start_drain.md`). | 3 | 3 |
| 169 | AudioClientImp Int helpers (`tools/decomp_notes_wave169_audioclient_int_helpers.md`). | 3 | 3 |
| 168 | PropStore GetAt + RenderBuffer (`tools/decomp_notes_wave168_propstore_getat_renderbuf.md`). | 4 | 4 |
| 167 | OpenPropertyStore (`tools/decomp_notes_wave167_openpropertystore.md`). | 2 | 2 |
| 166 | SPIW + PropertyStore GetValue (`tools/decomp_notes_wave166_spi_w_propstore.md`). | 2 | 2 |
| 165 | MMDeviceImp Activate/GetId (`tools/decomp_notes_wave165_mmdevice_activate_getid.md`). | 3 | 3 |
| 164 | MMDeviceCollection (`tools/decomp_notes_wave164_mmdevice_collection.md`). | 3 | 3 |
| 163 | MMDeviceEnumerator helpers (`tools/decomp_notes_wave163_mmdevice_enum_helpers.md`). | 6 | 5 |
| 162 | mixer + EnumAudioEndpoints (`tools/decomp_notes_wave162_mixer_mmeenum.md`). | 4 | 4 |
| 161 | Invalidate/Redraw/IsChild (`tools/decomp_notes_wave161_invalidate_redraw_ischild.md`). | 5 | 5 |
| 160 | GetQueueStatus/hooks/msg-queue (`tools/decomp_notes_wave160_queue_hooks_msgint.md`). | 9 | 9 |
| 143 | htons/gethostname/AsyncSelect (`tools/decomp_notes_wave143_winsock_htons_async.md`). | 5 | 5 |
| 142 | socket/SocketWait/htonl (`tools/decomp_notes_wave142_socket_wait_htonl.md`). | 8 | 8 |
| 141 | Attribute dtor + IntPtr compare (`tools/decomp_notes_wave141_tixml_attr_dtor.md`). | 3 | 3 |
| 140 | TiXmlHandle nav + Element Print (`tools/decomp_notes_wave140_tixml_handle.md`). | 9 | 9 |
| 139 | Attribute Print/Parse + UTF8 (`tools/decomp_notes_wave139_tixml_parse_print.md`). | 6 | 6 |
| 138 | Attribute ctor + dtors/CopyTo (`tools/decomp_notes_wave138_tixml_attr_dtors.md`). | 6 | 6 |
| 137 | Element/Declaration ctors (`tools/decomp_notes_wave137_tixml_element_ctors.md`). | 7 | 7 |
| 136 | ReplaceChild/InsertEndChild/Clones (`tools/decomp_notes_wave136_tixml_replace_clone.md`). | 9 | 9 |
| 135 | TiXmlUnknown::Clone + CopyValueFieldsTo (`tools/decomp_notes_wave135_tixml_unknown_clone.md`). | 2 | 2 |
| 134 | TiXml ByName siblings + Attr Print (`tools/decomp_notes_wave134_tixml_siblings.md`). | 7 | 7 |
| 133 | TiXml visitor/indent (`tools/decomp_notes_wave133_tixml_visitor_indent.md`). | 8 | 8 |
| 132 | TiXml Accept/CopyTo (`tools/decomp_notes_wave132_tixml_copyto_accept.md`). | 4 | 4 |
| 131 | TiXmlString ops + Clone/Print (`tools/decomp_notes_wave131_tixml_string_clone.md`). | 9 | 9 |
| 130 | TiXml Clone/Accept/DeleteChildren (`tools/decomp_notes_wave130_tixml_clone_accept.md`). | 8 | 8 |
| 129 | TiXml Clear/Document/QueryAttr (`tools/decomp_notes_wave129_tixml_doc_attr.md`). | 14 | 14 |
| 128 | TiXml nav/Attribute/SaveFile (`tools/decomp_notes_wave128_tixml_api.md`). | 14 | 14 |
| 127 | GL begin-mode + glyph list (`tools/decomp_notes_wave127_glbegin_glyphlist.md`). | 3 | 3 |
| 126 | Registry XML SetValue + hex encode (`tools/decomp_notes_wave126_registry_xml_setvalue.md`). | 4 | 4 |
| 125 | Registry XML nav + hex codecs (`tools/decomp_notes_wave125_registry_xml_values.md`). | 11 | 11 |
| 124 | Registry open-key refs + XML (`tools/decomp_notes_wave124_registry_xml.md`). | 7 | 7 |
| 123 | PrimitiveType + FontCache lifecycle (`tools/decomp_notes_wave123_primtype_fontcache.md`). | 8 | 8 |
| 122 | FontCache remove/get + TextMetrics (`tools/decomp_notes_wave122_fontcache_textmetrics.md`). | 6 | 6 |
| 121 | Rectangle + AddFontMem + FontCache (`tools/decomp_notes_wave121_rectangle_fontmem.md`). | 6 | 6 |
| 120 | DC slot/DeviceCaps/Charset/Gamma (`tools/decomp_notes_wave120_dcslot_charset_gamma.md`). | 5 | 5 |
| 119 | VPFS path/unpack + MSAA ToString + DrawIconEx (`tools/decomp_notes_wave119_vpfs_d3dmsaa_drawicon.md`). | 4 | 4 |
| 118 | SysColor/SolidBrush/MsgWait/LoadIcon (`tools/decomp_notes_wave118_syscolor_solidbrush.md`). | 5 | 5 |
| 117 | SetPixel/FillRect/TextOutA (`tools/decomp_notes_wave117_setpixel_fillrect.md`). | 6 | 6 |
| 116 | MapMode/Viewport/PenIndirect/fonts (`tools/decomp_notes_wave116_mapmode_viewport_pen.md`). | 10 | 10 |
| 115 | CreateCompatibleBitmap + CreateBitmap (`tools/decomp_notes_wave115_createcompatiblebitmap.md`). | 2 | 2 |
| 114 | CreatePalette + Gdi_AllocDC (`tools/decomp_notes_wave114_createpalette_allocdc.md`). | 2 | 2 |
| 113 | GlobalFindAtom A/W + Atom_Intern (`tools/decomp_notes_wave113_globalfindatom.md`). | 3 | 3 |
| 112 | CancelDC + GlobalGetAtomNameA (`tools/decomp_notes_wave112_canceldc_globalatom.md`). | 2 | 2 |
| 111 | GetCharABCWidthsI + Gdi Get/SetDCSelectedObject (`tools/decomp_notes_wave111_abcwidthsi_dc_selected.md`). | 3 | 3 |
| 110 | GetCharABCWidthsW/FloatW + GetCharWidth32W (`tools/decomp_notes_wave110_char_abc_width.md`). | 3 | 3 |
| 109 | WarnUnimplementedStub + GetPixel + GetFontLanguageInfo (`tools/decomp_notes_wave109_unimplemented_getpixel_fontlang.md`). | 3 | 3 |
| 108 | WarnIncompleteStub + PS3 GLSL inputs + ExtTextOutW gate + Get/SetROP2 (`tools/decomp_notes_wave108_stub_ps3_rop2.md`). | 5 | 5 |
| 107 | WaveInDevice_Start* + MsgQueue_Post (+ socket CSV sync) (`tools/decomp_notes_wave107_wavein_msgpost_csv_sync.md`). | 3 | 3 |
| 106 | CreateRectRgn + SaveDC/RestoreDC + Gdi_IsValidDC (`tools/decomp_notes_wave106_rectrgn_savedc.md`). | 4 | 4 |
| 105 | SetTextColor/SetBkColor/SetBkMode + Get/SetTextAlign (`tools/decomp_notes_wave105_dc_text_bk.md`). | 5 | 5 |
| 104 | CreatePen + CreateBrushIndirect (`tools/decomp_notes_wave104_createpen_brush.md`). | 2 | 2 |
| 103 | GetMessageA (`tools/decomp_notes_wave103_getmessage.md`). | 1 | 1 |
| 102 | IsCharLowerA + GamepadForceFeedback_Shutdown + D3D present/MSAA helpers (`tools/decomp_notes_wave102_ischarlower_ff_d3d.md`). | 4 | 4 |
| 101 | WaitMessage + TranslateMessage + PostQuitMessage (`tools/decomp_notes_wave101_wait_translate_postquit.md`). | 3 | 3 |
| 100 | DI Gamepad/Keyboard/Mouse dtors + GamepadMapping_ParsePlatformBinding (`tools/decomp_notes_wave100_di_dtors_gamepadmap.md`). | 4 | 4 |
| 99 | CreateCompatibleDC + VPFS Close/IsArchived/Convert + BitBlt + Gdi_GetDCForWindow (`tools/decomp_notes_wave99_createdc_vpfs_bitblt.md`). | 6 | 5 (+1 rename) |
| 98 | GetMessageTime + MessageBoxA + MapVirtualKey(Ex) + GetKeyboardLayout (`tools/decomp_notes_wave98_msgtime_msgbox_mapvk.md`). | 5 | 5 |
| 97 | IntersectRect + CharUpper/Lower(A/W/Buff) + IsCharAlpha(A/W) + IsCharLowerW (`tools/decomp_notes_wave97_intersect_char.md`). | 12 | 12 |
| 96 | RECT helpers Copy/Equal/PtIn/Set/Empty/Offset/IsEmpty/Inflate (`tools/decomp_notes_wave96_rect_apis.md`). | 8 | 8 |
| 95 | GetDlgItem + GetWindowTextA + GetClassNameA + EnableWindow + MoveWindow + GetWindowThreadProcessId (`tools/decomp_notes_wave95_dlgitem_text_enable_move.md`). | 6 | 6 |
| 94 | GetDesktopWindow + Get/SetForeground + Window/Client rect + Screen/ClientToScreen + Placement/Info (`tools/decomp_notes_wave94_window_rect_fg_placement.md`). | 9 | 9 |
| 93 | GetParent + GetDlgCtrlID (`tools/decomp_notes_wave93_getparent_dlgctrlid.md`). | 2 | 2 |
| 92 | IsWindow / Visible / Enabled (`tools/decomp_notes_wave92_iswindow.md`). | 3 | 3 |
| 91 | RegisterClassW + GetClassInfoW (`tools/decomp_notes_wave91_registerclass_getclassinfo.md`). | 2 | 2 |
| 90 | LoadImage A/W + LoadBitmapA + LoadIconA type fix (`tools/decomp_notes_wave90_loadimage_icon_bitmap.md`). | 4 | 3 (+1 rename fix) |
| 89 | ReleaseDC + CreateFont A/W + font/charset (`tools/decomp_notes_wave89_font_dc_charset.md`). | 9 | 9 |
| 88 | GDI DeleteDC + ExtTextOutA + text-extent (`tools/decomp_notes_wave88_gdi_text_dc.md`). | 6 | 6 |
| 87 | MoveFile(Ex)/ReplaceFile/GetFullPathName (`tools/decomp_notes_wave87_move_replace_fullpath.md`). | 7 | 7 |
| 86 | DiskFree/TempFile A + env/volume/VPFS (`tools/decomp_notes_wave86_disk_temp_env.md`). | 8 | 8 |
| 85 | CoTaskMem* + display/resource A/W + winpe/MSAA (`tools/decomp_notes_wave85_com_display_resource.md`). | 18 | 17 (+1 rename) |
| 84 | Co* + GetExitCodeThread + SetThreadPriority (`tools/decomp_notes_wave84_com_thread.md`). | 7 | 2 (+5 renames) |
| 83 | Get/Free EnvironmentStrings (`tools/decomp_notes_wave83_envstrings.md`). | 3 | 3 |
| 82 | GetCommandLine A/W + Set/BuildCommandLineA (`tools/decomp_notes_wave82_cmdline.md`). | 4 | 4 |
| 81 | ExitThread/Process + TerminateProcess + ResumeThread (`tools/decomp_notes_wave81_exit_resume.md`). | 4 | 2 (+2 renames) |
| 80 | GetCurrentProcess(Id) + SetEnvironmentVariableA + GetVersion (`tools/decomp_notes_wave80_process_env.md`). | 4 | 4 |
| 79 | FindClose + DeleteFile + GetTempPath (`tools/decomp_notes_wave79_findclose_delete_temppath.md`). | 6 | 6 |
| 78 | CreateDirectory A/W + CopyFileW (`tools/decomp_notes_wave78_mkdir_copyw.md`). | 3 | 3 |
| 77 | ReadFile/WriteFile + attrs Ex + CreateFileW/Move/Copy (`tools/decomp_notes_wave77_readwrite_copy.md`). | 8 | 8 |
| 76 | SetFilePointerEx + file times/attrs + CreateFileA (`tools/decomp_notes_wave76_filetime_createfile.md`). | 6 | 6 |
| 75 | MapViewOfFile + GetFileAttributesA + SetFilePointer (`tools/decomp_notes_wave75_mapview_fileattrs.md`). | 4 | 4 |
| 74 | CreateFileMapping/MapView/Unmap + GetFileSize (`tools/decomp_notes_wave74_mapping_filesize.md`). | 11 | 11 |
| 73 | GetACP/OEMCP/CPInfo + overlapped/file-mapping (`tools/decomp_notes_wave73_acp_overlapped.md`). | 8 | 6 (+2 renames) |
| 72 | QPC + GetTickCount/timeGetTime + RtlGetNtVersionNumbers (`tools/decomp_notes_wave72_qpc_tick.md`). | 8 | 8 |
| 71 | LoadLibrary + GetModuleHandleEx + time APIs (`tools/decomp_notes_wave71_loadlibrary_time.md`). | 10 | 5 (+5 renames) |
| 70 | Get/SetLastError + thread id + unique Imp (`tools/decomp_notes_wave70_lasterror_imp.md`). | 9 | 4 (+5 placeholder upgrades) |
| 69 | Wait/Sleep + InitCriticalSection + SList (`tools/decomp_notes_wave69_wait_cs_slist.md`). | 15 | 13 (+2 placeholder upgrades) |
| 68 | Virtual* + Sync Event/Mutex/Interlocked (`tools/decomp_notes_wave68_virtual_sync_interlocked.md`). | 35 | 32 (+3 placeholder upgrades) |
| 67 | eON_Heap* thin wrappers + Lock/QueryInformation (`tools/decomp_notes_wave67_heap_wrappers.md`). | 12 | 12 |
| 66 | Global*/Local* via MemoryHandleManager (`tools/decomp_notes_wave66_global_local.md`). | 16 | 16 |
| 65 | SetupRenderPipeline + OpenGL dtor/gamma/WorkArea + AddResourceToPool (`tools/decomp_notes_wave65_setuppipeline_opengl.md`). | 6 | 0 (placeholder upgrades) |
| 64 | MemoryHandleManager Global* surface (`tools/decomp_notes_wave64_memoryhandlemanager.md`). | 10 | 8 |
| 63 | VirtualQuery/Ex + MemoryHandleManager_Destroy (`tools/decomp_notes_wave63_virtualquery_memhandle.md`). | 3 | 2 |
| 62 | clipboard Open/Close/Data + LongPathA (`tools/decomp_notes_wave62_clipboard_longpath.md`). | 11 | 11 |
| 61 | GL enum/table, XAudio graph thread, hostname (`tools/decomp_notes_wave61_gl_xaudio_host.md`). | 5 | 5 |
| 60 | GL loaders, ForcedOpenGL, PE/registry helpers (`tools/decomp_notes_wave60_gl_loaders_vfs.md`). | 13 | 13 |
| 59 | dumps, exception unwind, display/class APIs (`tools/decomp_notes_wave59_dumps_exception_display.md`). | 25 | 25 |
| 58 | shader emit/convert_*, GUID/D3D dump logs (`tools/decomp_notes_wave58_shader_emit_convert_logs.md`). | 41 | 41 |
| 57 | kernel32 lifecycle, D3D* ToString, audio/DI (`tools/decomp_notes_wave57_kernel32_d3d_tostring_audio.md`). | 28 | 28 |
| 56 | eON paths, texm* stubs, kernel32 attach (`tools/decomp_notes_wave56_paths_texm_kernel32.md`). | 31 | 31 |
| 55 | keycodes, shader convert_*, XAudio mastering stubs, Imp ctors (`tools/decomp_notes_wave55_keycode_shader_xaudio_imps.md`). | 32 | 32 |
| 54 | CheckDeviceFormat, ShaderData preparsing, VPFS_CloseHandle, winsock (`tools/decomp_notes_wave54_shader_checkdevice_winsock.md`). | 19 | 19 |
| 53 | eON_Startup/window/log, gamepad/udev, DrawPrimitive_RenderArrays, WaveIn (`tools/decomp_notes_wave53_eon_gamepad_udev_draw.md`). | 21 | 21 |
| 52 | DirectInput8Create/A/W, KeyDown/Up, shader_pch_load, GTRACE, stream bounds (`tools/decomp_notes_wave52_di_keycode_shader_gtrace.md`). | 10 | 10 |
| 51 | OpenGL thread/error + shader_pch savers + FreeLibrary (`decomp/opengl_pch_freelibrary_note.txt`). OpenGLThreadStart; ReportError; 5 pch savers; FreeLibrary(+AndExitThread); d3d9 GetAdapterIdentifier thunk. | 10 | 10 |
| 50 | Registry Ex leftovers + thin wrappers + Stdout debug writer (`decomp/registry_ex_wrappers_note.txt`). Delete/Enum/Query/Set/Open/QueryInfo Ex; Open/Delete/Enum/Close/DeleteValue; OpenGLDebugWriter_Stdout::Write. | 20 | 20 |
| 49 | Heap_Create/Validate + RegCreateKeyEx A/W + crumbs (`decomp/heap_reg_crumbs_note.txt`). Heap pair; RegCreateKey(Ex) A/W; OpenGLDebugWriter_File::Write; WindowLinux SetWindowPosition; GamepadLinux UpdateControlValues; DSC Initialize. | 10 | 10 |
| 48 | user32/GDI leftovers + clipboard/OpenURL/screensaver + GetAdapterIdentifier (`decomp/gdi_clipboard_adapterid_note.txt`). 6 GDI/user32; clipboard chain; OpenURL; SPI screensaver; Direct3D9Imp::GetAdapterIdentifier. | 14 | 14 |
| 47 | user32 leftovers + cursor internals + ProcessKeyUp (`decomp/user32_cursor_processkeyup_note.txt`). HookEx A/W, DefWindowProcW, GetDoubleClickTime, GetAsync/GetKeyState; LoadStandardCursor + LoadCursorW; KeyboardEventReceiver::ProcessKeyUp. | 9 | 9 |
| 46 | Same-method d3d9device wrappers LEAVE + cursor C-API + leave-alones (`decomp/wrappers_cursor_leave_note.txt`). 11 eON_* cursor APIs; 8 Imp wrappers stay d3d9device_*. | 11 | 11 |
| 45 | Bulk inline d3d9device→Imp + Set*ShaderConstant* + ShowCursor helpers (`decomp/inline_device_shader_showcursor_note.txt`). 81 COM→Imp; 6 Constant wrappers; 2 eON cursor helpers. 8 same-method wrappers left as d3d9device_*. | 89 | 2 (+87 renames) |
| 44 | Imp ctors + png_image_write + inline device→Imp (`decomp/imp_ctors_png_write_inline_device_note.txt`). 15 ctors; 2 png write; 4 inline Get/Set/Test. | 21 | 17 (+4 renames) |
| 43 | Harder D3D crumbs + libpng body-lock + DirectSound/Audio/MM Imp ctors (`decomp/d3d_png_com_wave43_note.txt`). | 23 | 23 |
| 42 | d3d9device→Imp hand-read + libpng unique APIs (`decomp/d3d_imp_png_wave42_note.txt`). 7 Device Imp methods; 9 resource ctors; 5 Initialize; 13 png_*. fs/vpfs A/W empty. | 34 | 34 |
| 41 | Shared-cluster LEAVE + Direct3DDevice9Imp::SetRenderState + OGLC_PrintHelp + LinkedProgramData cache pair (`decomp/shared_clusters_setrenderstate_oglc_note.txt`). Splits still empty. | 4 | 4 |
| 40 | ToUnicodeEx/ToAsciiEx + GetUserObjectInformation A/W + fs_unlink (`decomp/tounicode_userobject_unlink_note.txt`). | 5 | 5 |
| 39 | File version A/W/Ex stubs + fs/vpfs SetFilePointer/GetFileAttributesEx/CreateFile (`decomp/versioninfo_fs_pointer_note.txt`). | 13 | 13 |
| 38 | thread/window/fileinfo + sync CreateMutex/Semaphore/WaitableTimer (`decomp/thread_window_sync_timer_note.txt`). | 10 | 7 (+3 renames) |
| 37 | VPFS_OpenExec + FatalExit + D3D9_FormatToPixelSize + CreateMutex/Event/Semaphore A/W (`decomp/vpfs_openexec_sync_creates_note.txt`). | 9 | 9 |
| 36 | Remaining sockets + VirtualProtect + clipboard/console + WSAWaitResultToString (`decomp/sockets_virtualprotect_clipboard_note.txt`). | 7 | 7 |
| 34 | Win32 C-API district + DeterminePrimitiveType (`decomp/win32_capi_and_primitive_type_note.txt`). 34 unique ApiName logs (eON_/ole32); primitive-type switch hand-read; leave-alones confirmed. | 35 | 35 |
| 33 | VPFS handle district + CoSetProxyBlanket; leave-alones confirmed (`decomp/vpfs_handles_and_cosetproxy_note.txt`). 10 unique invalid-handle VPFS_* wrappers; CoSetProxyBlanket stub; dropped VPFS_registry.vpfsdb filename. | 11 | 11 |
| 32 | eON_GetCOMObjects + CoInitializeEx/Security + 25 module_hex assert upgrades + 16 unique eON_* C wrappers (`decomp/eon_comobjects_and_module_upgrades_note.txt`). Dropped ambiguous Surface UploadOpenGLObjectData. | 44 | 19 (+25 renames) |
| 31 | COT COM tracker + XAudio leftovers (`decomp/cot_and_xaudio_leftovers_note.txt`). Cot::{Create,AddRef,Release,Destroy,ReportLeaks} from COT messages; GetAudioGraphMutex assert upgrade; CancelOperations pair. Largest FUN_ tables stay SKIP. | 8 | 7 (+1 rename) |
| 30 | XAudio2 opcodes 0–6 + Imp ctor (`decomp/xaudio_opcodes_0_6_note.txt`). Jumptable locks Real_SetFilterParameters/ChannelVolumes/OutputMatrix/Volume; Enable/DisableEffect and SetEffectParameters wrappers; XAudio2Imp::XAudio2Imp. Accelerators PLT cluster SKIP (STL helpers). | 8 | 8 |
| 29 | XAudio2 GetVoiceDetails / GetOutputFilterParameters / SetSourceSampleRate (`decomp/xaudio_voice_details_note.txt`). Details copies 3 voice fields; GetOutputFilterParameters is the read twin of the named setter; SetSourceSampleRate writes the +0xc4 field GetSamplesNeeded reads. Return-0 stubs, constant-1 stub, and GLSL producers stay SKIP. | 3 | 3 |
| 28 | XAudio2 Start/Stop/Discontinuity (`decomp/xaudio_opcodes_7910_note.txt`). Opcodes 7/9/10 locked via jumptable wiring: Start (buffer-pending play flag), Discontinuity (zero SamplesPlayed), Stop (clear play flag + release; Flags bit 0x20 = XAUDIO2_PLAY_TAILS). 6 names. | 6 | 6 |
| 27 | XAudio2 FrequencyRatio pair (`decomp/xaudio_frequency_ratio_note.txt`). Opcode 8 locked without the rest of the private enum: float-clamp queue wrapper queues op 8 -> ExecuteOperation case 8 passes the float into the commit stub that stores voice+4; adjacent Get reads voice+4. 3 names: `SetFrequencyRatio`, `GetFrequencyRatio`, `Real_SetFrequencyRatio`. Other opcode-7/9/10 wrappers stay unnamed. | 3 | 3 |
| 26 | DirectInput class-prefix resolution (renames, not new names): per-class vtable anchors in `agent/vtables/dinputgamepad.tsv` pin the gamepad/keyboard/mouse runs to their concrete classes; shared slots claimed by multiple runs keep the base class. 27 renames `DirectInputDeviceImp::X` → `DirectInput{Gamepad,Keyboard,Mouse}DeviceImp::X`, applied through the PyGhidra MCP gateway. Evidence: `decomp/vtable_class_prefix_note.txt`. Seeds re-synced from the live project. | 27 | 0 (scoreboard corrected to 2,243) |
| 25 | Breakpad source match, completed (`decomp/breakpad_source_match_note4.txt`; 3 names, body-verified against the era-appropriate upstream revision 9f150ee33e99 where the constructor asserts sit at lines 0x8c/0x8d): `WriteMinidumpImpl` (blob-size test = `sizeof(CrashContext)`, the five copied words = si_addr/si_signo/tid), `WriteMinidump` (path,pid,blob,size — builds the dumper, owns two empty lists), `WriteMinidump` (path,mappings,appmem,dumper — takes the dumper as an arg, owns no lists). `0400939e` stays `FUN_`: it is the cold assert stub for the inlined constructor. | 3 | 3 |
| 24 | XAudio2 completion pass (14 bodies hand-read, `agent/wave24_decompiles.txt`). 2 names: `SubmitSampleBuffer` (pushes a 9-dword XAUDIO2_BUFFER into the buffer vector under the voice mutex — source-voice-only storage) and `GetState` (sums packet counts across the pending/queued/playing buffer vectors, ÷36 element math, fills the state struct). The `ExecuteOperation` opcode switch (`agent/wave24_executeop.txt`) pairs queued opcodes with commit stubs but the opcode→method enum is Volition-private, so the four queue wrappers (opcodes 7–10) and the trivial field getters stay unnamed. | 2 | 2 |
| 23 | XAudio2 hand-read (12 names): engine methods locked by assert-named constructors (`CreateMasteringVoice`/`CreateSourceVoice`/`CreateSubmixVoice` call the named ctors; `DestroyMasteringVoice` nulls the stored voice; `CommitChanges` drains the op queue through the named `ExecuteOperation`); voice Set/Get pairs locked by assert anchors (`SetVolume`/`GetVolume` on field +0x5c, `SetChannelVolumes`/`GetChannelVolumes`, `SetOutputMatrix`/`GetOutputMatrix` — documented pair adjacency, cross-checked against the vtable run at shift −9); `SetFilterParameters` carries its own upstream assert string; `QueueOperation` is the op-queue appender the setters call. The aligner's ≥3-anchor rule can't fire on this run (implementation vtable order ≠ documented IDL order; anchors sit at slots 1–6, needing a negative shift). | 12 | 12 |
| 22 | Hand-read decompiles: OpenGL context dump helpers (`agent/wave22_decompiles.txt`, 15 bodies). All SKIP under the rules — an instruction/call mix is not a name; none has a `Class::Method` assert. Evidence kept, no names. | 0 | 0 |
| 21 | Tinyxml source match, continued (`decomp/tinyxml_source_match_note3.txt`; 2 names, both source-match rows; checker holds them — the FindOrCreate signature belongs to the inlined callee) | 2 | 2 |
| 20 | Tinyxml source match, continued (`decomp/tinyxml_source_match_note2.txt`; 15 rows, 9 new names — 6 were module-prefix upgrades; assert-line matches verified against upstream) | 15 | 9 |
| 19 | GLEW 2012-era sweep (glew-1.8.0 pinned specs; modern gl.xml misses extensions whose lists changed since; bodies verified) | 20 | 20 |
| 18 | GLEW extension-init sweep (all remaining exact gl.xml require-block matches; bodies verified by spot-check) | 62 | 62 |
| 17 | GLEW extension-init completion (string sets match gl.xml require blocks exactly; bodies load exactly those functions) | 8 | 8 |
| 16 | libpng source match (upstream pngread.c bodies) | 2 | 2 |
| 15 | Breakpad source match (upstream bodies; 4 assert-only stubs stay unnamed) | 2 | 2 |
| 14 | Tinyxml source match (upstream bodies verified against SourceForge tinyxml git master; inlined-assert collisions resolved by body) | 5 | 5 |
| 13 | Hand-read decompiles: GLEW extension sets completed (`_glewInit_GL_VERSION_1_4`, `_glewInit_GL_NV_half_float` — string sets match the Khronos registry exactly), enum-to-string decoders (`OpenGL_DataTypeToString`, `OpenGL_BufferToString`, `OpenGL_InternalFormatToString`, `D3D9_FormatToString`, `user32_MessageToString`), `OpenGL_LogState_CompressedTexture`, `eON_ShaderData::GenerateVaryingAssignments` | 9 | 9 |
| 12 | GLEW loader identification: the extension-set init functions match GLEW's generated `_glewInit_*`/`glxewInit`/`glewInit` bodies (string sets match the Khronos registry per extension; verified against GLEW master) | 10 | 10 |
| 11 | Empty batch — `names_batch11.tsv` has no rows. | 0 | 0 |
| 10 | COM vtable alignment, parser fixed (IDL `[id(N)]` attrs, `IDirectSound3DBuffer` alias, `module_Method` anchors, ≥3-anchor rule enforced) | 102 | 49 (53 rows hit wave-9 names) |
| 9 | COM vtable alignment (DirectInputDevice8 runs, ≥3-anchor rule) | 119 | 53 |
| 8 | Local-model loop (`llm_work.py`, checker-verified) | 25 | 25 |
| 7 | Short names qualified to `Class::Method` when that method is the only matching signature | 249 | 0 (renames) |
| 6 | D3D9 vtable alignment (assert anchors, documented method order) | 102 | 15 |
| 5 | Message-style asserts | 103 | 103 |
| 4 | Binary-wide signature asserts | 462 | 2 |
| 3 | Assert signatures (VPFS district) | 22 | 0 (renames) |
| 2 | Source-path asserts → module prefixes | 721 | 721 |
| 1 | Hand-read decompiles (zstream, tinyxml, shader PCH) | 10 | 10 |

