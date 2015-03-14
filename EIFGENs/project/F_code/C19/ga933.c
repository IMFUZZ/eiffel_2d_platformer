/*
 * Code for class GAME_SDL_SURFACE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga933.h"
#include "SDL.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SDL_SURFACE_IMP}.make */
void F825_8935 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) arg1;
	F825_8939(Current);
	RTLE;
}

/* {GAME_SDL_SURFACE_IMP}.set_not_disposable */
void F825_8938 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {GAME_SDL_SURFACE_IMP}.set_disposable */
void F825_8939 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {GAME_SDL_SURFACE_IMP}.dispose */
void F825_8941 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		SDL_FreeSurface((SDL_Surface*) tp1);
	}
	RTLE;
}

void EIF_Minit933 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
