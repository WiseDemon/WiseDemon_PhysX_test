# Makefile generated by XPJ for android8
-include Makefile.custom
ProjectName = PhysXVehicle
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleComponents.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleDrive.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleDrive4W.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleDriveNW.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleDriveTank.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleMetaData.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleNoDrive.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleSDK.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleSerialization.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleSuspWheelTire4.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleTireFriction.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleUpdate.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PxVehicleWheels.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/VehicleUtilControl.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/VehicleUtilSetup.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/VehicleUtilTelemetry.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PhysXMetaData/src/PxVehicleAutoGeneratedMetaDataObjects.cpp
PhysXVehicle_cppfiles   += ./../../PhysXVehicle/src/PhysXMetaData/src/PxVehicleMetaDataObjects.cpp

PhysXVehicle_cpp_debug_dep    = $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_c_debug_dep      = $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVehicle_cfiles)))))
PhysXVehicle_debug_dep      = $(PhysXVehicle_cpp_debug_dep) $(PhysXVehicle_c_debug_dep)
-include $(PhysXVehicle_debug_dep)
PhysXVehicle_cpp_checked_dep    = $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_c_checked_dep      = $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVehicle_cfiles)))))
PhysXVehicle_checked_dep      = $(PhysXVehicle_cpp_checked_dep) $(PhysXVehicle_c_checked_dep)
-include $(PhysXVehicle_checked_dep)
PhysXVehicle_cpp_profile_dep    = $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_c_profile_dep      = $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVehicle_cfiles)))))
PhysXVehicle_profile_dep      = $(PhysXVehicle_cpp_profile_dep) $(PhysXVehicle_c_profile_dep)
-include $(PhysXVehicle_profile_dep)
PhysXVehicle_cpp_release_dep    = $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_c_release_dep      = $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(PhysXVehicle_cfiles)))))
PhysXVehicle_release_dep      = $(PhysXVehicle_cpp_release_dep) $(PhysXVehicle_c_release_dep)
-include $(PhysXVehicle_release_dep)
PhysXVehicle_debug_hpaths    := 
PhysXVehicle_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVehicle_debug_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVehicle_debug_hpaths    += ./../../../Include/foundation
PhysXVehicle_debug_hpaths    += ./../../foundation/include
PhysXVehicle_debug_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_debug_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_debug_hpaths    += ./../../../Include/vehicle
PhysXVehicle_debug_hpaths    += ./../../../Include/common
PhysXVehicle_debug_hpaths    += ./../../../Include/geometry
PhysXVehicle_debug_hpaths    += ./../../../Include/extensions
PhysXVehicle_debug_hpaths    += ./../../../Include/cloth
PhysXVehicle_debug_hpaths    += ./../../../Include
PhysXVehicle_debug_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_debug_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_debug_hpaths    += ./../../Common/src
PhysXVehicle_debug_hpaths    += ./../../PhysXVehicle/src
PhysXVehicle_debug_hpaths    += ./../../PhysXProfileSDK
PhysXVehicle_debug_hpaths    += ./../../PhysXMetaData/extensions/include
PhysXVehicle_debug_hpaths    += ./../../PhysXExtensions/src/serialization/Xml
PhysXVehicle_debug_hpaths    += ./../../PhysXMetaData/core/include
PhysXVehicle_debug_hpaths    += ./../../PhysXVehicle/src/PhysXMetaData/include
PhysXVehicle_debug_lpaths    := 
PhysXVehicle_debug_defines   := $(PhysXVehicle_custom_defines)
PhysXVehicle_debug_defines   += ANDROID
PhysXVehicle_debug_defines   += GLES2
PhysXVehicle_debug_defines   += __ARM_ARCH_5__
PhysXVehicle_debug_defines   += __ARM_ARCH_5T__
PhysXVehicle_debug_defines   += __ARM_ARCH_5E__
PhysXVehicle_debug_defines   += __ARM_ARCH_5TE__
PhysXVehicle_debug_defines   += PX_PHYSX_STATIC_LIB
PhysXVehicle_debug_defines   += _DEBUG
PhysXVehicle_debug_defines   += PX_DEBUG
PhysXVehicle_debug_defines   += PX_CHECKED
PhysXVehicle_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
PhysXVehicle_debug_defines   += PX_NVTX
PhysXVehicle_debug_libraries := 
PhysXVehicle_debug_common_cflags	:= $(PhysXVehicle_custom_cflags)
PhysXVehicle_debug_common_cflags    += -MMD
PhysXVehicle_debug_common_cflags    += $(addprefix -D, $(PhysXVehicle_debug_defines))
PhysXVehicle_debug_common_cflags    += $(addprefix -I, $(PhysXVehicle_debug_hpaths))
PhysXVehicle_debug_cflags	:= $(PhysXVehicle_debug_common_cflags)
PhysXVehicle_debug_cflags  += -Werror
PhysXVehicle_debug_cflags  += -fpic -fno-exceptions
PhysXVehicle_debug_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_debug_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_debug_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_debug_cflags  += -Wno-long-long
PhysXVehicle_debug_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_debug_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_debug_cflags  += -Wno-variadic-macros
PhysXVehicle_debug_cflags  += -std=c99
PhysXVehicle_debug_cflags  += -g3 -gdwarf-2
PhysXVehicle_debug_cppflags	:= $(PhysXVehicle_debug_common_cflags)
PhysXVehicle_debug_cppflags  += -Werror
PhysXVehicle_debug_cppflags  += -fno-rtti
PhysXVehicle_debug_cppflags  += -fpic -fno-exceptions
PhysXVehicle_debug_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_debug_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_debug_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_debug_cppflags  += -Wno-long-long
PhysXVehicle_debug_cppflags  += -Wno-invalid-offsetof
PhysXVehicle_debug_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_debug_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_debug_cppflags  += -Wno-variadic-macros
PhysXVehicle_debug_cppflags  += -g3 -gdwarf-2
PhysXVehicle_debug_lflags    := $(PhysXVehicle_custom_lflags)
PhysXVehicle_debug_lflags    += $(addprefix -L, $(PhysXVehicle_debug_lpaths))
PhysXVehicle_debug_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVehicle_debug_libraries)) -Wl,--end-group
PhysXVehicle_debug_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_debug_objsdir  = $(OBJS_DIR)/PhysXVehicle_debug
PhysXVehicle_debug_cpp_o    = $(addprefix $(PhysXVehicle_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_debug_c_o      = $(addprefix $(PhysXVehicle_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVehicle_cfiles)))))
PhysXVehicle_debug_obj      = $(PhysXVehicle_debug_cpp_o) $(PhysXVehicle_debug_c_o)
PhysXVehicle_debug_bin      := ./../../../Lib/android8/libPhysX3VehicleDEBUG.a

clean_PhysXVehicle_debug: 
	@$(ECHO) clean PhysXVehicle debug
	@$(RMDIR) $(PhysXVehicle_debug_objsdir)
	@$(RMDIR) $(PhysXVehicle_debug_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVehicle/debug

build_PhysXVehicle_debug: postbuild_PhysXVehicle_debug
postbuild_PhysXVehicle_debug: mainbuild_PhysXVehicle_debug
mainbuild_PhysXVehicle_debug: prebuild_PhysXVehicle_debug $(PhysXVehicle_debug_bin)
prebuild_PhysXVehicle_debug:

$(PhysXVehicle_debug_bin): $(PhysXVehicle_debug_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysX3VehicleDEBUG.a`
	@$(AR) rcs $(PhysXVehicle_debug_bin) $(PhysXVehicle_debug_obj)
	@$(ECHO) building $@ complete!

PhysXVehicle_debug_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVehicle_debug_cpp_o): $(PhysXVehicle_debug_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVehicle_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cppfiles))))))
	@cp $(PhysXVehicle_debug_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  rm -f $(PhysXVehicle_debug_DEPDIR).d

$(PhysXVehicle_debug_c_o): $(PhysXVehicle_debug_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVehicle_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cfiles))))))
	@cp $(PhysXVehicle_debug_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_debug_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  rm -f $(PhysXVehicle_debug_DEPDIR).d

PhysXVehicle_checked_hpaths    := 
PhysXVehicle_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVehicle_checked_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVehicle_checked_hpaths    += ./../../../Include/foundation
PhysXVehicle_checked_hpaths    += ./../../foundation/include
PhysXVehicle_checked_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_checked_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_checked_hpaths    += ./../../../Include/vehicle
PhysXVehicle_checked_hpaths    += ./../../../Include/common
PhysXVehicle_checked_hpaths    += ./../../../Include/geometry
PhysXVehicle_checked_hpaths    += ./../../../Include/extensions
PhysXVehicle_checked_hpaths    += ./../../../Include/cloth
PhysXVehicle_checked_hpaths    += ./../../../Include
PhysXVehicle_checked_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_checked_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_checked_hpaths    += ./../../Common/src
PhysXVehicle_checked_hpaths    += ./../../PhysXVehicle/src
PhysXVehicle_checked_hpaths    += ./../../PhysXProfileSDK
PhysXVehicle_checked_hpaths    += ./../../PhysXMetaData/extensions/include
PhysXVehicle_checked_hpaths    += ./../../PhysXExtensions/src/serialization/Xml
PhysXVehicle_checked_hpaths    += ./../../PhysXMetaData/core/include
PhysXVehicle_checked_hpaths    += ./../../PhysXVehicle/src/PhysXMetaData/include
PhysXVehicle_checked_lpaths    := 
PhysXVehicle_checked_defines   := $(PhysXVehicle_custom_defines)
PhysXVehicle_checked_defines   += ANDROID
PhysXVehicle_checked_defines   += GLES2
PhysXVehicle_checked_defines   += __ARM_ARCH_5__
PhysXVehicle_checked_defines   += __ARM_ARCH_5T__
PhysXVehicle_checked_defines   += __ARM_ARCH_5E__
PhysXVehicle_checked_defines   += __ARM_ARCH_5TE__
PhysXVehicle_checked_defines   += PX_PHYSX_STATIC_LIB
PhysXVehicle_checked_defines   += NDEBUG
PhysXVehicle_checked_defines   += PX_CHECKED
PhysXVehicle_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
PhysXVehicle_checked_defines   += PX_NVTX
PhysXVehicle_checked_libraries := 
PhysXVehicle_checked_common_cflags	:= $(PhysXVehicle_custom_cflags)
PhysXVehicle_checked_common_cflags    += -MMD
PhysXVehicle_checked_common_cflags    += $(addprefix -D, $(PhysXVehicle_checked_defines))
PhysXVehicle_checked_common_cflags    += $(addprefix -I, $(PhysXVehicle_checked_hpaths))
PhysXVehicle_checked_cflags	:= $(PhysXVehicle_checked_common_cflags)
PhysXVehicle_checked_cflags  += -Werror
PhysXVehicle_checked_cflags  += -fpic -fno-exceptions
PhysXVehicle_checked_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_checked_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_checked_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_checked_cflags  += -Wno-long-long
PhysXVehicle_checked_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_checked_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_checked_cflags  += -Wno-variadic-macros
PhysXVehicle_checked_cflags  += -std=c99
PhysXVehicle_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
PhysXVehicle_checked_cflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVehicle_checked_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVehicle_checked_cppflags	:= $(PhysXVehicle_checked_common_cflags)
PhysXVehicle_checked_cppflags  += -Werror
PhysXVehicle_checked_cppflags  += -fno-rtti
PhysXVehicle_checked_cppflags  += -fpic -fno-exceptions
PhysXVehicle_checked_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_checked_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_checked_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_checked_cppflags  += -Wno-long-long
PhysXVehicle_checked_cppflags  += -Wno-invalid-offsetof
PhysXVehicle_checked_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_checked_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_checked_cppflags  += -Wno-variadic-macros
PhysXVehicle_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
PhysXVehicle_checked_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVehicle_checked_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVehicle_checked_lflags    := $(PhysXVehicle_custom_lflags)
PhysXVehicle_checked_lflags    += $(addprefix -L, $(PhysXVehicle_checked_lpaths))
PhysXVehicle_checked_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVehicle_checked_libraries)) -Wl,--end-group
PhysXVehicle_checked_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_checked_objsdir  = $(OBJS_DIR)/PhysXVehicle_checked
PhysXVehicle_checked_cpp_o    = $(addprefix $(PhysXVehicle_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_checked_c_o      = $(addprefix $(PhysXVehicle_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVehicle_cfiles)))))
PhysXVehicle_checked_obj      = $(PhysXVehicle_checked_cpp_o) $(PhysXVehicle_checked_c_o)
PhysXVehicle_checked_bin      := ./../../../Lib/android8/libPhysX3VehicleCHECKED.a

clean_PhysXVehicle_checked: 
	@$(ECHO) clean PhysXVehicle checked
	@$(RMDIR) $(PhysXVehicle_checked_objsdir)
	@$(RMDIR) $(PhysXVehicle_checked_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVehicle/checked

build_PhysXVehicle_checked: postbuild_PhysXVehicle_checked
postbuild_PhysXVehicle_checked: mainbuild_PhysXVehicle_checked
mainbuild_PhysXVehicle_checked: prebuild_PhysXVehicle_checked $(PhysXVehicle_checked_bin)
prebuild_PhysXVehicle_checked:

$(PhysXVehicle_checked_bin): $(PhysXVehicle_checked_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysX3VehicleCHECKED.a`
	@$(AR) rcs $(PhysXVehicle_checked_bin) $(PhysXVehicle_checked_obj)
	@$(ECHO) building $@ complete!

PhysXVehicle_checked_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVehicle_checked_cpp_o): $(PhysXVehicle_checked_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVehicle_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cppfiles))))))
	@cp $(PhysXVehicle_checked_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  rm -f $(PhysXVehicle_checked_DEPDIR).d

$(PhysXVehicle_checked_c_o): $(PhysXVehicle_checked_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVehicle_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cfiles))))))
	@cp $(PhysXVehicle_checked_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_checked_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  rm -f $(PhysXVehicle_checked_DEPDIR).d

PhysXVehicle_profile_hpaths    := 
PhysXVehicle_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVehicle_profile_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVehicle_profile_hpaths    += ./../../../Include/foundation
PhysXVehicle_profile_hpaths    += ./../../foundation/include
PhysXVehicle_profile_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_profile_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_profile_hpaths    += ./../../../Include/vehicle
PhysXVehicle_profile_hpaths    += ./../../../Include/common
PhysXVehicle_profile_hpaths    += ./../../../Include/geometry
PhysXVehicle_profile_hpaths    += ./../../../Include/extensions
PhysXVehicle_profile_hpaths    += ./../../../Include/cloth
PhysXVehicle_profile_hpaths    += ./../../../Include
PhysXVehicle_profile_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_profile_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_profile_hpaths    += ./../../Common/src
PhysXVehicle_profile_hpaths    += ./../../PhysXVehicle/src
PhysXVehicle_profile_hpaths    += ./../../PhysXProfileSDK
PhysXVehicle_profile_hpaths    += ./../../PhysXMetaData/extensions/include
PhysXVehicle_profile_hpaths    += ./../../PhysXExtensions/src/serialization/Xml
PhysXVehicle_profile_hpaths    += ./../../PhysXMetaData/core/include
PhysXVehicle_profile_hpaths    += ./../../PhysXVehicle/src/PhysXMetaData/include
PhysXVehicle_profile_lpaths    := 
PhysXVehicle_profile_defines   := $(PhysXVehicle_custom_defines)
PhysXVehicle_profile_defines   += ANDROID
PhysXVehicle_profile_defines   += GLES2
PhysXVehicle_profile_defines   += __ARM_ARCH_5__
PhysXVehicle_profile_defines   += __ARM_ARCH_5T__
PhysXVehicle_profile_defines   += __ARM_ARCH_5E__
PhysXVehicle_profile_defines   += __ARM_ARCH_5TE__
PhysXVehicle_profile_defines   += PX_PHYSX_STATIC_LIB
PhysXVehicle_profile_defines   += NDEBUG
PhysXVehicle_profile_defines   += PX_PROFILE
PhysXVehicle_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
PhysXVehicle_profile_defines   += PX_NVTX
PhysXVehicle_profile_libraries := 
PhysXVehicle_profile_common_cflags	:= $(PhysXVehicle_custom_cflags)
PhysXVehicle_profile_common_cflags    += -MMD
PhysXVehicle_profile_common_cflags    += $(addprefix -D, $(PhysXVehicle_profile_defines))
PhysXVehicle_profile_common_cflags    += $(addprefix -I, $(PhysXVehicle_profile_hpaths))
PhysXVehicle_profile_cflags	:= $(PhysXVehicle_profile_common_cflags)
PhysXVehicle_profile_cflags  += -Werror
PhysXVehicle_profile_cflags  += -fpic -fno-exceptions
PhysXVehicle_profile_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_profile_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_profile_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_profile_cflags  += -Wno-long-long
PhysXVehicle_profile_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_profile_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_profile_cflags  += -Wno-variadic-macros
PhysXVehicle_profile_cflags  += -std=c99
PhysXVehicle_profile_cflags  += -O3 -fno-strict-aliasing
PhysXVehicle_profile_cflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVehicle_profile_cflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVehicle_profile_cppflags	:= $(PhysXVehicle_profile_common_cflags)
PhysXVehicle_profile_cppflags  += -Werror
PhysXVehicle_profile_cppflags  += -fno-rtti
PhysXVehicle_profile_cppflags  += -fpic -fno-exceptions
PhysXVehicle_profile_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_profile_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_profile_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_profile_cppflags  += -Wno-long-long
PhysXVehicle_profile_cppflags  += -Wno-invalid-offsetof
PhysXVehicle_profile_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_profile_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_profile_cppflags  += -Wno-variadic-macros
PhysXVehicle_profile_cppflags  += -O3 -fno-strict-aliasing
PhysXVehicle_profile_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVehicle_profile_cppflags  += -fno-omit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVehicle_profile_lflags    := $(PhysXVehicle_custom_lflags)
PhysXVehicle_profile_lflags    += $(addprefix -L, $(PhysXVehicle_profile_lpaths))
PhysXVehicle_profile_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVehicle_profile_libraries)) -Wl,--end-group
PhysXVehicle_profile_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_profile_objsdir  = $(OBJS_DIR)/PhysXVehicle_profile
PhysXVehicle_profile_cpp_o    = $(addprefix $(PhysXVehicle_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_profile_c_o      = $(addprefix $(PhysXVehicle_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVehicle_cfiles)))))
PhysXVehicle_profile_obj      = $(PhysXVehicle_profile_cpp_o) $(PhysXVehicle_profile_c_o)
PhysXVehicle_profile_bin      := ./../../../Lib/android8/libPhysX3VehiclePROFILE.a

clean_PhysXVehicle_profile: 
	@$(ECHO) clean PhysXVehicle profile
	@$(RMDIR) $(PhysXVehicle_profile_objsdir)
	@$(RMDIR) $(PhysXVehicle_profile_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVehicle/profile

build_PhysXVehicle_profile: postbuild_PhysXVehicle_profile
postbuild_PhysXVehicle_profile: mainbuild_PhysXVehicle_profile
mainbuild_PhysXVehicle_profile: prebuild_PhysXVehicle_profile $(PhysXVehicle_profile_bin)
prebuild_PhysXVehicle_profile:

$(PhysXVehicle_profile_bin): $(PhysXVehicle_profile_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysX3VehiclePROFILE.a`
	@$(AR) rcs $(PhysXVehicle_profile_bin) $(PhysXVehicle_profile_obj)
	@$(ECHO) building $@ complete!

PhysXVehicle_profile_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVehicle_profile_cpp_o): $(PhysXVehicle_profile_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVehicle_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cppfiles))))))
	@cp $(PhysXVehicle_profile_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  rm -f $(PhysXVehicle_profile_DEPDIR).d

$(PhysXVehicle_profile_c_o): $(PhysXVehicle_profile_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVehicle_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cfiles))))))
	@cp $(PhysXVehicle_profile_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_profile_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  rm -f $(PhysXVehicle_profile_DEPDIR).d

PhysXVehicle_release_hpaths    := 
PhysXVehicle_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/include
PhysXVehicle_release_hpaths    += ./../../../externals/android-ndk-r9d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi-v7a/include
PhysXVehicle_release_hpaths    += ./../../../Include/foundation
PhysXVehicle_release_hpaths    += ./../../foundation/include
PhysXVehicle_release_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_release_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_release_hpaths    += ./../../../Include/vehicle
PhysXVehicle_release_hpaths    += ./../../../Include/common
PhysXVehicle_release_hpaths    += ./../../../Include/geometry
PhysXVehicle_release_hpaths    += ./../../../Include/extensions
PhysXVehicle_release_hpaths    += ./../../../Include/cloth
PhysXVehicle_release_hpaths    += ./../../../Include
PhysXVehicle_release_hpaths    += ./../../../Include/physxvisualdebuggersdk
PhysXVehicle_release_hpaths    += ./../../../Include/physxprofilesdk
PhysXVehicle_release_hpaths    += ./../../Common/src
PhysXVehicle_release_hpaths    += ./../../PhysXVehicle/src
PhysXVehicle_release_hpaths    += ./../../PhysXProfileSDK
PhysXVehicle_release_hpaths    += ./../../PhysXMetaData/extensions/include
PhysXVehicle_release_hpaths    += ./../../PhysXExtensions/src/serialization/Xml
PhysXVehicle_release_hpaths    += ./../../PhysXMetaData/core/include
PhysXVehicle_release_hpaths    += ./../../PhysXVehicle/src/PhysXMetaData/include
PhysXVehicle_release_lpaths    := 
PhysXVehicle_release_defines   := $(PhysXVehicle_custom_defines)
PhysXVehicle_release_defines   += ANDROID
PhysXVehicle_release_defines   += GLES2
PhysXVehicle_release_defines   += __ARM_ARCH_5__
PhysXVehicle_release_defines   += __ARM_ARCH_5T__
PhysXVehicle_release_defines   += __ARM_ARCH_5E__
PhysXVehicle_release_defines   += __ARM_ARCH_5TE__
PhysXVehicle_release_defines   += PX_PHYSX_STATIC_LIB
PhysXVehicle_release_defines   += NDEBUG
PhysXVehicle_release_libraries := 
PhysXVehicle_release_common_cflags	:= $(PhysXVehicle_custom_cflags)
PhysXVehicle_release_common_cflags    += -MMD
PhysXVehicle_release_common_cflags    += $(addprefix -D, $(PhysXVehicle_release_defines))
PhysXVehicle_release_common_cflags    += $(addprefix -I, $(PhysXVehicle_release_hpaths))
PhysXVehicle_release_cflags	:= $(PhysXVehicle_release_common_cflags)
PhysXVehicle_release_cflags  += -Werror
PhysXVehicle_release_cflags  += -fpic -fno-exceptions
PhysXVehicle_release_cflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_release_cflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_release_cflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_release_cflags  += -Wno-long-long
PhysXVehicle_release_cflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_release_cflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_release_cflags  += -Wno-variadic-macros
PhysXVehicle_release_cflags  += -std=c99
PhysXVehicle_release_cflags  += -O3 -fno-strict-aliasing
PhysXVehicle_release_cflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVehicle_release_cflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVehicle_release_cppflags	:= $(PhysXVehicle_release_common_cflags)
PhysXVehicle_release_cppflags  += -Werror
PhysXVehicle_release_cppflags  += -fno-rtti
PhysXVehicle_release_cppflags  += -fpic -fno-exceptions
PhysXVehicle_release_cppflags  += -isysroot ../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_release_cppflags  += -march=armv7-a -mfpu=vfpv3-d16 -marm -mfloat-abi=softfp -mthumb-interwork
PhysXVehicle_release_cppflags  += -Wall -Wextra -Wpedantic -Wstrict-aliasing=2
PhysXVehicle_release_cppflags  += -Wno-long-long
PhysXVehicle_release_cppflags  += -Wno-invalid-offsetof
PhysXVehicle_release_cppflags  += -Wno-unknown-pragmas -Wno-maybe-uninitialized -Wno-unused-variable -Wno-unused-local-typedefs
PhysXVehicle_release_cppflags  += -Wno-unused-parameter -Wno-enum-compare
PhysXVehicle_release_cppflags  += -Wno-variadic-macros
PhysXVehicle_release_cppflags  += -O3 -fno-strict-aliasing
PhysXVehicle_release_cppflags  += -ffunction-sections -funwind-tables -fstack-protector
PhysXVehicle_release_cppflags  += -fomit-frame-pointer -funswitch-loops -finline-limit=300
PhysXVehicle_release_lflags    := $(PhysXVehicle_custom_lflags)
PhysXVehicle_release_lflags    += $(addprefix -L, $(PhysXVehicle_release_lpaths))
PhysXVehicle_release_lflags    += -Wl,--start-group $(addprefix -l, $(PhysXVehicle_release_libraries)) -Wl,--end-group
PhysXVehicle_release_lflags  += --sysroot=../../../externals/android-ndk-r9d/platforms/android-8/arch-arm
PhysXVehicle_release_objsdir  = $(OBJS_DIR)/PhysXVehicle_release
PhysXVehicle_release_cpp_o    = $(addprefix $(PhysXVehicle_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(PhysXVehicle_cppfiles)))))
PhysXVehicle_release_c_o      = $(addprefix $(PhysXVehicle_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(PhysXVehicle_cfiles)))))
PhysXVehicle_release_obj      = $(PhysXVehicle_release_cpp_o) $(PhysXVehicle_release_c_o)
PhysXVehicle_release_bin      := ./../../../Lib/android8/libPhysX3Vehicle.a

clean_PhysXVehicle_release: 
	@$(ECHO) clean PhysXVehicle release
	@$(RMDIR) $(PhysXVehicle_release_objsdir)
	@$(RMDIR) $(PhysXVehicle_release_bin)
	@$(RMDIR) $(DEPSDIR)/PhysXVehicle/release

build_PhysXVehicle_release: postbuild_PhysXVehicle_release
postbuild_PhysXVehicle_release: mainbuild_PhysXVehicle_release
mainbuild_PhysXVehicle_release: prebuild_PhysXVehicle_release $(PhysXVehicle_release_bin)
prebuild_PhysXVehicle_release:

$(PhysXVehicle_release_bin): $(PhysXVehicle_release_obj) 
	@mkdir -p `dirname ./../../../Lib/android8/libPhysX3Vehicle.a`
	@$(AR) rcs $(PhysXVehicle_release_bin) $(PhysXVehicle_release_obj)
	@$(ECHO) building $@ complete!

PhysXVehicle_release_DEPDIR = $(dir $(@))/$(*F)
$(PhysXVehicle_release_cpp_o): $(PhysXVehicle_release_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(PhysXVehicle_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cppfiles))))))
	@cp $(PhysXVehicle_release_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cppfiles))))).P; \
	  rm -f $(PhysXVehicle_release_DEPDIR).d

$(PhysXVehicle_release_c_o): $(PhysXVehicle_release_objsdir)/%.o:
	@$(ECHO) PhysXVehicle: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(PhysXVehicle_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cfiles))))))
	@cp $(PhysXVehicle_release_DEPDIR).d $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(PhysXVehicle_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/PhysXVehicle/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(PhysXVehicle_release_objsdir),, $@))), $(PhysXVehicle_cfiles))))).P; \
	  rm -f $(PhysXVehicle_release_DEPDIR).d

clean_PhysXVehicle:  clean_PhysXVehicle_debug clean_PhysXVehicle_checked clean_PhysXVehicle_profile clean_PhysXVehicle_release
	@$(RMDIR) $(DEPSDIR)/PhysXVehicle
