/*
 * Code for class CELL [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce782.h"

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
EIF_INTEGER_32 F179_1888 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1674[Dtype(Current) - 174]);
}


/* {CELL}.put */
void F179_1889 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O1674[Dtype(Current)-174]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit782 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
