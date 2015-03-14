/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi165.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE}.make_with_name */
void F687_4140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F687_4293(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O3262[dtype-686]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3126[dtype-686]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_non_attached_type(818));
	F816_6141(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.item */
EIF_CHARACTER_8 F687_4150 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2901[dtype-686])(Current);
	Result = *(EIF_CHARACTER_8 *)(Current + O2847[dtype-685]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1868[dtype-577])(Current);
	RTLE;
	return Result;
}

/* {FILE}.position */
EIF_INTEGER_32 F687_4151 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F687_4195(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O3126[Dtype(Current)-686]);
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_tell((FILE*) tp1);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F687_4153 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3272[Dtype(Current) - 686]);
}


/* {FILE}.count */
EIF_INTEGER_32 F687_4166 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2862[dtype-686])(Current)) {
		if ((EIF_BOOLEAN) !F687_4197(Current)) {
			F687_4302(Current);
			Result = F623_4084(RTCV(RTOUCR(13,F687_4300,(Current))));
		} else {
			tp1 = *(EIF_POINTER *)(Current + O3126[dtype-686]);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_size((FILE*) tp1);
		}
	}
	RTLE;
	return Result;
}

/* {FILE}.after */
EIF_BOOLEAN F687_4167 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F687_4195(Current)) {
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3136[dtype-686])(Current)) {
			tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1748[dtype-516])(Current) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {FILE}.before */
EIF_BOOLEAN F687_4168 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F687_4195(Current);
}

/* {FILE}.off */
EIF_BOOLEAN F687_4169 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1748[dtype-516])(Current) == ((EIF_INTEGER_32) 0L)))) {
		tb1 = F687_4195(Current);
	}
	if (!tb1) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3136[dtype-686])(Current);
	}
	RTLE;
	return Result;
}

/* {FILE}.end_of_file */
EIF_BOOLEAN F687_4170 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3126[Dtype(Current)-686]);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) tp1));
}

/* {FILE}.exists */
EIF_BOOLEAN F687_4171 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F687_4195(Current)) {
		tp1 = *(EIF_POINTER *)(RTCV(F687_4291(Current))+ _PTROFF_0_1_0_1_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) tp1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F687_4195 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3262[Dtype(Current)-686]) == ((EIF_INTEGER_32) 0L));
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F687_4197 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3262[dtype-686]) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3262[dtype-686]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3262[dtype-686]) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3262[dtype-686]) == ((EIF_INTEGER_32) 3L)));
}

/* {FILE}.open_write */
void F687_4207 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F687_4291(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3219[dtype-686])(Current, tp1, ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current + O3126[dtype-686]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O3262[dtype-686]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {FILE}.close */
void F687_4223 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3126[dtype-686]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R3222[dtype-686])(Current, tp1);
	*(EIF_INTEGER_32 *)(Current + O3262[dtype-686]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3126[dtype-686]) = (EIF_POINTER) tp2;
	*(EIF_BOOLEAN *)(Current + O3272[dtype-686]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE}.start */
void F687_4224 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3126[Dtype(Current)-686]);
	eif_file_go((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 0L));
}

/* {FILE}.forth */
void F687_4226 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3126[dtype-686]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current + O3126[dtype-686]);
	tc1 = F687_4311(Current, tp1);
	eif_do_nothing_value.it_c1 = tc1;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3136[dtype-686])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1868[dtype-577])(Current);
	}
	RTLE;
}

/* {FILE}.back */
void F687_4227 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3126[Dtype(Current)-686]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) -1L));
}

/* {FILE}.extend */
void F687_4232 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2877[Dtype(Current)-686])(Current, arg1);
}

/* {FILE}.flush */
void F687_4233 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3126[Dtype(Current)-686]);
	eif_file_flush((FILE*) tp1);
}

/* {FILE}.put_string */
void F687_4244 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tp1 = *(EIF_POINTER *)(Current + O3126[Dtype(Current)-686]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.put_character */
void F687_4247 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3126[Dtype(Current)-686]);
	eif_file_pc((FILE*) tp1, (EIF_CHARACTER) arg1);
}

/* {FILE}.wipe_out */
void F687_4267 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F687_4207(Current);
	F687_4223(Current);
	RTLE;
}

/* {FILE}.read_character */
void F687_4275 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3126[dtype-686]);
	tc1 = F687_4311(Current, tp1);
	*(EIF_CHARACTER_8 *)(Current + O2847[dtype-685]) = (EIF_CHARACTER_8) tc1;
	RTLE;
}

/* {FILE}.internal_name */
EIF_REFERENCE F687_4290 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FILE}.internal_name_pointer */
EIF_REFERENCE F687_4291 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {FILE}.internal_detachable_name_pointer */
static EIF_REFERENCE F687_4292_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F687_4292 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(681)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F687_4292_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {FILE}.set_name */
void F687_4293 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOUCR(13,F687_4300,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = F623_4097(RTCV(tr1), arg1, tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F687_4300_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(13)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(622, 622, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F623_4080(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F687_4300 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(13,F687_4300_body,(Current));
}

/* {FILE}.set_buffer */
void F687_4302 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tr1 = RTOUCR(13,F687_4300,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F687_4291(Current);
	F623_4127(RTCV(tr1), tr2, tr3);
	RTLE;
}

/* {FILE}.file_open */
EIF_POINTER F687_4305 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_file_open((EIF_FILENAME) arg1, (int) arg2);
	
	return Result;
}

/* {FILE}.file_close */
void F687_4308 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_close((FILE*) arg1);
	
}

/* {FILE}.file_flush */
void F687_4309 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_flush((FILE*) arg1);
	
}

/* {FILE}.file_gc */
EIF_CHARACTER_8 F687_4311 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) eif_file_gc((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F687_4319 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_tell */
EIF_INTEGER_32 F687_4321 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_tell((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_ps */
void F687_4331 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {FILE}.file_pc */
void F687_4332 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	
	eif_file_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
}

/* {FILE}.file_go */
void F687_4333 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_go((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_move */
void F687_4335 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_move((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_feof */
EIF_BOOLEAN F687_4336 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) arg1));
	
	return Result;
}

/* {FILE}.file_exists */
EIF_BOOLEAN F687_4337 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {FILE}.set_write_mode */
void F687_4359 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3262[Dtype(Current)-686]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

void EIF_Minit165 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
