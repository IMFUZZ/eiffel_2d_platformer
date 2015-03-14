/*
 * Code for class NATURAL_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na198.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_8}.is_less */
EIF_BOOLEAN F762_5568 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	Result = F760_5512(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.plus */
EIF_NATURAL_8 F762_5569 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F760_5521(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.integer_quotient */
EIF_NATURAL_8 F762_5574 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F760_5527(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.integer_remainder */
EIF_NATURAL_8 F762_5575 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F760_5528(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.as_natural_16 */
EIF_NATURAL_16 F762_5578 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F760_5535(Current);
}

/* {NATURAL_8}.as_natural_32 */
EIF_NATURAL_32 F762_5579 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F760_5536(Current);
}

/* {NATURAL_8}.as_natural_64 */
EIF_NATURAL_64 F762_5580 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F760_5537(Current);
}

/* {NATURAL_8}.as_integer_32 */
EIF_INTEGER_32 F762_5583 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F760_5540(Current);
}

/* {NATURAL_8}.to_character_8 */
EIF_CHARACTER_8 F762_5587 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F760_5555(Current);
}

/* {NATURAL_8}.to_character_32 */
EIF_CHARACTER_32 F762_5588 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F760_5556(Current);
}

/* {NATURAL_8}.bit_and */
EIF_NATURAL_8 F762_5589 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F760_5557(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.bit_or */
EIF_NATURAL_8 F762_5590 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F760_5558(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit198 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
