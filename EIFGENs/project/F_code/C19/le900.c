/*
 * Code for class LEVEL_ONE_SCENE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "le900.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LEVEL_ONE_SCENE}.make */
void F133_8314 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	RTCFDT;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,loc2);
	RTLR(8,loc4);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,loc7);
	RTLR(12,loc8);
	
	RTGC;
	F130_8287(Current, arg1, arg2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTLNSMART(eif_non_attached_type(7));
	F8_7346(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F8_7347(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	tr1 = RTLNS(436, 436, _OBJSIZ_5_7_0_6_0_0_0_0_);
	tr2 = RTMS_EX_H("ressources/images/moon.png",26,1795590247);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ((EIF_INTEGER_32) 500L);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 150L);
	F437_8599(RTCV(tr1), tr2, tr3);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(436, 436, _OBJSIZ_5_7_0_6_0_0_0_0_);
	tr2 = RTMS_EX_H("ressources/images/white2.png",28,515440231);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 300L);
	F437_8599(RTCV(tr1), tr2, tr3);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(436, 436, _OBJSIZ_5_7_0_6_0_0_0_0_);
	tr2 = RTMS_EX_H("ressources/images/tree_loop_1_a.png",35,1102537831);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ((EIF_INTEGER_32) -1L);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 150L);
	F437_8599(RTCV(tr1), tr2, tr3);
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(436, 436, _OBJSIZ_5_7_0_6_0_0_0_0_);
	tr2 = RTMS_EX_H("ressources/images/tree_loop_1_b.png",35,1102545511);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ((EIF_INTEGER_32) 799L);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 150L);
	F437_8599(RTCV(tr1), tr2, tr3);
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(436, 436, _OBJSIZ_5_7_0_6_0_0_0_0_);
	tr2 = RTMS_EX_H("ressources/images/tree_loop_2_a.png",35,1605854311);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ((EIF_INTEGER_32) -1L);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	F437_8599(RTCV(tr1), tr2, tr3);
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(436, 436, _OBJSIZ_5_7_0_6_0_0_0_0_);
	tr2 = RTMS_EX_H("ressources/images/tree_loop_2_b.png",35,1605861991);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ((EIF_INTEGER_32) 799L);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	F437_8599(RTCV(tr1), tr2, tr3);
	loc7 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 5L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	F437_8604(RTCV(loc2), tr1);
	F437_8603(RTCV(loc2), (EIF_BOOLEAN) 1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 2L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	F437_8604(RTCV(loc4), tr1);
	F437_8603(RTCV(loc4), (EIF_BOOLEAN) 1);
	F437_8602(RTCV(loc4), (EIF_BOOLEAN) 1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 2L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	F437_8604(RTCV(loc5), tr1);
	F437_8603(RTCV(loc5), (EIF_BOOLEAN) 1);
	F437_8602(RTCV(loc5), (EIF_BOOLEAN) 1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 3L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	F437_8604(RTCV(loc6), tr1);
	F437_8603(RTCV(loc6), (EIF_BOOLEAN) 1);
	F437_8602(RTCV(loc6), (EIF_BOOLEAN) 1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 3L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	F437_8604(RTCV(loc7), tr1);
	F437_8603(RTCV(loc7), (EIF_BOOLEAN) 1);
	F437_8602(RTCV(loc7), (EIF_BOOLEAN) 1);
	tr1 = RTLNS(438, 438, _OBJSIZ_11_8_0_6_0_0_0_0_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	tr3 = RTMS_EX_H("Pre-Alpha 0.1",13,191762993);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	F439_8650(RTCV(tr1), tr2, tr3, tu1_1, tu1_2, tu1_3);
	loc8 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc8);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTLE;
}

/* {LEVEL_ONE_SCENE}.calculate_logic */
void F133_8315 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	
	RTGC;
	F130_8289(Current, arg1, arg2, arg3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg2)+ _CHROFF_2_4_);
	F438_8623(RTCV(tr1), tb1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg2)+ _CHROFF_2_0_);
	F438_8619(RTCV(tr1), tb1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg2)+ _CHROFF_2_2_);
	F438_8621(RTCV(tr1), tb1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg2)+ _CHROFF_2_3_);
	F438_8622(RTCV(tr1), tb1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg2)+ _CHROFF_2_1_);
	F438_8620(RTCV(tr1), tb1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_11_14_);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg2)+ _CHROFF_2_5_);
		F438_8624(RTCV(tr1), tb1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F438_8613(RTCV(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F8_7348(RTCV(tr1), arg1);
	RTLE;
}

/* {LEVEL_ONE_SCENE}.physic_controller */
EIF_REFERENCE F133_8317 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


void EIF_Minit900 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
