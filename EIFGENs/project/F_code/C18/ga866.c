/*
 * Code for class GAME_KEYBOARD_EVENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga866.h"
#include <SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_7912
static EIF_NATURAL_8 inline_F9_7912 (void)
{
	return (EIF_NATURAL_8) SDL_KEYDOWN
	;
}
#define INLINE_F9_7912
#endif
#ifndef INLINE_F9_7913
static EIF_NATURAL_8 inline_F9_7913 (void)
{
	return (EIF_NATURAL_8) SDL_KEYUP
	;
}
#define INLINE_F9_7913
#endif
#ifndef INLINE_F9_7668
static EIF_INTEGER_32 inline_F9_7668 (void)
{
	return (EIF_INTEGER) SDLK_RETURN
	;
}
#define INLINE_F9_7668
#endif
#ifndef INLINE_F9_7670
static EIF_INTEGER_32 inline_F9_7670 (void)
{
	return (EIF_INTEGER) SDLK_ESCAPE
	;
}
#define INLINE_F9_7670
#endif
#ifndef INLINE_F9_7671
static EIF_INTEGER_32 inline_F9_7671 (void)
{
	return (EIF_INTEGER) SDLK_SPACE
	;
}
#define INLINE_F9_7671
#endif
#ifndef INLINE_F9_7709
static EIF_INTEGER_32 inline_F9_7709 (void)
{
	return (EIF_INTEGER) SDLK_a
	;
}
#define INLINE_F9_7709
#endif
#ifndef INLINE_F9_7712
static EIF_INTEGER_32 inline_F9_7712 (void)
{
	return (EIF_INTEGER) SDLK_d
	;
}
#define INLINE_F9_7712
#endif
#ifndef INLINE_F9_7727
static EIF_INTEGER_32 inline_F9_7727 (void)
{
	return (EIF_INTEGER) SDLK_s
	;
}
#define INLINE_F9_7727
#endif
#ifndef INLINE_F9_7731
static EIF_INTEGER_32 inline_F9_7731 (void)
{
	return (EIF_INTEGER) SDLK_w
	;
}
#define INLINE_F9_7731
#endif
#ifndef INLINE_F9_7877
static EIF_INTEGER_32 inline_F9_7877 (void)
{
	return (EIF_INTEGER) SDLK_LSHIFT
	;
}
#define INLINE_F9_7877
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_KEYBOARD_EVENT}.make */
void F7_7086 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_NATURAL_8 arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_16 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_) = (EIF_NATURAL_8) arg1;
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_1_) = (EIF_NATURAL_8) arg2;
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_2_) = (EIF_NATURAL_8) arg3;
	*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_3_0_) = (EIF_NATURAL_16) arg4;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_) = (EIF_INTEGER_32) arg5;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_1_) = (EIF_INTEGER_32) arg6;
	RTLE;
}

/* {GAME_KEYBOARD_EVENT}.character */
EIF_CHARACTER_32 F7_7093 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_3_0_);
	Result = (EIF_CHARACTER_32) tu2_1;
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.out */
EIF_REFERENCE F7_7094 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	loc1 = (EIF_POINTER) SDL_GetKeyName((SDLKey) ti4_1);
	tb1 = !loc1;
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F146_1844(RTCV(tr1), loc1);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = F146_1855(RTCV(loc2));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		Result = RTMS_EX_H("",0,0);
	}
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_key_down */
EIF_BOOLEAN F7_7095 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = inline_F9_7912();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_key_up */
EIF_BOOLEAN F7_7096 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = inline_F9_7913();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_return_key */
EIF_BOOLEAN F7_7118 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7668();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_escape_key */
EIF_BOOLEAN F7_7120 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7670();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_space_key */
EIF_BOOLEAN F7_7121 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7671();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_a_key */
EIF_BOOLEAN F7_7159 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7709();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_d_key */
EIF_BOOLEAN F7_7162 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7712();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_s_key */
EIF_BOOLEAN F7_7177 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7727();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_w_key */
EIF_BOOLEAN F7_7181 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7731();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {GAME_KEYBOARD_EVENT}.is_lshift_key */
EIF_BOOLEAN F7_7327 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_1_0_);
	ti4_2 = inline_F9_7877();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

void EIF_Minit866 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
