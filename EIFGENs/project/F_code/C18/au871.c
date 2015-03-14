/*
 * Code for class AUDIO_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "au871.h"
#include <al.h>
#include <alc.h>

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
#ifndef INLINE_F12_8015
static EIF_INTEGER_32 inline_F12_8015 (void)
{
	return (EIF_INTEGER_32) (AL_POSITION)
	;
}
#define INLINE_F12_8015
#endif
#ifndef INLINE_F12_8016
static EIF_INTEGER_32 inline_F12_8016 (void)
{
	return (EIF_INTEGER_32) (AL_VELOCITY)
	;
}
#define INLINE_F12_8016
#endif
#ifndef INLINE_F12_8017
static EIF_INTEGER_32 inline_F12_8017 (void)
{
	return (EIF_INTEGER_32) (AL_ORIENTATION)
	;
}
#define INLINE_F12_8017
#endif
#ifndef INLINE_F12_8018
static EIF_INTEGER_32 inline_F12_8018 (void)
{
	return (EIF_INTEGER_32) (AL_DIRECTION)
	;
}
#define INLINE_F12_8018
#endif
#ifndef INLINE_F12_8019
static EIF_INTEGER_32 inline_F12_8019 (void)
{
	return (EIF_INTEGER_32) (AL_BUFFERS_PROCESSED)
	;
}
#define INLINE_F12_8019
#endif
#ifndef INLINE_F12_8020
static EIF_INTEGER_32 inline_F12_8020 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO8)
	;
}
#define INLINE_F12_8020
#endif
#ifndef INLINE_F12_8021
static EIF_INTEGER_32 inline_F12_8021 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO8)
	;
}
#define INLINE_F12_8021
#endif
#ifndef INLINE_F12_8022
static EIF_INTEGER_32 inline_F12_8022 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO16)
	;
}
#define INLINE_F12_8022
#endif
#ifndef INLINE_F12_8023
static EIF_INTEGER_32 inline_F12_8023 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO16)
	;
}
#define INLINE_F12_8023
#endif
#ifndef INLINE_F12_8024
static EIF_INTEGER_32 inline_F12_8024 (void)
{
	return (EIF_INTEGER_32) (AL_SOURCE_STATE)
	;
}
#define INLINE_F12_8024
#endif
#ifndef INLINE_F12_8026
static EIF_INTEGER_32 inline_F12_8026 (void)
{
	return (EIF_INTEGER_32) (AL_PLAYING)
	;
}
#define INLINE_F12_8026
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_EXTERNAL}.al_get_error */
EIF_INTEGER_32 F12_7982 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) alGetError();
	
	return Result;
}

/* {AUDIO_EXTERNAL}.al_create_context */
EIF_POINTER F12_7983 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) alcCreateContext((ALCdevice *) arg1, (ALCint *) arg2);
	
	return Result;
}

/* {AUDIO_EXTERNAL}.al_make_context_current */
void F12_7984 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	alcMakeContextCurrent((ALCcontext *) arg1);
	
}

/* {AUDIO_EXTERNAL}.al_destroy_context */
void F12_7986 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	alcDestroyContext((ALCcontext *) arg1);
	
}

/* {AUDIO_EXTERNAL}.al_suspend_context */
void F12_7987 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	alcSuspendContext((ALCcontext *) arg1);
	
}

/* {AUDIO_EXTERNAL}.al_open_device */
EIF_POINTER F12_7988 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) alcOpenDevice((ALCchar	 *) arg1);
	
	return Result;
}

/* {AUDIO_EXTERNAL}.al_close_device */
EIF_INTEGER_32 F12_7989 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) alcCloseDevice((ALCdevice *) arg1);
	
	return Result;
}

/* {AUDIO_EXTERNAL}.al_set_listener_fv */
void F12_7991 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	
	alListenerfv((ALenum) arg1, (ALfloat *) arg2);
	
}

/* {AUDIO_EXTERNAL}.al_get_source_i */
void F12_7993 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	alGetSourcei((ALuint) arg1, (ALenum) arg2, (ALint *) arg3);
	
}

/* {AUDIO_EXTERNAL}.al_set_source_fv */
void F12_7995 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	alSourcefv((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
}

/* {AUDIO_EXTERNAL}.al_gen_sources */
void F12_7997 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	
	alGenSources((ALsizei) arg1, (ALuint *) arg2);
	
}

/* {AUDIO_EXTERNAL}.al_delete_sources */
void F12_7998 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	
	alDeleteSources((ALsizei) arg1, (ALuint *) arg2);
	
}

/* {AUDIO_EXTERNAL}.al_gen_buffers */
void F12_7999 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	
	alGenBuffers((ALsizei) arg1, (ALuint *) arg2);
	
}

/* {AUDIO_EXTERNAL}.al_source_queue_buffers */
void F12_8000 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	alSourceQueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
}

/* {AUDIO_EXTERNAL}.al_source_unqueue_buffers */
void F12_8001 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	alSourceUnqueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
}

/* {AUDIO_EXTERNAL}.al_buffer_data */
void F12_8002 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	
	alBufferData((ALuint) arg1, (ALenum) arg2, (ALvoid *) arg3, (ALsizei) arg4, (ALsizei) arg5);
	
}

/* {AUDIO_EXTERNAL}.al_source_play */
void F12_8003 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	alSourcePlay((ALuint) arg1);
	
}

/* {AUDIO_EXTERNAL}.al_source_stop */
void F12_8005 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	alSourceStop((ALuint) arg1);
	
}

/* {AUDIO_EXTERNAL}.al_source_rewind */
void F12_8006 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	alSourceRewind((ALuint) arg1);
	
}

/* {AUDIO_EXTERNAL}.al_no_error */
EIF_INTEGER_32 F12_8014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8014 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_position */
EIF_INTEGER_32 F12_8015 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8015 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_velocity */
EIF_INTEGER_32 F12_8016 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8016 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_orientation */
EIF_INTEGER_32 F12_8017 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8017 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_direction */
EIF_INTEGER_32 F12_8018 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8018 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_buffers_processed */
EIF_INTEGER_32 F12_8019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8019 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_format_mono8 */
EIF_INTEGER_32 F12_8020 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8020 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_format_stereo8 */
EIF_INTEGER_32 F12_8021 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8021 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_format_mono16 */
EIF_INTEGER_32 F12_8022 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8022 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_format_stereo16 */
EIF_INTEGER_32 F12_8023 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8023 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_source_state */
EIF_INTEGER_32 F12_8024 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8024 ();
	return Result;
}

/* {AUDIO_EXTERNAL}.al_playing */
EIF_INTEGER_32 F12_8026 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F12_8026 ();
	return Result;
}

void EIF_Minit871 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
