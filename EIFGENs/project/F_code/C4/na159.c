/*
 * Code for class NATIVE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na159.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATIVE_STRING}.item */
EIF_POINTER F621_3973 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {NATIVE_STRING}.managed_data */
EIF_REFERENCE F621_3974 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {NATIVE_STRING}.is_equal */
EIF_BOOLEAN F621_3980 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tp1 = F621_3973(Current);
	tp2 = F621_3973(RTCV(arg1));
	Result = tp1 == tp2;
	RTLE;
	return Result;
}

void EIF_Minit159 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
