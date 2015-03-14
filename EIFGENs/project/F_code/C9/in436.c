/*
 * Code for class INDEXABLE_ITERATION_CURSOR [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in436.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INDEXABLE_ITERATION_CURSOR}.make */
void F468_2904 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2384[dtype-463]) = (EIF_REFERENCE) arg1;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(36),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		*(EIF_NATURAL_32 *)(Current + O2376[dtype-463]) = (EIF_NATURAL_32) tu4_1;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_32 *)(Current + O2376[dtype-463]) = (EIF_NATURAL_32) tu4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O2371[dtype-463]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current + O2377[dtype-463]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.item */
EIF_BOOLEAN F468_2905 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2384[dtype-463]);
	Result = *(EIF_BOOLEAN *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(tr1)-516])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O2368[dtype-463])));
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F468_2917 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !F468_2919(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O2384[dtype-463]);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2389[Dtype(tr1)-516])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O2368[dtype-463]));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F468_2919 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + O2384[dtype-463]);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(36),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current + O2376[dtype-463]));
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.start */
void F468_2924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F468_2927(Current);
	if (*(EIF_BOOLEAN *)(Current + O2377[dtype-463])) {
		ti4_1 = F517_3009(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O2369[dtype-463]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F517_3007(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O2370[dtype-463]) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F517_3009(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O2370[dtype-463]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F517_3007(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O2369[dtype-463]) = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O2368[dtype-463]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O2369[dtype-463]);
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.forth */
void F468_2925 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2377[dtype-463])) {
		(*(EIF_INTEGER_32 *)(Current + O2368[dtype-463])) -= *(EIF_INTEGER_32 *)(Current + O2371[dtype-463]);
	} else {
		(*(EIF_INTEGER_32 *)(Current + O2368[dtype-463])) += *(EIF_INTEGER_32 *)(Current + O2371[dtype-463]);
	}
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F468_2926 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2384[Dtype(Current) - 463]);
}


/* {INDEXABLE_ITERATION_CURSOR}.index_set */
EIF_REFERENCE F468_2927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2384[Dtype(Current)-463]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2388[Dtype(tr1)-516])(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit436 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
