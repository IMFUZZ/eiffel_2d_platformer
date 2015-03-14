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

OBJECTS = big_file_C16_c.obj 

OLDOBJECTS =  ar754.obj ty797.obj ty793.obj ar767.obj li784.obj fi764.obj dy768.obj co757.obj \
	to766.obj li785.obj dy775.obj re762.obj co794.obj li755.obj ar780.obj li783.obj \
	ce782.obj in750.obj li769.obj bi772.obj in796.obj li777.obj li781.obj ch770.obj 

all::  Cobj16.lib

Cobj16.lib: $(OBJECTS) Makefile
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

