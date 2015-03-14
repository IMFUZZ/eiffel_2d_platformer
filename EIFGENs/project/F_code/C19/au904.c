/*
 * Code for class AUDIO_SOUND_WAV_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "au904.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_SOUND_WAV_FILE}.make */
void F137_8360 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(683));
	F684_8889(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	F684_8891(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F137_8361(Current);
	RTLE;
}

/* {AUDIO_SOUND_WAV_FILE}.process_header */
void F137_8361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F684_8898(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(RTCV(tr1) + O6685[Dtype(tr1)-683]);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1380533830L);
	if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		tr2 = RTMS_EX_H("Not a WAV file!",15,1507175201);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2875[Dtype(tr1)-686])(RTCV(tr1), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8898(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8898(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(tr1) + O6685[Dtype(tr1)-683]);
		tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1463899717L);
		if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
			tr2 = RTMS_EX_H("Not a WAV file!",15,1507175201);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2875[Dtype(tr1)-686])(RTCV(tr1), tr2);
		} else {
			F137_8362(Current);
		}
	}
	RTLE;
}

/* {AUDIO_SOUND_WAV_FILE}.process_chunks */
void F137_8362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		if ((EIF_BOOLEAN) (loc5 || loc6)) break;
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8898(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = *(EIF_NATURAL_32 *)(RTCV(tr1) + O6685[Dtype(tr1)-683]);
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8901(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = *(EIF_NATURAL_32 *)(RTCV(tr1) + O6685[Dtype(tr1)-683]);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = F684_8890(RTCV(tr1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1684108385L);
		if ((EIF_BOOLEAN)(loc1 == tu4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = F684_8890(RTCV(tr1));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_7_) = (EIF_INTEGER_32) ti4_1;
			tr1 = *(EIF_REFERENCE *)(Current);
			F684_8901(RTCV(tr1));
			tr1 = *(EIF_REFERENCE *)(Current);
			tu4_1 = *(EIF_NATURAL_32 *)(RTCV(tr1) + O6685[Dtype(tr1)-683]);
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_NATURAL_32) tu4_1;
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc4;
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1718449184L);
			if ((EIF_BOOLEAN)(loc1 == tu4_1)) {
				F137_8363(Current);
				loc6 = *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (EIF_INTEGER_32) loc2;
			F684_8891(RTCV(tr1), (EIF_INTEGER_32) (loc3 + ti4_1));
		}
	}
	RTLE;
}

/* {AUDIO_SOUND_WAV_FILE}.process_fmt */
void F137_8363 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F684_8900(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current);
	tu2_1 = *(EIF_NATURAL_16 *)(RTCV(tr1) + O6684[Dtype(tr1)-683]);
	tu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1L);
	if ((EIF_BOOLEAN)(tu2_1 != tu2_2)) {
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		tr2 = RTMS_EX_H("WAV file not supported!",23,1224727073);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2875[Dtype(tr1)-686])(RTCV(tr1), tr2);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8900(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		tu2_1 = *(EIF_NATURAL_16 *)(RTCV(tr1) + O6684[Dtype(tr1)-683]);
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) ti4_1;
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8901(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(tr1) + O6685[Dtype(tr1)-683]);
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) = (EIF_INTEGER_32) ti4_1;
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8901(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8900(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		tu2_1 = *(EIF_NATURAL_16 *)(RTCV(tr1) + O6684[Dtype(tr1)-683]);
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_NATURAL_32) tu4_1;
		tr1 = *(EIF_REFERENCE *)(Current);
		F684_8900(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		tu2_1 = *(EIF_NATURAL_16 *)(RTCV(tr1) + O6684[Dtype(tr1)-683]);
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_6_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {AUDIO_SOUND_WAV_FILE}.fill_buffer */
void F137_8364 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_1_);
	tu4_2 = (EIF_NATURAL_32) arg2;
	tu4_3 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_NATURAL_32, EIF_NATURAL_32)) R6674[Dtype(tr1)-683])(RTCV(tr1), arg1, tu4_1, (EIF_NATURAL_32) (tu4_2 / tu4_3));
	tr1 = *(EIF_REFERENCE *)(Current);
	tu4_1 = *(EIF_NATURAL_32 *)(RTCV(tr1) + O6675[Dtype(tr1)-683]);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {AUDIO_SOUND_WAV_FILE}.byte_per_buffer_sample */
EIF_INTEGER_32 F137_8365 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_INTEGER_32) tu4_1;
	RTLE;
	return Result;
}

/* {AUDIO_SOUND_WAV_FILE}.channel_count */
EIF_INTEGER_32 F137_8367 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
}

/* {AUDIO_SOUND_WAV_FILE}.frequency */
EIF_INTEGER_32 F137_8368 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_);
}

/* {AUDIO_SOUND_WAV_FILE}.bits_per_sample */
EIF_INTEGER_32 F137_8369 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_6_);
}

/* {AUDIO_SOUND_WAV_FILE}.restart */
void F137_8372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F684_8891(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_7_));
	RTLE;
}

/* {AUDIO_SOUND_WAV_FILE}.file */
EIF_REFERENCE F137_8373 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit904 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
