/*
 * Code for class PHYSIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ph867.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PHYSIC}.make */
void F8_7346 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {577,437,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F578_3312(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {PHYSIC}.add_object */
void F8_7347 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), arg1);
	RTLE;
}

/* {PHYSIC}.calculate_collision */
void F8_7348 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F8_7349(Current, arg1);
	F8_7350(Current, arg1);
	F8_7351(Current, arg1);
	RTLE;
}

/* {PHYSIC}.adjust_down */
void F8_7349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F578_3318(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1667[Dtype(loc3)-454])(RTCV(loc3));
		if (tb1) break;
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_1 = eif_integer_32_item(RTCV(tr2),1);
		tr2 = F484_2933(RTCV(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_3_);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[Dtype(tr2)-429])(RTCV(tr2));
		tr2 = F484_2933(RTCV(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_3 = eif_integer_32_item(RTCV(tr2),2);
		tr2 = F484_2933(RTCV(loc3));
		ti4_4 = F430_8542(RTCV(tr2));
		tr1 = F430_8544(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L))), (EIF_INTEGER_32) (ti4_3 + ti4_4));
		tu1_1 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5972[Dtype(tr1)-47])(RTCV(tr1));
		loc1 = (EIF_INTEGER_32) tu1_1;
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_1 = eif_integer_32_item(RTCV(tr2),1);
		tr2 = F484_2933(RTCV(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_3_);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[Dtype(tr2)-429])(RTCV(tr2));
		tr2 = F484_2933(RTCV(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_3 = eif_integer_32_item(RTCV(tr2),2);
		tr2 = F484_2933(RTCV(loc3));
		ti4_4 = F430_8542(RTCV(tr2));
		tr1 = F430_8544(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L))), ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 + ti4_4) - ((EIF_INTEGER_32) 10L))));
		tu1_1 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5972[Dtype(tr1)-47])(RTCV(tr1));
		loc2 = (EIF_INTEGER_32) tu1_1;
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 250L))) {
			tr1 = F484_2933(RTCV(loc3));
			F438_8627(RTCV(tr1), (EIF_BOOLEAN) 1);
		} else {
			tr1 = F484_2933(RTCV(loc3));
			F438_8627(RTCV(tr1), (EIF_BOOLEAN) 0);
		}
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 250L))) {
			tr1 = F484_2933(RTCV(loc3));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			tr3 = F484_2933(RTCV(loc3));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) -10L);
			F437_8601(RTCV(tr1), tr2);
		}
		tr1 = F484_2933(RTCV(loc3));
		tb2 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_11_14_);
		if (tb2) {
			tr1 = F484_2933(RTCV(loc3));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			tr3 = F484_2933(RTCV(loc3));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
			tr3 = F484_2933(RTCV(loc3));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),2);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
			F437_8601(RTCV(tr1), tr2);
			tr1 = F484_2933(RTCV(loc3));
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 10L));
			F438_8628(RTCV(tr1), tr8_1);
		} else {
			tr1 = F484_2933(RTCV(loc3));
			tr8_1 = *(EIF_REAL_64 *)(RTCV(tr1)+ _R64OFF_11_15_0_11_0_0_0_0_);
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 45L));
			tr1 = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)tr1 = tr8_1;
			
			tb2 = F758_5487(RTCV(tr1), tr8_2);
			if (tb2) {
				tr1 = F484_2933(RTCV(loc3));
				tr2 = F484_2933(RTCV(loc3));
				tr8_1 = *(EIF_REAL_64 *)(RTCV(tr2)+ _R64OFF_11_15_0_11_0_0_0_0_);
				F438_8628(RTCV(tr1), (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) 1.03));
			}
			tr1 = F484_2933(RTCV(loc3));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			tr3 = F484_2933(RTCV(loc3));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
			tr3 = F484_2933(RTCV(loc3));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),2);
			tr3 = F484_2933(RTCV(loc3));
			tr8_1 = *(EIF_REAL_64 *)(RTCV(tr3)+ _R64OFF_11_15_0_11_0_0_0_0_);
			tr3 = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)tr3 = tr8_1;
			
			ti4_2 = F757_5473(RTCV(tr3));
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
			F437_8601(RTCV(tr1), tr2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1668[Dtype(loc3)-454])(RTCV(loc3));
	}
	RTLE;
}

/* {PHYSIC}.adjust_left */
void F8_7350 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F578_3318(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1667[Dtype(loc2)-454])(RTCV(loc2));
		if (tb1) break;
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc2));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_1 = eif_integer_32_item(RTCV(tr2),1);
		tr2 = F484_2933(RTCV(loc2));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_2 = eif_integer_32_item(RTCV(tr2),2);
		tr2 = F484_2933(RTCV(loc2));
		ti4_3 = F430_8542(RTCV(tr2));
		tr1 = F430_8544(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 10L)), (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (ti4_3 / ((EIF_INTEGER_32) 2L))));
		tu1_1 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5972[Dtype(tr1)-47])(RTCV(tr1));
		loc1 = (EIF_INTEGER_32) tu1_1;
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 250L))) {
			tr1 = F484_2933(RTCV(loc2));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			tr3 = F484_2933(RTCV(loc2));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),1);
			tr3 = F484_2933(RTCV(loc2));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_2 = eif_integer_32_item(RTCV(tr3),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
			tr3 = F484_2933(RTCV(loc2));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),2);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
			F437_8601(RTCV(tr1), tr2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1668[Dtype(loc2)-454])(RTCV(loc2));
	}
	RTLE;
}

/* {PHYSIC}.adjust_right */
void F8_7351 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F578_3318(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1667[Dtype(loc2)-454])(RTCV(loc2));
		if (tb1) break;
		tr1 = F50_8123(RTCV(arg1));
		tr2 = F484_2933(RTCV(loc2));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_1 = eif_integer_32_item(RTCV(tr2),1);
		tr2 = F484_2933(RTCV(loc2));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_3_);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[Dtype(tr2)-429])(RTCV(tr2));
		tr2 = F484_2933(RTCV(loc2));
		tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
		ti4_3 = eif_integer_32_item(RTCV(tr2),2);
		tr2 = F484_2933(RTCV(loc2));
		ti4_4 = F430_8542(RTCV(tr2));
		tr1 = F430_8544(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 10L)), (EIF_INTEGER_32) (ti4_3 + (EIF_INTEGER_32) (ti4_4 / ((EIF_INTEGER_32) 2L))));
		tu1_1 = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5972[Dtype(tr1)-47])(RTCV(tr1));
		loc1 = (EIF_INTEGER_32) tu1_1;
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 250L))) {
			tr1 = F484_2933(RTCV(loc2));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			tr3 = F484_2933(RTCV(loc2));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),1);
			tr3 = F484_2933(RTCV(loc2));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_2 = eif_integer_32_item(RTCV(tr3),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
			tr3 = F484_2933(RTCV(loc2));
			tr3 = *(EIF_REFERENCE *)(RTCV(tr3) + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr3),2);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
			F437_8601(RTCV(tr1), tr2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1668[Dtype(loc2)-454])(RTCV(loc2));
	}
	RTLE;
}

/* {PHYSIC}.drawable_list */
EIF_REFERENCE F8_7352 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit867 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
