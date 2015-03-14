/*
 * Code for class GAME_TEXT_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga874.h"
#include <SDL_ttf.h>
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_TEXT_CONTROLLER}.make */
void F15_8057 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {GAME_TEXT_CONTROLLER}.enable_text */
void F15_8058 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) TTF_Init();
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tp1 = (EIF_POINTER) TTF_GetError();
		F146_1844(RTCV(tr1), tp1);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		tr2 = RTMS_EX_H("Error while loading the text library: ",38,708983072);
		tr3 = F146_1855(RTCV(loc2));
		tr2 = F819_6343(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\012",1,10);
		tr2 = F819_6343(RTCV(tr2), tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2875[Dtype(tr1)-686])(RTCV(tr1), tr2);
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		F687_4233(RTCV(tr1));
	}
	RTLE;
}

/* {GAME_TEXT_CONTROLLER}.is_text_enable */
EIF_BOOLEAN F15_8059 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) TTF_WasInit();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	return Result;
}

/* {GAME_TEXT_CONTROLLER}.disable_text */
void F15_8060 (EIF_REFERENCE Current)
{
	GTCX
	
	
	TTF_Quit();
}

/* {GAME_TEXT_CONTROLLER}.quit_library */
void F15_8061 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(682, 682, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	plsc();
	if (F15_8059(Current)) {
		F15_8060(Current);
	}
	RTLE;
}

void EIF_Minit874 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
