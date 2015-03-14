/*
 * Code for class FONT_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F863_7038(EIF_REFERENCE);
extern EIF_TYPED_VALUE F863_7039(EIF_REFERENCE);
extern EIF_TYPED_VALUE F863_7040(EIF_REFERENCE);
extern EIF_TYPED_VALUE F863_7041(EIF_REFERENCE);
extern void EIF_Minit863(void);

#ifdef __cplusplus
}
#endif


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
void F863_7038 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 0, 12606);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(862, Current, 12606);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4931, 0xF800039D, 0); /* standard_font */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4931, dtype, Dftype(Current))));
	tr2 = RTMS_EX_H("ressources/fonts/font.ttf",25,348315494);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6519, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4931, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4932, 0xF800039D, 0); /* debug_font */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4932, dtype, Dftype(Current))));
	tr2 = RTMS_EX_H("ressources/fonts/font.ttf",25,348315494);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6519, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4932, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4933, 0xF800039D, 0); /* title_font */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4933, dtype, Dftype(Current))));
	tr2 = RTMS_EX_H("ressources/fonts/AmaticSC-Bold.ttf",34,1199400038);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6519, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4933, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
}

/* {FONT_FACTORY}.standard_font */
EIF_TYPED_VALUE F863_7039 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4931,Dtype(Current)));
	return r;
}


/* {FONT_FACTORY}.debug_font */
EIF_TYPED_VALUE F863_7040 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4932,Dtype(Current)));
	return r;
}


/* {FONT_FACTORY}.title_font */
EIF_TYPED_VALUE F863_7041 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4933,Dtype(Current)));
	return r;
}


void EIF_Minit863 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
