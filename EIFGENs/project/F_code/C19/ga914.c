/*
 * Code for class GAME_SUB_SURFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga914.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SUB_SURFACE}.make_from_surface */
void F432_8586 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O6368[Dtype(arg1)-429]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O6369[Dtype(arg1)-429]);
	F432_8587(Current, tr1, (EIF_INTEGER_32) (arg2 + ti4_1), (EIF_INTEGER_32) (arg3 + ti4_2), arg4, arg5);
	RTLE;
}

/* {GAME_SUB_SURFACE}.make_from_imp */
void F432_8587 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_5_0_1_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_5_0_2_) = (EIF_INTEGER_32) arg3;
	F430_8569(Current, arg4);
	F430_8568(Current, arg5);
	F430_8564(Current, (EIF_BOOLEAN) 0);
	F430_8550(Current);
	F430_8557(Current);
	RTLE;
}

void EIF_Minit914 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
