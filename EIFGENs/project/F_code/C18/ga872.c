/*
 * Code for class GAME_TEXT_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga872.h"
#include <SDL_ttf.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F13_8042
static EIF_POINTER inline_F13_8042 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER) (TTF_RenderText_Blended((TTF_Font *)arg1,(char *)arg2,*((SDL_Color *)arg3)))
	;
}
#define INLINE_F13_8042
#endif
#ifndef INLINE_F13_8043
static EIF_POINTER inline_F13_8043 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER) (TTF_RenderUTF8_Blended((TTF_Font *)arg1,(char *)arg2,*((SDL_Color *)arg3)))
	;
}
#define INLINE_F13_8043
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_TEXT_EXTERNAL}.ttf_init */
EIF_INTEGER_32 F13_8030 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) TTF_Init();
	
	return Result;
}

/* {GAME_TEXT_EXTERNAL}.ttf_wasinit */
EIF_INTEGER_32 F13_8031 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) TTF_WasInit();
	
	return Result;
}

/* {GAME_TEXT_EXTERNAL}.ttf_geterror */
EIF_POINTER F13_8032 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) TTF_GetError();
	
	return Result;
}

/* {GAME_TEXT_EXTERNAL}.ttf_quit */
void F13_8033 (EIF_REFERENCE Current)
{
	GTCX
	
	TTF_Quit();
	
}

/* {GAME_TEXT_EXTERNAL}.ttf_openfontindex */
EIF_POINTER F13_8035 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) TTF_OpenFontIndex((const char *) arg1, (int) arg2, (long) arg3);
	
	return Result;
}

/* {GAME_TEXT_EXTERNAL}.ttf_closefont */
void F13_8037 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	TTF_CloseFont((TTF_Font *) arg1);
	
}

/* {GAME_TEXT_EXTERNAL}.ttf_rendertext_blended */
EIF_POINTER F13_8042 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F13_8042 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	return Result;
}

/* {GAME_TEXT_EXTERNAL}.ttf_renderutf8_blended */
EIF_POINTER F13_8043 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F13_8043 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	return Result;
}

void EIF_Minit872 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
