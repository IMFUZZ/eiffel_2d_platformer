/*
 * Code for class AUDIO_OPENAL_ERROR_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "au901.h"
#include <al.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F12_8014
static EIF_INTEGER_32 inline_F12_8014 (void)
{
	return (EIF_INTEGER_32) (AL_NO_ERROR)
	;
}
#define INLINE_F12_8014
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_OPENAL_ERROR_MANAGER}.read_error */
void F134_8319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) alGetError();
	*(EIF_INTEGER_32 *)(Current + O6186[Dtype(Current)-133]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {AUDIO_OPENAL_ERROR_MANAGER}.is_error */
EIF_BOOLEAN F134_8320 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O6186[Dtype(Current)-133]);
	ti4_2 = inline_F12_8014();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ti4_2);
	RTLE;
	return Result;
}

void EIF_Minit901 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
