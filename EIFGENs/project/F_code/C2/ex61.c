/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex61.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTIONS}.raise */
void F85_1349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(86, 86, _OBJSIZ_5_1_0_1_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	F86_1381(RTCV(loc1), arg1);
	F86_1366(RTCV(loc1));
	RTLE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F85_1350 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTOUCR(10,F84_1330,(Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1093[Dtype(tr1)-74])(RTCV(tr1), ((EIF_INTEGER_32) 31L));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F86_1381(RTCV(loc1), arg1);
		F86_1366(RTCV(loc1));
	}
	RTLE;
}

void EIF_Minit61 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
