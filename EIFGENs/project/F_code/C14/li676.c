/*
 * Code for class LINEAR [INTEGER_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li676.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINEAR}.exhausted */
EIF_BOOLEAN F388_2048 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1769[Dtype(Current)-376])(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F388_2050 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F306_1979(Current)) {
		Result = F558_3131(Current);
	}
	RTLE;
	return Result;
}

/* {LINEAR}.do_all */
void F388_2053 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 ti8_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,arg1);
	
	RTGC;
	loc3 = Current;
	{
		EIF_TYPE_INDEX typarr0[] = {273,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y1696,Y1696_gen_type,dftype,183);
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc3 = RTRV(eif_non_attached_type(typres0),loc3);
	}
	if (EIF_TEST(loc3)) {
		loc2 = (EIF_REFERENCE) loc3;
		loc1 = F646_4681(RTCV(loc3));
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1770[Dtype(Current)-421])(Current);
	for (;;) {
		if (F558_3131(Current)) break;
		ti8_1 = F646_4675(Current);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_64)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), ti8_1);
		;
		F646_4703(Current);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
		F646_4706(RTCV(loc2), loc1);
	}
	RTLE;
}

void EIF_Minit676 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif