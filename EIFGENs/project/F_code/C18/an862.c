/*
 * Code for class ANIMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "an862.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ANIMATION}.make */
void F3_7032 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F3_7033(Current, arg1, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F3_7034(Current, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) arg3;
	RTLE;
}

/* {ANIMATION}.create_right_frames */
EIF_REFERENCE F3_7033 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(435, 435, _OBJSIZ_1_5_0_5_0_0_0_0_);
	F436_8596(RTCV(tr1), arg1);
	loc3 = (EIF_REFERENCE) tr1;
	loc2 = F430_8543(RTCV(loc3));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / arg2);
	{
		static EIF_TYPE_INDEX typarr0[] = {635,429,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 635, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F636_4671(RTCV(tr1), arg2);
	Result = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		tb1 = loc1 == arg2;
		if (tb1) break;
		ti4_1 = F430_8542(RTCV(loc3));
		tr1 = F430_8537(RTCV(loc3), (EIF_INTEGER_32) (loc2 * loc1), ((EIF_INTEGER_32) 0L), loc2, ti4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(Result)-421])(RTCV(Result), tr1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {ANIMATION}.create_left_frames */
EIF_REFERENCE F3_7034 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {635,429,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 635, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F636_4671(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = loc1 == (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &loc1);
		tr1 = F430_8540(RTCV(tr1), (EIF_BOOLEAN) 1, (EIF_BOOLEAN) 0);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(Result)-421])(RTCV(Result), tr1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {ANIMATION}.frames_left */
EIF_REFERENCE F3_7035 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ANIMATION}.frames_right */
EIF_REFERENCE F3_7036 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit862 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
