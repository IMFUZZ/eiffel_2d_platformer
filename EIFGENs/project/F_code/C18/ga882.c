/*
 * Code for class GAME_SDL_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga882.h"
#include "SDL.h"
#include "eif_memory.h"
#include <SDL.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_7635
static EIF_NATURAL_32 inline_F9_7635 (void)
{
	return (EIF_NATURAL_32) SDL_INIT_VIDEO
	;
}
#define INLINE_F9_7635
#endif
#ifndef INLINE_F9_7649
static EIF_NATURAL_32 inline_F9_7649 (void)
{
	return (EIF_NATURAL_32) SDL_HWSURFACE
	;
}
#define INLINE_F9_7649
#endif
#ifndef INLINE_F9_7654
static EIF_NATURAL_32 inline_F9_7654 (void)
{
	return (EIF_NATURAL_32) SDL_DOUBLEBUF
	;
}
#define INLINE_F9_7654
#endif
#ifndef INLINE_F9_7658
static EIF_NATURAL_32 inline_F9_7658 (void)
{
	return (EIF_NATURAL_32) SDL_RESIZABLE
	;
}
#define INLINE_F9_7658
#endif
#ifndef INLINE_F9_7663
static EIF_NATURAL_32 inline_F9_7663 (void)
{
	return (EIF_NATURAL_32) SDL_NOFRAME
	;
}
#define INLINE_F9_7663
#endif
#ifndef INLINE_F9_7655
static EIF_NATURAL_32 inline_F9_7655 (void)
{
	return (EIF_NATURAL_32) SDL_FULLSCREEN
	;
}
#define INLINE_F9_7655
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SDL_CONTROLLER}.make */
void F50_8109 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTOUCP(43,F50_8151,(Current, tu4_1));
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.enable_video */
void F50_8111 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = inline_F9_7635();
	F50_8152(Current, tu4_1);
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.flip_screen */
void F50_8118 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,tr3);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O6008[dtype-49])) {
		tr1 = *(EIF_REFERENCE *)(Current + O6037[dtype-49]);
		tr2 = *(EIF_REFERENCE *)(Current + O6038[dtype-49]);
		F430_8535(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O6037[dtype-49]);
	tp1 = F430_8562(RTCV(tr1));
	loc1 = (EIF_INTEGER_32) SDL_Flip((SDL_Surface*) tp1);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tp1 = (EIF_POINTER) SDL_GetError();
		F146_1844(RTCV(tr1), tp1);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		tr2 = RTMS_EX_H("Error: Cannot flip screen.\012",27,1702692618);
		tr3 = F146_1855(RTCV(loc2));
		tr2 = F819_6343(RTCV(tr2), tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2875[Dtype(tr1)-686])(RTCV(tr1), tr2);
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		F687_4233(RTCV(tr1));
	}
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.set_window_caption */
void F50_8119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O6037[Dtype(Current)-49]);
	F435_8595(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.create_screen_surface */
void F50_8122 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_BOOLEAN arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_BOOLEAN arg8)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current + O6008[dtype-49]) = (EIF_BOOLEAN) arg5;
	if (arg4) {
		tu4_1 = inline_F9_7649();
		loc1 = eif_bit_or(loc1,tu4_1);
	}
	if (arg5) {
		tu4_1 = inline_F9_7654();
		loc1 = eif_bit_or(loc1,tu4_1);
	} else {
		tr1 = RTLNSMART(eif_non_attached_type(429));
		F430_8530(RTCV(tr1), arg1, arg2, arg3, arg4);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O6038[dtype-49]) = (EIF_REFERENCE) tr1;
	}
	if (arg6) {
		tu4_1 = inline_F9_7658();
		loc1 = eif_bit_or(loc1,tu4_1);
	}
	if ((EIF_BOOLEAN) !arg7) {
		tu4_1 = inline_F9_7663();
		loc1 = eif_bit_or(loc1,tu4_1);
	}
	if (arg8) {
		tu4_1 = inline_F9_7655();
		loc1 = eif_bit_or(loc1,tu4_1);
	}
	tr1 = RTLNS(434, 434, _OBJSIZ_1_5_0_5_0_0_0_0_);
	F435_8590(RTCV(tr1), arg1, arg2, arg3, loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O6037[dtype-49]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.screen_surface */
EIF_REFERENCE F50_8123 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O6008[dtype-49])) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O6037[dtype-49]);
	} else {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O6038[dtype-49]);
	}/* NOTREACHED */
	
}

/* {GAME_SDL_CONTROLLER}.all_joysticks */
EIF_REFERENCE F50_8137 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O6019[Dtype(Current) - 49]);
}


/* {GAME_SDL_CONTROLLER}.event_controller */
EIF_REFERENCE F50_8139 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O6021[Dtype(Current) - 49]);
}


/* {GAME_SDL_CONTROLLER}.update */
void F50_8142 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O6021[Dtype(Current)-49]);
	F678_8747(RTCV(tr1));
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.delay */
void F50_8143 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	
	SDL_Delay((Uint32) arg1);
}

/* {GAME_SDL_CONTROLLER}.get_ticks */
EIF_NATURAL_32 F50_8144 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) (EIF_NATURAL_32) SDL_GetTicks();
}

/* {GAME_SDL_CONTROLLER}.launch */
void F50_8145 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O6039[dtype-49]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tu4_1 = F50_8144(Current);
	*(EIF_NATURAL_32 *)(Current + O6040[dtype-49]) = (EIF_NATURAL_32) tu4_1;
	for (;;) {
		if (*(EIF_BOOLEAN *)(Current + O6039[dtype-49])) break;
		F50_8142(Current);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + O6041[dtype-49]);
		loc1 = (EIF_INTEGER_64) tu4_1;
		tu4_1 = F50_8144(Current);
		tu4_2 = *(EIF_NATURAL_32 *)(Current + O6040[dtype-49]);
		ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (tu4_1 - tu4_2);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		loc1 -= ti8_1;
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
		if ((EIF_BOOLEAN) (loc1 < ti8_1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			F50_8143(Current, tu4_1);
		} else {
			tu4_1 = (EIF_NATURAL_32) loc1;
			F50_8143(Current, tu4_1);
		}
		tu4_1 = F50_8144(Current);
		*(EIF_NATURAL_32 *)(Current + O6040[dtype-49]) = (EIF_NATURAL_32) tu4_1;
	}
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.set_iteration_per_second */
void F50_8148 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1000L);
	*(EIF_NATURAL_32 *)(Current + O6041[Dtype(Current)-49]) = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 / arg1);
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.stop */
void F50_8149 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6039[Dtype(Current)-49]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {GAME_SDL_CONTROLLER}.quit_library */
void F50_8150 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + O6021[dtype-49]) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + O6019[dtype-49]) = (EIF_REFERENCE) NULL;
	tr1 = RTLNS(682, 682, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	plsc();
	SDL_Quit();
	RTLE;
}

/* {GAME_SDL_CONTROLLER}.initialise_library */
static void F50_8151_body (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDD;
	RTLD;
	
	RTOUDV(43)
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 60L);
	F50_8148(Current, tu4_1);
	{
		static EIF_TYPE_INDEX typarr0[] = {635,678,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F636_4671(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O6019[dtype-49]) = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) SDL_Init((Uint32) arg1);
	tr1 = RTLNSMART(eif_non_attached_type(677));
	F678_8746(RTCV(tr1), Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O6021[dtype-49]) = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
#undef Result
}

void F50_8151 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTOUCP(43,F50_8151_body,(Current,arg1));
}

/* {GAME_SDL_CONTROLLER}.initialise_sub_system */
void F50_8152 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	
	
	RTGC;
	loc1 = (EIF_INTEGER_32) SDL_InitSubSystem((Uint32) arg1);
}

/* {GAME_SDL_CONTROLLER}.scr_surface */
EIF_REFERENCE F50_8155 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O6037[Dtype(Current) - 49]);
}


/* {GAME_SDL_CONTROLLER}.buffer_surface */
EIF_REFERENCE F50_8156 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O6038[Dtype(Current) - 49]);
}


void EIF_Minit882 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
