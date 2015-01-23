# Makefile generated by XPJ for android8
-include Makefile.custom
ProjectName = PhysXVisualDebuggerSDK
PhysXVisualDebuggerSDK_cppfiles   += ./../../PhysXVisualDebuggerSDK/PvdConnection.cpp
PhysXVisualDebuggerSDK_cppfiles   += ./../../PhysXVisualDebuggerSDK/PvdConnectionManager.cpp
PhysXVisualDebuggerSDK_cppfiles   += ./../../PhysXVisualDebuggerSDK/PvdDataStream.cpp
PhysXVisualDebuggerSDK_cppfiles   += ./../../PhysXVisualDebuggerSDK/PvdNetworkStreams.cpp
PhysXVisualDebuggerSDK_cppfiles   += ./../../PhysXVisualDebuggerSDK/PvdObjectModelMetaData.cpp
PhysXVisualDebuggerSDK_cppfiles   += ./../../PhysXVisualDebuggerSDK/PvdUserRenderer.cpp

PhysXVisualDebuggerSDK_cpp_debug_dep    = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_c_debug_dep      = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_debug_dep      = $(PhysXVisualDebuggerSDK_cpp_debug_dep) $(PhysXVisualDebuggerSDK_c_debug_dep)
-include $(PhysXVisualDebuggerSDK_debug_dep)
PhysXVisualDebuggerSDK_cpp_checked_dep    = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_c_checked_dep      = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_checked_dep      = $(PhysXVisualDebuggerSDK_cpp_checked_dep) $(PhysXVisualDebuggerSDK_c_checked_dep)
-include $(PhysXVisualDebuggerSDK_checked_dep)
PhysXVisualDebuggerSDK_cpp_profile_dep    = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_c_profile_dep      = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_profile_dep      = $(PhysXVisualDebuggerSDK_cpp_profile_dep) $(PhysXVisualDebuggerSDK_c_profile_dep)
-include $(PhysXVisualDebuggerSDK_profile_dep)
PhysXVisualDebuggerSDK_cpp_release_dep    = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_c_release_dep      = $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_release_dep      = $(PhysXVisualDebuggerSDK_cpp_release_dep) $(PhysXVisualDebuggerSDK_c_release_dep)
-include $(PhysXVisualDebuggerSDK_release_dep)
PhysXVisualDebuggerSDK_debug_hpaths    := 
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../PhysXProfileSDK
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../../Include/foundation
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../foundation/include
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../../Include/physxprofilesdk
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVisualDebuggerSDK_debug_hpaths    += ./../../../Include
PhysXVisualDebuggerSDK_debug_lpaths    := 
PhysXVisualDebuggerSDK_debug_defines   := $(PhysXVisualDebuggerSDK_custom_defines)
PhysXVisualDebuggerSDK_debug_defines   += ANDROID
PhysXVisualDebuggerSDK_debug_defines   += GLES2
PhysXVisualDebuggerSDK_debug_defines   += __ARM_ARCH_5__
PhysXVisualDebuggerSDK_debug_defines   += __ARM_ARCH_5T__
PhysXVisualDebuggerSDK_debug_defines   += __ARM_ARCH_5E__
PhysXVisualDebuggerSDK_debug_defines   += __ARM_ARCH_5TE__
PhysXVisualDebuggerSDK_debug_defines   += PX_PHYSX_STATIC_LIB
PhysXVisualDebuggerSDK_debug_defines   += _DEBUG
PhysXVisualDebuggerSDK_debug_defines   += PX_DEBUG
PhysXVisualDebuggerSDK_debug_defines   += PX_CHECKED
PhysXVisualDebuggerSDK_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
PhysXVisualDebuggerSDK_debug_defines   += PX_NVTX
PhysXVisualDebuggerSDK_debug_libraries := 
PhysXVisualDebuggerSDK_debug_common_cflags	:= $(PhysXVisualDebuggerSDK_custom_cflags)
PhysXVisualDebuggerSDK_debug_common_cflags    += -MMD
PhysXVisualDebuggerSDK_debug_common_cflags    += $(addprefix -D, $(PhysXVisualDebuggerSDK_debug_defines))
PhysXVisualDebuggerSDK_debug_common_cflags    += $(addprefix -I, $(PhysXVisualDebuggerSDK_debug_hpaths))
PhysXVisualDebuggerSDK_debug_cflags	:= $(PhysXVisualDebuggerSDK_debug_common_cflags)
PhysXVisualDebuggerSDK_debug_cflags  += -Werror
PhysXVisualDebuggerSDK_debug_cflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_debug_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_debug_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_debug_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_debug_cflags  += -Wno-long-long
PhysXVisualDebuggerSDK_debug_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_debug_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_debug_cflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_debug_cflags  += -std=c99
PhysXVisualDebuggerSDK_debug_cflags  += -g3 -gdwarf-2
PhysXVisualDebuggerSDK_debug_cppflags	:= $(PhysXVisualDebuggerSDK_debug_common_cflags)
PhysXVisualDebuggerSDK_debug_cppflags  += -Werror
PhysXVisualDebuggerSDK_debug_cppflags  += -fno-rtti
PhysXVisualDebuggerSDK_debug_cppflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_debug_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_debug_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_debug_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_debug_cppflags  += -Wno-long-long
PhysXVisualDebuggerSDK_debug_cppflags  += -Wno-invalid-offsetof
PhysXVisualDebuggerSDK_debug_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_debug_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_debug_cppflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_debug_cppflags  += -g3 -gdwarf-2
PhysXVisualDebuggerSDK_debug_lflags    := $(PhysXVisualDebuggerSDK_custom_lflags)
PhysXVisualDebuggerSDK_debug_lflags    += $(addprefix -L, $(PhysXVisualDebuggerSDK_debug_lpaths))
PhysXVisualDebuggerSDK_debug_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVisualDebuggerSDK_debug_libraries)) -Wl,--end-group
PhysXVisualDebuggerSDK_debug_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_debug_objsdir  = $(OBJS_DIR)/PhysXVisualDebuggerSDK_debug
PhysXVisualDebuggerSDK_debug_cpp_o    = $(addprefix $(PhysXVisualDebuggerSDK_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_debug_c_o      = $(addprefix $(PhysXVisualDebuggerSDK_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_debug_obj      = $(PhysXVisualDebuggerSDK_debug_cpp_o) $(PhysXVisualDebuggerSDK_debug_c_o)
PhysXVisualDebuggerSDK_debug_bin      := ./../../../Lib/android8/libPhysXVisualDebuggerSDKDEBUG.a

clean_PhysXVisualDebuggerSDK_debug: 
	@$(ECHO) clean PhysXVisualDebuggerSDK debug
	@$(RMDIR) $(PhysXVisualDebuggerSDK_debug_objsdir)
	@$(RMDIR) $(PhysXVisualDebuggerSDK_debug_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVisualDebuggerSDK/debug

build_PhysXVisualDebuggerSDK_debug: postbuild_PhysXVisualDebuggerSDK_debug
postbuild_PhysXVisualDebuggerSDK_debug: mainbuild_PhysXVisualDebuggerSDK_debug
mainbuild_PhysXVisualDebuggerSDK_debug: prebuild_PhysXVisualDebuggerSDK_debug $(PhysXVisualDebuggerSDK_debug_bin)
prebuild_PhysXVisualDebuggerSDK_debug:

$(PhysXVisualDebuggerSDK_debug_bin): $(PhysXVisualDebuggerSDK_debug_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysXVisualDebuggerSDKDEBUG.a`
	@$(AR) rcs $(PhysXVisualDebuggerSDK_debug_bin) $(PhysXVisualDebuggerSDK_debug_obj)
	@$(ECHO) building $@ complete!

PhysXVisualDebuggerSDK_debug_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVisualDebuggerSDK_debug_cpp_o): $(PhysXVisualDebuggerSDK_debug_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVisualDebuggerSDK_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))))
	@cp $(PhysXVisualDebuggerSDK_debug_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_debug_DEPDIR).d

$(PhysXVisualDebuggerSDK_debug_c_o): $(PhysXVisualDebuggerSDK_debug_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVisualDebuggerSDK_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))))
	@cp $(PhysXVisualDebuggerSDK_debug_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_debug_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_debug_DEPDIR).d

PhysXVisualDebuggerSDK_checked_hpaths    := 
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../PhysXProfileSDK
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../../Include/foundation
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../foundation/include
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../../Include/physxprofilesdk
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVisualDebuggerSDK_checked_hpaths    += ./../../../Include
PhysXVisualDebuggerSDK_checked_lpaths    := 
PhysXVisualDebuggerSDK_checked_defines   := $(PhysXVisualDebuggerSDK_custom_defines)
PhysXVisualDebuggerSDK_checked_defines   += ANDROID
PhysXVisualDebuggerSDK_checked_defines   += GLES2
PhysXVisualDebuggerSDK_checked_defines   += __ARM_ARCH_5__
PhysXVisualDebuggerSDK_checked_defines   += __ARM_ARCH_5T__
PhysXVisualDebuggerSDK_checked_defines   += __ARM_ARCH_5E__
PhysXVisualDebuggerSDK_checked_defines   += __ARM_ARCH_5TE__
PhysXVisualDebuggerSDK_checked_defines   += PX_PHYSX_STATIC_LIB
PhysXVisualDebuggerSDK_checked_defines   += NDEBUG
PhysXVisualDebuggerSDK_checked_defines   += PX_CHECKED
PhysXVisualDebuggerSDK_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
PhysXVisualDebuggerSDK_checked_defines   += PX_NVTX
PhysXVisualDebuggerSDK_checked_libraries := 
PhysXVisualDebuggerSDK_checked_common_cflags	:= $(PhysXVisualDebuggerSDK_custom_cflags)
PhysXVisualDebuggerSDK_checked_common_cflags    += -MMD
PhysXVisualDebuggerSDK_checked_common_cflags    += $(addprefix -D, $(PhysXVisualDebuggerSDK_checked_defines))
PhysXVisualDebuggerSDK_checked_common_cflags    += $(addprefix -I, $(PhysXVisualDebuggerSDK_checked_hpaths))
PhysXVisualDebuggerSDK_checked_cflags	:= $(PhysXVisualDebuggerSDK_checked_common_cflags)
PhysXVisualDebuggerSDK_checked_cflags  += -Werror
PhysXVisualDebuggerSDK_checked_cflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_checked_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_checked_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_checked_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_checked_cflags  += -Wno-long-long
PhysXVisualDebuggerSDK_checked_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_checked_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_checked_cflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_checked_cflags  += -std=c99
PhysXVisualDebuggerSDK_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
PhysXVisualDebuggerSDK_checked_cflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVisualDebuggerSDK_checked_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVisualDebuggerSDK_checked_cppflags	:= $(PhysXVisualDebuggerSDK_checked_common_cflags)
PhysXVisualDebuggerSDK_checked_cppflags  += -Werror
PhysXVisualDebuggerSDK_checked_cppflags  += -fno-rtti
PhysXVisualDebuggerSDK_checked_cppflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_checked_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_checked_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_checked_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_checked_cppflags  += -Wno-long-long
PhysXVisualDebuggerSDK_checked_cppflags  += -Wno-invalid-offsetof
PhysXVisualDebuggerSDK_checked_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_checked_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_checked_cppflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
PhysXVisualDebuggerSDK_checked_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVisualDebuggerSDK_checked_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVisualDebuggerSDK_checked_lflags    := $(PhysXVisualDebuggerSDK_custom_lflags)
PhysXVisualDebuggerSDK_checked_lflags    += $(addprefix -L, $(PhysXVisualDebuggerSDK_checked_lpaths))
PhysXVisualDebuggerSDK_checked_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVisualDebuggerSDK_checked_libraries)) -Wl,--end-group
PhysXVisualDebuggerSDK_checked_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_checked_objsdir  = $(OBJS_DIR)/PhysXVisualDebuggerSDK_checked
PhysXVisualDebuggerSDK_checked_cpp_o    = $(addprefix $(PhysXVisualDebuggerSDK_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_checked_c_o      = $(addprefix $(PhysXVisualDebuggerSDK_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_checked_obj      = $(PhysXVisualDebuggerSDK_checked_cpp_o) $(PhysXVisualDebuggerSDK_checked_c_o)
PhysXVisualDebuggerSDK_checked_bin      := ./../../../Lib/android8/libPhysXVisualDebuggerSDKCHECKED.a

clean_PhysXVisualDebuggerSDK_checked: 
	@$(ECHO) clean PhysXVisualDebuggerSDK checked
	@$(RMDIR) $(PhysXVisualDebuggerSDK_checked_objsdir)
	@$(RMDIR) $(PhysXVisualDebuggerSDK_checked_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVisualDebuggerSDK/checked

build_PhysXVisualDebuggerSDK_checked: postbuild_PhysXVisualDebuggerSDK_checked
postbuild_PhysXVisualDebuggerSDK_checked: mainbuild_PhysXVisualDebuggerSDK_checked
mainbuild_PhysXVisualDebuggerSDK_checked: prebuild_PhysXVisualDebuggerSDK_checked $(PhysXVisualDebuggerSDK_checked_bin)
prebuild_PhysXVisualDebuggerSDK_checked:

$(PhysXVisualDebuggerSDK_checked_bin): $(PhysXVisualDebuggerSDK_checked_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysXVisualDebuggerSDKCHECKED.a`
	@$(AR) rcs $(PhysXVisualDebuggerSDK_checked_bin) $(PhysXVisualDebuggerSDK_checked_obj)
	@$(ECHO) building $@ complete!

PhysXVisualDebuggerSDK_checked_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVisualDebuggerSDK_checked_cpp_o): $(PhysXVisualDebuggerSDK_checked_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVisualDebuggerSDK_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))))
	@cp $(PhysXVisualDebuggerSDK_checked_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_checked_DEPDIR).d

$(PhysXVisualDebuggerSDK_checked_c_o): $(PhysXVisualDebuggerSDK_checked_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVisualDebuggerSDK_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))))
	@cp $(PhysXVisualDebuggerSDK_checked_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_checked_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_checked_DEPDIR).d

PhysXVisualDebuggerSDK_profile_hpaths    := 
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../PhysXProfileSDK
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../../Include/foundation
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../foundation/include
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../../Include/physxprofilesdk
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVisualDebuggerSDK_profile_hpaths    += ./../../../Include
PhysXVisualDebuggerSDK_profile_lpaths    := 
PhysXVisualDebuggerSDK_profile_defines   := $(PhysXVisualDebuggerSDK_custom_defines)
PhysXVisualDebuggerSDK_profile_defines   += ANDROID
PhysXVisualDebuggerSDK_profile_defines   += GLES2
PhysXVisualDebuggerSDK_profile_defines   += __ARM_ARCH_5__
PhysXVisualDebuggerSDK_profile_defines   += __ARM_ARCH_5T__
PhysXVisualDebuggerSDK_profile_defines   += __ARM_ARCH_5E__
PhysXVisualDebuggerSDK_profile_defines   += __ARM_ARCH_5TE__
PhysXVisualDebuggerSDK_profile_defines   += PX_PHYSX_STATIC_LIB
PhysXVisualDebuggerSDK_profile_defines   += NDEBUG
PhysXVisualDebuggerSDK_profile_defines   += PX_PROFILE
PhysXVisualDebuggerSDK_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
PhysXVisualDebuggerSDK_profile_defines   += PX_NVTX
PhysXVisualDebuggerSDK_profile_libraries := 
PhysXVisualDebuggerSDK_profile_common_cflags	:= $(PhysXVisualDebuggerSDK_custom_cflags)
PhysXVisualDebuggerSDK_profile_common_cflags    += -MMD
PhysXVisualDebuggerSDK_profile_common_cflags    += $(addprefix -D, $(PhysXVisualDebuggerSDK_profile_defines))
PhysXVisualDebuggerSDK_profile_common_cflags    += $(addprefix -I, $(PhysXVisualDebuggerSDK_profile_hpaths))
PhysXVisualDebuggerSDK_profile_cflags	:= $(PhysXVisualDebuggerSDK_profile_common_cflags)
PhysXVisualDebuggerSDK_profile_cflags  += -Werror
PhysXVisualDebuggerSDK_profile_cflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_profile_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_profile_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_profile_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_profile_cflags  += -Wno-long-long
PhysXVisualDebuggerSDK_profile_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_profile_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_profile_cflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_profile_cflags  += -std=c99
PhysXVisualDebuggerSDK_profile_cflags  += -O3 -fno-strict-aliasing
PhysXVisualDebuggerSDK_profile_cflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVisualDebuggerSDK_profile_cflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVisualDebuggerSDK_profile_cppflags	:= $(PhysXVisualDebuggerSDK_profile_common_cflags)
PhysXVisualDebuggerSDK_profile_cppflags  += -Werror
PhysXVisualDebuggerSDK_profile_cppflags  += -fno-rtti
PhysXVisualDebuggerSDK_profile_cppflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_profile_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_profile_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_profile_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_profile_cppflags  += -Wno-long-long
PhysXVisualDebuggerSDK_profile_cppflags  += -Wno-invalid-offsetof
PhysXVisualDebuggerSDK_profile_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_profile_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_profile_cppflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_profile_cppflags  += -O3 -fno-strict-aliasing
PhysXVisualDebuggerSDK_profile_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVisualDebuggerSDK_profile_cppflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVisualDebuggerSDK_profile_lflags    := $(PhysXVisualDebuggerSDK_custom_lflags)
PhysXVisualDebuggerSDK_profile_lflags    += $(addprefix -L, $(PhysXVisualDebuggerSDK_profile_lpaths))
PhysXVisualDebuggerSDK_profile_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVisualDebuggerSDK_profile_libraries)) -Wl,--end-group
PhysXVisualDebuggerSDK_profile_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_profile_objsdir  = $(OBJS_DIR)/PhysXVisualDebuggerSDK_profile
PhysXVisualDebuggerSDK_profile_cpp_o    = $(addprefix $(PhysXVisualDebuggerSDK_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_profile_c_o      = $(addprefix $(PhysXVisualDebuggerSDK_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_profile_obj      = $(PhysXVisualDebuggerSDK_profile_cpp_o) $(PhysXVisualDebuggerSDK_profile_c_o)
PhysXVisualDebuggerSDK_profile_bin      := ./../../../Lib/android8/libPhysXVisualDebuggerSDKPROFILE.a

clean_PhysXVisualDebuggerSDK_profile: 
	@$(ECHO) clean PhysXVisualDebuggerSDK profile
	@$(RMDIR) $(PhysXVisualDebuggerSDK_profile_objsdir)
	@$(RMDIR) $(PhysXVisualDebuggerSDK_profile_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVisualDebuggerSDK/profile

build_PhysXVisualDebuggerSDK_profile: postbuild_PhysXVisualDebuggerSDK_profile
postbuild_PhysXVisualDebuggerSDK_profile: mainbuild_PhysXVisualDebuggerSDK_profile
mainbuild_PhysXVisualDebuggerSDK_profile: prebuild_PhysXVisualDebuggerSDK_profile $(PhysXVisualDebuggerSDK_profile_bin)
prebuild_PhysXVisualDebuggerSDK_profile:

$(PhysXVisualDebuggerSDK_profile_bin): $(PhysXVisualDebuggerSDK_profile_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysXVisualDebuggerSDKPROFILE.a`
	@$(AR) rcs $(PhysXVisualDebuggerSDK_profile_bin) $(PhysXVisualDebuggerSDK_profile_obj)
	@$(ECHO) building $@ complete!

PhysXVisualDebuggerSDK_profile_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVisualDebuggerSDK_profile_cpp_o): $(PhysXVisualDebuggerSDK_profile_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVisualDebuggerSDK_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))))
	@cp $(PhysXVisualDebuggerSDK_profile_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_profile_DEPDIR).d

$(PhysXVisualDebuggerSDK_profile_c_o): $(PhysXVisualDebuggerSDK_profile_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVisualDebuggerSDK_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))))
	@cp $(PhysXVisualDebuggerSDK_profile_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_profile_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_profile_DEPDIR).d

PhysXVisualDebuggerSDK_release_hpaths    := 
PhysXVisualDebuggerSDK_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVisualDebuggerSDK_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVisualDebuggerSDK_release_hpaths    += ./../../PhysXProfileSDK
PhysXVisualDebuggerSDK_release_hpaths    += ./../../../Include/foundation
PhysXVisualDebuggerSDK_release_hpaths    += ./../../foundation/include
PhysXVisualDebuggerSDK_release_hpaths    += ./../../../Include/physxprofilesdk
PhysXVisualDebuggerSDK_release_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVisualDebuggerSDK_release_hpaths    += ./../../../Include
PhysXVisualDebuggerSDK_release_lpaths    := 
PhysXVisualDebuggerSDK_release_defines   := $(PhysXVisualDebuggerSDK_custom_defines)
PhysXVisualDebuggerSDK_release_defines   += ANDROID
PhysXVisualDebuggerSDK_release_defines   += GLES2
PhysXVisualDebuggerSDK_release_defines   += __ARM_ARCH_5__
PhysXVisualDebuggerSDK_release_defines   += __ARM_ARCH_5T__
PhysXVisualDebuggerSDK_release_defines   += __ARM_ARCH_5E__
PhysXVisualDebuggerSDK_release_defines   += __ARM_ARCH_5TE__
PhysXVisualDebuggerSDK_release_defines   += PX_PHYSX_STATIC_LIB
PhysXVisualDebuggerSDK_release_defines   += NDEBUG
PhysXVisualDebuggerSDK_release_libraries := 
PhysXVisualDebuggerSDK_release_common_cflags	:= $(PhysXVisualDebuggerSDK_custom_cflags)
PhysXVisualDebuggerSDK_release_common_cflags    += -MMD
PhysXVisualDebuggerSDK_release_common_cflags    += $(addprefix -D, $(PhysXVisualDebuggerSDK_release_defines))
PhysXVisualDebuggerSDK_release_common_cflags    += $(addprefix -I, $(PhysXVisualDebuggerSDK_release_hpaths))
PhysXVisualDebuggerSDK_release_cflags	:= $(PhysXVisualDebuggerSDK_release_common_cflags)
PhysXVisualDebuggerSDK_release_cflags  += -Werror
PhysXVisualDebuggerSDK_release_cflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_release_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_release_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_release_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_release_cflags  += -Wno-long-long
PhysXVisualDebuggerSDK_release_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_release_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_release_cflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_release_cflags  += -std=c99
PhysXVisualDebuggerSDK_release_cflags  += -O3 -fno-strict-aliasing
PhysXVisualDebuggerSDK_release_cflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVisualDebuggerSDK_release_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVisualDebuggerSDK_release_cppflags	:= $(PhysXVisualDebuggerSDK_release_common_cflags)
PhysXVisualDebuggerSDK_release_cppflags  += -Werror
PhysXVisualDebuggerSDK_release_cppflags  += -fno-rtti
PhysXVisualDebuggerSDK_release_cppflags  += -fpic -fno-exceptions
PhysXVisualDebuggerSDK_release_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_release_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVisualDebuggerSDK_release_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVisualDebuggerSDK_release_cppflags  += -Wno-long-long
PhysXVisualDebuggerSDK_release_cppflags  += -Wno-invalid-offsetof
PhysXVisualDebuggerSDK_release_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVisualDebuggerSDK_release_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVisualDebuggerSDK_release_cppflags  += -Wno-variadic-macros
PhysXVisualDebuggerSDK_release_cppflags  += -O3 -fno-strict-aliasing
PhysXVisualDebuggerSDK_release_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVisualDebuggerSDK_release_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVisualDebuggerSDK_release_lflags    := $(PhysXVisualDebuggerSDK_custom_lflags)
PhysXVisualDebuggerSDK_release_lflags    += $(addprefix -L, $(PhysXVisualDebuggerSDK_release_lpaths))
PhysXVisualDebuggerSDK_release_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVisualDebuggerSDK_release_libraries)) -Wl,--end-group
PhysXVisualDebuggerSDK_release_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVisualDebuggerSDK_release_objsdir  = $(OBJS_DIR)/PhysXVisualDebuggerSDK_release
PhysXVisualDebuggerSDK_release_cpp_o    = $(addprefix $(PhysXVisualDebuggerSDK_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVisualDebuggerSDK_cppfiles)))))
PhysXVisualDebuggerSDK_release_c_o      = $(addprefix $(PhysXVisualDebuggerSDK_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVisualDebuggerSDK_cfiles)))))
PhysXVisualDebuggerSDK_release_obj      = $(PhysXVisualDebuggerSDK_release_cpp_o) $(PhysXVisualDebuggerSDK_release_c_o)
PhysXVisualDebuggerSDK_release_bin      := ./../../../Lib/android8/libPhysXVisualDebuggerSDK.a

clean_PhysXVisualDebuggerSDK_release: 
	@$(ECHO) clean PhysXVisualDebuggerSDK release
	@$(RMDIR) $(PhysXVisualDebuggerSDK_release_objsdir)
	@$(RMDIR) $(PhysXVisualDebuggerSDK_release_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVisualDebuggerSDK/release

build_PhysXVisualDebuggerSDK_release: postbuild_PhysXVisualDebuggerSDK_release
postbuild_PhysXVisualDebuggerSDK_release: mainbuild_PhysXVisualDebuggerSDK_release
mainbuild_PhysXVisualDebuggerSDK_release: prebuild_PhysXVisualDebuggerSDK_release $(PhysXVisualDebuggerSDK_release_bin)
prebuild_PhysXVisualDebuggerSDK_release:

$(PhysXVisualDebuggerSDK_release_bin): $(PhysXVisualDebuggerSDK_release_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysXVisualDebuggerSDK.a`
	@$(AR) rcs $(PhysXVisualDebuggerSDK_release_bin) $(PhysXVisualDebuggerSDK_release_obj)
	@$(ECHO) building $@ complete!

PhysXVisualDebuggerSDK_release_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVisualDebuggerSDK_release_cpp_o): $(PhysXVisualDebuggerSDK_release_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVisualDebuggerSDK_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))))
	@cp $(PhysXVisualDebuggerSDK_release_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cppfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_release_DEPDIR).d

$(PhysXVisualDebuggerSDK_release_c_o): $(PhysXVisualDebuggerSDK_release_objsdir)/%.o:
	@$(ECHO) PhysXVisualDebuggerSDK: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVisualDebuggerSDK_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))))
	@cp $(PhysXVisualDebuggerSDK_release_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVisualDebuggerSDK_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVisualDebuggerSDK/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVisualDebuggerSDK_release_objsdir),, $@))), $(PhysXVisualDebuggerSDK_cfiles))))).P; \
	  rm -f $(PhysXVisualDebuggerSDK_release_DEPDIR).d

clean_PhysXVisualDebuggerSDK:  clean_PhysXVisualDebuggerSDK_debug clean_PhysXVisualDebuggerSDK_checked clean_PhysXVisualDebuggerSDK_profile clean_PhysXVisualDebuggerSDK_release
	@$(RMDIR) $(DEPSDIR)/PhysXVisualDebuggerSDK
