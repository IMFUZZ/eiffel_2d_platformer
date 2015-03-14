/*
 * Code for class GAME_RANDOM_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga881.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_RANDOM_CONTROLLER}.make */
void F49_8102 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(881, 881, _OBJSIZ_0_0_0_1_0_0_0_1_);
	F882_9046(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = F59_8181(RTCV(loc1));
	ti4_1 = F59_8182(RTCV(loc1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 60L)) + ti4_1);
	ti4_1 = F59_8183(RTCV(loc1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 60L)) + ti4_1);
	ti4_1 = F59_8187(RTCV(loc1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 1000L)) + ti4_1);
	tr1 = RTLNSMART(eif_non_attached_type(422));
	F423_2281(RTCV(tr1), loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_RANDOM_CONTROLLER}.random_sequence */
EIF_REFERENCE F49_8108 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit881 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
