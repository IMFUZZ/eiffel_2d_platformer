/*
 * Code for class DATE_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da909.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_DURATION}.make_by_date_time */
void F171_8468 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {DATE_TIME_DURATION}.date */
EIF_REFERENCE F171_8470 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_DURATION}.time */
EIF_REFERENCE F171_8471 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_DURATION}.is_less */
EIF_BOOLEAN F171_8476 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	tb1 = '\0';
	if (F171_8478(Current)) {
		tb2 = F171_8478(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		Result = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F172_8518(RTCV(tr1));
		ti4_2 = F62_8226(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		ti4_3 = F172_8518(RTCV(tr1));
		if (!((EIF_BOOLEAN) ((EIF_INTEGER_32) (F62_8226(Current) + ti4_1) < (EIF_INTEGER_32) (ti4_2 + ti4_3)))) {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F172_8518(RTCV(tr1));
			ti4_2 = F62_8226(RTCV(arg1));
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			ti4_3 = F172_8518(RTCV(tr1));
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (F62_8226(Current) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F172_8519(RTCV(tr1));
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
				tr2 = F172_8519(RTCV(tr2));
				tb2 = F172_8502(RTCV(tr1), tr2);
				tb1 = tb2;
			}
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_equal */
EIF_BOOLEAN F171_8477 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = F62_8224(RTCV(arg1));
	if ((EIF_BOOLEAN)(F62_8224(Current) == ti4_1)) {
		ti4_1 = F62_8225(RTCV(arg1));
		tb2 = (EIF_BOOLEAN)(F62_8225(Current) == ti4_1);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F172_8518(RTCV(tr1));
		ti4_2 = F62_8226(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		ti4_3 = F172_8518(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (F62_8226(Current) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F172_8519(RTCV(tr1));
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr2 = F172_8519(RTCV(tr2));
		tb1 = F172_8503(RTCV(tr1), tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.definite */
EIF_BOOLEAN F171_8478 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F170_8448(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit909 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
