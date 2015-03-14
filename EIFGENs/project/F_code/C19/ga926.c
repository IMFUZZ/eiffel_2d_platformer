/*
 * Code for class GAME_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga926.h"
#include <SDL_ttf.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_FONT}.make */
void F677_8732 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F677_8733(Current, arg1, arg2, ((EIF_INTEGER_32) 0L));
}

/* {GAME_FONT}.make_with_index */
void F677_8733 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg3;
	tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F146_1842(RTCV(tr1), *(EIF_REFERENCE *)(Current));
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F146_1861(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	tp1 = (EIF_POINTER) TTF_OpenFontIndex((const char *) tp1, (int) ti4_1, (long) ti4_2);
	*(EIF_POINTER *)(Current+ _PTROFF_1_0_0_2_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {GAME_FONT}.filename */
EIF_REFERENCE F677_8734 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {GAME_FONT}.sdl_font_pointer */
EIF_POINTER F677_8740 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_1_0_0_2_0_0_);
}

/* {GAME_FONT}.dispose */
void F677_8744 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) TTF_WasInit() == ((EIF_INTEGER_32) 1L))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_0_0_2_0_0_);
		TTF_CloseFont((TTF_Font *) tp1);
	}
	RTLE;
}

void EIF_Minit926 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
