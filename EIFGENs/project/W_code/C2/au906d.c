/*
 * Class AUDIO_LISTENER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_906 [] = {238,905,0xFFFF};
static EIF_TYPE_INDEX gen_type1_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_906 [] = {0xFFF9,3,174,179,179,179,0xFFFF};
static EIF_TYPE_INDEX gen_type5_906 [] = {0xFFF9,3,174,179,179,179,0xFFFF};
static EIF_TYPE_INDEX gen_type6_906 [] = {0xFFF9,3,174,179,179,179,0xFFFF};
static EIF_TYPE_INDEX gen_type7_906 [] = {0xFFF9,6,174,179,179,179,179,179,179,0xFFFF};
static EIF_TYPE_INDEX gen_type8_906 [] = {0xFFF9,6,174,179,179,179,179,179,179,0xFFFF};


static struct desc_info desc_906[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_906},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 905, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_906},
	{14, (BODY_INDEX)-1, 0, gen_type2_906},
	{15, (BODY_INDEX)-1, 905, NULL},
	{16, (BODY_INDEX)-1, 905, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_906},
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
	{28, (BODY_INDEX)-1, 905, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 905, NULL},
	{13856, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13857, (BODY_INDEX)-1, 191, NULL},
	{13858, 0, 206, NULL},
	{13914, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13915, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13916, (BODY_INDEX)-1, 174, gen_type4_906},
	{13917, (BODY_INDEX)-1, 174, gen_type5_906},
	{13925, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13918, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13926, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13919, (BODY_INDEX)-1, 174, gen_type6_906},
	{13920, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13921, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13922, (BODY_INDEX)-1, 174, gen_type7_906},
	{13923, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13924, (BODY_INDEX)-1, 174, gen_type8_906},
};

extern void Init906(void);
void Init906(void)
{
	IDSC(desc_906, 0, 905);
	IDSC(desc_906 + 1, 1, 905);
	IDSC(desc_906 + 32, 359, 905);
	IDSC(desc_906 + 35, 377, 905);
	IDSC(desc_906 + 43, 357, 905);
}


#ifdef __cplusplus
}
#endif