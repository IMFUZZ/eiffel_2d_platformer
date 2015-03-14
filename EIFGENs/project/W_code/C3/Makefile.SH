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
echo "Compiling C code in C3"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(IRON_PATH)\packages\game\C_lib_win\OpenAL\include" -I"\$(IRON_PATH)/packages/game/cpf_lib/spec/include" -I"\$(IRON_PATH)/packages/game/audio_snd_files_lib/spec/include" -I"\$(IRON_PATH)\packages\game\C_lib_win\libsndfile\include" -I"\$(IRON_PATH)/packages/game/game_core_lib/spec/include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL\include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL_gfx\include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL_image\include" -I"\$(IRON_PATH)\packages\game\C_lib_win\SDL_ttf\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
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

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  ce945.o ce945d.o mu930.o mu930d.o au929.o au929d.o ga928.o ga928d.o \
	ga927.o ga927d.o cp932.o cp932d.o ti940.o ti940d.o th934.o th934d.o \
	ga933.o ga933d.o cp931.o cp931d.o da938.o da938d.o ti939.o ti939d.o \
	ga926.o ga926d.o da943.o da943d.o da942.o da942d.o da936.o da936d.o \
	fi937.o fi937d.o in944.o in944d.o da941.o da941d.o da935.o da935d.o 

all: Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj3.o $(OBJECTS)
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

