#############################################################################
# Makefile for building: rsa
# Generated by qmake (2.01a) (Qt 4.8.0) on: ?? 22. ??? 23:09:33 2013
# Project:  rsa.pro
# Template: app
# Command: c:\qtsdk\desktop\qt\4.8.0\msvc2008\bin\qmake.exe -spec ..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\win32-msvc2008 CONFIG+=declarative_debug -o Makefile rsa.pro
#############################################################################

first: debug
install: debug-install
uninstall: debug-uninstall
MAKEFILE      = Makefile
QMAKE         = c:\qtsdk\desktop\qt\4.8.0\msvc2008\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
SUBTARGETS    =  \
		debug \
		release

debug: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: rsa.pro  ..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\win32-msvc2008\qmake.conf ..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\qconfig.pri \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\modules\qt_webkit_version.pri \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\qt_functions.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\qt_config.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\exclusive_builds.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\default_pre.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\default_pre.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\debug.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\debug_and_release.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\default_post.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\default_post.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\declarative_debug.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\rtti.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\exceptions.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\stl.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\shared.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\embed_manifest_exe.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\embed_manifest_dll.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\warn_on.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\qt.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\thread.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\moc.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\windows.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\resources.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\uic.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\yacc.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\lex.prf \
		..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\include_source_dir.prf \
		c:\QtSDK\Desktop\Qt\4.8.0\msvc2008\lib\qtmaind.prl
	$(QMAKE) -spec ..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\win32-msvc2008 CONFIG+=declarative_debug -o Makefile rsa.pro
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\qconfig.pri:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\modules\qt_webkit_version.pri:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\qt_functions.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\qt_config.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\exclusive_builds.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\default_pre.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\default_pre.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\debug.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\debug_and_release.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\default_post.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\default_post.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\declarative_debug.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\rtti.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\exceptions.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\stl.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\shared.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\embed_manifest_exe.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\embed_manifest_dll.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\warn_on.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\qt.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\thread.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\moc.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\win32\windows.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\resources.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\uic.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\yacc.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\lex.prf:
..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\features\include_source_dir.prf:
c:\QtSDK\Desktop\Qt\4.8.0\msvc2008\lib\qtmaind.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -spec ..\..\..\QtSDK\Desktop\Qt\4.8.0\msvc2008\mkspecs\win32-msvc2008 CONFIG+=declarative_debug -o Makefile rsa.pro

qmake_all: FORCE

make_default: debug-make_default release-make_default FORCE
make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
	-$(DEL_FILE) ".\rsa.intermediate.manifest"
	-$(DEL_FILE) rsa.exp
	-$(DEL_FILE) rsa.ilk
	-$(DEL_FILE) vc*.pdb
	-$(DEL_FILE) vc*.idb
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) rsa.pdb

check: first

debug-mocclean: $(MAKEFILE).Debug
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean: $(MAKEFILE).Release
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables: $(MAKEFILE).Debug
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables: $(MAKEFILE).Release
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
