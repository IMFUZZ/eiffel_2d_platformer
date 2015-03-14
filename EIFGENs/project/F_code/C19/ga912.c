/*
 * Code for class GAME_SURFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga912.h"
#include "sdl_additions.h"
#include "SDL.h"
#include <SDL.h>
#include "eif_misc.h"

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
#ifndef INLINE_F9_7648
static EIF_NATURAL_32 inline_F9_7648 (void)
{
	return (EIF_NATURAL_32) SDL_SWSURFACE
	;
}
#define INLINE_F9_7648
#endif
#ifndef INLINE_F9_7440
static EIF_POINTER inline_F9_7440 (void)
{
	return (EIF_POINTER) (malloc (sizeof(SDL_Rect)))
	;
}
#define INLINE_F9_7440
#endif
#ifndef INLINE_F9_7441
static void inline_F9_7441 (EIF_POINTER arg1)
{
	free((SDL_Rect *)arg1)
	;
}
#define INLINE_F9_7441
#endif
#ifndef INLINE_F9_7947
static EIF_INTEGER_32 inline_F9_7947 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (SDL_MUSTLOCK_ALT((SDL_Surface *)arg1))
	;
}
#define INLINE_F9_7947
#endif
#ifndef INLINE_F9_7660
static EIF_NATURAL_32 inline_F9_7660 (void)
{
	return (EIF_NATURAL_32) SDL_SRCALPHA
	;
}
#define INLINE_F9_7660
#endif
#ifndef INLINE_F9_7659
static EIF_NATURAL_32 inline_F9_7659 (void)
{
	return (EIF_NATURAL_32) SDL_RLEACCEL
	;
}
#define INLINE_F9_7659
#endif
#ifndef INLINE_F9_7661
static EIF_NATURAL_32 inline_F9_7661 (void)
{
	return (EIF_NATURAL_32) SDL_SRCCOLORKEY
	;
}
#define INLINE_F9_7661
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SURFACE}.make_from_pointer */
void F430_8526 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F430_8563(Current, arg1);
	F430_8564(Current, (EIF_BOOLEAN) 0);
	F430_8565(Current, (EIF_BOOLEAN) 0);
	*(EIF_INTEGER_32 *)(Current + O6368[dtype-429]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O6369[dtype-429]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tp1 = F430_8562(Current);
	ti4_1 = (EIF_INTEGER_32) (((SDL_Surface *)tp1)->w);
	F430_8569(Current, ti4_1);
	tp1 = F430_8562(Current);
	ti4_1 = (EIF_INTEGER_32) (((SDL_Surface *)tp1)->h);
	F430_8568(Current, ti4_1);
	F430_8550(Current);
	F430_8557(Current);
	RTLE;
}

/* {GAME_SURFACE}.make */
void F430_8528 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tb1 = !(EIF_POINTER) SDL_GetVideoSurface();
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(434, 434, _OBJSIZ_1_5_0_5_0_0_0_0_);
		F435_8591(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		ti4_1 = F430_8533(RTCV(loc1));
		F430_8530(Current, arg1, arg2, ti4_1, (EIF_BOOLEAN) 0);
	} else {
		F430_8530(Current, arg1, arg2, ((EIF_INTEGER_32) 32L), (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {GAME_SURFACE}.make_with_bit_per_pixel */
void F430_8530 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	if (arg4) {
		loc3 = inline_F9_7649();
	} else {
		loc3 = inline_F9_7648();
	}
	tb1 = !(EIF_POINTER) SDL_GetVideoSurface();
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(434, 434, _OBJSIZ_1_5_0_5_0_0_0_0_);
		F435_8591(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		loc2 = F430_8561(RTCV(loc1));
		loc4 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc2)->Rmask);
		loc5 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc2)->Gmask);
		loc6 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc2)->Bmask);
		loc7 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc2)->Amask);
	} else {
		loc4 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		loc5 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		loc6 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		loc7 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	}
	F430_8531(Current, loc3, arg1, arg2, arg3, loc4, loc5, loc6, loc7);
	RTLE;
}

/* {GAME_SURFACE}.make_with_flags_and_masks */
void F430_8531 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_NATURAL_32 arg5, EIF_NATURAL_32 arg6, EIF_NATURAL_32 arg7, EIF_NATURAL_32 arg8)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) SDL_CreateRGBSurface((Uint32) arg1, (int) arg2, (int) arg3, (int) arg4, (Uint32) arg5, (Uint32) arg6, (Uint32) arg7, (Uint32) arg8);
	F430_8526(Current, tp1);
	RTLE;
}

/* {GAME_SURFACE}.optimise_surface */
void F430_8532 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tb1 = !(EIF_POINTER) SDL_GetVideoSurface();
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(434, 434, _OBJSIZ_1_5_0_5_0_0_0_0_);
		F435_8591(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		tp1 = F430_8562(Current);
		tp2 = F430_8561(RTCV(loc1));
		tp3 = F430_8561(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) (((SDL_Surface *)tp3)->flags);
		loc2 = (EIF_POINTER) SDL_ConvertSurface((SDL_Surface *) tp1, (SDL_PixelFormat *) tp2, (Uint32) tu4_1);
		tb1 = !loc2;
		if ((EIF_BOOLEAN) !tb1) {
			F430_8563(Current, loc2);
		}
	}
	RTLE;
}

/* {GAME_SURFACE}.bits_per_pixel */
EIF_INTEGER_32 F430_8533 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F430_8561(Current);
	tu1_1 = (EIF_NATURAL_8) (((SDL_PixelFormat *)loc1)->BitsPerPixel);
	Result = (EIF_INTEGER_32) tu1_1;
	RTLE;
	return Result;
}

/* {GAME_SURFACE}.draw_surface */
void F430_8535 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[Dtype(arg1)-429])(RTCV(arg1));
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6352[Dtype(arg1)-429])(RTCV(arg1));
	F430_8536(Current, arg1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg2, arg3, ti4_1, ti4_2);
	RTLE;
}

/* {GAME_SURFACE}.draw_sub_surface */
void F430_8536 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = inline_F9_7440();
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O6368[Dtype(arg1)-429]);
	ti2_1 = (EIF_INTEGER_16) (EIF_INTEGER_32) (arg2 + ti4_1);
	(((SDL_Rect *)loc1)->x = (Sint16)(ti2_1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O6369[Dtype(arg1)-429]);
	ti2_1 = (EIF_INTEGER_16) (EIF_INTEGER_32) (arg3 + ti4_1);
	(((SDL_Rect *)loc1)->y = (Sint16)(ti2_1));
	tu2_1 = (EIF_NATURAL_16) arg6;
	(((SDL_Rect *)loc1)->w = (Uint16)(tu2_1));
	tu2_1 = (EIF_NATURAL_16) arg7;
	(((SDL_Rect *)loc1)->h = (Uint16)(tu2_1));
	loc2 = inline_F9_7440();
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O6368[dtype-429]);
	ti2_1 = (EIF_INTEGER_16) (EIF_INTEGER_32) (arg4 + ti4_1);
	(((SDL_Rect *)loc2)->x = (Sint16)(ti2_1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O6369[dtype-429]);
	ti2_1 = (EIF_INTEGER_16) (EIF_INTEGER_32) (arg5 + ti4_1);
	(((SDL_Rect *)loc2)->y = (Sint16)(ti2_1));
	tp1 = F430_8562(RTCV(arg1));
	tp2 = F430_8562(Current);
	loc3 = (EIF_INTEGER_32) SDL_BlitSurface((SDL_Surface *) tp1, (SDL_Rect *) loc1, (SDL_Surface *) tp2, (SDL_Rect *) loc2);
	inline_F9_7441(loc1);
	inline_F9_7441(loc2);
	RTLE;
}

/* {GAME_SURFACE}.sub_surface */
EIF_REFERENCE F430_8537 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(431, 431, _OBJSIZ_1_5_0_5_0_0_0_0_);
	F432_8586(RTCV(tr1), Current, arg1, arg2, arg3, arg4);
	Result = (EIF_REFERENCE) tr1;
	F430_8564(RTCV(Result), *(EIF_BOOLEAN *)(Current + O6358[dtype-429]));
	F430_8565(RTCV(Result), *(EIF_BOOLEAN *)(Current + O6359[dtype-429]));
	if (*(EIF_BOOLEAN *)(Current + O6357[dtype-429])) {
		F430_8546(RTCV(Result));
	}
	if (*(EIF_BOOLEAN *)(Current + O6366[dtype-429])) {
		F430_8560(RTCV(Result), *(EIF_NATURAL_32 *)(Current + O6384[dtype-429]));
	}
	RTLE;
	return Result;
}

/* {GAME_SURFACE}.surface_mirrored */
EIF_REFERENCE F430_8540 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(429, 429, _OBJSIZ_1_5_0_5_0_0_0_0_);
	tp1 = F430_8576(Current, arg1, arg2);
	F430_8526(RTCV(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	F430_8564(RTCV(Result), *(EIF_BOOLEAN *)(Current + O6358[dtype-429]));
	F430_8565(RTCV(Result), *(EIF_BOOLEAN *)(Current + O6359[dtype-429]));
	if (*(EIF_BOOLEAN *)(Current + O6357[dtype-429])) {
		F430_8546(RTCV(Result));
	}
	if (*(EIF_BOOLEAN *)(Current + O6366[dtype-429])) {
		F430_8560(RTCV(Result), *(EIF_NATURAL_32 *)(Current + O6384[dtype-429]));
	}
	RTLE;
	return Result;
}

/* {GAME_SURFACE}.height */
EIF_INTEGER_32 F430_8542 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O6376[Dtype(Current)-429]);
}

/* {GAME_SURFACE}.width */
EIF_INTEGER_32 F430_8543 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O6377[Dtype(Current)-429]);
}

/* {GAME_SURFACE}.pixel_color */
EIF_REFERENCE F430_8544 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = F430_8562(Current);
	if ((EIF_BOOLEAN)(inline_F9_7947(tp1) != ((EIF_INTEGER_32) 0L))) {
		tp1 = F430_8562(Current);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) SDL_LockSurface((SDL_Surface*) tp1) == ((EIF_INTEGER_32) -1L))) {
		}
	}
	tp1 = F430_8562(Current);
	loc1 = (EIF_NATURAL_32) getpixel((SDL_Surface *) tp1, (int) arg1, (int) arg2);
	tp1 = F430_8562(Current);
	if ((EIF_BOOLEAN)(inline_F9_7947(tp1) != ((EIF_INTEGER_32) 0L))) {
		tp1 = F430_8562(Current);
		SDL_UnlockSurface((SDL_Surface*) tp1);
	}
	tp1 = F430_8561(Current);
	SDL_GetRGBA((Uint32) loc1, (SDL_PixelFormat *) tp1, (Uint8 *) (EIF_NATURAL_8 *) &(loc2), (Uint8 *) (EIF_NATURAL_8 *) &(loc3), (Uint8 *) (EIF_NATURAL_8 *) &(loc4), (Uint8 *) (EIF_NATURAL_8 *) &(loc5));
	tr1 = RTLNS(47, 47, _OBJSIZ_0_4_0_0_0_0_0_0_);
	F48_8084(RTCV(tr1), loc2, loc3, loc4, loc5);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {GAME_SURFACE}.put_pixel_color */
void F430_8545 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	
	RTGC;
	tp1 = F430_8561(Current);
	tu1_1 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5970[Dtype(arg3)-47])(RTCV(arg3));
	tu1_2 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5971[Dtype(arg3)-47])(RTCV(arg3));
	tu1_3 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5972[Dtype(arg3)-47])(RTCV(arg3));
	tu1_4 = F48_8091(RTCV(arg3));
	loc1 = (EIF_NATURAL_32) SDL_MapRGBA((SDL_PixelFormat *) tp1, (Uint8) tu1_1, (Uint8) tu1_2, (Uint8) tu1_3, (Uint8) tu1_4);
	tp1 = F430_8562(Current);
	if ((EIF_BOOLEAN)(inline_F9_7947(tp1) != ((EIF_INTEGER_32) 0L))) {
		tp1 = F430_8562(Current);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) SDL_LockSurface((SDL_Surface*) tp1) == ((EIF_INTEGER_32) -1L))) {
		}
	}
	tp1 = F430_8562(Current);
	putpixel((SDL_Surface *) tp1, (int) arg1, (int) arg2, (Uint32) loc1);
	tp1 = F430_8562(Current);
	if ((EIF_BOOLEAN)(inline_F9_7947(tp1) != ((EIF_INTEGER_32) 0L))) {
		tp1 = F430_8562(Current);
		SDL_UnlockSurface((SDL_Surface*) tp1);
	}
	RTLE;
}

/* {GAME_SURFACE}.enable_alpha */
void F430_8546 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc2 = inline_F9_7660();
	if (*(EIF_BOOLEAN *)(Current + O6358[dtype-429])) {
		tu4_1 = inline_F9_7659();
		loc2 = eif_bit_or(loc2,tu4_1);
	}
	tp1 = F430_8562(Current);
	tu1_1 = F430_8551(Current);
	loc1 = (EIF_INTEGER_32) SDL_SetAlpha((SDL_Surface *) tp1, (Uint32) loc2, (Uint8) tu1_1);
	*(EIF_BOOLEAN *)(Current + O6357[dtype-429]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {GAME_SURFACE}.disable_alpha */
void F430_8550 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F430_8562(Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	tu1_1 = F430_8551(Current);
	loc1 = (EIF_INTEGER_32) SDL_SetAlpha((SDL_Surface *) tp1, (Uint32) tu4_1, (Uint8) tu1_1);
	*(EIF_BOOLEAN *)(Current + O6357[Dtype(Current)-429]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {GAME_SURFACE}.overall_alpha_value */
EIF_NATURAL_8 F430_8551 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F430_8561(Current);
	RTLE;
	return (EIF_NATURAL_8) (EIF_NATURAL_8) (((SDL_PixelFormat *)loc1)->alpha);
}

/* {GAME_SURFACE}.set_overall_alpha_value */
void F430_8552 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc2 = inline_F9_7660();
	if (*(EIF_BOOLEAN *)(Current + O6358[Dtype(Current)-429])) {
		tu4_1 = inline_F9_7659();
		loc2 = eif_bit_or(loc2,tu4_1);
	}
	tp1 = F430_8562(Current);
	loc1 = (EIF_INTEGER_32) SDL_SetAlpha((SDL_Surface *) tp1, (Uint32) loc2, (Uint8) arg1);
	RTLE;
}

/* {GAME_SURFACE}.set_transparent_color */
void F430_8555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F430_8532(Current);
	tp1 = F430_8561(Current);
	tu1_1 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5970[Dtype(arg1)-47])(RTCV(arg1));
	tu1_2 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5971[Dtype(arg1)-47])(RTCV(arg1));
	tu1_3 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5972[Dtype(arg1)-47])(RTCV(arg1));
	loc1 = (EIF_NATURAL_32) SDL_MapRGB((SDL_PixelFormat *) tp1, (Uint8) tu1_1, (Uint8) tu1_2, (Uint8) tu1_3);
	F430_8560(Current, loc1);
	RTLE;
}

/* {GAME_SURFACE}.disable_transparent */
void F430_8557 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F430_8562(Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	loc1 = (EIF_INTEGER_32) SDL_SetColorKey((SDL_Surface *) tp1, (Uint32) tu4_1, (Uint32) tu4_2);
	*(EIF_BOOLEAN *)(Current + O6366[Dtype(Current)-429]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {GAME_SURFACE}.set_color_key */
void F430_8560 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_NATURAL_32 *)(Current + O6384[dtype-429]) = (EIF_NATURAL_32) arg1;
	loc2 = inline_F9_7661();
	if (*(EIF_BOOLEAN *)(Current + O6359[dtype-429])) {
		tu4_1 = inline_F9_7659();
		loc2 = eif_bit_or(loc2,tu4_1);
	}
	F430_8550(Current);
	tp1 = F430_8562(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + O6384[dtype-429]);
	loc1 = (EIF_INTEGER_32) SDL_SetColorKey((SDL_Surface *) tp1, (Uint32) loc2, (Uint32) tu4_1);
	*(EIF_BOOLEAN *)(Current + O6366[dtype-429]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {GAME_SURFACE}.format_pointer */
EIF_POINTER F430_8561 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F430_8562(Current);
	Result = (EIF_POINTER) (((SDL_Surface *)tp1)->format);
	RTLE;
	return Result;
}

/* {GAME_SURFACE}.internal_pointer */
EIF_POINTER F430_8562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_0_0_0_);
	RTLE;
	return Result;
}

/* {GAME_SURFACE}.set_surface_pointer */
void F430_8563 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(824));
	F825_8935(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_SURFACE}.set_is_alpha_accelerated */
void F430_8564 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6358[Dtype(Current)-429]) = (EIF_BOOLEAN) arg1;
}

/* {GAME_SURFACE}.set_is_transparent_accelerated */
void F430_8565 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6359[Dtype(Current)-429]) = (EIF_BOOLEAN) arg1;
}

/* {GAME_SURFACE}.set_height */
void F430_8568 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O6376[Dtype(Current)-429]) = (EIF_INTEGER_32) arg1;
}

/* {GAME_SURFACE}.set_width */
void F430_8569 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O6377[Dtype(Current)-429]) = (EIF_INTEGER_32) arg1;
}

/* {GAME_SURFACE}.surface_imp */
EIF_REFERENCE F430_8572 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {GAME_SURFACE}.surface_copy_8_16_32 */
EIF_REFERENCE F430_8575 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tb1 = '\01';
	tb2 = '\01';
	if (!(EIF_BOOLEAN)(F430_8533(Current) == ((EIF_INTEGER_32) 8L))) {
		tb2 = (EIF_BOOLEAN)(F430_8533(Current) == ((EIF_INTEGER_32) 16L));
	}
	if (!tb2) {
		tb1 = (EIF_BOOLEAN)(F430_8533(Current) == ((EIF_INTEGER_32) 32L));
	}
	if (tb1) {
		loc2 = F430_8533(Current);
	} else {
		tr1 = RTLNS(434, 434, _OBJSIZ_1_5_0_5_0_0_0_0_);
		F435_8591(RTCV(tr1));
		loc2 = F430_8533(RTCV(tr1));
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(F430_8533(Current) == ((EIF_INTEGER_32) 8L))) {
			tb2 = (EIF_BOOLEAN)(F430_8533(Current) == ((EIF_INTEGER_32) 16L));
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(F430_8533(Current) == ((EIF_INTEGER_32) 32L));
		}
		if (tb1) {
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
		}
	}
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6368[dtype-429]) == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6369[dtype-429]) == ((EIF_INTEGER_32) 0L)))) {
		tp1 = F430_8562(Current);
		tb2 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[dtype-429])(Current) == (EIF_INTEGER_32) (((SDL_Surface *)tp1)->w));
	}
	if (tb2) {
		tp1 = F430_8562(Current);
		tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6352[dtype-429])(Current) == (EIF_INTEGER_32) (((SDL_Surface *)tp1)->w));
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc3 = F430_8561(Current);
		if ((EIF_BOOLEAN)(loc2 == F430_8533(Current))) {
			tr1 = RTLNS(429, 429, _OBJSIZ_1_5_0_5_0_0_0_0_);
			tp1 = F430_8562(Current);
			tu4_1 = (EIF_NATURAL_32) (((SDL_Surface *)tp1)->flags);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[dtype-429])(Current);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6352[dtype-429])(Current);
			tu4_2 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc3)->Rmask);
			tu4_3 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc3)->Gmask);
			tu4_4 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc3)->Bmask);
			tu4_5 = (EIF_NATURAL_32) (((SDL_PixelFormat *)loc3)->Amask);
			F430_8531(RTCV(tr1), tu4_1, ti4_1, ti4_2, loc2, tu4_2, tu4_3, tu4_4, tu4_5);
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(429, 429, _OBJSIZ_1_5_0_5_0_0_0_0_);
			tp1 = F430_8562(Current);
			tu4_1 = (EIF_NATURAL_32) (((SDL_Surface *)tp1)->flags);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[dtype-429])(Current);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6352[dtype-429])(Current);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			tu4_4 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			tu4_5 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			F430_8531(RTCV(tr1), tu4_1, ti4_1, ti4_2, loc2, tu4_2, tu4_3, tu4_4, tu4_5);
			Result = (EIF_REFERENCE) tr1;
		}
		if ((EIF_BOOLEAN)(F430_8533(Current) == ((EIF_INTEGER_32) 8L))) {
			tp1 = F430_8562(Current);
			tp2 = F430_8562(RTCV(Result));
			CopyPalette_8((SDL_Surface *) tp1, (SDL_Surface *) tp2);
		}
		F430_8565(RTCV(Result), *(EIF_BOOLEAN *)(Current + O6359[dtype-429]));
		F430_8564(RTCV(Result), *(EIF_BOOLEAN *)(Current + O6358[dtype-429]));
		if (*(EIF_BOOLEAN *)(Current + O6366[dtype-429])) {
			F430_8560(RTCV(Result), *(EIF_NATURAL_32 *)(Current + O6384[dtype-429]));
		}
		if (*(EIF_BOOLEAN *)(Current + O6357[dtype-429])) {
			F430_8550(Current);
			F430_8535(RTCV(Result), Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
			F430_8546(Current);
			F430_8546(RTCV(Result));
		} else {
			F430_8535(RTCV(Result), Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
	return Result;
}

/* {GAME_SURFACE}.internal_pointer_mirrored */
EIF_POINTER F430_8576 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F430_8575(Current);
	if ((EIF_BOOLEAN) (arg1 && arg2)) {
		tp1 = F430_8562(RTCV(loc1));
		Result = (EIF_POINTER) rotateSurface90Degrees_all((SDL_Surface *) tp1, (int) ((EIF_INTEGER_32) 2L));
	} else {
		if (arg1) {
			tp1 = F430_8562(RTCV(loc1));
			Result = (EIF_POINTER) MirrorSurfaceX((SDL_Surface *) tp1);
		} else {
			if (arg2) {
				tp1 = F430_8562(RTCV(loc1));
				Result = (EIF_POINTER) MirrorSurfaceY((SDL_Surface *) tp1);
			} else {
				Result = F430_8562(RTCV(loc1));
				RTLE;
				return (EIF_POINTER) Result;
			}
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit912 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
