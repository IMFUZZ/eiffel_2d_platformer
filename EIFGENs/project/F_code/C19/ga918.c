/*
 * Code for class GAME_SURFACE_IMG_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga918.h"
#include "SDL_image.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SURFACE_IMG_FILE}.make_with_alpha */
void F436_8596 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F65_8260(Current, arg1);
	F430_8546(Current);
	RTLE;
}

/* {GAME_SURFACE_IMG_FILE}.open_from_file */
void F436_8597 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,tr3);
	
	RTGC;
	tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F146_1842(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F146_1861(RTCV(loc1));
	loc3 = (EIF_POINTER) IMG_Load((char *) tp1);
	tb1 = !loc3;
	if (tb1) {
		tr1 = RTLNS(145, 145, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tp1 = (EIF_POINTER) IMG_GetError();
		F146_1844(RTCV(tr1), tp1);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		tr2 = RTMS_EX_H("Error when loading file: ",25,717466912);
		tr2 = F819_6343(RTCV(tr2), arg1);
		tr3 = RTMS_EX_H("\012",1,10);
		tr2 = F819_6343(RTCV(tr2), tr3);
		tr3 = F146_1855(RTCV(loc2));
		tr2 = F819_6343(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\012",1,10);
		tr2 = F819_6343(RTCV(tr2), tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2875[Dtype(tr1)-686])(RTCV(tr1), tr2);
		tr1 = RTOUCR(29,F35_116,(RTCV(RTOUCR(0,F1_24,(Current)))));
		F687_4233(RTCV(tr1));
	} else {
		F430_8526(Current, loc3);
	}
	RTLE;
}

void EIF_Minit918 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
