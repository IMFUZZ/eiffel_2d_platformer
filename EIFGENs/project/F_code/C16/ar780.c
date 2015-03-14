/*
 * Code for class ARRAYED_STACK [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar780.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_STACK}.extend */
void F653_4748 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F638_4711(Current, arg1);
	F638_4702(Current);
	RTLE;
}

/* {ARRAYED_STACK}.remove */
void F653_4751 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F638_4723(Current);
	F638_4702(Current);
	RTLE;
}

void EIF_Minit780 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
