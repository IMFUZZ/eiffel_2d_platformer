/*
 * Code for class FONT_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fo863.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FONT_FACTORY}.make */
void F4_7038 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(676));
	tr2 = RTMS_EX_H("ressources/fonts/font.ttf",25,348315494);
	F677_8732(RTCV(tr1), tr2, ((EIF_INTEGER_32) 50L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(676));
	tr2 = RTMS_EX_H("ressources/fonts/font.ttf",25,348315494);
	F677_8732(RTCV(tr1), tr2, ((EIF_INTEGER_32) 50L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(676));
	tr2 = RTMS_EX_H("ressources/fonts/AmaticSC-Bold.ttf",34,1199400038);
	F677_8732(RTCV(tr1), tr2, ((EIF_INTEGER_32) 100L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FONT_FACTORY}.standard_font */
EIF_REFERENCE F4_7039 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {FONT_FACTORY}.debug_font */
EIF_REFERENCE F4_7040 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FONT_FACTORY}.title_font */
EIF_REFERENCE F4_7041 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit863 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
