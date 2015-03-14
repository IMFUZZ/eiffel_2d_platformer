/*
 * Code for class TEXT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "te921.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TEXT}.make_text */
void F439_8650 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_8 arg4, EIF_NATURAL_8 arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(44,F46_8083,(Current))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(47));
	F48_8085(RTCV(tr1), arg3, arg4, arg5);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(430));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F431_8580(RTCV(tr1), arg2, tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(47));
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F48_8085(RTCV(tr1), arg3, tu1_1, tu1_2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(430));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F431_8580(RTCV(tr1), arg2, tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(430));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F431_8580(RTCV(tr1), arg2, tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {TEXT}.make_titre */
void F439_8651 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_8 arg4, EIF_NATURAL_8 arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(44,F46_8083,(Current))) + _REFACS_2_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(47));
	F48_8085(RTCV(tr1), arg3, arg4, arg5);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(430));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F431_8580(RTCV(tr1), arg2, tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(47));
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F48_8085(RTCV(tr1), arg3, tu1_1, tu1_2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(430));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F431_8580(RTCV(tr1), arg2, tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(430));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F431_8580(RTCV(tr1), arg2, tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {TEXT}.set_selected */
void F439_8652 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_11_7_);
	tb1 = tb1 == (EIF_BOOLEAN) 0;
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_11_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_11_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {TEXT}.l_font */
EIF_REFERENCE F439_8654 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {TEXT}.l_font_color */
EIF_REFERENCE F439_8655 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {TEXT}.l_font_color_selected */
EIF_REFERENCE F439_8656 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {TEXT}.l_text_surface_not_selected */
EIF_REFERENCE F439_8657 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {TEXT}.l_text_surface */
EIF_REFERENCE F439_8658 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {TEXT}.l_text_surface_selected */
EIF_REFERENCE F439_8659 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


void EIF_Minit921 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
