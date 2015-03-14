/*
 * Code for class AUDIO_LISTENER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "au906.h"
#include <al.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F12_8017
static EIF_INTEGER_32 inline_F12_8017 (void)
{
	return (EIF_INTEGER_32) (AL_ORIENTATION)
	;
}
#define INLINE_F12_8017
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_LISTENER}.make */
void F139_8388 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_REAL_32 tr4_5;
	EIF_REAL_32 tr4_6;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	F138_8380(Current, tr4_1, tr4_2, tr4_3);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	F138_8381(Current, tr4_1, tr4_2, tr4_3);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) -1.0);
	tr4_4 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_5 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	tr4_6 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	F139_8389(Current, tr4_1, tr4_2, tr4_3, tr4_4, tr4_5, tr4_6);
	RTLE;
}

/* {AUDIO_LISTENER}.set_orientation */
void F139_8389 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4, EIF_REAL_32 arg5, EIF_REAL_32 arg6)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = inline_F12_8017();
	F139_8391(Current, ti4_1, arg1, arg2, arg3, arg4, arg5, arg6);
	RTLE;
}

/* {AUDIO_LISTENER}.set_params_6_float */
void F139_8391 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4, EIF_REAL_32 arg5, EIF_REAL_32 arg6, EIF_REAL_32 arg7)
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
	F613_3530(RTCV(tr1), tr4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 6L));
	loc1 = (EIF_REFERENCE) tr1;
	F613_3555(RTCV(loc1), arg2, ((EIF_INTEGER_32) 1L));
	F613_3555(RTCV(loc1), arg3, ((EIF_INTEGER_32) 2L));
	F613_3555(RTCV(loc1), arg4, ((EIF_INTEGER_32) 3L));
	F613_3555(RTCV(loc1), arg5, ((EIF_INTEGER_32) 4L));
	F613_3555(RTCV(loc1), arg6, ((EIF_INTEGER_32) 5L));
	F613_3555(RTCV(loc1), arg7, ((EIF_INTEGER_32) 6L));
	loc2 = F613_3579(RTCV(loc1));
	F134_8319(Current);
	F139_8393(Current, arg1, loc2);
	F134_8319(Current);
	RTLE;
}

/* {AUDIO_LISTENER}.set_params_float_pointer_c */
void F139_8393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	alListenerfv((ALenum) arg1, (ALfloat *) arg2);
}

void EIF_Minit906 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
