/*
 * Code for class OPTION_SCENE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "op898.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPTION_SCENE}.make */
void F131_8306 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	
	RTGC;
	F130_8287(Current, arg1, arg2);
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
	tr3 = RTMS_EX_H("Looking for Home",16,2016098405);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	F439_8651(RTCV(tr1), tr2, tr3, tu1_1, tu1_2, tu1_3);
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(438, 438, _OBJSIZ_11_8_0_6_0_0_0_0_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 200L);
	tr3 = RTMS_EX_H("General volume : ",17,2079425312);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	F439_8650(RTCV(tr1), tr2, tr3, tu1_1, tu1_2, tu1_3);
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(438, 438, _OBJSIZ_11_8_0_6_0_0_0_0_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 280L);
	tr3 = RTMS_EX_H("Music volume : ",15,1798796064);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	F439_8650(RTCV(tr1), tr2, tr3, tu1_1, tu1_2, tu1_3);
	loc7 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(438, 438, _OBJSIZ_11_8_0_6_0_0_0_0_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 360L);
	tr3 = RTMS_EX_H("Return",6,2115848302);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	F439_8650(RTCV(tr1), tr2, tr3, tu1_1, tu1_2, tu1_3);
	loc8 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {635,438,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {658,438,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 3L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 3L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) loc8;
	RTAR(tr3,loc8);
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) loc7;
	RTAR(tr3,loc7);
	*((EIF_REFERENCE *)tr3+2) = (EIF_REFERENCE) loc6;
	RTAR(tr3,loc6);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F659_2958)(tr3);
	F636_4673(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), loc8);
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 3L);
	*(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_) = (EIF_INTEGER_8) ti1_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr1 = F636_4677(RTCV(tr1), ((EIF_INTEGER_32) 3L));
	F439_8652(RTCV(tr1));
	RTLE;
}

/* {OPTION_SCENE}.calculate_logic */
void F131_8307 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	
	RTGC;
	F130_8289(Current, arg1, arg2, arg3);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2));
	tr2 = RTMS_EX_H("escape",6,1866787429);
	tr2 = F816_6200(RTCV(tr2));
	tb1 = F820_6481(RTCV(tr1), tr2);
	if (tb1) {
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2));
	tr2 = RTMS_EX_H("w",1,119);
	tr2 = F816_6200(RTCV(tr2));
	tb1 = F820_6481(RTCV(tr1), tr2);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
		tr1 = F135_8336(RTCV(tr1), ((EIF_INTEGER_32) 2L));
		F11_7978(RTCV(arg3), tr1, ((EIF_INTEGER_32) 2L));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		tr1 = F636_4677(RTCV(tr1), ti4_1);
		F439_8652(RTCV(tr1));
		ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
		(*(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_)) += ti1_1;
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 4L);
		tb1 = ti1_1 == ti1_2;
		if (tb1) {
			ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
			*(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_) = (EIF_INTEGER_8) ti1_1;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		tr1 = F636_4677(RTCV(tr1), ti4_1);
		F439_8652(RTCV(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2));
	tr2 = RTMS_EX_H("s",1,115);
	tr2 = F816_6200(RTCV(tr2));
	tb1 = F820_6481(RTCV(tr1), tr2);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
		tr1 = F135_8336(RTCV(tr1), ((EIF_INTEGER_32) 2L));
		F11_7978(RTCV(arg3), tr1, ((EIF_INTEGER_32) 2L));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		tr1 = F636_4677(RTCV(tr1), ti4_1);
		F439_8652(RTCV(tr1));
		ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
		(*(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_)) -= ti1_1;
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L);
		tb1 = ti1_1 == ti1_2;
		if (tb1) {
			ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 3L);
			*(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_) = (EIF_INTEGER_8) ti1_1;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		tr1 = F636_4677(RTCV(tr1), ti4_1);
		F439_8652(RTCV(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2));
	tr2 = RTMS_EX_H("enter",5,1853897586);
	tr2 = F816_6200(RTCV(tr2));
	tb1 = F820_6481(RTCV(tr1), tr2);
	if (tb1) {
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 3L);
		tb1 = ti1_1 == ti1_2;
		if (tb1) {
		} else {
			ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
			ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 2L);
			tb1 = ti1_1 == ti1_2;
			if (tb1) {
			} else {
				ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
				ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
				tb1 = ti1_1 == ti1_2;
				if (tb1) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					tr1 = RTMS_EX_H("The current index of selection is pointing at something inexistent",66,667070324);
					F1_27(Current, tr1);
				}
			}
		}
	}
	tr1 = RTMS_EX_H("",0,0);
	F10_7962(RTCV(arg2), tr1);
	RTLE;
}

/* {OPTION_SCENE}.update */
void F131_8308 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,Current);
	RTLR(5,tr1);
	
	RTGC;
	F130_8288(Current, arg1, arg2, arg3, arg4);
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_2_);
	ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 30L);
	tb1 = ti1_1 == ti1_2;
	if (tb1) {
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_7_1_);
		ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
		tb1 = ti1_1 == ti1_2;
		if (tb1) {
			ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
			F180_1889(RTCV(arg4), ti1_1);
		} else {
			tr1 = RTMS_EX_H("Error during the selection of an option",39,1235975534);
			F1_27(Current, tr1);
		}
		ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
		*(EIF_INTEGER_8 *)(Current+ _CHROFF_7_2_) = (EIF_INTEGER_8) ti1_1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

void EIF_Minit898 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
