INCLUDE_PATH =  -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\OpenAL\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\cpf_lib\spec\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\audio_snd_files_lib\spec\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\libsndfile\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\game_core_lib\spec\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL_gfx\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL_image\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL_ttf\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\lib\msc\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = project.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  ce945.obj ce945d.obj mu930.obj mu930d.obj au929.obj au929d.obj ga928.obj ga928d.obj \
	ga927.obj ga927d.obj cp932.obj cp932d.obj ti940.obj ti940d.obj th934.obj th934d.obj \
	ga933.obj ga933d.obj cp931.obj cp931d.obj da938.obj da938d.obj ti939.obj ti939d.obj \
	ga926.obj ga926d.obj da943.obj da943d.obj da942.obj da942d.obj da936.obj da936d.obj \
	fi937.obj fi937d.obj in944.obj in944d.obj da941.obj da941d.obj da935.obj da935d.obj 

all::  Cobj3.lib

Cobj3.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

