/*
 * Code for class GAME_COLOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga880.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_COLOR}.make */
void F48_8084 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_NATURAL_8 arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_8 arg4)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_8)) R5980[dtype-47])(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_8)) R5981[dtype-47])(Current, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_8)) R5982[dtype-47])(Current, arg3);
	F48_8101(Current, arg4);
	RTLE;
}

/* {GAME_COLOR}.make_rgb */
void F48_8085 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_NATURAL_8 arg2, EIF_NATURAL_8 arg3)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	F48_8084(Current, arg1, arg2, arg3, tu1_1);
	RTLE;
}

/* {GAME_COLOR}.red */
EIF_NATURAL_8 F48_8088 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
}

/* {GAME_COLOR}.green */
EIF_NATURAL_8 F48_8089 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_1_);
}

/* {GAME_COLOR}.blue */
EIF_NATURAL_8 F48_8090 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_2_);
}

/* {GAME_COLOR}.alpha */
EIF_NATURAL_8 F48_8091 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_3_);
}

/* {GAME_COLOR}.set_red */
void F48_8098 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_) = (EIF_NATURAL_8) arg1;
}

/* {GAME_COLOR}.set_green */
void F48_8099 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_1_) = (EIF_NATURAL_8) arg1;
}

/* {GAME_COLOR}.set_blue */
void F48_8100 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_2_) = (EIF_NATURAL_8) arg1;
}

/* {GAME_COLOR}.set_alpha */
void F48_8101 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_3_) = (EIF_NATURAL_8) arg1;
}

void EIF_Minit880 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
