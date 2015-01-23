# Makefile generated by XPJ for osx32
-include Makefile.custom
ProjectName = SceneQuery
SceneQuery_custom_cflags := -isysroot $(APPLE_OSX_SDK_CURRENT_VERSION)
SceneQuery_custom_lflags := -isysroot $(APPLE_OSX_SDK_CURRENT_VERSION)
SceneQuery_cppfiles   += ./../../SceneQuery/SqAABBPruner.cpp
SceneQuery_cppfiles   += ./../../SceneQuery/SqAABBTree.cpp
SceneQuery_cppfiles   += ./../../SceneQuery/SqAABBTreeUpdateMap.cpp
SceneQuery_cppfiles   += ./../../SceneQuery/SqBucketPruner.cpp
SceneQuery_cppfiles   += ./../../SceneQuery/SqPruningPool.cpp
SceneQuery_cppfiles   += ./../../SceneQuery/SqSceneQueryManager.cpp
SceneQuery_cppfiles   += ./../../SceneQuery/SqUtilities.cpp

SceneQuery_cpp_debug_dep    = $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SceneQuery_cppfiles)))))
SceneQuery_c_debug_dep      = $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SceneQuery_cfiles)))))
SceneQuery_debug_dep      = $(SceneQuery_cpp_debug_dep) $(SceneQuery_c_debug_dep)
-include $(SceneQuery_debug_dep)
SceneQuery_cpp_checked_dep    = $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SceneQuery_cppfiles)))))
SceneQuery_c_checked_dep      = $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SceneQuery_cfiles)))))
SceneQuery_checked_dep      = $(SceneQuery_cpp_checked_dep) $(SceneQuery_c_checked_dep)
-include $(SceneQuery_checked_dep)
SceneQuery_cpp_profile_dep    = $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SceneQuery_cppfiles)))))
SceneQuery_c_profile_dep      = $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SceneQuery_cfiles)))))
SceneQuery_profile_dep      = $(SceneQuery_cpp_profile_dep) $(SceneQuery_c_profile_dep)
-include $(SceneQuery_profile_dep)
SceneQuery_cpp_release_dep    = $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SceneQuery_cppfiles)))))
SceneQuery_c_release_dep      = $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SceneQuery_cfiles)))))
SceneQuery_release_dep      = $(SceneQuery_cpp_release_dep) $(SceneQuery_c_release_dep)
-include $(SceneQuery_release_dep)
SceneQuery_debug_hpaths    := 
SceneQuery_debug_hpaths    += ./../../../Include/foundation
SceneQuery_debug_hpaths    += ./../../foundation/include
SceneQuery_debug_hpaths    += ./../../../Include/physxprofilesdk
SceneQuery_debug_hpaths    += ./../../../Include/physxvisualdebuggersdk
SceneQuery_debug_hpaths    += ./../../../Include/common
SceneQuery_debug_hpaths    += ./../../../Include/geometry
SceneQuery_debug_hpaths    += ./../../../Include/pvd
SceneQuery_debug_hpaths    += ./../../../Include/pxtask
SceneQuery_debug_hpaths    += ./../../../Include
SceneQuery_debug_hpaths    += ./../../Common/src
SceneQuery_debug_hpaths    += ./../../Common/src/unix
SceneQuery_debug_hpaths    += ./../../GeomUtils/headers
SceneQuery_debug_hpaths    += ./../../GeomUtils/src
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/contact
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/common
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/convex
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/distance
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/sweep
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/gjk
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/intersection
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/mesh
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/hf
SceneQuery_debug_hpaths    += ./../../GeomUtils/src/pcm
SceneQuery_debug_hpaths    += ./../../SceneQuery
SceneQuery_debug_hpaths    += ./../../SimulationController/include
SceneQuery_debug_hpaths    += ./../../LowLevel/API/include
SceneQuery_debug_hpaths    += ./../../LowLevel/ps3/include
SceneQuery_debug_hpaths    += ./../../PhysX/src
SceneQuery_debug_hpaths    += ./../../PhysX/src/buffering
SceneQuery_debug_hpaths    += ./../../PvdRuntime/src
SceneQuery_debug_lpaths    := 
SceneQuery_debug_defines   := $(SceneQuery_custom_defines)
SceneQuery_debug_defines   += PX_PHYSX_STATIC_LIB
SceneQuery_debug_defines   += _DEBUG
SceneQuery_debug_defines   += PX_DEBUG
SceneQuery_debug_defines   += PX_CHECKED
SceneQuery_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SceneQuery_debug_libraries := 
SceneQuery_debug_common_cflags	:= $(SceneQuery_custom_cflags)
SceneQuery_debug_common_cflags    += -MMD
SceneQuery_debug_common_cflags    += $(addprefix -D, $(SceneQuery_debug_defines))
SceneQuery_debug_common_cflags    += $(addprefix -I, $(SceneQuery_debug_hpaths))
SceneQuery_debug_cflags	:= $(SceneQuery_debug_common_cflags)
SceneQuery_debug_cflags  += -arch i386
SceneQuery_debug_cflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_debug_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_debug_cflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_debug_cflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_debug_cflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_debug_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_debug_cflags  += -Wno-unused-parameter
SceneQuery_debug_cflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_debug_cflags  += -g3 -gdwarf-2 -O0
SceneQuery_debug_cppflags	:= $(SceneQuery_debug_common_cflags)
SceneQuery_debug_cppflags  += -arch i386
SceneQuery_debug_cppflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_debug_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_debug_cppflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_debug_cppflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_debug_cppflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_debug_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_debug_cppflags  += -Wno-unused-parameter
SceneQuery_debug_cppflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_debug_cppflags  += -g3 -gdwarf-2 -O0
SceneQuery_debug_lflags    := $(SceneQuery_custom_lflags)
SceneQuery_debug_lflags    += $(addprefix -L, $(SceneQuery_debug_lpaths))
SceneQuery_debug_lflags  += $(addprefix -l, $(SceneQuery_debug_libraries))
SceneQuery_debug_lflags  += -arch i386
SceneQuery_debug_objsdir  = $(OBJS_DIR)/SceneQuery_debug
SceneQuery_debug_cpp_o    = $(addprefix $(SceneQuery_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SceneQuery_cppfiles)))))
SceneQuery_debug_c_o      = $(addprefix $(SceneQuery_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SceneQuery_cfiles)))))
SceneQuery_debug_obj      = $(SceneQuery_debug_cpp_o) $(SceneQuery_debug_c_o)
SceneQuery_debug_bin      := ./../../../Lib/osx32/libSceneQueryDEBUG.a

clean_SceneQuery_debug: 
	@$(ECHO) clean SceneQuery debug
	@$(RMDIR) $(SceneQuery_debug_objsdir)
	@$(RMDIR) $(SceneQuery_debug_bin)
	@$(RMDIR) $(DEPSDIR)/SceneQuery/debug

build_SceneQuery_debug: postbuild_SceneQuery_debug
postbuild_SceneQuery_debug: mainbuild_SceneQuery_debug
mainbuild_SceneQuery_debug: prebuild_SceneQuery_debug $(SceneQuery_debug_bin)
prebuild_SceneQuery_debug:

$(SceneQuery_debug_bin): $(SceneQuery_debug_obj) 
	@mkdir -p `dirname ./../../../Lib/osx32/libSceneQueryDEBUG.a`
	@$(AR) rcs $(SceneQuery_debug_bin) $(SceneQuery_debug_obj)
	@$(ECHO) building $@ complete!

SceneQuery_debug_DEPDIR = $(dir $(@))/$(*F)
$(SceneQuery_debug_cpp_o): $(SceneQuery_debug_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SceneQuery_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cppfiles))))))
	@cp $(SceneQuery_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  rm -f $(SceneQuery_debug_DEPDIR).d

$(SceneQuery_debug_c_o): $(SceneQuery_debug_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SceneQuery_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cfiles))))))
	@cp $(SceneQuery_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_debug_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  rm -f $(SceneQuery_debug_DEPDIR).d

SceneQuery_checked_hpaths    := 
SceneQuery_checked_hpaths    += ./../../../Include/foundation
SceneQuery_checked_hpaths    += ./../../foundation/include
SceneQuery_checked_hpaths    += ./../../../Include/physxprofilesdk
SceneQuery_checked_hpaths    += ./../../../Include/physxvisualdebuggersdk
SceneQuery_checked_hpaths    += ./../../../Include/common
SceneQuery_checked_hpaths    += ./../../../Include/geometry
SceneQuery_checked_hpaths    += ./../../../Include/pvd
SceneQuery_checked_hpaths    += ./../../../Include/pxtask
SceneQuery_checked_hpaths    += ./../../../Include
SceneQuery_checked_hpaths    += ./../../Common/src
SceneQuery_checked_hpaths    += ./../../Common/src/unix
SceneQuery_checked_hpaths    += ./../../GeomUtils/headers
SceneQuery_checked_hpaths    += ./../../GeomUtils/src
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/contact
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/common
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/convex
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/distance
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/sweep
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/gjk
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/intersection
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/mesh
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/hf
SceneQuery_checked_hpaths    += ./../../GeomUtils/src/pcm
SceneQuery_checked_hpaths    += ./../../SceneQuery
SceneQuery_checked_hpaths    += ./../../SimulationController/include
SceneQuery_checked_hpaths    += ./../../LowLevel/API/include
SceneQuery_checked_hpaths    += ./../../LowLevel/ps3/include
SceneQuery_checked_hpaths    += ./../../PhysX/src
SceneQuery_checked_hpaths    += ./../../PhysX/src/buffering
SceneQuery_checked_hpaths    += ./../../PvdRuntime/src
SceneQuery_checked_lpaths    := 
SceneQuery_checked_defines   := $(SceneQuery_custom_defines)
SceneQuery_checked_defines   += PX_PHYSX_STATIC_LIB
SceneQuery_checked_defines   += NDEBUG
SceneQuery_checked_defines   += PX_CHECKED
SceneQuery_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SceneQuery_checked_libraries := 
SceneQuery_checked_common_cflags	:= $(SceneQuery_custom_cflags)
SceneQuery_checked_common_cflags    += -MMD
SceneQuery_checked_common_cflags    += $(addprefix -D, $(SceneQuery_checked_defines))
SceneQuery_checked_common_cflags    += $(addprefix -I, $(SceneQuery_checked_hpaths))
SceneQuery_checked_cflags	:= $(SceneQuery_checked_common_cflags)
SceneQuery_checked_cflags  += -arch i386
SceneQuery_checked_cflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_checked_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_checked_cflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_checked_cflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_checked_cflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_checked_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_checked_cflags  += -Wno-unused-parameter
SceneQuery_checked_cflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SceneQuery_checked_cppflags	:= $(SceneQuery_checked_common_cflags)
SceneQuery_checked_cppflags  += -arch i386
SceneQuery_checked_cppflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_checked_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_checked_cppflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_checked_cppflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_checked_cppflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_checked_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_checked_cppflags  += -Wno-unused-parameter
SceneQuery_checked_cppflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SceneQuery_checked_lflags    := $(SceneQuery_custom_lflags)
SceneQuery_checked_lflags    += $(addprefix -L, $(SceneQuery_checked_lpaths))
SceneQuery_checked_lflags  += $(addprefix -l, $(SceneQuery_checked_libraries))
SceneQuery_checked_lflags  += -arch i386
SceneQuery_checked_objsdir  = $(OBJS_DIR)/SceneQuery_checked
SceneQuery_checked_cpp_o    = $(addprefix $(SceneQuery_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SceneQuery_cppfiles)))))
SceneQuery_checked_c_o      = $(addprefix $(SceneQuery_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SceneQuery_cfiles)))))
SceneQuery_checked_obj      = $(SceneQuery_checked_cpp_o) $(SceneQuery_checked_c_o)
SceneQuery_checked_bin      := ./../../../Lib/osx32/libSceneQueryCHECKED.a

clean_SceneQuery_checked: 
	@$(ECHO) clean SceneQuery checked
	@$(RMDIR) $(SceneQuery_checked_objsdir)
	@$(RMDIR) $(SceneQuery_checked_bin)
	@$(RMDIR) $(DEPSDIR)/SceneQuery/checked

build_SceneQuery_checked: postbuild_SceneQuery_checked
postbuild_SceneQuery_checked: mainbuild_SceneQuery_checked
mainbuild_SceneQuery_checked: prebuild_SceneQuery_checked $(SceneQuery_checked_bin)
prebuild_SceneQuery_checked:

$(SceneQuery_checked_bin): $(SceneQuery_checked_obj) 
	@mkdir -p `dirname ./../../../Lib/osx32/libSceneQueryCHECKED.a`
	@$(AR) rcs $(SceneQuery_checked_bin) $(SceneQuery_checked_obj)
	@$(ECHO) building $@ complete!

SceneQuery_checked_DEPDIR = $(dir $(@))/$(*F)
$(SceneQuery_checked_cpp_o): $(SceneQuery_checked_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SceneQuery_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cppfiles))))))
	@cp $(SceneQuery_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  rm -f $(SceneQuery_checked_DEPDIR).d

$(SceneQuery_checked_c_o): $(SceneQuery_checked_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SceneQuery_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cfiles))))))
	@cp $(SceneQuery_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_checked_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  rm -f $(SceneQuery_checked_DEPDIR).d

SceneQuery_profile_hpaths    := 
SceneQuery_profile_hpaths    += ./../../../Include/foundation
SceneQuery_profile_hpaths    += ./../../foundation/include
SceneQuery_profile_hpaths    += ./../../../Include/physxprofilesdk
SceneQuery_profile_hpaths    += ./../../../Include/physxvisualdebuggersdk
SceneQuery_profile_hpaths    += ./../../../Include/common
SceneQuery_profile_hpaths    += ./../../../Include/geometry
SceneQuery_profile_hpaths    += ./../../../Include/pvd
SceneQuery_profile_hpaths    += ./../../../Include/pxtask
SceneQuery_profile_hpaths    += ./../../../Include
SceneQuery_profile_hpaths    += ./../../Common/src
SceneQuery_profile_hpaths    += ./../../Common/src/unix
SceneQuery_profile_hpaths    += ./../../GeomUtils/headers
SceneQuery_profile_hpaths    += ./../../GeomUtils/src
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/contact
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/common
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/convex
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/distance
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/sweep
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/gjk
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/intersection
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/mesh
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/hf
SceneQuery_profile_hpaths    += ./../../GeomUtils/src/pcm
SceneQuery_profile_hpaths    += ./../../SceneQuery
SceneQuery_profile_hpaths    += ./../../SimulationController/include
SceneQuery_profile_hpaths    += ./../../LowLevel/API/include
SceneQuery_profile_hpaths    += ./../../LowLevel/ps3/include
SceneQuery_profile_hpaths    += ./../../PhysX/src
SceneQuery_profile_hpaths    += ./../../PhysX/src/buffering
SceneQuery_profile_hpaths    += ./../../PvdRuntime/src
SceneQuery_profile_lpaths    := 
SceneQuery_profile_defines   := $(SceneQuery_custom_defines)
SceneQuery_profile_defines   += PX_PHYSX_STATIC_LIB
SceneQuery_profile_defines   += NDEBUG
SceneQuery_profile_defines   += PX_PROFILE
SceneQuery_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SceneQuery_profile_libraries := 
SceneQuery_profile_common_cflags	:= $(SceneQuery_custom_cflags)
SceneQuery_profile_common_cflags    += -MMD
SceneQuery_profile_common_cflags    += $(addprefix -D, $(SceneQuery_profile_defines))
SceneQuery_profile_common_cflags    += $(addprefix -I, $(SceneQuery_profile_hpaths))
SceneQuery_profile_cflags	:= $(SceneQuery_profile_common_cflags)
SceneQuery_profile_cflags  += -arch i386
SceneQuery_profile_cflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_profile_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_profile_cflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_profile_cflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_profile_cflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_profile_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_profile_cflags  += -Wno-unused-parameter
SceneQuery_profile_cflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_profile_cflags  += -O3 -fno-strict-aliasing
SceneQuery_profile_cppflags	:= $(SceneQuery_profile_common_cflags)
SceneQuery_profile_cppflags  += -arch i386
SceneQuery_profile_cppflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_profile_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_profile_cppflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_profile_cppflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_profile_cppflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_profile_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_profile_cppflags  += -Wno-unused-parameter
SceneQuery_profile_cppflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_profile_cppflags  += -O3 -fno-strict-aliasing
SceneQuery_profile_lflags    := $(SceneQuery_custom_lflags)
SceneQuery_profile_lflags    += $(addprefix -L, $(SceneQuery_profile_lpaths))
SceneQuery_profile_lflags  += $(addprefix -l, $(SceneQuery_profile_libraries))
SceneQuery_profile_lflags  += -arch i386
SceneQuery_profile_objsdir  = $(OBJS_DIR)/SceneQuery_profile
SceneQuery_profile_cpp_o    = $(addprefix $(SceneQuery_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SceneQuery_cppfiles)))))
SceneQuery_profile_c_o      = $(addprefix $(SceneQuery_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SceneQuery_cfiles)))))
SceneQuery_profile_obj      = $(SceneQuery_profile_cpp_o) $(SceneQuery_profile_c_o)
SceneQuery_profile_bin      := ./../../../Lib/osx32/libSceneQueryPROFILE.a

clean_SceneQuery_profile: 
	@$(ECHO) clean SceneQuery profile
	@$(RMDIR) $(SceneQuery_profile_objsdir)
	@$(RMDIR) $(SceneQuery_profile_bin)
	@$(RMDIR) $(DEPSDIR)/SceneQuery/profile

build_SceneQuery_profile: postbuild_SceneQuery_profile
postbuild_SceneQuery_profile: mainbuild_SceneQuery_profile
mainbuild_SceneQuery_profile: prebuild_SceneQuery_profile $(SceneQuery_profile_bin)
prebuild_SceneQuery_profile:

$(SceneQuery_profile_bin): $(SceneQuery_profile_obj) 
	@mkdir -p `dirname ./../../../Lib/osx32/libSceneQueryPROFILE.a`
	@$(AR) rcs $(SceneQuery_profile_bin) $(SceneQuery_profile_obj)
	@$(ECHO) building $@ complete!

SceneQuery_profile_DEPDIR = $(dir $(@))/$(*F)
$(SceneQuery_profile_cpp_o): $(SceneQuery_profile_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SceneQuery_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cppfiles))))))
	@cp $(SceneQuery_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  rm -f $(SceneQuery_profile_DEPDIR).d

$(SceneQuery_profile_c_o): $(SceneQuery_profile_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SceneQuery_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cfiles))))))
	@cp $(SceneQuery_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_profile_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  rm -f $(SceneQuery_profile_DEPDIR).d

SceneQuery_release_hpaths    := 
SceneQuery_release_hpaths    += ./../../../Include/foundation
SceneQuery_release_hpaths    += ./../../foundation/include
SceneQuery_release_hpaths    += ./../../../Include/physxprofilesdk
SceneQuery_release_hpaths    += ./../../../Include/physxvisualdebuggersdk
SceneQuery_release_hpaths    += ./../../../Include/common
SceneQuery_release_hpaths    += ./../../../Include/geometry
SceneQuery_release_hpaths    += ./../../../Include/pvd
SceneQuery_release_hpaths    += ./../../../Include/pxtask
SceneQuery_release_hpaths    += ./../../../Include
SceneQuery_release_hpaths    += ./../../Common/src
SceneQuery_release_hpaths    += ./../../Common/src/unix
SceneQuery_release_hpaths    += ./../../GeomUtils/headers
SceneQuery_release_hpaths    += ./../../GeomUtils/src
SceneQuery_release_hpaths    += ./../../GeomUtils/src/contact
SceneQuery_release_hpaths    += ./../../GeomUtils/src/common
SceneQuery_release_hpaths    += ./../../GeomUtils/src/convex
SceneQuery_release_hpaths    += ./../../GeomUtils/src/distance
SceneQuery_release_hpaths    += ./../../GeomUtils/src/sweep
SceneQuery_release_hpaths    += ./../../GeomUtils/src/gjk
SceneQuery_release_hpaths    += ./../../GeomUtils/src/intersection
SceneQuery_release_hpaths    += ./../../GeomUtils/src/mesh
SceneQuery_release_hpaths    += ./../../GeomUtils/src/hf
SceneQuery_release_hpaths    += ./../../GeomUtils/src/pcm
SceneQuery_release_hpaths    += ./../../SceneQuery
SceneQuery_release_hpaths    += ./../../SimulationController/include
SceneQuery_release_hpaths    += ./../../LowLevel/API/include
SceneQuery_release_hpaths    += ./../../LowLevel/ps3/include
SceneQuery_release_hpaths    += ./../../PhysX/src
SceneQuery_release_hpaths    += ./../../PhysX/src/buffering
SceneQuery_release_hpaths    += ./../../PvdRuntime/src
SceneQuery_release_lpaths    := 
SceneQuery_release_defines   := $(SceneQuery_custom_defines)
SceneQuery_release_defines   += PX_PHYSX_STATIC_LIB
SceneQuery_release_defines   += NDEBUG
SceneQuery_release_libraries := 
SceneQuery_release_common_cflags	:= $(SceneQuery_custom_cflags)
SceneQuery_release_common_cflags    += -MMD
SceneQuery_release_common_cflags    += $(addprefix -D, $(SceneQuery_release_defines))
SceneQuery_release_common_cflags    += $(addprefix -I, $(SceneQuery_release_hpaths))
SceneQuery_release_cflags	:= $(SceneQuery_release_common_cflags)
SceneQuery_release_cflags  += -arch i386
SceneQuery_release_cflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_release_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_release_cflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_release_cflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_release_cflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_release_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_release_cflags  += -Wno-unused-parameter
SceneQuery_release_cflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_release_cflags  += -O3 -fno-strict-aliasing
SceneQuery_release_cppflags	:= $(SceneQuery_release_common_cflags)
SceneQuery_release_cppflags  += -arch i386
SceneQuery_release_cppflags  += -pipe -mmacosx-version-min=10.5 -msse2 -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -Werror
SceneQuery_release_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -Weverything
SceneQuery_release_cppflags  += -Wno-pedantic -Wno-unknown-warning-option
SceneQuery_release_cppflags  += -Wno-long-long -Wno-newline-eof -Wno-extended-offsetof
SceneQuery_release_cppflags  += -Wno-float-equal -Wno-documentation-deprecated-sync -Wno-conversion -Wno-weak-vtables -Wno-unreachable-code -Wno-format-nonliteral -Wno-cast-align -Wno-documentation -Wno-covered-switch-default -Wno-documentation-unknown-command -Wno-padded
SceneQuery_release_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof
SceneQuery_release_cppflags  += -Wno-unused-parameter
SceneQuery_release_cppflags  += -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-template-vtables -Wno-shift-sign-overflow -Wno-missing-noreturn -Wno-missing-variable-declarations -Wno-switch-enum -Wno-undef -Wno-unused-macros -Wno-c99-extensions -Wno-missing-prototypes -Wno-shadow -Wno-unused-member-function -Wno-used-but-marked-unused -Wno-header-hygiene -Wno-variadic-macros
SceneQuery_release_cppflags  += -O3 -fno-strict-aliasing
SceneQuery_release_lflags    := $(SceneQuery_custom_lflags)
SceneQuery_release_lflags    += $(addprefix -L, $(SceneQuery_release_lpaths))
SceneQuery_release_lflags  += $(addprefix -l, $(SceneQuery_release_libraries))
SceneQuery_release_lflags  += -arch i386
SceneQuery_release_objsdir  = $(OBJS_DIR)/SceneQuery_release
SceneQuery_release_cpp_o    = $(addprefix $(SceneQuery_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SceneQuery_cppfiles)))))
SceneQuery_release_c_o      = $(addprefix $(SceneQuery_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SceneQuery_cfiles)))))
SceneQuery_release_obj      = $(SceneQuery_release_cpp_o) $(SceneQuery_release_c_o)
SceneQuery_release_bin      := ./../../../Lib/osx32/libSceneQuery.a

clean_SceneQuery_release: 
	@$(ECHO) clean SceneQuery release
	@$(RMDIR) $(SceneQuery_release_objsdir)
	@$(RMDIR) $(SceneQuery_release_bin)
	@$(RMDIR) $(DEPSDIR)/SceneQuery/release

build_SceneQuery_release: postbuild_SceneQuery_release
postbuild_SceneQuery_release: mainbuild_SceneQuery_release
mainbuild_SceneQuery_release: prebuild_SceneQuery_release $(SceneQuery_release_bin)
prebuild_SceneQuery_release:

$(SceneQuery_release_bin): $(SceneQuery_release_obj) 
	@mkdir -p `dirname ./../../../Lib/osx32/libSceneQuery.a`
	@$(AR) rcs $(SceneQuery_release_bin) $(SceneQuery_release_obj)
	@$(ECHO) building $@ complete!

SceneQuery_release_DEPDIR = $(dir $(@))/$(*F)
$(SceneQuery_release_cpp_o): $(SceneQuery_release_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cppfiles))...
	@mkdir -p $(dir $(@))
	@$(CXX) $(SceneQuery_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cppfiles))))))
	@cp $(SceneQuery_release_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cppfiles))))).P; \
	  rm -f $(SceneQuery_release_DEPDIR).d

$(SceneQuery_release_c_o): $(SceneQuery_release_objsdir)/%.o:
	@$(ECHO) SceneQuery: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cfiles))...
	@mkdir -p $(dir $(@))
	@$(CC) $(SceneQuery_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cfiles))))))
	@cp $(SceneQuery_release_DEPDIR).d $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SceneQuery_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SceneQuery/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SceneQuery_release_objsdir),, $@))), $(SceneQuery_cfiles))))).P; \
	  rm -f $(SceneQuery_release_DEPDIR).d

clean_SceneQuery:  clean_SceneQuery_debug clean_SceneQuery_checked clean_SceneQuery_profile clean_SceneQuery_release
	@$(RMDIR) $(DEPSDIR)/SceneQuery
