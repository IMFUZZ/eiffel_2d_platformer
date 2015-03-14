/*
 * Code for class CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co869.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONTROLLER}.make */
void F10_7956 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F10_7957(Current, arg1);
	F10_7960(Current, arg1);
	tr1 = RTMS_EX_H("",0,0);
	tr1 = F816_6200(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {CONTROLLER}.activate_key_pressed */
void F10_7957 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_8_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,1,737,6,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A869_34_2, (EIF_POINTER) _A869_34_2, (EIF_POINTER)(F10_7958),tr2, 1, 1);
	}
	F654_4766(RTCV(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_9_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,1,737,6,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A869_35_2, (EIF_POINTER) _A869_35_2, (EIF_POINTER)(F10_7959),tr2, 1, 1);
	}
	F654_4766(RTCV(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	F678_8763(RTCV(tr1));
	RTLE;
}

/* {CONTROLLER}.on_key_down */
void F10_7958 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_32 loc1 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = F7_7120(RTCV(arg1));
	if (tb1) {
		tr1 = RTMS_EX_H("escape",6,1866787429);
		tr1 = F816_6200(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tb1 = F7_7121(RTCV(arg1));
		if (tb1) {
			tr1 = RTMS_EX_H("spacebar",8,308403314);
			tr1 = F816_6200(RTCV(tr1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			tb1 = F7_7118(RTCV(arg1));
			if (tb1) {
				tr1 = RTMS_EX_H("enter",5,1853897586);
				tr1 = F816_6200(RTCV(tr1));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = RTMS_EX_H("",0,0);
				tr1 = F816_6200(RTCV(tr1));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
				loc1 = F7_7093(RTCV(arg1));
				tr1 = *(EIF_REFERENCE *)(Current);
				F821_6563(RTCV(tr1), loc1);
			}
		}
	}
	tb1 = F7_7181(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = F7_7177(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = F7_7159(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = F7_7162(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = F7_7327(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = F7_7121(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {CONTROLLER}.on_key_up */
void F10_7959 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTMS_EX_H("",0,0);
	tr1 = F816_6200(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tb1 = F7_7181(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tb1 = F7_7159(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tb1 = F7_7177(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tb1 = F7_7162(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tb1 = F7_7327(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tb1 = F7_7121(RTCV(arg1));
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {CONTROLLER}.activate_mouse */
void F10_7960 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_11_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,2,737,767,767,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A869_37_2_3, (EIF_POINTER) _A869_37_2_3, (EIF_POINTER)(F10_7961),tr2, 1, 2);
	}
	F654_4766(RTCV(tr1), tr5);
	RTLE;
}

/* {CONTROLLER}.on_mouse_move */
void F10_7961 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,767,767,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_n2 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_n2 = arg2;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {CONTROLLER}.set_current_key_down */
void F10_7962 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F816_6200(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {CONTROLLER}.current_key_down */
EIF_REFERENCE F10_7963 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {CONTROLLER}.mouse_coordinates */
EIF_REFERENCE F10_7964 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit869 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
