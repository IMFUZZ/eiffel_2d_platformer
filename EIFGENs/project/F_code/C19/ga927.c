/*
 * Code for class GAME_EVENT_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga927.h"
#include "SDL.h"
#include <SDL.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_7503
static EIF_POINTER inline_F9_7503 (void)
{
	return (EIF_POINTER) (malloc (sizeof(SDL_Event)))
	;
}
#define INLINE_F9_7503
#endif
#ifndef INLINE_F9_7917
static EIF_NATURAL_8 inline_F9_7917 (void)
{
	return (EIF_NATURAL_8) SDL_APPMOUSEFOCUS
	;
}
#define INLINE_F9_7917
#endif
#ifndef INLINE_F9_7918
static EIF_NATURAL_8 inline_F9_7918 (void)
{
	return (EIF_NATURAL_8) SDL_APPINPUTFOCUS
	;
}
#define INLINE_F9_7918
#endif
#ifndef INLINE_F9_7919
static EIF_NATURAL_8 inline_F9_7919 (void)
{
	return (EIF_NATURAL_8) SDL_APPACTIVE
	;
}
#define INLINE_F9_7919
#endif
#ifndef INLINE_F9_7534
static EIF_POINTER inline_F9_7534 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_KeyboardEvent *)arg1)->keysym))
	;
}
#define INLINE_F9_7534
#endif
#ifndef INLINE_F9_7949
static EIF_NATURAL_8 inline_F9_7949 (void)
{
	return (EIF_NATURAL_8) (SDL_BUTTON_LMASK)
	;
}
#define INLINE_F9_7949
#endif
#ifndef INLINE_F9_7950
static EIF_NATURAL_8 inline_F9_7950 (void)
{
	return (EIF_NATURAL_8) (SDL_BUTTON_RMASK)
	;
}
#define INLINE_F9_7950
#endif
#ifndef INLINE_F9_7951
static EIF_NATURAL_8 inline_F9_7951 (void)
{
	return (EIF_NATURAL_8) (SDL_BUTTON_MMASK)
	;
}
#define INLINE_F9_7951
#endif
#ifndef INLINE_F9_7952
static EIF_NATURAL_8 inline_F9_7952 (void)
{
	return (EIF_NATURAL_8) (SDL_BUTTON_X1MASK)
	;
}
#define INLINE_F9_7952
#endif
#ifndef INLINE_F9_7953
static EIF_NATURAL_8 inline_F9_7953 (void)
{
	return (EIF_NATURAL_8) (SDL_BUTTON_X2MASK)
	;
}
#define INLINE_F9_7953
#endif
#ifndef INLINE_F9_7921
static EIF_NATURAL_8 inline_F9_7921 (void)
{
	return (EIF_NATURAL_8) SDL_MOUSEBUTTONDOWN
	;
}
#define INLINE_F9_7921
#endif
#ifndef INLINE_F9_7922
static EIF_NATURAL_8 inline_F9_7922 (void)
{
	return (EIF_NATURAL_8) SDL_MOUSEBUTTONUP
	;
}
#define INLINE_F9_7922
#endif
#ifndef INLINE_F9_7914
static EIF_NATURAL_8 inline_F9_7914 (void)
{
	return (EIF_NATURAL_8) SDL_PRESSED
	;
}
#define INLINE_F9_7914
#endif
#ifndef INLINE_F9_7915
static EIF_NATURAL_8 inline_F9_7915 (void)
{
	return (EIF_NATURAL_8) SDL_RELEASED
	;
}
#define INLINE_F9_7915
#endif
#ifndef INLINE_F9_7923
static EIF_NATURAL_8 inline_F9_7923 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_LEFT
	;
}
#define INLINE_F9_7923
#endif
#ifndef INLINE_F9_7925
static EIF_NATURAL_8 inline_F9_7925 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_RIGHT
	;
}
#define INLINE_F9_7925
#endif
#ifndef INLINE_F9_7924
static EIF_NATURAL_8 inline_F9_7924 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_MIDDLE
	;
}
#define INLINE_F9_7924
#endif
#ifndef INLINE_F9_7926
static EIF_NATURAL_8 inline_F9_7926 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_WHEELUP
	;
}
#define INLINE_F9_7926
#endif
#ifndef INLINE_F9_7927
static EIF_NATURAL_8 inline_F9_7927 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_WHEELDOWN
	;
}
#define INLINE_F9_7927
#endif
#ifndef INLINE_F9_7932
static EIF_NATURAL_8 inline_F9_7932 (void)
{
	return (EIF_NATURAL_8) SDL_HAT_UP
	;
}
#define INLINE_F9_7932
#endif
#ifndef INLINE_F9_7934
static EIF_NATURAL_8 inline_F9_7934 (void)
{
	return (EIF_NATURAL_8) SDL_HAT_DOWN
	;
}
#define INLINE_F9_7934
#endif
#ifndef INLINE_F9_7935
static EIF_NATURAL_8 inline_F9_7935 (void)
{
	return (EIF_NATURAL_8) SDL_HAT_LEFT
	;
}
#define INLINE_F9_7935
#endif
#ifndef INLINE_F9_7933
static EIF_NATURAL_8 inline_F9_7933 (void)
{
	return (EIF_NATURAL_8) SDL_HAT_RIGHT
	;
}
#define INLINE_F9_7933
#endif
#ifndef INLINE_F9_7916
static EIF_NATURAL_8 inline_F9_7916 (void)
{
	return (EIF_NATURAL_8) SDL_ACTIVEEVENT
	;
}
#define INLINE_F9_7916
#endif
#ifndef INLINE_F9_7507
static EIF_POINTER inline_F9_7507 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->active))
	;
}
#define INLINE_F9_7507
#endif
#ifndef INLINE_F9_7912
static EIF_NATURAL_8 inline_F9_7912 (void)
{
	return (EIF_NATURAL_8) SDL_KEYDOWN
	;
}
#define INLINE_F9_7912
#endif
#ifndef INLINE_F9_7913
static EIF_NATURAL_8 inline_F9_7913 (void)
{
	return (EIF_NATURAL_8) SDL_KEYUP
	;
}
#define INLINE_F9_7913
#endif
#ifndef INLINE_F9_7508
static EIF_POINTER inline_F9_7508 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->key))
	;
}
#define INLINE_F9_7508
#endif
#ifndef INLINE_F9_7920
static EIF_NATURAL_8 inline_F9_7920 (void)
{
	return (EIF_NATURAL_8) SDL_MOUSEMOTION
	;
}
#define INLINE_F9_7920
#endif
#ifndef INLINE_F9_7509
static EIF_POINTER inline_F9_7509 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->motion))
	;
}
#define INLINE_F9_7509
#endif
#ifndef INLINE_F9_7510
static EIF_POINTER inline_F9_7510 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->button))
	;
}
#define INLINE_F9_7510
#endif
#ifndef INLINE_F9_7928
static EIF_NATURAL_8 inline_F9_7928 (void)
{
	return (EIF_NATURAL_8) SDL_JOYAXISMOTION
	;
}
#define INLINE_F9_7928
#endif
#ifndef INLINE_F9_7511
static EIF_POINTER inline_F9_7511 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jaxis))
	;
}
#define INLINE_F9_7511
#endif
#ifndef INLINE_F9_7929
static EIF_NATURAL_8 inline_F9_7929 (void)
{
	return (EIF_NATURAL_8) SDL_JOYBALLMOTION
	;
}
#define INLINE_F9_7929
#endif
#ifndef INLINE_F9_7512
static EIF_POINTER inline_F9_7512 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jball))
	;
}
#define INLINE_F9_7512
#endif
#ifndef INLINE_F9_7930
static EIF_NATURAL_8 inline_F9_7930 (void)
{
	return (EIF_NATURAL_8) SDL_JOYHATMOTION
	;
}
#define INLINE_F9_7930
#endif
#ifndef INLINE_F9_7513
static EIF_POINTER inline_F9_7513 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jhat))
	;
}
#define INLINE_F9_7513
#endif
#ifndef INLINE_F9_7940
static EIF_NATURAL_8 inline_F9_7940 (void)
{
	return (EIF_NATURAL_8) SDL_JOYBUTTONDOWN
	;
}
#define INLINE_F9_7940
#endif
#ifndef INLINE_F9_7941
static EIF_NATURAL_8 inline_F9_7941 (void)
{
	return (EIF_NATURAL_8) SDL_JOYBUTTONUP
	;
}
#define INLINE_F9_7941
#endif
#ifndef INLINE_F9_7514
static EIF_POINTER inline_F9_7514 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jbutton))
	;
}
#define INLINE_F9_7514
#endif
#ifndef INLINE_F9_7942
static EIF_NATURAL_8 inline_F9_7942 (void)
{
	return (EIF_NATURAL_8) SDL_VIDEORESIZE
	;
}
#define INLINE_F9_7942
#endif
#ifndef INLINE_F9_7515
static EIF_POINTER inline_F9_7515 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->resize))
	;
}
#define INLINE_F9_7515
#endif
#ifndef INLINE_F9_7943
static EIF_NATURAL_8 inline_F9_7943 (void)
{
	return (EIF_NATURAL_8) SDL_VIDEOEXPOSE
	;
}
#define INLINE_F9_7943
#endif
#ifndef INLINE_F9_7944
static EIF_NATURAL_8 inline_F9_7944 (void)
{
	return (EIF_NATURAL_8) SDL_QUIT
	;
}
#define INLINE_F9_7944
#endif
#ifndef INLINE_F9_7504
static void inline_F9_7504 (EIF_POINTER arg1)
{
	free((SDL_Event *)arg1)
	;
}
#define INLINE_F9_7504
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_EVENT_CONTROLLER}.make */
void F678_8746 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) arg1;
	tp1 = inline_F9_7503();
	*(EIF_POINTER *)(Current+ _PTROFF_29_0_0_0_0_0_) = (EIF_POINTER) tp1;
	F678_8816(Current);
	F678_8756(Current);
	F678_8765(Current);
	F678_8771(Current);
	F678_8779(Current);
	F678_8786(Current);
	F678_8790(Current);
	F678_8794(Current);
	F678_8800(Current);
	F678_8804(Current);
	F678_8808(Current);
	F678_8812(Current);
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.poll_event */
void F678_8747 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F678_8817(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_29_0_0_0_0_0_);
	loc1 = (EIF_INTEGER_32) SDL_PollEvent((SDL_Event *) tp1);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		F678_8820(Current, *(EIF_POINTER *)(Current+ _PTROFF_29_0_0_0_0_0_));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_29_0_0_0_0_0_);
		loc1 = (EIF_INTEGER_32) SDL_PollEvent((SDL_Event *) tp1);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_active_actions */
EIF_REFERENCE F678_8748 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_enter */
EIF_REFERENCE F678_8749 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_exit */
EIF_REFERENCE F678_8750 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {GAME_EVENT_CONTROLLER}.on_get_focus */
EIF_REFERENCE F678_8751 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {GAME_EVENT_CONTROLLER}.on_lost_focus */
EIF_REFERENCE F678_8752 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {GAME_EVENT_CONTROLLER}.on_minimise */
EIF_REFERENCE F678_8753 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {GAME_EVENT_CONTROLLER}.on_restore */
EIF_REFERENCE F678_8754 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {GAME_EVENT_CONTROLLER}.is_active_event_actions */
EIF_BOOLEAN F678_8755 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F636_4692(RTCV(tr1));
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb5 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb5) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb4 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb4) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb3 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		ti4_1 = F636_4692(RTCV(tr1));
		Result = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_active_event */
void F678_8756 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,4,737,755,755,755,755,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_active_event */
void F678_8757 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_ActiveEvent *)arg1)->gain);
	loc2 = (EIF_NATURAL_8) (((SDL_ActiveEvent *)arg1)->state);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,737,755,755,755,755,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 5, 1);
		}
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
		((EIF_TYPED_VALUE *)tr2+1)->it_b = (EIF_BOOLEAN)(loc1 == tu1_1);
		tu1_1 = inline_F9_7917();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+2)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7918();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7919();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+4)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tu1_1 = inline_F9_7917();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb2 = (EIF_BOOLEAN)(tu1_1 != tu1_2);
	}
	if (tb2) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu1_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tu1_1 = inline_F9_7917();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb2 = (EIF_BOOLEAN)(tu1_1 != tu1_2);
	}
	if (tb2) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu1_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tu1_1 = inline_F9_7918();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb2 = (EIF_BOOLEAN)(tu1_1 != tu1_2);
	}
	if (tb2) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu1_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tu1_1 = inline_F9_7918();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb2 = (EIF_BOOLEAN)(tu1_1 != tu1_2);
	}
	if (tb2) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu1_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tu1_1 = inline_F9_7919();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb2 = (EIF_BOOLEAN)(tu1_1 != tu1_2);
	}
	if (tb2) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu1_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tu1_1 = inline_F9_7919();
		tu1_1 = eif_bit_and(loc2,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		tb2 = (EIF_BOOLEAN)(tu1_1 != tu1_2);
	}
	if (tb2) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu1_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_keyboard_actions */
EIF_REFERENCE F678_8758 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {GAME_EVENT_CONTROLLER}.on_key_down */
EIF_REFERENCE F678_8759 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {GAME_EVENT_CONTROLLER}.on_key_up */
EIF_REFERENCE F678_8760 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {GAME_EVENT_CONTROLLER}.is_keyboard_event_actions */
EIF_BOOLEAN F678_8761 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	ti4_1 = F636_4692(RTCV(tr1));
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		ti4_1 = F636_4692(RTCV(tr1));
		Result = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.enable_keyboard_unicode */
void F678_8763 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	
	
	loc1 = (EIF_BOOLEAN) EIF_TEST(SDL_EnableUNICODE((int) ((EIF_INTEGER_32) 1L)));
}

/* {GAME_EVENT_CONTROLLER}.disable_keyboard_unicode */
void F678_8764 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	
	
	loc1 = (EIF_BOOLEAN) EIF_TEST(SDL_EnableUNICODE((int) ((EIF_INTEGER_32) 0L)));
}

/* {GAME_EVENT_CONTROLLER}.make_keyboard_event */
void F678_8765 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,1,737,6,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,1,737,6,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,1,737,6,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	F678_8764(Current);
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_keyboard_event */
void F678_8766 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	
	RTGC;
	loc3 = (EIF_NATURAL_8) (((SDL_KeyboardEvent *)arg1)->type);
	loc4 = (EIF_NATURAL_8) (((SDL_KeyboardEvent *)arg1)->state);
	loc2 = inline_F9_7534(arg1);
	loc5 = (EIF_NATURAL_8) (((SDL_keysym *)loc2)->scancode);
	loc6 = (EIF_NATURAL_16) (((SDL_keysym *)loc2)->unicode);
	loc7 = (EIF_INTEGER_32) (((SDL_keysym *)loc2)->sym);
	loc8 = (EIF_INTEGER_32) (((SDL_keysym *)loc2)->mod);
	tr1 = RTLNS(6, 6, _OBJSIZ_0_3_1_2_0_0_0_0_);
	F7_7086(RTCV(tr1), loc3, loc4, loc5, loc6, loc7, loc8);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,6,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
		RTAR(tr2,loc1);
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb2 = F7_7095(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,6,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
		RTAR(tr2,loc1);
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb2 = F7_7096(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,737,6,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
		RTAR(tr2,loc1);
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_mouse_motion */
EIF_REFERENCE F678_8767 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_motion_position */
EIF_REFERENCE F678_8768 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_motion_relative_position */
EIF_REFERENCE F678_8769 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_12_);
}


/* {GAME_EVENT_CONTROLLER}.is_mouse_motion_event_actions */
EIF_BOOLEAN F678_8770 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	ti4_1 = F636_4692(RTCV(tr1));
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
		ti4_1 = F636_4692(RTCV(tr1));
		Result = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_mouse_motion_event */
void F678_8771 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,9,737,767,767,773,773,755,755,755,755,755,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,2,737,767,767,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,2,737,773,773,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_mouse_motion_event */
void F678_8772 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 loc3 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_16 loc4 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc5 = (EIF_INTEGER_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_MouseMotionEvent *)arg1)->state);
	loc2 = (EIF_NATURAL_16) (((SDL_MouseMotionEvent *)arg1)->x);
	loc3 = (EIF_NATURAL_16) (((SDL_MouseMotionEvent *)arg1)->y);
	loc4 = (EIF_INTEGER_16) (((SDL_MouseMotionEvent *)arg1)->xrel);
	loc5 = (EIF_INTEGER_16) (((SDL_MouseMotionEvent *)arg1)->yrel);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,9,737,767,767,773,773,755,755,755,755,755,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 10, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_n2 = loc2;
		((EIF_TYPED_VALUE *)tr2+2)->it_n2 = loc3;
		((EIF_TYPED_VALUE *)tr2+3)->it_i2 = loc4;
		((EIF_TYPED_VALUE *)tr2+4)->it_i2 = loc5;
		tu1_1 = inline_F9_7949();
		tu1_1 = eif_bit_and(loc1,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+5)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7950();
		tu1_1 = eif_bit_and(loc1,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+6)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7951();
		tu1_1 = eif_bit_and(loc1,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+7)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7952();
		tu1_1 = eif_bit_and(loc1,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+8)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7953();
		tu1_1 = eif_bit_and(loc1,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+9)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		F655_4793(RTCV(tr1), tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,767,767,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_n2 = loc2;
		((EIF_TYPED_VALUE *)tr2+2)->it_n2 = loc3;
		F655_4793(RTCV(tr1), tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,773,773,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i2 = loc4;
		((EIF_TYPED_VALUE *)tr2+2)->it_i2 = loc5;
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_mouse_button_actions */
EIF_REFERENCE F678_8773 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_button_down */
EIF_REFERENCE F678_8774 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_14_);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_button_up */
EIF_REFERENCE F678_8775 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_15_);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_wheel_down */
EIF_REFERENCE F678_8776 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_16_);
}


/* {GAME_EVENT_CONTROLLER}.on_mouse_wheel_up */
EIF_REFERENCE F678_8777 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_17_);
}


/* {GAME_EVENT_CONTROLLER}.is_mouse_button_event_actions */
EIF_BOOLEAN F678_8778 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	ti4_1 = F636_4692(RTCV(tr1));
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb3 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
		ti4_1 = F636_4692(RTCV(tr1));
		Result = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_mouse_button_event */
void F678_8779 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,13,737,755,755,755,755,755,755,755,755,755,767,767,761,761,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,5,737,755,755,755,767,767,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,5,737,755,755,755,767,767,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,2,737,767,767,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,2,737,767,767,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_mouse_button_event */
void F678_8780 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc5 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->type);
	loc2 = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->which);
	loc3 = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->button);
	loc4 = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->state);
	loc5 = (EIF_NATURAL_16) (((SDL_MouseButtonEvent *)arg1)->x);
	loc6 = (EIF_NATURAL_16) (((SDL_MouseButtonEvent *)arg1)->y);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,13,737,755,755,755,755,755,755,755,755,755,767,767,761,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 14, 1);
		}
		tu1_1 = inline_F9_7921();
		((EIF_TYPED_VALUE *)tr2+1)->it_b = (EIF_BOOLEAN)(loc1 == tu1_1);
		tu1_1 = inline_F9_7922();
		((EIF_TYPED_VALUE *)tr2+2)->it_b = (EIF_BOOLEAN)(loc1 == tu1_1);
		tu1_1 = inline_F9_7914();
		((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN)(loc4 == tu1_1);
		tu1_1 = inline_F9_7915();
		((EIF_TYPED_VALUE *)tr2+4)->it_b = (EIF_BOOLEAN)(loc4 == tu1_1);
		tu1_1 = inline_F9_7923();
		((EIF_TYPED_VALUE *)tr2+5)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7925();
		((EIF_TYPED_VALUE *)tr2+6)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7924();
		((EIF_TYPED_VALUE *)tr2+7)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7926();
		((EIF_TYPED_VALUE *)tr2+8)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7927();
		((EIF_TYPED_VALUE *)tr2+9)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		((EIF_TYPED_VALUE *)tr2+10)->it_n2 = loc5;
		((EIF_TYPED_VALUE *)tr2+11)->it_n2 = loc6;
		((EIF_TYPED_VALUE *)tr2+12)->it_n1 = loc2;
		((EIF_TYPED_VALUE *)tr2+13)->it_n1 = loc3;
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb3 = (EIF_BOOLEAN)(loc1 == inline_F9_7921());
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN)(loc3 != inline_F9_7926());
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(loc3 != inline_F9_7927());
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,5,737,755,755,755,767,767,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 6, 1);
		}
		tu1_1 = inline_F9_7923();
		((EIF_TYPED_VALUE *)tr2+1)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7925();
		((EIF_TYPED_VALUE *)tr2+2)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7924();
		((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		((EIF_TYPED_VALUE *)tr2+4)->it_n2 = loc5;
		((EIF_TYPED_VALUE *)tr2+5)->it_n2 = loc6;
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb3 = (EIF_BOOLEAN)(loc1 == inline_F9_7922());
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN)(loc3 != inline_F9_7926());
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(loc3 != inline_F9_7927());
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,5,737,755,755,755,767,767,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 6, 1);
		}
		tu1_1 = inline_F9_7923();
		((EIF_TYPED_VALUE *)tr2+1)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7925();
		((EIF_TYPED_VALUE *)tr2+2)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		tu1_1 = inline_F9_7924();
		((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		((EIF_TYPED_VALUE *)tr2+4)->it_n2 = loc5;
		((EIF_TYPED_VALUE *)tr2+5)->it_n2 = loc6;
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb2 = (EIF_BOOLEAN)(loc1 == inline_F9_7921());
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(loc3 == inline_F9_7927());
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,767,767,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_n2 = loc5;
		((EIF_TYPED_VALUE *)tr2+2)->it_n2 = loc6;
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb2 = (EIF_BOOLEAN)(loc1 == inline_F9_7921());
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(loc3 == inline_F9_7926());
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,767,767,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_n2 = loc5;
		((EIF_TYPED_VALUE *)tr2+2)->it_n2 = loc6;
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_joystick_axis_change */
EIF_REFERENCE F678_8784 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_18_);
}


/* {GAME_EVENT_CONTROLLER}.is_joystick_axis_event_actions */
EIF_BOOLEAN F678_8785 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	ti4_1 = F636_4692(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_joystick_axis_event */
void F678_8786 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,3,737,773,761,761,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_joystick_axis_event */
void F678_8787 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_16 loc3 = (EIF_INTEGER_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_JoyAxisEvent *)arg1)->which);
	loc2 = (EIF_NATURAL_8) (((SDL_JoyAxisEvent *)arg1)->axis);
	loc3 = (EIF_INTEGER_16) (((SDL_JoyAxisEvent *)arg1)->value);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,737,773,761,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 4, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i2 = loc3;
		((EIF_TYPED_VALUE *)tr2+2)->it_n1 = loc2;
		((EIF_TYPED_VALUE *)tr2+3)->it_n1 = loc1;
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_joystick_balls_change */
EIF_REFERENCE F678_8788 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_19_);
}


/* {GAME_EVENT_CONTROLLER}.is_joystick_balls_event_actions */
EIF_BOOLEAN F678_8789 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	ti4_1 = F636_4692(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_joystick_balls_event */
void F678_8790 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,4,737,773,773,761,761,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_joystick_balls_event */
void F678_8791 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_16 loc3 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc4 = (EIF_INTEGER_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_JoyBallEvent *)arg1)->which);
	loc2 = (EIF_NATURAL_8) (((SDL_JoyBallEvent *)arg1)->ball);
	loc3 = (EIF_INTEGER_16) (((SDL_JoyBallEvent *)arg1)->xrel);
	loc4 = (EIF_INTEGER_16) (((SDL_JoyBallEvent *)arg1)->yrel);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,737,773,773,761,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 5, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i2 = loc3;
		((EIF_TYPED_VALUE *)tr2+2)->it_i2 = loc4;
		((EIF_TYPED_VALUE *)tr2+3)->it_n1 = loc2;
		((EIF_TYPED_VALUE *)tr2+4)->it_n1 = loc1;
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_joystick_hats_change */
EIF_REFERENCE F678_8792 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_20_);
}


/* {GAME_EVENT_CONTROLLER}.is_joystick_hats_event_actions */
EIF_BOOLEAN F678_8793 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	ti4_1 = F636_4692(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_joystick_hats_event */
void F678_8794 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,6,737,755,755,755,755,761,761,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_20_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_joystick_hats_event */
void F678_8795 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_JoyHatEvent *)arg1)->which);
	loc2 = (EIF_NATURAL_8) (((SDL_JoyHatEvent *)arg1)->hat);
	loc3 = (EIF_NATURAL_8) (((SDL_JoyHatEvent *)arg1)->value);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,6,737,755,755,755,755,761,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 7, 1);
		}
		tu1_1 = inline_F9_7932();
		tu1_1 = eif_bit_and(loc3,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+1)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7934();
		tu1_1 = eif_bit_and(loc3,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+2)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7935();
		tu1_1 = eif_bit_and(loc3,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		tu1_1 = inline_F9_7933();
		tu1_1 = eif_bit_and(loc3,tu1_1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+4)->it_b = (EIF_BOOLEAN)(tu1_1 != tu1_2);
		((EIF_TYPED_VALUE *)tr2+5)->it_n1 = loc2;
		((EIF_TYPED_VALUE *)tr2+6)->it_n1 = loc1;
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_joystick_buttons_change */
EIF_REFERENCE F678_8796 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_21_);
}


/* {GAME_EVENT_CONTROLLER}.on_joystick_button_pressed */
EIF_REFERENCE F678_8797 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_22_);
}


/* {GAME_EVENT_CONTROLLER}.on_joystick_button_released */
EIF_REFERENCE F678_8798 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_23_);
}


/* {GAME_EVENT_CONTROLLER}.is_joystick_buttons_event_actions */
EIF_BOOLEAN F678_8799 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	ti4_1 = F636_4692(RTCV(tr1));
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		ti4_1 = F636_4692(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
		ti4_1 = F636_4692(RTCV(tr1));
		Result = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_joystick_buttons_event */
void F678_8800 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,3,737,755,761,761,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,2,737,761,761,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,2,737,761,761,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_23_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_joystick_buttons_event */
void F678_8801 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_JoyButtonEvent *)arg1)->which);
	loc2 = (EIF_NATURAL_8) (((SDL_JoyButtonEvent *)arg1)->button);
	loc3 = (EIF_NATURAL_8) (((SDL_JoyButtonEvent *)arg1)->state);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,737,755,761,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 4, 1);
		}
		tu1_1 = inline_F9_7914();
		((EIF_TYPED_VALUE *)tr2+1)->it_b = (EIF_BOOLEAN)(loc3 == tu1_1);
		((EIF_TYPED_VALUE *)tr2+2)->it_n1 = loc2;
		((EIF_TYPED_VALUE *)tr2+3)->it_n1 = loc1;
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)(loc3 == inline_F9_7914());
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,761,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_n1 = loc2;
		((EIF_TYPED_VALUE *)tr2+2)->it_n1 = loc1;
		F655_4793(RTCV(tr1), tr2);
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)(loc3 == inline_F9_7915());
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,761,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_n1 = loc2;
		((EIF_TYPED_VALUE *)tr2+2)->it_n1 = loc1;
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_resize_window */
EIF_REFERENCE F678_8802 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_24_);
}


/* {GAME_EVENT_CONTROLLER}.is_resize_event_actions */
EIF_BOOLEAN F678_8803 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	ti4_1 = F636_4692(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_resize_event */
void F678_8804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,2,737,770,770,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_resize_event */
void F678_8805 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (((SDL_ResizeEvent *)arg1)->w);
	loc2 = (EIF_INTEGER_32) (((SDL_ResizeEvent *)arg1)->h);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,737,770,770,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = loc1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = loc2;
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_expose */
EIF_REFERENCE F678_8806 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_25_);
}


/* {GAME_EVENT_CONTROLLER}.is_expose_event_actions */
EIF_BOOLEAN F678_8807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	ti4_1 = F636_4692(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_expose_event */
void F678_8808 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_expose_event */
void F678_8809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_quit_signal */
EIF_REFERENCE F678_8810 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_26_);
}


/* {GAME_EVENT_CONTROLLER}.is_quit_event_actions */
EIF_BOOLEAN F678_8811 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	ti4_1 = F636_4692(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {GAME_EVENT_CONTROLLER}.make_quit_event */
void F678_8812 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_quit_event */
void F678_8813 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	ti4_1 = F636_4692(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 1, 1);
		}
		F655_4793(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.on_iteration */
EIF_REFERENCE F678_8814 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_27_);
}


/* {GAME_EVENT_CONTROLLER}.make_iteration_event */
void F678_8816 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {654,0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F655_4790(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_27_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.decode_iteration_event */
void F678_8817 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,737,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 1, 1);
	}
	F655_4793(RTCV(tr1), tr2);
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.core_ctrl */
EIF_REFERENCE F678_8818 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_28_);
}


/* {GAME_EVENT_CONTROLLER}.decode_event */
void F678_8820 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_NATURAL_8) (((SDL_Event *)arg1)->type);
	tb1 = '\0';
	if (F678_8755(Current)) {
		tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7916());
	}
	if (tb1) {
		tp1 = inline_F9_7507(arg1);
		F678_8757(Current, tp1);
	} else {
		tb1 = '\0';
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == inline_F9_7912())) {
			tb2 = (EIF_BOOLEAN)(loc1 == inline_F9_7913());
		}
		if ((tb2)) {
			tb1 = F678_8761(Current);
		}
		if (tb1) {
			tp1 = inline_F9_7508(arg1);
			F678_8766(Current, tp1);
		} else {
			tb1 = '\0';
			if (F678_8770(Current)) {
				tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7920());
			}
			if (tb1) {
				tp1 = inline_F9_7509(arg1);
				F678_8772(Current, tp1);
			} else {
				tb1 = '\0';
				if (F678_8778(Current)) {
					tb2 = '\01';
					if (!(EIF_BOOLEAN)(loc1 == inline_F9_7921())) {
						tb2 = (EIF_BOOLEAN)(loc1 == inline_F9_7922());
					}
					tb1 = tb2;
				}
				if (tb1) {
					tp1 = inline_F9_7510(arg1);
					F678_8780(Current, tp1);
				} else {
					tb1 = '\0';
					if (F678_8785(Current)) {
						tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7928());
					}
					if (tb1) {
						tp1 = inline_F9_7511(arg1);
						F678_8787(Current, tp1);
					} else {
						tb1 = '\0';
						if (F678_8789(Current)) {
							tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7929());
						}
						if (tb1) {
							tp1 = inline_F9_7512(arg1);
							F678_8791(Current, tp1);
						} else {
							tb1 = '\0';
							if (F678_8793(Current)) {
								tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7930());
							}
							if (tb1) {
								tp1 = inline_F9_7513(arg1);
								F678_8795(Current, tp1);
							} else {
								tb1 = '\0';
								if (F678_8799(Current)) {
									tb2 = '\01';
									if (!(EIF_BOOLEAN)(loc1 == inline_F9_7940())) {
										tb2 = (EIF_BOOLEAN)(loc1 == inline_F9_7941());
									}
									tb1 = tb2;
								}
								if (tb1) {
									tp1 = inline_F9_7514(arg1);
									F678_8801(Current, tp1);
								} else {
									tb1 = '\0';
									if (F678_8803(Current)) {
										tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7942());
									}
									if (tb1) {
										tp1 = inline_F9_7515(arg1);
										F678_8805(Current, tp1);
									} else {
										tb1 = '\0';
										if (F678_8807(Current)) {
											tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7943());
										}
										if (tb1) {
											F678_8809(Current);
										} else {
											tb1 = '\0';
											if (F678_8811(Current)) {
												tb1 = (EIF_BOOLEAN)(loc1 == inline_F9_7944());
											}
											if (tb1) {
												F678_8813(Current);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {GAME_EVENT_CONTROLLER}.dispose */
void F678_8821 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_29_0_0_0_0_0_);
	inline_F9_7504(tp1);
}

void EIF_Minit927 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
