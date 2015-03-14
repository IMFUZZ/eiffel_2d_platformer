/*
 * Code for class CPF_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "cp865.h"
#include <stdio.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F6_7073
static EIF_NATURAL_8 inline_F6_7073 (EIF_POINTER arg1)
{
	return (EIF_NATURAL_8) (*((uint8_t *)arg1))
	;
}
#define INLINE_F6_7073
#endif
#ifndef INLINE_F6_7076
static EIF_INTEGER_32 inline_F6_7076 (void)
{
	return (EIF_INTEGER_32) (SEEK_SET)
	;
}
#define INLINE_F6_7076
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CPF_EXTERNAL}.fopen */
EIF_POINTER F6_7068 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) fopen((const char *) arg1, (const char *) arg2);
	
	return Result;
}

/* {CPF_EXTERNAL}.fclose */
EIF_INTEGER_32 F6_7069 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) fclose((FILE *) arg1);
	
	return Result;
}

/* {CPF_EXTERNAL}.fread */
EIF_NATURAL_32 F6_7070 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) fread((void *) arg1, (size_t) arg2, (size_t) arg3, (FILE *) arg4);
	
	return Result;
}

/* {CPF_EXTERNAL}.fseek */
EIF_INTEGER_32 F6_7071 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) fseek((FILE *) arg1, (long) arg2, (int) arg3);
	
	return Result;
}

/* {CPF_EXTERNAL}.ftell */
EIF_INTEGER_32 F6_7072 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) ftell((FILE *) arg1);
	
	return Result;
}

/* {CPF_EXTERNAL}.pointer_to_natural_8 */
EIF_NATURAL_8 F6_7073 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F6_7073 ((EIF_POINTER) arg1);
	return Result;
}

/* {CPF_EXTERNAL}.seek_set */
EIF_INTEGER_32 F6_7076 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F6_7076 ();
	return Result;
}

void EIF_Minit865 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
