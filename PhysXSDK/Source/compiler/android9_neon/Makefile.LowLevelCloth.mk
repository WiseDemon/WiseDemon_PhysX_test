# Makefile generated by XPJ for android9_neon
-include Makefile.custom
ProjectName = LowLevelCloth
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/Allocator.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/Factory.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/PhaseConfig.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwCloth.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwClothData.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwCollision.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwFabric.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwFactory.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwInterCollision.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwSelfCollision.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwSolver.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/SwSolverKernel.cpp
LowLevelCloth_cppfiles   += ./../../LowLevelCloth/src/TripletScheduler.cpp

LowLevelCloth_cpp_debug_dep    = $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_c_debug_dep      = $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(LowLevelCloth_cfiles)))))
LowLevelCloth_debug_dep      = $(LowLevelCloth_cpp_debug_dep) $(LowLevelCloth_c_debug_dep)
-include $(LowLevelCloth_debug_dep)
LowLevelCloth_cpp_checked_dep    = $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_c_checked_dep      = $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(LowLevelCloth_cfiles)))))
LowLevelCloth_checked_dep      = $(LowLevelCloth_cpp_checked_dep) $(LowLevelCloth_c_checked_dep)
-include $(LowLevelCloth_checked_dep)
LowLevelCloth_cpp_profile_dep    = $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_c_profile_dep      = $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(LowLevelCloth_cfiles)))))
LowLevelCloth_profile_dep      = $(LowLevelCloth_cpp_profile_dep) $(LowLevelCloth_c_profile_dep)
-include $(LowLevelCloth_profile_dep)
LowLevelCloth_cpp_release_dep    = $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_c_release_dep      = $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(LowLevelCloth_cfiles)))))
LowLevelCloth_release_dep      = $(LowLevelCloth_cpp_release_dep) $(LowLevelCloth_c_release_dep)
-include $(LowLevelCloth_release_dep)
LowLevelCloth_debug_hpaths    := 
LowLevelCloth_debug_hpaths    += ./../../../Include/foundation
LowLevelCloth_debug_hpaths    += ./../../foundation/include
LowLevelCloth_debug_hpaths    += ./../../../Include/physxprofilesdk
LowLevelCloth_debug_hpaths    += ./../../../Include/physxvisualdebuggersdk
LowLevelCloth_debug_hpaths    += ./../../../Include
LowLevelCloth_debug_hpaths    += ./../../../Include/pxtask
LowLevelCloth_debug_hpaths    += ./../../../Include/common
LowLevelCloth_debug_hpaths    += ./../../Common/src
LowLevelCloth_debug_hpaths    += ./../../LowLevelCloth/include
LowLevelCloth_debug_hpaths    += ./../../LowLevelCloth/src
LowLevelCloth_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
LowLevelCloth_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
LowLevelCloth_debug_lpaths    := 
LowLevelCloth_debug_defines   := $(LowLevelCloth_custom_defines)
LowLevelCloth_debug_defines   += ANDROID
LowLevelCloth_debug_defines   += GLES2
LowLevelCloth_debug_defines   += __ARM_ARCH_5__
LowLevelCloth_debug_defines   += __ARM_ARCH_5T__
LowLevelCloth_debug_defines   += __ARM_ARCH_5E__
LowLevelCloth_debug_defines   += __ARM_ARCH_5TE__
LowLevelCloth_debug_defines   += PX_PHYSX_STATIC_LIB
LowLevelCloth_debug_defines   += _DEBUG
LowLevelCloth_debug_defines   += PX_DEBUG
LowLevelCloth_debug_defines   += PX_CHECKED
LowLevelCloth_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
LowLevelCloth_debug_defines   += PX_NVTX
LowLevelCloth_debug_libraries := 
LowLevelCloth_debug_common_cflags	:= $(LowLevelCloth_custom_cflags)
LowLevelCloth_debug_common_cflags    += -MMD
LowLevelCloth_debug_common_cflags    += $(addprefix -D, $(LowLevelCloth_debug_defines))
LowLevelCloth_debug_common_cflags    += $(addprefix -I, $(LowLevelCloth_debug_hpaths))
LowLevelCloth_debug_cflags	:= $(LowLevelCloth_debug_common_cflags)
LowLevelCloth_debug_cflags  += -Werror
LowLevelCloth_debug_cflags  += -fpic -fno-exceptions
LowLevelCloth_debug_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_debug_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_debug_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_debug_cflags  += -Wno-long-long
LowLevelCloth_debug_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_debug_cflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_debug_cflags  += -Wno-variadic-macros
LowLevelCloth_debug_cflags  += -std=c99
LowLevelCloth_debug_cflags  += -g3 -gdwarf-2
LowLevelCloth_debug_cppflags	:= $(LowLevelCloth_debug_common_cflags)
LowLevelCloth_debug_cppflags  += -Werror
LowLevelCloth_debug_cppflags  += -fno-rtti
LowLevelCloth_debug_cppflags  += -fpic -fno-exceptions
LowLevelCloth_debug_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_debug_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_debug_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_debug_cppflags  += -Wno-long-long
LowLevelCloth_debug_cppflags  += -Wno-invalid-offsetof
LowLevelCloth_debug_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_debug_cppflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_debug_cppflags  += -Wno-variadic-macros
LowLevelCloth_debug_cppflags  += -g3 -gdwarf-2
LowLevelCloth_debug_lflags    := $(LowLevelCloth_custom_lflags)
LowLevelCloth_debug_lflags    += $(addprefix -L, $(LowLevelCloth_debug_lpaths))
LowLevelCloth_debug_lflags    += -Wl,--start-group $(addprefix -l, $(LowLevelCloth_debug_libraries)) -Wl,--end-group
LowLevelCloth_debug_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_debug_objsdir  = $(OBJS_DIR)/LowLevelCloth_debug
LowLevelCloth_debug_cpp_o    = $(addprefix $(LowLevelCloth_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_debug_c_o      = $(addprefix $(LowLevelCloth_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(LowLevelCloth_cfiles)))))
LowLevelCloth_debug_obj      = $(LowLevelCloth_debug_cpp_o) $(LowLevelCloth_debug_c_o)
LowLevelCloth_debug_bin      := ./../../../Lib/android9_neon/libLowLevelClothDEBUG.a

clean_LowLevelCloth_debug: 
	@$(ECHO) clean LowLevelCloth debug
	@$(RMDIR) $(LowLevelCloth_debug_objsdir)
	@$(RMDIR) $(LowLevelCloth_debug_bin)
	@$(RMDIR) $(DEPSDIR)/LowLevelCloth/debug

build_LowLevelCloth_debug: postbuild_LowLevelCloth_debug
postbuild_LowLevelCloth_debug: mainbuild_LowLevelCloth_debug
mainbuild_LowLevelCloth_debug: prebuild_LowLevelCloth_debug $(LowLevelCloth_debug_bin)
prebuild_LowLevelCloth_debug:

$(LowLevelCloth_debug_bin): $(LowLevelCloth_debug_obj) 
	@mkdir -p `dirname ./../../../Lib/android9_neon/libLowLevelClothDEBUG.a`
	@$(AR) rcs $(LowLevelCloth_debug_bin) $(LowLevelCloth_debug_obj)
	@$(ECHO) building $@ complete!

LowLevelCloth_debug_DEPDIR = $(dir $(@))/$(*F)
$(LowLevelCloth_debug_cpp_o): $(LowLevelCloth_debug_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(LowLevelCloth_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cppfiles))))))
	@cp $(LowLevelCloth_debug_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  rm -f $(LowLevelCloth_debug_DEPDIR).d

$(LowLevelCloth_debug_c_o): $(LowLevelCloth_debug_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(LowLevelCloth_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cfiles))))))
	@cp $(LowLevelCloth_debug_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_debug_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  rm -f $(LowLevelCloth_debug_DEPDIR).d

LowLevelCloth_checked_hpaths    := 
LowLevelCloth_checked_hpaths    += ./../../../Include/foundation
LowLevelCloth_checked_hpaths    += ./../../foundation/include
LowLevelCloth_checked_hpaths    += ./../../../Include/physxprofilesdk
LowLevelCloth_checked_hpaths    += ./../../../Include/physxvisualdebuggersdk
LowLevelCloth_checked_hpaths    += ./../../../Include
LowLevelCloth_checked_hpaths    += ./../../../Include/pxtask
LowLevelCloth_checked_hpaths    += ./../../../Include/common
LowLevelCloth_checked_hpaths    += ./../../Common/src
LowLevelCloth_checked_hpaths    += ./../../LowLevelCloth/include
LowLevelCloth_checked_hpaths    += ./../../LowLevelCloth/src
LowLevelCloth_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
LowLevelCloth_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
LowLevelCloth_checked_lpaths    := 
LowLevelCloth_checked_defines   := $(LowLevelCloth_custom_defines)
LowLevelCloth_checked_defines   += ANDROID
LowLevelCloth_checked_defines   += GLES2
LowLevelCloth_checked_defines   += __ARM_ARCH_5__
LowLevelCloth_checked_defines   += __ARM_ARCH_5T__
LowLevelCloth_checked_defines   += __ARM_ARCH_5E__
LowLevelCloth_checked_defines   += __ARM_ARCH_5TE__
LowLevelCloth_checked_defines   += PX_PHYSX_STATIC_LIB
LowLevelCloth_checked_defines   += NDEBUG
LowLevelCloth_checked_defines   += PX_CHECKED
LowLevelCloth_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
LowLevelCloth_checked_defines   += PX_NVTX
LowLevelCloth_checked_libraries := 
LowLevelCloth_checked_common_cflags	:= $(LowLevelCloth_custom_cflags)
LowLevelCloth_checked_common_cflags    += -MMD
LowLevelCloth_checked_common_cflags    += $(addprefix -D, $(LowLevelCloth_checked_defines))
LowLevelCloth_checked_common_cflags    += $(addprefix -I, $(LowLevelCloth_checked_hpaths))
LowLevelCloth_checked_cflags	:= $(LowLevelCloth_checked_common_cflags)
LowLevelCloth_checked_cflags  += -Werror
LowLevelCloth_checked_cflags  += -fpic -fno-exceptions
LowLevelCloth_checked_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_checked_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_checked_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_checked_cflags  += -Wno-long-long
LowLevelCloth_checked_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_checked_cflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_checked_cflags  += -Wno-variadic-macros
LowLevelCloth_checked_cflags  += -std=c99
LowLevelCloth_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
LowLevelCloth_checked_cflags  += -ffunction-sections -funwind-tables -fstack-protector
LowLevelCloth_checked_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
LowLevelCloth_checked_cppflags	:= $(LowLevelCloth_checked_common_cflags)
LowLevelCloth_checked_cppflags  += -Werror
LowLevelCloth_checked_cppflags  += -fno-rtti
LowLevelCloth_checked_cppflags  += -fpic -fno-exceptions
LowLevelCloth_checked_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_checked_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_checked_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_checked_cppflags  += -Wno-long-long
LowLevelCloth_checked_cppflags  += -Wno-invalid-offsetof
LowLevelCloth_checked_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_checked_cppflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_checked_cppflags  += -Wno-variadic-macros
LowLevelCloth_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
LowLevelCloth_checked_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
LowLevelCloth_checked_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
LowLevelCloth_checked_lflags    := $(LowLevelCloth_custom_lflags)
LowLevelCloth_checked_lflags    += $(addprefix -L, $(LowLevelCloth_checked_lpaths))
LowLevelCloth_checked_lflags    += -Wl,--start-group $(addprefix -l, $(LowLevelCloth_checked_libraries)) -Wl,--end-group
LowLevelCloth_checked_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_checked_objsdir  = $(OBJS_DIR)/LowLevelCloth_checked
LowLevelCloth_checked_cpp_o    = $(addprefix $(LowLevelCloth_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_checked_c_o      = $(addprefix $(LowLevelCloth_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(LowLevelCloth_cfiles)))))
LowLevelCloth_checked_obj      = $(LowLevelCloth_checked_cpp_o) $(LowLevelCloth_checked_c_o)
LowLevelCloth_checked_bin      := ./../../../Lib/android9_neon/libLowLevelClothCHECKED.a

clean_LowLevelCloth_checked: 
	@$(ECHO) clean LowLevelCloth checked
	@$(RMDIR) $(LowLevelCloth_checked_objsdir)
	@$(RMDIR) $(LowLevelCloth_checked_bin)
	@$(RMDIR) $(DEPSDIR)/LowLevelCloth/checked

build_LowLevelCloth_checked: postbuild_LowLevelCloth_checked
postbuild_LowLevelCloth_checked: mainbuild_LowLevelCloth_checked
mainbuild_LowLevelCloth_checked: prebuild_LowLevelCloth_checked $(LowLevelCloth_checked_bin)
prebuild_LowLevelCloth_checked:

$(LowLevelCloth_checked_bin): $(LowLevelCloth_checked_obj) 
	@mkdir -p `dirname ./../../../Lib/android9_neon/libLowLevelClothCHECKED.a`
	@$(AR) rcs $(LowLevelCloth_checked_bin) $(LowLevelCloth_checked_obj)
	@$(ECHO) building $@ complete!

LowLevelCloth_checked_DEPDIR = $(dir $(@))/$(*F)
$(LowLevelCloth_checked_cpp_o): $(LowLevelCloth_checked_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(LowLevelCloth_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cppfiles))))))
	@cp $(LowLevelCloth_checked_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  rm -f $(LowLevelCloth_checked_DEPDIR).d

$(LowLevelCloth_checked_c_o): $(LowLevelCloth_checked_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(LowLevelCloth_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cfiles))))))
	@cp $(LowLevelCloth_checked_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_checked_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  rm -f $(LowLevelCloth_checked_DEPDIR).d

LowLevelCloth_profile_hpaths    := 
LowLevelCloth_profile_hpaths    += ./../../../Include/foundation
LowLevelCloth_profile_hpaths    += ./../../foundation/include
LowLevelCloth_profile_hpaths    += ./../../../Include/physxprofilesdk
LowLevelCloth_profile_hpaths    += ./../../../Include/physxvisualdebuggersdk
LowLevelCloth_profile_hpaths    += ./../../../Include
LowLevelCloth_profile_hpaths    += ./../../../Include/pxtask
LowLevelCloth_profile_hpaths    += ./../../../Include/common
LowLevelCloth_profile_hpaths    += ./../../Common/src
LowLevelCloth_profile_hpaths    += ./../../LowLevelCloth/include
LowLevelCloth_profile_hpaths    += ./../../LowLevelCloth/src
LowLevelCloth_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
LowLevelCloth_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
LowLevelCloth_profile_lpaths    := 
LowLevelCloth_profile_defines   := $(LowLevelCloth_custom_defines)
LowLevelCloth_profile_defines   += ANDROID
LowLevelCloth_profile_defines   += GLES2
LowLevelCloth_profile_defines   += __ARM_ARCH_5__
LowLevelCloth_profile_defines   += __ARM_ARCH_5T__
LowLevelCloth_profile_defines   += __ARM_ARCH_5E__
LowLevelCloth_profile_defines   += __ARM_ARCH_5TE__
LowLevelCloth_profile_defines   += PX_PHYSX_STATIC_LIB
LowLevelCloth_profile_defines   += NDEBUG
LowLevelCloth_profile_defines   += PX_PROFILE
LowLevelCloth_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
LowLevelCloth_profile_defines   += PX_NVTX
LowLevelCloth_profile_libraries := 
LowLevelCloth_profile_common_cflags	:= $(LowLevelCloth_custom_cflags)
LowLevelCloth_profile_common_cflags    += -MMD
LowLevelCloth_profile_common_cflags    += $(addprefix -D, $(LowLevelCloth_profile_defines))
LowLevelCloth_profile_common_cflags    += $(addprefix -I, $(LowLevelCloth_profile_hpaths))
LowLevelCloth_profile_cflags	:= $(LowLevelCloth_profile_common_cflags)
LowLevelCloth_profile_cflags  += -Werror
LowLevelCloth_profile_cflags  += -fpic -fno-exceptions
LowLevelCloth_profile_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_profile_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_profile_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_profile_cflags  += -Wno-long-long
LowLevelCloth_profile_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_profile_cflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_profile_cflags  += -Wno-variadic-macros
LowLevelCloth_profile_cflags  += -std=c99
LowLevelCloth_profile_cflags  += -O3 -fno-strict-aliasing
LowLevelCloth_profile_cflags  += -ffunction-sections -funwind-tables -fstack-protector
LowLevelCloth_profile_cflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
LowLevelCloth_profile_cppflags	:= $(LowLevelCloth_profile_common_cflags)
LowLevelCloth_profile_cppflags  += -Werror
LowLevelCloth_profile_cppflags  += -fno-rtti
LowLevelCloth_profile_cppflags  += -fpic -fno-exceptions
LowLevelCloth_profile_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_profile_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_profile_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_profile_cppflags  += -Wno-long-long
LowLevelCloth_profile_cppflags  += -Wno-invalid-offsetof
LowLevelCloth_profile_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_profile_cppflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_profile_cppflags  += -Wno-variadic-macros
LowLevelCloth_profile_cppflags  += -O3 -fno-strict-aliasing
LowLevelCloth_profile_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
LowLevelCloth_profile_cppflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
LowLevelCloth_profile_lflags    := $(LowLevelCloth_custom_lflags)
LowLevelCloth_profile_lflags    += $(addprefix -L, $(LowLevelCloth_profile_lpaths))
LowLevelCloth_profile_lflags    += -Wl,--start-group $(addprefix -l, $(LowLevelCloth_profile_libraries)) -Wl,--end-group
LowLevelCloth_profile_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_profile_objsdir  = $(OBJS_DIR)/LowLevelCloth_profile
LowLevelCloth_profile_cpp_o    = $(addprefix $(LowLevelCloth_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_profile_c_o      = $(addprefix $(LowLevelCloth_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(LowLevelCloth_cfiles)))))
LowLevelCloth_profile_obj      = $(LowLevelCloth_profile_cpp_o) $(LowLevelCloth_profile_c_o)
LowLevelCloth_profile_bin      := ./../../../Lib/android9_neon/libLowLevelClothPROFILE.a

clean_LowLevelCloth_profile: 
	@$(ECHO) clean LowLevelCloth profile
	@$(RMDIR) $(LowLevelCloth_profile_objsdir)
	@$(RMDIR) $(LowLevelCloth_profile_bin)
	@$(RMDIR) $(DEPSDIR)/LowLevelCloth/profile

build_LowLevelCloth_profile: postbuild_LowLevelCloth_profile
postbuild_LowLevelCloth_profile: mainbuild_LowLevelCloth_profile
mainbuild_LowLevelCloth_profile: prebuild_LowLevelCloth_profile $(LowLevelCloth_profile_bin)
prebuild_LowLevelCloth_profile:

$(LowLevelCloth_profile_bin): $(LowLevelCloth_profile_obj) 
	@mkdir -p `dirname ./../../../Lib/android9_neon/libLowLevelClothPROFILE.a`
	@$(AR) rcs $(LowLevelCloth_profile_bin) $(LowLevelCloth_profile_obj)
	@$(ECHO) building $@ complete!

LowLevelCloth_profile_DEPDIR = $(dir $(@))/$(*F)
$(LowLevelCloth_profile_cpp_o): $(LowLevelCloth_profile_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(LowLevelCloth_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cppfiles))))))
	@cp $(LowLevelCloth_profile_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  rm -f $(LowLevelCloth_profile_DEPDIR).d

$(LowLevelCloth_profile_c_o): $(LowLevelCloth_profile_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(LowLevelCloth_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cfiles))))))
	@cp $(LowLevelCloth_profile_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_profile_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  rm -f $(LowLevelCloth_profile_DEPDIR).d

LowLevelCloth_release_hpaths    := 
LowLevelCloth_release_hpaths    += ./../../../Include/foundation
LowLevelCloth_release_hpaths    += ./../../foundation/include
LowLevelCloth_release_hpaths    += ./../../../Include/physxprofilesdk
LowLevelCloth_release_hpaths    += ./../../../Include/physxvisualdebuggersdk
LowLevelCloth_release_hpaths    += ./../../../Include
LowLevelCloth_release_hpaths    += ./../../../Include/pxtask
LowLevelCloth_release_hpaths    += ./../../../Include/common
LowLevelCloth_release_hpaths    += ./../../Common/src
LowLevelCloth_release_hpaths    += ./../../LowLevelCloth/include
LowLevelCloth_release_hpaths    += ./../../LowLevelCloth/src
LowLevelCloth_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
LowLevelCloth_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
LowLevelCloth_release_lpaths    := 
LowLevelCloth_release_defines   := $(LowLevelCloth_custom_defines)
LowLevelCloth_release_defines   += ANDROID
LowLevelCloth_release_defines   += GLES2
LowLevelCloth_release_defines   += __ARM_ARCH_5__
LowLevelCloth_release_defines   += __ARM_ARCH_5T__
LowLevelCloth_release_defines   += __ARM_ARCH_5E__
LowLevelCloth_release_defines   += __ARM_ARCH_5TE__
LowLevelCloth_release_defines   += PX_PHYSX_STATIC_LIB
LowLevelCloth_release_defines   += NDEBUG
LowLevelCloth_release_libraries := 
LowLevelCloth_release_common_cflags	:= $(LowLevelCloth_custom_cflags)
LowLevelCloth_release_common_cflags    += -MMD
LowLevelCloth_release_common_cflags    += $(addprefix -D, $(LowLevelCloth_release_defines))
LowLevelCloth_release_common_cflags    += $(addprefix -I, $(LowLevelCloth_release_hpaths))
LowLevelCloth_release_cflags	:= $(LowLevelCloth_release_common_cflags)
LowLevelCloth_release_cflags  += -Werror
LowLevelCloth_release_cflags  += -fpic -fno-exceptions
LowLevelCloth_release_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_release_cflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_release_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_release_cflags  += -Wno-long-long
LowLevelCloth_release_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_release_cflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_release_cflags  += -Wno-variadic-macros
LowLevelCloth_release_cflags  += -std=c99
LowLevelCloth_release_cflags  += -O3 -fno-strict-aliasing
LowLevelCloth_release_cflags  += -ffunction-sections -funwind-tables -fstack-protector
LowLevelCloth_release_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
LowLevelCloth_release_cppflags	:= $(LowLevelCloth_release_common_cflags)
LowLevelCloth_release_cppflags  += -Werror
LowLevelCloth_release_cppflags  += -fno-rtti
LowLevelCloth_release_cppflags  += -fpic -fno-exceptions
LowLevelCloth_release_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_release_cppflags  += -march=armv7-a -mfpu=neon -marm -mfloat-abi=softfp -mthumb-interwork
LowLevelCloth_release_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
LowLevelCloth_release_cppflags  += -Wno-long-long
LowLevelCloth_release_cppflags  += -Wno-invalid-offsetof
LowLevelCloth_release_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
LowLevelCloth_release_cppflags  += -Wno-unused-parameter -Wno-enum-compare
LowLevelCloth_release_cppflags  += -Wno-variadic-macros
LowLevelCloth_release_cppflags  += -O3 -fno-strict-aliasing
LowLevelCloth_release_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
LowLevelCloth_release_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
LowLevelCloth_release_lflags    := $(LowLevelCloth_custom_lflags)
LowLevelCloth_release_lflags    += $(addprefix -L, $(LowLevelCloth_release_lpaths))
LowLevelCloth_release_lflags    += -Wl,--start-group $(addprefix -l, $(LowLevelCloth_release_libraries)) -Wl,--end-group
LowLevelCloth_release_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-9/arch-arm
LowLevelCloth_release_objsdir  = $(OBJS_DIR)/LowLevelCloth_release
LowLevelCloth_release_cpp_o    = $(addprefix $(LowLevelCloth_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(LowLevelCloth_cppfiles)))))
LowLevelCloth_release_c_o      = $(addprefix $(LowLevelCloth_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(LowLevelCloth_cfiles)))))
LowLevelCloth_release_obj      = $(LowLevelCloth_release_cpp_o) $(LowLevelCloth_release_c_o)
LowLevelCloth_release_bin      := ./../../../Lib/android9_neon/libLowLevelCloth.a

clean_LowLevelCloth_release: 
	@$(ECHO) clean LowLevelCloth release
	@$(RMDIR) $(LowLevelCloth_release_objsdir)
	@$(RMDIR) $(LowLevelCloth_release_bin)
	@$(RMDIR) $(DEPSDIR)/LowLevelCloth/release

build_LowLevelCloth_release: postbuild_LowLevelCloth_release
postbuild_LowLevelCloth_release: mainbuild_LowLevelCloth_release
mainbuild_LowLevelCloth_release: prebuild_LowLevelCloth_release $(LowLevelCloth_release_bin)
prebuild_LowLevelCloth_release:

$(LowLevelCloth_release_bin): $(LowLevelCloth_release_obj) 
	@mkdir -p `dirname ./../../../Lib/android9_neon/libLowLevelCloth.a`
	@$(AR) rcs $(LowLevelCloth_release_bin) $(LowLevelCloth_release_obj)
	@$(ECHO) building $@ complete!

LowLevelCloth_release_DEPDIR = $(dir $(@))/$(*F)
$(LowLevelCloth_release_cpp_o): $(LowLevelCloth_release_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(LowLevelCloth_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cppfiles))))))
	@cp $(LowLevelCloth_release_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cppfiles))))).P; \
	  rm -f $(LowLevelCloth_release_DEPDIR).d

$(LowLevelCloth_release_c_o): $(LowLevelCloth_release_objsdir)/%.o:
	@$(ECHO) LowLevelCloth: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(LowLevelCloth_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cfiles))))))
	@cp $(LowLevelCloth_release_DEPDIR).d $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(LowLevelCloth_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/LowLevelCloth/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(LowLevelCloth_release_objsdir),, $@))), $(LowLevelCloth_cfiles))))).P; \
	  rm -f $(LowLevelCloth_release_DEPDIR).d

clean_LowLevelCloth:  clean_LowLevelCloth_debug clean_LowLevelCloth_checked clean_LowLevelCloth_profile clean_LowLevelCloth_release
	@$(RMDIR) $(DEPSDIR)/LowLevelCloth
