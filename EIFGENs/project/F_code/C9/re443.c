/*
 * Code for class RESIZABLE [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re443.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RESIZABLE}.additional_space */
EIF_INTEGER_32 F352_1998 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1751[Dtype(Current)-516])(Current);
	Result = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)),((EIF_INTEGER_32) 5L));
	RTLE;
	return Result;
}

void EIF_Minit443 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif