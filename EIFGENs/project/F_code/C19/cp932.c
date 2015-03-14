/*
 * Code for class CPF_PACKAGE_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "cp932.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CPF_PACKAGE_FILE}.current_offset */
EIF_INTEGER_32 F685_8916 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F684_8890(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_1_2_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	RTLE;
	return Result;
}

/* {CPF_PACKAGE_FILE}.read */
void F685_8920 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_NATURAL_32) arg3;
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg3 * arg2);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (F685_8916(Current) + ti4_1) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_1_3_))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_1_3_);
		ti4_2 = F685_8916(Current);
		loc1 = (EIF_NATURAL_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 / arg2);
	}
	F684_8894(Current, arg1, arg2, loc1);
	RTLE;
}

/* {CPF_PACKAGE_FILE}.dispose */
void F685_8931 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1770[Dtype(tr1)-421])(RTCV(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = F379_2048(RTCV(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tp1 = F637_4675(RTCV(tr1));
		free(tp1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F637_4703(RTCV(tr1));
	}
	F684_8907(Current);
	RTLE;
}

/* {CPF_PACKAGE_FILE}.cpf_infos */
EIF_REFERENCE F685_8933 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit932 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
