/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap922.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APPLICATION}.make */
void F458_8660 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(50, 50, _OBJSIZ_5_2_0_2_0_0_0_0_);
	F51_8160(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(14, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(134, 134, _OBJSIZ_4_5_0_2_0_3_0_0_);
	F135_8322(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	F50_8111(RTCV(loc1));
	F15_8058(RTCV(loc2));
	F135_8323(RTCV(loc3));
	F458_8661(Current, loc1, loc3);
	F135_8341(RTCV(loc3));
	F15_8061(RTCV(loc2));
	F50_8150(RTCV(loc1));
	RTLE;
}

/* {APPLICATION}.run */
void F458_8661 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	loc2 = RTMS_EX_H("Looking for home -- Pre-Alpha 0.1 --",36,2013951021);
	tr1 = RTLNS(13, 13, _OBJSIZ_4_0_0_0_0_0_0_0_);
	F14_8048(RTCV(tr1), arg1, arg2, loc2);
	loc1 = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit922 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
