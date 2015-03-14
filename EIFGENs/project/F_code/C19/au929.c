/*
 * Code for class AUDIO_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "au929.h"
#include <string.h>
#include <al.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F12_8024
static EIF_INTEGER_32 inline_F12_8024 (void)
{
	return (EIF_INTEGER_32) (AL_SOURCE_STATE)
	;
}
#define INLINE_F12_8024
#endif
#ifndef INLINE_F12_8026
static EIF_INTEGER_32 inline_F12_8026 (void)
{
	return (EIF_INTEGER_32) (AL_PLAYING)
	;
}
#define INLINE_F12_8026
#endif
#ifndef INLINE_F12_8018
static EIF_INTEGER_32 inline_F12_8018 (void)
{
	return (EIF_INTEGER_32) (AL_DIRECTION)
	;
}
#define INLINE_F12_8018
#endif
#ifndef INLINE_F12_8019
static EIF_INTEGER_32 inline_F12_8019 (void)
{
	return (EIF_INTEGER_32) (AL_BUFFERS_PROCESSED)
	;
}
#define INLINE_F12_8019
#endif
#ifndef INLINE_F12_8020
static EIF_INTEGER_32 inline_F12_8020 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO8)
	;
}
#define INLINE_F12_8020
#endif
#ifndef INLINE_F12_8022
static EIF_INTEGER_32 inline_F12_8022 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO16)
	;
}
#define INLINE_F12_8022
#endif
#ifndef INLINE_F12_8021
static EIF_INTEGER_32 inline_F12_8021 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO8)
	;
}
#define INLINE_F12_8021
#endif
#ifndef INLINE_F12_8023
static EIF_INTEGER_32 inline_F12_8023 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO16)
	;
}
#define INLINE_F12_8023
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_SOURCE}.make */
void F680_8838 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {604,764,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 604, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	F605_3530(RTCV(tr1), tu4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = F605_3579(RTCV(loc1));
	F134_8319(Current);
	alGenSources((ALsizei) ((EIF_INTEGER_32) 1L), (ALuint *) loc2);
	F134_8319(Current);
	tu4_1 = F605_3536(RTCV(loc1), ((EIF_INTEGER_32) 1L));
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_) = (EIF_NATURAL_32) tu4_1;
	F680_8840(Current, arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {604,764,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	F605_3530(RTCV(tr1), tu4_1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) - ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F605_3579(RTCV(tr1));
	alGenBuffers((ALsizei) ((EIF_INTEGER_32) 4L), (ALuint *) loc3);
	F134_8319(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {582,0xFFF9,2,737,135,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F583_3370(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	F138_8380(Current, tr4_1, tr4_2, tr4_3);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	F680_8852(Current, tr4_1, tr4_2, tr4_3);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	F680_8852(Current, tr4_1, tr4_2, tr4_3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_1_0_5_0_0_);
	tp1 = malloc((size_t)*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_2_));
	*(EIF_POINTER *)(Current+ _PTROFF_3_1_0_5_0_0_) = (EIF_POINTER) tp1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {AUDIO_SOURCE}.set_buffer_size */
void F680_8840 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_2_) = (EIF_INTEGER_32) arg1;
}

/* {AUDIO_SOURCE}.play */
void F680_8841 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F680_8851(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	alSourcePlay((ALuint) tu4_1);
	RTLE;
}

/* {AUDIO_SOURCE}.stop */
void F680_8843 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	alSourceStop((ALuint) tu4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F578_3347(RTCV(tr1));
	F680_8851(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	alSourceRewind((ALuint) tu4_1);
	RTLE;
}

/* {AUDIO_SOURCE}.is_playing */
EIF_BOOLEAN F680_8844 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = inline_F12_8024();
	ti4_1 = F680_8858(Current, ti4_1);
	ti4_2 = inline_F12_8026();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {AUDIO_SOURCE}.queue_sound_loop */
void F680_8848 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,135,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	loc1 = (EIF_REFERENCE) tr1;
	
	eif_put_reference_item(RTCV(loc1),1,arg1);
	
	eif_put_integer_32_item(RTCV(loc1),2,arg2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F583_3372(RTCV(tr1), loc1);
	RTLE;
}

/* {AUDIO_SOURCE}.queue_sound */
void F680_8849 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F680_8848(Current, arg1, ((EIF_INTEGER_32) 0L));
}

/* {AUDIO_SOURCE}.queue_sound_infinite_loop */
void F680_8850 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F680_8848(Current, arg1, ((EIF_INTEGER_32) -1L));
}

/* {AUDIO_SOURCE}.update_playing */
void F680_8851 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F681_8876(RTCV(tr1));
	}
	for (;;) {
		if ((EIF_BOOLEAN) (F680_8855(Current) < ((EIF_INTEGER_32) 1L))) break;
		F680_8857(Current);
	}
	for (;;) {
		tb1 = '\01';
		if (!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_3_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_4_) + ((EIF_INTEGER_32) 1L)) % ((EIF_INTEGER_32) 4L))))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = F295_1979(RTCV(tr1));
			tb1 = tb2;
		}
		if (tb1) break;
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			tb2 = '\01';
			if (!(EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb3 = F295_1979(RTCV(tr1));
				tb2 = tb3;
			}
			if (tb2) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F583_3371(RTCV(tr1));
			tr1 = eif_boxed_item(tr1,1);
			F137_8364(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_1_0_5_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_2_));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F583_3371(RTCV(tr1));
			tr1 = eif_boxed_item(tr1,1);
			loc1 = *(EIF_INTEGER_32 *)(RTCV(tr1) + O6216[Dtype(tr1)-135]);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F583_3371(RTCV(tr1));
			tr1 = eif_boxed_item(tr1,1);
			loc2 = F137_8367(RTCV(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F583_3371(RTCV(tr1));
			tr1 = eif_boxed_item(tr1,1);
			loc3 = F137_8369(RTCV(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F583_3371(RTCV(tr1));
			tr1 = eif_boxed_item(tr1,1);
			loc4 = F137_8368(RTCV(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F583_3371(RTCV(tr1));
			tr1 = eif_boxed_item(tr1,1);
			loc5 = F137_8365(RTCV(tr1));
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F583_3371(RTCV(tr1));
				tr1 = eif_boxed_item(tr1,1);
				F137_8372(RTCV(tr1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F583_3371(RTCV(tr1));
				ti4_1 = eif_integer_32_item(RTCV(tr1),2);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					F578_3345(RTCV(tr1));
				} else {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr1 = F583_3371(RTCV(tr1));
					ti4_1 = eif_integer_32_item(RTCV(tr1),2);
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tr1 = F583_3371(RTCV(tr1));
						
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tr2 = F583_3371(RTCV(tr2));
						ti4_1 = eif_integer_32_item(RTCV(tr2),2);
						eif_put_integer_32_item(RTCV(tr1),2,(EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
					}
				}
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb3 = F295_1979(RTCV(tr1));
		if ((EIF_BOOLEAN) !tb3) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_1_0_5_0_0_);
			F680_8856(Current, tp1, (EIF_INTEGER_32) (loc1 * loc5), loc2, loc3, loc4);
		}
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F681_8878(RTCV(tr1));
	}
	RTLE;
}

/* {AUDIO_SOURCE}.set_direction */
void F680_8852 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = inline_F12_8018();
	F138_8385(Current, ti4_1, arg1, arg2, arg3);
	RTLE;
}

/* {AUDIO_SOURCE}.set_thread_safe */
void F680_8854 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(680));
	F681_8873(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {AUDIO_SOURCE}.processed_buffers_number */
EIF_INTEGER_32 F680_8855 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = inline_F12_8019();
	Result = F680_8858(Current, ti4_1);
	RTLE;
	return Result;
}

/* {AUDIO_SOURCE}.queue_buffer */
void F680_8856 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 8L))) {
			loc3 = inline_F12_8020();
		} else {
			loc3 = inline_F12_8022();
		}
	} else {
		if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 8L))) {
			loc3 = inline_F12_8021();
		} else {
			loc3 = inline_F12_8023();
		}
	}
	F134_8319(Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu4_1 = F605_3536(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_4_));
	alBufferData((ALuint) tu4_1, (ALenum) loc3, (ALvoid *) arg1, (ALsizei) arg2, (ALsizei) arg5);
	F134_8319(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {604,764,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 604, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	tu4_1 = F605_3536(RTCV(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_4_));
	F605_3530(RTCV(tr1), tu4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_4_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_4_) + ((EIF_INTEGER_32) 1L)) % ((EIF_INTEGER_32) 4L));
	loc2 = F605_3579(RTCV(loc1));
	F134_8319(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	alSourceQueueBuffers((ALuint) tu4_1, (ALsizei) ((EIF_INTEGER_32) 1L), (ALuint *) loc2);
	F134_8319(Current);
	RTLE;
}

/* {AUDIO_SOURCE}.unqueue_buffer */
void F680_8857 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {604,764,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 604, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	tu4_1 = F605_3536(RTCV(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_3_));
	F605_3530(RTCV(tr1), tu4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_3_) + ((EIF_INTEGER_32) 1L)) % ((EIF_INTEGER_32) 4L));
	loc2 = F605_3579(RTCV(loc1));
	F134_8319(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	alSourceUnqueueBuffers((ALuint) tu4_1, (ALsizei) ((EIF_INTEGER_32) 1L), (ALuint *) loc2);
	F134_8319(Current);
	RTLE;
}

/* {AUDIO_SOURCE}.param_int_c */
EIF_INTEGER_32 F680_8858 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	alGetSourcei((ALuint) tu4_1, (ALenum) arg1, (ALint *) (EIF_INTEGER_32 *) &(loc1));
	RTLE;
	return (EIF_INTEGER_32) loc1;
}

/* {AUDIO_SOURCE}.set_params_float_pointer_c */
void F680_8861 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	alSourcefv((ALuint) tu4_1, (ALenum) arg1, (ALfloat *) arg2);
}

/* {AUDIO_SOURCE}.dispose */
void F680_8863 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	F680_8843(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_1_0_5_0_0_);
	free(tp1);
	{
		static EIF_TYPE_INDEX typarr0[] = {604,764,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 604, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_3_1_0_0_);
	F605_3530(RTCV(tr1), tu4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = F605_3579(RTCV(loc1));
	F134_8319(Current);
	alDeleteSources((ALsizei) ((EIF_INTEGER_32) 1L), (ALuint *) loc2);
	F134_8319(Current);
	RTLE;
}

/* {AUDIO_SOURCE}.sound_al_buffer */
EIF_REFERENCE F680_8864 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {AUDIO_SOURCE}.sound_queued */
EIF_REFERENCE F680_8869 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {AUDIO_SOURCE}.g_mutex */
EIF_REFERENCE F680_8872 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit929 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
