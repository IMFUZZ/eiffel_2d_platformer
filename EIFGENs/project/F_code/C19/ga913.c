/*
 * Code for class GAME_SURFACE_TEXT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga913.h"
#include <SDL_ttf.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F13_8043
static EIF_POINTER inline_F13_8043 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER) (TTF_RenderUTF8_Blended((TTF_Font *)arg1,(char *)arg2,*((SDL_Color *)arg3)))
	;
}
#define INLINE_F13_8043
#endif
#ifndef INLINE_F13_8042
static EIF_POINTER inline_F13_8042 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER) (TTF_RenderText_Blended((TTF_Font *)arg1,(char *)arg2,*((SDL_Color *)arg3)))
	;
}
#define INLINE_F13_8042
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SURFACE_TEXT}.make_blended */
void F431_8580 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	struct eif_ex_21 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	EIF_BOOLEAN tb1;
	RTLD;
	
	memset (&sloc4.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, 40);
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLR(6,loc2);
	RTLR(7,loc4);
	RTLR(8,loc1);
	RTLR(9,tr2);
	
	RTGC;
	F431_8581(Current, arg1, arg2, arg3);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4378[Dtype(arg1)-818])(RTCV(arg1));
	if (tb1) {
		F430_8528(Current, ((EIF_INTEGER_32) 100L), ((EIF_INTEGER_32) 100L));
		tr1 = RTLNS(47, 47, _OBJSIZ_0_4_0_0_0_0_0_0_);
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tu1_4 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
		F48_8084(RTCV(tr1), tu1_1, tu1_2, tu1_3, tu1_4);
		loc3 = (EIF_REFERENCE) tr1;
		F430_8545(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc3);
		F430_8555(Current, loc3);
	} else {
		tr1 = RTLNS(675, 675, _OBJSIZ_0_4_0_0_0_1_0_0_);
		F676_8723(RTCV(tr1), arg3);
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4376[Dtype(arg1)-816])(RTCV(arg1));
		if (tb1) {
			tr1 = RTLNS(40, 40, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr1 = (tr1);
			RTXA(tr1, loc4);
			tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tr2 = F816_6200(RTCV(arg1));
			tr2 = F41_588(RTCV(loc4), tr2);
			F146_1842(RTCV(tr1), tr2);
			loc1 = (EIF_REFERENCE) tr1;
			tp1 = F677_8740(RTCV(arg2));
			tp2 = F146_1861(RTCV(loc1));
			tp3 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_4_0_0_0_0_);
			tp1 = inline_F13_8043(tp1, tp2, tp3);
			F430_8526(Current, tp1);
		} else {
			tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
			F146_1842(RTCV(tr1), arg1);
			loc1 = (EIF_REFERENCE) tr1;
			tp1 = F677_8740(RTCV(arg2));
			tp2 = F146_1861(RTCV(loc1));
			tp3 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_4_0_0_0_0_);
			tp1 = inline_F13_8042(tp1, tp2, tp3);
			F430_8526(Current, tp1);
		}
		F430_8546(Current);
	}
	RTLE;
}

/* {GAME_SURFACE_TEXT}.init_var */
void F431_8581 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg3;
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {GAME_SURFACE_TEXT}.text */
EIF_REFERENCE F431_8582 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {GAME_SURFACE_TEXT}.font */
EIF_REFERENCE F431_8583 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {GAME_SURFACE_TEXT}.color */
EIF_REFERENCE F431_8584 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {GAME_SURFACE_TEXT}.color_bg */
EIF_REFERENCE F431_8585 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit913 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
