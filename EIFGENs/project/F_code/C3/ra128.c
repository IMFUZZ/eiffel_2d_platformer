/*
 * Code for class RANDOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra128.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RANDOM}.set_seed */
void F423_2281 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {RANDOM}.modulus */
static EIF_INTEGER_32 F423_2283_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 33)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F423_2283 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,33,F423_2283_body,(Current));
}

/* {RANDOM}.multiplier */
static EIF_INTEGER_32 F423_2284_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 34)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16807L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F423_2284 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,34,F423_2284_body,(Current));
}

/* {RANDOM}.increment */
static EIF_INTEGER_32 F423_2285_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 35)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F423_2285 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,35,F423_2285_body,(Current));
}

/* {RANDOM}.i_th */
EIF_INTEGER_32 F423_2289 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_))) {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_);
	} else {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	}
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		Result = F423_2294(Current, Result);
		loc1++;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) Result;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTLE;
	return Result;
}

/* {RANDOM}.randomize */
EIF_INTEGER_32 F423_2294 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = RTOUCB(EIF_REAL_64,36,F423_2299,(Current));
	tr8_2 = (EIF_REAL_64) (arg1);
	tr8_3 = RTOUCB(EIF_REAL_64,37,F423_2300,(Current));
	tr8_4 = RTOUCB(EIF_REAL_64,38,F423_2298,(Current));
	loc1 = F423_2295(Current, (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3), tr8_4);
	ti4_1 = (EIF_INTEGER_32) loc1;
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {RANDOM}.double_mod */
EIF_REAL_64 F423_2295 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	RTGC;
	Result = (EIF_REAL_64) floor((double) (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2)));
	Result = (EIF_REAL_64) (EIF_REAL_64) (arg1 - (EIF_REAL_64) (Result * arg2));
	return Result;
}

/* {RANDOM}.dmod */
static EIF_REAL_64 F423_2298_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 38)

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,33,F423_2283,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F423_2298 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,38,F423_2298_body,(Current));
}

/* {RANDOM}.dmul */
static EIF_REAL_64 F423_2299_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 36)

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,34,F423_2284,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F423_2299 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,36,F423_2299_body,(Current));
}

/* {RANDOM}.dinc */
static EIF_REAL_64 F423_2300_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 37)

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,35,F423_2285,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F423_2300 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,37,F423_2300_body,(Current));
}

void EIF_Minit128 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
