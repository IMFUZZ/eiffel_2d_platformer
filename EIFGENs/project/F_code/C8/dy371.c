/*
 * Code for class DYNAMIC_CHAIN [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy371.h"

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
void F535_3126 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1770[dtype-421])(Current);
	for (;;) {
		if (F298_1979(Current)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1742[dtype-517])(Current);
	}
	RTLE;
}

void EIF_Minit371 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
