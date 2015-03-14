/*
 * Code for class GAME_SDL_COLOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga925.h"
#include <SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_7493
static EIF_POINTER inline_F9_7493 (void)
{
	return (EIF_POINTER) (malloc (sizeof(SDL_Color)))
	;
}
#define INLINE_F9_7493
#endif
#ifndef INLINE_F9_7494
static void inline_F9_7494 (EIF_POINTER arg1)
{
	free((SDL_Color *)arg1)
	;
}
#define INLINE_F9_7494
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SDL_COLOR}.make */
void F676_8719 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_NATURAL_8 arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_8 arg4)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = inline_F9_7493();
	*(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_) = (EIF_POINTER) tp1;
	F48_8084(Current, arg1, arg2, arg3, arg4);
	RTLE;
}

/* {GAME_SDL_COLOR}.make_from_rgba_color */
void F676_8723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tu1_1 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5970[Dtype(arg1)-47])(RTCV(arg1));
	tu1_2 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5971[Dtype(arg1)-47])(RTCV(arg1));
	tu1_3 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5972[Dtype(arg1)-47])(RTCV(arg1));
	tu1_4 = F48_8091(RTCV(arg1));
	F676_8719(Current, tu1_1, tu1_2, tu1_3, tu1_4);
	RTLE;
}

/* {GAME_SDL_COLOR}.red */
EIF_NATURAL_8 F676_8724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_);
	return (EIF_NATURAL_8) (EIF_NATURAL_8) (((SDL_Color *)tp1)->r);
}

/* {GAME_SDL_COLOR}.green */
EIF_NATURAL_8 F676_8725 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_);
	return (EIF_NATURAL_8) (EIF_NATURAL_8) (((SDL_Color *)tp1)->g);
}

/* {GAME_SDL_COLOR}.blue */
EIF_NATURAL_8 F676_8726 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_);
	return (EIF_NATURAL_8) (EIF_NATURAL_8) (((SDL_Color *)tp1)->b);
}

/* {GAME_SDL_COLOR}.set_red */
void F676_8728 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_);
	(((SDL_Color *)tp1)->r = (Uint8)(arg1));
}

/* {GAME_SDL_COLOR}.set_green */
void F676_8729 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_);
	(((SDL_Color *)tp1)->g = (Uint8)(arg1));
}

/* {GAME_SDL_COLOR}.set_blue */
void F676_8730 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_);
	(((SDL_Color *)tp1)->b = (Uint8)(arg1));
}

/* {GAME_SDL_COLOR}.dispose */
void F676_8731 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_4_0_0_0_0_);
	inline_F9_7494(tp1);
}

void EIF_Minit925 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
