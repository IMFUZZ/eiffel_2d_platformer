/*
 * Code for class NATURAL_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na200.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_32_REF}.hash_code */
EIF_INTEGER_32 F763_5596 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2147483647L);
	tu4_1 = eif_bit_and(tu4_1,tu4_2);
	Result = (EIF_INTEGER_32) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.is_less */
EIF_BOOLEAN F763_5603 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.is_equal */
EIF_BOOLEAN F763_5604 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.set_item */
void F763_5605 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_NATURAL_32) arg1;
}

/* {NATURAL_32_REF}.is_valid_character_8_code */
EIF_BOOLEAN F763_5610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 <= tu4_2);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.plus */
EIF_REFERENCE F763_5612 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	F763_5605(RTCV(Result), (EIF_NATURAL_32) (tu4_1 + tu4_2));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.minus */
EIF_REFERENCE F763_5613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	F763_5605(RTCV(Result), (EIF_NATURAL_32) (tu4_1 - tu4_2));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.product */
EIF_REFERENCE F763_5614 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	F763_5605(RTCV(Result), (EIF_NATURAL_32) (tu4_1 * tu4_2));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.integer_quotient */
EIF_REFERENCE F763_5618 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	F763_5605(RTCV(Result), (EIF_NATURAL_32) (tu4_1 / tu4_2));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.integer_remainder */
EIF_REFERENCE F763_5619 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	F763_5605(RTCV(Result), (EIF_NATURAL_32) (tu4_1 % tu4_2));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_natural_8 */
EIF_NATURAL_8 F763_5624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_8) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_natural_16 */
EIF_NATURAL_16 F763_5625 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_16) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_natural_64 */
EIF_NATURAL_64 F763_5627 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_64) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_integer_32 */
EIF_INTEGER_32 F763_5630 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_INTEGER_32) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_integer_64 */
EIF_INTEGER_64 F763_5631 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_INTEGER_64) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.to_natural_8 */
EIF_NATURAL_8 F763_5632 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R4057[Dtype(Current)-762])(Current);
}

/* {NATURAL_32_REF}.to_natural_16 */
EIF_NATURAL_16 F763_5633 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) (FUNCTION_CAST(EIF_NATURAL_16, (EIF_REFERENCE)) R4058[Dtype(Current)-762])(Current);
}

/* {NATURAL_32_REF}.to_natural_64 */
EIF_NATURAL_64 F763_5635 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R4060[Dtype(Current)-762])(Current);
}

/* {NATURAL_32_REF}.to_integer_32 */
EIF_INTEGER_32 F763_5638 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4063[Dtype(Current)-762])(Current);
}

/* {NATURAL_32_REF}.to_integer_64 */
EIF_INTEGER_64 F763_5639 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) (FUNCTION_CAST(EIF_INTEGER_64, (EIF_REFERENCE)) R4064[Dtype(Current)-762])(Current);
}

/* {NATURAL_32_REF}.to_hex_string */
EIF_REFERENCE F763_5642 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(140, 140, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = ((EIF_INTEGER_32) 32L);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 4L));
	tr1 = RTLNS(818, 818, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F817_6236(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	F819_6320(RTCV(Result));
	loc3 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
		loc2 = eif_bit_and(loc3,tu4_1);
		loc2 = (EIF_NATURAL_32) loc2;
		tr1 = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)tr1 = loc2;
		
		tc1 = F763_5643(RTCV(tr1));
		F819_6328(RTCV(Result), tc1, loc1);
		loc3 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 4L));
		loc1--;
	}
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.to_hex_character */
EIF_CHARACTER_8 F763_5643 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc1 = (EIF_INTEGER_32) tu4_1;
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 9L))) {
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) (loc1 + ti4_1);
	} else {
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		Result = (EIF_CHARACTER_8) ((EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 10L))));
	}
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.to_character_8 */
EIF_CHARACTER_8 F763_5645 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_CHARACTER_8) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.to_character_32 */
EIF_CHARACTER_32 F763_5646 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_CHARACTER_32) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_and */
EIF_REFERENCE F763_5647 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_and(tu4_1,tu4_2);
	F763_5605(RTCV(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_or */
EIF_REFERENCE F763_5648 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_or(tu4_1,tu4_2);
	F763_5605(RTCV(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_shift_left */
EIF_REFERENCE F763_5652 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_shift_left(tu4_1,arg1);
	F763_5605(RTCV(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_shift_right */
EIF_REFERENCE F763_5653 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_shift_right(tu4_1,arg1);
	F763_5605(RTCV(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.out */
EIF_REFERENCE F763_5657 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(818, 818, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F817_6236(RTCV(tr1), ((EIF_INTEGER_32) 20L));
	Result = (EIF_REFERENCE) tr1;
	F819_6351(RTCV(Result), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit200 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
