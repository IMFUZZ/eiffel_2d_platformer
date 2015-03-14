/*
 * Code for class PERFORMER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pe920.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PERFORMER}.make */
void F438_8612 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	F437_8598(Current, arg1, arg2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_12_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_13_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_14_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTLNSMART(eif_non_attached_type(2));
	tr2 = RTMS_EX_H("ressources/images/idle_animation.png",36,254552167);
	F3_7032(RTCV(tr1), tr2, ((EIF_INTEGER_32) 8L), (EIF_BOOLEAN) 1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(2));
	tr2 = RTMS_EX_H("ressources/images/walk_animation.png",36,1809252199);
	F3_7032(RTCV(tr1), tr2, ((EIF_INTEGER_32) 8L), (EIF_BOOLEAN) 1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(2));
	tr2 = RTMS_EX_H("ressources/images/run_animation.png",35,418355047);
	F3_7032(RTCV(tr1), tr2, ((EIF_INTEGER_32) 8L), (EIF_BOOLEAN) 1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(2));
	tr2 = RTMS_EX_H("ressources/images/crouch_animation.png",38,1443601767);
	F3_7032(RTCV(tr1), tr2, ((EIF_INTEGER_32) 8L), (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(2));
	tr2 = RTMS_EX_H("ressources/images/jump_animation.png",36,2127891047);
	F3_7032(RTCV(tr1), tr2, ((EIF_INTEGER_32) 8L), (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(2));
	tr2 = RTMS_EX_H("ressources/images/idle_animation.png",36,254552167);
	F3_7032(RTCV(tr1), tr2, ((EIF_INTEGER_32) 8L), (EIF_BOOLEAN) 1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(435, 435, _OBJSIZ_1_5_0_5_0_0_0_0_);
	tr2 = RTMS_EX_H("ressources/images/idle_animation.png",36,254552167);
	F436_8596(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	ti4_1 = eif_integer_32_item(RTCV(arg2),1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_9_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_integer_32_item(RTCV(arg2),2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_10_) = (EIF_INTEGER_32) ti4_1;
	F438_8626(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 10L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_11_15_0_11_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {PERFORMER}.update */
void F438_8613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F438_8615(Current);
	F438_8614(Current);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_11_)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	F438_8617(Current);
	F438_8626(Current);
	F438_8616(Current);
	RTLE;
}

/* {PERFORMER}.change_animation */
void F438_8614 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_11_14_)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_12_)) {
			F438_8625(Current, *(EIF_REFERENCE *)(Current + _REFACS_10_));
		} else {
			tb1 = '\0';
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_11_12_)) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 13L));
				tb1 = (EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_11_15_0_11_0_0_0_0_) > tr8_1);
			}
			if (tb1) {
				F438_8625(Current, *(EIF_REFERENCE *)(Current + _REFACS_10_));
			}
		}
	} else {
		if (((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_10_) || *(EIF_BOOLEAN *)(Current+ _CHROFF_11_9_)) && (EIF_BOOLEAN) !(EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_10_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_11_9_))) && *(EIF_BOOLEAN *)(Current+ _CHROFF_11_11_)))) {
			F438_8625(Current, *(EIF_REFERENCE *)(Current + _REFACS_8_));
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_10_) || *(EIF_BOOLEAN *)(Current+ _CHROFF_11_9_)) && (EIF_BOOLEAN) !(EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_10_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_11_9_))) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_11_11_))) {
				F438_8625(Current, *(EIF_REFERENCE *)(Current + _REFACS_6_));
			} else {
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_8_)) {
					F438_8625(Current, *(EIF_REFERENCE *)(Current + _REFACS_9_));
				} else {
					F438_8625(Current, *(EIF_REFERENCE *)(Current + _REFACS_7_));
				}
			}
		}
	}
	RTLE;
}

/* {PERFORMER}.calculate_jump */
void F438_8615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_12_)) {
		(*(EIF_REAL_64 *)(Current+ _R64OFF_11_15_0_11_0_0_0_1_)) *= (EIF_REAL_64) 0.98;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_11_15_0_11_0_0_0_1_);
		tr2 = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr2 = tr8_1;
		
		ti4_1 = F757_5473(RTCV(tr2));
		eif_put_integer_32_item(RTCV(tr1),2,ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		
		eif_put_integer_32_item(RTCV(tr1),2,((EIF_INTEGER_32) 0L));
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) -30L));
		*(EIF_REAL_64 *)(Current+ _R64OFF_11_15_0_11_0_0_0_1_) = (EIF_REAL_64) tr8_1;
	}
	RTLE;
}

/* {PERFORMER}.increment_frame */
void F438_8616 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_))++;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_);
	tb1 = ti4_1 == ((EIF_INTEGER_32) 24L);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tb1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_2_0_);
		if (tb1) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
		}
	}
	RTLE;
}

/* {PERFORMER}.change_frame */
void F438_8617 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_9_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_11_10_))) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_11_13_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_);
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 1L));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &ti4_2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_6_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_7_);
		eif_put_integer_32_item(RTCV(tr1),1,(EIF_INTEGER_32) (((EIF_INTEGER_32) 0L) - (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	} else {
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_10_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_11_9_))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_11_13_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_);
			ti4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 / ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 1L));
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &ti4_4);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			
			ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_6_);
			ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_7_);
			eif_put_integer_32_item(RTCV(tr1),1,(EIF_INTEGER_32) (((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ti4_4)));
		} else {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_13_)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
				ti4_5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_);
				ti4_6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_5 / ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 1L));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &ti4_6);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
				ti4_5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_);
				ti4_6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_5 / ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 1L));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &ti4_6);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			}
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			
			eif_put_integer_32_item(RTCV(tr1),1,((EIF_INTEGER_32) 0L));
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F430_8535(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {PERFORMER}.reset_frame_counter */
void F438_8618 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {PERFORMER}.set_up */
void F438_8619 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_7_) = (EIF_BOOLEAN) arg1;
}

/* {PERFORMER}.set_down */
void F438_8620 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_8_) = (EIF_BOOLEAN) arg1;
}

/* {PERFORMER}.set_left */
void F438_8621 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_9_) = (EIF_BOOLEAN) arg1;
}

/* {PERFORMER}.set_right */
void F438_8622 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_10_) = (EIF_BOOLEAN) arg1;
}

/* {PERFORMER}.set_shift */
void F438_8623 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_11_) = (EIF_BOOLEAN) arg1;
}

/* {PERFORMER}.set_jump */
void F438_8624 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_12_) = (EIF_BOOLEAN) arg1;
}

/* {PERFORMER}.set_current_animation */
void F438_8625 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tb1 = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (tr1, arg1);
	if ((EIF_BOOLEAN) !tb1) {
		F438_8618(Current);
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	}
	RTLE;
}

/* {PERFORMER}.update_coordinates */
void F438_8626 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_9_);
	loc1 = (EIF_REAL_64) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_);
	ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 1L));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &ti4_2);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6353[Dtype(tr1)-429])(RTCV(tr1));
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (loc1 - (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L))));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_10_);
	loc2 = (EIF_REAL_64) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_11_15_0_8_);
	ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 1L));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &ti4_2);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6352[Dtype(tr1)-429])(RTCV(tr1));
	loc2 = (EIF_REAL_64) (EIF_REAL_64) (loc2 - (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L))));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	tr2 = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr2 = loc1;
	
	ti4_1 = F757_5473(RTCV(tr2));
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
	tr2 = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr2 = loc2;
	
	ti4_1 = F757_5473(RTCV(tr2));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {PERFORMER}.set_grounded */
void F438_8627 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_11_14_) = (EIF_BOOLEAN) arg1;
}

/* {PERFORMER}.set_fall */
void F438_8628 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	*(EIF_REAL_64 *)(Current+ _R64OFF_11_15_0_11_0_0_0_0_) = (EIF_REAL_64) arg1;
}

/* {PERFORMER}.current_animation */
EIF_REFERENCE F438_8629 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {PERFORMER}.walk_anim */
EIF_REFERENCE F438_8630 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {PERFORMER}.idle_anim */
EIF_REFERENCE F438_8631 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {PERFORMER}.run_anim */
EIF_REFERENCE F438_8632 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {PERFORMER}.crouch_anim */
EIF_REFERENCE F438_8633 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {PERFORMER}.jump_anim */
EIF_REFERENCE F438_8634 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


void EIF_Minit920 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
