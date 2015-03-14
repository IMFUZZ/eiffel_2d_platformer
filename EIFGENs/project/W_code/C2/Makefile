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

OBJECTS = big_file_C2_c.obj 

OLDOBJECTS =  ap922.obj ap922d.obj au902.obj au902d.obj au906.obj au906d.obj au901.obj au901d.obj \
	th896.obj th896d.obj le900.obj le900d.obj ma899.obj ma899d.obj op898.obj op898d.obj \
	ga912.obj ga912d.obj ga917.obj ga917d.obj ga916.obj ga916d.obj ga915.obj ga915d.obj \
	th894.obj th894d.obj au905.obj au905d.obj au903.obj au903d.obj th895.obj th895d.obj \
	te921.obj te921d.obj dr919.obj dr919d.obj ba897.obj ba897d.obj au904.obj au904d.obj \
	ga914.obj ga914d.obj ga893.obj ga893d.obj ti910.obj ti910d.obj ab911.obj ab911d.obj \
	ga913.obj ga913d.obj pe920.obj pe920d.obj ga918.obj ga918d.obj du907.obj du907d.obj \
	da924.obj da924d.obj ga925.obj ga925d.obj da909.obj da909d.obj da908.obj da908d.obj \
	da923.obj da923d.obj 

all::  Cobj2.lib

Cobj2.lib: $(OBJECTS) Makefile
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

