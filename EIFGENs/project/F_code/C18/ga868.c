/*
 * Code for class GAME_SDL_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga868.h"
#include "sdl_additions.h"
#include "SDL.h"
#include <SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_7440
static EIF_POINTER inline_F9_7440 (void)
{
	return (EIF_POINTER) (malloc (sizeof(SDL_Rect)))
	;
}
#define INLINE_F9_7440
#endif
#ifndef INLINE_F9_7441
static void inline_F9_7441 (EIF_POINTER arg1)
{
	free((SDL_Rect *)arg1)
	;
}
#define INLINE_F9_7441
#endif
#ifndef INLINE_F9_7493
static EIF_POINTER inline_F9_7493 (void)
{
	return (EIF_POINTER) (malloc (sizeof(SDL_Color)))
	;
}
#define INLINE_F9_7493
#endif
#ifndef INLINE_F9_7494
static void inline_F9_7494 (EIF_POINTER arg1)
{
	free((SDL_Color *)arg1)
	;
}
#define INLINE_F9_7494
#endif
#ifndef INLINE_F9_7503
static EIF_POINTER inline_F9_7503 (void)
{
	return (EIF_POINTER) (malloc (sizeof(SDL_Event)))
	;
}
#define INLINE_F9_7503
#endif
#ifndef INLINE_F9_7504
static void inline_F9_7504 (EIF_POINTER arg1)
{
	free((SDL_Event *)arg1)
	;
}
#define INLINE_F9_7504
#endif
#ifndef INLINE_F9_7507
static EIF_POINTER inline_F9_7507 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->active))
	;
}
#define INLINE_F9_7507
#endif
#ifndef INLINE_F9_7508
static EIF_POINTER inline_F9_7508 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->key))
	;
}
#define INLINE_F9_7508
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
#ifndef INLINE_F9_7511
static EIF_POINTER inline_F9_7511 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jaxis))
	;
}
#define INLINE_F9_7511
#endif
#ifndef INLINE_F9_7512
static EIF_POINTER inline_F9_7512 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jball))
	;
}
#define INLINE_F9_7512
#endif
#ifndef INLINE_F9_7513
static EIF_POINTER inline_F9_7513 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jhat))
	;
}
#define INLINE_F9_7513
#endif
#ifndef INLINE_F9_7514
static EIF_POINTER inline_F9_7514 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->jbutton))
	;
}
#define INLINE_F9_7514
#endif
#ifndef INLINE_F9_7515
static EIF_POINTER inline_F9_7515 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_Event *)arg1)->resize))
	;
}
#define INLINE_F9_7515
#endif
#ifndef INLINE_F9_7534
static EIF_POINTER inline_F9_7534 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (&(((SDL_KeyboardEvent *)arg1)->keysym))
	;
}
#define INLINE_F9_7534
#endif
#ifndef INLINE_F9_7635
static EIF_NATURAL_32 inline_F9_7635 (void)
{
	return (EIF_NATURAL_32) SDL_INIT_VIDEO
	;
}
#define INLINE_F9_7635
#endif
#ifndef INLINE_F9_7648
static EIF_NATURAL_32 inline_F9_7648 (void)
{
	return (EIF_NATURAL_32) SDL_SWSURFACE
	;
}
#define INLINE_F9_7648
#endif
#ifndef INLINE_F9_7649
static EIF_NATURAL_32 inline_F9_7649 (void)
{
	return (EIF_NATURAL_32) SDL_HWSURFACE
	;
}
#define INLINE_F9_7649
#endif
#ifndef INLINE_F9_7654
static EIF_NATURAL_32 inline_F9_7654 (void)
{
	return (EIF_NATURAL_32) SDL_DOUBLEBUF
	;
}
#define INLINE_F9_7654
#endif
#ifndef INLINE_F9_7655
static EIF_NATURAL_32 inline_F9_7655 (void)
{
	return (EIF_NATURAL_32) SDL_FULLSCREEN
	;
}
#define INLINE_F9_7655
#endif
#ifndef INLINE_F9_7658
static EIF_NATURAL_32 inline_F9_7658 (void)
{
	return (EIF_NATURAL_32) SDL_RESIZABLE
	;
}
#define INLINE_F9_7658
#endif
#ifndef INLINE_F9_7659
static EIF_NATURAL_32 inline_F9_7659 (void)
{
	return (EIF_NATURAL_32) SDL_RLEACCEL
	;
}
#define INLINE_F9_7659
#endif
#ifndef INLINE_F9_7660
static EIF_NATURAL_32 inline_F9_7660 (void)
{
	return (EIF_NATURAL_32) SDL_SRCALPHA
	;
}
#define INLINE_F9_7660
#endif
#ifndef INLINE_F9_7661
static EIF_NATURAL_32 inline_F9_7661 (void)
{
	return (EIF_NATURAL_32) SDL_SRCCOLORKEY
	;
}
#define INLINE_F9_7661
#endif
#ifndef INLINE_F9_7663
static EIF_NATURAL_32 inline_F9_7663 (void)
{
	return (EIF_NATURAL_32) SDL_NOFRAME
	;
}
#define INLINE_F9_7663
#endif
#ifndef INLINE_F9_7668
static EIF_INTEGER_32 inline_F9_7668 (void)
{
	return (EIF_INTEGER) SDLK_RETURN
	;
}
#define INLINE_F9_7668
#endif
#ifndef INLINE_F9_7670
static EIF_INTEGER_32 inline_F9_7670 (void)
{
	return (EIF_INTEGER) SDLK_ESCAPE
	;
}
#define INLINE_F9_7670
#endif
#ifndef INLINE_F9_7671
static EIF_INTEGER_32 inline_F9_7671 (void)
{
	return (EIF_INTEGER) SDLK_SPACE
	;
}
#define INLINE_F9_7671
#endif
#ifndef INLINE_F9_7709
static EIF_INTEGER_32 inline_F9_7709 (void)
{
	return (EIF_INTEGER) SDLK_a
	;
}
#define INLINE_F9_7709
#endif
#ifndef INLINE_F9_7712
static EIF_INTEGER_32 inline_F9_7712 (void)
{
	return (EIF_INTEGER) SDLK_d
	;
}
#define INLINE_F9_7712
#endif
#ifndef INLINE_F9_7727
static EIF_INTEGER_32 inline_F9_7727 (void)
{
	return (EIF_INTEGER) SDLK_s
	;
}
#define INLINE_F9_7727
#endif
#ifndef INLINE_F9_7731
static EIF_INTEGER_32 inline_F9_7731 (void)
{
	return (EIF_INTEGER) SDLK_w
	;
}
#define INLINE_F9_7731
#endif
#ifndef INLINE_F9_7877
static EIF_INTEGER_32 inline_F9_7877 (void)
{
	return (EIF_INTEGER) SDLK_LSHIFT
	;
}
#define INLINE_F9_7877
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
#ifndef INLINE_F9_7916
static EIF_NATURAL_8 inline_F9_7916 (void)
{
	return (EIF_NATURAL_8) SDL_ACTIVEEVENT
	;
}
#define INLINE_F9_7916
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
#ifndef INLINE_F9_7920
static EIF_NATURAL_8 inline_F9_7920 (void)
{
	return (EIF_NATURAL_8) SDL_MOUSEMOTION
	;
}
#define INLINE_F9_7920
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
#ifndef INLINE_F9_7923
static EIF_NATURAL_8 inline_F9_7923 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_LEFT
	;
}
#define INLINE_F9_7923
#endif
#ifndef INLINE_F9_7924
static EIF_NATURAL_8 inline_F9_7924 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_MIDDLE
	;
}
#define INLINE_F9_7924
#endif
#ifndef INLINE_F9_7925
static EIF_NATURAL_8 inline_F9_7925 (void)
{
	return (EIF_NATURAL_8) SDL_BUTTON_RIGHT
	;
}
#define INLINE_F9_7925
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
#ifndef INLINE_F9_7928
static EIF_NATURAL_8 inline_F9_7928 (void)
{
	return (EIF_NATURAL_8) SDL_JOYAXISMOTION
	;
}
#define INLINE_F9_7928
#endif
#ifndef INLINE_F9_7929
static EIF_NATURAL_8 inline_F9_7929 (void)
{
	return (EIF_NATURAL_8) SDL_JOYBALLMOTION
	;
}
#define INLINE_F9_7929
#endif
#ifndef INLINE_F9_7930
static EIF_NATURAL_8 inline_F9_7930 (void)
{
	return (EIF_NATURAL_8) SDL_JOYHATMOTION
	;
}
#define INLINE_F9_7930
#endif
#ifndef INLINE_F9_7932
static EIF_NATURAL_8 inline_F9_7932 (void)
{
	return (EIF_NATURAL_8) SDL_HAT_UP
	;
}
#define INLINE_F9_7932
#endif
#ifndef INLINE_F9_7933
static EIF_NATURAL_8 inline_F9_7933 (void)
{
	return (EIF_NATURAL_8) SDL_HAT_RIGHT
	;
}
#define INLINE_F9_7933
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
#ifndef INLINE_F9_7942
static EIF_NATURAL_8 inline_F9_7942 (void)
{
	return (EIF_NATURAL_8) SDL_VIDEORESIZE
	;
}
#define INLINE_F9_7942
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
#ifndef INLINE_F9_7947
static EIF_INTEGER_32 inline_F9_7947 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (SDL_MUSTLOCK_ALT((SDL_Surface *)arg1))
	;
}
#define INLINE_F9_7947
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

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_SDL_EXTERNAL}.sdl_init */
EIF_INTEGER_32 F9_7353 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_Init((Uint32) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_quit */
void F9_7354 (EIF_REFERENCE Current)
{
	GTCX
	
	SDL_Quit();
	
}

/* {GAME_SDL_EXTERNAL}.sdl_initsubsystem */
EIF_INTEGER_32 F9_7355 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_InitSubSystem((Uint32) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_geterror */
EIF_POINTER F9_7358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) SDL_GetError();
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_setvideomode */
EIF_POINTER F9_7360 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) SDL_SetVideoMode((int) arg1, (int) arg2, (int) arg3, (Uint32) arg4);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_loadbmp */
EIF_POINTER F9_7361 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) SDL_LoadBMP((const char *) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_blitsurface */
EIF_INTEGER_32 F9_7371 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_BlitSurface((SDL_Surface *) arg1, (SDL_Rect *) arg2, (SDL_Surface *) arg3, (SDL_Rect *) arg4);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_flip */
EIF_INTEGER_32 F9_7372 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_Flip((SDL_Surface*) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_getvideosurface */
EIF_POINTER F9_7373 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) SDL_GetVideoSurface();
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_creatergbsurface */
EIF_POINTER F9_7376 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_NATURAL_32 arg5, EIF_NATURAL_32 arg6, EIF_NATURAL_32 arg7, EIF_NATURAL_32 arg8)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) SDL_CreateRGBSurface((Uint32) arg1, (int) arg2, (int) arg3, (int) arg4, (Uint32) arg5, (Uint32) arg6, (Uint32) arg7, (Uint32) arg8);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_locksurface */
EIF_INTEGER_32 F9_7377 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_LockSurface((SDL_Surface*) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_unlocksurface */
void F9_7378 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	SDL_UnlockSurface((SDL_Surface*) arg1);
	
}

/* {GAME_SDL_EXTERNAL}.sdl_freesurface */
void F9_7379 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	SDL_FreeSurface((SDL_Surface*) arg1);
	
}

/* {GAME_SDL_EXTERNAL}.sdl_delay */
void F9_7380 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	SDL_Delay((Uint32) arg1);
	
}

/* {GAME_SDL_EXTERNAL}.sdl_getticks */
EIF_NATURAL_32 F9_7381 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) SDL_GetTicks();
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_convertsurface */
EIF_POINTER F9_7382 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) SDL_ConvertSurface((SDL_Surface *) arg1, (SDL_PixelFormat *) arg2, (Uint32) arg3);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_maprgb */
EIF_NATURAL_32 F9_7386 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_8 arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_8 arg4)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) SDL_MapRGB((SDL_PixelFormat *) arg1, (Uint8) arg2, (Uint8) arg3, (Uint8) arg4);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_maprgba */
EIF_NATURAL_32 F9_7388 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_8 arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_8 arg4, EIF_NATURAL_8 arg5)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) SDL_MapRGBA((SDL_PixelFormat *) arg1, (Uint8) arg2, (Uint8) arg3, (Uint8) arg4, (Uint8) arg5);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_getrgba */
void F9_7389 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	GTCX
	
	SDL_GetRGBA((Uint32) arg1, (SDL_PixelFormat *) arg2, (Uint8 *) arg3, (Uint8 *) arg4, (Uint8 *) arg5, (Uint8 *) arg6);
	
}

/* {GAME_SDL_EXTERNAL}.sdl_pollevent */
EIF_INTEGER_32 F9_7392 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_PollEvent((SDL_Event *) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_joystickopened */
EIF_INTEGER_32 F9_7397 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_JoystickOpened((int) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_joystickclose */
void F9_7398 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	SDL_JoystickClose((SDL_Joystick *) arg1);
	
}

/* {GAME_SDL_EXTERNAL}.sdl_setalpha */
EIF_INTEGER_32 F9_7410 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_8 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_SetAlpha((SDL_Surface *) arg1, (Uint32) arg2, (Uint8) arg3);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_setcolorkey */
EIF_INTEGER_32 F9_7412 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) SDL_SetColorKey((SDL_Surface *) arg1, (Uint32) arg2, (Uint32) arg3);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_wm_setcaption */
void F9_7414 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	SDL_WM_SetCaption((const char *) arg1, (const char *) arg2);
	
}

/* {GAME_SDL_EXTERNAL}.sdl_enableunicode */
EIF_BOOLEAN F9_7420 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(SDL_EnableUNICODE((int) arg1));
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_getkeyname */
EIF_POINTER F9_7421 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) SDL_GetKeyName((SDLKey) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.rotatesurface90degrees */
EIF_POINTER F9_7422 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) rotateSurface90Degrees_all((SDL_Surface *) arg1, (int) arg2);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.getpixel */
EIF_NATURAL_32 F9_7423 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) getpixel((SDL_Surface *) arg1, (int) arg2, (int) arg3);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.putpixel */
void F9_7424 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	
	putpixel((SDL_Surface *) arg1, (int) arg2, (int) arg3, (Uint32) arg4);
	
}

/* {GAME_SDL_EXTERNAL}.copypalette */
void F9_7425 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	CopyPalette_8((SDL_Surface *) arg1, (SDL_Surface *) arg2);
	
}

/* {GAME_SDL_EXTERNAL}.mirrorsurfacex */
EIF_POINTER F9_7426 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) MirrorSurfaceX((SDL_Surface *) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.mirrorsurfacey */
EIF_POINTER F9_7427 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) MirrorSurfaceY((SDL_Surface *) arg1);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_surface_struct_flags */
EIF_NATURAL_32 F9_7431 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((SDL_Surface *)arg1)->flags);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_surface_struct_format */
EIF_POINTER F9_7432 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((SDL_Surface *)arg1)->format);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_surface_struct_w */
EIF_INTEGER_32 F9_7433 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SDL_Surface *)arg1)->w);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_surface_struct_h */
EIF_INTEGER_32 F9_7434 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SDL_Surface *)arg1)->h);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.c_rect_struct_allocate */
EIF_POINTER F9_7440 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7440 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.c_rect_struct_free */
void F9_7441 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F9_7441 ((EIF_POINTER) arg1);
}

/* {GAME_SDL_EXTERNAL}.set_rect_struct_x */
void F9_7442 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_16 arg2)
{
	GTCX
	
	(((SDL_Rect *)arg1)->x = (Sint16)(arg2));
	
}

/* {GAME_SDL_EXTERNAL}.set_rect_struct_y */
void F9_7444 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_16 arg2)
{
	GTCX
	
	(((SDL_Rect *)arg1)->y = (Sint16)(arg2));
	
}

/* {GAME_SDL_EXTERNAL}.set_rect_struct_w */
void F9_7446 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	
	(((SDL_Rect *)arg1)->w = (Uint16)(arg2));
	
}

/* {GAME_SDL_EXTERNAL}.set_rect_struct_h */
void F9_7448 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	
	(((SDL_Rect *)arg1)->h = (Uint16)(arg2));
	
}

/* {GAME_SDL_EXTERNAL}.get_pixel_format_struct_bitsperpixel */
EIF_NATURAL_8 F9_7455 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_PixelFormat *)arg1)->BitsPerPixel);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_pixel_format_struct_rmask */
EIF_NATURAL_32 F9_7475 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((SDL_PixelFormat *)arg1)->Rmask);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_pixel_format_struct_gmask */
EIF_NATURAL_32 F9_7477 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((SDL_PixelFormat *)arg1)->Gmask);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_pixel_format_struct_bmask */
EIF_NATURAL_32 F9_7479 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((SDL_PixelFormat *)arg1)->Bmask);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_pixel_format_struct_amask */
EIF_NATURAL_32 F9_7481 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((SDL_PixelFormat *)arg1)->Amask);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_pixel_format_struct_alpha */
EIF_NATURAL_8 F9_7485 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_PixelFormat *)arg1)->alpha);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.c_color_struct_allocate */
EIF_POINTER F9_7493 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7493 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.c_color_struct_free */
void F9_7494 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F9_7494 ((EIF_POINTER) arg1);
}

/* {GAME_SDL_EXTERNAL}.set_color_struct_r */
void F9_7495 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_8 arg2)
{
	GTCX
	
	(((SDL_Color *)arg1)->r = (Uint8)(arg2));
	
}

/* {GAME_SDL_EXTERNAL}.get_color_struct_r */
EIF_NATURAL_8 F9_7496 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_Color *)arg1)->r);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.set_color_struct_g */
void F9_7497 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_8 arg2)
{
	GTCX
	
	(((SDL_Color *)arg1)->g = (Uint8)(arg2));
	
}

/* {GAME_SDL_EXTERNAL}.get_color_struct_g */
EIF_NATURAL_8 F9_7498 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_Color *)arg1)->g);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.set_color_struct_b */
void F9_7499 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_8 arg2)
{
	GTCX
	
	(((SDL_Color *)arg1)->b = (Uint8)(arg2));
	
}

/* {GAME_SDL_EXTERNAL}.get_color_struct_b */
EIF_NATURAL_8 F9_7500 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_Color *)arg1)->b);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.c_event_struct_allocate */
EIF_POINTER F9_7503 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7503 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.c_event_struct_free */
void F9_7504 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F9_7504 ((EIF_POINTER) arg1);
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_type */
EIF_NATURAL_8 F9_7506 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_Event *)arg1)->type);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_active_pointer */
EIF_POINTER F9_7507 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7507 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_key_pointer */
EIF_POINTER F9_7508 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7508 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_motion_pointer */
EIF_POINTER F9_7509 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7509 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_button_pointer */
EIF_POINTER F9_7510 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7510 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_jaxis_pointer */
EIF_POINTER F9_7511 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7511 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_jball_pointer */
EIF_POINTER F9_7512 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7512 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_jhat_pointer */
EIF_POINTER F9_7513 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7513 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_jbutton_pointer */
EIF_POINTER F9_7514 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7514 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_event_struct_resize_pointer */
EIF_POINTER F9_7515 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7515 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_active_event_struct_gain */
EIF_NATURAL_8 F9_7525 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_ActiveEvent *)arg1)->gain);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_active_event_struct_state */
EIF_NATURAL_8 F9_7527 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_ActiveEvent *)arg1)->state);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_keyboard_event_struct_type */
EIF_NATURAL_8 F9_7531 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_KeyboardEvent *)arg1)->type);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_keyboard_event_struct_state */
EIF_NATURAL_8 F9_7533 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_KeyboardEvent *)arg1)->state);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_keyboard_event_struct_keysym_pointer */
EIF_POINTER F9_7534 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_7534 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_key_sym_struct_scancode */
EIF_NATURAL_8 F9_7538 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_keysym *)arg1)->scancode);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_key_sym_struct_sym */
EIF_INTEGER_32 F9_7540 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SDL_keysym *)arg1)->sym);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_key_sym_struct_mod */
EIF_INTEGER_32 F9_7542 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SDL_keysym *)arg1)->mod);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_key_sym_struct_unicode */
EIF_NATURAL_16 F9_7544 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	Result = (EIF_NATURAL_16) (((SDL_keysym *)arg1)->unicode);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_motion_event_struct_state */
EIF_NATURAL_8 F9_7550 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_MouseMotionEvent *)arg1)->state);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_motion_event_struct_x */
EIF_NATURAL_16 F9_7552 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	Result = (EIF_NATURAL_16) (((SDL_MouseMotionEvent *)arg1)->x);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_motion_event_struct_y */
EIF_NATURAL_16 F9_7554 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	Result = (EIF_NATURAL_16) (((SDL_MouseMotionEvent *)arg1)->y);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_motion_event_struct_xrel */
EIF_INTEGER_16 F9_7556 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	Result = (EIF_INTEGER_16) (((SDL_MouseMotionEvent *)arg1)->xrel);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_motion_event_struct_yrel */
EIF_INTEGER_16 F9_7558 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	Result = (EIF_INTEGER_16) (((SDL_MouseMotionEvent *)arg1)->yrel);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_button_event_struct_type */
EIF_NATURAL_8 F9_7562 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->type);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_button_event_struct_which */
EIF_NATURAL_8 F9_7564 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->which);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_button_event_struct_button */
EIF_NATURAL_8 F9_7566 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->button);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_button_event_struct_state */
EIF_NATURAL_8 F9_7568 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_MouseButtonEvent *)arg1)->state);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_button_event_struct_x */
EIF_NATURAL_16 F9_7570 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	Result = (EIF_NATURAL_16) (((SDL_MouseButtonEvent *)arg1)->x);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_mouse_button_event_struct_y */
EIF_NATURAL_16 F9_7572 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	Result = (EIF_NATURAL_16) (((SDL_MouseButtonEvent *)arg1)->y);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_axis_event_struct_which */
EIF_NATURAL_8 F9_7578 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyAxisEvent *)arg1)->which);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_axis_event_struct_axis */
EIF_NATURAL_8 F9_7580 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyAxisEvent *)arg1)->axis);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_axis_event_struct_value */
EIF_INTEGER_16 F9_7582 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	Result = (EIF_INTEGER_16) (((SDL_JoyAxisEvent *)arg1)->value);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_ball_event_struct_which */
EIF_NATURAL_8 F9_7588 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyBallEvent *)arg1)->which);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_ball_event_struct_ball */
EIF_NATURAL_8 F9_7590 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyBallEvent *)arg1)->ball);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_ball_event_struct_xrel */
EIF_INTEGER_16 F9_7592 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	Result = (EIF_INTEGER_16) (((SDL_JoyBallEvent *)arg1)->xrel);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_ball_event_struct_yrel */
EIF_INTEGER_16 F9_7594 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	Result = (EIF_INTEGER_16) (((SDL_JoyBallEvent *)arg1)->yrel);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_hat_event_struct_which */
EIF_NATURAL_8 F9_7600 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyHatEvent *)arg1)->which);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_hat_event_struct_hat */
EIF_NATURAL_8 F9_7602 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyHatEvent *)arg1)->hat);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_hat_event_struct_value */
EIF_NATURAL_8 F9_7604 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyHatEvent *)arg1)->value);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_button_event_struct_which */
EIF_NATURAL_8 F9_7610 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyButtonEvent *)arg1)->which);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_button_event_struct_button */
EIF_NATURAL_8 F9_7612 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyButtonEvent *)arg1)->button);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_joy_button_event_struct_state */
EIF_NATURAL_8 F9_7614 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	Result = (EIF_NATURAL_8) (((SDL_JoyButtonEvent *)arg1)->state);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_resize_event_struct_w */
EIF_INTEGER_32 F9_7620 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SDL_ResizeEvent *)arg1)->w);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.get_resize_event_struct_h */
EIF_INTEGER_32 F9_7622 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SDL_ResizeEvent *)arg1)->h);
	
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_init_video */
EIF_NATURAL_32 F9_7635 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7635 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_swsurface */
EIF_NATURAL_32 F9_7648 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7648 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_hwsurface */
EIF_NATURAL_32 F9_7649 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7649 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_doublebuf */
EIF_NATURAL_32 F9_7654 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7654 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_fullscreen */
EIF_NATURAL_32 F9_7655 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7655 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_resizable */
EIF_NATURAL_32 F9_7658 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7658 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_rleaccel */
EIF_NATURAL_32 F9_7659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7659 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_srcalpha */
EIF_NATURAL_32 F9_7660 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7660 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_srccolorkey */
EIF_NATURAL_32 F9_7661 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7661 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_noframe */
EIF_NATURAL_32 F9_7663 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F9_7663 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_return */
EIF_INTEGER_32 F9_7668 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7668 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_escape */
EIF_INTEGER_32 F9_7670 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7670 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_space */
EIF_INTEGER_32 F9_7671 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7671 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_a */
EIF_INTEGER_32 F9_7709 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7709 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_d */
EIF_INTEGER_32 F9_7712 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7712 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_s */
EIF_INTEGER_32 F9_7727 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7727 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_w */
EIF_INTEGER_32 F9_7731 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7731 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdlk_lshift */
EIF_INTEGER_32 F9_7877 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7877 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_keydown */
EIF_NATURAL_8 F9_7912 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7912 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_keyup */
EIF_NATURAL_8 F9_7913 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7913 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_pressed */
EIF_NATURAL_8 F9_7914 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7914 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_released */
EIF_NATURAL_8 F9_7915 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7915 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_activeevent */
EIF_NATURAL_8 F9_7916 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7916 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_appmousefocus */
EIF_NATURAL_8 F9_7917 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7917 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_appinputfocus */
EIF_NATURAL_8 F9_7918 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7918 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_appactive */
EIF_NATURAL_8 F9_7919 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7919 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_mousemotion */
EIF_NATURAL_8 F9_7920 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7920 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_mousebuttondown */
EIF_NATURAL_8 F9_7921 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7921 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_mousebuttonup */
EIF_NATURAL_8 F9_7922 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7922 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_left */
EIF_NATURAL_8 F9_7923 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7923 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_middle */
EIF_NATURAL_8 F9_7924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7924 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_right */
EIF_NATURAL_8 F9_7925 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7925 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_wheelup */
EIF_NATURAL_8 F9_7926 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7926 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_wheeldown */
EIF_NATURAL_8 F9_7927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7927 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_joyaxismotion */
EIF_NATURAL_8 F9_7928 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7928 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_joyballmotion */
EIF_NATURAL_8 F9_7929 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7929 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_joyhatmotion */
EIF_NATURAL_8 F9_7930 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7930 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_hat_up */
EIF_NATURAL_8 F9_7932 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7932 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_hat_right */
EIF_NATURAL_8 F9_7933 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7933 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_hat_down */
EIF_NATURAL_8 F9_7934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7934 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_hat_left */
EIF_NATURAL_8 F9_7935 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7935 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_joybuttondown */
EIF_NATURAL_8 F9_7940 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7940 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_joybuttonup */
EIF_NATURAL_8 F9_7941 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7941 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_videoresize */
EIF_NATURAL_8 F9_7942 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7942 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_videoexpose */
EIF_NATURAL_8 F9_7943 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7943 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_quit_const */
EIF_NATURAL_8 F9_7944 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7944 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_mustlock */
EIF_INTEGER_32 F9_7947 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_7947 ((EIF_POINTER) arg1);
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_lmask */
EIF_NATURAL_8 F9_7949 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7949 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_rmask */
EIF_NATURAL_8 F9_7950 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7950 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_mmask */
EIF_NATURAL_8 F9_7951 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7951 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_x1mask */
EIF_NATURAL_8 F9_7952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7952 ();
	return Result;
}

/* {GAME_SDL_EXTERNAL}.sdl_button_x2mask */
EIF_NATURAL_8 F9_7953 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F9_7953 ();
	return Result;
}

void EIF_Minit868 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
