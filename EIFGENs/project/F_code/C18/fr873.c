/*
 * Code for class FRAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fr873.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FRAME}.make */
void F14_8048 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,loc2);
	RTLR(5,arg2);
	RTLR(6,loc1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {179,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
	F180_1889(RTCV(tr1), ti1_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	F14_8049(Current, arg1, arg3, (EIF_BOOLEAN) 0);
	tr1 = RTLNS(10, 10, _OBJSIZ_3_0_0_0_0_0_0_0_);
	F11_7974(RTCV(tr1), arg2);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(9, 9, _OBJSIZ_2_9_0_0_0_0_0_0_);
	F10_7956(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	F14_8050(Current, arg1, loc1, loc2);
	RTLE;
}

/* {FRAME}.create_window */
void F14_8049 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	F50_8122(RTCV(arg1), ((EIF_INTEGER_32) 800L), ((EIF_INTEGER_32) 600L), ((EIF_INTEGER_32) 16L), (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 1, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 1, arg3);
	F50_8119(RTCV(arg1), arg2, arg2);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_26_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,0,50,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = arg1;
	RTAR(tr2,arg1);
	
	{
		EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A873_36, (EIF_POINTER) _A873_36, (EIF_POINTER)(F14_8052),tr2, 1, 0);
	}
	F654_4766(RTCV(tr1), tr3);
	RTLE;
}

/* {FRAME}.start */
void F14_8050 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLR(5,arg2);
	RTLR(6,tr3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(132));
	F133_8314(RTCV(tr1), arg1, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(131));
	F132_8309(RTCV(tr1), arg1, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(130));
	F131_8306(RTCV(tr1), arg1, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_27_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,737,0,50,9,10,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 5, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = arg1;
	RTAR(tr2,arg1);
	((EIF_TYPED_VALUE *)tr2+3)->it_r = arg2;
	RTAR(tr2,arg2);
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg3;
	RTAR(tr2,arg3);
	
	{
		EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A873_35, (EIF_POINTER) _A873_35, (EIF_POINTER)(F14_8051),tr2, 1, 0);
	}
	F654_4766(RTCV(tr1), tr3);
	F50_8145(RTCV(arg1));
	RTLE;
}

/* {FRAME}.update */
void F14_8051 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti1_1 = *(EIF_INTEGER_8 *)(RTCV(tr1)+ _CHROFF_0_0_);
	ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
	tb1 = ti1_1 == ti1_2;
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F132_8311(RTCV(tr1), arg1, arg2, arg3, tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		ti1_1 = *(EIF_INTEGER_8 *)(RTCV(tr1)+ _CHROFF_0_0_);
		ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 2L);
		tb1 = ti1_1 == ti1_2;
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F131_8308(RTCV(tr1), arg1, arg2, arg3, tr2);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti1_1 = *(EIF_INTEGER_8 *)(RTCV(tr1)+ _CHROFF_0_0_);
			ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 3L);
			tb1 = ti1_1 == ti1_2;
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				F130_8288(RTCV(tr1), arg1, arg2, arg3, tr2);
			} else {
				tr1 = RTMS_EX_H("The scene could not be selected",31,281452900);
				F1_27(Current, tr1);
			}
		}
	}
	F11_7977(RTCV(arg3));
	F50_8118(RTCV(arg1));
	RTLE;
}

/* {FRAME}.on_quit */
void F14_8052 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F50_8149(RTCV(arg1));
}

/* {FRAME}.main_menu */
EIF_REFERENCE F14_8053 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {FRAME}.level_1 */
EIF_REFERENCE F14_8054 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FRAME}.option_menu */
EIF_REFERENCE F14_8055 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {FRAME}.current_scene_index */
EIF_REFERENCE F14_8056 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


void EIF_Minit873 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
