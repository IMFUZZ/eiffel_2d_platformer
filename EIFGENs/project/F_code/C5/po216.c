/*
 * Code for class POINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "po216.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {POINTER}.hash_code */
EIF_INTEGER_32 F810_6083 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F778_6057(Current);
}

/* {POINTER}.is_default_pointer */
EIF_BOOLEAN F810_6084 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {POINTER}.plus */
EIF_POINTER F810_6085 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_POINTER) F778_6062(Current, arg1);
}

/* {POINTER}.out */
EIF_REFERENCE F810_6087 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F778_6074(Current);
}

void EIF_Minit216 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
