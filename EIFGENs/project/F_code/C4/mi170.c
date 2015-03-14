/*
 * Code for class MISMATCH_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi170.h"
#include "../C8/ha373.h"
#include "../C4/mi170.h"
#include <eif_retrieve.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_INFORMATION}.default_create */
void F635_4642 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F628_4524(Current, ((EIF_INTEGER_32) 5L));
	RTOUCP(11,F635_4652,(Current));
	RTLE;
}

/* {MISMATCH_INFORMATION}.class_name */
EIF_REFERENCE F635_4643 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = RTOUCR(12,F635_4646,(Current));
	tr1 = F628_4528(Current, tr1);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_non_attached_type(818),loc1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {MISMATCH_INFORMATION}.stored_version */
EIF_REFERENCE F635_4644 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {MISMATCH_INFORMATION}.current_version */
EIF_REFERENCE F635_4645 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {MISMATCH_INFORMATION}.type_name_key */

EIF_REFERENCE F635_4646 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (12,RTMS_EX_H("_type_name",10,803527013));
}

/* {MISMATCH_INFORMATION}.out */
EIF_REFERENCE F635_4649 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNS(818, 818, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(F635_4643(Current))+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_);
	F817_6236(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 40L) * ti4_2)));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("Attributes of original class ",29,488257824);
	F819_6341(RTCV(Result), tr1);
	tr1 = F635_4643(Current);
	F819_6341(RTCV(Result), tr1);
	tr1 = RTMS_EX_H(": ",2,14880);
	F819_6341(RTCV(Result), tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_);
	F819_6345(RTCV(Result), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	tr1 = RTMS_EX_H(" item",5,1769481581);
	F819_6341(RTCV(Result), tr1);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_) - ((EIF_INTEGER_32) 1L)) != ((EIF_INTEGER_32) 1L))) {
		F819_6355(RTCV(Result), (EIF_CHARACTER_8) 's');
	}
	F819_6355(RTCV(Result), (EIF_CHARACTER_8) '\012');
	F628_4561(Current);
	for (;;) {
		if (F628_4556(Current)) break;
		loc2 = F628_4535(Current);
		if (!RTEQ(loc2, RTOUCR(12,F635_4646,(Current)))) {
			tr1 = RTMS_EX_H("  ",2,8224);
			F819_6341(RTCV(Result), tr1);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				tr1 = RTMS_EX_H("Void",4,1450142052);
				F819_6341(RTCV(Result), tr1);
			} else {
				F819_6341(RTCV(Result), loc2);
			}
			tr1 = RTMS_EX_H(": ",2,14880);
			F819_6341(RTCV(Result), tr1);
			loc1 = F628_4534(Current);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				tr1 = RTMS_EX_H("Void",4,1450142052);
				F819_6341(RTCV(Result), tr1);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
				F819_6341(RTCV(Result), tr1);
			}
			F819_6355(RTCV(Result), (EIF_CHARACTER_8) '\012');
		}
		F628_4562(Current);
	}
	RTLE;
	return Result;
}

/* {MISMATCH_INFORMATION}.internal_put */
void F635_4650 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(818, 818, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F817_6239(RTCV(tr1), arg2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTCCL(arg1);
	F628_4568(Current, tr1, loc1);
	RTLE;
}

/* {MISMATCH_INFORMATION}.set_string_versions */
void F635_4651 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != loc1)) {
		tr1 = RTLNS(822, 822, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F817_6239(RTCV(tr1), arg1);
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = F823_6615(RTCV(loc2));
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
		} else {
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc2;
		}
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN)(arg2 != loc1)) {
		tr1 = RTLNS(822, 822, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F817_6239(RTCV(tr1), arg2);
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = F823_6615(RTCV(loc2));
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
		} else {
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc2;
		}
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {MISMATCH_INFORMATION}.set_callback_pointers */
static void F635_4652_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
	RTOUDV(11)

	
	RTEV;
	RTOTP;
	F635_4653(Current, Current, (EIF_POINTER) F628_4577, (EIF_POINTER) F635_4650, (EIF_POINTER) F635_4651);
	RTOTE;
	RTEE;
#undef Result
}

void F635_4652 (EIF_REFERENCE Current)
{
	GTCX
	RTOUCP(11,F635_4652_body,(Current));
}

/* {MISMATCH_INFORMATION}.set_mismatch_information_access */
void F635_4653 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	{
		EIF_OBJECT larg1 = RTHP(arg1);
		EIF_POINTER larg2 = arg2;
		EIF_POINTER larg3 = arg3;
		EIF_POINTER larg4 = arg4;set_mismatch_information_access((EIF_OBJECT) larg1, (EIF_PROCEDURE) larg2, (EIF_PROCEDURE) larg3, (EIF_PROCEDURE) larg4);
		
		RTHF(1);
	}
	RTLE;
}

void EIF_Minit170 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
