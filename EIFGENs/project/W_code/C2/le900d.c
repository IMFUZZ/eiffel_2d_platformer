/*
 * Class LEVEL_ONE_SCENE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_900 [] = {238,899,0xFFFF};
static EIF_TYPE_INDEX gen_type1_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_900 [] = {477,918,0xFFFF};
static EIF_TYPE_INDEX gen_type5_900 [] = {477,918,0xFFFF};
static EIF_TYPE_INDEX gen_type6_900 [] = {477,918,0xFFFF};
static EIF_TYPE_INDEX gen_type7_900 [] = {477,920,0xFFFF};
static EIF_TYPE_INDEX gen_type8_900 [] = {265,920,0xFFFF};


static struct desc_info desc_900[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_900},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 899, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_900},
	{14, (BODY_INDEX)-1, 0, gen_type2_900},
	{15, (BODY_INDEX)-1, 899, NULL},
	{16, (BODY_INDEX)-1, 899, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_900},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, NULL},
	{21, (BODY_INDEX)-1, 220, NULL},
	{22, (BODY_INDEX)-1, 220, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 899, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 899, NULL},
	{13851, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13825, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13852, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13827, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13828, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13829, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13830, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13831, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13832, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13833, 0, 911, NULL},
	{13834, 64, 191, NULL},
	{13835, 66, 176, NULL},
	{13836, 8, 477, gen_type4_900},
	{13837, 16, 477, gen_type5_900},
	{13838, 24, 477, gen_type6_900},
	{13839, 32, 477, gen_type7_900},
	{13840, 40, 265, gen_type8_900},
	{13841, 48, 919, NULL},
	{13842, 67, 176, NULL},
	{13853, 68, 206, NULL},
	{13854, 56, 866, NULL},
	{13855, 65, 191, NULL},
};

extern void Init900(void);
void Init900(void)
{
	IDSC(desc_900, 0, 899);
	IDSC(desc_900 + 1, 1, 899);
	IDSC(desc_900 + 32, 384, 899);
	IDSC(desc_900 + 51, 361, 899);
}


#ifdef __cplusplus
}
#endif
