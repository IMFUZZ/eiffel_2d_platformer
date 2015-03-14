/*
 * Code for class reference NATURAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na202.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_32}.is_less */
EIF_BOOLEAN F764_5658 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	Result = F763_5603(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.plus */
EIF_NATURAL_32 F764_5659 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F763_5612(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.minus */
EIF_NATURAL_32 F764_5660 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F763_5613(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.product */
EIF_NATURAL_32 F764_5661 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F763_5614(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_quotient */
EIF_NATURAL_32 F764_5664 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F763_5618(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_remainder */
EIF_NATURAL_32 F764_5665 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F763_5619(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.as_natural_8 */
EIF_NATURAL_8 F764_5667 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F763_5624(Current);
}

/* {NATURAL_32}.as_natural_16 */
EIF_NATURAL_16 F764_5668 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F763_5625(Current);
}

/* {NATURAL_32}.as_natural_64 */
EIF_NATURAL_64 F764_5670 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F763_5627(Current);
}

/* {NATURAL_32}.as_integer_32 */
EIF_INTEGER_32 F764_5673 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F763_5630(Current);
}

/* {NATURAL_32}.as_integer_64 */
EIF_INTEGER_64 F764_5674 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F763_5631(Current);
}

/* {NATURAL_32}.to_character_8 */
EIF_CHARACTER_8 F764_5677 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F763_5645(Current);
}

/* {NATURAL_32}.to_character_32 */
EIF_CHARACTER_32 F764_5678 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F763_5646(Current);
}

/* {NATURAL_32}.bit_and */
EIF_NATURAL_32 F764_5679 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F763_5647(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_or */
EIF_NATURAL_32 F764_5680 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F763_5648(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_shift_left */
EIF_NATURAL_32 F764_5683 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F763_5652(Current, arg1);
}

/* {NATURAL_32}.bit_shift_right */
EIF_NATURAL_32 F764_5684 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F763_5653(Current, arg1);
}

void EIF_Minit202 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
