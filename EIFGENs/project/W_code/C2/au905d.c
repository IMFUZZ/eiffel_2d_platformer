/*
 * Class AUDIO_3D_OBJECT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_905 [] = {238,904,0xFFFF};
static EIF_TYPE_INDEX gen_type1_905 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_905 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_905 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_905 [] = {0xFFF9,3,174,179,179,179,0xFFFF};
static EIF_TYPE_INDEX gen_type5_905 [] = {0xFFF9,3,174,179,179,179,0xFFFF};
static EIF_TYPE_INDEX gen_type6_905 [] = {0xFFF9,3,174,179,179,179,0xFFFF};


static struct desc_info desc_905[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_905},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 904, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_905},
	{14, (BODY_INDEX)-1, 0, gen_type2_905},
	{15, (BODY_INDEX)-1, 904, NULL},
	{16, (BODY_INDEX)-1, 904, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_905},
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
	{28, (BODY_INDEX)-1, 904, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 904, NULL},
	{13856, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13857, (BODY_INDEX)-1, 191, NULL},
	{13858, 0, 206, NULL},
	{13914, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13915, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13916, (BODY_INDEX)-1, 174, gen_type4_905},
	{13917, (BODY_INDEX)-1, 174, gen_type5_905},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13918, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13919, (BODY_INDEX)-1, 174, gen_type6_905},
};

extern void Init905(void);
void Init905(void)
{
	IDSC(desc_905, 0, 904);
	IDSC(desc_905 + 1, 1, 904);
	IDSC(desc_905 + 32, 359, 904);
	IDSC(desc_905 + 35, 377, 904);
}


#ifdef __cplusplus
}
#endif