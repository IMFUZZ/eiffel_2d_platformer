#include "epoly2.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R1768[406])();
void R1768_init () {
	{long i; for (i = 0; i < 3; i++) R1768[i] = (char *(*)()) F422_2263_1768;}
	R1768[156] = (char *(*)()) F578_3313;
	R1768[157] = (char *(*)()) F579_3313_1768;
	R1768[158] = (char *(*)()) F580_3313_1768;
	R1768[159] = (char *(*)()) F579_3313_1768;
	R1768[160] = (char *(*)()) F580_3313_1768;
	R1768[161] = (char *(*)()) F578_3313;
	R1768[214] = (char *(*)()) F636_4675;
	R1768[215] = (char *(*)()) F637_4675_1768;
	R1768[216] = (char *(*)()) F638_4675_1768;
	R1768[217] = (char *(*)()) F639_4675_1768;
	R1768[218] = (char *(*)()) F640_4675_1768;
	R1768[219] = (char *(*)()) F641_4675_1768;
	R1768[220] = (char *(*)()) F642_4675_1768;
	R1768[221] = (char *(*)()) F643_4675_1768;
	R1768[222] = (char *(*)()) F644_4675_1768;
	R1768[223] = (char *(*)()) F645_4675_1768;
	R1768[224] = (char *(*)()) F646_4675_1768;
	R1768[225] = (char *(*)()) F647_4675_1768;
	R1768[226] = (char *(*)()) F648_4675_1768;
	R1768[227] = (char *(*)()) F649_4675_1768;
	R1768[228] = (char *(*)()) F650_4675_1768;
	R1768[229] = (char *(*)()) F636_4675;
	R1768[230] = (char *(*)()) F640_4675_1768;
	R1768[231] = (char *(*)()) F638_4675_1768;
	{long i; for (i = 232; i < 234; i++) R1768[i] = (char *(*)()) F636_4675;}
	{long i; for (i = 265; i < 268; i++) R1768[i] = (char *(*)()) F687_4150_1768;}
	R1768[405] = (char *(*)()) F687_4150_1768;
}
static EIF_REFERENCE F422_2263_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F422_2263(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F579_3313_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F579_3313(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F580_3313_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F580_3313(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F637_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F637_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F638_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F638_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F639_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F639_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F640_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F640_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F641_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F641_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F642_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F642_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F643_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F643_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F644_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F644_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F645_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F645_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F646_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F646_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F647_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F647_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F648_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F648_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F649_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F649_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F650_4675_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F650_4675(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F687_4150_1768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F687_4150(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R1769[451])();
void R1769_init () {
	R1769[0] = (char *(*)()) F377_2050;
	R1769[1] = (char *(*)()) F378_2050;
	R1769[2] = (char *(*)()) F379_2050;
	R1769[3] = (char *(*)()) F380_2050;
	R1769[4] = (char *(*)()) F381_2050;
	R1769[5] = (char *(*)()) F382_2050;
	R1769[6] = (char *(*)()) F383_2050;
	R1769[7] = (char *(*)()) F384_2050;
	R1769[8] = (char *(*)()) F385_2050;
	R1769[9] = (char *(*)()) F386_2050;
	R1769[10] = (char *(*)()) F387_2050;
	R1769[11] = (char *(*)()) F388_2050;
	R1769[12] = (char *(*)()) F389_2050;
	R1769[13] = (char *(*)()) F390_2050;
	R1769[14] = (char *(*)()) F391_2050;
	R1769[15] = (char *(*)()) F392_2216;
	R1769[16] = (char *(*)()) F393_2216;
	R1769[17] = (char *(*)()) F394_2216;
	R1769[18] = (char *(*)()) F395_2216;
	R1769[19] = (char *(*)()) F396_2216;
	R1769[20] = (char *(*)()) F397_2216;
	R1769[21] = (char *(*)()) F398_2216;
	R1769[22] = (char *(*)()) F399_2216;
	R1769[23] = (char *(*)()) F400_2216;
	R1769[24] = (char *(*)()) F401_2216;
	R1769[25] = (char *(*)()) F402_2216;
	R1769[26] = (char *(*)()) F403_2216;
	R1769[27] = (char *(*)()) F404_2216;
	R1769[28] = (char *(*)()) F405_2216;
	R1769[29] = (char *(*)()) F406_2216;
	R1769[30] = (char *(*)()) F392_2216;
	R1769[31] = (char *(*)()) F393_2216;
	R1769[32] = (char *(*)()) F394_2216;
	R1769[33] = (char *(*)()) F395_2216;
	R1769[34] = (char *(*)()) F396_2216;
	R1769[35] = (char *(*)()) F397_2216;
	R1769[36] = (char *(*)()) F398_2216;
	R1769[37] = (char *(*)()) F399_2216;
	R1769[38] = (char *(*)()) F400_2216;
	R1769[39] = (char *(*)()) F401_2216;
	R1769[40] = (char *(*)()) F402_2216;
	R1769[41] = (char *(*)()) F403_2216;
	R1769[42] = (char *(*)()) F404_2216;
	R1769[43] = (char *(*)()) F405_2216;
	R1769[44] = (char *(*)()) F406_2216;
	{long i; for (i = 45; i < 48; i++) R1769[i] = (char *(*)()) F380_2050;}
	R1769[141] = (char *(*)()) F518_3069;
	R1769[142] = (char *(*)()) F519_3069;
	R1769[143] = (char *(*)()) F520_3069;
	R1769[144] = (char *(*)()) F521_3069;
	R1769[145] = (char *(*)()) F522_3069;
	R1769[146] = (char *(*)()) F523_3069;
	R1769[147] = (char *(*)()) F524_3069;
	R1769[148] = (char *(*)()) F525_3069;
	R1769[149] = (char *(*)()) F526_3069;
	R1769[150] = (char *(*)()) F527_3069;
	R1769[151] = (char *(*)()) F528_3069;
	R1769[152] = (char *(*)()) F529_3069;
	R1769[153] = (char *(*)()) F530_3069;
	R1769[154] = (char *(*)()) F531_3069;
	R1769[155] = (char *(*)()) F532_3069;
	R1769[156] = (char *(*)()) F518_3069;
	R1769[157] = (char *(*)()) F519_3069;
	R1769[158] = (char *(*)()) F520_3069;
	R1769[159] = (char *(*)()) F521_3069;
	R1769[160] = (char *(*)()) F522_3069;
	R1769[161] = (char *(*)()) F523_3069;
	R1769[162] = (char *(*)()) F524_3069;
	R1769[163] = (char *(*)()) F525_3069;
	R1769[164] = (char *(*)()) F526_3069;
	R1769[165] = (char *(*)()) F527_3069;
	R1769[166] = (char *(*)()) F528_3069;
	R1769[167] = (char *(*)()) F529_3069;
	R1769[168] = (char *(*)()) F530_3069;
	R1769[169] = (char *(*)()) F531_3069;
	R1769[170] = (char *(*)()) F532_3069;
	R1769[171] = (char *(*)()) F518_3069;
	R1769[172] = (char *(*)()) F519_3069;
	R1769[173] = (char *(*)()) F520_3069;
	R1769[174] = (char *(*)()) F521_3069;
	R1769[175] = (char *(*)()) F522_3069;
	R1769[176] = (char *(*)()) F523_3069;
	R1769[177] = (char *(*)()) F524_3069;
	R1769[178] = (char *(*)()) F525_3069;
	R1769[179] = (char *(*)()) F526_3069;
	R1769[180] = (char *(*)()) F527_3069;
	R1769[181] = (char *(*)()) F528_3069;
	R1769[182] = (char *(*)()) F529_3069;
	R1769[183] = (char *(*)()) F530_3069;
	R1769[184] = (char *(*)()) F531_3069;
	R1769[185] = (char *(*)()) F532_3069;
	R1769[186] = (char *(*)()) F518_3069;
	R1769[187] = (char *(*)()) F519_3069;
	R1769[188] = (char *(*)()) F520_3069;
	R1769[189] = (char *(*)()) F521_3069;
	R1769[190] = (char *(*)()) F522_3069;
	R1769[191] = (char *(*)()) F523_3069;
	R1769[192] = (char *(*)()) F524_3069;
	R1769[193] = (char *(*)()) F525_3069;
	R1769[194] = (char *(*)()) F526_3069;
	R1769[195] = (char *(*)()) F527_3069;
	R1769[196] = (char *(*)()) F528_3069;
	R1769[197] = (char *(*)()) F529_3069;
	R1769[198] = (char *(*)()) F530_3069;
	R1769[199] = (char *(*)()) F531_3069;
	R1769[200] = (char *(*)()) F532_3069;
	R1769[201] = (char *(*)()) F578_3324;
	R1769[202] = (char *(*)()) F579_3324;
	R1769[203] = (char *(*)()) F580_3324;
	R1769[204] = (char *(*)()) F579_3324;
	R1769[205] = (char *(*)()) F580_3324;
	R1769[206] = (char *(*)()) F578_3324;
	R1769[259] = (char *(*)()) F518_3069;
	R1769[260] = (char *(*)()) F519_3069;
	R1769[261] = (char *(*)()) F520_3069;
	R1769[262] = (char *(*)()) F521_3069;
	R1769[263] = (char *(*)()) F522_3069;
	R1769[264] = (char *(*)()) F523_3069;
	R1769[265] = (char *(*)()) F524_3069;
	R1769[266] = (char *(*)()) F525_3069;
	R1769[267] = (char *(*)()) F526_3069;
	R1769[268] = (char *(*)()) F527_3069;
	R1769[269] = (char *(*)()) F528_3069;
	R1769[270] = (char *(*)()) F529_3069;
	R1769[271] = (char *(*)()) F530_3069;
	R1769[272] = (char *(*)()) F531_3069;
	R1769[273] = (char *(*)()) F532_3069;
	R1769[274] = (char *(*)()) F518_3069;
	R1769[275] = (char *(*)()) F522_3069;
	R1769[276] = (char *(*)()) F520_3069;
	{long i; for (i = 277; i < 279; i++) R1769[i] = (char *(*)()) F518_3069;}
	{long i; for (i = 310; i < 313; i++) R1769[i] = (char *(*)()) F687_4169;}
	R1769[450] = (char *(*)()) F687_4169;
}

char *(*R1770[406])();
void R1770_init () {
	{long i; for (i = 0; i < 3; i++) R1770[i] = (char *(*)()) F422_2271;}
	R1770[96] = (char *(*)()) F518_3062;
	R1770[97] = (char *(*)()) F519_3062;
	R1770[98] = (char *(*)()) F520_3062;
	R1770[99] = (char *(*)()) F521_3062;
	R1770[100] = (char *(*)()) F522_3062;
	R1770[101] = (char *(*)()) F523_3062;
	R1770[102] = (char *(*)()) F524_3062;
	R1770[103] = (char *(*)()) F525_3062;
	R1770[104] = (char *(*)()) F526_3062;
	R1770[105] = (char *(*)()) F527_3062;
	R1770[106] = (char *(*)()) F528_3062;
	R1770[107] = (char *(*)()) F529_3062;
	R1770[108] = (char *(*)()) F530_3062;
	R1770[109] = (char *(*)()) F531_3062;
	R1770[110] = (char *(*)()) F532_3062;
	R1770[111] = (char *(*)()) F518_3062;
	R1770[112] = (char *(*)()) F519_3062;
	R1770[113] = (char *(*)()) F520_3062;
	R1770[114] = (char *(*)()) F521_3062;
	R1770[115] = (char *(*)()) F522_3062;
	R1770[116] = (char *(*)()) F523_3062;
	R1770[117] = (char *(*)()) F524_3062;
	R1770[118] = (char *(*)()) F525_3062;
	R1770[119] = (char *(*)()) F526_3062;
	R1770[120] = (char *(*)()) F527_3062;
	R1770[121] = (char *(*)()) F528_3062;
	R1770[122] = (char *(*)()) F529_3062;
	R1770[123] = (char *(*)()) F530_3062;
	R1770[124] = (char *(*)()) F531_3062;
	R1770[125] = (char *(*)()) F532_3062;
	R1770[126] = (char *(*)()) F518_3062;
	R1770[127] = (char *(*)()) F519_3062;
	R1770[128] = (char *(*)()) F520_3062;
	R1770[129] = (char *(*)()) F521_3062;
	R1770[130] = (char *(*)()) F522_3062;
	R1770[131] = (char *(*)()) F523_3062;
	R1770[132] = (char *(*)()) F524_3062;
	R1770[133] = (char *(*)()) F525_3062;
	R1770[134] = (char *(*)()) F526_3062;
	R1770[135] = (char *(*)()) F527_3062;
	R1770[136] = (char *(*)()) F528_3062;
	R1770[137] = (char *(*)()) F529_3062;
	R1770[138] = (char *(*)()) F530_3062;
	R1770[139] = (char *(*)()) F531_3062;
	R1770[140] = (char *(*)()) F532_3062;
	R1770[141] = (char *(*)()) F518_3062;
	R1770[142] = (char *(*)()) F519_3062;
	R1770[143] = (char *(*)()) F520_3062;
	R1770[144] = (char *(*)()) F521_3062;
	R1770[145] = (char *(*)()) F522_3062;
	R1770[146] = (char *(*)()) F523_3062;
	R1770[147] = (char *(*)()) F524_3062;
	R1770[148] = (char *(*)()) F525_3062;
	R1770[149] = (char *(*)()) F526_3062;
	R1770[150] = (char *(*)()) F527_3062;
	R1770[151] = (char *(*)()) F528_3062;
	R1770[152] = (char *(*)()) F529_3062;
	R1770[153] = (char *(*)()) F530_3062;
	R1770[154] = (char *(*)()) F531_3062;
	R1770[155] = (char *(*)()) F532_3062;
	R1770[156] = (char *(*)()) F578_3330;
	R1770[157] = (char *(*)()) F579_3330;
	R1770[158] = (char *(*)()) F580_3330;
	R1770[159] = (char *(*)()) F579_3330;
	R1770[160] = (char *(*)()) F580_3330;
	R1770[161] = (char *(*)()) F578_3330;
	R1770[214] = (char *(*)()) F636_4701;
	R1770[215] = (char *(*)()) F637_4701;
	R1770[216] = (char *(*)()) F638_4701;
	R1770[217] = (char *(*)()) F639_4701;
	R1770[218] = (char *(*)()) F640_4701;
	R1770[219] = (char *(*)()) F641_4701;
	R1770[220] = (char *(*)()) F642_4701;
	R1770[221] = (char *(*)()) F643_4701;
	R1770[222] = (char *(*)()) F644_4701;
	R1770[223] = (char *(*)()) F645_4701;
	R1770[224] = (char *(*)()) F646_4701;
	R1770[225] = (char *(*)()) F647_4701;
	R1770[226] = (char *(*)()) F648_4701;
	R1770[227] = (char *(*)()) F649_4701;
	R1770[228] = (char *(*)()) F650_4701;
	R1770[229] = (char *(*)()) F636_4701;
	R1770[230] = (char *(*)()) F640_4701;
	R1770[231] = (char *(*)()) F638_4701;
	{long i; for (i = 232; i < 234; i++) R1770[i] = (char *(*)()) F636_4701;}
	{long i; for (i = 265; i < 268; i++) R1770[i] = (char *(*)()) F687_4224;}
	R1770[405] = (char *(*)()) F687_4224;
}

char *(*R1771[451])();
void R1771_init () {
	R1771[0] = (char *(*)()) F377_2053;
	R1771[1] = (char *(*)()) F378_2053;
	R1771[2] = (char *(*)()) F379_2053;
	R1771[3] = (char *(*)()) F380_2053;
	R1771[4] = (char *(*)()) F381_2053;
	R1771[5] = (char *(*)()) F382_2053;
	R1771[6] = (char *(*)()) F383_2053;
	R1771[7] = (char *(*)()) F384_2053;
	R1771[8] = (char *(*)()) F385_2053;
	R1771[9] = (char *(*)()) F386_2053;
	R1771[10] = (char *(*)()) F387_2053;
	R1771[11] = (char *(*)()) F388_2053;
	R1771[12] = (char *(*)()) F389_2053;
	R1771[13] = (char *(*)()) F390_2053;
	R1771[14] = (char *(*)()) F391_2053;
	R1771[15] = (char *(*)()) F377_2053;
	R1771[16] = (char *(*)()) F379_2053;
	R1771[17] = (char *(*)()) F380_2053;
	R1771[18] = (char *(*)()) F381_2053;
	R1771[19] = (char *(*)()) F382_2053;
	R1771[20] = (char *(*)()) F378_2053;
	R1771[21] = (char *(*)()) F383_2053;
	R1771[22] = (char *(*)()) F385_2053;
	R1771[23] = (char *(*)()) F386_2053;
	R1771[24] = (char *(*)()) F387_2053;
	R1771[25] = (char *(*)()) F388_2053;
	R1771[26] = (char *(*)()) F389_2053;
	R1771[27] = (char *(*)()) F390_2053;
	R1771[28] = (char *(*)()) F384_2053;
	R1771[29] = (char *(*)()) F391_2053;
	R1771[30] = (char *(*)()) F377_2053;
	R1771[31] = (char *(*)()) F379_2053;
	R1771[32] = (char *(*)()) F380_2053;
	R1771[33] = (char *(*)()) F381_2053;
	R1771[34] = (char *(*)()) F382_2053;
	R1771[35] = (char *(*)()) F378_2053;
	R1771[36] = (char *(*)()) F383_2053;
	R1771[37] = (char *(*)()) F385_2053;
	R1771[38] = (char *(*)()) F386_2053;
	R1771[39] = (char *(*)()) F387_2053;
	R1771[40] = (char *(*)()) F388_2053;
	R1771[41] = (char *(*)()) F389_2053;
	R1771[42] = (char *(*)()) F390_2053;
	R1771[43] = (char *(*)()) F384_2053;
	R1771[44] = (char *(*)()) F391_2053;
	{long i; for (i = 45; i < 48; i++) R1771[i] = (char *(*)()) F380_2053;}
	R1771[141] = (char *(*)()) F377_2053;
	R1771[142] = (char *(*)()) F379_2053;
	R1771[143] = (char *(*)()) F380_2053;
	R1771[144] = (char *(*)()) F381_2053;
	R1771[145] = (char *(*)()) F382_2053;
	R1771[146] = (char *(*)()) F383_2053;
	R1771[147] = (char *(*)()) F385_2053;
	R1771[148] = (char *(*)()) F378_2053;
	R1771[149] = (char *(*)()) F386_2053;
	R1771[150] = (char *(*)()) F387_2053;
	R1771[151] = (char *(*)()) F388_2053;
	R1771[152] = (char *(*)()) F389_2053;
	R1771[153] = (char *(*)()) F390_2053;
	R1771[154] = (char *(*)()) F384_2053;
	R1771[155] = (char *(*)()) F391_2053;
	R1771[156] = (char *(*)()) F377_2053;
	R1771[157] = (char *(*)()) F379_2053;
	R1771[158] = (char *(*)()) F380_2053;
	R1771[159] = (char *(*)()) F381_2053;
	R1771[160] = (char *(*)()) F382_2053;
	R1771[161] = (char *(*)()) F383_2053;
	R1771[162] = (char *(*)()) F385_2053;
	R1771[163] = (char *(*)()) F378_2053;
	R1771[164] = (char *(*)()) F386_2053;
	R1771[165] = (char *(*)()) F387_2053;
	R1771[166] = (char *(*)()) F388_2053;
	R1771[167] = (char *(*)()) F389_2053;
	R1771[168] = (char *(*)()) F390_2053;
	R1771[169] = (char *(*)()) F384_2053;
	R1771[170] = (char *(*)()) F391_2053;
	R1771[171] = (char *(*)()) F377_2053;
	R1771[172] = (char *(*)()) F379_2053;
	R1771[173] = (char *(*)()) F380_2053;
	R1771[174] = (char *(*)()) F381_2053;
	R1771[175] = (char *(*)()) F382_2053;
	R1771[176] = (char *(*)()) F383_2053;
	R1771[177] = (char *(*)()) F385_2053;
	R1771[178] = (char *(*)()) F378_2053;
	R1771[179] = (char *(*)()) F386_2053;
	R1771[180] = (char *(*)()) F387_2053;
	R1771[181] = (char *(*)()) F388_2053;
	R1771[182] = (char *(*)()) F389_2053;
	R1771[183] = (char *(*)()) F390_2053;
	R1771[184] = (char *(*)()) F384_2053;
	R1771[185] = (char *(*)()) F391_2053;
	R1771[186] = (char *(*)()) F377_2053;
	R1771[187] = (char *(*)()) F379_2053;
	R1771[188] = (char *(*)()) F380_2053;
	R1771[189] = (char *(*)()) F381_2053;
	R1771[190] = (char *(*)()) F382_2053;
	R1771[191] = (char *(*)()) F383_2053;
	R1771[192] = (char *(*)()) F385_2053;
	R1771[193] = (char *(*)()) F378_2053;
	R1771[194] = (char *(*)()) F386_2053;
	R1771[195] = (char *(*)()) F387_2053;
	R1771[196] = (char *(*)()) F388_2053;
	R1771[197] = (char *(*)()) F389_2053;
	R1771[198] = (char *(*)()) F390_2053;
	R1771[199] = (char *(*)()) F384_2053;
	R1771[200] = (char *(*)()) F391_2053;
	R1771[201] = (char *(*)()) F377_2053;
	R1771[202] = (char *(*)()) F382_2053;
	R1771[203] = (char *(*)()) F380_2053;
	R1771[204] = (char *(*)()) F382_2053;
	R1771[205] = (char *(*)()) F380_2053;
	R1771[206] = (char *(*)()) F377_2053;
	R1771[259] = (char *(*)()) F636_4684;
	R1771[260] = (char *(*)()) F637_4684;
	R1771[261] = (char *(*)()) F638_4684;
	R1771[262] = (char *(*)()) F639_4684;
	R1771[263] = (char *(*)()) F640_4684;
	R1771[264] = (char *(*)()) F641_4684;
	R1771[265] = (char *(*)()) F642_4684;
	R1771[266] = (char *(*)()) F643_4684;
	R1771[267] = (char *(*)()) F644_4684;
	R1771[268] = (char *(*)()) F645_4684;
	R1771[269] = (char *(*)()) F646_4684;
	R1771[270] = (char *(*)()) F647_4684;
	R1771[271] = (char *(*)()) F648_4684;
	R1771[272] = (char *(*)()) F649_4684;
	R1771[273] = (char *(*)()) F650_4684;
	R1771[274] = (char *(*)()) F636_4684;
	R1771[275] = (char *(*)()) F640_4684;
	R1771[276] = (char *(*)()) F638_4684;
	{long i; for (i = 277; i < 279; i++) R1771[i] = (char *(*)()) F636_4684;}
	{long i; for (i = 310; i < 313; i++) R1771[i] = (char *(*)()) F378_2053;}
	R1771[450] = (char *(*)()) F378_2053;
}

char *(*R1780[406])();
void R1780_init () {
	{long i; for (i = 0; i < 3; i++) R1780[i] = (char *(*)()) F422_2262;}
	R1780[156] = (char *(*)()) F578_3316;
	R1780[157] = (char *(*)()) F579_3316;
	R1780[158] = (char *(*)()) F580_3316;
	R1780[159] = (char *(*)()) F579_3316;
	R1780[160] = (char *(*)()) F580_3316;
	R1780[161] = (char *(*)()) F578_3316;
	R1780[214] = (char *(*)()) F636_4680;
	R1780[215] = (char *(*)()) F637_4680;
	R1780[216] = (char *(*)()) F638_4680;
	R1780[217] = (char *(*)()) F639_4680;
	R1780[218] = (char *(*)()) F640_4680;
	R1780[219] = (char *(*)()) F641_4680;
	R1780[220] = (char *(*)()) F642_4680;
	R1780[221] = (char *(*)()) F643_4680;
	R1780[222] = (char *(*)()) F644_4680;
	R1780[223] = (char *(*)()) F645_4680;
	R1780[224] = (char *(*)()) F646_4680;
	R1780[225] = (char *(*)()) F647_4680;
	R1780[226] = (char *(*)()) F648_4680;
	R1780[227] = (char *(*)()) F649_4680;
	R1780[228] = (char *(*)()) F650_4680;
	R1780[229] = (char *(*)()) F636_4680;
	R1780[230] = (char *(*)()) F640_4680;
	R1780[231] = (char *(*)()) F638_4680;
	{long i; for (i = 232; i < 234; i++) R1780[i] = (char *(*)()) F636_4680;}
	{long i; for (i = 266; i < 268; i++) R1780[i] = (char *(*)()) F687_4151;}
	R1780[405] = (char *(*)()) F687_4151;
}

char *(*R1784[406])();
void R1784_init () {
	{long i; for (i = 0; i < 3; i++) R1784[i] = (char *(*)()) F422_2264;}
	R1784[126] = (char *(*)()) F548_3131;
	R1784[127] = (char *(*)()) F549_3131;
	R1784[128] = (char *(*)()) F550_3131;
	R1784[129] = (char *(*)()) F551_3131;
	R1784[130] = (char *(*)()) F552_3131;
	R1784[131] = (char *(*)()) F553_3131;
	R1784[132] = (char *(*)()) F554_3131;
	R1784[133] = (char *(*)()) F555_3131;
	R1784[134] = (char *(*)()) F556_3131;
	R1784[135] = (char *(*)()) F557_3131;
	R1784[136] = (char *(*)()) F558_3131;
	R1784[137] = (char *(*)()) F559_3131;
	R1784[138] = (char *(*)()) F560_3131;
	R1784[139] = (char *(*)()) F561_3131;
	R1784[140] = (char *(*)()) F562_3131;
	R1784[141] = (char *(*)()) F548_3131;
	R1784[142] = (char *(*)()) F549_3131;
	R1784[143] = (char *(*)()) F550_3131;
	R1784[144] = (char *(*)()) F551_3131;
	R1784[145] = (char *(*)()) F552_3131;
	R1784[146] = (char *(*)()) F553_3131;
	R1784[147] = (char *(*)()) F554_3131;
	R1784[148] = (char *(*)()) F555_3131;
	R1784[149] = (char *(*)()) F556_3131;
	R1784[150] = (char *(*)()) F557_3131;
	R1784[151] = (char *(*)()) F558_3131;
	R1784[152] = (char *(*)()) F559_3131;
	R1784[153] = (char *(*)()) F560_3131;
	R1784[154] = (char *(*)()) F561_3131;
	R1784[155] = (char *(*)()) F562_3131;
	R1784[156] = (char *(*)()) F578_3322;
	R1784[157] = (char *(*)()) F579_3322;
	R1784[158] = (char *(*)()) F580_3322;
	R1784[159] = (char *(*)()) F579_3322;
	R1784[160] = (char *(*)()) F580_3322;
	R1784[161] = (char *(*)()) F578_3322;
	R1784[214] = (char *(*)()) F548_3131;
	R1784[215] = (char *(*)()) F549_3131;
	R1784[216] = (char *(*)()) F550_3131;
	R1784[217] = (char *(*)()) F551_3131;
	R1784[218] = (char *(*)()) F552_3131;
	R1784[219] = (char *(*)()) F553_3131;
	R1784[220] = (char *(*)()) F554_3131;
	R1784[221] = (char *(*)()) F555_3131;
	R1784[222] = (char *(*)()) F556_3131;
	R1784[223] = (char *(*)()) F557_3131;
	R1784[224] = (char *(*)()) F558_3131;
	R1784[225] = (char *(*)()) F559_3131;
	R1784[226] = (char *(*)()) F560_3131;
	R1784[227] = (char *(*)()) F561_3131;
	R1784[228] = (char *(*)()) F562_3131;
	R1784[229] = (char *(*)()) F548_3131;
	R1784[230] = (char *(*)()) F552_3131;
	R1784[231] = (char *(*)()) F550_3131;
	{long i; for (i = 232; i < 234; i++) R1784[i] = (char *(*)()) F548_3131;}
	{long i; for (i = 265; i < 268; i++) R1784[i] = (char *(*)()) F687_4167;}
	R1784[405] = (char *(*)()) F687_4167;
}

char *(*R1785[78])();
void R1785_init () {
	R1785[0] = (char *(*)()) F578_3331;
	R1785[1] = (char *(*)()) F579_3331;
	R1785[2] = (char *(*)()) F580_3331;
	R1785[3] = (char *(*)()) F579_3331;
	R1785[4] = (char *(*)()) F580_3331;
	R1785[5] = (char *(*)()) F578_3331;
	R1785[58] = (char *(*)()) F636_4702;
	R1785[59] = (char *(*)()) F637_4702;
	R1785[60] = (char *(*)()) F638_4702;
	R1785[61] = (char *(*)()) F639_4702;
	R1785[62] = (char *(*)()) F640_4702;
	R1785[63] = (char *(*)()) F641_4702;
	R1785[64] = (char *(*)()) F642_4702;
	R1785[65] = (char *(*)()) F643_4702;
	R1785[66] = (char *(*)()) F644_4702;
	R1785[67] = (char *(*)()) F645_4702;
	R1785[68] = (char *(*)()) F646_4702;
	R1785[69] = (char *(*)()) F647_4702;
	R1785[70] = (char *(*)()) F648_4702;
	R1785[71] = (char *(*)()) F649_4702;
	R1785[72] = (char *(*)()) F650_4702;
	R1785[73] = (char *(*)()) F636_4702;
	R1785[74] = (char *(*)()) F640_4702;
	R1785[75] = (char *(*)()) F638_4702;
	{long i; for (i = 76; i < 78; i++) R1785[i] = (char *(*)()) F636_4702;}
}

char *(*R1786[406])();
void R1786_init () {
	{long i; for (i = 0; i < 3; i++) R1786[i] = (char *(*)()) F422_2270;}
	R1786[156] = (char *(*)()) F578_3332;
	R1786[157] = (char *(*)()) F579_3332;
	R1786[158] = (char *(*)()) F580_3332;
	R1786[159] = (char *(*)()) F579_3332;
	R1786[160] = (char *(*)()) F580_3332;
	R1786[161] = (char *(*)()) F578_3332;
	R1786[214] = (char *(*)()) F636_4703;
	R1786[215] = (char *(*)()) F637_4703;
	R1786[216] = (char *(*)()) F638_4703;
	R1786[217] = (char *(*)()) F639_4703;
	R1786[218] = (char *(*)()) F640_4703;
	R1786[219] = (char *(*)()) F641_4703;
	R1786[220] = (char *(*)()) F642_4703;
	R1786[221] = (char *(*)()) F643_4703;
	R1786[222] = (char *(*)()) F644_4703;
	R1786[223] = (char *(*)()) F645_4703;
	R1786[224] = (char *(*)()) F646_4703;
	R1786[225] = (char *(*)()) F647_4703;
	R1786[226] = (char *(*)()) F648_4703;
	R1786[227] = (char *(*)()) F649_4703;
	R1786[228] = (char *(*)()) F650_4703;
	R1786[229] = (char *(*)()) F636_4703;
	R1786[230] = (char *(*)()) F640_4703;
	R1786[231] = (char *(*)()) F638_4703;
	{long i; for (i = 232; i < 234; i++) R1786[i] = (char *(*)()) F636_4703;}
	{long i; for (i = 265; i < 268; i++) R1786[i] = (char *(*)()) F687_4226;}
	R1786[405] = (char *(*)()) F687_4226;
}

char *(*R1867[280])();
void R1867_init () {
	R1867[0] = (char *(*)()) F548_3132;
	R1867[1] = (char *(*)()) F549_3132;
	R1867[2] = (char *(*)()) F550_3132;
	R1867[3] = (char *(*)()) F551_3132;
	R1867[4] = (char *(*)()) F552_3132;
	R1867[5] = (char *(*)()) F553_3132;
	R1867[6] = (char *(*)()) F554_3132;
	R1867[7] = (char *(*)()) F555_3132;
	R1867[8] = (char *(*)()) F556_3132;
	R1867[9] = (char *(*)()) F557_3132;
	R1867[10] = (char *(*)()) F558_3132;
	R1867[11] = (char *(*)()) F559_3132;
	R1867[12] = (char *(*)()) F560_3132;
	R1867[13] = (char *(*)()) F561_3132;
	R1867[14] = (char *(*)()) F562_3132;
	R1867[15] = (char *(*)()) F548_3132;
	R1867[16] = (char *(*)()) F549_3132;
	R1867[17] = (char *(*)()) F550_3132;
	R1867[18] = (char *(*)()) F551_3132;
	R1867[19] = (char *(*)()) F552_3132;
	R1867[20] = (char *(*)()) F553_3132;
	R1867[21] = (char *(*)()) F554_3132;
	R1867[22] = (char *(*)()) F555_3132;
	R1867[23] = (char *(*)()) F556_3132;
	R1867[24] = (char *(*)()) F557_3132;
	R1867[25] = (char *(*)()) F558_3132;
	R1867[26] = (char *(*)()) F559_3132;
	R1867[27] = (char *(*)()) F560_3132;
	R1867[28] = (char *(*)()) F561_3132;
	R1867[29] = (char *(*)()) F562_3132;
	R1867[30] = (char *(*)()) F578_3323;
	R1867[31] = (char *(*)()) F579_3323;
	R1867[32] = (char *(*)()) F580_3323;
	R1867[33] = (char *(*)()) F579_3323;
	R1867[34] = (char *(*)()) F580_3323;
	R1867[35] = (char *(*)()) F578_3323;
	R1867[88] = (char *(*)()) F548_3132;
	R1867[89] = (char *(*)()) F549_3132;
	R1867[90] = (char *(*)()) F550_3132;
	R1867[91] = (char *(*)()) F551_3132;
	R1867[92] = (char *(*)()) F552_3132;
	R1867[93] = (char *(*)()) F553_3132;
	R1867[94] = (char *(*)()) F554_3132;
	R1867[95] = (char *(*)()) F555_3132;
	R1867[96] = (char *(*)()) F556_3132;
	R1867[97] = (char *(*)()) F557_3132;
	R1867[98] = (char *(*)()) F558_3132;
	R1867[99] = (char *(*)()) F559_3132;
	R1867[100] = (char *(*)()) F560_3132;
	R1867[101] = (char *(*)()) F561_3132;
	R1867[102] = (char *(*)()) F562_3132;
	R1867[103] = (char *(*)()) F548_3132;
	R1867[104] = (char *(*)()) F552_3132;
	R1867[105] = (char *(*)()) F550_3132;
	{long i; for (i = 106; i < 108; i++) R1867[i] = (char *(*)()) F548_3132;}
	{long i; for (i = 139; i < 142; i++) R1867[i] = (char *(*)()) F687_4168;}
	R1867[279] = (char *(*)()) F687_4168;
}

char *(*R1868[250])();
void R1868_init () {
	R1868[0] = (char *(*)()) F578_3333;
	R1868[1] = (char *(*)()) F579_3333;
	R1868[2] = (char *(*)()) F580_3333;
	R1868[3] = (char *(*)()) F579_3333;
	R1868[4] = (char *(*)()) F580_3333;
	R1868[5] = (char *(*)()) F578_3333;
	R1868[58] = (char *(*)()) F636_4704;
	R1868[59] = (char *(*)()) F637_4704;
	R1868[60] = (char *(*)()) F638_4704;
	R1868[61] = (char *(*)()) F639_4704;
	R1868[62] = (char *(*)()) F640_4704;
	R1868[63] = (char *(*)()) F641_4704;
	R1868[64] = (char *(*)()) F642_4704;
	R1868[65] = (char *(*)()) F643_4704;
	R1868[66] = (char *(*)()) F644_4704;
	R1868[67] = (char *(*)()) F645_4704;
	R1868[68] = (char *(*)()) F646_4704;
	R1868[69] = (char *(*)()) F647_4704;
	R1868[70] = (char *(*)()) F648_4704;
	R1868[71] = (char *(*)()) F649_4704;
	R1868[72] = (char *(*)()) F650_4704;
	R1868[73] = (char *(*)()) F636_4704;
	R1868[74] = (char *(*)()) F640_4704;
	R1868[75] = (char *(*)()) F638_4704;
	{long i; for (i = 76; i < 78; i++) R1868[i] = (char *(*)()) F636_4704;}
	{long i; for (i = 109; i < 112; i++) R1868[i] = (char *(*)()) F687_4227;}
	R1868[249] = (char *(*)()) F827_6649;
}

char *(*R2300[15])();
void R2300_init () {
	R2300[0] = (char *(*)()) F659_2962;
	R2300[1] = (char *(*)()) F660_2962;
	R2300[2] = (char *(*)()) F661_2962;
	R2300[3] = (char *(*)()) F662_2962;
	R2300[4] = (char *(*)()) F663_2962;
	R2300[5] = (char *(*)()) F664_2962;
	R2300[6] = (char *(*)()) F665_2962;
	R2300[7] = (char *(*)()) F666_2962;
	R2300[8] = (char *(*)()) F667_2962;
	R2300[9] = (char *(*)()) F668_2962;
	R2300[10] = (char *(*)()) F669_2962;
	R2300[11] = (char *(*)()) F670_2962;
	R2300[12] = (char *(*)()) F671_2962;
	R2300[13] = (char *(*)()) F672_2962;
	R2300[14] = (char *(*)()) F673_2962;
}

char *(*R2301[15])();
void R2301_init () {
	R2301[0] = (char *(*)()) F659_2963;
	R2301[1] = (char *(*)()) F660_2963;
	R2301[2] = (char *(*)()) F661_2963;
	R2301[3] = (char *(*)()) F662_2963;
	R2301[4] = (char *(*)()) F663_2963;
	R2301[5] = (char *(*)()) F664_2963;
	R2301[6] = (char *(*)()) F665_2963;
	R2301[7] = (char *(*)()) F666_2963;
	R2301[8] = (char *(*)()) F667_2963;
	R2301[9] = (char *(*)()) F668_2963;
	R2301[10] = (char *(*)()) F669_2963;
	R2301[11] = (char *(*)()) F670_2963;
	R2301[12] = (char *(*)()) F671_2963;
	R2301[13] = (char *(*)()) F672_2963;
	R2301[14] = (char *(*)()) F673_2963;
}

char *(*R2312[36])();
void R2312_init () {
	R2312[0] = (char *(*)()) F739_5113;
	R2312[1] = (char *(*)()) F740_5163_2312;
	R2312[2] = (char *(*)()) F741_5163_2312;
	R2312[12] = (char *(*)()) F751_5353;
	R2312[13] = (char *(*)()) F752_5402_2312;
	R2312[14] = (char *(*)()) F753_5402_2312;
	R2312[18] = (char *(*)()) F757_5484;
	R2312[19] = (char *(*)()) F758_5502_2312;
	R2312[20] = (char *(*)()) F759_5502_2312;
	R2312[30] = (char *(*)()) F769_5799;
	R2312[31] = (char *(*)()) F770_5849_2312;
	R2312[32] = (char *(*)()) F771_5849_2312;
	R2312[33] = (char *(*)()) F772_5894;
	R2312[34] = (char *(*)()) F773_5944_2312;
	R2312[35] = (char *(*)()) F774_5944_2312;
}
static EIF_REFERENCE F740_5163_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F740_5163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F741_5163_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F741_5163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F752_5402_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F752_5402(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F753_5402_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F753_5402(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F758_5502_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F758_5502(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F759_5502_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F759_5502(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F770_5849_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F770_5849(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F771_5849_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F771_5849(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F773_5944_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F773_5944(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F774_5944_2312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F774_5944(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

char *(*R2313[58])();
void R2313_init () {
	R2313[0] = (char *(*)()) F578_3318;
	R2313[1] = (char *(*)()) F579_3318;
	R2313[2] = (char *(*)()) F580_3318;
	R2313[3] = (char *(*)()) F579_3318;
	R2313[4] = (char *(*)()) F580_3318;
	R2313[5] = (char *(*)()) F578_3318;
	R2313[50] = (char *(*)()) F628_4537;
	R2313[51] = (char *(*)()) F629_4537;
	R2313[52] = (char *(*)()) F630_4537;
	R2313[53] = (char *(*)()) F631_4537;
	R2313[54] = (char *(*)()) F632_4537;
	R2313[55] = (char *(*)()) F628_4537;
	R2313[56] = (char *(*)()) F630_4537;
	R2313[57] = (char *(*)()) F628_4537;
}

static EIF_TYPE_INDEX Y2314_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype15[] = {746,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype16[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype17[] = {818,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype18[] = {818,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype77[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype147[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype148[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype149[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype150[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype151[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype152[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype153[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype154[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype155[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype156[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype157[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype158[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype159[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype160[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype161[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype162[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype163[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype164[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype165[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype166[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype167[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype168[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype169[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype170[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype171[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype172[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype173[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype174[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype175[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype176[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype177[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype179[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype180[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype181[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype182[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype183[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype184[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype185[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype186[] = {811,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype187[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype188[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype189[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype190[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype191[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype192[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype193[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype194[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype195[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype196[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype197[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype198[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype199[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype200[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype201[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype202[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype203[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype204[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype205[] = {746,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype206[] = {746,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype207[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y2314_pgtype208[] = {746,0xFFFF};
EIF_TYPE_INDEX *Y2314_gen_type [385];
EIF_TYPE_INDEX Y2314 [385];
void Y2314_init (void)
{
	egc_routines_types [2314] = Y2314;
	egc_routines_gen_types [2314] = Y2314_gen_type;
	egc_routines_offset [2314] = 439;
	Y2314_gen_type [0] = Y2314_pgtype0;
	Y2314_gen_type [1] = Y2314_pgtype1;
	Y2314_gen_type [2] = Y2314_pgtype2;
	Y2314_gen_type [3] = Y2314_pgtype3;
	Y2314_gen_type [4] = Y2314_pgtype4;
	Y2314_gen_type [5] = Y2314_pgtype5;
	Y2314_gen_type [6] = Y2314_pgtype6;
	Y2314_gen_type [7] = Y2314_pgtype7;
	Y2314_gen_type [8] = Y2314_pgtype8;
	Y2314_gen_type [9] = Y2314_pgtype9;
	Y2314_gen_type [10] = Y2314_pgtype10;
	Y2314_gen_type [11] = Y2314_pgtype11;
	Y2314_gen_type [12] = Y2314_pgtype12;
	Y2314_gen_type [13] = Y2314_pgtype13;
	Y2314_gen_type [14] = Y2314_pgtype14;
	Y2314_gen_type [15] = Y2314_pgtype15;
	Y2314_gen_type [16] = Y2314_pgtype16;
	Y2314_gen_type [17] = Y2314_pgtype17;
	Y2314_gen_type [18] = Y2314_pgtype18;
	Y2314_gen_type [19] = Y2314_pgtype19;
	Y2314_gen_type [20] = Y2314_pgtype20;
	Y2314_gen_type [21] = Y2314_pgtype21;
	Y2314_gen_type [22] = Y2314_pgtype22;
	Y2314_gen_type [23] = Y2314_pgtype23;
	Y2314_gen_type [24] = Y2314_pgtype24;
	Y2314_gen_type [25] = Y2314_pgtype25;
	Y2314_gen_type [26] = Y2314_pgtype26;
	Y2314_gen_type [27] = Y2314_pgtype27;
	Y2314_gen_type [28] = Y2314_pgtype28;
	Y2314_gen_type [29] = Y2314_pgtype29;
	Y2314_gen_type [30] = Y2314_pgtype30;
	Y2314_gen_type [31] = Y2314_pgtype31;
	Y2314_gen_type [32] = Y2314_pgtype32;
	Y2314_gen_type [33] = Y2314_pgtype33;
	Y2314_gen_type [34] = Y2314_pgtype34;
	Y2314_gen_type [35] = Y2314_pgtype35;
	Y2314_gen_type [36] = Y2314_pgtype36;
	Y2314_gen_type [37] = Y2314_pgtype37;
	Y2314_gen_type [38] = Y2314_pgtype38;
	Y2314_gen_type [39] = Y2314_pgtype39;
	Y2314_gen_type [40] = Y2314_pgtype40;
	Y2314_gen_type [41] = Y2314_pgtype41;
	Y2314_gen_type [42] = Y2314_pgtype42;
	Y2314_gen_type [43] = Y2314_pgtype43;
	Y2314_gen_type [44] = Y2314_pgtype44;
	Y2314_gen_type [45] = Y2314_pgtype45;
	Y2314_gen_type [46] = Y2314_pgtype46;
	Y2314_gen_type [47] = Y2314_pgtype47;
	Y2314_gen_type [48] = Y2314_pgtype48;
	Y2314_gen_type [49] = Y2314_pgtype49;
	Y2314_gen_type [50] = Y2314_pgtype50;
	Y2314_gen_type [51] = Y2314_pgtype51;
	Y2314_gen_type [52] = Y2314_pgtype52;
	Y2314_gen_type [53] = Y2314_pgtype53;
	Y2314_gen_type [54] = Y2314_pgtype54;
	Y2314_gen_type [55] = Y2314_pgtype55;
	Y2314_gen_type [56] = Y2314_pgtype56;
	Y2314_gen_type [57] = Y2314_pgtype57;
	Y2314_gen_type [58] = Y2314_pgtype58;
	Y2314_gen_type [59] = Y2314_pgtype59;
	Y2314_gen_type [60] = Y2314_pgtype60;
	Y2314_gen_type [61] = Y2314_pgtype61;
	Y2314_gen_type [62] = Y2314_pgtype62;
	Y2314_gen_type [63] = Y2314_pgtype63;
	Y2314_gen_type [64] = Y2314_pgtype64;
	Y2314_gen_type [65] = Y2314_pgtype65;
	Y2314_gen_type [66] = Y2314_pgtype66;
	Y2314_gen_type [67] = Y2314_pgtype67;
	Y2314_gen_type [68] = Y2314_pgtype68;
	Y2314_gen_type [69] = Y2314_pgtype69;
	Y2314_gen_type [70] = Y2314_pgtype70;
	Y2314_gen_type [71] = Y2314_pgtype71;
	Y2314_gen_type [72] = Y2314_pgtype72;
	Y2314_gen_type [73] = Y2314_pgtype73;
	Y2314_gen_type [74] = Y2314_pgtype74;
	Y2314_gen_type [75] = Y2314_pgtype75;
	Y2314_gen_type [76] = Y2314_pgtype76;
	Y2314_gen_type [77] = Y2314_pgtype77;
	Y2314_gen_type [78] = Y2314_pgtype78;
	Y2314_gen_type [79] = Y2314_pgtype79;
	Y2314_gen_type [80] = Y2314_pgtype80;
	Y2314_gen_type [81] = Y2314_pgtype81;
	Y2314_gen_type [82] = Y2314_pgtype82;
	Y2314_gen_type [83] = Y2314_pgtype83;
	Y2314_gen_type [84] = Y2314_pgtype84;
	Y2314_gen_type [85] = Y2314_pgtype85;
	Y2314_gen_type [86] = Y2314_pgtype86;
	Y2314_gen_type [87] = Y2314_pgtype87;
	Y2314_gen_type [88] = Y2314_pgtype88;
	Y2314_gen_type [89] = Y2314_pgtype89;
	Y2314_gen_type [90] = Y2314_pgtype90;
	Y2314_gen_type [91] = Y2314_pgtype91;
	Y2314_gen_type [92] = Y2314_pgtype92;
	Y2314_gen_type [93] = Y2314_pgtype93;
	Y2314_gen_type [94] = Y2314_pgtype94;
	Y2314_gen_type [95] = Y2314_pgtype95;
	Y2314_gen_type [96] = Y2314_pgtype96;
	Y2314_gen_type [97] = Y2314_pgtype97;
	Y2314_gen_type [98] = Y2314_pgtype98;
	Y2314_gen_type [99] = Y2314_pgtype99;
	Y2314_gen_type [100] = Y2314_pgtype100;
	Y2314_gen_type [101] = Y2314_pgtype101;
	Y2314_gen_type [102] = Y2314_pgtype102;
	Y2314_gen_type [103] = Y2314_pgtype103;
	Y2314_gen_type [104] = Y2314_pgtype104;
	Y2314_gen_type [105] = Y2314_pgtype105;
	Y2314_gen_type [106] = Y2314_pgtype106;
	Y2314_gen_type [107] = Y2314_pgtype107;
	Y2314_gen_type [108] = Y2314_pgtype108;
	Y2314_gen_type [109] = Y2314_pgtype109;
	Y2314_gen_type [110] = Y2314_pgtype110;
	Y2314_gen_type [111] = Y2314_pgtype111;
	Y2314_gen_type [112] = Y2314_pgtype112;
	Y2314_gen_type [113] = Y2314_pgtype113;
	Y2314_gen_type [114] = Y2314_pgtype114;
	Y2314_gen_type [115] = Y2314_pgtype115;
	Y2314_gen_type [116] = Y2314_pgtype116;
	Y2314_gen_type [117] = Y2314_pgtype117;
	Y2314_gen_type [118] = Y2314_pgtype118;
	Y2314_gen_type [119] = Y2314_pgtype119;
	Y2314_gen_type [120] = Y2314_pgtype120;
	Y2314_gen_type [121] = Y2314_pgtype121;
	Y2314_gen_type [122] = Y2314_pgtype122;
	Y2314_gen_type [123] = Y2314_pgtype123;
	Y2314_gen_type [124] = Y2314_pgtype124;
	Y2314_gen_type [125] = Y2314_pgtype125;
	Y2314_gen_type [126] = Y2314_pgtype126;
	Y2314_gen_type [127] = Y2314_pgtype127;
	Y2314_gen_type [128] = Y2314_pgtype128;
	Y2314_gen_type [129] = Y2314_pgtype129;
	Y2314_gen_type [130] = Y2314_pgtype130;
	Y2314_gen_type [131] = Y2314_pgtype131;
	Y2314_gen_type [132] = Y2314_pgtype132;
	Y2314_gen_type [133] = Y2314_pgtype133;
	Y2314_gen_type [134] = Y2314_pgtype134;
	Y2314_gen_type [135] = Y2314_pgtype135;
	Y2314_gen_type [136] = Y2314_pgtype136;
	Y2314_gen_type [137] = Y2314_pgtype137;
	Y2314_gen_type [138] = Y2314_pgtype138;
	Y2314_gen_type [139] = Y2314_pgtype139;
	Y2314_gen_type [140] = Y2314_pgtype140;
	Y2314_gen_type [141] = Y2314_pgtype141;
	Y2314_gen_type [142] = Y2314_pgtype142;
	Y2314_gen_type [143] = Y2314_pgtype143;
	Y2314_gen_type [159] = Y2314_pgtype144;
	Y2314_gen_type [160] = Y2314_pgtype145;
	Y2314_gen_type [161] = Y2314_pgtype146;
	Y2314_gen_type [162] = Y2314_pgtype147;
	Y2314_gen_type [163] = Y2314_pgtype148;
	Y2314_gen_type [164] = Y2314_pgtype149;
	Y2314_gen_type [165] = Y2314_pgtype150;
	Y2314_gen_type [166] = Y2314_pgtype151;
	Y2314_gen_type [167] = Y2314_pgtype152;
	Y2314_gen_type [168] = Y2314_pgtype153;
	Y2314_gen_type [169] = Y2314_pgtype154;
	Y2314_gen_type [170] = Y2314_pgtype155;
	Y2314_gen_type [171] = Y2314_pgtype156;
	Y2314_gen_type [172] = Y2314_pgtype157;
	Y2314_gen_type [173] = Y2314_pgtype158;
	Y2314_gen_type [188] = Y2314_pgtype159;
	Y2314_gen_type [189] = Y2314_pgtype160;
	Y2314_gen_type [190] = Y2314_pgtype161;
	Y2314_gen_type [191] = Y2314_pgtype162;
	Y2314_gen_type [192] = Y2314_pgtype163;
	Y2314_gen_type [193] = Y2314_pgtype164;
	Y2314_gen_type [194] = Y2314_pgtype165;
	Y2314_gen_type [195] = Y2314_pgtype166;
	Y2314_gen_type [196] = Y2314_pgtype167;
	Y2314_gen_type [197] = Y2314_pgtype168;
	Y2314_gen_type [198] = Y2314_pgtype169;
	Y2314_gen_type [199] = Y2314_pgtype170;
	Y2314_gen_type [200] = Y2314_pgtype171;
	Y2314_gen_type [201] = Y2314_pgtype172;
	Y2314_gen_type [202] = Y2314_pgtype173;
	Y2314_gen_type [203] = Y2314_pgtype174;
	Y2314_gen_type [204] = Y2314_pgtype175;
	Y2314_gen_type [205] = Y2314_pgtype176;
	Y2314_gen_type [206] = Y2314_pgtype177;
	Y2314_gen_type [207] = Y2314_pgtype178;
	Y2314_gen_type [208] = Y2314_pgtype179;
	Y2314_gen_type [209] = Y2314_pgtype180;
	Y2314_gen_type [210] = Y2314_pgtype181;
	Y2314_gen_type [211] = Y2314_pgtype182;
	Y2314_gen_type [212] = Y2314_pgtype183;
	Y2314_gen_type [213] = Y2314_pgtype184;
	Y2314_gen_type [214] = Y2314_pgtype185;
	Y2314_gen_type [215] = Y2314_pgtype186;
	Y2314_gen_type [219] = Y2314_pgtype187;
	Y2314_gen_type [220] = Y2314_pgtype188;
	Y2314_gen_type [221] = Y2314_pgtype189;
	Y2314_gen_type [222] = Y2314_pgtype190;
	Y2314_gen_type [223] = Y2314_pgtype191;
	Y2314_gen_type [224] = Y2314_pgtype192;
	Y2314_gen_type [225] = Y2314_pgtype193;
	Y2314_gen_type [226] = Y2314_pgtype194;
	Y2314_gen_type [227] = Y2314_pgtype195;
	Y2314_gen_type [228] = Y2314_pgtype196;
	Y2314_gen_type [229] = Y2314_pgtype197;
	Y2314_gen_type [230] = Y2314_pgtype198;
	Y2314_gen_type [231] = Y2314_pgtype199;
	Y2314_gen_type [232] = Y2314_pgtype200;
	Y2314_gen_type [233] = Y2314_pgtype201;
	Y2314_gen_type [298] = Y2314_pgtype202;
	Y2314_gen_type [377] = Y2314_pgtype203;
	Y2314_gen_type [379] = Y2314_pgtype204;
	Y2314_gen_type [380] = Y2314_pgtype205;
	Y2314_gen_type [381] = Y2314_pgtype206;
	Y2314_gen_type [383] = Y2314_pgtype207;
	Y2314_gen_type [384] = Y2314_pgtype208;
	Y2314[15] = 746;
	Y2314[16] = 823;
	{long i; for (i = 17; i < 19; i++) Y2314[i] = 818;};
	Y2314[77] = 770;
	Y2314[195] = 0;
	Y2314[215] = 811;
	Y2314[298] = 0;
	Y2314[377] = 749;
	Y2314[379] = 749;
	{long i; for (i = 380; i < 382; i++) Y2314[i] = 746;};
	Y2314[383] = 749;
	Y2314[384] = 746;
}

char *(*R2366[23])();
void R2366_init () {
	R2366[0] = (char *(*)()) F464_2904;
	R2366[1] = (char *(*)()) F465_2904;
	R2366[2] = (char *(*)()) F466_2904;
	R2366[3] = (char *(*)()) F467_2904;
	R2366[4] = (char *(*)()) F468_2904;
	R2366[5] = (char *(*)()) F469_2904;
	R2366[6] = (char *(*)()) F470_2904;
	R2366[7] = (char *(*)()) F471_2904;
	R2366[8] = (char *(*)()) F472_2904;
	R2366[9] = (char *(*)()) F473_2904;
	R2366[10] = (char *(*)()) F474_2904;
	R2366[11] = (char *(*)()) F475_2904;
	R2366[12] = (char *(*)()) F476_2904;
	R2366[13] = (char *(*)()) F477_2904;
	R2366[14] = (char *(*)()) F478_2904;
	{long i; for (i = 15; i < 17; i++) R2366[i] = (char *(*)()) F464_2904;}
	{long i; for (i = 17; i < 19; i++) R2366[i] = (char *(*)()) F466_2904;}
	R2366[19] = (char *(*)()) F472_2904;
	R2366[20] = (char *(*)()) F464_2904;
	R2366[21] = (char *(*)()) F468_2904;
	R2366[22] = (char *(*)()) F466_2904;
}

char *(*R2378[23])();
void R2378_init () {
	R2378[0] = (char *(*)()) F464_2919;
	R2378[1] = (char *(*)()) F465_2919;
	R2378[2] = (char *(*)()) F466_2919;
	R2378[3] = (char *(*)()) F467_2919;
	R2378[4] = (char *(*)()) F468_2919;
	R2378[5] = (char *(*)()) F469_2919;
	R2378[6] = (char *(*)()) F470_2919;
	R2378[7] = (char *(*)()) F471_2919;
	R2378[8] = (char *(*)()) F472_2919;
	R2378[9] = (char *(*)()) F473_2919;
	R2378[10] = (char *(*)()) F474_2919;
	R2378[11] = (char *(*)()) F475_2919;
	R2378[12] = (char *(*)()) F476_2919;
	R2378[13] = (char *(*)()) F477_2919;
	R2378[14] = (char *(*)()) F478_2919;
	{long i; for (i = 15; i < 17; i++) R2378[i] = (char *(*)()) F464_2919;}
	{long i; for (i = 17; i < 19; i++) R2378[i] = (char *(*)()) F466_2919;}
	R2378[19] = (char *(*)()) F472_2919;
	R2378[20] = (char *(*)()) F464_2919;
	R2378[21] = (char *(*)()) F468_2919;
	R2378[22] = (char *(*)()) F466_2919;
}

char *(*R2383[23])();
void R2383_init () {
	R2383[0] = (char *(*)()) F464_2924;
	R2383[1] = (char *(*)()) F465_2924;
	R2383[2] = (char *(*)()) F466_2924;
	R2383[3] = (char *(*)()) F467_2924;
	R2383[4] = (char *(*)()) F468_2924;
	R2383[5] = (char *(*)()) F469_2924;
	R2383[6] = (char *(*)()) F470_2924;
	R2383[7] = (char *(*)()) F471_2924;
	R2383[8] = (char *(*)()) F472_2924;
	R2383[9] = (char *(*)()) F473_2924;
	R2383[10] = (char *(*)()) F474_2924;
	R2383[11] = (char *(*)()) F475_2924;
	R2383[12] = (char *(*)()) F476_2924;
	R2383[13] = (char *(*)()) F477_2924;
	R2383[14] = (char *(*)()) F478_2924;
	{long i; for (i = 15; i < 17; i++) R2383[i] = (char *(*)()) F464_2924;}
	{long i; for (i = 17; i < 19; i++) R2383[i] = (char *(*)()) F466_2924;}
	R2383[19] = (char *(*)()) F472_2924;
	R2383[20] = (char *(*)()) F484_2935;
	R2383[21] = (char *(*)()) F485_2935;
	R2383[22] = (char *(*)()) F486_2935;
}

char *(*R2385[23])();
void R2385_init () {
	R2385[0] = (char *(*)()) F464_2927;
	R2385[1] = (char *(*)()) F465_2927;
	R2385[2] = (char *(*)()) F466_2927;
	R2385[3] = (char *(*)()) F467_2927;
	R2385[4] = (char *(*)()) F468_2927;
	R2385[5] = (char *(*)()) F469_2927;
	R2385[6] = (char *(*)()) F470_2927;
	R2385[7] = (char *(*)()) F471_2927;
	R2385[8] = (char *(*)()) F472_2927;
	R2385[9] = (char *(*)()) F473_2927;
	R2385[10] = (char *(*)()) F474_2927;
	R2385[11] = (char *(*)()) F475_2927;
	R2385[12] = (char *(*)()) F476_2927;
	R2385[13] = (char *(*)()) F477_2927;
	R2385[14] = (char *(*)()) F478_2927;
	{long i; for (i = 15; i < 17; i++) R2385[i] = (char *(*)()) F464_2927;}
	{long i; for (i = 17; i < 19; i++) R2385[i] = (char *(*)()) F466_2927;}
	R2385[19] = (char *(*)()) F472_2927;
	R2385[20] = (char *(*)()) F464_2927;
	R2385[21] = (char *(*)()) F468_2927;
	R2385[22] = (char *(*)()) F466_2927;
}

char *(*R2387[308])();
void R2387_init () {
	R2387[0] = (char *(*)()) F517_3010_2387;
	R2387[1] = (char *(*)()) F518_3058;
	R2387[2] = (char *(*)()) F519_3058_2387;
	R2387[3] = (char *(*)()) F520_3058_2387;
	R2387[4] = (char *(*)()) F521_3058_2387;
	R2387[5] = (char *(*)()) F522_3058_2387;
	R2387[6] = (char *(*)()) F523_3058_2387;
	R2387[7] = (char *(*)()) F524_3058_2387;
	R2387[8] = (char *(*)()) F525_3058_2387;
	R2387[9] = (char *(*)()) F526_3058_2387;
	R2387[10] = (char *(*)()) F527_3058_2387;
	R2387[11] = (char *(*)()) F528_3058_2387;
	R2387[12] = (char *(*)()) F529_3058_2387;
	R2387[13] = (char *(*)()) F530_3058_2387;
	R2387[14] = (char *(*)()) F531_3058_2387;
	R2387[15] = (char *(*)()) F532_3058_2387;
	R2387[16] = (char *(*)()) F518_3058;
	R2387[17] = (char *(*)()) F519_3058_2387;
	R2387[18] = (char *(*)()) F520_3058_2387;
	R2387[19] = (char *(*)()) F521_3058_2387;
	R2387[20] = (char *(*)()) F522_3058_2387;
	R2387[21] = (char *(*)()) F523_3058_2387;
	R2387[22] = (char *(*)()) F524_3058_2387;
	R2387[23] = (char *(*)()) F525_3058_2387;
	R2387[24] = (char *(*)()) F526_3058_2387;
	R2387[25] = (char *(*)()) F527_3058_2387;
	R2387[26] = (char *(*)()) F528_3058_2387;
	R2387[27] = (char *(*)()) F529_3058_2387;
	R2387[28] = (char *(*)()) F530_3058_2387;
	R2387[29] = (char *(*)()) F531_3058_2387;
	R2387[30] = (char *(*)()) F532_3058_2387;
	R2387[31] = (char *(*)()) F518_3058;
	R2387[32] = (char *(*)()) F519_3058_2387;
	R2387[33] = (char *(*)()) F520_3058_2387;
	R2387[34] = (char *(*)()) F521_3058_2387;
	R2387[35] = (char *(*)()) F522_3058_2387;
	R2387[36] = (char *(*)()) F523_3058_2387;
	R2387[37] = (char *(*)()) F524_3058_2387;
	R2387[38] = (char *(*)()) F525_3058_2387;
	R2387[39] = (char *(*)()) F526_3058_2387;
	R2387[40] = (char *(*)()) F527_3058_2387;
	R2387[41] = (char *(*)()) F528_3058_2387;
	R2387[42] = (char *(*)()) F529_3058_2387;
	R2387[43] = (char *(*)()) F530_3058_2387;
	R2387[44] = (char *(*)()) F531_3058_2387;
	R2387[45] = (char *(*)()) F532_3058_2387;
	R2387[46] = (char *(*)()) F518_3058;
	R2387[47] = (char *(*)()) F519_3058_2387;
	R2387[48] = (char *(*)()) F520_3058_2387;
	R2387[49] = (char *(*)()) F521_3058_2387;
	R2387[50] = (char *(*)()) F522_3058_2387;
	R2387[51] = (char *(*)()) F523_3058_2387;
	R2387[52] = (char *(*)()) F524_3058_2387;
	R2387[53] = (char *(*)()) F525_3058_2387;
	R2387[54] = (char *(*)()) F526_3058_2387;
	R2387[55] = (char *(*)()) F527_3058_2387;
	R2387[56] = (char *(*)()) F528_3058_2387;
	R2387[57] = (char *(*)()) F529_3058_2387;
	R2387[58] = (char *(*)()) F530_3058_2387;
	R2387[59] = (char *(*)()) F531_3058_2387;
	R2387[60] = (char *(*)()) F532_3058_2387;
	R2387[61] = (char *(*)()) F518_3058;
	R2387[62] = (char *(*)()) F522_3058_2387;
	R2387[63] = (char *(*)()) F520_3058_2387;
	R2387[64] = (char *(*)()) F522_3058_2387;
	R2387[65] = (char *(*)()) F520_3058_2387;
	R2387[66] = (char *(*)()) F518_3058;
	R2387[82] = (char *(*)()) F599_3535;
	R2387[83] = (char *(*)()) F600_3535_2387;
	R2387[84] = (char *(*)()) F601_3535_2387;
	R2387[85] = (char *(*)()) F602_3535_2387;
	R2387[86] = (char *(*)()) F603_3535_2387;
	R2387[87] = (char *(*)()) F604_3535_2387;
	R2387[88] = (char *(*)()) F605_3535_2387;
	R2387[89] = (char *(*)()) F606_3535_2387;
	R2387[90] = (char *(*)()) F607_3535_2387;
	R2387[91] = (char *(*)()) F608_3535_2387;
	R2387[92] = (char *(*)()) F609_3535_2387;
	R2387[93] = (char *(*)()) F610_3535_2387;
	R2387[94] = (char *(*)()) F611_3535_2387;
	R2387[95] = (char *(*)()) F612_3535_2387;
	R2387[96] = (char *(*)()) F613_3535_2387;
	R2387[111] = (char *(*)()) F628_4538;
	R2387[112] = (char *(*)()) F629_4538;
	R2387[113] = (char *(*)()) F630_4538_2387;
	R2387[114] = (char *(*)()) F631_4538_2387;
	R2387[115] = (char *(*)()) F632_4538_2387;
	R2387[116] = (char *(*)()) F628_4538;
	R2387[117] = (char *(*)()) F630_4538_2387;
	R2387[118] = (char *(*)()) F628_4538;
	R2387[119] = (char *(*)()) F636_4676;
	R2387[120] = (char *(*)()) F637_4676_2387;
	R2387[121] = (char *(*)()) F638_4676_2387;
	R2387[122] = (char *(*)()) F639_4676_2387;
	R2387[123] = (char *(*)()) F640_4676_2387;
	R2387[124] = (char *(*)()) F641_4676_2387;
	R2387[125] = (char *(*)()) F642_4676_2387;
	R2387[126] = (char *(*)()) F643_4676_2387;
	R2387[127] = (char *(*)()) F644_4676_2387;
	R2387[128] = (char *(*)()) F645_4676_2387;
	R2387[129] = (char *(*)()) F646_4676_2387;
	R2387[130] = (char *(*)()) F647_4676_2387;
	R2387[131] = (char *(*)()) F648_4676_2387;
	R2387[132] = (char *(*)()) F649_4676_2387;
	R2387[133] = (char *(*)()) F650_4676_2387;
	R2387[134] = (char *(*)()) F636_4676;
	R2387[135] = (char *(*)()) F640_4676_2387;
	R2387[136] = (char *(*)()) F638_4676_2387;
	{long i; for (i = 137; i < 139; i++) R2387[i] = (char *(*)()) F636_4676;}
	R2387[142] = (char *(*)()) F659_2952;
	R2387[143] = (char *(*)()) F660_2952_2387;
	R2387[144] = (char *(*)()) F661_2952_2387;
	R2387[145] = (char *(*)()) F662_2952_2387;
	R2387[146] = (char *(*)()) F663_2952_2387;
	R2387[147] = (char *(*)()) F664_2952_2387;
	R2387[148] = (char *(*)()) F665_2952_2387;
	R2387[149] = (char *(*)()) F666_2952_2387;
	R2387[150] = (char *(*)()) F667_2952_2387;
	R2387[151] = (char *(*)()) F668_2952_2387;
	R2387[152] = (char *(*)()) F669_2952_2387;
	R2387[153] = (char *(*)()) F670_2952_2387;
	R2387[154] = (char *(*)()) F671_2952_2387;
	R2387[155] = (char *(*)()) F672_2952_2387;
	R2387[156] = (char *(*)()) F673_2952_2387;
	R2387[221] = (char *(*)()) F738_4917;
	R2387[302] = (char *(*)()) F819_6306_2387;
	R2387[304] = (char *(*)()) F821_6515_2387;
	R2387[306] = (char *(*)()) F823_6604_2387;
	R2387[307] = (char *(*)()) F824_6626_2387;
}
static EIF_REFERENCE F517_3010_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F517_3010(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F519_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F519_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F520_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F520_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F521_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F521_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F522_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F522_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F523_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F523_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F524_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F524_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F525_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F525_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F526_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F526_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F527_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F527_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F528_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F528_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F529_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F529_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F530_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F530_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F531_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F531_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F532_3058_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F532_3058(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F600_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F601_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F601_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F602_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F602_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F603_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F603_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F604_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F604_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F605_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F605_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F606_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F606_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F607_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F607_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F608_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F608_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F609_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F609_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F610_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F610_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F611_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F611_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F612_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F612_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F613_3535_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F613_3535(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F630_4538_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F630_4538(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F631_4538_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F631_4538(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F632_4538_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F632_4538(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F637_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F637_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F638_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F638_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F639_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F639_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F640_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F640_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F641_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F641_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F642_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F642_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F643_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F643_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F644_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F644_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F645_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F645_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F646_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F646_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F647_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F647_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F648_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F648_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F649_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F649_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F650_4676_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F650_4676(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F660_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F660_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F661_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F661_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F662_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F662_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F663_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F663_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F664_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F664_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F665_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F665_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F666_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F666_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F667_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F667_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F668_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F668_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F669_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F669_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F670_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F670_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F671_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F671_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F672_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F672_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F673_2952_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F673_2952(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F819_6306_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F819_6306(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F821_6515_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F821_6515(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F823_6604_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F823_6604(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F824_6626_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F824_6626(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2388[308])();
void R2388_init () {
	R2388[0] = (char *(*)()) F517_3017;
	R2388[1] = (char *(*)()) F518_3061;
	R2388[2] = (char *(*)()) F519_3061;
	R2388[3] = (char *(*)()) F520_3061;
	R2388[4] = (char *(*)()) F521_3061;
	R2388[5] = (char *(*)()) F522_3061;
	R2388[6] = (char *(*)()) F523_3061;
	R2388[7] = (char *(*)()) F524_3061;
	R2388[8] = (char *(*)()) F525_3061;
	R2388[9] = (char *(*)()) F526_3061;
	R2388[10] = (char *(*)()) F527_3061;
	R2388[11] = (char *(*)()) F528_3061;
	R2388[12] = (char *(*)()) F529_3061;
	R2388[13] = (char *(*)()) F530_3061;
	R2388[14] = (char *(*)()) F531_3061;
	R2388[15] = (char *(*)()) F532_3061;
	R2388[16] = (char *(*)()) F518_3061;
	R2388[17] = (char *(*)()) F519_3061;
	R2388[18] = (char *(*)()) F520_3061;
	R2388[19] = (char *(*)()) F521_3061;
	R2388[20] = (char *(*)()) F522_3061;
	R2388[21] = (char *(*)()) F523_3061;
	R2388[22] = (char *(*)()) F524_3061;
	R2388[23] = (char *(*)()) F525_3061;
	R2388[24] = (char *(*)()) F526_3061;
	R2388[25] = (char *(*)()) F527_3061;
	R2388[26] = (char *(*)()) F528_3061;
	R2388[27] = (char *(*)()) F529_3061;
	R2388[28] = (char *(*)()) F530_3061;
	R2388[29] = (char *(*)()) F531_3061;
	R2388[30] = (char *(*)()) F532_3061;
	R2388[31] = (char *(*)()) F518_3061;
	R2388[32] = (char *(*)()) F519_3061;
	R2388[33] = (char *(*)()) F520_3061;
	R2388[34] = (char *(*)()) F521_3061;
	R2388[35] = (char *(*)()) F522_3061;
	R2388[36] = (char *(*)()) F523_3061;
	R2388[37] = (char *(*)()) F524_3061;
	R2388[38] = (char *(*)()) F525_3061;
	R2388[39] = (char *(*)()) F526_3061;
	R2388[40] = (char *(*)()) F527_3061;
	R2388[41] = (char *(*)()) F528_3061;
	R2388[42] = (char *(*)()) F529_3061;
	R2388[43] = (char *(*)()) F530_3061;
	R2388[44] = (char *(*)()) F531_3061;
	R2388[45] = (char *(*)()) F532_3061;
	R2388[46] = (char *(*)()) F518_3061;
	R2388[47] = (char *(*)()) F519_3061;
	R2388[48] = (char *(*)()) F520_3061;
	R2388[49] = (char *(*)()) F521_3061;
	R2388[50] = (char *(*)()) F522_3061;
	R2388[51] = (char *(*)()) F523_3061;
	R2388[52] = (char *(*)()) F524_3061;
	R2388[53] = (char *(*)()) F525_3061;
	R2388[54] = (char *(*)()) F526_3061;
	R2388[55] = (char *(*)()) F527_3061;
	R2388[56] = (char *(*)()) F528_3061;
	R2388[57] = (char *(*)()) F529_3061;
	R2388[58] = (char *(*)()) F530_3061;
	R2388[59] = (char *(*)()) F531_3061;
	R2388[60] = (char *(*)()) F532_3061;
	R2388[61] = (char *(*)()) F518_3061;
	R2388[62] = (char *(*)()) F522_3061;
	R2388[63] = (char *(*)()) F520_3061;
	R2388[64] = (char *(*)()) F522_3061;
	R2388[65] = (char *(*)()) F520_3061;
	R2388[66] = (char *(*)()) F518_3061;
	R2388[82] = (char *(*)()) F599_3544;
	R2388[83] = (char *(*)()) F600_3544;
	R2388[84] = (char *(*)()) F601_3544;
	R2388[85] = (char *(*)()) F602_3544;
	R2388[86] = (char *(*)()) F603_3544;
	R2388[87] = (char *(*)()) F604_3544;
	R2388[88] = (char *(*)()) F605_3544;
	R2388[89] = (char *(*)()) F606_3544;
	R2388[90] = (char *(*)()) F607_3544;
	R2388[91] = (char *(*)()) F608_3544;
	R2388[92] = (char *(*)()) F609_3544;
	R2388[93] = (char *(*)()) F610_3544;
	R2388[94] = (char *(*)()) F611_3544;
	R2388[95] = (char *(*)()) F612_3544;
	R2388[96] = (char *(*)()) F613_3544;
	R2388[111] = (char *(*)()) F628_4543;
	R2388[112] = (char *(*)()) F629_4543;
	R2388[113] = (char *(*)()) F630_4543;
	R2388[114] = (char *(*)()) F631_4543;
	R2388[115] = (char *(*)()) F632_4543;
	R2388[116] = (char *(*)()) F628_4543;
	R2388[117] = (char *(*)()) F630_4543;
	R2388[118] = (char *(*)()) F628_4543;
	R2388[119] = (char *(*)()) F518_3061;
	R2388[120] = (char *(*)()) F519_3061;
	R2388[121] = (char *(*)()) F520_3061;
	R2388[122] = (char *(*)()) F521_3061;
	R2388[123] = (char *(*)()) F522_3061;
	R2388[124] = (char *(*)()) F523_3061;
	R2388[125] = (char *(*)()) F524_3061;
	R2388[126] = (char *(*)()) F525_3061;
	R2388[127] = (char *(*)()) F526_3061;
	R2388[128] = (char *(*)()) F527_3061;
	R2388[129] = (char *(*)()) F528_3061;
	R2388[130] = (char *(*)()) F529_3061;
	R2388[131] = (char *(*)()) F530_3061;
	R2388[132] = (char *(*)()) F531_3061;
	R2388[133] = (char *(*)()) F532_3061;
	R2388[134] = (char *(*)()) F518_3061;
	R2388[135] = (char *(*)()) F522_3061;
	R2388[136] = (char *(*)()) F520_3061;
	{long i; for (i = 137; i < 139; i++) R2388[i] = (char *(*)()) F518_3061;}
	R2388[142] = (char *(*)()) F659_2959;
	R2388[143] = (char *(*)()) F660_2959;
	R2388[144] = (char *(*)()) F661_2959;
	R2388[145] = (char *(*)()) F662_2959;
	R2388[146] = (char *(*)()) F663_2959;
	R2388[147] = (char *(*)()) F664_2959;
	R2388[148] = (char *(*)()) F665_2959;
	R2388[149] = (char *(*)()) F666_2959;
	R2388[150] = (char *(*)()) F667_2959;
	R2388[151] = (char *(*)()) F668_2959;
	R2388[152] = (char *(*)()) F669_2959;
	R2388[153] = (char *(*)()) F670_2959;
	R2388[154] = (char *(*)()) F671_2959;
	R2388[155] = (char *(*)()) F672_2959;
	R2388[156] = (char *(*)()) F673_2959;
	R2388[221] = (char *(*)()) F738_4950;
	R2388[300] = (char *(*)()) F817_6257;
	R2388[302] = (char *(*)()) F817_6257;
	{long i; for (i = 303; i < 305; i++) R2388[i] = (char *(*)()) F820_6480;}
	R2388[306] = (char *(*)()) F817_6257;
	R2388[307] = (char *(*)()) F820_6480;
}

char *(*R2389[308])();
void R2389_init () {
	R2389[0] = (char *(*)()) F517_3013;
	R2389[1] = (char *(*)()) F518_3066;
	R2389[2] = (char *(*)()) F519_3066;
	R2389[3] = (char *(*)()) F520_3066;
	R2389[4] = (char *(*)()) F521_3066;
	R2389[5] = (char *(*)()) F522_3066;
	R2389[6] = (char *(*)()) F523_3066;
	R2389[7] = (char *(*)()) F524_3066;
	R2389[8] = (char *(*)()) F525_3066;
	R2389[9] = (char *(*)()) F526_3066;
	R2389[10] = (char *(*)()) F527_3066;
	R2389[11] = (char *(*)()) F528_3066;
	R2389[12] = (char *(*)()) F529_3066;
	R2389[13] = (char *(*)()) F530_3066;
	R2389[14] = (char *(*)()) F531_3066;
	R2389[15] = (char *(*)()) F532_3066;
	R2389[16] = (char *(*)()) F518_3066;
	R2389[17] = (char *(*)()) F519_3066;
	R2389[18] = (char *(*)()) F520_3066;
	R2389[19] = (char *(*)()) F521_3066;
	R2389[20] = (char *(*)()) F522_3066;
	R2389[21] = (char *(*)()) F523_3066;
	R2389[22] = (char *(*)()) F524_3066;
	R2389[23] = (char *(*)()) F525_3066;
	R2389[24] = (char *(*)()) F526_3066;
	R2389[25] = (char *(*)()) F527_3066;
	R2389[26] = (char *(*)()) F528_3066;
	R2389[27] = (char *(*)()) F529_3066;
	R2389[28] = (char *(*)()) F530_3066;
	R2389[29] = (char *(*)()) F531_3066;
	R2389[30] = (char *(*)()) F532_3066;
	R2389[31] = (char *(*)()) F518_3066;
	R2389[32] = (char *(*)()) F519_3066;
	R2389[33] = (char *(*)()) F520_3066;
	R2389[34] = (char *(*)()) F521_3066;
	R2389[35] = (char *(*)()) F522_3066;
	R2389[36] = (char *(*)()) F523_3066;
	R2389[37] = (char *(*)()) F524_3066;
	R2389[38] = (char *(*)()) F525_3066;
	R2389[39] = (char *(*)()) F526_3066;
	R2389[40] = (char *(*)()) F527_3066;
	R2389[41] = (char *(*)()) F528_3066;
	R2389[42] = (char *(*)()) F529_3066;
	R2389[43] = (char *(*)()) F530_3066;
	R2389[44] = (char *(*)()) F531_3066;
	R2389[45] = (char *(*)()) F532_3066;
	R2389[46] = (char *(*)()) F518_3066;
	R2389[47] = (char *(*)()) F519_3066;
	R2389[48] = (char *(*)()) F520_3066;
	R2389[49] = (char *(*)()) F521_3066;
	R2389[50] = (char *(*)()) F522_3066;
	R2389[51] = (char *(*)()) F523_3066;
	R2389[52] = (char *(*)()) F524_3066;
	R2389[53] = (char *(*)()) F525_3066;
	R2389[54] = (char *(*)()) F526_3066;
	R2389[55] = (char *(*)()) F527_3066;
	R2389[56] = (char *(*)()) F528_3066;
	R2389[57] = (char *(*)()) F529_3066;
	R2389[58] = (char *(*)()) F530_3066;
	R2389[59] = (char *(*)()) F531_3066;
	R2389[60] = (char *(*)()) F532_3066;
	R2389[61] = (char *(*)()) F518_3066;
	R2389[62] = (char *(*)()) F522_3066;
	R2389[63] = (char *(*)()) F520_3066;
	R2389[64] = (char *(*)()) F522_3066;
	R2389[65] = (char *(*)()) F520_3066;
	R2389[66] = (char *(*)()) F518_3066;
	R2389[82] = (char *(*)()) F599_3550;
	R2389[83] = (char *(*)()) F600_3550;
	R2389[84] = (char *(*)()) F601_3550;
	R2389[85] = (char *(*)()) F602_3550;
	R2389[86] = (char *(*)()) F603_3550;
	R2389[87] = (char *(*)()) F604_3550;
	R2389[88] = (char *(*)()) F605_3550;
	R2389[89] = (char *(*)()) F606_3550;
	R2389[90] = (char *(*)()) F607_3550;
	R2389[91] = (char *(*)()) F608_3550;
	R2389[92] = (char *(*)()) F609_3550;
	R2389[93] = (char *(*)()) F610_3550;
	R2389[94] = (char *(*)()) F611_3550;
	R2389[95] = (char *(*)()) F612_3550;
	R2389[96] = (char *(*)()) F613_3550;
	R2389[111] = (char *(*)()) F628_4560;
	R2389[112] = (char *(*)()) F629_4560;
	R2389[113] = (char *(*)()) F630_4560;
	R2389[114] = (char *(*)()) F631_4560;
	R2389[115] = (char *(*)()) F632_4560;
	R2389[116] = (char *(*)()) F628_4560;
	R2389[117] = (char *(*)()) F630_4560;
	R2389[118] = (char *(*)()) F628_4560;
	R2389[119] = (char *(*)()) F636_4697;
	R2389[120] = (char *(*)()) F637_4697;
	R2389[121] = (char *(*)()) F638_4697;
	R2389[122] = (char *(*)()) F639_4697;
	R2389[123] = (char *(*)()) F640_4697;
	R2389[124] = (char *(*)()) F641_4697;
	R2389[125] = (char *(*)()) F642_4697;
	R2389[126] = (char *(*)()) F643_4697;
	R2389[127] = (char *(*)()) F644_4697;
	R2389[128] = (char *(*)()) F645_4697;
	R2389[129] = (char *(*)()) F646_4697;
	R2389[130] = (char *(*)()) F647_4697;
	R2389[131] = (char *(*)()) F648_4697;
	R2389[132] = (char *(*)()) F649_4697;
	R2389[133] = (char *(*)()) F650_4697;
	R2389[134] = (char *(*)()) F636_4697;
	R2389[135] = (char *(*)()) F640_4697;
	R2389[136] = (char *(*)()) F638_4697;
	{long i; for (i = 137; i < 139; i++) R2389[i] = (char *(*)()) F636_4697;}
	R2389[142] = (char *(*)()) F659_2966;
	R2389[143] = (char *(*)()) F660_2966;
	R2389[144] = (char *(*)()) F661_2966;
	R2389[145] = (char *(*)()) F662_2966;
	R2389[146] = (char *(*)()) F663_2966;
	R2389[147] = (char *(*)()) F664_2966;
	R2389[148] = (char *(*)()) F665_2966;
	R2389[149] = (char *(*)()) F666_2966;
	R2389[150] = (char *(*)()) F667_2966;
	R2389[151] = (char *(*)()) F668_2966;
	R2389[152] = (char *(*)()) F669_2966;
	R2389[153] = (char *(*)()) F670_2966;
	R2389[154] = (char *(*)()) F671_2966;
	R2389[155] = (char *(*)()) F672_2966;
	R2389[156] = (char *(*)()) F673_2966;
	R2389[221] = (char *(*)()) F738_4944;
	R2389[300] = (char *(*)()) F816_6153;
	{long i; for (i = 302; i < 305; i++) R2389[i] = (char *(*)()) F816_6153;}
	{long i; for (i = 306; i < 308; i++) R2389[i] = (char *(*)()) F816_6153;}
}

char *(*R2390[15])();
void R2390_init () {
	R2390[0] = (char *(*)()) F659_2949;
	R2390[1] = (char *(*)()) F660_2949;
	R2390[2] = (char *(*)()) F661_2949;
	R2390[3] = (char *(*)()) F662_2949;
	R2390[4] = (char *(*)()) F663_2949;
	R2390[5] = (char *(*)()) F664_2949;
	R2390[6] = (char *(*)()) F665_2949;
	R2390[7] = (char *(*)()) F666_2949;
	R2390[8] = (char *(*)()) F667_2949;
	R2390[9] = (char *(*)()) F668_2949;
	R2390[10] = (char *(*)()) F669_2949;
	R2390[11] = (char *(*)()) F670_2949;
	R2390[12] = (char *(*)()) F671_2949;
	R2390[13] = (char *(*)()) F672_2949;
	R2390[14] = (char *(*)()) F673_2949;
}

char *(*R2391[15])();
void R2391_init () {
	R2391[0] = (char *(*)()) F659_2950;
	R2391[1] = (char *(*)()) F660_2950_2391;
	R2391[2] = (char *(*)()) F661_2950_2391;
	R2391[3] = (char *(*)()) F662_2950_2391;
	R2391[4] = (char *(*)()) F663_2950_2391;
	R2391[5] = (char *(*)()) F664_2950_2391;
	R2391[6] = (char *(*)()) F665_2950_2391;
	R2391[7] = (char *(*)()) F666_2950_2391;
	R2391[8] = (char *(*)()) F667_2950_2391;
	R2391[9] = (char *(*)()) F668_2950_2391;
	R2391[10] = (char *(*)()) F669_2950_2391;
	R2391[11] = (char *(*)()) F670_2950_2391;
	R2391[12] = (char *(*)()) F671_2950_2391;
	R2391[13] = (char *(*)()) F672_2950_2391;
	R2391[14] = (char *(*)()) F673_2950_2391;
}
static void F660_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F660_2950(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F661_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F661_2950(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F662_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F662_2950(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F663_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F663_2950(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F664_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F664_2950(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F665_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F665_2950(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F666_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F666_2950(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F667_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F667_2950(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F668_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F668_2950(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F669_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F669_2950(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F670_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F670_2950(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F671_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F671_2950(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F672_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F672_2950(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F673_2950_2391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F673_2950(Current, *(EIF_REAL_32 *)arg1, arg2);
}

char *(*R2393[15])();
void R2393_init () {
	R2393[0] = (char *(*)()) F659_2953;
	R2393[1] = (char *(*)()) F660_2953_2393;
	R2393[2] = (char *(*)()) F661_2953_2393;
	R2393[3] = (char *(*)()) F662_2953_2393;
	R2393[4] = (char *(*)()) F663_2953_2393;
	R2393[5] = (char *(*)()) F664_2953_2393;
	R2393[6] = (char *(*)()) F665_2953_2393;
	R2393[7] = (char *(*)()) F666_2953_2393;
	R2393[8] = (char *(*)()) F667_2953_2393;
	R2393[9] = (char *(*)()) F668_2953_2393;
	R2393[10] = (char *(*)()) F669_2953_2393;
	R2393[11] = (char *(*)()) F670_2953_2393;
	R2393[12] = (char *(*)()) F671_2953_2393;
	R2393[13] = (char *(*)()) F672_2953_2393;
	R2393[14] = (char *(*)()) F673_2953_2393;
}
static EIF_REFERENCE F660_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F660_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F661_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F661_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F662_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F662_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F663_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F663_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F664_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F664_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F665_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F665_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F666_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F666_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F667_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F667_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F668_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F668_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F669_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F669_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F670_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F670_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F671_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F671_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F672_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F672_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F673_2953_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F673_2953(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}

char *(*R2400[15])();
void R2400_init () {
	R2400[0] = (char *(*)()) F659_2961;
	R2400[1] = (char *(*)()) F660_2961;
	R2400[2] = (char *(*)()) F661_2961;
	R2400[3] = (char *(*)()) F662_2961;
	R2400[4] = (char *(*)()) F663_2961;
	R2400[5] = (char *(*)()) F664_2961;
	R2400[6] = (char *(*)()) F665_2961;
	R2400[7] = (char *(*)()) F666_2961;
	R2400[8] = (char *(*)()) F667_2961;
	R2400[9] = (char *(*)()) F668_2961;
	R2400[10] = (char *(*)()) F669_2961;
	R2400[11] = (char *(*)()) F670_2961;
	R2400[12] = (char *(*)()) F671_2961;
	R2400[13] = (char *(*)()) F672_2961;
	R2400[14] = (char *(*)()) F673_2961;
}

char *(*R2402[15])();
void R2402_init () {
	R2402[0] = (char *(*)()) F659_2965;
	R2402[1] = (char *(*)()) F660_2965;
	R2402[2] = (char *(*)()) F661_2965;
	R2402[3] = (char *(*)()) F662_2965;
	R2402[4] = (char *(*)()) F663_2965;
	R2402[5] = (char *(*)()) F664_2965;
	R2402[6] = (char *(*)()) F665_2965;
	R2402[7] = (char *(*)()) F666_2965;
	R2402[8] = (char *(*)()) F667_2965;
	R2402[9] = (char *(*)()) F668_2965;
	R2402[10] = (char *(*)()) F669_2965;
	R2402[11] = (char *(*)()) F670_2965;
	R2402[12] = (char *(*)()) F671_2965;
	R2402[13] = (char *(*)()) F672_2965;
	R2402[14] = (char *(*)()) F673_2965;
}

char *(*R2403[15])();
void R2403_init () {
	R2403[0] = (char *(*)()) F659_2967;
	R2403[1] = (char *(*)()) F660_2967_2403;
	R2403[2] = (char *(*)()) F661_2967_2403;
	R2403[3] = (char *(*)()) F662_2967_2403;
	R2403[4] = (char *(*)()) F663_2967_2403;
	R2403[5] = (char *(*)()) F664_2967_2403;
	R2403[6] = (char *(*)()) F665_2967_2403;
	R2403[7] = (char *(*)()) F666_2967_2403;
	R2403[8] = (char *(*)()) F667_2967_2403;
	R2403[9] = (char *(*)()) F668_2967_2403;
	R2403[10] = (char *(*)()) F669_2967_2403;
	R2403[11] = (char *(*)()) F670_2967_2403;
	R2403[12] = (char *(*)()) F671_2967_2403;
	R2403[13] = (char *(*)()) F672_2967_2403;
	R2403[14] = (char *(*)()) F673_2967_2403;
}
static void F660_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F660_2967(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F661_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F661_2967(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F662_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F662_2967(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F663_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F663_2967(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F664_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F664_2967(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F665_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F665_2967(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F666_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F666_2967(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F667_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F667_2967(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F668_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F668_2967(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F669_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F669_2967(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F670_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F670_2967(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F671_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F671_2967(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F672_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F672_2967(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F673_2967_2403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F673_2967(Current, *(EIF_REAL_32 *)arg1, arg2);
}

char *(*R2404[15])();
void R2404_init () {
	R2404[0] = (char *(*)()) F659_2968;
	R2404[1] = (char *(*)()) F660_2968_2404;
	R2404[2] = (char *(*)()) F661_2968_2404;
	R2404[3] = (char *(*)()) F662_2968_2404;
	R2404[4] = (char *(*)()) F663_2968_2404;
	R2404[5] = (char *(*)()) F664_2968_2404;
	R2404[6] = (char *(*)()) F665_2968_2404;
	R2404[7] = (char *(*)()) F666_2968_2404;
	R2404[8] = (char *(*)()) F667_2968_2404;
	R2404[9] = (char *(*)()) F668_2968_2404;
	R2404[10] = (char *(*)()) F669_2968_2404;
	R2404[11] = (char *(*)()) F670_2968_2404;
	R2404[12] = (char *(*)()) F671_2968_2404;
	R2404[13] = (char *(*)()) F672_2968_2404;
	R2404[14] = (char *(*)()) F673_2968_2404;
}
static void F660_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F660_2968(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F661_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F661_2968(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F662_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F662_2968(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F663_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F663_2968(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F664_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F664_2968(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F665_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F665_2968(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F666_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F666_2968(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F667_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F667_2968(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F668_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F668_2968(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F669_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F669_2968(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F670_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F670_2968(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F671_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F671_2968(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F672_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F672_2968(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F673_2968_2404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F673_2968(Current, *(EIF_REAL_32 *)arg1, arg2);
}

char *(*R2405[15])();
void R2405_init () {
	R2405[0] = (char *(*)()) F659_2969;
	R2405[1] = (char *(*)()) F660_2969_2405;
	R2405[2] = (char *(*)()) F661_2969_2405;
	R2405[3] = (char *(*)()) F662_2969_2405;
	R2405[4] = (char *(*)()) F663_2969_2405;
	R2405[5] = (char *(*)()) F664_2969_2405;
	R2405[6] = (char *(*)()) F665_2969_2405;
	R2405[7] = (char *(*)()) F666_2969_2405;
	R2405[8] = (char *(*)()) F667_2969_2405;
	R2405[9] = (char *(*)()) F668_2969_2405;
	R2405[10] = (char *(*)()) F669_2969_2405;
	R2405[11] = (char *(*)()) F670_2969_2405;
	R2405[12] = (char *(*)()) F671_2969_2405;
	R2405[13] = (char *(*)()) F672_2969_2405;
	R2405[14] = (char *(*)()) F673_2969_2405;
}
static void F660_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F660_2969(Current, *(EIF_POINTER *)arg1);
}
static void F661_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F661_2969(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F662_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F662_2969(Current, *(EIF_REAL_64 *)arg1);
}
static void F663_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F663_2969(Current, *(EIF_BOOLEAN *)arg1);
}
static void F664_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F664_2969(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F665_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F665_2969(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F666_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F666_2969(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F667_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F667_2969(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F668_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F668_2969(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F669_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F669_2969(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F670_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F670_2969(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F671_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F671_2969(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F672_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F672_2969(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F673_2969_2405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F673_2969(Current, *(EIF_REAL_32 *)arg1);
}

char *(*R2407[15])();
void R2407_init () {
	R2407[0] = (char *(*)()) F659_2971;
	R2407[1] = (char *(*)()) F660_2971_2407;
	R2407[2] = (char *(*)()) F661_2971_2407;
	R2407[3] = (char *(*)()) F662_2971_2407;
	R2407[4] = (char *(*)()) F663_2971_2407;
	R2407[5] = (char *(*)()) F664_2971_2407;
	R2407[6] = (char *(*)()) F665_2971_2407;
	R2407[7] = (char *(*)()) F666_2971_2407;
	R2407[8] = (char *(*)()) F667_2971_2407;
	R2407[9] = (char *(*)()) F668_2971_2407;
	R2407[10] = (char *(*)()) F669_2971_2407;
	R2407[11] = (char *(*)()) F670_2971_2407;
	R2407[12] = (char *(*)()) F671_2971_2407;
	R2407[13] = (char *(*)()) F672_2971_2407;
	R2407[14] = (char *(*)()) F673_2971_2407;
}
static void F660_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F660_2971(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F661_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F661_2971(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F662_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F662_2971(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F663_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F663_2971(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F664_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F664_2971(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F665_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F665_2971(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F666_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F666_2971(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F667_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F667_2971(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F668_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F668_2971(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F669_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F669_2971(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F670_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F670_2971(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F671_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F671_2971(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F672_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F672_2971(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F673_2971_2407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F673_2971(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}

char *(*R2410[15])();
void R2410_init () {
	R2410[0] = (char *(*)()) F659_2974;
	R2410[1] = (char *(*)()) F660_2974;
	R2410[2] = (char *(*)()) F661_2974;
	R2410[3] = (char *(*)()) F662_2974;
	R2410[4] = (char *(*)()) F663_2974;
	R2410[5] = (char *(*)()) F664_2974;
	R2410[6] = (char *(*)()) F665_2974;
	R2410[7] = (char *(*)()) F666_2974;
	R2410[8] = (char *(*)()) F667_2974;
	R2410[9] = (char *(*)()) F668_2974;
	R2410[10] = (char *(*)()) F669_2974;
	R2410[11] = (char *(*)()) F670_2974;
	R2410[12] = (char *(*)()) F671_2974;
	R2410[13] = (char *(*)()) F672_2974;
	R2410[14] = (char *(*)()) F673_2974;
}

char *(*R2411[15])();
void R2411_init () {
	R2411[0] = (char *(*)()) F659_2975;
	R2411[1] = (char *(*)()) F660_2975;
	R2411[2] = (char *(*)()) F661_2975;
	R2411[3] = (char *(*)()) F662_2975;
	R2411[4] = (char *(*)()) F663_2975;
	R2411[5] = (char *(*)()) F664_2975;
	R2411[6] = (char *(*)()) F665_2975;
	R2411[7] = (char *(*)()) F666_2975;
	R2411[8] = (char *(*)()) F667_2975;
	R2411[9] = (char *(*)()) F668_2975;
	R2411[10] = (char *(*)()) F669_2975;
	R2411[11] = (char *(*)()) F670_2975;
	R2411[12] = (char *(*)()) F671_2975;
	R2411[13] = (char *(*)()) F672_2975;
	R2411[14] = (char *(*)()) F673_2975;
}

char *(*R2412[15])();
void R2412_init () {
	R2412[0] = (char *(*)()) F659_2976;
	R2412[1] = (char *(*)()) F660_2976;
	R2412[2] = (char *(*)()) F661_2976;
	R2412[3] = (char *(*)()) F662_2976;
	R2412[4] = (char *(*)()) F663_2976;
	R2412[5] = (char *(*)()) F664_2976;
	R2412[6] = (char *(*)()) F665_2976;
	R2412[7] = (char *(*)()) F666_2976;
	R2412[8] = (char *(*)()) F667_2976;
	R2412[9] = (char *(*)()) F668_2976;
	R2412[10] = (char *(*)()) F669_2976;
	R2412[11] = (char *(*)()) F670_2976;
	R2412[12] = (char *(*)()) F671_2976;
	R2412[13] = (char *(*)()) F672_2976;
	R2412[14] = (char *(*)()) F673_2976;
}

char *(*R2413[15])();
void R2413_init () {
	R2413[0] = (char *(*)()) F659_2977;
	R2413[1] = (char *(*)()) F660_2977;
	R2413[2] = (char *(*)()) F661_2977;
	R2413[3] = (char *(*)()) F662_2977;
	R2413[4] = (char *(*)()) F663_2977;
	R2413[5] = (char *(*)()) F664_2977;
	R2413[6] = (char *(*)()) F665_2977;
	R2413[7] = (char *(*)()) F666_2977;
	R2413[8] = (char *(*)()) F667_2977;
	R2413[9] = (char *(*)()) F668_2977;
	R2413[10] = (char *(*)()) F669_2977;
	R2413[11] = (char *(*)()) F670_2977;
	R2413[12] = (char *(*)()) F671_2977;
	R2413[13] = (char *(*)()) F672_2977;
	R2413[14] = (char *(*)()) F673_2977;
}

char *(*R2414[15])();
void R2414_init () {
	R2414[0] = (char *(*)()) F659_2978;
	R2414[1] = (char *(*)()) F660_2978;
	R2414[2] = (char *(*)()) F661_2978;
	R2414[3] = (char *(*)()) F662_2978;
	R2414[4] = (char *(*)()) F663_2978;
	R2414[5] = (char *(*)()) F664_2978;
	R2414[6] = (char *(*)()) F665_2978;
	R2414[7] = (char *(*)()) F666_2978;
	R2414[8] = (char *(*)()) F667_2978;
	R2414[9] = (char *(*)()) F668_2978;
	R2414[10] = (char *(*)()) F669_2978;
	R2414[11] = (char *(*)()) F670_2978;
	R2414[12] = (char *(*)()) F671_2978;
	R2414[13] = (char *(*)()) F672_2978;
	R2414[14] = (char *(*)()) F673_2978;
}

char *(*R2417[15])();
void R2417_init () {
	R2417[0] = (char *(*)()) F659_2981;
	R2417[1] = (char *(*)()) F660_2981;
	R2417[2] = (char *(*)()) F661_2981;
	R2417[3] = (char *(*)()) F662_2981;
	R2417[4] = (char *(*)()) F663_2981;
	R2417[5] = (char *(*)()) F664_2981;
	R2417[6] = (char *(*)()) F665_2981;
	R2417[7] = (char *(*)()) F666_2981;
	R2417[8] = (char *(*)()) F667_2981;
	R2417[9] = (char *(*)()) F668_2981;
	R2417[10] = (char *(*)()) F669_2981;
	R2417[11] = (char *(*)()) F670_2981;
	R2417[12] = (char *(*)()) F671_2981;
	R2417[13] = (char *(*)()) F672_2981;
	R2417[14] = (char *(*)()) F673_2981;
}

char *(*R2420[15])();
void R2420_init () {
	R2420[0] = (char *(*)()) F659_2984;
	R2420[1] = (char *(*)()) F660_2984;
	R2420[2] = (char *(*)()) F661_2984;
	R2420[3] = (char *(*)()) F662_2984;
	R2420[4] = (char *(*)()) F663_2984;
	R2420[5] = (char *(*)()) F664_2984;
	R2420[6] = (char *(*)()) F665_2984;
	R2420[7] = (char *(*)()) F666_2984;
	R2420[8] = (char *(*)()) F667_2984;
	R2420[9] = (char *(*)()) F668_2984;
	R2420[10] = (char *(*)()) F669_2984;
	R2420[11] = (char *(*)()) F670_2984;
	R2420[12] = (char *(*)()) F671_2984;
	R2420[13] = (char *(*)()) F672_2984;
	R2420[14] = (char *(*)()) F673_2984;
}

char *(*R2421[15])();
void R2421_init () {
	R2421[0] = (char *(*)()) F659_2985;
	R2421[1] = (char *(*)()) F660_2985_2421;
	R2421[2] = (char *(*)()) F661_2985_2421;
	R2421[3] = (char *(*)()) F662_2985_2421;
	R2421[4] = (char *(*)()) F663_2985_2421;
	R2421[5] = (char *(*)()) F664_2985_2421;
	R2421[6] = (char *(*)()) F665_2985_2421;
	R2421[7] = (char *(*)()) F666_2985_2421;
	R2421[8] = (char *(*)()) F667_2985_2421;
	R2421[9] = (char *(*)()) F668_2985_2421;
	R2421[10] = (char *(*)()) F669_2985_2421;
	R2421[11] = (char *(*)()) F670_2985_2421;
	R2421[12] = (char *(*)()) F671_2985_2421;
	R2421[13] = (char *(*)()) F672_2985_2421;
	R2421[14] = (char *(*)()) F673_2985_2421;
}
static EIF_REFERENCE F660_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F660_2985(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_REFERENCE F661_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F661_2985(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_REFERENCE F662_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F662_2985(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F663_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F663_2985(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_REFERENCE F664_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F664_2985(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F665_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F665_2985(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F666_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F666_2985(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_REFERENCE F667_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F667_2985(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_REFERENCE F668_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F668_2985(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_REFERENCE F669_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F669_2985(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_REFERENCE F670_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F670_2985(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_REFERENCE F671_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F671_2985(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_REFERENCE F672_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F672_2985(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_REFERENCE F673_2985_2421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F673_2985(Current, *(EIF_REAL_32 *)arg1, arg2);
}

char *(*R2423[15])();
void R2423_init () {
	R2423[0] = (char *(*)()) F659_2987;
	R2423[1] = (char *(*)()) F660_2987;
	R2423[2] = (char *(*)()) F661_2987;
	R2423[3] = (char *(*)()) F662_2987;
	R2423[4] = (char *(*)()) F663_2987;
	R2423[5] = (char *(*)()) F664_2987;
	R2423[6] = (char *(*)()) F665_2987;
	R2423[7] = (char *(*)()) F666_2987;
	R2423[8] = (char *(*)()) F667_2987;
	R2423[9] = (char *(*)()) F668_2987;
	R2423[10] = (char *(*)()) F669_2987;
	R2423[11] = (char *(*)()) F670_2987;
	R2423[12] = (char *(*)()) F671_2987;
	R2423[13] = (char *(*)()) F672_2987;
	R2423[14] = (char *(*)()) F673_2987;
}

char *(*R2425[15])();
void R2425_init () {
	R2425[0] = (char *(*)()) F659_2989;
	R2425[1] = (char *(*)()) F660_2989;
	R2425[2] = (char *(*)()) F661_2989;
	R2425[3] = (char *(*)()) F662_2989;
	R2425[4] = (char *(*)()) F663_2989;
	R2425[5] = (char *(*)()) F664_2989;
	R2425[6] = (char *(*)()) F665_2989;
	R2425[7] = (char *(*)()) F666_2989;
	R2425[8] = (char *(*)()) F667_2989;
	R2425[9] = (char *(*)()) F668_2989;
	R2425[10] = (char *(*)()) F669_2989;
	R2425[11] = (char *(*)()) F670_2989;
	R2425[12] = (char *(*)()) F671_2989;
	R2425[13] = (char *(*)()) F672_2989;
	R2425[14] = (char *(*)()) F673_2989;
}

char *(*R2432[15])();
void R2432_init () {
	R2432[0] = (char *(*)()) F659_2997;
	R2432[1] = (char *(*)()) F660_2997;
	R2432[2] = (char *(*)()) F661_2997;
	R2432[3] = (char *(*)()) F662_2997;
	R2432[4] = (char *(*)()) F663_2997;
	R2432[5] = (char *(*)()) F664_2997;
	R2432[6] = (char *(*)()) F665_2997;
	R2432[7] = (char *(*)()) F666_2997;
	R2432[8] = (char *(*)()) F667_2997;
	R2432[9] = (char *(*)()) F668_2997;
	R2432[10] = (char *(*)()) F669_2997;
	R2432[11] = (char *(*)()) F670_2997;
	R2432[12] = (char *(*)()) F671_2997;
	R2432[13] = (char *(*)()) F672_2997;
	R2432[14] = (char *(*)()) F673_2997;
}

char *(*R2462[138])();
void R2462_init () {
	R2462[0] = (char *(*)()) F518_3064;
	R2462[1] = (char *(*)()) F519_3064;
	R2462[2] = (char *(*)()) F520_3064;
	R2462[3] = (char *(*)()) F521_3064;
	R2462[4] = (char *(*)()) F522_3064;
	R2462[5] = (char *(*)()) F523_3064;
	R2462[6] = (char *(*)()) F524_3064;
	R2462[7] = (char *(*)()) F525_3064;
	R2462[8] = (char *(*)()) F526_3064;
	R2462[9] = (char *(*)()) F527_3064;
	R2462[10] = (char *(*)()) F528_3064;
	R2462[11] = (char *(*)()) F529_3064;
	R2462[12] = (char *(*)()) F530_3064;
	R2462[13] = (char *(*)()) F531_3064;
	R2462[14] = (char *(*)()) F532_3064;
	R2462[15] = (char *(*)()) F518_3064;
	R2462[16] = (char *(*)()) F519_3064;
	R2462[17] = (char *(*)()) F520_3064;
	R2462[18] = (char *(*)()) F521_3064;
	R2462[19] = (char *(*)()) F522_3064;
	R2462[20] = (char *(*)()) F523_3064;
	R2462[21] = (char *(*)()) F524_3064;
	R2462[22] = (char *(*)()) F525_3064;
	R2462[23] = (char *(*)()) F526_3064;
	R2462[24] = (char *(*)()) F527_3064;
	R2462[25] = (char *(*)()) F528_3064;
	R2462[26] = (char *(*)()) F529_3064;
	R2462[27] = (char *(*)()) F530_3064;
	R2462[28] = (char *(*)()) F531_3064;
	R2462[29] = (char *(*)()) F532_3064;
	R2462[30] = (char *(*)()) F518_3064;
	R2462[31] = (char *(*)()) F519_3064;
	R2462[32] = (char *(*)()) F520_3064;
	R2462[33] = (char *(*)()) F521_3064;
	R2462[34] = (char *(*)()) F522_3064;
	R2462[35] = (char *(*)()) F523_3064;
	R2462[36] = (char *(*)()) F524_3064;
	R2462[37] = (char *(*)()) F525_3064;
	R2462[38] = (char *(*)()) F526_3064;
	R2462[39] = (char *(*)()) F527_3064;
	R2462[40] = (char *(*)()) F528_3064;
	R2462[41] = (char *(*)()) F529_3064;
	R2462[42] = (char *(*)()) F530_3064;
	R2462[43] = (char *(*)()) F531_3064;
	R2462[44] = (char *(*)()) F532_3064;
	R2462[45] = (char *(*)()) F518_3064;
	R2462[46] = (char *(*)()) F519_3064;
	R2462[47] = (char *(*)()) F520_3064;
	R2462[48] = (char *(*)()) F521_3064;
	R2462[49] = (char *(*)()) F522_3064;
	R2462[50] = (char *(*)()) F523_3064;
	R2462[51] = (char *(*)()) F524_3064;
	R2462[52] = (char *(*)()) F525_3064;
	R2462[53] = (char *(*)()) F526_3064;
	R2462[54] = (char *(*)()) F527_3064;
	R2462[55] = (char *(*)()) F528_3064;
	R2462[56] = (char *(*)()) F529_3064;
	R2462[57] = (char *(*)()) F530_3064;
	R2462[58] = (char *(*)()) F531_3064;
	R2462[59] = (char *(*)()) F532_3064;
	R2462[60] = (char *(*)()) F578_3334;
	R2462[61] = (char *(*)()) F579_3334;
	R2462[62] = (char *(*)()) F580_3334;
	R2462[63] = (char *(*)()) F579_3334;
	R2462[64] = (char *(*)()) F580_3334;
	R2462[65] = (char *(*)()) F578_3334;
	R2462[118] = (char *(*)()) F636_4700;
	R2462[119] = (char *(*)()) F637_4700;
	R2462[120] = (char *(*)()) F638_4700;
	R2462[121] = (char *(*)()) F639_4700;
	R2462[122] = (char *(*)()) F640_4700;
	R2462[123] = (char *(*)()) F641_4700;
	R2462[124] = (char *(*)()) F642_4700;
	R2462[125] = (char *(*)()) F643_4700;
	R2462[126] = (char *(*)()) F644_4700;
	R2462[127] = (char *(*)()) F645_4700;
	R2462[128] = (char *(*)()) F646_4700;
	R2462[129] = (char *(*)()) F647_4700;
	R2462[130] = (char *(*)()) F648_4700;
	R2462[131] = (char *(*)()) F649_4700;
	R2462[132] = (char *(*)()) F650_4700;
	R2462[133] = (char *(*)()) F636_4700;
	R2462[134] = (char *(*)()) F640_4700;
	R2462[135] = (char *(*)()) F638_4700;
	{long i; for (i = 136; i < 138; i++) R2462[i] = (char *(*)()) F636_4700;}
}

char *(*R2463[138])();
void R2463_init () {
	R2463[0] = (char *(*)()) F518_3065;
	R2463[1] = (char *(*)()) F519_3065;
	R2463[2] = (char *(*)()) F520_3065;
	R2463[3] = (char *(*)()) F521_3065;
	R2463[4] = (char *(*)()) F522_3065;
	R2463[5] = (char *(*)()) F523_3065;
	R2463[6] = (char *(*)()) F524_3065;
	R2463[7] = (char *(*)()) F525_3065;
	R2463[8] = (char *(*)()) F526_3065;
	R2463[9] = (char *(*)()) F527_3065;
	R2463[10] = (char *(*)()) F528_3065;
	R2463[11] = (char *(*)()) F529_3065;
	R2463[12] = (char *(*)()) F530_3065;
	R2463[13] = (char *(*)()) F531_3065;
	R2463[14] = (char *(*)()) F532_3065;
	R2463[15] = (char *(*)()) F518_3065;
	R2463[16] = (char *(*)()) F519_3065;
	R2463[17] = (char *(*)()) F520_3065;
	R2463[18] = (char *(*)()) F521_3065;
	R2463[19] = (char *(*)()) F522_3065;
	R2463[20] = (char *(*)()) F523_3065;
	R2463[21] = (char *(*)()) F524_3065;
	R2463[22] = (char *(*)()) F525_3065;
	R2463[23] = (char *(*)()) F526_3065;
	R2463[24] = (char *(*)()) F527_3065;
	R2463[25] = (char *(*)()) F528_3065;
	R2463[26] = (char *(*)()) F529_3065;
	R2463[27] = (char *(*)()) F530_3065;
	R2463[28] = (char *(*)()) F531_3065;
	R2463[29] = (char *(*)()) F532_3065;
	R2463[30] = (char *(*)()) F518_3065;
	R2463[31] = (char *(*)()) F519_3065;
	R2463[32] = (char *(*)()) F520_3065;
	R2463[33] = (char *(*)()) F521_3065;
	R2463[34] = (char *(*)()) F522_3065;
	R2463[35] = (char *(*)()) F523_3065;
	R2463[36] = (char *(*)()) F524_3065;
	R2463[37] = (char *(*)()) F525_3065;
	R2463[38] = (char *(*)()) F526_3065;
	R2463[39] = (char *(*)()) F527_3065;
	R2463[40] = (char *(*)()) F528_3065;
	R2463[41] = (char *(*)()) F529_3065;
	R2463[42] = (char *(*)()) F530_3065;
	R2463[43] = (char *(*)()) F531_3065;
	R2463[44] = (char *(*)()) F532_3065;
	R2463[45] = (char *(*)()) F518_3065;
	R2463[46] = (char *(*)()) F519_3065;
	R2463[47] = (char *(*)()) F520_3065;
	R2463[48] = (char *(*)()) F521_3065;
	R2463[49] = (char *(*)()) F522_3065;
	R2463[50] = (char *(*)()) F523_3065;
	R2463[51] = (char *(*)()) F524_3065;
	R2463[52] = (char *(*)()) F525_3065;
	R2463[53] = (char *(*)()) F526_3065;
	R2463[54] = (char *(*)()) F527_3065;
	R2463[55] = (char *(*)()) F528_3065;
	R2463[56] = (char *(*)()) F529_3065;
	R2463[57] = (char *(*)()) F530_3065;
	R2463[58] = (char *(*)()) F531_3065;
	R2463[59] = (char *(*)()) F532_3065;
	R2463[60] = (char *(*)()) F578_3335;
	R2463[61] = (char *(*)()) F579_3335;
	R2463[62] = (char *(*)()) F580_3335;
	R2463[63] = (char *(*)()) F579_3335;
	R2463[64] = (char *(*)()) F580_3335;
	R2463[65] = (char *(*)()) F578_3335;
	R2463[118] = (char *(*)()) F636_4705;
	R2463[119] = (char *(*)()) F637_4705;
	R2463[120] = (char *(*)()) F638_4705;
	R2463[121] = (char *(*)()) F639_4705;
	R2463[122] = (char *(*)()) F640_4705;
	R2463[123] = (char *(*)()) F641_4705;
	R2463[124] = (char *(*)()) F642_4705;
	R2463[125] = (char *(*)()) F643_4705;
	R2463[126] = (char *(*)()) F644_4705;
	R2463[127] = (char *(*)()) F645_4705;
	R2463[128] = (char *(*)()) F646_4705;
	R2463[129] = (char *(*)()) F647_4705;
	R2463[130] = (char *(*)()) F648_4705;
	R2463[131] = (char *(*)()) F649_4705;
	R2463[132] = (char *(*)()) F650_4705;
	R2463[133] = (char *(*)()) F636_4705;
	R2463[134] = (char *(*)()) F640_4705;
	R2463[135] = (char *(*)()) F638_4705;
	{long i; for (i = 136; i < 138; i++) R2463[i] = (char *(*)()) F636_4705;}
}

char *(*R2464[6])();
void R2464_init () {
	R2464[0] = (char *(*)()) F578_3325;
	R2464[1] = (char *(*)()) F579_3325;
	R2464[2] = (char *(*)()) F580_3325;
	R2464[3] = (char *(*)()) F579_3325;
	R2464[4] = (char *(*)()) F580_3325;
	R2464[5] = (char *(*)()) F578_3325;
}

char *(*R2465[6])();
void R2465_init () {
	R2465[0] = (char *(*)()) F578_3326;
	R2465[1] = (char *(*)()) F579_3326;
	R2465[2] = (char *(*)()) F580_3326;
	R2465[3] = (char *(*)()) F579_3326;
	R2465[4] = (char *(*)()) F580_3326;
	R2465[5] = (char *(*)()) F578_3326;
}

char *(*R2496[6])();
void R2496_init () {
	R2496[0] = (char *(*)()) F578_3346;
	R2496[1] = (char *(*)()) F579_3346;
	R2496[2] = (char *(*)()) F580_3346;
	R2496[3] = (char *(*)()) F579_3346;
	R2496[4] = (char *(*)()) F580_3346;
	R2496[5] = (char *(*)()) F578_3346;
}

char *(*R2535[93])();
void R2535_init () {
	R2535[0] = (char *(*)()) F533_3126;
	R2535[1] = (char *(*)()) F534_3126;
	R2535[2] = (char *(*)()) F535_3126;
	R2535[3] = (char *(*)()) F536_3126;
	R2535[4] = (char *(*)()) F537_3126;
	R2535[5] = (char *(*)()) F538_3126;
	R2535[6] = (char *(*)()) F539_3126;
	R2535[7] = (char *(*)()) F540_3126;
	R2535[8] = (char *(*)()) F541_3126;
	R2535[9] = (char *(*)()) F542_3126;
	R2535[10] = (char *(*)()) F543_3126;
	R2535[11] = (char *(*)()) F544_3126;
	R2535[12] = (char *(*)()) F545_3126;
	R2535[13] = (char *(*)()) F546_3126;
	R2535[14] = (char *(*)()) F547_3126;
	R2535[15] = (char *(*)()) F533_3126;
	R2535[16] = (char *(*)()) F537_3126;
	R2535[17] = (char *(*)()) F535_3126;
	R2535[18] = (char *(*)()) F537_3126;
	R2535[19] = (char *(*)()) F535_3126;
	R2535[20] = (char *(*)()) F533_3126;
	R2535[73] = (char *(*)()) F533_3126;
	R2535[74] = (char *(*)()) F534_3126;
	R2535[75] = (char *(*)()) F535_3126;
	R2535[76] = (char *(*)()) F536_3126;
	R2535[77] = (char *(*)()) F537_3126;
	R2535[78] = (char *(*)()) F538_3126;
	R2535[79] = (char *(*)()) F539_3126;
	R2535[80] = (char *(*)()) F540_3126;
	R2535[81] = (char *(*)()) F541_3126;
	R2535[82] = (char *(*)()) F542_3126;
	R2535[83] = (char *(*)()) F543_3126;
	R2535[84] = (char *(*)()) F544_3126;
	R2535[85] = (char *(*)()) F545_3126;
	R2535[86] = (char *(*)()) F546_3126;
	R2535[87] = (char *(*)()) F547_3126;
	R2535[88] = (char *(*)()) F533_3126;
	R2535[89] = (char *(*)()) F537_3126;
	R2535[90] = (char *(*)()) F535_3126;
	{long i; for (i = 91; i < 93; i++) R2535[i] = (char *(*)()) F533_3126;}
}

char *(*R2547[6])();
void R2547_init () {
	R2547[0] = (char *(*)()) F578_3350;
	R2547[1] = (char *(*)()) F579_3350_2547;
	R2547[2] = (char *(*)()) F580_3350_2547;
	R2547[3] = (char *(*)()) F579_3350_2547;
	R2547[4] = (char *(*)()) F580_3350_2547;
	R2547[5] = (char *(*)()) F578_3350;
}
static EIF_REFERENCE F579_3350_2547 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F579_3350(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F580_3350_2547 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F580_3350(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2548[6])();
void R2548_init () {
	R2548[0] = (char *(*)()) F578_3351;
	R2548[1] = (char *(*)()) F579_3351;
	R2548[2] = (char *(*)()) F580_3351;
	R2548[3] = (char *(*)()) F579_3351;
	R2548[4] = (char *(*)()) F580_3351;
	R2548[5] = (char *(*)()) F578_3351;
}

char *(*R2551[6])();
void R2551_init () {
	R2551[0] = (char *(*)()) F578_3354;
	R2551[1] = (char *(*)()) F579_3354;
	R2551[2] = (char *(*)()) F580_3354;
	R2551[3] = (char *(*)()) F579_3354;
	R2551[4] = (char *(*)()) F580_3354;
	R2551[5] = (char *(*)()) F578_3354;
}

char *(*R2552[6])();
void R2552_init () {
	R2552[0] = (char *(*)()) F578_3355;
	R2552[1] = (char *(*)()) F579_3355;
	R2552[2] = (char *(*)()) F580_3355;
	R2552[3] = (char *(*)()) F579_3355;
	R2552[4] = (char *(*)()) F580_3355;
	R2552[5] = (char *(*)()) F578_3355;
}

char *(*R2553[6])();
void R2553_init () {
	R2553[0] = (char *(*)()) F578_3356;
	R2553[1] = (char *(*)()) F579_3356;
	R2553[2] = (char *(*)()) F580_3356;
	R2553[3] = (char *(*)()) F579_3356;
	R2553[4] = (char *(*)()) F580_3356;
	R2553[5] = (char *(*)()) F578_3356;
}

char *(*R2597[238])();
void R2597_init () {
	R2597[0] = (char *(*)()) F584_3522;
	R2597[1] = (char *(*)()) F585_3522;
	R2597[2] = (char *(*)()) F586_3522;
	R2597[3] = (char *(*)()) F587_3522;
	R2597[4] = (char *(*)()) F588_3522;
	R2597[5] = (char *(*)()) F589_3522;
	R2597[6] = (char *(*)()) F590_3522;
	R2597[7] = (char *(*)()) F591_3522;
	R2597[8] = (char *(*)()) F592_3522;
	R2597[9] = (char *(*)()) F593_3522;
	R2597[10] = (char *(*)()) F594_3522;
	R2597[11] = (char *(*)()) F595_3522;
	R2597[12] = (char *(*)()) F596_3522;
	R2597[13] = (char *(*)()) F597_3522;
	R2597[14] = (char *(*)()) F598_3522;
	R2597[15] = (char *(*)()) F584_3522;
	R2597[16] = (char *(*)()) F585_3522;
	R2597[17] = (char *(*)()) F586_3522;
	R2597[18] = (char *(*)()) F587_3522;
	R2597[19] = (char *(*)()) F588_3522;
	R2597[20] = (char *(*)()) F589_3522;
	R2597[21] = (char *(*)()) F590_3522;
	R2597[22] = (char *(*)()) F591_3522;
	R2597[23] = (char *(*)()) F592_3522;
	R2597[24] = (char *(*)()) F593_3522;
	R2597[25] = (char *(*)()) F594_3522;
	R2597[26] = (char *(*)()) F595_3522;
	R2597[27] = (char *(*)()) F596_3522;
	R2597[28] = (char *(*)()) F597_3522;
	R2597[29] = (char *(*)()) F598_3522;
	{long i; for (i = 39; i < 41; i++) R2597[i] = (char *(*)()) F593_3522;}
	R2597[52] = (char *(*)()) F584_3522;
	R2597[53] = (char *(*)()) F585_3522;
	R2597[54] = (char *(*)()) F586_3522;
	R2597[55] = (char *(*)()) F587_3522;
	R2597[56] = (char *(*)()) F588_3522;
	R2597[57] = (char *(*)()) F589_3522;
	R2597[58] = (char *(*)()) F590_3522;
	R2597[59] = (char *(*)()) F591_3522;
	R2597[60] = (char *(*)()) F592_3522;
	R2597[61] = (char *(*)()) F593_3522;
	R2597[62] = (char *(*)()) F594_3522;
	R2597[63] = (char *(*)()) F595_3522;
	R2597[64] = (char *(*)()) F596_3522;
	R2597[65] = (char *(*)()) F597_3522;
	R2597[66] = (char *(*)()) F598_3522;
	R2597[67] = (char *(*)()) F584_3522;
	R2597[68] = (char *(*)()) F588_3522;
	R2597[69] = (char *(*)()) F586_3522;
	{long i; for (i = 70; i < 72; i++) R2597[i] = (char *(*)()) F584_3522;}
	R2597[235] = (char *(*)()) F591_3522;
	R2597[237] = (char *(*)()) F597_3522;
}

char *(*R2598[238])();
void R2598_init () {
	R2598[0] = (char *(*)()) F584_3523;
	R2598[1] = (char *(*)()) F585_3523_2598;
	R2598[2] = (char *(*)()) F586_3523_2598;
	R2598[3] = (char *(*)()) F587_3523_2598;
	R2598[4] = (char *(*)()) F588_3523_2598;
	R2598[5] = (char *(*)()) F589_3523_2598;
	R2598[6] = (char *(*)()) F590_3523_2598;
	R2598[7] = (char *(*)()) F591_3523_2598;
	R2598[8] = (char *(*)()) F592_3523_2598;
	R2598[9] = (char *(*)()) F593_3523_2598;
	R2598[10] = (char *(*)()) F594_3523_2598;
	R2598[11] = (char *(*)()) F595_3523_2598;
	R2598[12] = (char *(*)()) F596_3523_2598;
	R2598[13] = (char *(*)()) F597_3523_2598;
	R2598[14] = (char *(*)()) F598_3523_2598;
	R2598[15] = (char *(*)()) F584_3523;
	R2598[16] = (char *(*)()) F585_3523_2598;
	R2598[17] = (char *(*)()) F586_3523_2598;
	R2598[18] = (char *(*)()) F587_3523_2598;
	R2598[19] = (char *(*)()) F588_3523_2598;
	R2598[20] = (char *(*)()) F589_3523_2598;
	R2598[21] = (char *(*)()) F590_3523_2598;
	R2598[22] = (char *(*)()) F591_3523_2598;
	R2598[23] = (char *(*)()) F592_3523_2598;
	R2598[24] = (char *(*)()) F593_3523_2598;
	R2598[25] = (char *(*)()) F594_3523_2598;
	R2598[26] = (char *(*)()) F595_3523_2598;
	R2598[27] = (char *(*)()) F596_3523_2598;
	R2598[28] = (char *(*)()) F597_3523_2598;
	R2598[29] = (char *(*)()) F598_3523_2598;
	{long i; for (i = 39; i < 41; i++) R2598[i] = (char *(*)()) F593_3523_2598;}
	R2598[52] = (char *(*)()) F584_3523;
	R2598[53] = (char *(*)()) F585_3523_2598;
	R2598[54] = (char *(*)()) F586_3523_2598;
	R2598[55] = (char *(*)()) F587_3523_2598;
	R2598[56] = (char *(*)()) F588_3523_2598;
	R2598[57] = (char *(*)()) F589_3523_2598;
	R2598[58] = (char *(*)()) F590_3523_2598;
	R2598[59] = (char *(*)()) F591_3523_2598;
	R2598[60] = (char *(*)()) F592_3523_2598;
	R2598[61] = (char *(*)()) F593_3523_2598;
	R2598[62] = (char *(*)()) F594_3523_2598;
	R2598[63] = (char *(*)()) F595_3523_2598;
	R2598[64] = (char *(*)()) F596_3523_2598;
	R2598[65] = (char *(*)()) F597_3523_2598;
	R2598[66] = (char *(*)()) F598_3523_2598;
	R2598[67] = (char *(*)()) F584_3523;
	R2598[68] = (char *(*)()) F588_3523_2598;
	R2598[69] = (char *(*)()) F586_3523_2598;
	{long i; for (i = 70; i < 72; i++) R2598[i] = (char *(*)()) F584_3523;}
	R2598[235] = (char *(*)()) F591_3523_2598;
	R2598[237] = (char *(*)()) F597_3523_2598;
}
static void F585_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F585_3523(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F586_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F586_3523(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F587_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F587_3523(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F588_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F588_3523(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F589_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F589_3523(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F590_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F590_3523(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F591_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F591_3523(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F592_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F592_3523(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F593_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F593_3523(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F594_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F594_3523(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F595_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F595_3523(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F596_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F596_3523(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F597_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F597_3523(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F598_3523_2598 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F598_3523(Current, *(EIF_REAL_32 *)arg1, arg2);
}

char *(*R2603[238])();
void R2603_init () {
	R2603[0] = (char *(*)()) F584_3528;
	R2603[1] = (char *(*)()) F585_3528;
	R2603[2] = (char *(*)()) F586_3528;
	R2603[3] = (char *(*)()) F587_3528;
	R2603[4] = (char *(*)()) F588_3528;
	R2603[5] = (char *(*)()) F589_3528;
	R2603[6] = (char *(*)()) F590_3528;
	R2603[7] = (char *(*)()) F591_3528;
	R2603[8] = (char *(*)()) F592_3528;
	R2603[9] = (char *(*)()) F593_3528;
	R2603[10] = (char *(*)()) F594_3528;
	R2603[11] = (char *(*)()) F595_3528;
	R2603[12] = (char *(*)()) F596_3528;
	R2603[13] = (char *(*)()) F597_3528;
	R2603[14] = (char *(*)()) F598_3528;
	R2603[15] = (char *(*)()) F584_3528;
	R2603[16] = (char *(*)()) F585_3528;
	R2603[17] = (char *(*)()) F586_3528;
	R2603[18] = (char *(*)()) F587_3528;
	R2603[19] = (char *(*)()) F588_3528;
	R2603[20] = (char *(*)()) F589_3528;
	R2603[21] = (char *(*)()) F590_3528;
	R2603[22] = (char *(*)()) F591_3528;
	R2603[23] = (char *(*)()) F592_3528;
	R2603[24] = (char *(*)()) F593_3528;
	R2603[25] = (char *(*)()) F594_3528;
	R2603[26] = (char *(*)()) F595_3528;
	R2603[27] = (char *(*)()) F596_3528;
	R2603[28] = (char *(*)()) F597_3528;
	R2603[29] = (char *(*)()) F598_3528;
	{long i; for (i = 39; i < 41; i++) R2603[i] = (char *(*)()) F593_3528;}
	R2603[52] = (char *(*)()) F584_3528;
	R2603[53] = (char *(*)()) F585_3528;
	R2603[54] = (char *(*)()) F586_3528;
	R2603[55] = (char *(*)()) F587_3528;
	R2603[56] = (char *(*)()) F588_3528;
	R2603[57] = (char *(*)()) F589_3528;
	R2603[58] = (char *(*)()) F590_3528;
	R2603[59] = (char *(*)()) F591_3528;
	R2603[60] = (char *(*)()) F592_3528;
	R2603[61] = (char *(*)()) F593_3528;
	R2603[62] = (char *(*)()) F594_3528;
	R2603[63] = (char *(*)()) F595_3528;
	R2603[64] = (char *(*)()) F596_3528;
	R2603[65] = (char *(*)()) F597_3528;
	R2603[66] = (char *(*)()) F598_3528;
	R2603[67] = (char *(*)()) F584_3528;
	R2603[68] = (char *(*)()) F588_3528;
	R2603[69] = (char *(*)()) F586_3528;
	{long i; for (i = 70; i < 72; i++) R2603[i] = (char *(*)()) F584_3528;}
	R2603[235] = (char *(*)()) F591_3528;
	R2603[237] = (char *(*)()) F597_3528;
}

static EIF_TYPE_INDEX Y2604_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype30[] = {761,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype31[] = {761,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype51[] = {811,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype52[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y2604_pgtype53[] = {746,0xFFFF};
EIF_TYPE_INDEX *Y2604_gen_type [238];
EIF_TYPE_INDEX Y2604 [238];
void Y2604_init (void)
{
	egc_routines_types [2604] = Y2604;
	egc_routines_gen_types [2604] = Y2604_gen_type;
	egc_routines_offset [2604] = 583;
	Y2604_gen_type [0] = Y2604_pgtype0;
	Y2604_gen_type [1] = Y2604_pgtype1;
	Y2604_gen_type [2] = Y2604_pgtype2;
	Y2604_gen_type [3] = Y2604_pgtype3;
	Y2604_gen_type [4] = Y2604_pgtype4;
	Y2604_gen_type [5] = Y2604_pgtype5;
	Y2604_gen_type [6] = Y2604_pgtype6;
	Y2604_gen_type [7] = Y2604_pgtype7;
	Y2604_gen_type [8] = Y2604_pgtype8;
	Y2604_gen_type [9] = Y2604_pgtype9;
	Y2604_gen_type [10] = Y2604_pgtype10;
	Y2604_gen_type [11] = Y2604_pgtype11;
	Y2604_gen_type [12] = Y2604_pgtype12;
	Y2604_gen_type [13] = Y2604_pgtype13;
	Y2604_gen_type [14] = Y2604_pgtype14;
	Y2604_gen_type [15] = Y2604_pgtype15;
	Y2604_gen_type [16] = Y2604_pgtype16;
	Y2604_gen_type [17] = Y2604_pgtype17;
	Y2604_gen_type [18] = Y2604_pgtype18;
	Y2604_gen_type [19] = Y2604_pgtype19;
	Y2604_gen_type [20] = Y2604_pgtype20;
	Y2604_gen_type [21] = Y2604_pgtype21;
	Y2604_gen_type [22] = Y2604_pgtype22;
	Y2604_gen_type [23] = Y2604_pgtype23;
	Y2604_gen_type [24] = Y2604_pgtype24;
	Y2604_gen_type [25] = Y2604_pgtype25;
	Y2604_gen_type [26] = Y2604_pgtype26;
	Y2604_gen_type [27] = Y2604_pgtype27;
	Y2604_gen_type [28] = Y2604_pgtype28;
	Y2604_gen_type [29] = Y2604_pgtype29;
	Y2604_gen_type [39] = Y2604_pgtype30;
	Y2604_gen_type [40] = Y2604_pgtype31;
	Y2604_gen_type [52] = Y2604_pgtype32;
	Y2604_gen_type [53] = Y2604_pgtype33;
	Y2604_gen_type [54] = Y2604_pgtype34;
	Y2604_gen_type [55] = Y2604_pgtype35;
	Y2604_gen_type [56] = Y2604_pgtype36;
	Y2604_gen_type [57] = Y2604_pgtype37;
	Y2604_gen_type [58] = Y2604_pgtype38;
	Y2604_gen_type [59] = Y2604_pgtype39;
	Y2604_gen_type [60] = Y2604_pgtype40;
	Y2604_gen_type [61] = Y2604_pgtype41;
	Y2604_gen_type [62] = Y2604_pgtype42;
	Y2604_gen_type [63] = Y2604_pgtype43;
	Y2604_gen_type [64] = Y2604_pgtype44;
	Y2604_gen_type [65] = Y2604_pgtype45;
	Y2604_gen_type [66] = Y2604_pgtype46;
	Y2604_gen_type [67] = Y2604_pgtype47;
	Y2604_gen_type [68] = Y2604_pgtype48;
	Y2604_gen_type [69] = Y2604_pgtype49;
	Y2604_gen_type [70] = Y2604_pgtype50;
	Y2604_gen_type [71] = Y2604_pgtype51;
	Y2604_gen_type [235] = Y2604_pgtype52;
	Y2604_gen_type [237] = Y2604_pgtype53;
	{long i; for (i = 39; i < 41; i++) Y2604[i] = 761;};
	Y2604[71] = 811;
	Y2604[235] = 749;
	Y2604[237] = 746;
}

char *(*R2609[15])();
void R2609_init () {
	R2609[0] = (char *(*)()) F599_3533;
	R2609[1] = (char *(*)()) F600_3533;
	R2609[2] = (char *(*)()) F601_3533;
	R2609[3] = (char *(*)()) F602_3533;
	R2609[4] = (char *(*)()) F603_3533;
	R2609[5] = (char *(*)()) F604_3533;
	R2609[6] = (char *(*)()) F605_3533;
	R2609[7] = (char *(*)()) F606_3533;
	R2609[8] = (char *(*)()) F607_3533;
	R2609[9] = (char *(*)()) F608_3533;
	R2609[10] = (char *(*)()) F609_3533;
	R2609[11] = (char *(*)()) F610_3533;
	R2609[12] = (char *(*)()) F611_3533;
	R2609[13] = (char *(*)()) F612_3533;
	R2609[14] = (char *(*)()) F613_3533;
}

char *(*R2628[15])();
void R2628_init () {
	R2628[0] = (char *(*)()) F599_3567;
	R2628[1] = (char *(*)()) F600_3567;
	R2628[2] = (char *(*)()) F601_3567;
	R2628[3] = (char *(*)()) F602_3567;
	R2628[4] = (char *(*)()) F603_3567;
	R2628[5] = (char *(*)()) F604_3567;
	R2628[6] = (char *(*)()) F605_3567;
	R2628[7] = (char *(*)()) F606_3567;
	R2628[8] = (char *(*)()) F607_3567;
	R2628[9] = (char *(*)()) F608_3567;
	R2628[10] = (char *(*)()) F609_3567;
	R2628[11] = (char *(*)()) F610_3567;
	R2628[12] = (char *(*)()) F611_3567;
	R2628[13] = (char *(*)()) F612_3567;
	R2628[14] = (char *(*)()) F613_3567;
}

char *(*R2680[3])();
void R2680_init () {
	R2680[0] = (char *(*)()) F617_3625;
	R2680[1] = (char *(*)()) F618_3625;
	R2680[2] = (char *(*)()) F619_3625;
}

char *(*R2862[141])();
void R2862_init () {
	{long i; for (i = 0; i < 3; i++) R2862[i] = (char *(*)()) F687_4171;}
	R2862[140] = (char *(*)()) F827_6646;
}

char *(*R2875[141])();
void R2875_init () {
	{long i; for (i = 0; i < 3; i++) R2875[i] = (char *(*)()) F687_4244;}
	R2875[140] = (char *(*)()) F827_6668;
}

char *(*R2877[141])();
void R2877_init () {
	{long i; for (i = 0; i < 3; i++) R2877[i] = (char *(*)()) F687_4247;}
	R2877[140] = (char *(*)()) F827_6666;
}

char *(*R2901[141])();
void R2901_init () {
	{long i; for (i = 0; i < 3; i++) R2901[i] = (char *(*)()) F687_4275;}
	R2901[140] = (char *(*)()) F827_6663;
}

char *(*R3136[141])();
void R3136_init () {
	{long i; for (i = 0; i < 3; i++) R3136[i] = (char *(*)()) F687_4170;}
	R3136[140] = (char *(*)()) F827_6645;
}

char *(*R3219[141])();
void R3219_init () {
	R3219[0] = (char *(*)()) F687_4305;
	R3219[1] = (char *(*)()) F688_4403;
	R3219[2] = (char *(*)()) F687_4305;
	R3219[140] = (char *(*)()) F687_4305;
}

char *(*R3222[141])();
void R3222_init () {
	{long i; for (i = 0; i < 3; i++) R3222[i] = (char *(*)()) F687_4308;}
	R3222[140] = (char *(*)()) F827_6700;
}

char *(*R3296[261])();
void R3296_init () {
	R3296[0] = (char *(*)()) F625_4457;
	R3296[1] = (char *(*)()) F626_4514;
	R3296[2] = (char *(*)()) F627_8673;
	R3296[3] = (char *(*)()) F628_4581;
	R3296[4] = (char *(*)()) F629_4581;
	R3296[5] = (char *(*)()) F630_4581;
	R3296[6] = (char *(*)()) F631_4581;
	R3296[7] = (char *(*)()) F632_4581;
	R3296[8] = (char *(*)()) F628_4581;
	R3296[9] = (char *(*)()) F630_4581;
	R3296[10] = (char *(*)()) F628_4581;
	R3296[11] = (char *(*)()) F636_4729;
	R3296[12] = (char *(*)()) F637_4729;
	R3296[13] = (char *(*)()) F638_4729;
	R3296[14] = (char *(*)()) F639_4729;
	R3296[15] = (char *(*)()) F640_4729;
	R3296[16] = (char *(*)()) F641_4729;
	R3296[17] = (char *(*)()) F642_4729;
	R3296[18] = (char *(*)()) F643_4729;
	R3296[19] = (char *(*)()) F644_4729;
	R3296[20] = (char *(*)()) F645_4729;
	R3296[21] = (char *(*)()) F646_4729;
	R3296[22] = (char *(*)()) F647_4729;
	R3296[23] = (char *(*)()) F648_4729;
	R3296[24] = (char *(*)()) F649_4729;
	R3296[25] = (char *(*)()) F650_4729;
	R3296[26] = (char *(*)()) F636_4729;
	R3296[27] = (char *(*)()) F640_4729;
	R3296[28] = (char *(*)()) F638_4729;
	{long i; for (i = 29; i < 31; i++) R3296[i] = (char *(*)()) F636_4729;}
	R3296[113] = (char *(*)()) F738_5022;
	R3296[194] = (char *(*)()) F819_6391;
	R3296[196] = (char *(*)()) F821_6599;
	R3296[199] = (char *(*)()) F824_6641;
	{long i; for (i = 252; i < 254; i++) R3296[i] = (char *(*)()) F627_8673;}
	{long i; for (i = 258; i < 261; i++) R3296[i] = (char *(*)()) F627_8673;}
}

char *(*R3332[8])();
void R3332_init () {
	R3332[0] = (char *(*)()) F628_4524;
	R3332[1] = (char *(*)()) F629_4524;
	R3332[2] = (char *(*)()) F630_4524;
	R3332[3] = (char *(*)()) F631_4524;
	R3332[4] = (char *(*)()) F632_4524;
	R3332[5] = (char *(*)()) F628_4524;
	R3332[6] = (char *(*)()) F630_4524;
	R3332[7] = (char *(*)()) F628_4524;
}

char *(*R3334[8])();
void R3334_init () {
	R3334[0] = (char *(*)()) F628_4526;
	R3334[1] = (char *(*)()) F629_4526;
	R3334[2] = (char *(*)()) F630_4526;
	R3334[3] = (char *(*)()) F631_4526;
	R3334[4] = (char *(*)()) F632_4526;
	R3334[5] = (char *(*)()) F628_4526;
	R3334[6] = (char *(*)()) F630_4526;
	R3334[7] = (char *(*)()) F628_4526;
}

char *(*R3335[8])();
void R3335_init () {
	R3335[0] = (char *(*)()) F628_4527;
	R3335[1] = (char *(*)()) F629_4527;
	R3335[2] = (char *(*)()) F630_4527_3335;
	R3335[3] = (char *(*)()) F631_4527_3335;
	R3335[4] = (char *(*)()) F632_4527_3335;
	R3335[5] = (char *(*)()) F628_4527;
	R3335[6] = (char *(*)()) F630_4527_3335;
	R3335[7] = (char *(*)()) F628_4527;
}
static EIF_REFERENCE F630_4527_3335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F630_4527(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F631_4527_3335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F631_4527(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F632_4527_3335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F632_4527(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3342[8])();
void R3342_init () {
	R3342[0] = (char *(*)()) F628_4539;
	R3342[1] = (char *(*)()) F629_4539_3342;
	R3342[2] = (char *(*)()) F630_4539;
	R3342[3] = (char *(*)()) F631_4539_3342;
	R3342[4] = (char *(*)()) F632_4539_3342;
	R3342[5] = (char *(*)()) F633_4636;
	R3342[6] = (char *(*)()) F634_4636;
	R3342[7] = (char *(*)()) F628_4539;
}
static EIF_INTEGER_32 F629_4539_3342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F629_4539(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F631_4539_3342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F631_4539(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F632_4539_3342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F632_4539(Current, *(EIF_POINTER *)arg1);
}

char *(*R3344[8])();
void R3344_init () {
	R3344[0] = (char *(*)()) F628_4545;
	R3344[1] = (char *(*)()) F629_4545_3344;
	R3344[2] = (char *(*)()) F630_4545;
	R3344[3] = (char *(*)()) F631_4545_3344;
	R3344[4] = (char *(*)()) F632_4545_3344;
	R3344[5] = (char *(*)()) F633_4638;
	R3344[6] = (char *(*)()) F634_4638;
	R3344[7] = (char *(*)()) F628_4545;
}
static EIF_BOOLEAN F629_4545_3344 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F629_4545(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F631_4545_3344 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F631_4545(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F632_4545_3344 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F632_4545(Current, *(EIF_POINTER *)arg1, *(EIF_POINTER *)arg2);
}

char *(*R3350[8])();
void R3350_init () {
	R3350[0] = (char *(*)()) F628_4554;
	R3350[1] = (char *(*)()) F629_4554;
	R3350[2] = (char *(*)()) F630_4554;
	R3350[3] = (char *(*)()) F631_4554;
	R3350[4] = (char *(*)()) F632_4554;
	R3350[5] = (char *(*)()) F628_4554;
	R3350[6] = (char *(*)()) F630_4554;
	R3350[7] = (char *(*)()) F628_4554;
}

char *(*R3351[8])();
void R3351_init () {
	R3351[0] = (char *(*)()) F628_4555;
	R3351[1] = (char *(*)()) F629_4555;
	R3351[2] = (char *(*)()) F630_4555;
	R3351[3] = (char *(*)()) F631_4555;
	R3351[4] = (char *(*)()) F632_4555;
	R3351[5] = (char *(*)()) F628_4555;
	R3351[6] = (char *(*)()) F630_4555;
	R3351[7] = (char *(*)()) F628_4555;
}

char *(*R3358[8])();
void R3358_init () {
	R3358[0] = (char *(*)()) F628_4564;
	R3358[1] = (char *(*)()) F629_4564_3358;
	R3358[2] = (char *(*)()) F630_4564;
	R3358[3] = (char *(*)()) F631_4564_3358;
	R3358[4] = (char *(*)()) F632_4564_3358;
	R3358[5] = (char *(*)()) F628_4564;
	R3358[6] = (char *(*)()) F630_4564;
	R3358[7] = (char *(*)()) F628_4564;
}
static void F629_4564_3358 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F629_4564(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F631_4564_3358 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F631_4564(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F632_4564_3358 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F632_4564(Current, *(EIF_POINTER *)arg1);
}

char *(*R3360[8])();
void R3360_init () {
	R3360[0] = (char *(*)()) F628_4566;
	R3360[1] = (char *(*)()) F629_4566;
	R3360[2] = (char *(*)()) F630_4566;
	R3360[3] = (char *(*)()) F631_4566;
	R3360[4] = (char *(*)()) F632_4566;
	R3360[5] = (char *(*)()) F628_4566;
	R3360[6] = (char *(*)()) F630_4566;
	R3360[7] = (char *(*)()) F628_4566;
}

char *(*R3361[8])();
void R3361_init () {
	R3361[0] = (char *(*)()) F628_4567;
	R3361[1] = (char *(*)()) F629_4567;
	R3361[2] = (char *(*)()) F630_4567;
	R3361[3] = (char *(*)()) F631_4567;
	R3361[4] = (char *(*)()) F632_4567;
	R3361[5] = (char *(*)()) F628_4567;
	R3361[6] = (char *(*)()) F630_4567;
	R3361[7] = (char *(*)()) F628_4567;
}

char *(*R3368[8])();
void R3368_init () {
	R3368[0] = (char *(*)()) F628_4580;
	R3368[1] = (char *(*)()) F629_4580;
	R3368[2] = (char *(*)()) F630_4580;
	R3368[3] = (char *(*)()) F631_4580;
	R3368[4] = (char *(*)()) F632_4580;
	R3368[5] = (char *(*)()) F633_4640;
	R3368[6] = (char *(*)()) F634_4640;
	R3368[7] = (char *(*)()) F628_4580;
}

char *(*R3377[8])();
void R3377_init () {
	R3377[0] = (char *(*)()) F628_4590;
	R3377[1] = (char *(*)()) F629_4590;
	R3377[2] = (char *(*)()) F630_4590;
	R3377[3] = (char *(*)()) F631_4590;
	R3377[4] = (char *(*)()) F632_4590;
	R3377[5] = (char *(*)()) F628_4590;
	R3377[6] = (char *(*)()) F630_4590;
	R3377[7] = (char *(*)()) F628_4590;
}

char *(*R3378[8])();
void R3378_init () {
	R3378[0] = (char *(*)()) F628_4591;
	R3378[1] = (char *(*)()) F629_4591;
	R3378[2] = (char *(*)()) F630_4591;
	R3378[3] = (char *(*)()) F631_4591;
	R3378[4] = (char *(*)()) F632_4591;
	R3378[5] = (char *(*)()) F628_4591;
	R3378[6] = (char *(*)()) F630_4591;
	R3378[7] = (char *(*)()) F628_4591;
}

char *(*R3385[8])();
void R3385_init () {
	R3385[0] = (char *(*)()) F628_4598;
	R3385[1] = (char *(*)()) F629_4598;
	R3385[2] = (char *(*)()) F630_4598_3385;
	R3385[3] = (char *(*)()) F631_4598_3385;
	R3385[4] = (char *(*)()) F632_4598_3385;
	R3385[5] = (char *(*)()) F628_4598;
	R3385[6] = (char *(*)()) F630_4598_3385;
	R3385[7] = (char *(*)()) F628_4598;
}
static EIF_REFERENCE F630_4598_3385 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F630_4598(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F631_4598_3385 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F631_4598(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F632_4598_3385 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F632_4598(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3386[8])();
void R3386_init () {
	R3386[0] = (char *(*)()) F628_4599;
	R3386[1] = (char *(*)()) F629_4599_3386;
	R3386[2] = (char *(*)()) F630_4599;
	R3386[3] = (char *(*)()) F631_4599_3386;
	R3386[4] = (char *(*)()) F632_4599_3386;
	R3386[5] = (char *(*)()) F628_4599;
	R3386[6] = (char *(*)()) F630_4599;
	R3386[7] = (char *(*)()) F628_4599;
}
static EIF_REFERENCE F629_4599_3386 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F629_4599(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F631_4599_3386 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F631_4599(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F632_4599_3386 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F632_4599(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R3387[8])();
void R3387_init () {
	R3387[0] = (char *(*)()) F628_4600;
	R3387[1] = (char *(*)()) F629_4600;
	R3387[2] = (char *(*)()) F630_4600;
	R3387[3] = (char *(*)()) F631_4600;
	R3387[4] = (char *(*)()) F632_4600;
	R3387[5] = (char *(*)()) F628_4600;
	R3387[6] = (char *(*)()) F630_4600;
	R3387[7] = (char *(*)()) F628_4600;
}

char *(*R3388[8])();
void R3388_init () {
	R3388[0] = (char *(*)()) F628_4601;
	R3388[1] = (char *(*)()) F629_4601;
	R3388[2] = (char *(*)()) F630_4601;
	R3388[3] = (char *(*)()) F631_4601;
	R3388[4] = (char *(*)()) F632_4601;
	R3388[5] = (char *(*)()) F628_4601;
	R3388[6] = (char *(*)()) F630_4601;
	R3388[7] = (char *(*)()) F628_4601;
}

char *(*R3389[8])();
void R3389_init () {
	R3389[0] = (char *(*)()) F628_4602;
	R3389[1] = (char *(*)()) F629_4602;
	R3389[2] = (char *(*)()) F630_4602;
	R3389[3] = (char *(*)()) F631_4602;
	R3389[4] = (char *(*)()) F632_4602;
	R3389[5] = (char *(*)()) F628_4602;
	R3389[6] = (char *(*)()) F630_4602;
	R3389[7] = (char *(*)()) F628_4602;
}

char *(*R3390[8])();
void R3390_init () {
	R3390[0] = (char *(*)()) F628_4603;
	R3390[1] = (char *(*)()) F629_4603;
	R3390[2] = (char *(*)()) F630_4603;
	R3390[3] = (char *(*)()) F631_4603;
	R3390[4] = (char *(*)()) F632_4603;
	R3390[5] = (char *(*)()) F628_4603;
	R3390[6] = (char *(*)()) F630_4603;
	R3390[7] = (char *(*)()) F628_4603;
}

char *(*R3391[8])();
void R3391_init () {
	R3391[0] = (char *(*)()) F628_4604;
	R3391[1] = (char *(*)()) F629_4604;
	R3391[2] = (char *(*)()) F630_4604;
	R3391[3] = (char *(*)()) F631_4604;
	R3391[4] = (char *(*)()) F632_4604;
	R3391[5] = (char *(*)()) F628_4604;
	R3391[6] = (char *(*)()) F630_4604;
	R3391[7] = (char *(*)()) F628_4604;
}

char *(*R3393[8])();
void R3393_init () {
	R3393[0] = (char *(*)()) F628_4606;
	R3393[1] = (char *(*)()) F629_4606;
	R3393[2] = (char *(*)()) F630_4606;
	R3393[3] = (char *(*)()) F631_4606;
	R3393[4] = (char *(*)()) F632_4606;
	R3393[5] = (char *(*)()) F628_4606;
	R3393[6] = (char *(*)()) F630_4606;
	R3393[7] = (char *(*)()) F628_4606;
}

char *(*R3394[8])();
void R3394_init () {
	R3394[0] = (char *(*)()) F628_4607;
	R3394[1] = (char *(*)()) F629_4607;
	R3394[2] = (char *(*)()) F630_4607;
	R3394[3] = (char *(*)()) F631_4607;
	R3394[4] = (char *(*)()) F632_4607;
	R3394[5] = (char *(*)()) F628_4607;
	R3394[6] = (char *(*)()) F630_4607;
	R3394[7] = (char *(*)()) F628_4607;
}

char *(*R3395[8])();
void R3395_init () {
	R3395[0] = (char *(*)()) F628_4608;
	R3395[1] = (char *(*)()) F629_4608;
	R3395[2] = (char *(*)()) F630_4608;
	R3395[3] = (char *(*)()) F631_4608;
	R3395[4] = (char *(*)()) F632_4608;
	R3395[5] = (char *(*)()) F628_4608;
	R3395[6] = (char *(*)()) F630_4608;
	R3395[7] = (char *(*)()) F628_4608;
}

char *(*R3399[8])();
void R3399_init () {
	R3399[0] = (char *(*)()) F628_4612;
	R3399[1] = (char *(*)()) F629_4612_3399;
	R3399[2] = (char *(*)()) F630_4612;
	R3399[3] = (char *(*)()) F631_4612_3399;
	R3399[4] = (char *(*)()) F632_4612_3399;
	R3399[5] = (char *(*)()) F628_4612;
	R3399[6] = (char *(*)()) F630_4612;
	R3399[7] = (char *(*)()) F628_4612;
}
static void F629_4612_3399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F629_4612(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F631_4612_3399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F631_4612(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F632_4612_3399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F632_4612(Current, *(EIF_POINTER *)arg1);
}

char *(*R3405[8])();
void R3405_init () {
	R3405[0] = (char *(*)()) F628_4618;
	R3405[1] = (char *(*)()) F629_4618;
	R3405[2] = (char *(*)()) F630_4618;
	R3405[3] = (char *(*)()) F631_4618;
	R3405[4] = (char *(*)()) F632_4618;
	R3405[5] = (char *(*)()) F628_4618;
	R3405[6] = (char *(*)()) F630_4618;
	R3405[7] = (char *(*)()) F628_4618;
}

char *(*R3418[8])();
void R3418_init () {
	R3418[0] = (char *(*)()) F628_4631;
	R3418[1] = (char *(*)()) F629_4631;
	R3418[2] = (char *(*)()) F630_4631;
	R3418[3] = (char *(*)()) F631_4631;
	R3418[4] = (char *(*)()) F632_4631;
	R3418[5] = (char *(*)()) F628_4631;
	R3418[6] = (char *(*)()) F630_4631;
	R3418[7] = (char *(*)()) F628_4631;
}

char *(*R3421[2])();
void R3421_init () {
	R3421[0] = (char *(*)()) F633_4634;
	R3421[1] = (char *(*)()) F634_4634;
}

char *(*R3449[20])();
void R3449_init () {
	R3449[0] = (char *(*)()) F636_4691;
	R3449[1] = (char *(*)()) F637_4691;
	R3449[2] = (char *(*)()) F638_4691;
	R3449[3] = (char *(*)()) F639_4691;
	R3449[4] = (char *(*)()) F640_4691;
	R3449[5] = (char *(*)()) F641_4691;
	R3449[6] = (char *(*)()) F642_4691;
	R3449[7] = (char *(*)()) F643_4691;
	R3449[8] = (char *(*)()) F644_4691;
	R3449[9] = (char *(*)()) F645_4691;
	R3449[10] = (char *(*)()) F646_4691;
	R3449[11] = (char *(*)()) F647_4691;
	R3449[12] = (char *(*)()) F648_4691;
	R3449[13] = (char *(*)()) F649_4691;
	R3449[14] = (char *(*)()) F650_4691;
	R3449[15] = (char *(*)()) F636_4691;
	R3449[16] = (char *(*)()) F640_4691;
	R3449[17] = (char *(*)()) F638_4691;
	{long i; for (i = 18; i < 20; i++) R3449[i] = (char *(*)()) F636_4691;}
}

char *(*R3461[3])();
void R3461_init () {
	R3461[0] = (char *(*)()) F636_4711;
	R3461[1] = (char *(*)()) F640_4711_3461;
	R3461[2] = (char *(*)()) F638_4711_3461;
}
static void F640_4711_3461 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4711(Current, *(EIF_BOOLEAN *)arg1);
}
static void F638_4711_3461 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4711(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3462[3])();
void R3462_init () {
	R3462[0] = (char *(*)()) F636_4723;
	R3462[1] = (char *(*)()) F640_4723;
	R3462[2] = (char *(*)()) F638_4723;
}

char *(*R3463[2])();
void R3463_init () {
	R3463[0] = (char *(*)()) F654_4763;
	R3463[1] = (char *(*)()) F655_4791;
}

char *(*R3464[2])();
void R3464_init () {
	R3464[0] = (char *(*)()) F654_4764;
	R3464[1] = (char *(*)()) F655_4792;
}

char *(*R3505[134])();
void R3505_init () {
	R3505[0] = (char *(*)()) F691_4853;
	R3505[1] = (char *(*)()) F692_4894;
	R3505[2] = (char *(*)()) F693_4894;
	R3505[3] = (char *(*)()) F694_4894;
	R3505[4] = (char *(*)()) F695_4894;
	R3505[5] = (char *(*)()) F696_4894;
	R3505[6] = (char *(*)()) F697_4894;
	R3505[7] = (char *(*)()) F698_4894;
	R3505[8] = (char *(*)()) F699_4894;
	R3505[9] = (char *(*)()) F700_4894;
	R3505[10] = (char *(*)()) F701_4894;
	R3505[11] = (char *(*)()) F702_4894;
	R3505[12] = (char *(*)()) F703_4894;
	R3505[13] = (char *(*)()) F704_4894;
	R3505[14] = (char *(*)()) F705_4894;
	R3505[15] = (char *(*)()) F706_4894;
	R3505[16] = (char *(*)()) F707_4894;
	R3505[17] = (char *(*)()) F708_4894;
	R3505[18] = (char *(*)()) F709_4894;
	R3505[19] = (char *(*)()) F710_4894;
	R3505[20] = (char *(*)()) F711_4894;
	R3505[21] = (char *(*)()) F712_4894;
	R3505[22] = (char *(*)()) F713_4894;
	R3505[23] = (char *(*)()) F714_4894;
	R3505[24] = (char *(*)()) F715_4894;
	R3505[25] = (char *(*)()) F716_4894;
	R3505[26] = (char *(*)()) F717_4894;
	R3505[27] = (char *(*)()) F718_4894;
	R3505[28] = (char *(*)()) F719_4894;
	R3505[29] = (char *(*)()) F720_4894;
	R3505[30] = (char *(*)()) F721_4894;
	R3505[31] = (char *(*)()) F722_4894;
	R3505[32] = (char *(*)()) F723_4894;
	R3505[33] = (char *(*)()) F724_4894;
	R3505[34] = (char *(*)()) F725_4894;
	R3505[35] = (char *(*)()) F726_4894;
	R3505[36] = (char *(*)()) F727_4894;
	R3505[37] = (char *(*)()) F728_4894;
	R3505[38] = (char *(*)()) F729_4894;
	R3505[39] = (char *(*)()) F730_4894;
	R3505[40] = (char *(*)()) F731_4894;
	R3505[41] = (char *(*)()) F732_4894;
	R3505[42] = (char *(*)()) F733_4894;
	R3505[43] = (char *(*)()) F734_4894;
	R3505[44] = (char *(*)()) F735_4894;
	R3505[45] = (char *(*)()) F736_4894;
	R3505[46] = (char *(*)()) F737_4894;
	R3505[47] = (char *(*)()) F738_4943;
	{long i; for (i = 48; i < 51; i++) R3505[i] = (char *(*)()) F739_5091;}
	{long i; for (i = 51; i < 54; i++) R3505[i] = (char *(*)()) F742_5186;}
	{long i; for (i = 54; i < 57; i++) R3505[i] = (char *(*)()) F745_5246;}
	{long i; for (i = 57; i < 60; i++) R3505[i] = (char *(*)()) F748_5286;}
	{long i; for (i = 60; i < 63; i++) R3505[i] = (char *(*)()) F751_5331;}
	{long i; for (i = 63; i < 66; i++) R3505[i] = (char *(*)()) F754_5425;}
	{long i; for (i = 66; i < 69; i++) R3505[i] = (char *(*)()) F757_5446;}
	{long i; for (i = 69; i < 72; i++) R3505[i] = (char *(*)()) F760_5505;}
	{long i; for (i = 72; i < 75; i++) R3505[i] = (char *(*)()) F763_5596;}
	{long i; for (i = 75; i < 78; i++) R3505[i] = (char *(*)()) F766_5686;}
	{long i; for (i = 78; i < 81; i++) R3505[i] = (char *(*)()) F769_5777;}
	{long i; for (i = 81; i < 84; i++) R3505[i] = (char *(*)()) F772_5872;}
	{long i; for (i = 84; i < 87; i++) R3505[i] = (char *(*)()) F775_5967;}
	{long i; for (i = 87; i < 118; i++) R3505[i] = (char *(*)()) F778_6057;}
	R3505[118] = (char *(*)()) F809_6083;
	R3505[119] = (char *(*)()) F810_6083;
	{long i; for (i = 120; i < 125; i++) R3505[i] = (char *(*)()) F811_6091;}
	{long i; for (i = 125; i < 134; i++) R3505[i] = (char *(*)()) F816_6150;}
}

char *(*R3563[46])();
void R3563_init () {
	R3563[0] = (char *(*)()) F692_4891;
	R3563[1] = (char *(*)()) F693_4891;
	R3563[2] = (char *(*)()) F694_4891;
	R3563[3] = (char *(*)()) F695_4891;
	R3563[4] = (char *(*)()) F696_4891;
	R3563[5] = (char *(*)()) F697_4891;
	R3563[6] = (char *(*)()) F698_4891;
	R3563[7] = (char *(*)()) F699_4891;
	R3563[8] = (char *(*)()) F700_4891;
	R3563[9] = (char *(*)()) F701_4891;
	R3563[10] = (char *(*)()) F702_4891;
	R3563[11] = (char *(*)()) F703_4891;
	R3563[12] = (char *(*)()) F704_4891;
	R3563[13] = (char *(*)()) F705_4891;
	R3563[14] = (char *(*)()) F706_4891;
	R3563[15] = (char *(*)()) F707_4891;
	R3563[16] = (char *(*)()) F708_4891;
	R3563[17] = (char *(*)()) F709_4891;
	R3563[18] = (char *(*)()) F710_4891;
	R3563[19] = (char *(*)()) F711_4891;
	R3563[20] = (char *(*)()) F712_4891;
	R3563[21] = (char *(*)()) F713_4891;
	R3563[22] = (char *(*)()) F714_4891;
	R3563[23] = (char *(*)()) F715_4891;
	R3563[24] = (char *(*)()) F716_4891;
	R3563[25] = (char *(*)()) F717_4891;
	R3563[26] = (char *(*)()) F718_4891;
	R3563[27] = (char *(*)()) F719_4891;
	R3563[28] = (char *(*)()) F720_4891;
	R3563[29] = (char *(*)()) F721_4891;
	R3563[30] = (char *(*)()) F722_4891;
	R3563[31] = (char *(*)()) F723_4891;
	R3563[32] = (char *(*)()) F724_4891;
	R3563[33] = (char *(*)()) F725_4891;
	R3563[34] = (char *(*)()) F726_4891;
	R3563[35] = (char *(*)()) F727_4891;
	R3563[36] = (char *(*)()) F728_4891;
	R3563[37] = (char *(*)()) F729_4891;
	R3563[38] = (char *(*)()) F730_4891;
	R3563[39] = (char *(*)()) F731_4891;
	R3563[40] = (char *(*)()) F732_4891;
	R3563[41] = (char *(*)()) F733_4891;
	R3563[42] = (char *(*)()) F734_4891;
	R3563[43] = (char *(*)()) F735_4891;
	R3563[44] = (char *(*)()) F736_4891;
	R3563[45] = (char *(*)()) F737_4891;
}

char *(*R3565[46])();
void R3565_init () {
	R3565[0] = (char *(*)()) F692_4893;
	R3565[1] = (char *(*)()) F693_4893;
	R3565[2] = (char *(*)()) F694_4893;
	R3565[3] = (char *(*)()) F695_4893;
	R3565[4] = (char *(*)()) F696_4893;
	R3565[5] = (char *(*)()) F697_4893;
	R3565[6] = (char *(*)()) F698_4893;
	R3565[7] = (char *(*)()) F699_4893;
	R3565[8] = (char *(*)()) F700_4893;
	R3565[9] = (char *(*)()) F701_4893;
	R3565[10] = (char *(*)()) F702_4893;
	R3565[11] = (char *(*)()) F703_4893;
	R3565[12] = (char *(*)()) F704_4893;
	R3565[13] = (char *(*)()) F705_4893;
	R3565[14] = (char *(*)()) F706_4893;
	R3565[15] = (char *(*)()) F707_4893;
	R3565[16] = (char *(*)()) F708_4893;
	R3565[17] = (char *(*)()) F709_4893;
	R3565[18] = (char *(*)()) F710_4893;
	R3565[19] = (char *(*)()) F711_4893;
	R3565[20] = (char *(*)()) F712_4893;
	R3565[21] = (char *(*)()) F713_4893;
	R3565[22] = (char *(*)()) F714_4893;
	R3565[23] = (char *(*)()) F715_4893;
	R3565[24] = (char *(*)()) F716_4893;
	R3565[25] = (char *(*)()) F717_4893;
	R3565[26] = (char *(*)()) F718_4893;
	R3565[27] = (char *(*)()) F719_4893;
	R3565[28] = (char *(*)()) F720_4893;
	R3565[29] = (char *(*)()) F721_4893;
	R3565[30] = (char *(*)()) F722_4893;
	R3565[31] = (char *(*)()) F723_4893;
	R3565[32] = (char *(*)()) F724_4893;
	R3565[33] = (char *(*)()) F725_4893;
	R3565[34] = (char *(*)()) F726_4893;
	R3565[35] = (char *(*)()) F727_4893;
	R3565[36] = (char *(*)()) F728_4893;
	R3565[37] = (char *(*)()) F729_4893;
	R3565[38] = (char *(*)()) F730_4893;
	R3565[39] = (char *(*)()) F731_4893;
	R3565[40] = (char *(*)()) F732_4893;
	R3565[41] = (char *(*)()) F733_4893;
	R3565[42] = (char *(*)()) F734_4893;
	R3565[43] = (char *(*)()) F735_4893;
	R3565[44] = (char *(*)()) F736_4893;
	R3565[45] = (char *(*)()) F737_4893;
}

char *(*R3569[46])();
void R3569_init () {
	R3569[0] = (char *(*)()) F692_4898;
	R3569[1] = (char *(*)()) F693_4898;
	R3569[2] = (char *(*)()) F694_4898;
	R3569[3] = (char *(*)()) F695_4898;
	R3569[4] = (char *(*)()) F696_4898;
	R3569[5] = (char *(*)()) F697_4898;
	R3569[6] = (char *(*)()) F698_4898;
	R3569[7] = (char *(*)()) F699_4898;
	R3569[8] = (char *(*)()) F700_4898;
	R3569[9] = (char *(*)()) F701_4898;
	R3569[10] = (char *(*)()) F702_4898;
	R3569[11] = (char *(*)()) F703_4898;
	R3569[12] = (char *(*)()) F704_4898;
	R3569[13] = (char *(*)()) F705_4898;
	R3569[14] = (char *(*)()) F706_4898;
	R3569[15] = (char *(*)()) F707_4898;
	R3569[16] = (char *(*)()) F708_4898;
	R3569[17] = (char *(*)()) F709_4898;
	R3569[18] = (char *(*)()) F710_4898;
	R3569[19] = (char *(*)()) F711_4898;
	R3569[20] = (char *(*)()) F712_4898;
	R3569[21] = (char *(*)()) F713_4898;
	R3569[22] = (char *(*)()) F714_4898;
	R3569[23] = (char *(*)()) F715_4898;
	R3569[24] = (char *(*)()) F716_4898;
	R3569[25] = (char *(*)()) F717_4898;
	R3569[26] = (char *(*)()) F718_4898;
	R3569[27] = (char *(*)()) F719_4898;
	R3569[28] = (char *(*)()) F720_4898;
	R3569[29] = (char *(*)()) F721_4898;
	R3569[30] = (char *(*)()) F722_4898;
	R3569[31] = (char *(*)()) F723_4898;
	R3569[32] = (char *(*)()) F724_4898;
	R3569[33] = (char *(*)()) F725_4898;
	R3569[34] = (char *(*)()) F726_4898;
	R3569[35] = (char *(*)()) F727_4898;
	R3569[36] = (char *(*)()) F728_4898;
	R3569[37] = (char *(*)()) F729_4898;
	R3569[38] = (char *(*)()) F730_4898;
	R3569[39] = (char *(*)()) F731_4898;
	R3569[40] = (char *(*)()) F732_4898;
	R3569[41] = (char *(*)()) F733_4898;
	R3569[42] = (char *(*)()) F734_4898;
	R3569[43] = (char *(*)()) F735_4898;
	R3569[44] = (char *(*)()) F736_4898;
	R3569[45] = (char *(*)()) F737_4898;
}

char *(*R3573[46])();
void R3573_init () {
	R3573[0] = (char *(*)()) F692_4905;
	R3573[1] = (char *(*)()) F693_4905_3573;
	R3573[2] = (char *(*)()) F694_4905_3573;
	R3573[3] = (char *(*)()) F695_4905_3573;
	R3573[4] = (char *(*)()) F696_4905_3573;
	R3573[5] = (char *(*)()) F697_4905;
	R3573[6] = (char *(*)()) F698_4905;
	R3573[7] = (char *(*)()) F699_4905_3573;
	R3573[8] = (char *(*)()) F700_4905_3573;
	R3573[9] = (char *(*)()) F701_4905;
	R3573[10] = (char *(*)()) F702_4905_3573;
	R3573[11] = (char *(*)()) F703_4905_3573;
	R3573[12] = (char *(*)()) F704_4905;
	R3573[13] = (char *(*)()) F705_4905_3573;
	R3573[14] = (char *(*)()) F706_4905_3573;
	R3573[15] = (char *(*)()) F707_4905_3573;
	R3573[16] = (char *(*)()) F708_4905;
	R3573[17] = (char *(*)()) F709_4905_3573;
	R3573[18] = (char *(*)()) F710_4905_3573;
	R3573[19] = (char *(*)()) F711_4905;
	R3573[20] = (char *(*)()) F712_4905_3573;
	R3573[21] = (char *(*)()) F713_4905;
	R3573[22] = (char *(*)()) F714_4905_3573;
	R3573[23] = (char *(*)()) F715_4905_3573;
	R3573[24] = (char *(*)()) F716_4905;
	R3573[25] = (char *(*)()) F717_4905_3573;
	R3573[26] = (char *(*)()) F718_4905;
	R3573[27] = (char *(*)()) F719_4905_3573;
	R3573[28] = (char *(*)()) F720_4905_3573;
	R3573[29] = (char *(*)()) F721_4905;
	R3573[30] = (char *(*)()) F722_4905_3573;
	R3573[31] = (char *(*)()) F723_4905_3573;
	R3573[32] = (char *(*)()) F724_4905;
	R3573[33] = (char *(*)()) F725_4905_3573;
	R3573[34] = (char *(*)()) F726_4905_3573;
	R3573[35] = (char *(*)()) F727_4905;
	R3573[36] = (char *(*)()) F728_4905;
	R3573[37] = (char *(*)()) F729_4905_3573;
	R3573[38] = (char *(*)()) F730_4905_3573;
	R3573[39] = (char *(*)()) F731_4905;
	R3573[40] = (char *(*)()) F732_4905_3573;
	R3573[41] = (char *(*)()) F733_4905;
	R3573[42] = (char *(*)()) F734_4905_3573;
	R3573[43] = (char *(*)()) F735_4905_3573;
	R3573[44] = (char *(*)()) F736_4905;
	R3573[45] = (char *(*)()) F737_4905_3573;
}
static EIF_REFERENCE F693_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F693_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {779,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 779, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F694_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F694_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {781,743,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 781, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F695_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {783,740,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 783, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F696_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F696_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {785,809,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 785, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F699_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F699_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(809, 809, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F700_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F700_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {787,764,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 787, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F702_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F702_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(770, 770, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F703_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F703_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {789,752,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 789, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F705_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F705_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(758, 758, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F706_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F706_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {791,758,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 791, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F707_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F707_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {793,746,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 793, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F709_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F709_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F710_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F710_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {795,755,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 795, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F712_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F712_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(743, 743, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F714_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F714_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(776, 776, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F715_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F715_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {797,776,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 797, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F717_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F717_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(764, 764, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F719_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F719_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(749, 749, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F720_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F720_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {799,749,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 799, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F722_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F722_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(767, 767, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F723_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F723_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {801,767,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 801, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F725_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F725_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(761, 761, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F726_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F726_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {803,761,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 803, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F729_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F729_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F730_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F730_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {805,770,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 805, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F732_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F732_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(773, 773, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F734_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F734_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(740, 740, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F735_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F735_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {807,773,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 807, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F737_4905_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F737_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(746, 746, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R3582[46])();
void R3582_init () {
	R3582[0] = (char *(*)()) F692_4916;
	R3582[1] = (char *(*)()) F693_4916;
	R3582[2] = (char *(*)()) F694_4916;
	R3582[3] = (char *(*)()) F695_4916;
	R3582[4] = (char *(*)()) F696_4916;
	R3582[5] = (char *(*)()) F697_4916;
	R3582[6] = (char *(*)()) F698_4916;
	R3582[7] = (char *(*)()) F699_4916;
	R3582[8] = (char *(*)()) F700_4916;
	R3582[9] = (char *(*)()) F701_4916;
	R3582[10] = (char *(*)()) F702_4916;
	R3582[11] = (char *(*)()) F703_4916;
	R3582[12] = (char *(*)()) F704_4916;
	R3582[13] = (char *(*)()) F705_4916;
	R3582[14] = (char *(*)()) F706_4916;
	R3582[15] = (char *(*)()) F707_4916;
	R3582[16] = (char *(*)()) F708_4916;
	R3582[17] = (char *(*)()) F709_4916;
	R3582[18] = (char *(*)()) F710_4916;
	R3582[19] = (char *(*)()) F711_4916;
	R3582[20] = (char *(*)()) F712_4916;
	R3582[21] = (char *(*)()) F713_4916;
	R3582[22] = (char *(*)()) F714_4916;
	R3582[23] = (char *(*)()) F715_4916;
	R3582[24] = (char *(*)()) F716_4916;
	R3582[25] = (char *(*)()) F717_4916;
	R3582[26] = (char *(*)()) F718_4916;
	R3582[27] = (char *(*)()) F719_4916;
	R3582[28] = (char *(*)()) F720_4916;
	R3582[29] = (char *(*)()) F721_4916;
	R3582[30] = (char *(*)()) F722_4916;
	R3582[31] = (char *(*)()) F723_4916;
	R3582[32] = (char *(*)()) F724_4916;
	R3582[33] = (char *(*)()) F725_4916;
	R3582[34] = (char *(*)()) F726_4916;
	R3582[35] = (char *(*)()) F727_4916;
	R3582[36] = (char *(*)()) F728_4916;
	R3582[37] = (char *(*)()) F729_4916;
	R3582[38] = (char *(*)()) F730_4916;
	R3582[39] = (char *(*)()) F731_4916;
	R3582[40] = (char *(*)()) F732_4916;
	R3582[41] = (char *(*)()) F733_4916;
	R3582[42] = (char *(*)()) F734_4916;
	R3582[43] = (char *(*)()) F735_4916;
	R3582[44] = (char *(*)()) F736_4916;
	R3582[45] = (char *(*)()) F737_4916;
}

char *(*R3771[3])();
void R3771_init () {
	R3771[0] = (char *(*)()) F739_5124;
	R3771[1] = (char *(*)()) F740_5170;
	R3771[2] = (char *(*)()) F741_5170;
}

char *(*R3774[3])();
void R3774_init () {
	R3774[0] = (char *(*)()) F739_5127;
	R3774[1] = (char *(*)()) F740_5173;
	R3774[2] = (char *(*)()) F741_5173;
}

char *(*R3818[3])();
void R3818_init () {
	R3818[0] = (char *(*)()) F742_5208;
	R3818[1] = (char *(*)()) F743_5231;
	R3818[2] = (char *(*)()) F744_5231;
}

char *(*R3832[3])();
void R3832_init () {
	R3832[0] = (char *(*)()) F745_5247;
	R3832[1] = (char *(*)()) F746_5281;
	R3832[2] = (char *(*)()) F747_5281;
}

char *(*R3921[3])();
void R3921_init () {
	R3921[0] = (char *(*)()) F751_5362;
	R3921[1] = (char *(*)()) F752_5408;
	R3921[2] = (char *(*)()) F753_5408;
}

char *(*R3922[3])();
void R3922_init () {
	R3922[0] = (char *(*)()) F751_5363;
	R3922[1] = (char *(*)()) F752_5409;
	R3922[2] = (char *(*)()) F753_5409;
}

char *(*R3925[3])();
void R3925_init () {
	R3925[0] = (char *(*)()) F751_5366;
	R3925[1] = (char *(*)()) F752_5412;
	R3925[2] = (char *(*)()) F753_5412;
}

char *(*R3981[3])();
void R3981_init () {
	R3981[0] = (char *(*)()) F757_5468;
	R3981[1] = (char *(*)()) F758_5491;
	R3981[2] = (char *(*)()) F759_5491;
}

char *(*R3988[3])();
void R3988_init () {
	R3988[0] = (char *(*)()) F757_5475;
	R3988[1] = (char *(*)()) F758_5495;
	R3988[2] = (char *(*)()) F759_5495;
}

char *(*R4010[3])();
void R4010_init () {
	R4010[0] = (char *(*)()) F760_5535;
	R4010[1] = (char *(*)()) F761_5578;
	R4010[2] = (char *(*)()) F762_5578;
}

char *(*R4011[3])();
void R4011_init () {
	R4011[0] = (char *(*)()) F760_5536;
	R4011[1] = (char *(*)()) F761_5579;
	R4011[2] = (char *(*)()) F762_5579;
}

char *(*R4012[3])();
void R4012_init () {
	R4012[0] = (char *(*)()) F760_5537;
	R4012[1] = (char *(*)()) F761_5580;
	R4012[2] = (char *(*)()) F762_5580;
}

char *(*R4015[3])();
void R4015_init () {
	R4015[0] = (char *(*)()) F760_5540;
	R4015[1] = (char *(*)()) F761_5583;
	R4015[2] = (char *(*)()) F762_5583;
}

char *(*R4057[3])();
void R4057_init () {
	R4057[0] = (char *(*)()) F763_5624;
	R4057[1] = (char *(*)()) F764_5667;
	R4057[2] = (char *(*)()) F765_5667;
}

char *(*R4058[3])();
void R4058_init () {
	R4058[0] = (char *(*)()) F763_5625;
	R4058[1] = (char *(*)()) F764_5668;
	R4058[2] = (char *(*)()) F765_5668;
}

char *(*R4060[3])();
void R4060_init () {
	R4060[0] = (char *(*)()) F763_5627;
	R4060[1] = (char *(*)()) F764_5670;
	R4060[2] = (char *(*)()) F765_5670;
}

char *(*R4063[3])();
void R4063_init () {
	R4063[0] = (char *(*)()) F763_5630;
	R4063[1] = (char *(*)()) F764_5673;
	R4063[2] = (char *(*)()) F765_5673;
}

char *(*R4064[3])();
void R4064_init () {
	R4064[0] = (char *(*)()) F763_5631;
	R4064[1] = (char *(*)()) F764_5674;
	R4064[2] = (char *(*)()) F765_5674;
}

char *(*R4108[3])();
void R4108_init () {
	R4108[0] = (char *(*)()) F766_5717;
	R4108[1] = (char *(*)()) F767_5760;
	R4108[2] = (char *(*)()) F768_5760;
}

char *(*R4109[3])();
void R4109_init () {
	R4109[0] = (char *(*)()) F766_5718;
	R4109[1] = (char *(*)()) F767_5761;
	R4109[2] = (char *(*)()) F768_5761;
}

char *(*R4112[3])();
void R4112_init () {
	R4112[0] = (char *(*)()) F766_5721;
	R4112[1] = (char *(*)()) F767_5764;
	R4112[2] = (char *(*)()) F768_5764;
}

char *(*R4156[3])();
void R4156_init () {
	R4156[0] = (char *(*)()) F769_5807;
	R4156[1] = (char *(*)()) F770_5853;
	R4156[2] = (char *(*)()) F771_5853;
}

char *(*R4157[3])();
void R4157_init () {
	R4157[0] = (char *(*)()) F769_5808;
	R4157[1] = (char *(*)()) F770_5854;
	R4157[2] = (char *(*)()) F771_5854;
}

char *(*R4158[3])();
void R4158_init () {
	R4158[0] = (char *(*)()) F769_5809;
	R4158[1] = (char *(*)()) F770_5855;
	R4158[2] = (char *(*)()) F771_5855;
}

char *(*R4159[3])();
void R4159_init () {
	R4159[0] = (char *(*)()) F769_5810;
	R4159[1] = (char *(*)()) F770_5856;
	R4159[2] = (char *(*)()) F771_5856;
}

char *(*R4160[3])();
void R4160_init () {
	R4160[0] = (char *(*)()) F769_5811;
	R4160[1] = (char *(*)()) F770_5857;
	R4160[2] = (char *(*)()) F771_5857;
}

char *(*R4161[3])();
void R4161_init () {
	R4161[0] = (char *(*)()) F769_5812;
	R4161[1] = (char *(*)()) F770_5858;
	R4161[2] = (char *(*)()) F771_5858;
}

char *(*R4163[3])();
void R4163_init () {
	R4163[0] = (char *(*)()) F769_5814;
	R4163[1] = (char *(*)()) F770_5860;
	R4163[2] = (char *(*)()) F771_5860;
}

char *(*R4211[3])();
void R4211_init () {
	R4211[0] = (char *(*)()) F772_5905;
	R4211[1] = (char *(*)()) F773_5951;
	R4211[2] = (char *(*)()) F774_5951;
}

char *(*R4214[3])();
void R4214_init () {
	R4214[0] = (char *(*)()) F772_5908;
	R4214[1] = (char *(*)()) F773_5954;
	R4214[2] = (char *(*)()) F774_5954;
}

char *(*R4264[3])();
void R4264_init () {
	R4264[0] = (char *(*)()) F775_6001;
	R4264[1] = (char *(*)()) F776_6044;
	R4264[2] = (char *(*)()) F777_6044;
}

char *(*R4354[3])();
void R4354_init () {
	R4354[0] = (char *(*)()) F813_6130;
	{long i; for (i = 1; i < 3; i++) R4354[i] = (char *(*)()) F814_6130_4354;}
}
static EIF_REFERENCE F814_6130_4354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F814_6130(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(755, 755, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R4361[8])();
void R4361_init () {
	R4361[0] = (char *(*)()) F817_6236;
	R4361[2] = (char *(*)()) F817_6236;
	{long i; for (i = 3; i < 5; i++) R4361[i] = (char *(*)()) F820_6458;}
	R4361[6] = (char *(*)()) F817_6236;
	R4361[7] = (char *(*)()) F820_6458;
}

char *(*R4363[6])();
void R4363_init () {
	R4363[0] = (char *(*)()) F819_6309;
	R4363[2] = (char *(*)()) F821_6517;
	R4363[4] = (char *(*)()) F823_6607;
	R4363[5] = (char *(*)()) F824_6628;
}

char *(*R4364[6])();
void R4364_init () {
	R4364[0] = (char *(*)()) F819_6308;
	R4364[2] = (char *(*)()) F821_6515;
	R4364[4] = (char *(*)()) F823_6606;
	R4364[5] = (char *(*)()) F824_6626;
}

char *(*R4376[8])();
void R4376_init () {
	R4376[0] = (char *(*)()) F817_6265;
	R4376[2] = (char *(*)()) F817_6265;
	{long i; for (i = 3; i < 5; i++) R4376[i] = (char *(*)()) F820_6488;}
	R4376[6] = (char *(*)()) F817_6265;
	R4376[7] = (char *(*)()) F820_6488;
}

char *(*R4378[6])();
void R4378_init () {
	R4378[0] = (char *(*)()) F296_1979;
	R4378[2] = (char *(*)()) F302_1979;
	R4378[4] = (char *(*)()) F823_6615;
	R4378[5] = (char *(*)()) F824_6637;
}

char *(*R4400[8])();
void R4400_init () {
	R4400[0] = (char *(*)()) F817_6255;
	R4400[2] = (char *(*)()) F817_6255;
	{long i; for (i = 3; i < 5; i++) R4400[i] = (char *(*)()) F820_6478;}
	R4400[6] = (char *(*)()) F817_6255;
	R4400[7] = (char *(*)()) F820_6478;
}

char *(*R4401[8])();
void R4401_init () {
	R4401[0] = (char *(*)()) F817_6254;
	R4401[2] = (char *(*)()) F817_6254;
	{long i; for (i = 3; i < 5; i++) R4401[i] = (char *(*)()) F820_6477;}
	R4401[6] = (char *(*)()) F817_6254;
	R4401[7] = (char *(*)()) F820_6477;
}

char *(*R4441[6])();
void R4441_init () {
	R4441[0] = (char *(*)()) F819_6387;
	R4441[2] = (char *(*)()) F821_6595;
	R4441[4] = (char *(*)()) F823_6613;
	R4441[5] = (char *(*)()) F824_6634;
}

char *(*R4484[7])();
void R4484_init () {
	R4484[0] = (char *(*)()) F817_6284;
	R4484[2] = (char *(*)()) F817_6284;
	R4484[6] = (char *(*)()) F823_6619;
}

char *(*R4487[3])();
void R4487_init () {
	R4487[0] = (char *(*)()) F819_6329;
	R4487[2] = (char *(*)()) F821_6537;
}

char *(*R4488[3])();
void R4488_init () {
	R4488[0] = (char *(*)()) F819_6389;
	R4488[2] = (char *(*)()) F821_6597;
}

char *(*R4501[3])();
void R4501_init () {
	R4501[0] = (char *(*)()) F819_6372;
	R4501[2] = (char *(*)()) F821_6580;
}

char *(*R4625[5])();
void R4625_init () {
	{long i; for (i = 0; i < 2; i++) R4625[i] = (char *(*)()) F820_6507;}
	R4625[4] = (char *(*)()) F824_6640;
}

char *(*R5970[629])();
void R5970_init () {
	R5970[0] = (char *(*)()) F48_8088;
	R5970[628] = (char *(*)()) F676_8724;
}

char *(*R5971[629])();
void R5971_init () {
	R5971[0] = (char *(*)()) F48_8089;
	R5971[628] = (char *(*)()) F676_8725;
}


#ifdef __cplusplus
}
#endif
