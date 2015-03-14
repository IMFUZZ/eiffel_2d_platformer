/*
 * Code for class CELL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce456.h"

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
EIF_BOOLEAN F177_1888 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1674[Dtype(Current) - 174]);
}


/* {CELL}.put */
void F177_1889 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1674[Dtype(Current)-174]) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit456 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
