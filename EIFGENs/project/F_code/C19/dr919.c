/*
 * Code for class DRAWABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dr919.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DRAWABLE}.make */
void F437_8598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg2);
	
	RTGC;
	F65_8260(Current, arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	ti4_1 = eif_integer_32_item(RTCV(arg2),1);
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
	ti4_1 = eif_integer_32_item(RTCV(arg2),2);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current + O6414[Dtype(Current)-436]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 1L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DRAWABLE}.make_with_alpha */
void F437_8599 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	ti4_1 = eif_integer_32_item(RTCV(arg2),1);
	*(EIF_INTEGER_32 *)(Current + O6412[dtype-436]) = (EIF_INTEGER_32) ti4_1;
	F436_8596(Current, arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	ti4_1 = eif_integer_32_item(RTCV(arg2),1);
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
	ti4_1 = eif_integer_32_item(RTCV(arg2),2);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current + O6414[dtype-436]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O6415[dtype-436]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 1L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DRAWABLE}.update */
void F437_8600 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O6414[dtype-436])) {
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O6415[dtype-436])) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			ti4_1 = eif_integer_32_item(RTCV(tr1),1);
			(*(EIF_INTEGER_32 *)(Current + O6412[dtype-436])) += ti4_1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O6412[dtype-436]);
			eif_put_integer_32_item(RTCV(tr1),1,(EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 10L)));
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = eif_integer_32_item(RTCV(tr1),1);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 800L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = eif_integer_32_item(RTCV(tr2),1);
			ti4_3 = F430_8543(Current);
			eif_put_integer_32_item(RTCV(tr1),1,(EIF_INTEGER_32) (ti4_2 - (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 800L))));
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_4 = eif_integer_32_item(RTCV(tr1),1);
		if ((EIF_BOOLEAN) (ti4_4 < (EIF_INTEGER_32) -F430_8543(Current))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_4 = eif_integer_32_item(RTCV(tr2),1);
			ti4_5 = F430_8543(Current);
			eif_put_integer_32_item(RTCV(tr1),1,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_4 + ti4_5) + ((EIF_INTEGER_32) 800L)));
			*(EIF_INTEGER_32 *)(Current + O6412[dtype-436]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8000L);
		}
	}
	RTLE;
}

/* {DRAWABLE}.set_mouvement */
void F437_8601 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {DRAWABLE}.set_is_looping */
void F437_8602 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6414[Dtype(Current)-436]) = (EIF_BOOLEAN) arg1;
}

/* {DRAWABLE}.set_relative_to_player */
void F437_8603 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6415[Dtype(Current)-436]) = (EIF_BOOLEAN) arg1;
}

/* {DRAWABLE}.set_ratio */
void F437_8604 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
}

/* {DRAWABLE}.origin */
EIF_REFERENCE F437_8605 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DRAWABLE}.mouvement */
EIF_REFERENCE F437_8606 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DRAWABLE}.sprite */
EIF_REFERENCE F437_8608 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {DRAWABLE}.ratio */
EIF_REFERENCE F437_8611 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit919 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
