/*
 * Code for class INTEGER_INTERVAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in144.h"
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

/* {INTEGER_INTERVAL}.make */
void F517_3004 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) arg2;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.lower */
EIF_INTEGER_32 F517_3007 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_);
}

/* {INTEGER_INTERVAL}.upper */
EIF_INTEGER_32 F517_3009 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_);
}

/* {INTEGER_INTERVAL}.item */
EIF_INTEGER_32 F517_3010 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) arg1;
}

/* {INTEGER_INTERVAL}.valid_index */
EIF_BOOLEAN F517_3013 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_)) {
		tb1 = (EIF_BOOLEAN) (arg1 <= F517_3009(Current));
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
			tb1 = (EIF_BOOLEAN) (arg1 >= F517_3007(Current));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.capacity */
EIF_INTEGER_32 F517_3015 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	RTLE;
	return (EIF_INTEGER_32) F517_3016(Current);
}

/* {INTEGER_INTERVAL}.count */
EIF_INTEGER_32 F517_3016 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_))) {
		Result = F517_3009(Current);
		ti4_1 = F517_3007(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.index_set */
EIF_REFERENCE F517_3017 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

/* {INTEGER_INTERVAL}.is_equal */
EIF_BOOLEAN F517_3018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		tb2 = '\0';
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_1_);
		if (tb3) {
			ti4_1 = F517_3007(RTCV(arg1));
			tb2 = (EIF_BOOLEAN)(F517_3007(Current) == ti4_1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_)) {
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_2_);
			if (tb3) {
				ti4_1 = F517_3009(RTCV(arg1));
				tb2 = (EIF_BOOLEAN)(F517_3009(Current) == ti4_1);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.extend */
void F517_3022 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < F517_3007(Current))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 > F517_3009(Current))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) arg1;
		}
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.wipe_out */
void F517_3028 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {INTEGER_INTERVAL}.copy */
void F517_3032 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

void EIF_Minit144 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
