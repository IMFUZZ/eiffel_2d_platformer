/*
 * Code for class LINKABLE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li781.h"

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
EIF_REFERENCE F183_1891 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {LINKABLE}.put_right */
void F183_1892 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {LINKABLE}.forget_right */
void F183_1893 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
}

void EIF_Minit781 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
