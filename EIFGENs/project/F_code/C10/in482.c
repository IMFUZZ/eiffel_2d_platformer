/*
 * Code for class INTERACTIVE_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in482.h"
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

/* {INTERACTIVE_LIST}.default_create */
void F654_4761 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F636_4671(Current, ((EIF_INTEGER_32) 4L));
}

/* {INTERACTIVE_LIST}.make_from_array */
void F654_4762 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1748[Dtype(arg1)-516])(RTCV(arg1));
	F636_4671(Current, ti4_1);
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_0_);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1731[Dtype(arg1)-516])(RTCV(arg1), (EIF_REFERENCE) &loc1);
		tr2 = RTCCL(tr1);
		F654_4766(Current, tr2);
		loc1++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.on_item_added_at */
void F654_4763 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.on_item_removed_at */
void F654_4764 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.extend */
void F654_4766 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O3467[dtype-653]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F636_4711(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O3467[dtype-653]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(arg1);
	ti4_1 = F636_4692(Current);
	F654_4781(Current, tr1, ti4_1);
	RTLE;
}

/* {INTERACTIVE_LIST}.remove */
void F654_4772 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3455[dtype-635]);
	loc2 = F636_4675(Current);
	*(EIF_BOOLEAN *)(Current + O3467[dtype-653]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F636_4723(Current);
	*(EIF_BOOLEAN *)(Current + O3467[dtype-653]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	F654_4782(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.prune_all */
void F654_4776 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc6);
	RTLR(5,arg1);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current + O1691[dtype-183]);
	loc7 = F636_4674(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = F636_4692(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F636_4692(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(loc7)-516])(RTCV(loc7), (EIF_INTEGER_32) (loc1 + loc3));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2403[Dtype(loc7)-658])(RTCV(loc7), tr2, loc1);
			}
			loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(loc7)-516])(RTCV(loc7), loc1);
			if (loc5) {
				loc4 = (EIF_BOOLEAN) RTEQ(arg1, loc6);
			} else {
				loc4 = (EIF_BOOLEAN) RTCEQ(arg1, loc6);
			}
			if (loc4) {
				tr1 = RTCCL(loc6);
				F654_4782(Current, tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2417[Dtype(loc7)-658])(RTCV(loc7), loc3);
	ti4_1 = F636_4692(Current);
	*(EIF_INTEGER_32 *)(Current + O3455[dtype-635]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {INTERACTIVE_LIST}.wipe_out */
void F654_4778 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (F636_4674(Current));
	loc3 = F636_4692(Current);
	F636_4727(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2393[Dtype(loc1)-658])(RTCV(loc1), loc2);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3464[Dtype(Current)-653])(Current, tr2, ((EIF_INTEGER_32) 1L));
		loc2++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.added_item */
void F654_4781 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3467[dtype-653])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3463[dtype-653])(Current, tr1, arg2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.removed_item */
void F654_4782 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3467[dtype-653])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3464[dtype-653])(Current, tr1, arg2);
	}
	RTLE;
}

void EIF_Minit482 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
