/*
 * Code for class DATE_TIME_CODE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da938.h"
#include <math.h>
#include "eif_built_in.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE_STRING}.make */
void F880_9016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc5);
	RTLR(3,arg1);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,loc1);
	RTLR(7,loc8);
	RTLR(8,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {628,656,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F629_4524(RTCV(tr1), ((EIF_INTEGER_32) 20L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTLNS(59, 59, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = F60_8207(RTCV(loc5));
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F60_8208(RTCV(loc5));
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc3 >= ti4_1)) break;
		loc4 = F879_9013(Current, arg1, loc3);
		loc6 = F879_9014(Current, arg1, loc3, loc4);
		loc4 = F54_710(Current, loc4);
		loc7 = eif_boxed_item(loc6,1);
		F819_6381(RTCV(loc7));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(656, 656, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F657_8682(RTCV(tr1), loc7);
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current);
			F629_4568(RTCV(tr1), loc1, loc2);
			loc2++;
		}
		loc8 = eif_boxed_item(loc6,2);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(656, 656, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F657_8682(RTCV(tr2), loc8);
			F629_4568(RTCV(tr1), tr2, loc2);
			loc2++;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
	}
	tr1 = RTLNS(4, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F5_7042(RTCV(tr1));
	ti4_2 = F5_7046(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 100L)) * ((EIF_INTEGER_32) -100L));
	RTLE;
}

/* {DATE_TIME_CODE_STRING}.value */
EIF_REFERENCE F880_9017 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_CODE_STRING}.create_string */
EIF_REFERENCE F880_9027 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLR(5,loc8);
	RTLR(6,Current);
	RTLR(7,loc7);
	
	RTGC;
	tr1 = RTLNS(818, 818, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F817_6236(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc2 = *(EIF_REFERENCE *)(RTCV(arg1));
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc8 = F629_4528(RTCV(tr1), loc4);
	for (;;) {
		if ((EIF_BOOLEAN)(loc8 == NULL)) break;
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_4_);
		switch (loc5) {
			case 1L:
				ti4_1 = F627_8662(RTCV(loc1));
				tr1 = c_outi(ti4_1);
				F819_6341(RTCV(Result), tr1);
				break;
			case 2L:
				loc3 = F627_8662(RTCV(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F819_6341(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 3L:
				loc3 = F878_8991(RTCV(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F599_3535(RTCV(tr1), loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 4L:
				ti4_1 = F627_8664(RTCV(loc1));
				loc7 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					F819_6341(RTCV(Result), loc7);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						tr1 = RTMS_EX_H("000",3,3158064);
						F819_6341(RTCV(Result), tr1);
						F819_6341(RTCV(Result), loc7);
					} else {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
							tr1 = RTMS_EX_H("00",2,12336);
							F819_6341(RTCV(Result), tr1);
							F819_6341(RTCV(Result), loc7);
						} else {
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
								tr1 = RTMS_EX_H("0",1,48);
								F819_6341(RTCV(Result), tr1);
								F819_6341(RTCV(Result), loc7);
							}
						}
					}
				}
				break;
			case 5L:
				ti4_1 = F627_8664(RTCV(loc1));
				loc7 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
					F819_6324(RTCV(loc7), ((EIF_INTEGER_32) 2L));
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						F819_6355(RTCV(Result), (EIF_CHARACTER_8) '0');
					}
				}
				F819_6341(RTCV(Result), loc7);
				break;
			case 6L:
				ti4_1 = F627_8663(RTCV(loc1));
				tr1 = c_outi(ti4_1);
				F819_6341(RTCV(Result), tr1);
				break;
			case 7L:
				loc3 = F627_8663(RTCV(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F819_6341(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 8L:
				loc3 = F627_8663(RTCV(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr1 = F599_3535(RTCV(tr1), loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 9L:
				ti4_1 = F59_8181(RTCV(loc2));
				tr1 = c_outi(ti4_1);
				F819_6341(RTCV(Result), tr1);
				break;
			case 10L:
				loc3 = F59_8181(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F819_6341(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 11L:
			case 12L:
				loc3 = F59_8181(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
					}
				} else {
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 12L))) {
						loc3 -= ((EIF_INTEGER_32) 12L);
					}
				}
				tb1 = '\0';
				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 12U);
				if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
					tb1 = (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L));
				}
				if (tb1) {
					tr1 = RTMS_EX_H("0",1,48);
					F819_6341(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 13L:
				ti4_1 = F59_8182(RTCV(loc2));
				tr1 = c_outi(ti4_1);
				F819_6341(RTCV(Result), tr1);
				break;
			case 14L:
				loc3 = F59_8182(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F819_6341(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 15L:
				ti4_1 = F59_8183(RTCV(loc2));
				tr1 = c_outi(ti4_1);
				F819_6341(RTCV(Result), tr1);
				break;
			case 16L:
				loc3 = F59_8183(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F819_6341(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F819_6341(RTCV(Result), tr1);
				break;
			case 17L:
				loc6 = *(EIF_REAL_64 *)(RTCV(loc2)+ _R64OFF_0_0_0_1_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_0_);
				tr8_1 = (EIF_REAL_64) ((ti4_1));
				loc6 = (EIF_REAL_64) (EIF_REAL_64) (loc6 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_1)));
				tr1 = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
				*(EIF_REAL_64 *)tr1 = loc6;
				
				loc3 = F757_5473(RTCV(tr1));
				loc7 = c_outi(loc3);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_0_);
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					tr1 = RTLNS(818, 818, _OBJSIZ_1_1_0_3_0_0_0_0_);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
					F817_6237(RTCV(tr1), (EIF_CHARACTER_8) '0', (EIF_INTEGER_32) (ti4_1 - ti4_2));
					F819_6341(RTCV(Result), tr1);
				}
				F819_6341(RTCV(Result), loc7);
				break;
			case 24L:
				loc3 = F59_8181(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					tr1 = RTMS_EX_H("AM",2,16717);
					F819_6341(RTCV(Result), tr1);
				} else {
					tr1 = RTMS_EX_H("PM",2,20557);
					F819_6341(RTCV(Result), tr1);
				}
				break;
			default:
				tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
				F819_6341(RTCV(Result), tr1);
				break;
		}
		loc4++;
		tr1 = *(EIF_REFERENCE *)(Current);
		loc8 = F629_4528(RTCV(tr1), loc4);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_date_string */
EIF_REFERENCE F880_9028 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTLNS(883, 883, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F884_9079(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	RTLE;
	return (EIF_REFERENCE) F880_9027(Current, loc1);
}

/* {DATE_TIME_CODE_STRING}.create_time_string */
EIF_REFERENCE F880_9029 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(883, 883, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = F59_8181(RTCV(arg1));
	ti4_2 = F59_8182(RTCV(arg1));
	tr8_1 = F59_8186(RTCV(arg1));
	F884_9077(RTCV(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ti4_1, ti4_2, tr8_1);
	loc1 = (EIF_REFERENCE) tr1;
	RTLE;
	return (EIF_REFERENCE) F880_9027(Current, loc1);
}

/* {DATE_TIME_CODE_STRING}.days */
EIF_REFERENCE F880_9036 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_CODE_STRING}.months */
EIF_REFERENCE F880_9037 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit938 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
