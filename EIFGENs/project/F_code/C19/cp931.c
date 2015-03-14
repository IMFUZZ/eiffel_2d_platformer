/*
 * Code for class CPF_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "cp931.h"
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F6_7076
static EIF_INTEGER_32 inline_F6_7076 (void)
{
	return (EIF_INTEGER_32) (SEEK_SET)
	;
}
#define INLINE_F6_7076
#endif
#ifndef INLINE_F6_7073
static EIF_NATURAL_8 inline_F6_7073 (EIF_POINTER arg1)
{
	return (EIF_NATURAL_8) (*((uint8_t *)arg1))
	;
}
#define INLINE_F6_7073
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CPF_FILE}.make */
void F684_8889 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,Current);
	
	RTGC;
	tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F146_1842(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("rb",2,29282);
	F146_1842(RTCV(tr1), tr2);
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = F146_1861(RTCV(loc1));
	tp2 = F146_1861(RTCV(loc2));
	tp1 = (EIF_POINTER) fopen((const char *) tp1, (const char *) tp2);
	*(EIF_POINTER *)(Current + O6687[dtype-683]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O6688[dtype-683]);
	tp1 = malloc((size_t)((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current + O6688[dtype-683]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {CPF_FILE}.current_offset */
EIF_INTEGER_32 F684_8890 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O6687[Dtype(Current)-683]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ftell((FILE *) tp1);
}

/* {CPF_FILE}.seek_from_begining */
void F684_8891 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O6687[Dtype(Current)-683]);
	ti4_1 = inline_F6_7076();
	loc1 = (EIF_INTEGER_32) fseek((FILE *) tp1, (long) arg1, (int) ti4_1);
	RTLE;
}

/* {CPF_FILE}.read */
void F684_8894 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O6687[dtype-683]);
	tu4_1 = (EIF_NATURAL_32) fread((void *) arg1, (size_t) arg2, (size_t) arg3, (FILE *) tp1);
	*(EIF_NATURAL_32 *)(Current + O6675[dtype-683]) = (EIF_NATURAL_32) tu4_1;
	RTLE;
}

/* {CPF_FILE}.read_natural_8 */
void F684_8896 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O6688[dtype-683]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_NATURAL_32, EIF_NATURAL_32)) R6674[dtype-683])(Current, tp1, tu4_1, tu4_2);
	tp1 = *(EIF_POINTER *)(Current + O6688[dtype-683]);
	tu1_1 = inline_F6_7073(tp1);
	*(EIF_NATURAL_8 *)(Current + O6683[dtype-683]) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {CPF_FILE}.read_natural_16_big_endian */
void F684_8897 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F684_8896(Current);
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O6683[dtype-683]);
	loc1 = (EIF_NATURAL_16) tu1_1;
	loc1 = eif_bit_shift_left(loc1,((EIF_INTEGER_32) 8L));
	F684_8896(Current);
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O6683[dtype-683]);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	tu2_1 = eif_bit_or(tu2_1,loc1);
	*(EIF_NATURAL_16 *)(Current + O6684[dtype-683]) = (EIF_NATURAL_16) tu2_1;
	RTLE;
}

/* {CPF_FILE}.read_natural_32_big_endian */
void F684_8898 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F684_8897(Current);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + O6684[dtype-683]);
	loc1 = (EIF_NATURAL_32) tu2_1;
	loc1 = eif_bit_shift_left(loc1,((EIF_INTEGER_32) 16L));
	F684_8897(Current);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + O6684[dtype-683]);
	tu4_1 = (EIF_NATURAL_32) tu2_1;
	tu4_1 = eif_bit_or(tu4_1,loc1);
	*(EIF_NATURAL_32 *)(Current + O6685[dtype-683]) = (EIF_NATURAL_32) tu4_1;
	RTLE;
}

/* {CPF_FILE}.read_natural_16_little_endian */
void F684_8900 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F684_8896(Current);
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O6683[dtype-683]);
	loc1 = (EIF_NATURAL_16) tu1_1;
	F684_8896(Current);
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O6683[dtype-683]);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	tu2_1 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
	tu2_1 = eif_bit_or(loc1,tu2_1);
	*(EIF_NATURAL_16 *)(Current + O6684[dtype-683]) = (EIF_NATURAL_16) tu2_1;
	RTLE;
}

/* {CPF_FILE}.read_natural_32_little_endian */
void F684_8901 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F684_8900(Current);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + O6684[dtype-683]);
	loc1 = (EIF_NATURAL_32) tu2_1;
	F684_8900(Current);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + O6684[dtype-683]);
	tu4_1 = (EIF_NATURAL_32) tu2_1;
	tu4_1 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 16L));
	tu4_1 = eif_bit_or(loc1,tu4_1);
	*(EIF_NATURAL_32 *)(Current + O6685[dtype-683]) = (EIF_NATURAL_32) tu4_1;
	RTLE;
}

/* {CPF_FILE}.dispose */
void F684_8907 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O6687[dtype-683]);
	loc1 = (EIF_INTEGER_32) fclose((FILE *) tp1);
	tp1 = *(EIF_POINTER *)(Current + O6687[dtype-683]);
	tp2 = ((EIF_POINTER) 0);
	tr1 = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)tr1 = tp1;
	
	F778_6058(RTCV(tr1), tp2);
	RTLE;
}

void EIF_Minit931 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
