# Makefile generated by XPJ for linux64
-include Makefile.custom
ProjectName = SnippetMBP
SnippetMBP_cppfiles   += ./../../SnippetCommon/ClassicMain.cpp
SnippetMBP_cppfiles   += ./../../SnippetMBP/SnippetMBP.cpp
SnippetMBP_cppfiles   += ./../../SnippetMBP/SnippetMBPRender.cpp

SnippetMBP_cpp_debug_dep    = $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetMBP_cppfiles)))))
SnippetMBP_c_debug_dep      = $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetMBP_cfiles)))))
SnippetMBP_debug_dep      = $(SnippetMBP_cpp_debug_dep) $(SnippetMBP_c_debug_dep)
-include $(SnippetMBP_debug_dep)
SnippetMBP_cpp_checked_dep    = $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetMBP_cppfiles)))))
SnippetMBP_c_checked_dep      = $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetMBP_cfiles)))))
SnippetMBP_checked_dep      = $(SnippetMBP_cpp_checked_dep) $(SnippetMBP_c_checked_dep)
-include $(SnippetMBP_checked_dep)
SnippetMBP_cpp_profile_dep    = $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetMBP_cppfiles)))))
SnippetMBP_c_profile_dep      = $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetMBP_cfiles)))))
SnippetMBP_profile_dep      = $(SnippetMBP_cpp_profile_dep) $(SnippetMBP_c_profile_dep)
-include $(SnippetMBP_profile_dep)
SnippetMBP_cpp_release_dep    = $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetMBP_cppfiles)))))
SnippetMBP_c_release_dep      = $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetMBP_cfiles)))))
SnippetMBP_release_dep      = $(SnippetMBP_cpp_release_dep) $(SnippetMBP_c_release_dep)
-include $(SnippetMBP_release_dep)
SnippetMBP_debug_hpaths    := 
SnippetMBP_debug_hpaths    += ./../../../Include
SnippetMBP_debug_lpaths    := 
SnippetMBP_debug_lpaths    += ./../../../Lib/linux64
SnippetMBP_debug_lpaths    += ./../../lib/linux64
SnippetMBP_debug_lpaths    += ./../../../Bin/linux64
SnippetMBP_debug_lpaths    += ./../../lib/linux64
SnippetMBP_debug_defines   := $(SnippetMBP_custom_defines)
SnippetMBP_debug_defines   += PHYSX_PROFILE_SDK
SnippetMBP_debug_defines   += RENDER_SNIPPET
SnippetMBP_debug_defines   += _DEBUG
SnippetMBP_debug_defines   += PX_DEBUG
SnippetMBP_debug_defines   += PX_CHECKED
SnippetMBP_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetMBP_debug_libraries := 
SnippetMBP_debug_libraries += SnippetRenderDEBUG
SnippetMBP_debug_libraries += SnippetUtilsDEBUG
SnippetMBP_debug_libraries += PhysX3DEBUG_x64
SnippetMBP_debug_libraries += PhysX3CommonDEBUG_x64
SnippetMBP_debug_libraries += PhysX3CookingDEBUG_x64
SnippetMBP_debug_libraries += PhysX3CharacterKinematicDEBUG_x64
SnippetMBP_debug_libraries += PhysX3ExtensionsDEBUG
SnippetMBP_debug_libraries += PhysX3VehicleDEBUG
SnippetMBP_debug_libraries += PhysXProfileSDKDEBUG
SnippetMBP_debug_libraries += PhysXVisualDebuggerSDKDEBUG
SnippetMBP_debug_libraries += PxTaskDEBUG
SnippetMBP_debug_libraries += SnippetUtilsDEBUG
SnippetMBP_debug_libraries += SnippetRenderDEBUG
SnippetMBP_debug_libraries += GL
SnippetMBP_debug_libraries += GLU
SnippetMBP_debug_libraries += glut
SnippetMBP_debug_libraries += X11
SnippetMBP_debug_libraries += rt
SnippetMBP_debug_libraries += pthread
SnippetMBP_debug_common_cflags	:= $(SnippetMBP_custom_cflags)
SnippetMBP_debug_common_cflags    += -MMD
SnippetMBP_debug_common_cflags    += $(addprefix -D, $(SnippetMBP_debug_defines))
SnippetMBP_debug_common_cflags    += $(addprefix -I, $(SnippetMBP_debug_hpaths))
SnippetMBP_debug_common_cflags  += -m64
SnippetMBP_debug_cflags	:= $(SnippetMBP_debug_common_cflags)
SnippetMBP_debug_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_debug_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_debug_cflags  += -Wno-long-long
SnippetMBP_debug_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_debug_cflags  += -Wno-unused-parameter
SnippetMBP_debug_cflags  += -g3 -gdwarf-2
SnippetMBP_debug_cppflags	:= $(SnippetMBP_debug_common_cflags)
SnippetMBP_debug_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_debug_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_debug_cppflags  += -Wno-long-long
SnippetMBP_debug_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_debug_cppflags  += -Wno-unused-parameter
SnippetMBP_debug_cppflags  += -g3 -gdwarf-2
SnippetMBP_debug_lflags    := $(SnippetMBP_custom_lflags)
SnippetMBP_debug_lflags    += $(addprefix -L, $(SnippetMBP_debug_lpaths))
SnippetMBP_debug_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetMBP_debug_libraries)) -Wl,--end-group
SnippetMBP_debug_lflags  += -lrt
SnippetMBP_debug_lflags  += -Wl,-rpath ./
SnippetMBP_debug_lflags  += -m64
SnippetMBP_debug_objsdir  = $(OBJS_DIR)/SnippetMBP_debug
SnippetMBP_debug_cpp_o    = $(addprefix $(SnippetMBP_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetMBP_cppfiles)))))
SnippetMBP_debug_c_o      = $(addprefix $(SnippetMBP_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetMBP_cfiles)))))
SnippetMBP_debug_obj      = $(SnippetMBP_debug_cpp_o) $(SnippetMBP_debug_c_o)
SnippetMBP_debug_bin      := ./../../../Bin/linux64/SnippetMBPDEBUG

clean_SnippetMBP_debug: 
	@$(ECHO) clean SnippetMBP debug
	@$(RMDIR) $(SnippetMBP_debug_objsdir)
	@$(RMDIR) $(SnippetMBP_debug_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetMBP/debug

build_SnippetMBP_debug: postbuild_SnippetMBP_debug
postbuild_SnippetMBP_debug: mainbuild_SnippetMBP_debug
mainbuild_SnippetMBP_debug: prebuild_SnippetMBP_debug $(SnippetMBP_debug_bin)
prebuild_SnippetMBP_debug:

$(SnippetMBP_debug_bin): $(SnippetMBP_debug_obj) build_SnippetRender_debug build_SnippetUtils_debug 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetMBPDEBUG`
	@$(CCLD) $(SnippetMBP_debug_obj) $(SnippetMBP_debug_lflags) -o $(SnippetMBP_debug_bin) 
	@$(ECHO) building $@ complete!

SnippetMBP_debug_DEPDIR = $(dir $(@))/$(*F)
$(SnippetMBP_debug_cpp_o): $(SnippetMBP_debug_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetMBP_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cppfiles))))))
	@cp $(SnippetMBP_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  rm -f $(SnippetMBP_debug_DEPDIR).d

$(SnippetMBP_debug_c_o): $(SnippetMBP_debug_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetMBP_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cfiles))))))
	@cp $(SnippetMBP_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_debug_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  rm -f $(SnippetMBP_debug_DEPDIR).d

SnippetMBP_checked_hpaths    := 
SnippetMBP_checked_hpaths    += ./../../../Include
SnippetMBP_checked_lpaths    := 
SnippetMBP_checked_lpaths    += ./../../../Lib/linux64
SnippetMBP_checked_lpaths    += ./../../lib/linux64
SnippetMBP_checked_lpaths    += ./../../../Bin/linux64
SnippetMBP_checked_lpaths    += ./../../lib/linux64
SnippetMBP_checked_defines   := $(SnippetMBP_custom_defines)
SnippetMBP_checked_defines   += PHYSX_PROFILE_SDK
SnippetMBP_checked_defines   += RENDER_SNIPPET
SnippetMBP_checked_defines   += NDEBUG
SnippetMBP_checked_defines   += PX_CHECKED
SnippetMBP_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetMBP_checked_libraries := 
SnippetMBP_checked_libraries += SnippetRenderCHECKED
SnippetMBP_checked_libraries += SnippetUtilsCHECKED
SnippetMBP_checked_libraries += PhysX3CHECKED_x64
SnippetMBP_checked_libraries += PhysX3CommonCHECKED_x64
SnippetMBP_checked_libraries += PhysX3CookingCHECKED_x64
SnippetMBP_checked_libraries += PhysX3CharacterKinematicCHECKED_x64
SnippetMBP_checked_libraries += PhysX3ExtensionsCHECKED
SnippetMBP_checked_libraries += PhysX3VehicleCHECKED
SnippetMBP_checked_libraries += PhysXProfileSDKCHECKED
SnippetMBP_checked_libraries += PhysXVisualDebuggerSDKCHECKED
SnippetMBP_checked_libraries += PxTaskCHECKED
SnippetMBP_checked_libraries += SnippetUtilsCHECKED
SnippetMBP_checked_libraries += SnippetRenderCHECKED
SnippetMBP_checked_libraries += GL
SnippetMBP_checked_libraries += GLU
SnippetMBP_checked_libraries += glut
SnippetMBP_checked_libraries += X11
SnippetMBP_checked_libraries += rt
SnippetMBP_checked_libraries += pthread
SnippetMBP_checked_common_cflags	:= $(SnippetMBP_custom_cflags)
SnippetMBP_checked_common_cflags    += -MMD
SnippetMBP_checked_common_cflags    += $(addprefix -D, $(SnippetMBP_checked_defines))
SnippetMBP_checked_common_cflags    += $(addprefix -I, $(SnippetMBP_checked_hpaths))
SnippetMBP_checked_common_cflags  += -m64
SnippetMBP_checked_cflags	:= $(SnippetMBP_checked_common_cflags)
SnippetMBP_checked_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_checked_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_checked_cflags  += -Wno-long-long
SnippetMBP_checked_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_checked_cflags  += -Wno-unused-parameter
SnippetMBP_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetMBP_checked_cppflags	:= $(SnippetMBP_checked_common_cflags)
SnippetMBP_checked_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_checked_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_checked_cppflags  += -Wno-long-long
SnippetMBP_checked_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_checked_cppflags  += -Wno-unused-parameter
SnippetMBP_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetMBP_checked_lflags    := $(SnippetMBP_custom_lflags)
SnippetMBP_checked_lflags    += $(addprefix -L, $(SnippetMBP_checked_lpaths))
SnippetMBP_checked_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetMBP_checked_libraries)) -Wl,--end-group
SnippetMBP_checked_lflags  += -lrt
SnippetMBP_checked_lflags  += -Wl,-rpath ./
SnippetMBP_checked_lflags  += -m64
SnippetMBP_checked_objsdir  = $(OBJS_DIR)/SnippetMBP_checked
SnippetMBP_checked_cpp_o    = $(addprefix $(SnippetMBP_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetMBP_cppfiles)))))
SnippetMBP_checked_c_o      = $(addprefix $(SnippetMBP_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetMBP_cfiles)))))
SnippetMBP_checked_obj      = $(SnippetMBP_checked_cpp_o) $(SnippetMBP_checked_c_o)
SnippetMBP_checked_bin      := ./../../../Bin/linux64/SnippetMBPCHECKED

clean_SnippetMBP_checked: 
	@$(ECHO) clean SnippetMBP checked
	@$(RMDIR) $(SnippetMBP_checked_objsdir)
	@$(RMDIR) $(SnippetMBP_checked_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetMBP/checked

build_SnippetMBP_checked: postbuild_SnippetMBP_checked
postbuild_SnippetMBP_checked: mainbuild_SnippetMBP_checked
mainbuild_SnippetMBP_checked: prebuild_SnippetMBP_checked $(SnippetMBP_checked_bin)
prebuild_SnippetMBP_checked:

$(SnippetMBP_checked_bin): $(SnippetMBP_checked_obj) build_SnippetRender_checked build_SnippetUtils_checked 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetMBPCHECKED`
	@$(CCLD) $(SnippetMBP_checked_obj) $(SnippetMBP_checked_lflags) -o $(SnippetMBP_checked_bin) 
	@$(ECHO) building $@ complete!

SnippetMBP_checked_DEPDIR = $(dir $(@))/$(*F)
$(SnippetMBP_checked_cpp_o): $(SnippetMBP_checked_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetMBP_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cppfiles))))))
	@cp $(SnippetMBP_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  rm -f $(SnippetMBP_checked_DEPDIR).d

$(SnippetMBP_checked_c_o): $(SnippetMBP_checked_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetMBP_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cfiles))))))
	@cp $(SnippetMBP_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_checked_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  rm -f $(SnippetMBP_checked_DEPDIR).d

SnippetMBP_profile_hpaths    := 
SnippetMBP_profile_hpaths    += ./../../../Include
SnippetMBP_profile_lpaths    := 
SnippetMBP_profile_lpaths    += ./../../../Lib/linux64
SnippetMBP_profile_lpaths    += ./../../lib/linux64
SnippetMBP_profile_lpaths    += ./../../../Bin/linux64
SnippetMBP_profile_lpaths    += ./../../lib/linux64
SnippetMBP_profile_defines   := $(SnippetMBP_custom_defines)
SnippetMBP_profile_defines   += PHYSX_PROFILE_SDK
SnippetMBP_profile_defines   += RENDER_SNIPPET
SnippetMBP_profile_defines   += NDEBUG
SnippetMBP_profile_defines   += PX_PROFILE
SnippetMBP_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetMBP_profile_libraries := 
SnippetMBP_profile_libraries += SnippetRenderPROFILE
SnippetMBP_profile_libraries += SnippetUtilsPROFILE
SnippetMBP_profile_libraries += PhysX3PROFILE_x64
SnippetMBP_profile_libraries += PhysX3CommonPROFILE_x64
SnippetMBP_profile_libraries += PhysX3CookingPROFILE_x64
SnippetMBP_profile_libraries += PhysX3CharacterKinematicPROFILE_x64
SnippetMBP_profile_libraries += PhysX3ExtensionsPROFILE
SnippetMBP_profile_libraries += PhysX3VehiclePROFILE
SnippetMBP_profile_libraries += PhysXProfileSDKPROFILE
SnippetMBP_profile_libraries += PhysXVisualDebuggerSDKPROFILE
SnippetMBP_profile_libraries += PxTaskPROFILE
SnippetMBP_profile_libraries += SnippetUtilsPROFILE
SnippetMBP_profile_libraries += SnippetRenderPROFILE
SnippetMBP_profile_libraries += GL
SnippetMBP_profile_libraries += GLU
SnippetMBP_profile_libraries += glut
SnippetMBP_profile_libraries += X11
SnippetMBP_profile_libraries += rt
SnippetMBP_profile_libraries += pthread
SnippetMBP_profile_common_cflags	:= $(SnippetMBP_custom_cflags)
SnippetMBP_profile_common_cflags    += -MMD
SnippetMBP_profile_common_cflags    += $(addprefix -D, $(SnippetMBP_profile_defines))
SnippetMBP_profile_common_cflags    += $(addprefix -I, $(SnippetMBP_profile_hpaths))
SnippetMBP_profile_common_cflags  += -m64
SnippetMBP_profile_cflags	:= $(SnippetMBP_profile_common_cflags)
SnippetMBP_profile_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_profile_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_profile_cflags  += -Wno-long-long
SnippetMBP_profile_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_profile_cflags  += -Wno-unused-parameter
SnippetMBP_profile_cflags  += -O3 -fno-strict-aliasing
SnippetMBP_profile_cppflags	:= $(SnippetMBP_profile_common_cflags)
SnippetMBP_profile_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_profile_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_profile_cppflags  += -Wno-long-long
SnippetMBP_profile_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_profile_cppflags  += -Wno-unused-parameter
SnippetMBP_profile_cppflags  += -O3 -fno-strict-aliasing
SnippetMBP_profile_lflags    := $(SnippetMBP_custom_lflags)
SnippetMBP_profile_lflags    += $(addprefix -L, $(SnippetMBP_profile_lpaths))
SnippetMBP_profile_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetMBP_profile_libraries)) -Wl,--end-group
SnippetMBP_profile_lflags  += -lrt
SnippetMBP_profile_lflags  += -Wl,-rpath ./
SnippetMBP_profile_lflags  += -m64
SnippetMBP_profile_objsdir  = $(OBJS_DIR)/SnippetMBP_profile
SnippetMBP_profile_cpp_o    = $(addprefix $(SnippetMBP_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetMBP_cppfiles)))))
SnippetMBP_profile_c_o      = $(addprefix $(SnippetMBP_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetMBP_cfiles)))))
SnippetMBP_profile_obj      = $(SnippetMBP_profile_cpp_o) $(SnippetMBP_profile_c_o)
SnippetMBP_profile_bin      := ./../../../Bin/linux64/SnippetMBPPROFILE

clean_SnippetMBP_profile: 
	@$(ECHO) clean SnippetMBP profile
	@$(RMDIR) $(SnippetMBP_profile_objsdir)
	@$(RMDIR) $(SnippetMBP_profile_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetMBP/profile

build_SnippetMBP_profile: postbuild_SnippetMBP_profile
postbuild_SnippetMBP_profile: mainbuild_SnippetMBP_profile
mainbuild_SnippetMBP_profile: prebuild_SnippetMBP_profile $(SnippetMBP_profile_bin)
prebuild_SnippetMBP_profile:

$(SnippetMBP_profile_bin): $(SnippetMBP_profile_obj) build_SnippetRender_profile build_SnippetUtils_profile 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetMBPPROFILE`
	@$(CCLD) $(SnippetMBP_profile_obj) $(SnippetMBP_profile_lflags) -o $(SnippetMBP_profile_bin) 
	@$(ECHO) building $@ complete!

SnippetMBP_profile_DEPDIR = $(dir $(@))/$(*F)
$(SnippetMBP_profile_cpp_o): $(SnippetMBP_profile_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetMBP_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cppfiles))))))
	@cp $(SnippetMBP_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  rm -f $(SnippetMBP_profile_DEPDIR).d

$(SnippetMBP_profile_c_o): $(SnippetMBP_profile_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetMBP_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cfiles))))))
	@cp $(SnippetMBP_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_profile_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  rm -f $(SnippetMBP_profile_DEPDIR).d

SnippetMBP_release_hpaths    := 
SnippetMBP_release_hpaths    += ./../../../Include
SnippetMBP_release_lpaths    := 
SnippetMBP_release_lpaths    += ./../../../Lib/linux64
SnippetMBP_release_lpaths    += ./../../lib/linux64
SnippetMBP_release_lpaths    += ./../../../Bin/linux64
SnippetMBP_release_lpaths    += ./../../lib/linux64
SnippetMBP_release_defines   := $(SnippetMBP_custom_defines)
SnippetMBP_release_defines   += PHYSX_PROFILE_SDK
SnippetMBP_release_defines   += RENDER_SNIPPET
SnippetMBP_release_defines   += NDEBUG
SnippetMBP_release_libraries := 
SnippetMBP_release_libraries += SnippetRender
SnippetMBP_release_libraries += SnippetUtils
SnippetMBP_release_libraries += PhysX3_x64
SnippetMBP_release_libraries += PhysX3Common_x64
SnippetMBP_release_libraries += PhysX3Cooking_x64
SnippetMBP_release_libraries += PhysX3CharacterKinematic_x64
SnippetMBP_release_libraries += PhysX3Extensions
SnippetMBP_release_libraries += PhysX3Vehicle
SnippetMBP_release_libraries += PhysXProfileSDK
SnippetMBP_release_libraries += PhysXVisualDebuggerSDK
SnippetMBP_release_libraries += PxTask
SnippetMBP_release_libraries += SnippetUtils
SnippetMBP_release_libraries += SnippetRender
SnippetMBP_release_libraries += GL
SnippetMBP_release_libraries += GLU
SnippetMBP_release_libraries += glut
SnippetMBP_release_libraries += X11
SnippetMBP_release_libraries += rt
SnippetMBP_release_libraries += pthread
SnippetMBP_release_common_cflags	:= $(SnippetMBP_custom_cflags)
SnippetMBP_release_common_cflags    += -MMD
SnippetMBP_release_common_cflags    += $(addprefix -D, $(SnippetMBP_release_defines))
SnippetMBP_release_common_cflags    += $(addprefix -I, $(SnippetMBP_release_hpaths))
SnippetMBP_release_common_cflags  += -m64
SnippetMBP_release_cflags	:= $(SnippetMBP_release_common_cflags)
SnippetMBP_release_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_release_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_release_cflags  += -Wno-long-long
SnippetMBP_release_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_release_cflags  += -Wno-unused-parameter
SnippetMBP_release_cflags  += -O3 -fno-strict-aliasing
SnippetMBP_release_cppflags	:= $(SnippetMBP_release_common_cflags)
SnippetMBP_release_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetMBP_release_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetMBP_release_cppflags  += -Wno-long-long
SnippetMBP_release_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetMBP_release_cppflags  += -Wno-unused-parameter
SnippetMBP_release_cppflags  += -O3 -fno-strict-aliasing
SnippetMBP_release_lflags    := $(SnippetMBP_custom_lflags)
SnippetMBP_release_lflags    += $(addprefix -L, $(SnippetMBP_release_lpaths))
SnippetMBP_release_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetMBP_release_libraries)) -Wl,--end-group
SnippetMBP_release_lflags  += -lrt
SnippetMBP_release_lflags  += -Wl,-rpath ./
SnippetMBP_release_lflags  += -m64
SnippetMBP_release_objsdir  = $(OBJS_DIR)/SnippetMBP_release
SnippetMBP_release_cpp_o    = $(addprefix $(SnippetMBP_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetMBP_cppfiles)))))
SnippetMBP_release_c_o      = $(addprefix $(SnippetMBP_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetMBP_cfiles)))))
SnippetMBP_release_obj      = $(SnippetMBP_release_cpp_o) $(SnippetMBP_release_c_o)
SnippetMBP_release_bin      := ./../../../Bin/linux64/SnippetMBP

clean_SnippetMBP_release: 
	@$(ECHO) clean SnippetMBP release
	@$(RMDIR) $(SnippetMBP_release_objsdir)
	@$(RMDIR) $(SnippetMBP_release_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetMBP/release

build_SnippetMBP_release: postbuild_SnippetMBP_release
postbuild_SnippetMBP_release: mainbuild_SnippetMBP_release
mainbuild_SnippetMBP_release: prebuild_SnippetMBP_release $(SnippetMBP_release_bin)
prebuild_SnippetMBP_release:

$(SnippetMBP_release_bin): $(SnippetMBP_release_obj) build_SnippetRender_release build_SnippetUtils_release 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetMBP`
	@$(CCLD) $(SnippetMBP_release_obj) $(SnippetMBP_release_lflags) -o $(SnippetMBP_release_bin) 
	@$(ECHO) building $@ complete!

SnippetMBP_release_DEPDIR = $(dir $(@))/$(*F)
$(SnippetMBP_release_cpp_o): $(SnippetMBP_release_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetMBP_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cppfiles))))))
	@cp $(SnippetMBP_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cppfiles))))).P; \
	  rm -f $(SnippetMBP_release_DEPDIR).d

$(SnippetMBP_release_c_o): $(SnippetMBP_release_objsdir)/%.o:
	@$(ECHO) SnippetMBP: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetMBP_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cfiles))))))
	@cp $(SnippetMBP_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetMBP_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetMBP/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetMBP_release_objsdir),, $@))), $(SnippetMBP_cfiles))))).P; \
	  rm -f $(SnippetMBP_release_DEPDIR).d

clean_SnippetMBP:  clean_SnippetMBP_debug clean_SnippetMBP_checked clean_SnippetMBP_profile clean_SnippetMBP_release
	@$(RMDIR) $(DEPSDIR)/SnippetMBP
