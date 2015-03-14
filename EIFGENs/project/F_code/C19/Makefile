INCLUDE_PATH =  -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\OpenAL\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\cpf_lib\spec\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\audio_snd_files_lib\spec\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\libsndfile\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\game_core_lib\spec\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL_gfx\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL_image\include" -I"C:\Users\Daniel-Junior\Documents\Eiffel User Files\14.05\iron\packages\game\C_lib_win\SDL_ttf\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Ox -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Ox -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\lib\msc\mtfinalized.lib"
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
.SUFFIXES: .x .xpp .cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

.x.obj:
	$(X2C) $< $*.c
	$(CC) $(CFLAGS) -c $*.c
	$(RM) $*.c

.xpp.obj:
	$(X2C) $< $*.cpp
	$(CPP) $(CPPFLAGS) -c $*.cpp
	$(RM) $*.cpp

.x.c:
	$(X2C) $< $*.c

.xpp.cpp:
	$(X2C) $< $*.cpp

OBJECTS = big_file_C19_c.obj 

OLDOBJECTS =  ce945.obj ap922.obj au902.obj mu930.obj au906.obj au929.obj au901.obj le900.obj \
	ga912.obj ga917.obj ga928.obj ga915.obj ga927.obj cp932.obj ti940.obj au905.obj \
	te921.obj dr919.obj au904.obj ga914.obj ga933.obj cp931.obj ti910.obj da938.obj \
	ab911.obj ga926.obj ga913.obj pe920.obj ga918.obj da924.obj da942.obj da936.obj \
	fi937.obj in944.obj ga925.obj da909.obj da908.obj da923.obj 

all::  Cobj19.lib

Cobj19.lib: $(OBJECTS) Makefile
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

