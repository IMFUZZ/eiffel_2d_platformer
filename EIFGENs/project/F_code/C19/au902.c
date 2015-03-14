/*
 * Code for class AUDIO_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "au902.h"
#include "eif_memory.h"
#include <alc.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_CONTROLLER}.make */
void F135_8322 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64000L);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {AUDIO_CONTROLLER}.enable_sound */
void F135_8323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_)) {
		tp1 = ((EIF_POINTER) 0);
		tp1 = (EIF_POINTER) alcOpenDevice((ALCchar	 *) tp1);
		*(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_1_) = (EIF_POINTER) tp1;
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_1_);
		tb1 = !tp1;
		if ((EIF_BOOLEAN) !tb1) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_1_);
			tp2 = ((EIF_POINTER) 0);
			tp1 = (EIF_POINTER) alcCreateContext((ALCdevice *) tp1, (ALCint *) tp2);
			*(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_2_) = (EIF_POINTER) tp1;
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_2_);
			tb1 = !tp1;
			if ((EIF_BOOLEAN) !tb1) {
				F134_8319(Current);
				tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_2_);
				alcMakeContextCurrent((ALCcontext *) tp1);
				F134_8319(Current);
				if ((EIF_BOOLEAN) !F134_8320(Current)) {
					tr1 = RTLNSMART(eif_non_attached_type(138));
					F139_8388(RTCV(tr1));
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
					{
						static EIF_TYPE_INDEX typarr0[] = {577,679,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr1 = RTLNS(typres0, 577, _OBJSIZ_2_3_0_1_0_0_0_0_);
					}
					F578_3312(RTCV(tr1));
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
					*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_2_);
					alcDestroyContext((ALCcontext *) tp1);
					tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_1_);
					loc1 = (EIF_INTEGER_32) alcCloseDevice((ALCdevice *) tp1);
				}
			} else {
				tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_1_);
				loc1 = (EIF_INTEGER_32) alcCloseDevice((ALCdevice *) tp1);
			}
		}
	}
	RTLE;
}

/* {AUDIO_CONTROLLER}.disable_sound */
void F135_8324 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_)) {
		F135_8332(Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		
		{
			EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,1,737,679,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr5 = RTLNRF(typres0, (EIF_POINTER) __A902_90_2, (EIF_POINTER) _A902_90_2, (EIF_POINTER)(0),tr2, 1, 1);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1771[Dtype(tr1)-376])(RTCV(tr1), tr5);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F134_8319(Current);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_2_);
		alcSuspendContext((ALCcontext *) tp1);
		F134_8319(Current);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_2_);
		alcDestroyContext((ALCcontext *) tp1);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_5_0_2_0_1_);
		loc1 = (EIF_INTEGER_32) alcCloseDevice((ALCdevice *) tp1);
	}
	RTLE;
}

/* {AUDIO_CONTROLLER}.update */
void F135_8329 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,1,737,679,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A902_89_2, (EIF_POINTER) _A902_89_2, (EIF_POINTER)(0),tr2, 1, 1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1771[Dtype(tr1)-376])(RTCV(tr1), tr5);
	RTLE;
}

/* {AUDIO_CONTROLLER}.stop_thread */
void F135_8332 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F68_8278(Current);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {AUDIO_CONTROLLER}.sources_count */
EIF_INTEGER_32 F135_8333 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1748[Dtype(tr1)-516])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {AUDIO_CONTROLLER}.add_source */
void F135_8334 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F681_8876(RTCV(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = RTLNS(679, 679, _OBJSIZ_3_1_0_5_0_1_0_0_);
	F680_8838(RTCV(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_1_));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1701[Dtype(tr1)-421])(RTCV(tr1), tr2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		F680_8854(RTCV(F135_8335(Current)));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F681_8878(RTCV(tr1));
	}
	RTLE;
}

/* {AUDIO_CONTROLLER}.last_source */
EIF_REFERENCE F135_8335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	ti4_1 = F135_8333(Current);
	Result = F135_8336(Current, ti4_1);
	RTLE;
	return Result;
}

/* {AUDIO_CONTROLLER}.source_at */
EIF_REFERENCE F135_8336 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1732[Dtype(tr1)-517])(RTCV(tr1), (EIF_REFERENCE) &arg1);
	RTLE;
	return Result;
}

/* {AUDIO_CONTROLLER}.wipe_sources */
void F135_8339 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {811,0,0xFFF9,1,737,679,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A902_87_2, (EIF_POINTER) _A902_87_2, (EIF_POINTER)(0),tr2, 1, 1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1771[Dtype(tr1)-376])(RTCV(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1705[Dtype(tr1)-421])(RTCV(tr1));
	RTLE;
}

/* {AUDIO_CONTROLLER}.quit_library */
void F135_8341 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_)) {
		F135_8339(Current);
		tr1 = RTLNS(682, 682, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc1 = (EIF_REFERENCE) tr1;
		plsc();
		F135_8324(Current);
	}
	RTLE;
}

/* {AUDIO_CONTROLLER}.i_listener */
EIF_REFERENCE F135_8345 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {AUDIO_CONTROLLER}.sources */
EIF_REFERENCE F135_8346 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {AUDIO_CONTROLLER}.g_mutex */
EIF_REFERENCE F135_8349 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {AUDIO_CONTROLLER}.inline-agent#1 of wipe_sources */
void F135_9145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F680_8843(RTCV(arg1));
}

/* {AUDIO_CONTROLLER}.inline-agent#1 of update */
void F135_9147 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F680_8851(RTCV(arg1));
}

/* {AUDIO_CONTROLLER}.inline-agent#1 of disable_sound */
void F135_9148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F680_8843(RTCV(arg1));
}

void EIF_Minit902 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
