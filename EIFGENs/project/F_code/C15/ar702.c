/*
 * Code for class ARRAYED_STACK [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar702.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_STACK}.extend */
void F651_4748 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3461[dtype-650])(Current, tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1785[dtype-577])(Current);
	RTLE;
}

/* {ARRAYED_STACK}.remove */
void F651_4751 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3462[dtype-650])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1785[dtype-577])(Current);
	RTLE;
}

void EIF_Minit702 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
