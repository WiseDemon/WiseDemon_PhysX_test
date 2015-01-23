# Makefile generated by XPJ for android9_neon
-include Makefile.custom
ProjectName = SnippetStepper
SnippetStepper_cppfiles   += ./../../SnippetCommon/ClassicMain.cpp
SnippetStepper_cppfiles   += ./../../SnippetStepper/SnippetStepper.cpp

SnippetStepper_cpp_debug_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_c_debug_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_debug_dep      = $(SnippetStepper_cpp_debug_dep) $(SnippetStepper_c_debug_dep)
-include $(SnippetStepper_debug_dep)
SnippetStepper_cpp_checked_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_c_checked_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_checked_dep      = $(SnippetStepper_cpp_checked_dep) $(SnippetStepper_c_checked_dep)
-include $(SnippetStepper_checked_dep)
SnippetStepper_cpp_profile_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_c_profile_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_profile_dep      = $(SnippetStepper_cpp_profile_dep) $(SnippetStepper_c_profile_dep)
-include $(SnippetStepper_profile_dep)
SnippetStepper_cpp_release_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_c_release_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_release_dep      = $(SnippetStepper_cpp_release_dep) $(SnippetStepper_c_release_dep)
-include $(SnippetStepper_release_dep)
SnippetStepper_debug_hpaths    := 
SnippetStepper_debug_hpaths    += ./../../../Include
SnippetStepper_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
SnippetStepper_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
SnippetStepper_debug_lpaths    := 
SnippetStepper_debug_lpaths    += ./../../../externals/nvToolsExt/1/lib/armv7
SnippetStepper_debug_lpaths    += ./../../../Lib/android9_neon
SnippetStepper_debug_lpaths    += ./../../lib/android9_neon
SnippetStepper_debug_lpaths    += ./../../lib/android9_neon
SnippetStepper_debug_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_debug_defines   += ANDROID
SnippetStepper_debug_defines   += GLES2
SnippetStepper_debug_defines   += __ARM_ARCH_5__
SnippetStepper_debug_defines   += __ARM_ARCH_5T__
SnippetStepper_debug_defines   += __ARM_ARCH_5E__
SnippetStepper_debug_defines   += __ARM_ARCH_5TE__
SnippetStepper_debug_defines   += _DEBUG
SnippetStepper_debug_defines   += PX_DEBUG
SnippetStepper_debug_defines   += PX_CHECKED
SnippetStepper_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetStepper_debug_defines   += PX_NVTX
SnippetStepper_debug_defines   += PHYSX_PROFILE_SDK
SnippetStepper_debug_libraries := 
SnippetStepper_debug_libraries += SnippetUtilsDEBUG
SnippetStepper_debug_libraries += log
SnippetStepper_debug_libraries += gnustl_static
SnippetStepper_debug_libraries += supc++
SnippetStepper_debug_libraries += m
SnippetStepper_debug_libraries += c
SnippetStepper_debug_libraries += nvToolsExt
SnippetStepper_debug_libraries += PhysX3CommonDEBUG
SnippetStepper_debug_libraries += PvdRuntimeDEBUG
SnippetStepper_debug_libraries += SimulationControllerDEBUG
SnippetStepper_debug_libraries += SceneQueryDEBUG
SnippetStepper_debug_libraries += LowLevelDEBUG
SnippetStepper_debug_libraries += LowLevelClothDEBUG
SnippetStepper_debug_libraries += PhysX3DEBUG
SnippetStepper_debug_libraries += PhysX3VehicleDEBUG
SnippetStepper_debug_libraries += PhysX3CookingDEBUG
SnippetStepper_debug_libraries += PhysX3ExtensionsDEBUG
SnippetStepper_debug_libraries += PhysX3CharacterKinematicDEBUG
SnippetStepper_debug_libraries += PhysXProfileSDKDEBUG
SnippetStepper_debug_libraries += PxTaskDEBUG
SnippetStepper_debug_libraries += PhysXVisualDebuggerSDKDEBUG
SnippetStepper_debug_libraries += SnippetUtilsDEBUG
SnippetStepper_debug_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_debug_common_cflags    += -MMD
SnippetStepper_debug_common_cflags    += $(addprefix -D, $(SnippetStepper_debug_defines))
SnippetStepper_debug_common_cflags    += $(addprefix -I, $(SnippetStepper_debug_hpaths))
SnippetStepper_debug_cflags	:= $(SnippetStepper_debug_common_cflags)
SnippetStepper_debug_cflags  += -Werror
SnippetStepper_debug_cflags  += -fpic -fno-exceptions
SnippetStepper_debug_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_debug_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_debug_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_debug_cflags  += -Wno-long-long
SnippetStepper_debug_cflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_debug_cflags  += -Wno-unused-parameter
SnippetStepper_debug_cflags  += -Wno-pedantic
SnippetStepper_debug_cflags  += -g3 -gdwarf-2
SnippetStepper_debug_cppflags	:= $(SnippetStepper_debug_common_cflags)
SnippetStepper_debug_cppflags  += -Werror
SnippetStepper_debug_cppflags  += -fno-rtti
SnippetStepper_debug_cppflags  += -fpic -fno-exceptions
SnippetStepper_debug_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_debug_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_debug_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_debug_cppflags  += -Wno-long-long
SnippetStepper_debug_cppflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_debug_cppflags  += -Wno-unused-parameter
SnippetStepper_debug_cppflags  += -Wno-pedantic
SnippetStepper_debug_cppflags  += -g3 -gdwarf-2
SnippetStepper_debug_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_debug_lflags    += $(addprefix -L, $(SnippetStepper_debug_lpaths))
SnippetStepper_debug_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_debug_libraries)) -Wl,--end-group
SnippetStepper_debug_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_debug_lflags  += -Wl,--no-undefined
SnippetStepper_debug_lflags  += -Wl,-z,noexecstack -L../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a -Wl,-rpath-link=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm/usr/lib
SnippetStepper_debug_objsdir  = $(OBJS_DIR)/SnippetStepper_debug
SnippetStepper_debug_cpp_o    = $(addprefix $(SnippetStepper_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_debug_c_o      = $(addprefix $(SnippetStepper_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_debug_obj      = $(SnippetStepper_debug_cpp_o) $(SnippetStepper_debug_c_o)
SnippetStepper_debug_bin      := ./../../../Bin/android9_neon/SnippetStepperDEBUG

clean_SnippetStepper_debug: 
	@$(ECHO) clean SnippetStepper debug
	@$(RMDIR) $(SnippetStepper_debug_objsdir)
	@$(RMDIR) $(SnippetStepper_debug_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/debug

build_SnippetStepper_debug: postbuild_SnippetStepper_debug
postbuild_SnippetStepper_debug: mainbuild_SnippetStepper_debug
mainbuild_SnippetStepper_debug: prebuild_SnippetStepper_debug $(SnippetStepper_debug_bin)
prebuild_SnippetStepper_debug:

$(SnippetStepper_debug_bin): $(SnippetStepper_debug_obj) build_SnippetUtils_debug 
	@mkdir -p `dirname ./../../../Bin/android9_neon/SnippetStepperDEBUG`
	@$(CCLD) $(SnippetStepper_debug_obj) $(SnippetStepper_debug_lflags) -o $(SnippetStepper_debug_bin) 
	@$(ECHO) building $@ complete!

SnippetStepper_debug_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_debug_cpp_o): $(SnippetStepper_debug_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetStepper_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	@cp $(SnippetStepper_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_debug_DEPDIR).d

$(SnippetStepper_debug_c_o): $(SnippetStepper_debug_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetStepper_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	@cp $(SnippetStepper_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_debug_DEPDIR).d

SnippetStepper_checked_hpaths    := 
SnippetStepper_checked_hpaths    += ./../../../Include
SnippetStepper_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
SnippetStepper_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
SnippetStepper_checked_lpaths    := 
SnippetStepper_checked_lpaths    += ./../../../externals/nvToolsExt/1/lib/armv7
SnippetStepper_checked_lpaths    += ./../../../Lib/android9_neon
SnippetStepper_checked_lpaths    += ./../../lib/android9_neon
SnippetStepper_checked_lpaths    += ./../../lib/android9_neon
SnippetStepper_checked_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_checked_defines   += ANDROID
SnippetStepper_checked_defines   += GLES2
SnippetStepper_checked_defines   += __ARM_ARCH_5__
SnippetStepper_checked_defines   += __ARM_ARCH_5T__
SnippetStepper_checked_defines   += __ARM_ARCH_5E__
SnippetStepper_checked_defines   += __ARM_ARCH_5TE__
SnippetStepper_checked_defines   += NDEBUG
SnippetStepper_checked_defines   += PX_CHECKED
SnippetStepper_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetStepper_checked_defines   += PX_NVTX
SnippetStepper_checked_defines   += PHYSX_PROFILE_SDK
SnippetStepper_checked_libraries := 
SnippetStepper_checked_libraries += SnippetUtilsCHECKED
SnippetStepper_checked_libraries += log
SnippetStepper_checked_libraries += gnustl_static
SnippetStepper_checked_libraries += supc++
SnippetStepper_checked_libraries += m
SnippetStepper_checked_libraries += c
SnippetStepper_checked_libraries += nvToolsExt
SnippetStepper_checked_libraries += PhysX3CommonCHECKED
SnippetStepper_checked_libraries += PvdRuntimeCHECKED
SnippetStepper_checked_libraries += SimulationControllerCHECKED
SnippetStepper_checked_libraries += SceneQueryCHECKED
SnippetStepper_checked_libraries += LowLevelCHECKED
SnippetStepper_checked_libraries += LowLevelClothCHECKED
SnippetStepper_checked_libraries += PhysX3CHECKED
SnippetStepper_checked_libraries += PhysX3VehicleCHECKED
SnippetStepper_checked_libraries += PhysX3CookingCHECKED
SnippetStepper_checked_libraries += PhysX3ExtensionsCHECKED
SnippetStepper_checked_libraries += PhysX3CharacterKinematicCHECKED
SnippetStepper_checked_libraries += PhysXProfileSDKCHECKED
SnippetStepper_checked_libraries += PxTaskCHECKED
SnippetStepper_checked_libraries += PhysXVisualDebuggerSDKCHECKED
SnippetStepper_checked_libraries += SnippetUtilsCHECKED
SnippetStepper_checked_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_checked_common_cflags    += -MMD
SnippetStepper_checked_common_cflags    += $(addprefix -D, $(SnippetStepper_checked_defines))
SnippetStepper_checked_common_cflags    += $(addprefix -I, $(SnippetStepper_checked_hpaths))
SnippetStepper_checked_cflags	:= $(SnippetStepper_checked_common_cflags)
SnippetStepper_checked_cflags  += -Werror
SnippetStepper_checked_cflags  += -fpic -fno-exceptions
SnippetStepper_checked_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_checked_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_checked_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_checked_cflags  += -Wno-long-long
SnippetStepper_checked_cflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_checked_cflags  += -Wno-unused-parameter
SnippetStepper_checked_cflags  += -Wno-pedantic
SnippetStepper_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetStepper_checked_cflags  += -ffunction-sections -funwind-tables -fstack-protector
SnippetStepper_checked_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
SnippetStepper_checked_cppflags	:= $(SnippetStepper_checked_common_cflags)
SnippetStepper_checked_cppflags  += -Werror
SnippetStepper_checked_cppflags  += -fno-rtti
SnippetStepper_checked_cppflags  += -fpic -fno-exceptions
SnippetStepper_checked_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_checked_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_checked_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_checked_cppflags  += -Wno-long-long
SnippetStepper_checked_cppflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_checked_cppflags  += -Wno-unused-parameter
SnippetStepper_checked_cppflags  += -Wno-pedantic
SnippetStepper_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetStepper_checked_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
SnippetStepper_checked_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
SnippetStepper_checked_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_checked_lflags    += $(addprefix -L, $(SnippetStepper_checked_lpaths))
SnippetStepper_checked_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_checked_libraries)) -Wl,--end-group
SnippetStepper_checked_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_checked_lflags  += -Wl,--no-undefined
SnippetStepper_checked_lflags  += -Wl,-z,noexecstack -L../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a -Wl,-rpath-link=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm/usr/lib
SnippetStepper_checked_objsdir  = $(OBJS_DIR)/SnippetStepper_checked
SnippetStepper_checked_cpp_o    = $(addprefix $(SnippetStepper_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_checked_c_o      = $(addprefix $(SnippetStepper_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_checked_obj      = $(SnippetStepper_checked_cpp_o) $(SnippetStepper_checked_c_o)
SnippetStepper_checked_bin      := ./../../../Bin/android9_neon/SnippetStepperCHECKED

clean_SnippetStepper_checked: 
	@$(ECHO) clean SnippetStepper checked
	@$(RMDIR) $(SnippetStepper_checked_objsdir)
	@$(RMDIR) $(SnippetStepper_checked_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/checked

build_SnippetStepper_checked: postbuild_SnippetStepper_checked
postbuild_SnippetStepper_checked: mainbuild_SnippetStepper_checked
mainbuild_SnippetStepper_checked: prebuild_SnippetStepper_checked $(SnippetStepper_checked_bin)
prebuild_SnippetStepper_checked:

$(SnippetStepper_checked_bin): $(SnippetStepper_checked_obj) build_SnippetUtils_checked 
	@mkdir -p `dirname ./../../../Bin/android9_neon/SnippetStepperCHECKED`
	@$(CCLD) $(SnippetStepper_checked_obj) $(SnippetStepper_checked_lflags) -o $(SnippetStepper_checked_bin) 
	@$(ECHO) building $@ complete!

SnippetStepper_checked_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_checked_cpp_o): $(SnippetStepper_checked_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetStepper_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	@cp $(SnippetStepper_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_checked_DEPDIR).d

$(SnippetStepper_checked_c_o): $(SnippetStepper_checked_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetStepper_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	@cp $(SnippetStepper_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_checked_DEPDIR).d

SnippetStepper_profile_hpaths    := 
SnippetStepper_profile_hpaths    += ./../../../Include
SnippetStepper_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
SnippetStepper_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
SnippetStepper_profile_lpaths    := 
SnippetStepper_profile_lpaths    += ./../../../externals/nvToolsExt/1/lib/armv7
SnippetStepper_profile_lpaths    += ./../../../Lib/android9_neon
SnippetStepper_profile_lpaths    += ./../../lib/android9_neon
SnippetStepper_profile_lpaths    += ./../../lib/android9_neon
SnippetStepper_profile_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_profile_defines   += ANDROID
SnippetStepper_profile_defines   += GLES2
SnippetStepper_profile_defines   += __ARM_ARCH_5__
SnippetStepper_profile_defines   += __ARM_ARCH_5T__
SnippetStepper_profile_defines   += __ARM_ARCH_5E__
SnippetStepper_profile_defines   += __ARM_ARCH_5TE__
SnippetStepper_profile_defines   += NDEBUG
SnippetStepper_profile_defines   += PX_PROFILE
SnippetStepper_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetStepper_profile_defines   += PX_NVTX
SnippetStepper_profile_defines   += PHYSX_PROFILE_SDK
SnippetStepper_profile_libraries := 
SnippetStepper_profile_libraries += SnippetUtilsPROFILE
SnippetStepper_profile_libraries += log
SnippetStepper_profile_libraries += gnustl_static
SnippetStepper_profile_libraries += supc++
SnippetStepper_profile_libraries += m
SnippetStepper_profile_libraries += c
SnippetStepper_profile_libraries += nvToolsExt
SnippetStepper_profile_libraries += PhysX3CommonPROFILE
SnippetStepper_profile_libraries += PvdRuntimePROFILE
SnippetStepper_profile_libraries += SimulationControllerPROFILE
SnippetStepper_profile_libraries += SceneQueryPROFILE
SnippetStepper_profile_libraries += LowLevelPROFILE
SnippetStepper_profile_libraries += LowLevelClothPROFILE
SnippetStepper_profile_libraries += PhysX3PROFILE
SnippetStepper_profile_libraries += PhysX3VehiclePROFILE
SnippetStepper_profile_libraries += PhysX3CookingPROFILE
SnippetStepper_profile_libraries += PhysX3ExtensionsPROFILE
SnippetStepper_profile_libraries += PhysX3CharacterKinematicPROFILE
SnippetStepper_profile_libraries += PhysXProfileSDKPROFILE
SnippetStepper_profile_libraries += PxTaskPROFILE
SnippetStepper_profile_libraries += PhysXVisualDebuggerSDKPROFILE
SnippetStepper_profile_libraries += SnippetUtilsPROFILE
SnippetStepper_profile_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_profile_common_cflags    += -MMD
SnippetStepper_profile_common_cflags    += $(addprefix -D, $(SnippetStepper_profile_defines))
SnippetStepper_profile_common_cflags    += $(addprefix -I, $(SnippetStepper_profile_hpaths))
SnippetStepper_profile_cflags	:= $(SnippetStepper_profile_common_cflags)
SnippetStepper_profile_cflags  += -Werror
SnippetStepper_profile_cflags  += -fpic -fno-exceptions
SnippetStepper_profile_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_profile_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_profile_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_profile_cflags  += -Wno-long-long
SnippetStepper_profile_cflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_profile_cflags  += -Wno-unused-parameter
SnippetStepper_profile_cflags  += -Wno-pedantic
SnippetStepper_profile_cflags  += -O3 -fno-strict-aliasing
SnippetStepper_profile_cflags  += -ffunction-sections -funwind-tables -fstack-protector
SnippetStepper_profile_cflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
SnippetStepper_profile_cppflags	:= $(SnippetStepper_profile_common_cflags)
SnippetStepper_profile_cppflags  += -Werror
SnippetStepper_profile_cppflags  += -fno-rtti
SnippetStepper_profile_cppflags  += -fpic -fno-exceptions
SnippetStepper_profile_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_profile_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_profile_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_profile_cppflags  += -Wno-long-long
SnippetStepper_profile_cppflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_profile_cppflags  += -Wno-unused-parameter
SnippetStepper_profile_cppflags  += -Wno-pedantic
SnippetStepper_profile_cppflags  += -O3 -fno-strict-aliasing
SnippetStepper_profile_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
SnippetStepper_profile_cppflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
SnippetStepper_profile_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_profile_lflags    += $(addprefix -L, $(SnippetStepper_profile_lpaths))
SnippetStepper_profile_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_profile_libraries)) -Wl,--end-group
SnippetStepper_profile_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_profile_lflags  += -Wl,--no-undefined
SnippetStepper_profile_lflags  += -Wl,-z,noexecstack -L../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a -Wl,-rpath-link=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm/usr/lib
SnippetStepper_profile_objsdir  = $(OBJS_DIR)/SnippetStepper_profile
SnippetStepper_profile_cpp_o    = $(addprefix $(SnippetStepper_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_profile_c_o      = $(addprefix $(SnippetStepper_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_profile_obj      = $(SnippetStepper_profile_cpp_o) $(SnippetStepper_profile_c_o)
SnippetStepper_profile_bin      := ./../../../Bin/android9_neon/SnippetStepperPROFILE

clean_SnippetStepper_profile: 
	@$(ECHO) clean SnippetStepper profile
	@$(RMDIR) $(SnippetStepper_profile_objsdir)
	@$(RMDIR) $(SnippetStepper_profile_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/profile

build_SnippetStepper_profile: postbuild_SnippetStepper_profile
postbuild_SnippetStepper_profile: mainbuild_SnippetStepper_profile
mainbuild_SnippetStepper_profile: prebuild_SnippetStepper_profile $(SnippetStepper_profile_bin)
prebuild_SnippetStepper_profile:

$(SnippetStepper_profile_bin): $(SnippetStepper_profile_obj) build_SnippetUtils_profile 
	@mkdir -p `dirname ./../../../Bin/android9_neon/SnippetStepperPROFILE`
	@$(CCLD) $(SnippetStepper_profile_obj) $(SnippetStepper_profile_lflags) -o $(SnippetStepper_profile_bin) 
	@$(ECHO) building $@ complete!

SnippetStepper_profile_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_profile_cpp_o): $(SnippetStepper_profile_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetStepper_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	@cp $(SnippetStepper_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_profile_DEPDIR).d

$(SnippetStepper_profile_c_o): $(SnippetStepper_profile_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetStepper_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	@cp $(SnippetStepper_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_profile_DEPDIR).d

SnippetStepper_release_hpaths    := 
SnippetStepper_release_hpaths    += ./../../../Include
SnippetStepper_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
SnippetStepper_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
SnippetStepper_release_lpaths    := 
SnippetStepper_release_lpaths    += ./../../../externals/nvToolsExt/1/lib/armv7
SnippetStepper_release_lpaths    += ./../../../Lib/android9_neon
SnippetStepper_release_lpaths    += ./../../lib/android9_neon
SnippetStepper_release_lpaths    += ./../../lib/android9_neon
SnippetStepper_release_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_release_defines   += ANDROID
SnippetStepper_release_defines   += GLES2
SnippetStepper_release_defines   += __ARM_ARCH_5__
SnippetStepper_release_defines   += __ARM_ARCH_5T__
SnippetStepper_release_defines   += __ARM_ARCH_5E__
SnippetStepper_release_defines   += __ARM_ARCH_5TE__
SnippetStepper_release_defines   += NDEBUG
SnippetStepper_release_defines   += PHYSX_PROFILE_SDK
SnippetStepper_release_libraries := 
SnippetStepper_release_libraries += SnippetUtils
SnippetStepper_release_libraries += log
SnippetStepper_release_libraries += gnustl_static
SnippetStepper_release_libraries += supc++
SnippetStepper_release_libraries += m
SnippetStepper_release_libraries += c
SnippetStepper_release_libraries += nvToolsExt
SnippetStepper_release_libraries += PhysX3Common
SnippetStepper_release_libraries += PvdRuntime
SnippetStepper_release_libraries += SimulationController
SnippetStepper_release_libraries += SceneQuery
SnippetStepper_release_libraries += LowLevel
SnippetStepper_release_libraries += LowLevelCloth
SnippetStepper_release_libraries += PhysX3
SnippetStepper_release_libraries += PhysX3Vehicle
SnippetStepper_release_libraries += PhysX3Cooking
SnippetStepper_release_libraries += PhysX3Extensions
SnippetStepper_release_libraries += PhysX3CharacterKinematic
SnippetStepper_release_libraries += PhysXProfileSDK
SnippetStepper_release_libraries += PxTask
SnippetStepper_release_libraries += PhysXVisualDebuggerSDK
SnippetStepper_release_libraries += SnippetUtils
SnippetStepper_release_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_release_common_cflags    += -MMD
SnippetStepper_release_common_cflags    += $(addprefix -D, $(SnippetStepper_release_defines))
SnippetStepper_release_common_cflags    += $(addprefix -I, $(SnippetStepper_release_hpaths))
SnippetStepper_release_cflags	:= $(SnippetStepper_release_common_cflags)
SnippetStepper_release_cflags  += -Werror
SnippetStepper_release_cflags  += -fpic -fno-exceptions
SnippetStepper_release_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_release_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_release_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_release_cflags  += -Wno-long-long
SnippetStepper_release_cflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_release_cflags  += -Wno-unused-parameter
SnippetStepper_release_cflags  += -Wno-pedantic
SnippetStepper_release_cflags  += -O3 -fno-strict-aliasing
SnippetStepper_release_cflags  += -ffunction-sections -funwind-tables -fstack-protector
SnippetStepper_release_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
SnippetStepper_release_cppflags	:= $(SnippetStepper_release_common_cflags)
SnippetStepper_release_cppflags  += -Werror
SnippetStepper_release_cppflags  += -fno-rtti
SnippetStepper_release_cppflags  += -fpic -fno-exceptions
SnippetStepper_release_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_release_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
SnippetStepper_release_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
SnippetStepper_release_cppflags  += -Wno-long-long
SnippetStepper_release_cppflags  += -Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-maybe-uninitialized
SnippetStepper_release_cppflags  += -Wno-unused-parameter
SnippetStepper_release_cppflags  += -Wno-pedantic
SnippetStepper_release_cppflags  += -O3 -fno-strict-aliasing
SnippetStepper_release_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
SnippetStepper_release_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
SnippetStepper_release_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_release_lflags    += $(addprefix -L, $(SnippetStepper_release_lpaths))
SnippetStepper_release_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_release_libraries)) -Wl,--end-group
SnippetStepper_release_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
SnippetStepper_release_lflags  += -Wl,--no-undefined
SnippetStepper_release_lflags  += -Wl,-z,noexecstack -L../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a -Wl,-rpath-link=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm/usr/lib
SnippetStepper_release_objsdir  = $(OBJS_DIR)/SnippetStepper_release
SnippetStepper_release_cpp_o    = $(addprefix $(SnippetStepper_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_release_c_o      = $(addprefix $(SnippetStepper_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_release_obj      = $(SnippetStepper_release_cpp_o) $(SnippetStepper_release_c_o)
SnippetStepper_release_bin      := ./../../../Bin/android9_neon/SnippetStepper

clean_SnippetStepper_release: 
	@$(ECHO) clean SnippetStepper release
	@$(RMDIR) $(SnippetStepper_release_objsdir)
	@$(RMDIR) $(SnippetStepper_release_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/release

build_SnippetStepper_release: postbuild_SnippetStepper_release
postbuild_SnippetStepper_release: mainbuild_SnippetStepper_release
mainbuild_SnippetStepper_release: prebuild_SnippetStepper_release $(SnippetStepper_release_bin)
prebuild_SnippetStepper_release:

$(SnippetStepper_release_bin): $(SnippetStepper_release_obj) build_SnippetUtils_release 
	@mkdir -p `dirname ./../../../Bin/android9_neon/SnippetStepper`
	@$(CCLD) $(SnippetStepper_release_obj) $(SnippetStepper_release_lflags) -o $(SnippetStepper_release_bin) 
	@$(ECHO) building $@ complete!

SnippetStepper_release_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_release_cpp_o): $(SnippetStepper_release_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SnippetStepper_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	@cp $(SnippetStepper_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_release_DEPDIR).d

$(SnippetStepper_release_c_o): $(SnippetStepper_release_objsdir)/%.o:
	@$(ECHO) SnippetStepper: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SnippetStepper_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	@cp $(SnippetStepper_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_release_DEPDIR).d

clean_SnippetStepper:  clean_SnippetStepper_debug clean_SnippetStepper_checked clean_SnippetStepper_profile clean_SnippetStepper_release
	@$(RMDIR) $(DEPSDIR)/SnippetStepper
