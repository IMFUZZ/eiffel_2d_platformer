/*
 * Code for class FUNCTION [G#1, G#2, G#3]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu280.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FUNCTION}.last_result */
EIF_REFERENCE F813_6130 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O4354[Dtype(Current) - 812]);
}


/* {FUNCTION}.is_equal */
EIF_BOOLEAN F813_6134 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	if (F811_6096(Current, arg1)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4354[Dtype(arg1)-812])(RTCV(arg1));
		Result = RTEQ(*(EIF_REFERENCE *)(Current + O4354[Dtype(Current)-812]), tr1);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F813_6135 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		F811_6103(Current, arg1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4354[Dtype(arg1)-812])(RTCV(arg1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O4354[Dtype(Current)-812]) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTLE;
}

void EIF_Minit280 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
