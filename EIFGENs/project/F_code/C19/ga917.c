/*
 * Code for class GAME_SCREEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga917.h"
#include "SDL.h"
#include <SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_7649
static EIF_NATURAL_32 inline_F9_7649 (void)
{
	return (EIF_NATURAL_32) SDL_HWSURFACE
	;
}
#define INLINE_F9_7649
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SCREEN}.make */
void F435_8590 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_5_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_5_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F430_8569(Current, arg1);
	F430_8568(Current, arg2);
	tp1 = (EIF_POINTER) SDL_SetVideoMode((int) arg1, (int) arg2, (int) arg3, (Uint32) arg4);
	F430_8563(Current, tp1);
	tr1 = *(EIF_REFERENCE *)(Current);
	F825_8938(RTCV(tr1));
	F430_8564(Current, (EIF_BOOLEAN) 0);
	F430_8550(Current);
	RTLE;
}

/* {GAME_SCREEN}.make_from_current_video_surface */
void F435_8591 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_5_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_5_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tp1 = (EIF_POINTER) SDL_GetVideoSurface();
	F430_8563(Current, tp1);
	ti4_1 = F435_8592(Current);
	F430_8568(Current, ti4_1);
	ti4_1 = F435_8593(Current);
	F430_8569(Current, ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	F825_8938(RTCV(tr1));
	F430_8564(Current, (EIF_BOOLEAN) 0);
	F430_8550(Current);
	RTLE;
}

/* {GAME_SCREEN}.height */
EIF_INTEGER_32 F435_8592 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F430_8562(Current);
	Result = (EIF_INTEGER_32) (((SDL_Surface *)tp1)->h);
	RTLE;
	return Result;
}

/* {GAME_SCREEN}.width */
EIF_INTEGER_32 F435_8593 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F430_8562(Current);
	Result = (EIF_INTEGER_32) (((SDL_Surface *)tp1)->w);
	RTLE;
	return Result;
}

/* {GAME_SCREEN}.sub_surface */
EIF_REFERENCE F435_8594 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tp1 = F430_8562(Current);
	loc1 = (EIF_POINTER) (((SDL_Surface *)tp1)->format);
	tr1 = RTLNS(429, 429, _OBJSIZ_1_5_0_5_0_0_0_0_);
	tu4_1 = inline_F9_7649();
	ti4_1 = F430_8533(Current);
	tu4_2 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc1)->Rmask);
	tu4_3 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc1)->Gmask);
	tu4_4 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc1)->Bmask);
	tu4_5 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc1)->Amask);
	F430_8531(RTCV(tr1), tu4_1, arg3, arg4, ti4_1, tu4_2, tu4_3, tu4_4, tu4_5);
	Result = (EIF_REFERENCE) tr1;
	F430_8536(RTCV(Result), Current, arg1, arg2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg3, arg4);
	RTLE;
	return Result;
}

/* {GAME_SCREEN}.set_captions */
void F435_8595 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F146_1842(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F146_1842(RTCV(tr1), arg2);
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = F146_1861(RTCV(loc1));
	tp2 = F146_1861(RTCV(loc2));
	SDL_WM_SetCaption((const char *) tp1, (const char *) tp2);
	RTLE;
}

void EIF_Minit917 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
