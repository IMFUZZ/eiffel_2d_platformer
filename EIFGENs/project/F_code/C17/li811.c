/*
 * Code for class LIST [CHARACTER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li811.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIST}.is_equal */
EIF_BOOLEAN F561_3130 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = F302_1979(RTCV(arg1));
		if ((EIF_BOOLEAN)(F302_1979(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1) + O1691[Dtype(arg1)-183]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1691[dtype-183]) == tb2);
		}
		if (tb1) {
			ti4_1 = F649_4692(RTCV(arg1));
			Result = (EIF_BOOLEAN)(F649_4692(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !F302_1979(Current);
		}
		if (tb1) {
			tb1 = '\0';
			tr1 = F649_4681(Current);
			loc1 = tr1;
			if (EIF_TEST(loc1)) {
				tr1 = F649_4681(RTCV(arg1));
				loc2 = tr1;
				tb1 = EIF_TEST(loc2);
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1770[dtype-421])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1770[Dtype(arg1)-421])(RTCV(arg1));
				for (;;) {
					tb1 = '\01';
					if (!F561_3131(Current)) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					if (*(EIF_BOOLEAN *)(Current + O1691[dtype-183])) {
						tw1 = F649_4675(Current);
						tw2 = F649_4675(RTCV(arg1));
						Result = (EIF_BOOLEAN) (tw1 == tw2);
					} else {
						tw1 = F649_4675(Current);
						tw2 = F649_4675(RTCV(arg1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
					}
					F649_4703(Current);
					F649_4703(RTCV(arg1));
				}
				F649_4706(Current, loc1);
				F649_4706(RTCV(arg1), loc2);
			} else {
			}
		} else {
			tb2 = '\0';
			tb3 = '\0';
			if (F302_1979(Current)) {
				tb4 = F302_1979(RTCV(arg1));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = *(EIF_BOOLEAN *)(RTCV(arg1) + O1691[Dtype(arg1)-183]);
				tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1691[dtype-183]) == tb3);
			}
			if (tb2) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LIST}.after */
EIF_BOOLEAN F561_3131 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = F649_4692(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {LIST}.before */
EIF_BOOLEAN F561_3132 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	return Result;
}

void EIF_Minit811 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
