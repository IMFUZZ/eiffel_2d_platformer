/*
 * Code for class GAME_SURFACE_BMP_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga915.h"
#include <SDL.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SURFACE_BMP_FILE}.open_from_file */
void F433_8588 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F146_1842(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F146_1861(RTCV(loc1));
	tp1 = (EIF_POINTER) SDL_LoadBMP((const char *) tp1);
	F430_8526(Current, tp1);
	RTLE;
}

void EIF_Minit915 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
