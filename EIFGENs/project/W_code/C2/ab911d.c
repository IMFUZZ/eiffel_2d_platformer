/*
 * Class ABSOLUTE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_911 [] = {238,910,0xFFFF};
static EIF_TYPE_INDEX gen_type1_911 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_911 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_911 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_911 [] = {943,910,0xFFFF};


static struct desc_info desc_911[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_911},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{1446, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 910, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_911},
	{14, (BODY_INDEX)-1, 0, gen_type2_911},
	{15, (BODY_INDEX)-1, 910, NULL},
	{16, (BODY_INDEX)-1, 910, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_911},
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
	{28, (BODY_INDEX)-1, 910, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 910, NULL},
	{14049, (BODY_INDEX)-1, 191, NULL},
	{1443, (BODY_INDEX)-1, 191, NULL},
	{1444, (BODY_INDEX)-1, 191, NULL},
	{1445, (BODY_INDEX)-1, 191, NULL},
	{1447, (BODY_INDEX)-1, 206, NULL},
	{1448, (BODY_INDEX)-1, 910, NULL},
	{1449, (BODY_INDEX)-1, 910, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 910, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 906, NULL},
	{14050, (BODY_INDEX)-1, 943, gen_type4_911},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 906, NULL},
};

extern void Init911(void);
void Init911(void)
{
	IDSC(desc_911, 0, 910);
	IDSC(desc_911 + 1, 1, 910);
	IDSC(desc_911 + 32, 207, 910);
	IDSC(desc_911 + 36, 292, 910);
	IDSC(desc_911 + 39, 396, 910);
}


#ifdef __cplusplus
}
#endif