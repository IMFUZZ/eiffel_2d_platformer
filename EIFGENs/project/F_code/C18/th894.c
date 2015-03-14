/*
 * Code for class THREAD_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "th894.h"
#include <eif_threads.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F66_8263
static EIF_POINTER inline_F66_8263 (void)
{
	return eif_thr_thread_id();
	;
}
#define INLINE_F66_8263
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {THREAD_ENVIRONMENT}.current_thread_id */
EIF_POINTER F66_8263 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F66_8263 ();
	return Result;
}

void EIF_Minit894 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
