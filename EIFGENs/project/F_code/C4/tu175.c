/*
 * Code for class TUPLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tu175.h"
#include "eif_built_in.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TUPLE}.item */
EIF_REFERENCE F738_4917 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	switch ((EIF_NATURAL_8) eif_item_type((Current), (arg1))) {
		case 1U:
			Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((Current), (arg1)));
			break;
		case 2U:
			Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (EIF_CHARACTER_8) eif_character_8_item((Current), (arg1));
			break;
		case 14U:
			Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (EIF_CHARACTER_32) eif_character_32_item((Current), (arg1));
			break;
		case 3U:
			Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (EIF_REAL_64) eif_real_64_item((Current), (arg1));
			break;
		case 4U:
			Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (EIF_REAL_32) eif_real_32_item((Current), (arg1));
			break;
		case 5U:
			Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (EIF_POINTER) eif_pointer_item((Current), (arg1));
			break;
		case 10U:
			Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (EIF_NATURAL_8) eif_natural_8_item((Current), (arg1));
			break;
		case 11U:
			Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (EIF_NATURAL_16) eif_natural_16_item((Current), (arg1));
			break;
		case 12U:
			Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (EIF_NATURAL_32) eif_natural_32_item((Current), (arg1));
			break;
		case 13U:
			Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (EIF_NATURAL_64) eif_natural_64_item((Current), (arg1));
			break;
		case 6U:
			Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (EIF_INTEGER_8) eif_integer_8_item((Current), (arg1));
			break;
		case 7U:
			Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (EIF_INTEGER_16) eif_integer_16_item((Current), (arg1));
			break;
		case 8U:
			Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (EIF_INTEGER_32) eif_integer_32_item((Current), (arg1));
			break;
		case 9U:
			Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (EIF_INTEGER_64) eif_integer_64_item((Current), (arg1));
			break;
		case 0U:
			Result = (EIF_REFERENCE) eif_reference_item((Current), (arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
	return Result;
}

/* {TUPLE}.object_comparison */
EIF_BOOLEAN F738_4939 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((Current), (((EIF_INTEGER_32) 0L))));
}

/* {TUPLE}.is_equal */
EIF_BOOLEAN F738_4940 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc3 = F738_4939(Current);
	tb1 = F738_4939(RTCV(arg1));
	if ((EIF_BOOLEAN)(loc3 == tb1)) {
		if (loc3) {
			loc2 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (arg1);
			if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
					tr1 = F738_4917(Current, loc1);
					tr2 = F738_4917(RTCV(arg1), loc1);
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					loc1++;
				}
			}
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) eif_builtin_ANY_is_equal (Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {TUPLE}.hash_code */
EIF_INTEGER_32 F738_4943 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		switch ((EIF_NATURAL_8) eif_item_type((Current), (loc1))) {
			case 1U:
				tb1 = (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((Current), (loc1)));
				loc3 = (tb1 ? 1L : 0L);
				break;
			case 2U:
				tc1 = (EIF_CHARACTER_8) eif_character_8_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (tc1);
				break;
			case 14U:
				tw1 = (EIF_CHARACTER_32) eif_character_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (tw1);
				break;
			case 3U:
				tr8_1 = (EIF_REAL_64) eif_real_64_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr8_1)));
				break;
			case 4U:
				tr4_1 = (EIF_REAL_32) eif_real_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr4_1)));
				break;
			case 5U:
				tp1 = (EIF_POINTER) eif_pointer_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
				break;
			case 10U:
				tu1_1 = (EIF_NATURAL_8) eif_natural_8_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu1_1)));
				break;
			case 11U:
				tu2_1 = (EIF_NATURAL_16) eif_natural_16_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu2_1)));
				break;
			case 12U:
				tu4_1 = (EIF_NATURAL_32) eif_natural_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
				break;
			case 13U:
				tu8_1 = (EIF_NATURAL_64) eif_natural_64_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
				break;
			case 6U:
				ti1_1 = (EIF_INTEGER_8) eif_integer_8_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti1_1)));
				break;
			case 7U:
				ti2_1 = (EIF_INTEGER_16) eif_integer_16_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti2_1)));
				break;
			case 8U:
				ti4_1 = (EIF_INTEGER_32) eif_integer_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
				break;
			case 9U:
				ti8_1 = (EIF_INTEGER_64) eif_integer_64_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti8_1)));
				break;
			case 0U:
				tr1 = (EIF_REFERENCE) eif_reference_item((Current), (loc1));
				loc4 = RTCCL(tr1);
				loc4 = RTRV(eif_non_attached_type(689),loc4);
				if (EIF_TEST(loc4)) {
					loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3505[Dtype(loc4)-690])(RTCV(loc4));
				} else {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
		tr1 = RTOUCR(1,F738_5044,(Current));
		ti4_1 = F424_2307(RTCV(tr1), loc1);
		Result += (EIF_INTEGER_32) (loc3 * ti4_1);
		loc1++;
	}
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return (EIF_INTEGER_32) Result;
}

/* {TUPLE}.valid_index */
EIF_BOOLEAN F738_4944 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current));
	}
	RTLE;
	return Result;
}

/* {TUPLE}.valid_type_for_index */
EIF_BOOLEAN F738_4945 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc13);
	RTLR(15,loc14);
	RTLR(16,loc15);
	RTLR(17,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		if ((EIF_BOOLEAN)((EIF_NATURAL_8) eif_item_type((Current), (arg2)) == ((EIF_NATURAL_8) 0U))) {
			tr1 = F1_5(Current);
			tr1 = (EIF_REFERENCE) eif_builtin_TYPE_generic_parameter_type (tr1, arg2);
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3569[Dtype(tr1)-691])(tr1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
		}
	} else {
		switch ((EIF_NATURAL_8) eif_item_type((Current), (arg2))) {
			case 1U:
				loc2 = RTCCL(arg1);
				loc2 = RTRV(eif_non_attached_type(753),loc2);
				Result = (EIF_BOOLEAN) EIF_TEST(loc2);
				break;
			case 2U:
				loc3 = RTCCL(arg1);
				loc3 = RTRV(eif_non_attached_type(747),loc3);
				Result = (EIF_BOOLEAN) EIF_TEST(loc3);
				break;
			case 14U:
				loc4 = RTCCL(arg1);
				loc4 = RTRV(eif_non_attached_type(744),loc4);
				Result = (EIF_BOOLEAN) EIF_TEST(loc4);
				break;
			case 3U:
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_non_attached_type(756),loc5);
				Result = (EIF_BOOLEAN) EIF_TEST(loc5);
				break;
			case 4U:
				loc6 = RTCCL(arg1);
				loc6 = RTRV(eif_non_attached_type(741),loc6);
				Result = (EIF_BOOLEAN) EIF_TEST(loc6);
				break;
			case 5U:
				loc7 = RTCCL(arg1);
				loc7 = RTRV(eif_non_attached_type(777),loc7);
				Result = (EIF_BOOLEAN) EIF_TEST(loc7);
				break;
			case 10U:
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_non_attached_type(759),loc8);
				Result = (EIF_BOOLEAN) EIF_TEST(loc8);
				break;
			case 11U:
				loc9 = RTCCL(arg1);
				loc9 = RTRV(eif_non_attached_type(765),loc9);
				Result = (EIF_BOOLEAN) EIF_TEST(loc9);
				break;
			case 12U:
				loc10 = RTCCL(arg1);
				loc10 = RTRV(eif_non_attached_type(762),loc10);
				Result = (EIF_BOOLEAN) EIF_TEST(loc10);
				break;
			case 13U:
				loc11 = RTCCL(arg1);
				loc11 = RTRV(eif_non_attached_type(774),loc11);
				Result = (EIF_BOOLEAN) EIF_TEST(loc11);
				break;
			case 6U:
				loc12 = RTCCL(arg1);
				loc12 = RTRV(eif_non_attached_type(738),loc12);
				Result = (EIF_BOOLEAN) EIF_TEST(loc12);
				break;
			case 7U:
				loc13 = RTCCL(arg1);
				loc13 = RTRV(eif_non_attached_type(771),loc13);
				Result = (EIF_BOOLEAN) EIF_TEST(loc13);
				break;
			case 8U:
				loc14 = RTCCL(arg1);
				loc14 = RTRV(eif_non_attached_type(768),loc14);
				Result = (EIF_BOOLEAN) EIF_TEST(loc14);
				break;
			case 9U:
				loc15 = RTCCL(arg1);
				loc15 = RTRV(eif_non_attached_type(750),loc15);
				Result = (EIF_BOOLEAN) EIF_TEST(loc15);
				break;
			case 0U:
				tr1 = RTLNS(425, 425, _OBJSIZ_0_0_0_0_0_0_0_0_);
				loc1 = (EIF_REFERENCE) tr1;
				tr1 = F1_5(RTCV(arg1));
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3565[Dtype(tr1)-691])(tr1);
				tr1 = F1_5(Current);
				tr1 = (EIF_REFERENCE) eif_builtin_TYPE_generic_parameter_type (tr1, arg2);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3565[Dtype(tr1)-691])(tr1);
				Result = F426_2648(RTCV(loc1), ti4_1, ti4_2);
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
	return Result;
}

/* {TUPLE}.count */
EIF_INTEGER_32 F738_4946 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
	return Result;
}

/* {TUPLE}.upper */
EIF_INTEGER_32 F738_4948 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
}

/* {TUPLE}.index_set */
EIF_REFERENCE F738_4950 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(516, 516, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = F738_4948(Current);
	F517_3004(RTCV(tr1), ((EIF_INTEGER_32) 1L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {TUPLE}.put */
void F738_4951 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	switch ((EIF_NATURAL_8) eif_item_type((Current), (arg2))) {
		case 1U:
			eif_put_boolean_item_with_object((Current), (arg2), (arg1));
			break;
		case 2U:
			eif_put_character_8_item_with_object((Current), (arg2), (arg1));
			break;
		case 14U:
			eif_put_character_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 3U:
			eif_put_real_64_item_with_object((Current), (arg2), (arg1));
			break;
		case 4U:
			eif_put_real_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 5U:
			eif_put_pointer_item_with_object((Current), (arg2), (arg1));
			break;
		case 10U:
			eif_put_natural_8_item_with_object((Current), (arg2), (arg1));
			break;
		case 11U:
			eif_put_natural_16_item_with_object((Current), (arg2), (arg1));
			break;
		case 12U:
			eif_put_natural_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 13U:
			eif_put_natural_64_item_with_object((Current), (arg2), (arg1));
			break;
		case 6U:
			eif_put_integer_8_item_with_object((Current), (arg2), (arg1));
			break;
		case 7U:
			eif_put_integer_16_item_with_object((Current), (arg2), (arg1));
			break;
		case 8U:
			eif_put_integer_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 9U:
			eif_put_integer_64_item_with_object((Current), (arg2), (arg1));
			break;
		case 0U:
			eif_put_reference_item_with_object((Current), (arg2), (arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
}

/* {TUPLE}.correct_mismatch */
void F738_5022 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	tr1 = RTOUCR(2,F625_4458,(Current));
	tr2 = RTOUCR(3,F738_5042,(Current));
	tr1 = F628_4528(RTCV(tr1), tr2);
	loc4 = RTCCL(tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {658,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTRV(eif_non_attached_type(typres0),loc4);
	}
	if (EIF_TEST(loc4)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2300[Dtype(loc4)-658])(loc4);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2387[Dtype(loc4)-516])(RTCV(loc4), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			tr1 = RTCCL(loc3);
			if (F738_4945(Current, tr1, loc1)) {
				tr1 = RTCCL(loc3);
				F738_4951(Current, tr1, loc1);
			} else {
				F625_4457(Current);
			}
			loc1++;
		}
	} else {
		F625_4457(Current);
	}
	RTLE;
}

/* {TUPLE}.area_name */

EIF_REFERENCE F738_5042 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (3,RTMS_EX_H("area",4,1634887009));
}

/* {TUPLE}.internal_primes */
static EIF_REFERENCE F738_5044_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(1)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(423, 423, _OBJSIZ_0_1_0_1_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F738_5044 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(1,F738_5044_body,(Current));
}

/* {TUPLE}.eif_item_type */
EIF_NATURAL_8 F738_5045 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = (EIF_NATURAL_8) eif_item_type((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_boolean_item */
EIF_BOOLEAN F738_5046 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((arg1), (arg2)));
	return Result;
}

/* {TUPLE}.eif_character_8_item */
EIF_CHARACTER_8 F738_5047 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	Result = (EIF_CHARACTER_8) eif_character_8_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_character_32_item */
EIF_CHARACTER_32 F738_5048 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	
	
	Result = (EIF_CHARACTER_32) eif_character_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_real_64_item */
EIF_REAL_64 F738_5049 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	Result = (EIF_REAL_64) eif_real_64_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_real_32_item */
EIF_REAL_32 F738_5050 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	
	Result = (EIF_REAL_32) eif_real_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_pointer_item */
EIF_POINTER F738_5051 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_pointer_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_8_item */
EIF_NATURAL_8 F738_5052 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = (EIF_NATURAL_8) eif_natural_8_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_16_item */
EIF_NATURAL_16 F738_5053 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	
	Result = (EIF_NATURAL_16) eif_natural_16_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_32_item */
EIF_NATURAL_32 F738_5054 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) eif_natural_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_64_item */
EIF_NATURAL_64 F738_5055 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	
	
	Result = (EIF_NATURAL_64) eif_natural_64_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_8_item */
EIF_INTEGER_8 F738_5056 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	
	
	Result = (EIF_INTEGER_8) eif_integer_8_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_16_item */
EIF_INTEGER_16 F738_5057 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	
	Result = (EIF_INTEGER_16) eif_integer_16_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_32_item */
EIF_INTEGER_32 F738_5058 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_integer_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_64_item */
EIF_INTEGER_64 F738_5059 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	
	
	Result = (EIF_INTEGER_64) eif_integer_64_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_reference_item */
EIF_REFERENCE F738_5060 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_reference_item((arg1), (arg2));
	RTLE;
	return Result;
}

/* {TUPLE}.eif_put_boolean_item_with_object */
void F738_5061 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_boolean_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_character_8_item_with_object */
void F738_5062 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_character_8_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_character_32_item_with_object */
void F738_5063 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_character_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_real_64_item_with_object */
void F738_5064 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_real_64_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_real_32_item_with_object */
void F738_5065 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_real_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_pointer_item_with_object */
void F738_5066 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_pointer_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_8_item_with_object */
void F738_5067 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_8_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_16_item_with_object */
void F738_5068 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_16_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_32_item_with_object */
void F738_5069 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_64_item_with_object */
void F738_5070 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_64_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_8_item_with_object */
void F738_5071 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_8_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_16_item_with_object */
void F738_5072 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_16_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_32_item_with_object */
void F738_5073 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_64_item_with_object */
void F738_5074 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_64_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_reference_item_with_object */
void F738_5075 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_reference_item_with_object((arg1), (arg2), (arg3));
}

void EIF_Minit175 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
