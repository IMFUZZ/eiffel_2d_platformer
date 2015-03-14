/*
 * Code for class LINKABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li476.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKABLE}.right */
EIF_REFERENCE F181_1891 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O1678[Dtype(Current) - 180]);
}


/* {LINKABLE}.put_right */
void F181_1892 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O1678[Dtype(Current)-180]) = (EIF_REFERENCE) arg1;
}

/* {LINKABLE}.forget_right */
void F181_1893 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + O1678[Dtype(Current)-180]) = (EIF_REFERENCE) NULL;
}

void EIF_Minit476 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
