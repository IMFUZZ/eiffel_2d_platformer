#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN _A373_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN _A515_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = open [1].it_i4;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN _A856_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN _A338_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_BOOLEAN _A660_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_p);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN __A373_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN __A515_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = op_2;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN __A856_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN __A338_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_BOOLEAN __A660_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_POINTER op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* MISMATCH_INFORMATION clear_all */
void A170_91 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F628_4577)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A170_157 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F635_4650)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A170_158 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F635_4651)(Current, arg1, arg2);
}

	/* CONTROLLER on_mouse_move */
void _A869_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_16, EIF_NATURAL_16) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_n2, open [2].it_n2);
}

	/* CONTROLLER on_mouse_move */
void __A869_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_16, EIF_NATURAL_16) , EIF_TYPED_VALUE * closed, EIF_NATURAL_16 op_2, EIF_NATURAL_16 op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* CONTROLLER on_key_down */
void _A869_34_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* CONTROLLER on_key_down */
void __A869_34_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* CONTROLLER on_key_up */
void _A869_35_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* CONTROLLER on_key_up */
void __A869_35_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* FRAME update */
void _A873_35 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r, closed [4].it_r);
}

	/* FRAME update */
void __A873_35 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r, closed [4].it_r);
}

	/* FRAME on_quit */
void _A873_36 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* FRAME on_quit */
void __A873_36 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* AUDIO_CONTROLLER inline-agent#1 of wipe_sources */
void _A902_87_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F135_9145)(closed [1].it_r, open [1].it_r);
}

	/* AUDIO_CONTROLLER inline-agent#1 of wipe_sources */
void __A902_87_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F135_9145)(closed [1].it_r, op_2);
}

	/* AUDIO_CONTROLLER inline-agent#1 of update */
void _A902_89_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F135_9147)(closed [1].it_r, open [1].it_r);
}

	/* AUDIO_CONTROLLER inline-agent#1 of update */
void __A902_89_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F135_9147)(closed [1].it_r, op_2);
}

	/* AUDIO_CONTROLLER inline-agent#1 of disable_sound */
void _A902_90_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F135_9148)(closed [1].it_r, open [1].it_r);
}

	/* AUDIO_CONTROLLER inline-agent#1 of disable_sound */
void __A902_90_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F135_9148)(closed [1].it_r, op_2);
}


#ifdef __cplusplus
}
#endif
