/*
 * Code for class AUDIO_3D_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "au905.h"
#include <al.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F12_8015
static EIF_INTEGER_32 inline_F12_8015 (void)
{
	return (EIF_INTEGER_32) (AL_POSITION)
	;
}
#define INLINE_F12_8015
#endif
#ifndef INLINE_F12_8016
static EIF_INTEGER_32 inline_F12_8016 (void)
{
	return (EIF_INTEGER_32) (AL_VELOCITY)
	;
}
#define INLINE_F12_8016
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_3D_OBJECT}.set_position */
void F138_8380 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = inline_F12_8015();
	F138_8385(Current, ti4_1, arg1, arg2, arg3);
	RTLE;
}

/* {AUDIO_3D_OBJECT}.set_velocity */
void F138_8381 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = inline_F12_8016();
	F138_8385(Current, ti4_1, arg1, arg2, arg3);
	RTLE;
}

/* {AUDIO_3D_OBJECT}.set_params_3_float */
void F138_8385 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {612,743,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 612, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	F613_3530(RTCV(tr1), tr4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 3L));
	loc1 = (EIF_REFERENCE) tr1;
	F613_3555(RTCV(loc1), arg2, ((EIF_INTEGER_32) 1L));
	F613_3555(RTCV(loc1), arg3, ((EIF_INTEGER_32) 2L));
	F613_3555(RTCV(loc1), arg4, ((EIF_INTEGER_32) 3L));
	loc2 = F613_3579(RTCV(loc1));
	F134_8319(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) R6240[Dtype(Current)-138])(Current, arg1, loc2);
	F134_8319(Current);
	RTLE;
}

void EIF_Minit905 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
