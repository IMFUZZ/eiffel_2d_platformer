case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C19"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(IRON_PATH)\packages\game\C_lib_win\OpenAL\include" -I"\$(IRON_PATH)/packages/game/cpf_lib/spec/include" -I"\$(IRON_PATH)/packages/game/audio_snd_files_lib/spec/include" -I"\$(IRON_PATH)\packages\game\C_lib_win\libsndfile\include" -I"\$(IRON_PATH)/packages/game/game_core_lib/spec/include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL\include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL_gfx\include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL_image\include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL_ttf\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $optimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $optimize $mtcppflags $large -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$eiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = project$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'
.SUFFIXES: .x .xpp .cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

.x.o:
	$(X2C) $< $*.c
	$(CC) $(CFLAGS) -c $*.c
	$(RM) $*.c

.xpp.o:
	$(X2C) $< $*.cpp
	$(CPP) $(CPPFLAGS) -c $*.cpp
	$(RM) $*.cpp

.x.c:
	$(X2C) $< $*.c

.xpp.cpp:
	$(X2C) $< $*.cpp

OBJECTS = big_file_C19_c.obj 

OLDOBJECTS =  ce945.o ap922.o au902.o mu930.o au906.o au929.o au901.o le900.o \
	ga912.o ga917.o ga928.o ga915.o ga927.o cp932.o ti940.o au905.o \
	te921.o dr919.o au904.o ga914.o ga933.o cp931.o ti910.o da938.o \
	ab911.o ga926.o ga913.o pe920.o ga918.o da924.o da942.o da936.o \
	fi937.o in944.o ga925.o da909.o da908.o da923.o 

all: Cobj19.o

Cobj19.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj19.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

