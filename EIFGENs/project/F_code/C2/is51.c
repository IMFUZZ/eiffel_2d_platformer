/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is51.h"
#include "eif_built_in.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F76_1169 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(4,F76_1188,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F76_1170 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	tb1 = F86_1384(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F76_1169(Current);
			F86_1388(RTCV(arg1), tr1);
		}
		F76_1181(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F146_1861(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1263[Dtype(arg1)-85])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F76_1176 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(5,F76_1183,(Current));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = F631_4530(RTCV(tr1), ti4_1);
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F76_1178 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNTY(110);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			tr1 = RTLNTY(104);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			tr1 = RTLNTY(119);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNTY(120);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNTY(89);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNTY(123);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNTY(122);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNTY(112);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNTY(113);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNTY(121);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNTY(118);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNTY(93);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNTY(99);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			tr1 = RTLNTY(96);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			tr1 = RTLNTY(104);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			tr1 = RTLNTY(95);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNTY(115);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNTY(103);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNTY(111);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNTY(97);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNTY(108);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			tr1 = RTLNTY(92);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNTY(107);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNTY(86);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNTY(99);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			tr1 = RTLNTY(116);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNTY(108);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			tr1 = RTLNTY(91);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNTY(122);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNTY(100);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNTY(106);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F76_1179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNS(110, 110, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(6,F76_1189,(Current))));
			F105_1444(RTCV(loc3), ((EIF_INTEGER_32) 2L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			tr1 = RTLNS(119, 119, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNS(120, 120, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNS(89, 89, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNS(123, 123, _OBJSIZ_5_2_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNS(122, 122, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNS(112, 112, _OBJSIZ_7_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNS(113, 113, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNS(121, 121, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNS(118, 118, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNS(93, 93, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNS(99, 99, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F100_1436(RTCV(loc1), ((EIF_INTEGER_32) 13L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			tr1 = RTLNS(96, 96, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(6,F76_1189,(Current))));
			F105_1444(RTCV(loc3), ((EIF_INTEGER_32) 15L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			tr1 = RTLNS(95, 95, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNS(115, 115, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNS(103, 103, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNS(111, 111, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNS(97, 97, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNS(108, 108, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F109_1454(RTCV(loc2), ((EIF_INTEGER_32) 21L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			tr1 = RTLNS(92, 92, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNS(107, 107, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNS(86, 86, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNS(99, 99, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F100_1436(RTCV(loc1), ((EIF_INTEGER_32) 25L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			tr1 = RTLNS(116, 116, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNS(108, 108, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F109_1454(RTCV(loc2), ((EIF_INTEGER_32) 27L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			tr1 = RTLNS(91, 91, _OBJSIZ_6_1_0_3_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNS(122, 122, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNS(100, 100, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNS(106, 106, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F76_1180 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(7,F76_1187,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F76_1181 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(4,F76_1188,(Current));
	F175_1889(RTCV(tr1), arg1);
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F76_1182 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	
	RTGC;
	tr1 = RTOUCR(7,F76_1187,(Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,11,737,770,770,770,818,818,818,818,818,818,770,755,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	F175_1889(RTCV(tr1), tr2);
	if (arg2) {
		tr1 = F76_1190(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F76_1181(Current, loc1);
		}
	} else {
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = F76_1169(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F86_1395(RTCV(loc2), arg10);
		F86_1389(RTCV(loc2), arg6);
		F86_1393(RTCV(loc2), arg7);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F76_1183_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(5)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {630,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 630, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F631_4524(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F76_1183 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(5,F76_1183_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F76_1184_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(8)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {630,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 630, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F631_4524(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(110);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F631_4569(RTCV(Result), loc1, loc1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F76_1184 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(8,F76_1184_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F76_1185_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(9)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {630,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 630, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F631_4524(RTCV(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(112);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F631_4569(RTCV(Result), loc1, loc1);
	tr1 = RTLNTY(100);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F631_4569(RTCV(Result), loc1, loc1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F76_1185 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(9,F76_1185_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F76_1186 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F76_1178(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_BOOLEAN) F76_1176(Current, loc1);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F76_1187_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(7)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {174,0xFFF9,11,737,770,770,770,818,818,818,818,818,818,770,755,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 174, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F175_1889(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F76_1187 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(7,F76_1187_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F76_1188_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(4)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {174,85,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 174, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F175_1889(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F76_1188 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(4,F76_1188_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F76_1189_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(6)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(104, 104, _OBJSIZ_5_1_0_2_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(818, 818, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F817_6236(RTCV(tr1), ((EIF_INTEGER_32) 4096L));
	F86_1395(RTCV(loc1), tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {174,104,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 174, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F175_1889(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F76_1189 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(6,F76_1189_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F76_1190 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	
	RTGC;
	tb1 = '\0';
	tr1 = F76_1180(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(RTCV(loc2),1);
		tr1 = F76_1179(Current, ti4_1);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc4 = loc3;
		loc4 = RTRV(eif_non_attached_type(112),loc4);
		if (EIF_TEST(loc4)) {
			loc1 = F76_1169(Current);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F86_1388(RTCV(loc3), loc1);
			}
			tr1 = eif_boxed_item(loc2,7);
			F113_1464(RTCV(loc4), tr1);
			tr1 = eif_boxed_item(loc2,8);
			F113_1465(RTCV(loc4), tr1);
		} else {
			loc5 = loc3;
			loc5 = RTRV(eif_non_attached_type(100),loc5);
			if (EIF_TEST(loc5)) {
				loc1 = F76_1169(Current);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					F86_1388(RTCV(loc3), loc1);
				}
			} else {
				loc6 = loc3;
				loc6 = RTRV(eif_non_attached_type(123),loc6);
				if (EIF_TEST(loc6)) {
					tb1 = eif_boolean_item(RTCV(loc2),11);
					F124_1483(RTCV(loc6), tb1);
				} else {
					loc7 = loc3;
					loc7 = RTRV(eif_non_attached_type(93),loc7);
					if (EIF_TEST(loc7)) {
						ti4_1 = eif_integer_32_item(RTCV(loc2),2);
						F94_1427(RTCV(loc7), ti4_1);
					} else {
						loc8 = loc3;
						loc8 = RTRV(eif_non_attached_type(108),loc8);
						if (EIF_TEST(loc8)) {
							ti4_1 = eif_integer_32_item(RTCV(loc2),3);
							F109_1453(RTCV(loc8), ti4_1);
						} else {
							loc9 = loc3;
							loc9 = RTRV(eif_non_attached_type(92),loc9);
							if (EIF_TEST(loc9)) {
								ti4_1 = eif_integer_32_item(RTCV(loc2),3);
								F93_1423(RTCV(loc9), ti4_1);
							} else {
								loc10 = loc3;
								loc10 = RTRV(eif_non_attached_type(91),loc10);
								if (EIF_TEST(loc10)) {
									ti4_1 = eif_integer_32_item(RTCV(loc2),2);
									F92_1405(RTCV(loc10), ti4_1);
									tr1 = eif_boxed_item(loc2,4);
									F92_1410(RTCV(loc10), tr1);
								}
							}
						}
					}
				}
				if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
					loc1 = F76_1169(Current);
				}
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					loc1 = (EIF_REFERENCE) loc3;
				}
				F86_1388(RTCV(loc3), loc1);
			}
		}
		tr1 = eif_boxed_item(loc2,9);
		F86_1395(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,4);
		F86_1381(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,5);
		F86_1389(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,6);
		F86_1393(RTCV(loc3), tr1);
		RTLE;
		return (EIF_REFERENCE) loc3;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F76_1191 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	tb1 = F86_1384(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F86_1374(RTCV(arg1));
			tr2 = F76_1169(Current);
			F86_1388(RTCV(tr1), tr2);
		}
		F76_1181(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F146_1861(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1263[Dtype(arg1)-85])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F76_1192 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	
	RTGC;
	loc1 = RTOUCR(5,F76_1183,(Current));
	loc1 = RTOUCR(8,F76_1184,(Current));
	loc1 = RTOUCR(9,F76_1185,(Current));
	loc2 = RTOUCR(7,F76_1187,(Current));
	loc3 = RTOUCR(4,F76_1188,(Current));
	loc4 = RTOUCR(6,F76_1189,(Current));
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F76_1193 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(6,F76_1189,(Current))));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F86_1381(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F76_1194 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, arg1, arg2, arg3);
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F76_1195 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	return Result;
}

void EIF_Minit51 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
