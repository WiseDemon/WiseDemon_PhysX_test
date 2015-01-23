# Makefile generated by XPJ for linux64
-include Makefile.custom
ProjectName = SnippetContactModification
SnippetContactModification_cppfiles   += ./../../SnippetCommon/ClassicMain.cpp
SnippetContactModification_cppfiles   += ./../../SnippetContactModification/SnippetContactModification.cpp
SnippetContactModification_cppfiles   += ./../../SnippetContactModification/SnippetContactModificationRender.cpp

SnippetContactModification_cpp_debug_dep    = $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_c_debug_dep      = $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetContactModification_cfiles)))))
SnippetContactModification_debug_dep      = $(SnippetContactModification_cpp_debug_dep) $(SnippetContactModification_c_debug_dep)
-include $(SnippetContactModification_debug_dep)
SnippetContactModification_cpp_checked_dep    = $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_c_checked_dep      = $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetContactModification_cfiles)))))
SnippetContactModification_checked_dep      = $(SnippetContactModification_cpp_checked_dep) $(SnippetContactModification_c_checked_dep)
-include $(SnippetContactModification_checked_dep)
SnippetContactModification_cpp_profile_dep    = $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_c_profile_dep      = $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetContactModification_cfiles)))))
SnippetContactModification_profile_dep      = $(SnippetContactModification_cpp_profile_dep) $(SnippetContactModification_c_profile_dep)
-include $(SnippetContactModification_profile_dep)
SnippetContactModification_cpp_release_dep    = $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_c_release_dep      = $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetContactModification_cfiles)))))
SnippetContactModification_release_dep      = $(SnippetContactModification_cpp_release_dep) $(SnippetContactModification_c_release_dep)
-include $(SnippetContactModification_release_dep)
SnippetContactModification_debug_hpaths    := 
SnippetContactModification_debug_hpaths    += ./../../../Include
SnippetContactModification_debug_lpaths    := 
SnippetContactModification_debug_lpaths    += ./../../../Lib/linux64
SnippetContactModification_debug_lpaths    += ./../../lib/linux64
SnippetContactModification_debug_lpaths    += ./../../../Bin/linux64
SnippetContactModification_debug_lpaths    += ./../../lib/linux64
SnippetContactModification_debug_defines   := $(SnippetContactModification_custom_defines)
SnippetContactModification_debug_defines   += PHYSX_PROFILE_SDK
SnippetContactModification_debug_defines   += RENDER_SNIPPET
SnippetContactModification_debug_defines   += _DEBUG
SnippetContactModification_debug_defines   += PX_DEBUG
SnippetContactModification_debug_defines   += PX_CHECKED
SnippetContactModification_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetContactModification_debug_libraries := 
SnippetContactModification_debug_libraries += SnippetRenderDEBUG
SnippetContactModification_debug_libraries += SnippetUtilsDEBUG
SnippetContactModification_debug_libraries += PhysX3DEBUG_x64
SnippetContactModification_debug_libraries += PhysX3CommonDEBUG_x64
SnippetContactModification_debug_libraries += PhysX3CookingDEBUG_x64
SnippetContactModification_debug_libraries += PhysX3CharacterKinematicDEBUG_x64
SnippetContactModification_debug_libraries += PhysX3ExtensionsDEBUG
SnippetContactModification_debug_libraries += PhysX3VehicleDEBUG
SnippetContactModification_debug_libraries += PhysXProfileSDKDEBUG
SnippetContactModification_debug_libraries += PhysXVisualDebuggerSDKDEBUG
SnippetContactModification_debug_libraries += PxTaskDEBUG
SnippetContactModification_debug_libraries += SnippetUtilsDEBUG
SnippetContactModification_debug_libraries += SnippetRenderDEBUG
SnippetContactModification_debug_libraries += GL
SnippetContactModification_debug_libraries += GLU
SnippetContactModification_debug_libraries += glut
SnippetContactModification_debug_libraries += X11
SnippetContactModification_debug_libraries += rt
SnippetContactModification_debug_libraries += pthread
SnippetContactModification_debug_common_cflags	:= $(SnippetContactModification_custom_cflags)
SnippetContactModification_debug_common_cflags    += -MMD
SnippetContactModification_debug_common_cflags    += $(addprefix -D, $(SnippetContactModification_debug_defines))
SnippetContactModification_debug_common_cflags    += $(addprefix -I, $(SnippetContactModification_debug_hpaths))
SnippetContactModification_debug_common_cflags  += -m64
SnippetContactModification_debug_cflags	:= $(SnippetContactModification_debug_common_cflags)
SnippetContactModification_debug_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_debug_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_debug_cflags  += -Wno-long-long
SnippetContactModification_debug_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_debug_cflags  += -Wno-unused-parameter
SnippetContactModification_debug_cflags  += -g3 -gdwarf-2
SnippetContactModification_debug_cppflags	:= $(SnippetContactModification_debug_common_cflags)
SnippetContactModification_debug_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_debug_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_debug_cppflags  += -Wno-long-long
SnippetContactModification_debug_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_debug_cppflags  += -Wno-unused-parameter
SnippetContactModification_debug_cppflags  += -g3 -gdwarf-2
SnippetContactModification_debug_lflags    := $(SnippetContactModification_custom_lflags)
SnippetContactModification_debug_lflags    += $(addprefix -L, $(SnippetContactModification_debug_lpaths))
SnippetContactModification_debug_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetContactModification_debug_libraries)) -Wl,--end-group
SnippetContactModification_debug_lflags  += -lrt
SnippetContactModification_debug_lflags  += -Wl,-rpath ./
SnippetContactModification_debug_lflags  += -m64
SnippetContactModification_debug_objsdir  = $(OBJS_DIR)/SnippetContactModification_debug
SnippetContactModification_debug_cpp_o    = $(addprefix $(SnippetContactModification_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_debug_c_o      = $(addprefix $(SnippetContactModification_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetContactModification_cfiles)))))
SnippetContactModification_debug_obj      = $(SnippetContactModification_debug_cpp_o) $(SnippetContactModification_debug_c_o)
SnippetContactModification_debug_bin      := ./../../../Bin/linux64/SnippetContactModificationDEBUG

clean_SnippetContactModification_debug: 
	@$(ECHO) clean SnippetContactModification debug
	@$(RMDIR) $(SnippetContactModification_debug_objsdir)
	@$(RMDIR) $(SnippetContactModification_debug_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetContactModification/debug

build_SnippetContactModification_debug: postbuild_SnippetContactModification_debug
postbuild_SnippetContactModification_debug: mainbuild_SnippetContactModification_debug
mainbuild_SnippetContactModification_debug: prebuild_SnippetContactModification_debug $(SnippetContactModification_debug_bin)
prebuild_SnippetContactModification_debug:

$(SnippetContactModification_debug_bin): $(SnippetContactModification_debug_obj) build_SnippetRender_debug build_SnippetUtils_debug 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetContactModificationDEBUG`
	@$(CCLD) $(SnippetContactModification_debug_obj) $(SnippetContactModification_debug_lflags) -o $(SnippetContactModification_debug_bin) 
	@$(ECHO) building $@ complete!

SnippetContactModification_debug_DEPDIR = $(dir $(@))/$(*F)
$(SnippetContactModification_debug_cpp_o): $(SnippetContactModification_debug_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetContactModification_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cppfiles))))))
	@cp $(SnippetContactModification_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  rm -f $(SnippetContactModification_debug_DEPDIR).d

$(SnippetContactModification_debug_c_o): $(SnippetContactModification_debug_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetContactModification_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cfiles))))))
	@cp $(SnippetContactModification_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_debug_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  rm -f $(SnippetContactModification_debug_DEPDIR).d

SnippetContactModification_checked_hpaths    := 
SnippetContactModification_checked_hpaths    += ./../../../Include
SnippetContactModification_checked_lpaths    := 
SnippetContactModification_checked_lpaths    += ./../../../Lib/linux64
SnippetContactModification_checked_lpaths    += ./../../lib/linux64
SnippetContactModification_checked_lpaths    += ./../../../Bin/linux64
SnippetContactModification_checked_lpaths    += ./../../lib/linux64
SnippetContactModification_checked_defines   := $(SnippetContactModification_custom_defines)
SnippetContactModification_checked_defines   += PHYSX_PROFILE_SDK
SnippetContactModification_checked_defines   += RENDER_SNIPPET
SnippetContactModification_checked_defines   += NDEBUG
SnippetContactModification_checked_defines   += PX_CHECKED
SnippetContactModification_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetContactModification_checked_libraries := 
SnippetContactModification_checked_libraries += SnippetRenderCHECKED
SnippetContactModification_checked_libraries += SnippetUtilsCHECKED
SnippetContactModification_checked_libraries += PhysX3CHECKED_x64
SnippetContactModification_checked_libraries += PhysX3CommonCHECKED_x64
SnippetContactModification_checked_libraries += PhysX3CookingCHECKED_x64
SnippetContactModification_checked_libraries += PhysX3CharacterKinematicCHECKED_x64
SnippetContactModification_checked_libraries += PhysX3ExtensionsCHECKED
SnippetContactModification_checked_libraries += PhysX3VehicleCHECKED
SnippetContactModification_checked_libraries += PhysXProfileSDKCHECKED
SnippetContactModification_checked_libraries += PhysXVisualDebuggerSDKCHECKED
SnippetContactModification_checked_libraries += PxTaskCHECKED
SnippetContactModification_checked_libraries += SnippetUtilsCHECKED
SnippetContactModification_checked_libraries += SnippetRenderCHECKED
SnippetContactModification_checked_libraries += GL
SnippetContactModification_checked_libraries += GLU
SnippetContactModification_checked_libraries += glut
SnippetContactModification_checked_libraries += X11
SnippetContactModification_checked_libraries += rt
SnippetContactModification_checked_libraries += pthread
SnippetContactModification_checked_common_cflags	:= $(SnippetContactModification_custom_cflags)
SnippetContactModification_checked_common_cflags    += -MMD
SnippetContactModification_checked_common_cflags    += $(addprefix -D, $(SnippetContactModification_checked_defines))
SnippetContactModification_checked_common_cflags    += $(addprefix -I, $(SnippetContactModification_checked_hpaths))
SnippetContactModification_checked_common_cflags  += -m64
SnippetContactModification_checked_cflags	:= $(SnippetContactModification_checked_common_cflags)
SnippetContactModification_checked_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_checked_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_checked_cflags  += -Wno-long-long
SnippetContactModification_checked_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_checked_cflags  += -Wno-unused-parameter
SnippetContactModification_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetContactModification_checked_cppflags	:= $(SnippetContactModification_checked_common_cflags)
SnippetContactModification_checked_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_checked_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_checked_cppflags  += -Wno-long-long
SnippetContactModification_checked_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_checked_cppflags  += -Wno-unused-parameter
SnippetContactModification_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetContactModification_checked_lflags    := $(SnippetContactModification_custom_lflags)
SnippetContactModification_checked_lflags    += $(addprefix -L, $(SnippetContactModification_checked_lpaths))
SnippetContactModification_checked_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetContactModification_checked_libraries)) -Wl,--end-group
SnippetContactModification_checked_lflags  += -lrt
SnippetContactModification_checked_lflags  += -Wl,-rpath ./
SnippetContactModification_checked_lflags  += -m64
SnippetContactModification_checked_objsdir  = $(OBJS_DIR)/SnippetContactModification_checked
SnippetContactModification_checked_cpp_o    = $(addprefix $(SnippetContactModification_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_checked_c_o      = $(addprefix $(SnippetContactModification_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetContactModification_cfiles)))))
SnippetContactModification_checked_obj      = $(SnippetContactModification_checked_cpp_o) $(SnippetContactModification_checked_c_o)
SnippetContactModification_checked_bin      := ./../../../Bin/linux64/SnippetContactModificationCHECKED

clean_SnippetContactModification_checked: 
	@$(ECHO) clean SnippetContactModification checked
	@$(RMDIR) $(SnippetContactModification_checked_objsdir)
	@$(RMDIR) $(SnippetContactModification_checked_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetContactModification/checked

build_SnippetContactModification_checked: postbuild_SnippetContactModification_checked
postbuild_SnippetContactModification_checked: mainbuild_SnippetContactModification_checked
mainbuild_SnippetContactModification_checked: prebuild_SnippetContactModification_checked $(SnippetContactModification_checked_bin)
prebuild_SnippetContactModification_checked:

$(SnippetContactModification_checked_bin): $(SnippetContactModification_checked_obj) build_SnippetRender_checked build_SnippetUtils_checked 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetContactModificationCHECKED`
	@$(CCLD) $(SnippetContactModification_checked_obj) $(SnippetContactModification_checked_lflags) -o $(SnippetContactModification_checked_bin) 
	@$(ECHO) building $@ complete!

SnippetContactModification_checked_DEPDIR = $(dir $(@))/$(*F)
$(SnippetContactModification_checked_cpp_o): $(SnippetContactModification_checked_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetContactModification_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cppfiles))))))
	@cp $(SnippetContactModification_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  rm -f $(SnippetContactModification_checked_DEPDIR).d

$(SnippetContactModification_checked_c_o): $(SnippetContactModification_checked_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetContactModification_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cfiles))))))
	@cp $(SnippetContactModification_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_checked_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  rm -f $(SnippetContactModification_checked_DEPDIR).d

SnippetContactModification_profile_hpaths    := 
SnippetContactModification_profile_hpaths    += ./../../../Include
SnippetContactModification_profile_lpaths    := 
SnippetContactModification_profile_lpaths    += ./../../../Lib/linux64
SnippetContactModification_profile_lpaths    += ./../../lib/linux64
SnippetContactModification_profile_lpaths    += ./../../../Bin/linux64
SnippetContactModification_profile_lpaths    += ./../../lib/linux64
SnippetContactModification_profile_defines   := $(SnippetContactModification_custom_defines)
SnippetContactModification_profile_defines   += PHYSX_PROFILE_SDK
SnippetContactModification_profile_defines   += RENDER_SNIPPET
SnippetContactModification_profile_defines   += NDEBUG
SnippetContactModification_profile_defines   += PX_PROFILE
SnippetContactModification_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetContactModification_profile_libraries := 
SnippetContactModification_profile_libraries += SnippetRenderPROFILE
SnippetContactModification_profile_libraries += SnippetUtilsPROFILE
SnippetContactModification_profile_libraries += PhysX3PROFILE_x64
SnippetContactModification_profile_libraries += PhysX3CommonPROFILE_x64
SnippetContactModification_profile_libraries += PhysX3CookingPROFILE_x64
SnippetContactModification_profile_libraries += PhysX3CharacterKinematicPROFILE_x64
SnippetContactModification_profile_libraries += PhysX3ExtensionsPROFILE
SnippetContactModification_profile_libraries += PhysX3VehiclePROFILE
SnippetContactModification_profile_libraries += PhysXProfileSDKPROFILE
SnippetContactModification_profile_libraries += PhysXVisualDebuggerSDKPROFILE
SnippetContactModification_profile_libraries += PxTaskPROFILE
SnippetContactModification_profile_libraries += SnippetUtilsPROFILE
SnippetContactModification_profile_libraries += SnippetRenderPROFILE
SnippetContactModification_profile_libraries += GL
SnippetContactModification_profile_libraries += GLU
SnippetContactModification_profile_libraries += glut
SnippetContactModification_profile_libraries += X11
SnippetContactModification_profile_libraries += rt
SnippetContactModification_profile_libraries += pthread
SnippetContactModification_profile_common_cflags	:= $(SnippetContactModification_custom_cflags)
SnippetContactModification_profile_common_cflags    += -MMD
SnippetContactModification_profile_common_cflags    += $(addprefix -D, $(SnippetContactModification_profile_defines))
SnippetContactModification_profile_common_cflags    += $(addprefix -I, $(SnippetContactModification_profile_hpaths))
SnippetContactModification_profile_common_cflags  += -m64
SnippetContactModification_profile_cflags	:= $(SnippetContactModification_profile_common_cflags)
SnippetContactModification_profile_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_profile_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_profile_cflags  += -Wno-long-long
SnippetContactModification_profile_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_profile_cflags  += -Wno-unused-parameter
SnippetContactModification_profile_cflags  += -O3 -fno-strict-aliasing
SnippetContactModification_profile_cppflags	:= $(SnippetContactModification_profile_common_cflags)
SnippetContactModification_profile_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_profile_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_profile_cppflags  += -Wno-long-long
SnippetContactModification_profile_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_profile_cppflags  += -Wno-unused-parameter
SnippetContactModification_profile_cppflags  += -O3 -fno-strict-aliasing
SnippetContactModification_profile_lflags    := $(SnippetContactModification_custom_lflags)
SnippetContactModification_profile_lflags    += $(addprefix -L, $(SnippetContactModification_profile_lpaths))
SnippetContactModification_profile_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetContactModification_profile_libraries)) -Wl,--end-group
SnippetContactModification_profile_lflags  += -lrt
SnippetContactModification_profile_lflags  += -Wl,-rpath ./
SnippetContactModification_profile_lflags  += -m64
SnippetContactModification_profile_objsdir  = $(OBJS_DIR)/SnippetContactModification_profile
SnippetContactModification_profile_cpp_o    = $(addprefix $(SnippetContactModification_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_profile_c_o      = $(addprefix $(SnippetContactModification_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetContactModification_cfiles)))))
SnippetContactModification_profile_obj      = $(SnippetContactModification_profile_cpp_o) $(SnippetContactModification_profile_c_o)
SnippetContactModification_profile_bin      := ./../../../Bin/linux64/SnippetContactModificationPROFILE

clean_SnippetContactModification_profile: 
	@$(ECHO) clean SnippetContactModification profile
	@$(RMDIR) $(SnippetContactModification_profile_objsdir)
	@$(RMDIR) $(SnippetContactModification_profile_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetContactModification/profile

build_SnippetContactModification_profile: postbuild_SnippetContactModification_profile
postbuild_SnippetContactModification_profile: mainbuild_SnippetContactModification_profile
mainbuild_SnippetContactModification_profile: prebuild_SnippetContactModification_profile $(SnippetContactModification_profile_bin)
prebuild_SnippetContactModification_profile:

$(SnippetContactModification_profile_bin): $(SnippetContactModification_profile_obj) build_SnippetRender_profile build_SnippetUtils_profile 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetContactModificationPROFILE`
	@$(CCLD) $(SnippetContactModification_profile_obj) $(SnippetContactModification_profile_lflags) -o $(SnippetContactModification_profile_bin) 
	@$(ECHO) building $@ complete!

SnippetContactModification_profile_DEPDIR = $(dir $(@))/$(*F)
$(SnippetContactModification_profile_cpp_o): $(SnippetContactModification_profile_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetContactModification_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cppfiles))))))
	@cp $(SnippetContactModification_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  rm -f $(SnippetContactModification_profile_DEPDIR).d

$(SnippetContactModification_profile_c_o): $(SnippetContactModification_profile_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetContactModification_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cfiles))))))
	@cp $(SnippetContactModification_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_profile_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  rm -f $(SnippetContactModification_profile_DEPDIR).d

SnippetContactModification_release_hpaths    := 
SnippetContactModification_release_hpaths    += ./../../../Include
SnippetContactModification_release_lpaths    := 
SnippetContactModification_release_lpaths    += ./../../../Lib/linux64
SnippetContactModification_release_lpaths    += ./../../lib/linux64
SnippetContactModification_release_lpaths    += ./../../../Bin/linux64
SnippetContactModification_release_lpaths    += ./../../lib/linux64
SnippetContactModification_release_defines   := $(SnippetContactModification_custom_defines)
SnippetContactModification_release_defines   += PHYSX_PROFILE_SDK
SnippetContactModification_release_defines   += RENDER_SNIPPET
SnippetContactModification_release_defines   += NDEBUG
SnippetContactModification_release_libraries := 
SnippetContactModification_release_libraries += SnippetRender
SnippetContactModification_release_libraries += SnippetUtils
SnippetContactModification_release_libraries += PhysX3_x64
SnippetContactModification_release_libraries += PhysX3Common_x64
SnippetContactModification_release_libraries += PhysX3Cooking_x64
SnippetContactModification_release_libraries += PhysX3CharacterKinematic_x64
SnippetContactModification_release_libraries += PhysX3Extensions
SnippetContactModification_release_libraries += PhysX3Vehicle
SnippetContactModification_release_libraries += PhysXProfileSDK
SnippetContactModification_release_libraries += PhysXVisualDebuggerSDK
SnippetContactModification_release_libraries += PxTask
SnippetContactModification_release_libraries += SnippetUtils
SnippetContactModification_release_libraries += SnippetRender
SnippetContactModification_release_libraries += GL
SnippetContactModification_release_libraries += GLU
SnippetContactModification_release_libraries += glut
SnippetContactModification_release_libraries += X11
SnippetContactModification_release_libraries += rt
SnippetContactModification_release_libraries += pthread
SnippetContactModification_release_common_cflags	:= $(SnippetContactModification_custom_cflags)
SnippetContactModification_release_common_cflags    += -MMD
SnippetContactModification_release_common_cflags    += $(addprefix -D, $(SnippetContactModification_release_defines))
SnippetContactModification_release_common_cflags    += $(addprefix -I, $(SnippetContactModification_release_hpaths))
SnippetContactModification_release_common_cflags  += -m64
SnippetContactModification_release_cflags	:= $(SnippetContactModification_release_common_cflags)
SnippetContactModification_release_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_release_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_release_cflags  += -Wno-long-long
SnippetContactModification_release_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_release_cflags  += -Wno-unused-parameter
SnippetContactModification_release_cflags  += -O3 -fno-strict-aliasing
SnippetContactModification_release_cppflags	:= $(SnippetContactModification_release_common_cflags)
SnippetContactModification_release_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetContactModification_release_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetContactModification_release_cppflags  += -Wno-long-long
SnippetContactModification_release_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetContactModification_release_cppflags  += -Wno-unused-parameter
SnippetContactModification_release_cppflags  += -O3 -fno-strict-aliasing
SnippetContactModification_release_lflags    := $(SnippetContactModification_custom_lflags)
SnippetContactModification_release_lflags    += $(addprefix -L, $(SnippetContactModification_release_lpaths))
SnippetContactModification_release_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetContactModification_release_libraries)) -Wl,--end-group
SnippetContactModification_release_lflags  += -lrt
SnippetContactModification_release_lflags  += -Wl,-rpath ./
SnippetContactModification_release_lflags  += -m64
SnippetContactModification_release_objsdir  = $(OBJS_DIR)/SnippetContactModification_release
SnippetContactModification_release_cpp_o    = $(addprefix $(SnippetContactModification_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetContactModification_cppfiles)))))
SnippetContactModification_release_c_o      = $(addprefix $(SnippetContactModification_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetContactModification_cfiles)))))
SnippetContactModification_release_obj      = $(SnippetContactModification_release_cpp_o) $(SnippetContactModification_release_c_o)
SnippetContactModification_release_bin      := ./../../../Bin/linux64/SnippetContactModification

clean_SnippetContactModification_release: 
	@$(ECHO) clean SnippetContactModification release
	@$(RMDIR) $(SnippetContactModification_release_objsdir)
	@$(RMDIR) $(SnippetContactModification_release_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetContactModification/release

build_SnippetContactModification_release: postbuild_SnippetContactModification_release
postbuild_SnippetContactModification_release: mainbuild_SnippetContactModification_release
mainbuild_SnippetContactModification_release: prebuild_SnippetContactModification_release $(SnippetContactModification_release_bin)
prebuild_SnippetContactModification_release:

$(SnippetContactModification_release_bin): $(SnippetContactModification_release_obj) build_SnippetRender_release build_SnippetUtils_release 
	@mkdir -p `dirname ./../../../Bin/linux64/SnippetContactModification`
	@$(CCLD) $(SnippetContactModification_release_obj) $(SnippetContactModification_release_lflags) -o $(SnippetContactModification_release_bin) 
	@$(ECHO) building $@ complete!

SnippetContactModification_release_DEPDIR = $(dir $(@))/$(*F)
$(SnippetContactModification_release_cpp_o): $(SnippetContactModification_release_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetContactModification_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cppfiles))))))
	@cp $(SnippetContactModification_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cppfiles))))).P; \
	  rm -f $(SnippetContactModification_release_DEPDIR).d

$(SnippetContactModification_release_c_o): $(SnippetContactModification_release_objsdir)/%.o:
	@$(ECHO) SnippetContactModification: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetContactModification_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cfiles))))))
	@cp $(SnippetContactModification_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetContactModification_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetContactModification/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetContactModification_release_objsdir),, $@))), $(SnippetContactModification_cfiles))))).P; \
	  rm -f $(SnippetContactModification_release_DEPDIR).d

clean_SnippetContactModification:  clean_SnippetContactModification_debug clean_SnippetContactModification_checked clean_SnippetContactModification_profile clean_SnippetContactModification_release
	@$(RMDIR) $(DEPSDIR)/SnippetContactModification