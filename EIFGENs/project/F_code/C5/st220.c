/*
 * Code for class STRING_GENERAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st220.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_GENERAL}.append_code */
void F818_6289 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4400[dtype-816])(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4401[dtype-816])(Current))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4501[dtype-818])(Current, loc1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4488[dtype-818])(Current, loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32, EIF_INTEGER_32)) R4487[dtype-818])(Current, arg1, loc1);
	RTLE;
}

/* {STRING_GENERAL}.append */
void F818_6290 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4400[Dtype(arg1)-816])(RTCV(arg1));
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4400[dtype-816])(Current);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		if ((EIF_BOOLEAN) (loc3 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4401[dtype-816])(Current))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4501[dtype-818])(Current, loc3);
		}
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc4 > loc2)) break;
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4363[Dtype(arg1)-818])(RTCV(arg1), loc4);
			F818_6289(Current, tu4_1);
			loc4++;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4488[dtype-818])(Current, loc3);
		*(EIF_INTEGER_32 *)(Current + O4453[dtype-815]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

void EIF_Minit220 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
