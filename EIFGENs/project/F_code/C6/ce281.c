/*
 * Code for class CELL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce281.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CELL}.item */
EIF_REFERENCE F175_1888 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O1674[Dtype(Current) - 174]);
}


/* {CELL}.put */
void F175_1889 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O1674[Dtype(Current)-174]) = (EIF_REFERENCE) RTCCL(arg1);
	RTLE;
}

void EIF_Minit281 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif