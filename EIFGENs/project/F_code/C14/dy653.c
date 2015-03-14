/*
 * Code for class DYNAMIC_CHAIN [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy653.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DYNAMIC_CHAIN}.wipe_out */
void F542_3126 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1770[Dtype(Current)-421])(Current);
	for (;;) {
		if (F305_1979(Current)) break;
		F645_4723(Current);
	}
	RTLE;
}

void EIF_Minit653 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
