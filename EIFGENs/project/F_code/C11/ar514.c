/*
 * Code for class ARRAYED_QUEUE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar514.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_QUEUE}.item */
EIF_REFERENCE F626_4492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr1)-516])(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {ARRAYED_QUEUE}.is_equal */
EIF_BOOLEAN F626_4494 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_1_);
	if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_1_0_);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
	}
	if (tb1) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_0_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2301[Dtype(tr1)-658])(tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2301[Dtype(tr1)-658])(tr1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) !Result)) break;
				tr1 = *(EIF_REFERENCE *)(Current);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr1)-516])(RTCV(tr1), loc1);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr2)-516])(RTCV(tr2), loc2);
				Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
				loc2++;
				if ((EIF_BOOLEAN) (loc2 > loc4)) {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				loc1++;
				if ((EIF_BOOLEAN)(loc1 == loc3)) {
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				loc5--;
			}
		} else {
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) !Result)) break;
				tr1 = *(EIF_REFERENCE *)(Current);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr1)-516])(RTCV(tr1), loc1);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr2)-516])(RTCV(tr2), loc2);
				Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
				loc2++;
				if ((EIF_BOOLEAN) (loc2 > loc4)) {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				loc1++;
				if ((EIF_BOOLEAN)(loc1 == loc3)) {
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				loc5--;
			}
		}
	}
	RTLE;
	return Result;
}

/* {ARRAYED_QUEUE}.count */
EIF_INTEGER_32 F626_4495 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
}


/* {ARRAYED_QUEUE}.capacity */
EIF_INTEGER_32 F626_4496 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2301[Dtype(tr1)-658])(tr1);
	RTLE;
	return Result;
}

/* {ARRAYED_QUEUE}.is_empty */
EIF_BOOLEAN F626_4499 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ((EIF_INTEGER_32) 0L));
}

/* {ARRAYED_QUEUE}.extend */
void F626_4503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = F626_4496(Current);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	if ((EIF_BOOLEAN) (loc2 >= loc1)) {
		ti4_1 = F347_1998(Current);
		F626_4518(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
		loc1 = F626_4496(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	ti4_1 = F626_4517(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2404[Dtype(tr1)-658])(RTCV(tr1), tr2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {ARRAYED_QUEUE}.copy */
void F626_4507 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ARRAYED_QUEUE}.wipe_out */
void F626_4511 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2423[Dtype(tr1)-658])(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {ARRAYED_QUEUE}.correct_mismatch */
void F626_4514 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,tr3);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tr1 = RTOUCR(2,F625_4458,(Current));
	tr2 = RTMS_EX_H("count",5,1870727284);
	tb5 = F628_4530(RTCV(tr1), tr2);
	if ((EIF_BOOLEAN) !tb5) {
		tr1 = RTOUCR(2,F625_4458,(Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr1 = F628_4528(RTCV(tr1), tr2);
		loc1 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {658,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y1696,Y1696_gen_type,dftype,183);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc1 = RTRV(eif_non_attached_type(typres0),loc1);
		}
		tb4 = EIF_TEST(loc1);
	}
	if (tb4) {
		tr2 = RTOUCR(2,F625_4458,(Current));
		tr3 = RTMS_EX_H("in_index",8,1594187128);
		tr2 = F628_4528(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 770, tr1, loc2, tb4);
		tb3 = tb4;
	}
	if (tb3) {
		tr2 = RTOUCR(2,F625_4458,(Current));
		tr3 = RTMS_EX_H("out_index",9,426498168);
		tr2 = F628_4528(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 770, tr1, loc3, tb3);
		tb2 = tb3;
	}
	if (tb2) {
		tr2 = RTOUCR(2,F625_4458,(Current));
		tr3 = RTMS_EX_H("object_comparison",17,2049833582);
		tr2 = F628_4528(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_BOOLEAN *), 755, tr1, loc4, tb2);
		tb1 = tb2;
	}
	if (tb1) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc3;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2301[Dtype(loc1)-658])(loc1);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2301[Dtype(loc1)-658])(loc1);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2301[Dtype(loc1)-658])(loc1);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc3) + ti4_1) % ti4_2);
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) loc4;
	} else {
		F625_4457(Current);
	}
	RTLE;
}

/* {ARRAYED_QUEUE}.area */
EIF_REFERENCE F626_4515 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ARRAYED_QUEUE}.in_index */
EIF_INTEGER_32 F626_4517 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F626_4496(Current);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L)) + ti4_1) % loc1) + ((EIF_INTEGER_32) 1L));
	} else {
		RTLE;
		return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	}
	RTLE;
	return Result;
}

/* {ARRAYED_QUEUE}.grow */
void F626_4518 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2301[Dtype(tr1)-658])(tr1);
	loc2 = eif_max_int32 (loc2,arg1);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN) (F626_4517(Current) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2420[Dtype(tr1)-658])(tr1, loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2300[Dtype(tr1)-658])(tr1);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = F626_4521(Current);
		tr3 = RTCCL(tr2);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2421[Dtype(tr1)-658])(RTCV(tr1), tr3, loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc3) + ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2411[Dtype(tr1)-658])(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc2 - loc3), loc3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc3) + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {ARRAYED_QUEUE}.newest_item */
EIF_REFERENCE F626_4521 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	loc1 = F626_4517(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2400[Dtype(tr2)-658])(RTCV(tr2));
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr1)-516])(RTCV(tr1), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr1)-516])(RTCV(tr1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

void EIF_Minit514 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
