/*
 * Code for class BASIC_SCENE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ba897.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BASIC_SCENE}.make */
void F130_8287 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,arg1);
	RTLR(5,tr4);
	
	RTGC;
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_8 *)(Current + O6178[dtype-129]) = (EIF_INTEGER_8) ti1_1;
	*(EIF_BOOLEAN *)(Current + O6170[dtype-129]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTLNSMART(eif_non_attached_type(437));
	tr2 = RTMS_EX_H("ressources/images/walk_animation.png",36,1809252199);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 1);
	}
	tr4 = F50_8123(RTCV(arg1));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[Dtype(tr4)-429])(RTCV(tr4));
	ti4_1 = (EIF_INTEGER_32) ti4_1;
	((EIF_TYPED_VALUE *)tr3+1)->it_i4 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	tr4 = F50_8123(RTCV(arg1));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6352[Dtype(tr4)-429])(RTCV(tr4));
	ti4_1 = (EIF_INTEGER_32) ti4_1;
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 125L));
	F438_8612(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {577,436,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F578_3312(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {577,436,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F578_3312(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {577,438,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F578_3312(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {577,436,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F578_3312(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(429));
	tr2 = F50_8123(RTCV(arg1));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[Dtype(tr2)-429])(RTCV(tr2));
	ti4_1 = (EIF_INTEGER_32) ti4_1;
	tr2 = F50_8123(RTCV(arg1));
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6352[Dtype(tr2)-429])(RTCV(tr2));
	ti4_2 = (EIF_INTEGER_32) ti4_2;
	F430_8528(RTCV(tr1), ti4_1, ti4_2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {BASIC_SCENE}.update */
void F130_8288 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O6170[dtype-129])) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
		F130_8294(Current, arg1, tu1_1);
		F130_8291(Current, arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R6162[dtype-129])(Current, arg1, arg2, arg3);
		F130_8292(Current, arg1);
		F130_8290(Current, arg1);
		F130_8293(Current, arg1);
	} else {
		F130_8295(Current, arg1);
	}
	RTLE;
}

/* {BASIC_SCENE}.calculate_logic */
void F130_8289 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	RTGC;
}

/* {BASIC_SCENE}.draw_text */
void F130_8290 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = F578_3318(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1667[Dtype(loc1)-454])(RTCV(loc1));
		if (tb1) break;
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_9_);
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_1_);
		ti4_1 = eif_integer_32_item(RTCV(tr3),1);
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_1_);
		ti4_2 = eif_integer_32_item(RTCV(tr3),2);
		F430_8535(RTCV(tr1), tr2, ti4_1, ti4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1668[Dtype(loc1)-454])(RTCV(loc1));
	}
	RTLE;
}

/* {BASIC_SCENE}.draw_background */
void F130_8291 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_INTEGER_32 ti4_10;
	EIF_INTEGER_32 ti4_11;
	EIF_INTEGER_32 ti4_12;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = F578_3318(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1667[Dtype(loc1)-454])(RTCV(loc1));
		if (tb1) break;
		tr1 = F484_2933(RTCV(loc1));
		tb2 = *(EIF_BOOLEAN *)(RTCV(tr1) + O6415[Dtype(tr1)-436]);
		if (tb2) {
			tr1 = F484_2933(RTCV(loc1));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			
			tr2 = F484_2933(RTCV(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
			ti4_1 = eif_integer_32_item(RTCV(tr2),1);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_2_);
			ti4_2 = eif_integer_32_item(RTCV(tr2),1);
			tr2 = F484_2933(RTCV(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_4_);
			ti4_3 = eif_integer_32_item(RTCV(tr2),1);
			eif_put_integer_32_item(RTCV(tr1),1,(EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 * ti4_3) / ((EIF_INTEGER_32) 3L))));
			tr1 = F484_2933(RTCV(loc1));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			
			tr2 = F484_2933(RTCV(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
			ti4_4 = eif_integer_32_item(RTCV(tr2),2);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_2_);
			ti4_5 = eif_integer_32_item(RTCV(tr2),2);
			tr2 = F484_2933(RTCV(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_4_);
			ti4_6 = eif_integer_32_item(RTCV(tr2),2);
			eif_put_integer_32_item(RTCV(tr1),2,(EIF_INTEGER_32) (ti4_4 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_5 * ti4_6) / ((EIF_INTEGER_32) 3L))));
		}
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc1));
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_1_);
		ti4_7 = eif_integer_32_item(RTCV(tr3),1);
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
		ti4_8 = eif_integer_32_item(RTCV(tr3),1);
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_1_);
		ti4_9 = eif_integer_32_item(RTCV(tr3),2);
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
		ti4_10 = eif_integer_32_item(RTCV(tr3),2);
		tr3 = F484_2933(RTCV(loc1));
		ti4_11 = F430_8543(RTCV(tr3));
		tr3 = F484_2933(RTCV(loc1));
		ti4_12 = F430_8542(RTCV(tr3));
		F430_8536(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_7 + ti4_8), (EIF_INTEGER_32) (ti4_9 + ti4_10), ti4_11, ti4_12);
		tr1 = F484_2933(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6405[Dtype(tr1)-436])(RTCV(tr1), arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1668[Dtype(loc1)-454])(RTCV(loc1));
	}
	RTLE;
}

/* {BASIC_SCENE}.draw_drawables */
void F130_8292 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F578_3318(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1667[Dtype(loc1)-454])(RTCV(loc1));
		if (tb1) break;
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_3_);
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_1_);
		ti4_1 = eif_integer_32_item(RTCV(tr3),1);
		tr3 = F484_2933(RTCV(loc1));
		tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_1_);
		ti4_2 = eif_integer_32_item(RTCV(tr3),2);
		F430_8535(RTCV(tr1), tr2, ti4_1, ti4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1668[Dtype(loc1)-454])(RTCV(loc1));
	}
	RTLE;
}

/* {BASIC_SCENE}.draw_gui */
void F130_8293 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = F578_3318(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1667[Dtype(loc1)-454])(RTCV(loc1));
		if (tb1) break;
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc1));
		F430_8535(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1668[Dtype(loc1)-454])(RTCV(loc1));
	}
	RTLE;
}

/* {BASIC_SCENE}.draw_main_background */
void F130_8294 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_8 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tb1 = '\0';
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN) (arg2 >= tu1_1)) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
		tb1 = (EIF_BOOLEAN) (arg2 <= tu1_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F430_8552(RTCV(tr1), arg2);
		tr1 = F50_8123(RTCV(arg1));
		tr2 = *(EIF_REFERENCE *)(Current);
		F430_8535(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	} else {
		tr1 = RTMS_EX_H("The opacity is greater than 255",31,824373813);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {BASIC_SCENE}.draw_transition */
void F130_8295 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 30L);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_8 *)(Current + O6178[dtype-129]) <= ti1_1)) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L);
		F50_8143(RTCV(arg1), tu4_1);
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 20L);
		F130_8294(Current, arg1, tu1_1);
		ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
		(*(EIF_INTEGER_8 *)(Current + O6178[dtype-129])) += ti1_1;
	}
	RTLE;
}

/* {BASIC_SCENE}.main_background */
EIF_REFERENCE F130_8296 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {BASIC_SCENE}.drawables */
EIF_REFERENCE F130_8299 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {BASIC_SCENE}.background */
EIF_REFERENCE F130_8300 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {BASIC_SCENE}.gui_list */
EIF_REFERENCE F130_8301 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {BASIC_SCENE}.text_list */
EIF_REFERENCE F130_8302 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {BASIC_SCENE}.selectables */
EIF_REFERENCE F130_8303 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {BASIC_SCENE}.player */
EIF_REFERENCE F130_8304 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


void EIF_Minit897 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
