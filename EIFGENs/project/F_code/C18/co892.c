/*
 * Code for class CODE_VALIDITY_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co892.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CODE_VALIDITY_CHECKER}.is_day */
EIF_BOOLEAN F64_8235 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("dd",2,25700);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day0 */
EIF_BOOLEAN F64_8236 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]dd",5,812125796);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day_text */
EIF_BOOLEAN F64_8237 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("ddd",3,6579300);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year4 */
EIF_BOOLEAN F64_8238 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("yyyy",4,2038004089);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year2 */
EIF_BOOLEAN F64_8239 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("yy",2,31097);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month */
EIF_BOOLEAN F64_8240 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("mm",2,28013);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month0 */
EIF_BOOLEAN F64_8241 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mm",5,812128109);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month_text */
EIF_BOOLEAN F64_8242 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("mmm",3,7171437);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour */
EIF_BOOLEAN F64_8243 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("hh",2,26728);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour0 */
EIF_BOOLEAN F64_8244 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]hh",5,812126824);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour12 */
EIF_BOOLEAN F64_8245 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("hh12",4,1751658802);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute */
EIF_BOOLEAN F64_8247 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("mi",2,28009);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute0 */
EIF_BOOLEAN F64_8248 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mi",5,812128105);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second */
EIF_BOOLEAN F64_8249 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("ss",2,29555);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second0 */
EIF_BOOLEAN F64_8250 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]ss",5,812129651);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_fractional_second */
EIF_BOOLEAN F64_8251 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
		loc1 = F819_6387(RTCV(arg1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 2L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		loc2 = F819_6387(RTCV(arg1), ((EIF_INTEGER_32) 3L), ti4_1);
		Result = '\0';
		tr1 = RTMS_EX_H("ff",2,26214);
		tb1 = F817_6258(RTCV(loc1), tr1);
		if (tb1) {
			tb1 = F816_6172(RTCV(loc2));
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_colon */
EIF_BOOLEAN F64_8252 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(":",1,58);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_slash */
EIF_BOOLEAN F64_8253 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("/",1,47);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minus */
EIF_BOOLEAN F64_8254 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("-",1,45);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_comma */
EIF_BOOLEAN F64_8255 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(",",1,44);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_space */
EIF_BOOLEAN F64_8256 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(" ",1,32);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_dot */
EIF_BOOLEAN F64_8257 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(".",1,46);
	Result = F817_6258(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_meridiem */
EIF_BOOLEAN F64_8259 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = F819_6376(RTCV(arg1));
	Result = '\01';
	tr1 = RTMS_EX_H("AM",2,16717);
	tb1 = F817_6258(RTCV(loc1), tr1);
	if (!tb1) {
		tr1 = RTMS_EX_H("PM",2,20557);
		tb1 = F817_6258(RTCV(loc1), tr1);
		Result = tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit892 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
