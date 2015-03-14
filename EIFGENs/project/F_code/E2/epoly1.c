#include "epoly1.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R11[885])();
void R11_init () {
	{long i; for (i = 0; i < 32; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 34; i < 167; i++) R11[i] = (char *(*)()) F1_8;}
	R11[167] = (char *(*)()) F168_8399;
	R11[168] = (char *(*)()) F1_8;
	R11[169] = (char *(*)()) F170_8447;
	R11[170] = (char *(*)()) F171_8477;
	R11[171] = (char *(*)()) F172_8503;
	{long i; for (i = 172; i < 174; i++) R11[i] = (char *(*)()) F173_1514;}
	{long i; for (i = 174; i < 516; i++) R11[i] = (char *(*)()) F1_8;}
	R11[516] = (char *(*)()) F517_3018;
	{long i; for (i = 517; i < 547; i++) R11[i] = (char *(*)()) F1_8;}
	R11[547] = (char *(*)()) F548_3130;
	R11[548] = (char *(*)()) F549_3130;
	R11[549] = (char *(*)()) F550_3130;
	R11[550] = (char *(*)()) F551_3130;
	R11[551] = (char *(*)()) F552_3130;
	R11[552] = (char *(*)()) F553_3130;
	R11[553] = (char *(*)()) F554_3130;
	R11[554] = (char *(*)()) F555_3130;
	R11[555] = (char *(*)()) F556_3130;
	R11[556] = (char *(*)()) F557_3130;
	R11[557] = (char *(*)()) F558_3130;
	R11[558] = (char *(*)()) F559_3130;
	R11[559] = (char *(*)()) F560_3130;
	R11[560] = (char *(*)()) F561_3130;
	R11[561] = (char *(*)()) F562_3130;
	R11[562] = (char *(*)()) F548_3130;
	R11[563] = (char *(*)()) F549_3130;
	R11[564] = (char *(*)()) F550_3130;
	R11[565] = (char *(*)()) F551_3130;
	R11[566] = (char *(*)()) F552_3130;
	R11[567] = (char *(*)()) F553_3130;
	R11[568] = (char *(*)()) F554_3130;
	R11[569] = (char *(*)()) F555_3130;
	R11[570] = (char *(*)()) F556_3130;
	R11[571] = (char *(*)()) F557_3130;
	R11[572] = (char *(*)()) F558_3130;
	R11[573] = (char *(*)()) F559_3130;
	R11[574] = (char *(*)()) F560_3130;
	R11[575] = (char *(*)()) F561_3130;
	R11[576] = (char *(*)()) F562_3130;
	R11[577] = (char *(*)()) F548_3130;
	R11[578] = (char *(*)()) F552_3130;
	R11[579] = (char *(*)()) F550_3130;
	R11[580] = (char *(*)()) F552_3130;
	R11[581] = (char *(*)()) F550_3130;
	R11[582] = (char *(*)()) F548_3130;
	{long i; for (i = 583; i < 598; i++) R11[i] = (char *(*)()) F1_8;}
	R11[598] = (char *(*)()) F599_3545;
	R11[599] = (char *(*)()) F600_3545;
	R11[600] = (char *(*)()) F601_3545;
	R11[601] = (char *(*)()) F602_3545;
	R11[602] = (char *(*)()) F603_3545;
	R11[603] = (char *(*)()) F604_3545;
	R11[604] = (char *(*)()) F605_3545;
	R11[605] = (char *(*)()) F606_3545;
	R11[606] = (char *(*)()) F607_3545;
	R11[607] = (char *(*)()) F608_3545;
	R11[608] = (char *(*)()) F609_3545;
	R11[609] = (char *(*)()) F610_3545;
	R11[610] = (char *(*)()) F611_3545;
	R11[611] = (char *(*)()) F612_3545;
	R11[612] = (char *(*)()) F613_3545;
	{long i; for (i = 613; i < 620; i++) R11[i] = (char *(*)()) F1_8;}
	R11[620] = (char *(*)()) F621_3980;
	R11[621] = (char *(*)()) F1_8;
	{long i; for (i = 622; i < 624; i++) R11[i] = (char *(*)()) F623_4122;}
	R11[624] = (char *(*)()) F1_8;
	R11[625] = (char *(*)()) F626_4494;
	R11[626] = (char *(*)()) F1_8;
	R11[627] = (char *(*)()) F628_4544;
	R11[628] = (char *(*)()) F629_4544;
	R11[629] = (char *(*)()) F630_4544;
	R11[630] = (char *(*)()) F631_4544;
	R11[631] = (char *(*)()) F632_4544;
	R11[632] = (char *(*)()) F633_4639;
	R11[633] = (char *(*)()) F634_4639;
	R11[634] = (char *(*)()) F628_4544;
	R11[635] = (char *(*)()) F636_4694;
	R11[636] = (char *(*)()) F637_4694;
	R11[637] = (char *(*)()) F638_4694;
	R11[638] = (char *(*)()) F639_4694;
	R11[639] = (char *(*)()) F640_4694;
	R11[640] = (char *(*)()) F641_4694;
	R11[641] = (char *(*)()) F642_4694;
	R11[642] = (char *(*)()) F643_4694;
	R11[643] = (char *(*)()) F644_4694;
	R11[644] = (char *(*)()) F645_4694;
	R11[645] = (char *(*)()) F646_4694;
	R11[646] = (char *(*)()) F647_4694;
	R11[647] = (char *(*)()) F648_4694;
	R11[648] = (char *(*)()) F649_4694;
	R11[649] = (char *(*)()) F650_4694;
	R11[650] = (char *(*)()) F636_4694;
	R11[651] = (char *(*)()) F640_4694;
	R11[652] = (char *(*)()) F638_4694;
	{long i; for (i = 653; i < 655; i++) R11[i] = (char *(*)()) F636_4694;}
	{long i; for (i = 655; i < 681; i++) R11[i] = (char *(*)()) F1_8;}
	R11[681] = (char *(*)()) F682_3651;
	{long i; for (i = 682; i < 690; i++) R11[i] = (char *(*)()) F1_8;}
	R11[690] = (char *(*)()) F691_4864;
	R11[691] = (char *(*)()) F692_4899;
	R11[692] = (char *(*)()) F693_4899;
	R11[693] = (char *(*)()) F694_4899;
	R11[694] = (char *(*)()) F695_4899;
	R11[695] = (char *(*)()) F696_4899;
	R11[696] = (char *(*)()) F697_4899;
	R11[697] = (char *(*)()) F698_4899;
	R11[698] = (char *(*)()) F699_4899;
	R11[699] = (char *(*)()) F700_4899;
	R11[700] = (char *(*)()) F701_4899;
	R11[701] = (char *(*)()) F702_4899;
	R11[702] = (char *(*)()) F703_4899;
	R11[703] = (char *(*)()) F704_4899;
	R11[704] = (char *(*)()) F705_4899;
	R11[705] = (char *(*)()) F706_4899;
	R11[706] = (char *(*)()) F707_4899;
	R11[707] = (char *(*)()) F708_4899;
	R11[708] = (char *(*)()) F709_4899;
	R11[709] = (char *(*)()) F710_4899;
	R11[710] = (char *(*)()) F711_4899;
	R11[711] = (char *(*)()) F712_4899;
	R11[712] = (char *(*)()) F713_4899;
	R11[713] = (char *(*)()) F714_4899;
	R11[714] = (char *(*)()) F715_4899;
	R11[715] = (char *(*)()) F716_4899;
	R11[716] = (char *(*)()) F717_4899;
	R11[717] = (char *(*)()) F718_4899;
	R11[718] = (char *(*)()) F719_4899;
	R11[719] = (char *(*)()) F720_4899;
	R11[720] = (char *(*)()) F721_4899;
	R11[721] = (char *(*)()) F722_4899;
	R11[722] = (char *(*)()) F723_4899;
	R11[723] = (char *(*)()) F724_4899;
	R11[724] = (char *(*)()) F725_4899;
	R11[725] = (char *(*)()) F726_4899;
	R11[726] = (char *(*)()) F727_4899;
	R11[727] = (char *(*)()) F728_4899;
	R11[728] = (char *(*)()) F729_4899;
	R11[729] = (char *(*)()) F730_4899;
	R11[730] = (char *(*)()) F731_4899;
	R11[731] = (char *(*)()) F732_4899;
	R11[732] = (char *(*)()) F733_4899;
	R11[733] = (char *(*)()) F734_4899;
	R11[734] = (char *(*)()) F735_4899;
	R11[735] = (char *(*)()) F736_4899;
	R11[736] = (char *(*)()) F737_4899;
	R11[737] = (char *(*)()) F738_4940;
	{long i; for (i = 738; i < 741; i++) R11[i] = (char *(*)()) F739_5099;}
	{long i; for (i = 741; i < 744; i++) R11[i] = (char *(*)()) F742_5198;}
	{long i; for (i = 744; i < 747; i++) R11[i] = (char *(*)()) F745_5252;}
	{long i; for (i = 747; i < 750; i++) R11[i] = (char *(*)()) F748_5291;}
	{long i; for (i = 750; i < 753; i++) R11[i] = (char *(*)()) F751_5339;}
	{long i; for (i = 753; i < 756; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 756; i < 759; i++) R11[i] = (char *(*)()) F757_5458;}
	{long i; for (i = 759; i < 762; i++) R11[i] = (char *(*)()) F760_5513;}
	{long i; for (i = 762; i < 765; i++) R11[i] = (char *(*)()) F763_5604;}
	{long i; for (i = 765; i < 768; i++) R11[i] = (char *(*)()) F766_5694;}
	{long i; for (i = 768; i < 771; i++) R11[i] = (char *(*)()) F769_5785;}
	{long i; for (i = 771; i < 774; i++) R11[i] = (char *(*)()) F772_5880;}
	{long i; for (i = 774; i < 777; i++) R11[i] = (char *(*)()) F775_5975;}
	{long i; for (i = 777; i < 810; i++) R11[i] = (char *(*)()) F778_6059;}
	{long i; for (i = 810; i < 812; i++) R11[i] = (char *(*)()) F811_6096;}
	R11[812] = (char *(*)()) F813_6134;
	{long i; for (i = 813; i < 815; i++) R11[i] = (char *(*)()) F814_6134;}
	R11[815] = (char *(*)()) F173_1514;
	R11[816] = (char *(*)()) F817_6258;
	R11[817] = (char *(*)()) F173_1514;
	R11[818] = (char *(*)()) F817_6258;
	{long i; for (i = 819; i < 821; i++) R11[i] = (char *(*)()) F820_6481;}
	R11[821] = (char *(*)()) F173_1514;
	R11[822] = (char *(*)()) F817_6258;
	R11[823] = (char *(*)()) F820_6481;
	{long i; for (i = 824; i < 877; i++) R11[i] = (char *(*)()) F1_8;}
	R11[877] = (char *(*)()) F173_1514;
	{long i; for (i = 878; i < 881; i++) R11[i] = (char *(*)()) F1_8;}
	R11[881] = (char *(*)()) F173_1514;
	R11[882] = (char *(*)()) F1_8;
	R11[883] = (char *(*)()) F884_9095;
	R11[884] = (char *(*)()) F1_8;
}

char *(*R28[885])();
void R28_init () {
	{long i; for (i = 0; i < 6; i++) R28[i] = (char *(*)()) F1_25;}
	R28[6] = (char *(*)()) F7_7094;
	{long i; for (i = 7; i < 32; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 34; i < 85; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 85; i < 124; i++) R28[i] = (char *(*)()) F86_1386;}
	{long i; for (i = 124; i < 167; i++) R28[i] = (char *(*)()) F1_25;}
	R28[167] = (char *(*)()) F168_8424;
	{long i; for (i = 168; i < 634; i++) R28[i] = (char *(*)()) F1_25;}
	R28[634] = (char *(*)()) F635_4649;
	{long i; for (i = 635; i < 690; i++) R28[i] = (char *(*)()) F1_25;}
	R28[690] = (char *(*)()) F691_4868;
	R28[691] = (char *(*)()) F692_4906;
	R28[692] = (char *(*)()) F693_4906;
	R28[693] = (char *(*)()) F694_4906;
	R28[694] = (char *(*)()) F695_4906;
	R28[695] = (char *(*)()) F696_4906;
	R28[696] = (char *(*)()) F697_4906;
	R28[697] = (char *(*)()) F698_4906;
	R28[698] = (char *(*)()) F699_4906;
	R28[699] = (char *(*)()) F700_4906;
	R28[700] = (char *(*)()) F701_4906;
	R28[701] = (char *(*)()) F702_4906;
	R28[702] = (char *(*)()) F703_4906;
	R28[703] = (char *(*)()) F704_4906;
	R28[704] = (char *(*)()) F705_4906;
	R28[705] = (char *(*)()) F706_4906;
	R28[706] = (char *(*)()) F707_4906;
	R28[707] = (char *(*)()) F708_4906;
	R28[708] = (char *(*)()) F709_4906;
	R28[709] = (char *(*)()) F710_4906;
	R28[710] = (char *(*)()) F711_4906;
	R28[711] = (char *(*)()) F712_4906;
	R28[712] = (char *(*)()) F713_4906;
	R28[713] = (char *(*)()) F714_4906;
	R28[714] = (char *(*)()) F715_4906;
	R28[715] = (char *(*)()) F716_4906;
	R28[716] = (char *(*)()) F717_4906;
	R28[717] = (char *(*)()) F718_4906;
	R28[718] = (char *(*)()) F719_4906;
	R28[719] = (char *(*)()) F720_4906;
	R28[720] = (char *(*)()) F721_4906;
	R28[721] = (char *(*)()) F722_4906;
	R28[722] = (char *(*)()) F723_4906;
	R28[723] = (char *(*)()) F724_4906;
	R28[724] = (char *(*)()) F725_4906;
	R28[725] = (char *(*)()) F726_4906;
	R28[726] = (char *(*)()) F727_4906;
	R28[727] = (char *(*)()) F728_4906;
	R28[728] = (char *(*)()) F729_4906;
	R28[729] = (char *(*)()) F730_4906;
	R28[730] = (char *(*)()) F731_4906;
	R28[731] = (char *(*)()) F732_4906;
	R28[732] = (char *(*)()) F733_4906;
	R28[733] = (char *(*)()) F734_4906;
	R28[734] = (char *(*)()) F735_4906;
	R28[735] = (char *(*)()) F736_4906;
	R28[736] = (char *(*)()) F737_4906;
	R28[737] = (char *(*)()) F1_25;
	{long i; for (i = 738; i < 741; i++) R28[i] = (char *(*)()) F739_5155;}
	R28[741] = (char *(*)()) F742_5225;
	R28[742] = (char *(*)()) F743_5243;
	R28[743] = (char *(*)()) F744_5243;
	{long i; for (i = 744; i < 747; i++) R28[i] = (char *(*)()) F745_5259;}
	{long i; for (i = 747; i < 750; i++) R28[i] = (char *(*)()) F748_5298;}
	{long i; for (i = 750; i < 753; i++) R28[i] = (char *(*)()) F751_5394;}
	{long i; for (i = 753; i < 756; i++) R28[i] = (char *(*)()) F754_5437;}
	R28[756] = (char *(*)()) F757_5485;
	R28[757] = (char *(*)()) F758_5503;
	R28[758] = (char *(*)()) F759_5503;
	{long i; for (i = 759; i < 762; i++) R28[i] = (char *(*)()) F760_5567;}
	{long i; for (i = 762; i < 765; i++) R28[i] = (char *(*)()) F763_5657;}
	{long i; for (i = 765; i < 768; i++) R28[i] = (char *(*)()) F766_5748;}
	{long i; for (i = 768; i < 771; i++) R28[i] = (char *(*)()) F769_5841;}
	{long i; for (i = 771; i < 774; i++) R28[i] = (char *(*)()) F772_5936;}
	{long i; for (i = 774; i < 777; i++) R28[i] = (char *(*)()) F775_6028;}
	{long i; for (i = 777; i < 808; i++) R28[i] = (char *(*)()) F778_6074;}
	R28[808] = (char *(*)()) F809_6087;
	R28[809] = (char *(*)()) F810_6087;
	{long i; for (i = 810; i < 816; i++) R28[i] = (char *(*)()) F1_25;}
	R28[816] = (char *(*)()) F817_6277;
	R28[817] = (char *(*)()) F1_25;
	R28[818] = (char *(*)()) F817_6277;
	{long i; for (i = 819; i < 821; i++) R28[i] = (char *(*)()) F820_6500;}
	R28[821] = (char *(*)()) F1_25;
	R28[822] = (char *(*)()) F817_6277;
	R28[823] = (char *(*)()) F820_6500;
	{long i; for (i = 824; i < 877; i++) R28[i] = (char *(*)()) F1_25;}
	R28[877] = (char *(*)()) F878_9009;
	{long i; for (i = 878; i < 881; i++) R28[i] = (char *(*)()) F1_25;}
	R28[881] = (char *(*)()) F882_9071;
	R28[882] = (char *(*)()) F1_25;
	R28[883] = (char *(*)()) F884_9110;
	R28[884] = (char *(*)()) F1_25;
}

char *(*R1084[2])();
void R1084_init () {
	R1084[0] = (char *(*)()) F75_1159;
	R1084[1] = (char *(*)()) F76_1170;
}

char *(*R1090[2])();
void R1090_init () {
	R1090[0] = (char *(*)()) F75_1165;
	R1090[1] = (char *(*)()) F76_1176;
}

char *(*R1093[2])();
void R1093_init () {
	R1093[0] = (char *(*)()) F75_1168;
	R1093[1] = (char *(*)()) F76_1179;
}

char *(*R1263[39])();
void R1263_init () {
	R1263[0] = (char *(*)()) F86_1373;
	R1263[1] = (char *(*)()) F87_1397;
	R1263[4] = (char *(*)()) F90_1399;
	R1263[6] = (char *(*)()) F92_1403;
	R1263[7] = (char *(*)()) F93_1420;
	R1263[8] = (char *(*)()) F94_1424;
	R1263[10] = (char *(*)()) F96_1428;
	R1263[11] = (char *(*)()) F97_1430;
	R1263[12] = (char *(*)()) F98_1432;
	R1263[14] = (char *(*)()) F100_1434;
	R1263[15] = (char *(*)()) F101_1438;
	R1263[18] = (char *(*)()) F104_1440;
	R1263[19] = (char *(*)()) F105_1442;
	R1263[21] = (char *(*)()) F107_1446;
	R1263[22] = (char *(*)()) F108_1448;
	R1263[23] = (char *(*)()) F109_1450;
	R1263[25] = (char *(*)()) F111_1456;
	R1263[26] = (char *(*)()) F112_1458;
	R1263[27] = (char *(*)()) F113_1462;
	R1263[28] = (char *(*)()) F114_1466;
	R1263[30] = (char *(*)()) F116_1468;
	R1263[31] = (char *(*)()) F117_1470;
	R1263[33] = (char *(*)()) F119_1472;
	R1263[34] = (char *(*)()) F120_1474;
	R1263[35] = (char *(*)()) F121_1476;
	R1263[36] = (char *(*)()) F122_1478;
	R1263[37] = (char *(*)()) F123_1480;
	R1263[38] = (char *(*)()) F124_1482;
}

char *(*R1333[717])();
void R1333_init () {
	R1333[0] = (char *(*)()) F168_8401;
	R1333[2] = (char *(*)()) F170_8446;
	R1333[3] = (char *(*)()) F171_8476;
	R1333[4] = (char *(*)()) F172_8502;
	R1333[6] = (char *(*)()) F174_8523;
	R1333[523] = (char *(*)()) F691_4863;
	R1333[524] = (char *(*)()) F692_4900;
	R1333[525] = (char *(*)()) F693_4900;
	R1333[526] = (char *(*)()) F694_4900;
	R1333[527] = (char *(*)()) F695_4900;
	R1333[528] = (char *(*)()) F696_4900;
	R1333[529] = (char *(*)()) F697_4900;
	R1333[530] = (char *(*)()) F698_4900;
	R1333[531] = (char *(*)()) F699_4900;
	R1333[532] = (char *(*)()) F700_4900;
	R1333[533] = (char *(*)()) F701_4900;
	R1333[534] = (char *(*)()) F702_4900;
	R1333[535] = (char *(*)()) F703_4900;
	R1333[536] = (char *(*)()) F704_4900;
	R1333[537] = (char *(*)()) F705_4900;
	R1333[538] = (char *(*)()) F706_4900;
	R1333[539] = (char *(*)()) F707_4900;
	R1333[540] = (char *(*)()) F708_4900;
	R1333[541] = (char *(*)()) F709_4900;
	R1333[542] = (char *(*)()) F710_4900;
	R1333[543] = (char *(*)()) F711_4900;
	R1333[544] = (char *(*)()) F712_4900;
	R1333[545] = (char *(*)()) F713_4900;
	R1333[546] = (char *(*)()) F714_4900;
	R1333[547] = (char *(*)()) F715_4900;
	R1333[548] = (char *(*)()) F716_4900;
	R1333[549] = (char *(*)()) F717_4900;
	R1333[550] = (char *(*)()) F718_4900;
	R1333[551] = (char *(*)()) F719_4900;
	R1333[552] = (char *(*)()) F720_4900;
	R1333[553] = (char *(*)()) F721_4900;
	R1333[554] = (char *(*)()) F722_4900;
	R1333[555] = (char *(*)()) F723_4900;
	R1333[556] = (char *(*)()) F724_4900;
	R1333[557] = (char *(*)()) F725_4900;
	R1333[558] = (char *(*)()) F726_4900;
	R1333[559] = (char *(*)()) F727_4900;
	R1333[560] = (char *(*)()) F728_4900;
	R1333[561] = (char *(*)()) F729_4900;
	R1333[562] = (char *(*)()) F730_4900;
	R1333[563] = (char *(*)()) F731_4900;
	R1333[564] = (char *(*)()) F732_4900;
	R1333[565] = (char *(*)()) F733_4900;
	R1333[566] = (char *(*)()) F734_4900;
	R1333[567] = (char *(*)()) F735_4900;
	R1333[568] = (char *(*)()) F736_4900;
	R1333[569] = (char *(*)()) F737_4900;
	R1333[571] = (char *(*)()) F739_5098;
	R1333[572] = (char *(*)()) F740_5157_1333;
	R1333[573] = (char *(*)()) F741_5157_1333;
	R1333[574] = (char *(*)()) F742_5197;
	R1333[575] = (char *(*)()) F743_5227_1333;
	R1333[576] = (char *(*)()) F744_5227_1333;
	{long i; for (i = 577; i < 580; i++) R1333[i] = (char *(*)()) F745_5251;}
	{long i; for (i = 580; i < 583; i++) R1333[i] = (char *(*)()) F748_5290;}
	R1333[583] = (char *(*)()) F751_5338;
	R1333[584] = (char *(*)()) F752_5396_1333;
	R1333[585] = (char *(*)()) F753_5396_1333;
	R1333[589] = (char *(*)()) F757_5457;
	R1333[590] = (char *(*)()) F758_5487_1333;
	R1333[591] = (char *(*)()) F759_5487_1333;
	R1333[592] = (char *(*)()) F760_5512;
	R1333[593] = (char *(*)()) F761_5568_1333;
	R1333[594] = (char *(*)()) F762_5568_1333;
	R1333[595] = (char *(*)()) F763_5603;
	R1333[596] = (char *(*)()) F764_5658_1333;
	R1333[597] = (char *(*)()) F765_5658_1333;
	R1333[598] = (char *(*)()) F766_5693;
	R1333[599] = (char *(*)()) F767_5749_1333;
	R1333[600] = (char *(*)()) F768_5749_1333;
	R1333[601] = (char *(*)()) F769_5784;
	R1333[602] = (char *(*)()) F770_5843_1333;
	R1333[603] = (char *(*)()) F771_5843_1333;
	R1333[604] = (char *(*)()) F772_5879;
	R1333[605] = (char *(*)()) F773_5938_1333;
	R1333[606] = (char *(*)()) F774_5938_1333;
	R1333[607] = (char *(*)()) F775_5974;
	R1333[608] = (char *(*)()) F776_6029_1333;
	R1333[609] = (char *(*)()) F777_6029_1333;
	R1333[649] = (char *(*)()) F817_6263;
	R1333[651] = (char *(*)()) F817_6263;
	{long i; for (i = 652; i < 654; i++) R1333[i] = (char *(*)()) F820_6486;}
	R1333[655] = (char *(*)()) F817_6263;
	R1333[656] = (char *(*)()) F820_6486;
	R1333[710] = (char *(*)()) F878_8983;
	R1333[714] = (char *(*)()) F882_9054;
	R1333[716] = (char *(*)()) F884_9094;
}
static EIF_BOOLEAN F740_5157_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F740_5157(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F741_5157_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F741_5157(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F743_5227_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F743_5227(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F744_5227_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F744_5227(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F752_5396_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F752_5396(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F753_5396_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F753_5396(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F758_5487_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F758_5487(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F759_5487_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F759_5487(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F761_5568_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F761_5568(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F762_5568_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F762_5568(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F764_5658_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F764_5658(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F765_5658_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F765_5658(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F767_5749_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F767_5749(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F768_5749_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F768_5749(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F770_5843_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F770_5843(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F771_5843_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F771_5843(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F773_5938_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F773_5938(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F774_5938_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F774_5938(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F776_6029_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F776_6029(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F777_6029_1333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F777_6029(Current, *(EIF_NATURAL_64 *)arg1);
}

char *(*R1334[712])();
void R1334_init () {
	{long i; for (i = 0; i < 2; i++) R1334[i] = (char *(*)()) F173_1511;}
	R1334[518] = (char *(*)()) F173_1511;
	R1334[519] = (char *(*)()) F692_4901;
	R1334[520] = (char *(*)()) F693_4901;
	R1334[521] = (char *(*)()) F694_4901;
	R1334[522] = (char *(*)()) F695_4901;
	R1334[523] = (char *(*)()) F696_4901;
	R1334[524] = (char *(*)()) F697_4901;
	R1334[525] = (char *(*)()) F698_4901;
	R1334[526] = (char *(*)()) F699_4901;
	R1334[527] = (char *(*)()) F700_4901;
	R1334[528] = (char *(*)()) F701_4901;
	R1334[529] = (char *(*)()) F702_4901;
	R1334[530] = (char *(*)()) F703_4901;
	R1334[531] = (char *(*)()) F704_4901;
	R1334[532] = (char *(*)()) F705_4901;
	R1334[533] = (char *(*)()) F706_4901;
	R1334[534] = (char *(*)()) F707_4901;
	R1334[535] = (char *(*)()) F708_4901;
	R1334[536] = (char *(*)()) F709_4901;
	R1334[537] = (char *(*)()) F710_4901;
	R1334[538] = (char *(*)()) F711_4901;
	R1334[539] = (char *(*)()) F712_4901;
	R1334[540] = (char *(*)()) F713_4901;
	R1334[541] = (char *(*)()) F714_4901;
	R1334[542] = (char *(*)()) F715_4901;
	R1334[543] = (char *(*)()) F716_4901;
	R1334[544] = (char *(*)()) F717_4901;
	R1334[545] = (char *(*)()) F718_4901;
	R1334[546] = (char *(*)()) F719_4901;
	R1334[547] = (char *(*)()) F720_4901;
	R1334[548] = (char *(*)()) F721_4901;
	R1334[549] = (char *(*)()) F722_4901;
	R1334[550] = (char *(*)()) F723_4901;
	R1334[551] = (char *(*)()) F724_4901;
	R1334[552] = (char *(*)()) F725_4901;
	R1334[553] = (char *(*)()) F726_4901;
	R1334[554] = (char *(*)()) F727_4901;
	R1334[555] = (char *(*)()) F728_4901;
	R1334[556] = (char *(*)()) F729_4901;
	R1334[557] = (char *(*)()) F730_4901;
	R1334[558] = (char *(*)()) F731_4901;
	R1334[559] = (char *(*)()) F732_4901;
	R1334[560] = (char *(*)()) F733_4901;
	R1334[561] = (char *(*)()) F734_4901;
	R1334[562] = (char *(*)()) F735_4901;
	R1334[563] = (char *(*)()) F736_4901;
	R1334[564] = (char *(*)()) F737_4901;
	{long i; for (i = 566; i < 581; i++) R1334[i] = (char *(*)()) F173_1511;}
	{long i; for (i = 584; i < 605; i++) R1334[i] = (char *(*)()) F173_1511;}
	{long i; for (i = 643; i < 652; i++) R1334[i] = (char *(*)()) F173_1511;}
	R1334[705] = (char *(*)()) F173_1511;
	R1334[709] = (char *(*)()) F173_1511;
	R1334[711] = (char *(*)()) F173_1511;
}

char *(*R1666[23])();
void R1666_init () {
	R1666[0] = (char *(*)()) F464_2905;
	R1666[1] = (char *(*)()) F465_2905_1666;
	R1666[2] = (char *(*)()) F466_2905_1666;
	R1666[3] = (char *(*)()) F467_2905_1666;
	R1666[4] = (char *(*)()) F468_2905_1666;
	R1666[5] = (char *(*)()) F469_2905_1666;
	R1666[6] = (char *(*)()) F470_2905_1666;
	R1666[7] = (char *(*)()) F471_2905_1666;
	R1666[8] = (char *(*)()) F472_2905_1666;
	R1666[9] = (char *(*)()) F473_2905_1666;
	R1666[10] = (char *(*)()) F474_2905_1666;
	R1666[11] = (char *(*)()) F475_2905_1666;
	R1666[12] = (char *(*)()) F476_2905_1666;
	R1666[13] = (char *(*)()) F477_2905_1666;
	R1666[14] = (char *(*)()) F478_2905_1666;
	R1666[15] = (char *(*)()) F479_2928;
	R1666[16] = (char *(*)()) F480_2928;
	R1666[17] = (char *(*)()) F481_2928_1666;
	R1666[18] = (char *(*)()) F482_2928_1666;
	R1666[19] = (char *(*)()) F483_2928_1666;
	R1666[20] = (char *(*)()) F484_2933;
	R1666[21] = (char *(*)()) F485_2933_1666;
	R1666[22] = (char *(*)()) F486_2933_1666;
}
static EIF_REFERENCE F465_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F465_2905(Current);
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
static EIF_REFERENCE F466_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F466_2905(Current);
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
static EIF_REFERENCE F467_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F467_2905(Current);
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
static EIF_REFERENCE F468_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F468_2905(Current);
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
static EIF_REFERENCE F469_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F469_2905(Current);
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
static EIF_REFERENCE F470_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F470_2905(Current);
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
static EIF_REFERENCE F471_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F471_2905(Current);
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
static EIF_REFERENCE F472_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F472_2905(Current);
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
static EIF_REFERENCE F473_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F473_2905(Current);
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
static EIF_REFERENCE F474_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F474_2905(Current);
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
static EIF_REFERENCE F475_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F475_2905(Current);
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
static EIF_REFERENCE F476_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F476_2905(Current);
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
static EIF_REFERENCE F477_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F477_2905(Current);
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
static EIF_REFERENCE F478_2905_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F478_2905(Current);
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
static EIF_REFERENCE F481_2928_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F481_2928(Current);
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
static EIF_REFERENCE F482_2928_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F482_2928(Current);
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
static EIF_REFERENCE F483_2928_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F483_2928(Current);
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
static EIF_REFERENCE F485_2933_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F485_2933(Current);
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
static EIF_REFERENCE F486_2933_1666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F486_2933(Current);
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

char *(*R1667[32])();
void R1667_init () {
	R1667[0] = (char *(*)()) F455_2876;
	R1667[9] = (char *(*)()) F464_2917;
	R1667[10] = (char *(*)()) F465_2917;
	R1667[11] = (char *(*)()) F466_2917;
	R1667[12] = (char *(*)()) F467_2917;
	R1667[13] = (char *(*)()) F468_2917;
	R1667[14] = (char *(*)()) F469_2917;
	R1667[15] = (char *(*)()) F470_2917;
	R1667[16] = (char *(*)()) F471_2917;
	R1667[17] = (char *(*)()) F472_2917;
	R1667[18] = (char *(*)()) F473_2917;
	R1667[19] = (char *(*)()) F474_2917;
	R1667[20] = (char *(*)()) F475_2917;
	R1667[21] = (char *(*)()) F476_2917;
	R1667[22] = (char *(*)()) F477_2917;
	R1667[23] = (char *(*)()) F478_2917;
	R1667[24] = (char *(*)()) F479_2930;
	R1667[25] = (char *(*)()) F480_2930;
	R1667[26] = (char *(*)()) F481_2930;
	R1667[27] = (char *(*)()) F482_2930;
	R1667[28] = (char *(*)()) F483_2930;
	R1667[29] = (char *(*)()) F484_2934;
	R1667[30] = (char *(*)()) F485_2934;
	R1667[31] = (char *(*)()) F486_2934;
}

char *(*R1668[32])();
void R1668_init () {
	R1668[0] = (char *(*)()) F455_2878;
	R1668[9] = (char *(*)()) F464_2925;
	R1668[10] = (char *(*)()) F465_2925;
	R1668[11] = (char *(*)()) F466_2925;
	R1668[12] = (char *(*)()) F467_2925;
	R1668[13] = (char *(*)()) F468_2925;
	R1668[14] = (char *(*)()) F469_2925;
	R1668[15] = (char *(*)()) F470_2925;
	R1668[16] = (char *(*)()) F471_2925;
	R1668[17] = (char *(*)()) F472_2925;
	R1668[18] = (char *(*)()) F473_2925;
	R1668[19] = (char *(*)()) F474_2925;
	R1668[20] = (char *(*)()) F475_2925;
	R1668[21] = (char *(*)()) F476_2925;
	R1668[22] = (char *(*)()) F477_2925;
	R1668[23] = (char *(*)()) F478_2925;
	R1668[24] = (char *(*)()) F479_2931;
	R1668[25] = (char *(*)()) F480_2931;
	R1668[26] = (char *(*)()) F481_2931;
	R1668[27] = (char *(*)()) F482_2931;
	R1668[28] = (char *(*)()) F483_2931;
	R1668[29] = (char *(*)()) F484_2936;
	R1668[30] = (char *(*)()) F485_2936;
	R1668[31] = (char *(*)()) F486_2936;
}

char *(*R1672[5])();
void R1672_init () {
	R1672[0] = (char *(*)()) F479_2929;
	R1672[1] = (char *(*)()) F480_2929_1672;
	R1672[2] = (char *(*)()) F481_2929;
	R1672[3] = (char *(*)()) F482_2929_1672;
	R1672[4] = (char *(*)()) F483_2929_1672;
}
static EIF_REFERENCE F480_2929_1672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F480_2929(Current);
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
static EIF_REFERENCE F482_2929_1672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F482_2929(Current);
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
static EIF_REFERENCE F483_2929_1672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F483_2929(Current);
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

char *(*R1674[9])();
void R1674_init () {
	R1674[0] = (char *(*)()) F175_1888;
	R1674[1] = (char *(*)()) F176_1888_1674;
	R1674[2] = (char *(*)()) F177_1888_1674;
	R1674[3] = (char *(*)()) F178_1888_1674;
	R1674[4] = (char *(*)()) F179_1888_1674;
	R1674[5] = (char *(*)()) F180_1888_1674;
	R1674[6] = (char *(*)()) F175_1888;
	R1674[7] = (char *(*)()) F177_1888_1674;
	R1674[8] = (char *(*)()) F179_1888_1674;
}
static EIF_REFERENCE F176_1888_1674 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F176_1888(Current);
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
static EIF_REFERENCE F177_1888_1674 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F177_1888(Current);
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
static EIF_REFERENCE F178_1888_1674 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F178_1888(Current);
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
static EIF_REFERENCE F179_1888_1674 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F179_1888(Current);
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
static EIF_REFERENCE F180_1888_1674 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F180_1888(Current);
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

char *(*R1675[9])();
void R1675_init () {
	R1675[0] = (char *(*)()) F175_1889;
	R1675[1] = (char *(*)()) F176_1889_1675;
	R1675[2] = (char *(*)()) F177_1889_1675;
	R1675[3] = (char *(*)()) F178_1889_1675;
	R1675[4] = (char *(*)()) F179_1889_1675;
	R1675[5] = (char *(*)()) F180_1889_1675;
	R1675[6] = (char *(*)()) F175_1889;
	R1675[7] = (char *(*)()) F177_1889_1675;
	R1675[8] = (char *(*)()) F179_1889_1675;
}
static void F176_1889_1675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F176_1889(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F177_1889_1675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F177_1889(Current, *(EIF_BOOLEAN *)arg1);
}
static void F178_1889_1675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F178_1889(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F179_1889_1675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F179_1889(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F180_1889_1675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F180_1889(Current, *(EIF_INTEGER_8 *)arg1);
}

char *(*R1679[3])();
void R1679_init () {
	R1679[0] = (char *(*)()) F181_1892;
	R1679[1] = (char *(*)()) F182_1892;
	R1679[2] = (char *(*)()) F183_1892;
}

char *(*R1680[3])();
void R1680_init () {
	R1680[0] = (char *(*)()) F181_1893;
	R1680[1] = (char *(*)()) F182_1893;
	R1680[2] = (char *(*)()) F183_1893;
}

char *(*R1689[535])();
void R1689_init () {
	{long i; for (i = 0; i < 2; i++) R1689[i] = (char *(*)()) F293_1975;}
	R1689[2] = (char *(*)()) F295_1979;
	R1689[3] = (char *(*)()) F296_1979;
	R1689[4] = (char *(*)()) F297_1979;
	R1689[5] = (char *(*)()) F298_1979;
	R1689[6] = (char *(*)()) F299_1979;
	R1689[7] = (char *(*)()) F300_1979;
	R1689[8] = (char *(*)()) F301_1979;
	R1689[9] = (char *(*)()) F302_1979;
	R1689[10] = (char *(*)()) F303_1979;
	R1689[11] = (char *(*)()) F304_1979;
	R1689[12] = (char *(*)()) F305_1979;
	R1689[13] = (char *(*)()) F306_1979;
	R1689[14] = (char *(*)()) F307_1979;
	R1689[15] = (char *(*)()) F308_1979;
	R1689[16] = (char *(*)()) F309_1979;
	R1689[17] = (char *(*)()) F295_1979;
	R1689[18] = (char *(*)()) F300_1979;
	R1689[19] = (char *(*)()) F298_1979;
	R1689[20] = (char *(*)()) F295_1979;
	R1689[21] = (char *(*)()) F300_1979;
	R1689[22] = (char *(*)()) F298_1979;
	{long i; for (i = 23; i < 25; i++) R1689[i] = (char *(*)()) F295_1979;}
	R1689[25] = (char *(*)()) F297_1979;
	R1689[26] = (char *(*)()) F298_1979;
	R1689[27] = (char *(*)()) F299_1979;
	R1689[28] = (char *(*)()) F296_1979;
	R1689[29] = (char *(*)()) F300_1979;
	R1689[30] = (char *(*)()) F301_1979;
	R1689[31] = (char *(*)()) F303_1979;
	R1689[32] = (char *(*)()) F304_1979;
	R1689[33] = (char *(*)()) F305_1979;
	R1689[34] = (char *(*)()) F306_1979;
	R1689[35] = (char *(*)()) F307_1979;
	R1689[36] = (char *(*)()) F308_1979;
	R1689[37] = (char *(*)()) F302_1979;
	R1689[38] = (char *(*)()) F309_1979;
	R1689[39] = (char *(*)()) F295_1979;
	R1689[40] = (char *(*)()) F296_1979;
	R1689[41] = (char *(*)()) F297_1979;
	R1689[42] = (char *(*)()) F298_1979;
	R1689[43] = (char *(*)()) F299_1979;
	R1689[44] = (char *(*)()) F300_1979;
	R1689[45] = (char *(*)()) F301_1979;
	R1689[46] = (char *(*)()) F302_1979;
	R1689[47] = (char *(*)()) F303_1979;
	R1689[48] = (char *(*)()) F304_1979;
	R1689[49] = (char *(*)()) F305_1979;
	R1689[50] = (char *(*)()) F306_1979;
	R1689[51] = (char *(*)()) F307_1979;
	R1689[52] = (char *(*)()) F308_1979;
	R1689[53] = (char *(*)()) F309_1979;
	R1689[54] = (char *(*)()) F295_1979;
	R1689[55] = (char *(*)()) F296_1979;
	R1689[56] = (char *(*)()) F297_1979;
	R1689[57] = (char *(*)()) F298_1979;
	R1689[58] = (char *(*)()) F299_1979;
	R1689[59] = (char *(*)()) F300_1979;
	R1689[60] = (char *(*)()) F301_1979;
	R1689[61] = (char *(*)()) F302_1979;
	R1689[62] = (char *(*)()) F303_1979;
	R1689[63] = (char *(*)()) F304_1979;
	R1689[64] = (char *(*)()) F305_1979;
	R1689[65] = (char *(*)()) F306_1979;
	R1689[66] = (char *(*)()) F307_1979;
	R1689[67] = (char *(*)()) F308_1979;
	R1689[68] = (char *(*)()) F309_1979;
	R1689[114] = (char *(*)()) F295_1979;
	R1689[115] = (char *(*)()) F297_1979;
	R1689[116] = (char *(*)()) F298_1979;
	R1689[117] = (char *(*)()) F299_1979;
	R1689[118] = (char *(*)()) F300_1979;
	R1689[119] = (char *(*)()) F296_1979;
	R1689[120] = (char *(*)()) F301_1979;
	R1689[121] = (char *(*)()) F303_1979;
	R1689[122] = (char *(*)()) F304_1979;
	R1689[123] = (char *(*)()) F305_1979;
	R1689[124] = (char *(*)()) F306_1979;
	R1689[125] = (char *(*)()) F307_1979;
	R1689[126] = (char *(*)()) F308_1979;
	R1689[127] = (char *(*)()) F302_1979;
	R1689[128] = (char *(*)()) F309_1979;
	{long i; for (i = 129; i < 132; i++) R1689[i] = (char *(*)()) F293_1975;}
	R1689[224] = (char *(*)()) F298_1979;
	R1689[225] = (char *(*)()) F295_1979;
	R1689[226] = (char *(*)()) F297_1979;
	R1689[227] = (char *(*)()) F298_1979;
	R1689[228] = (char *(*)()) F299_1979;
	R1689[229] = (char *(*)()) F300_1979;
	R1689[230] = (char *(*)()) F301_1979;
	R1689[231] = (char *(*)()) F303_1979;
	R1689[232] = (char *(*)()) F296_1979;
	R1689[233] = (char *(*)()) F304_1979;
	R1689[234] = (char *(*)()) F305_1979;
	R1689[235] = (char *(*)()) F306_1979;
	R1689[236] = (char *(*)()) F307_1979;
	R1689[237] = (char *(*)()) F308_1979;
	R1689[238] = (char *(*)()) F302_1979;
	R1689[239] = (char *(*)()) F309_1979;
	R1689[240] = (char *(*)()) F295_1979;
	R1689[241] = (char *(*)()) F297_1979;
	R1689[242] = (char *(*)()) F298_1979;
	R1689[243] = (char *(*)()) F299_1979;
	R1689[244] = (char *(*)()) F300_1979;
	R1689[245] = (char *(*)()) F301_1979;
	R1689[246] = (char *(*)()) F303_1979;
	R1689[247] = (char *(*)()) F296_1979;
	R1689[248] = (char *(*)()) F304_1979;
	R1689[249] = (char *(*)()) F305_1979;
	R1689[250] = (char *(*)()) F306_1979;
	R1689[251] = (char *(*)()) F307_1979;
	R1689[252] = (char *(*)()) F308_1979;
	R1689[253] = (char *(*)()) F302_1979;
	R1689[254] = (char *(*)()) F309_1979;
	R1689[255] = (char *(*)()) F295_1979;
	R1689[256] = (char *(*)()) F297_1979;
	R1689[257] = (char *(*)()) F298_1979;
	R1689[258] = (char *(*)()) F299_1979;
	R1689[259] = (char *(*)()) F300_1979;
	R1689[260] = (char *(*)()) F301_1979;
	R1689[261] = (char *(*)()) F303_1979;
	R1689[262] = (char *(*)()) F296_1979;
	R1689[263] = (char *(*)()) F304_1979;
	R1689[264] = (char *(*)()) F305_1979;
	R1689[265] = (char *(*)()) F306_1979;
	R1689[266] = (char *(*)()) F307_1979;
	R1689[267] = (char *(*)()) F308_1979;
	R1689[268] = (char *(*)()) F302_1979;
	R1689[269] = (char *(*)()) F309_1979;
	R1689[270] = (char *(*)()) F295_1979;
	R1689[271] = (char *(*)()) F297_1979;
	R1689[272] = (char *(*)()) F298_1979;
	R1689[273] = (char *(*)()) F299_1979;
	R1689[274] = (char *(*)()) F300_1979;
	R1689[275] = (char *(*)()) F301_1979;
	R1689[276] = (char *(*)()) F303_1979;
	R1689[277] = (char *(*)()) F296_1979;
	R1689[278] = (char *(*)()) F304_1979;
	R1689[279] = (char *(*)()) F305_1979;
	R1689[280] = (char *(*)()) F306_1979;
	R1689[281] = (char *(*)()) F307_1979;
	R1689[282] = (char *(*)()) F308_1979;
	R1689[283] = (char *(*)()) F302_1979;
	R1689[284] = (char *(*)()) F309_1979;
	R1689[285] = (char *(*)()) F295_1979;
	R1689[286] = (char *(*)()) F300_1979;
	R1689[287] = (char *(*)()) F298_1979;
	R1689[288] = (char *(*)()) F300_1979;
	R1689[289] = (char *(*)()) F298_1979;
	R1689[290] = (char *(*)()) F295_1979;
	R1689[306] = (char *(*)()) F295_1979;
	R1689[307] = (char *(*)()) F297_1979;
	R1689[308] = (char *(*)()) F298_1979;
	R1689[309] = (char *(*)()) F299_1979;
	R1689[310] = (char *(*)()) F300_1979;
	R1689[311] = (char *(*)()) F301_1979;
	R1689[312] = (char *(*)()) F303_1979;
	R1689[313] = (char *(*)()) F296_1979;
	R1689[314] = (char *(*)()) F304_1979;
	R1689[315] = (char *(*)()) F305_1979;
	R1689[316] = (char *(*)()) F306_1979;
	R1689[317] = (char *(*)()) F307_1979;
	R1689[318] = (char *(*)()) F308_1979;
	R1689[319] = (char *(*)()) F302_1979;
	R1689[320] = (char *(*)()) F309_1979;
	R1689[333] = (char *(*)()) F626_4499;
	{long i; for (i = 335; i < 337; i++) R1689[i] = (char *(*)()) F295_1979;}
	{long i; for (i = 337; i < 339; i++) R1689[i] = (char *(*)()) F298_1979;}
	R1689[339] = (char *(*)()) F303_1979;
	R1689[340] = (char *(*)()) F295_1979;
	R1689[341] = (char *(*)()) F298_1979;
	{long i; for (i = 342; i < 344; i++) R1689[i] = (char *(*)()) F295_1979;}
	R1689[344] = (char *(*)()) F297_1979;
	R1689[345] = (char *(*)()) F298_1979;
	R1689[346] = (char *(*)()) F299_1979;
	R1689[347] = (char *(*)()) F300_1979;
	R1689[348] = (char *(*)()) F301_1979;
	R1689[349] = (char *(*)()) F303_1979;
	R1689[350] = (char *(*)()) F296_1979;
	R1689[351] = (char *(*)()) F304_1979;
	R1689[352] = (char *(*)()) F305_1979;
	R1689[353] = (char *(*)()) F306_1979;
	R1689[354] = (char *(*)()) F307_1979;
	R1689[355] = (char *(*)()) F308_1979;
	R1689[356] = (char *(*)()) F302_1979;
	R1689[357] = (char *(*)()) F309_1979;
	R1689[358] = (char *(*)()) F295_1979;
	R1689[359] = (char *(*)()) F300_1979;
	R1689[360] = (char *(*)()) F298_1979;
	{long i; for (i = 361; i < 363; i++) R1689[i] = (char *(*)()) F295_1979;}
	{long i; for (i = 394; i < 397; i++) R1689[i] = (char *(*)()) F296_1979;}
	R1689[526] = (char *(*)()) F296_1979;
	R1689[528] = (char *(*)()) F302_1979;
	R1689[534] = (char *(*)()) F827_6678;
}

char *(*R1693[644])();
void R1693_init () {
	R1693[0] = (char *(*)()) F184_1908;
	R1693[1] = (char *(*)()) F185_1908;
	R1693[2] = (char *(*)()) F186_1908;
	R1693[3] = (char *(*)()) F187_1908;
	R1693[4] = (char *(*)()) F188_1908;
	R1693[5] = (char *(*)()) F189_1908;
	R1693[6] = (char *(*)()) F190_1908;
	R1693[7] = (char *(*)()) F191_1908;
	R1693[8] = (char *(*)()) F192_1908;
	R1693[9] = (char *(*)()) F193_1908;
	R1693[10] = (char *(*)()) F194_1908;
	R1693[11] = (char *(*)()) F195_1908;
	R1693[12] = (char *(*)()) F196_1908;
	R1693[13] = (char *(*)()) F197_1908;
	R1693[14] = (char *(*)()) F198_1908;
	R1693[15] = (char *(*)()) F184_1908;
	R1693[16] = (char *(*)()) F185_1908;
	R1693[17] = (char *(*)()) F186_1908;
	R1693[18] = (char *(*)()) F187_1908;
	R1693[19] = (char *(*)()) F188_1908;
	R1693[20] = (char *(*)()) F189_1908;
	R1693[21] = (char *(*)()) F190_1908;
	R1693[22] = (char *(*)()) F191_1908;
	R1693[23] = (char *(*)()) F192_1908;
	R1693[24] = (char *(*)()) F193_1908;
	R1693[25] = (char *(*)()) F194_1908;
	R1693[26] = (char *(*)()) F195_1908;
	R1693[27] = (char *(*)()) F196_1908;
	R1693[28] = (char *(*)()) F197_1908;
	R1693[29] = (char *(*)()) F198_1908;
	R1693[30] = (char *(*)()) F187_1908;
	R1693[31] = (char *(*)()) F184_1908;
	R1693[32] = (char *(*)()) F185_1908;
	R1693[33] = (char *(*)()) F186_1908;
	R1693[34] = (char *(*)()) F187_1908;
	R1693[35] = (char *(*)()) F188_1908;
	R1693[36] = (char *(*)()) F189_1908;
	R1693[37] = (char *(*)()) F190_1908;
	R1693[38] = (char *(*)()) F191_1908;
	R1693[39] = (char *(*)()) F192_1908;
	R1693[40] = (char *(*)()) F193_1908;
	R1693[41] = (char *(*)()) F194_1908;
	R1693[42] = (char *(*)()) F195_1908;
	R1693[43] = (char *(*)()) F196_1908;
	R1693[44] = (char *(*)()) F197_1908;
	R1693[45] = (char *(*)()) F198_1908;
	{long i; for (i = 46; i < 48; i++) R1693[i] = (char *(*)()) F184_1908;}
	R1693[48] = (char *(*)()) F186_1908;
	{long i; for (i = 49; i < 51; i++) R1693[i] = (char *(*)()) F187_1908;}
	R1693[51] = (char *(*)()) F188_1908;
	R1693[52] = (char *(*)()) F189_1908;
	R1693[53] = (char *(*)()) F190_1908;
	R1693[54] = (char *(*)()) F192_1908;
	R1693[55] = (char *(*)()) F185_1908;
	R1693[56] = (char *(*)()) F193_1908;
	R1693[57] = (char *(*)()) F194_1908;
	R1693[58] = (char *(*)()) F192_1908;
	R1693[59] = (char *(*)()) F195_1908;
	R1693[60] = (char *(*)()) F196_1908;
	R1693[61] = (char *(*)()) F197_1908;
	R1693[62] = (char *(*)()) F191_1908;
	R1693[63] = (char *(*)()) F198_1908;
	R1693[64] = (char *(*)()) F184_1908;
	R1693[65] = (char *(*)()) F185_1908;
	R1693[66] = (char *(*)()) F186_1908;
	R1693[67] = (char *(*)()) F187_1908;
	R1693[68] = (char *(*)()) F188_1908;
	R1693[69] = (char *(*)()) F189_1908;
	R1693[70] = (char *(*)()) F190_1908;
	R1693[71] = (char *(*)()) F191_1908;
	R1693[72] = (char *(*)()) F192_1908;
	R1693[73] = (char *(*)()) F193_1908;
	R1693[74] = (char *(*)()) F194_1908;
	R1693[75] = (char *(*)()) F195_1908;
	R1693[76] = (char *(*)()) F196_1908;
	R1693[77] = (char *(*)()) F197_1908;
	R1693[78] = (char *(*)()) F198_1908;
	R1693[79] = (char *(*)()) F184_1908;
	R1693[80] = (char *(*)()) F185_1908;
	R1693[81] = (char *(*)()) F186_1908;
	R1693[82] = (char *(*)()) F187_1908;
	R1693[83] = (char *(*)()) F188_1908;
	R1693[84] = (char *(*)()) F189_1908;
	R1693[85] = (char *(*)()) F190_1908;
	R1693[86] = (char *(*)()) F191_1908;
	R1693[87] = (char *(*)()) F192_1908;
	R1693[88] = (char *(*)()) F193_1908;
	R1693[89] = (char *(*)()) F194_1908;
	R1693[90] = (char *(*)()) F195_1908;
	R1693[91] = (char *(*)()) F196_1908;
	R1693[92] = (char *(*)()) F197_1908;
	R1693[93] = (char *(*)()) F198_1908;
	R1693[94] = (char *(*)()) F184_1908;
	R1693[95] = (char *(*)()) F185_1908;
	R1693[96] = (char *(*)()) F186_1908;
	R1693[97] = (char *(*)()) F187_1908;
	R1693[98] = (char *(*)()) F188_1908;
	R1693[99] = (char *(*)()) F189_1908;
	R1693[100] = (char *(*)()) F190_1908;
	R1693[101] = (char *(*)()) F191_1908;
	R1693[102] = (char *(*)()) F192_1908;
	R1693[103] = (char *(*)()) F193_1908;
	R1693[104] = (char *(*)()) F194_1908;
	R1693[105] = (char *(*)()) F195_1908;
	R1693[106] = (char *(*)()) F196_1908;
	R1693[107] = (char *(*)()) F197_1908;
	R1693[108] = (char *(*)()) F198_1908;
	{long i; for (i = 109; i < 111; i++) R1693[i] = (char *(*)()) F187_1908;}
	R1693[111] = (char *(*)()) F184_1908;
	R1693[112] = (char *(*)()) F185_1908;
	R1693[113] = (char *(*)()) F186_1908;
	R1693[114] = (char *(*)()) F187_1908;
	R1693[115] = (char *(*)()) F188_1908;
	R1693[116] = (char *(*)()) F189_1908;
	R1693[117] = (char *(*)()) F190_1908;
	R1693[118] = (char *(*)()) F191_1908;
	R1693[119] = (char *(*)()) F192_1908;
	R1693[120] = (char *(*)()) F193_1908;
	R1693[121] = (char *(*)()) F194_1908;
	R1693[122] = (char *(*)()) F195_1908;
	R1693[123] = (char *(*)()) F196_1908;
	R1693[124] = (char *(*)()) F197_1908;
	R1693[125] = (char *(*)()) F198_1908;
	R1693[126] = (char *(*)()) F184_1908;
	R1693[127] = (char *(*)()) F189_1908;
	R1693[128] = (char *(*)()) F187_1908;
	R1693[129] = (char *(*)()) F184_1908;
	R1693[130] = (char *(*)()) F189_1908;
	R1693[131] = (char *(*)()) F187_1908;
	{long i; for (i = 132; i < 134; i++) R1693[i] = (char *(*)()) F184_1908;}
	R1693[134] = (char *(*)()) F186_1908;
	R1693[135] = (char *(*)()) F187_1908;
	R1693[136] = (char *(*)()) F188_1908;
	R1693[137] = (char *(*)()) F185_1908;
	R1693[138] = (char *(*)()) F189_1908;
	R1693[139] = (char *(*)()) F190_1908;
	R1693[140] = (char *(*)()) F192_1908;
	R1693[141] = (char *(*)()) F193_1908;
	R1693[142] = (char *(*)()) F194_1908;
	R1693[143] = (char *(*)()) F195_1908;
	R1693[144] = (char *(*)()) F196_1908;
	R1693[145] = (char *(*)()) F197_1908;
	R1693[146] = (char *(*)()) F191_1908;
	R1693[147] = (char *(*)()) F198_1908;
	R1693[148] = (char *(*)()) F184_1908;
	R1693[149] = (char *(*)()) F185_1908;
	R1693[150] = (char *(*)()) F186_1908;
	R1693[151] = (char *(*)()) F187_1908;
	R1693[152] = (char *(*)()) F188_1908;
	R1693[153] = (char *(*)()) F189_1908;
	R1693[154] = (char *(*)()) F190_1908;
	R1693[155] = (char *(*)()) F191_1908;
	R1693[156] = (char *(*)()) F192_1908;
	R1693[157] = (char *(*)()) F193_1908;
	R1693[158] = (char *(*)()) F194_1908;
	R1693[159] = (char *(*)()) F195_1908;
	R1693[160] = (char *(*)()) F196_1908;
	R1693[161] = (char *(*)()) F197_1908;
	R1693[162] = (char *(*)()) F198_1908;
	R1693[163] = (char *(*)()) F184_1908;
	R1693[164] = (char *(*)()) F185_1908;
	R1693[165] = (char *(*)()) F186_1908;
	R1693[166] = (char *(*)()) F187_1908;
	R1693[167] = (char *(*)()) F188_1908;
	R1693[168] = (char *(*)()) F189_1908;
	R1693[169] = (char *(*)()) F190_1908;
	R1693[170] = (char *(*)()) F191_1908;
	R1693[171] = (char *(*)()) F192_1908;
	R1693[172] = (char *(*)()) F193_1908;
	R1693[173] = (char *(*)()) F194_1908;
	R1693[174] = (char *(*)()) F195_1908;
	R1693[175] = (char *(*)()) F196_1908;
	R1693[176] = (char *(*)()) F197_1908;
	R1693[177] = (char *(*)()) F198_1908;
	R1693[178] = (char *(*)()) F184_1908;
	R1693[179] = (char *(*)()) F185_1908;
	R1693[180] = (char *(*)()) F186_1908;
	R1693[181] = (char *(*)()) F187_1908;
	R1693[182] = (char *(*)()) F188_1908;
	R1693[183] = (char *(*)()) F189_1908;
	R1693[184] = (char *(*)()) F190_1908;
	R1693[185] = (char *(*)()) F191_1908;
	R1693[186] = (char *(*)()) F192_1908;
	R1693[187] = (char *(*)()) F193_1908;
	R1693[188] = (char *(*)()) F194_1908;
	R1693[189] = (char *(*)()) F195_1908;
	R1693[190] = (char *(*)()) F196_1908;
	R1693[191] = (char *(*)()) F197_1908;
	R1693[192] = (char *(*)()) F198_1908;
	R1693[193] = (char *(*)()) F184_1908;
	R1693[194] = (char *(*)()) F185_1908;
	R1693[195] = (char *(*)()) F186_1908;
	R1693[196] = (char *(*)()) F187_1908;
	R1693[197] = (char *(*)()) F188_1908;
	R1693[198] = (char *(*)()) F189_1908;
	R1693[199] = (char *(*)()) F190_1908;
	R1693[200] = (char *(*)()) F191_1908;
	R1693[201] = (char *(*)()) F192_1908;
	R1693[202] = (char *(*)()) F193_1908;
	R1693[203] = (char *(*)()) F194_1908;
	R1693[204] = (char *(*)()) F195_1908;
	R1693[205] = (char *(*)()) F196_1908;
	R1693[206] = (char *(*)()) F197_1908;
	R1693[207] = (char *(*)()) F198_1908;
	R1693[208] = (char *(*)()) F184_1908;
	R1693[209] = (char *(*)()) F186_1908;
	R1693[210] = (char *(*)()) F187_1908;
	R1693[211] = (char *(*)()) F188_1908;
	R1693[212] = (char *(*)()) F189_1908;
	R1693[213] = (char *(*)()) F185_1908;
	R1693[214] = (char *(*)()) F190_1908;
	R1693[215] = (char *(*)()) F192_1908;
	R1693[216] = (char *(*)()) F193_1908;
	R1693[217] = (char *(*)()) F194_1908;
	R1693[218] = (char *(*)()) F195_1908;
	R1693[219] = (char *(*)()) F196_1908;
	R1693[220] = (char *(*)()) F197_1908;
	R1693[221] = (char *(*)()) F191_1908;
	R1693[222] = (char *(*)()) F198_1908;
	R1693[223] = (char *(*)()) F184_1908;
	R1693[224] = (char *(*)()) F186_1908;
	R1693[225] = (char *(*)()) F187_1908;
	R1693[226] = (char *(*)()) F188_1908;
	R1693[227] = (char *(*)()) F189_1908;
	R1693[228] = (char *(*)()) F185_1908;
	R1693[229] = (char *(*)()) F190_1908;
	R1693[230] = (char *(*)()) F192_1908;
	R1693[231] = (char *(*)()) F193_1908;
	R1693[232] = (char *(*)()) F194_1908;
	R1693[233] = (char *(*)()) F195_1908;
	R1693[234] = (char *(*)()) F196_1908;
	R1693[235] = (char *(*)()) F197_1908;
	R1693[236] = (char *(*)()) F191_1908;
	R1693[237] = (char *(*)()) F198_1908;
	{long i; for (i = 238; i < 241; i++) R1693[i] = (char *(*)()) F187_1908;}
	R1693[318] = (char *(*)()) F184_1908;
	R1693[319] = (char *(*)()) F186_1908;
	R1693[320] = (char *(*)()) F187_1908;
	R1693[321] = (char *(*)()) F188_1908;
	R1693[322] = (char *(*)()) F189_1908;
	R1693[323] = (char *(*)()) F190_1908;
	R1693[324] = (char *(*)()) F192_1908;
	R1693[325] = (char *(*)()) F185_1908;
	R1693[326] = (char *(*)()) F193_1908;
	R1693[327] = (char *(*)()) F194_1908;
	R1693[328] = (char *(*)()) F195_1908;
	R1693[329] = (char *(*)()) F196_1908;
	R1693[330] = (char *(*)()) F197_1908;
	R1693[331] = (char *(*)()) F191_1908;
	R1693[332] = (char *(*)()) F198_1908;
	R1693[333] = (char *(*)()) F187_1908;
	R1693[334] = (char *(*)()) F184_1908;
	R1693[335] = (char *(*)()) F186_1908;
	R1693[336] = (char *(*)()) F187_1908;
	R1693[337] = (char *(*)()) F188_1908;
	R1693[338] = (char *(*)()) F189_1908;
	R1693[339] = (char *(*)()) F190_1908;
	R1693[340] = (char *(*)()) F192_1908;
	R1693[341] = (char *(*)()) F185_1908;
	R1693[342] = (char *(*)()) F193_1908;
	R1693[343] = (char *(*)()) F194_1908;
	R1693[344] = (char *(*)()) F195_1908;
	R1693[345] = (char *(*)()) F196_1908;
	R1693[346] = (char *(*)()) F197_1908;
	R1693[347] = (char *(*)()) F191_1908;
	R1693[348] = (char *(*)()) F198_1908;
	R1693[349] = (char *(*)()) F184_1908;
	R1693[350] = (char *(*)()) F186_1908;
	R1693[351] = (char *(*)()) F187_1908;
	R1693[352] = (char *(*)()) F188_1908;
	R1693[353] = (char *(*)()) F189_1908;
	R1693[354] = (char *(*)()) F190_1908;
	R1693[355] = (char *(*)()) F192_1908;
	R1693[356] = (char *(*)()) F185_1908;
	R1693[357] = (char *(*)()) F193_1908;
	R1693[358] = (char *(*)()) F194_1908;
	R1693[359] = (char *(*)()) F195_1908;
	R1693[360] = (char *(*)()) F196_1908;
	R1693[361] = (char *(*)()) F197_1908;
	R1693[362] = (char *(*)()) F191_1908;
	R1693[363] = (char *(*)()) F198_1908;
	R1693[364] = (char *(*)()) F184_1908;
	R1693[365] = (char *(*)()) F186_1908;
	R1693[366] = (char *(*)()) F187_1908;
	R1693[367] = (char *(*)()) F188_1908;
	R1693[368] = (char *(*)()) F189_1908;
	R1693[369] = (char *(*)()) F190_1908;
	R1693[370] = (char *(*)()) F192_1908;
	R1693[371] = (char *(*)()) F185_1908;
	R1693[372] = (char *(*)()) F193_1908;
	R1693[373] = (char *(*)()) F194_1908;
	R1693[374] = (char *(*)()) F195_1908;
	R1693[375] = (char *(*)()) F196_1908;
	R1693[376] = (char *(*)()) F197_1908;
	R1693[377] = (char *(*)()) F191_1908;
	R1693[378] = (char *(*)()) F198_1908;
	R1693[379] = (char *(*)()) F184_1908;
	R1693[380] = (char *(*)()) F186_1908;
	R1693[381] = (char *(*)()) F187_1908;
	R1693[382] = (char *(*)()) F188_1908;
	R1693[383] = (char *(*)()) F189_1908;
	R1693[384] = (char *(*)()) F190_1908;
	R1693[385] = (char *(*)()) F192_1908;
	R1693[386] = (char *(*)()) F185_1908;
	R1693[387] = (char *(*)()) F193_1908;
	R1693[388] = (char *(*)()) F194_1908;
	R1693[389] = (char *(*)()) F195_1908;
	R1693[390] = (char *(*)()) F196_1908;
	R1693[391] = (char *(*)()) F197_1908;
	R1693[392] = (char *(*)()) F191_1908;
	R1693[393] = (char *(*)()) F198_1908;
	R1693[394] = (char *(*)()) F184_1908;
	R1693[395] = (char *(*)()) F189_1908;
	R1693[396] = (char *(*)()) F187_1908;
	R1693[397] = (char *(*)()) F189_1908;
	R1693[398] = (char *(*)()) F187_1908;
	R1693[399] = (char *(*)()) F184_1908;
	R1693[415] = (char *(*)()) F184_1908;
	R1693[416] = (char *(*)()) F186_1908;
	R1693[417] = (char *(*)()) F187_1908;
	R1693[418] = (char *(*)()) F188_1908;
	R1693[419] = (char *(*)()) F189_1908;
	R1693[420] = (char *(*)()) F190_1908;
	R1693[421] = (char *(*)()) F192_1908;
	R1693[422] = (char *(*)()) F185_1908;
	R1693[423] = (char *(*)()) F193_1908;
	R1693[424] = (char *(*)()) F194_1908;
	R1693[425] = (char *(*)()) F195_1908;
	R1693[426] = (char *(*)()) F196_1908;
	R1693[427] = (char *(*)()) F197_1908;
	R1693[428] = (char *(*)()) F191_1908;
	R1693[429] = (char *(*)()) F198_1908;
	R1693[442] = (char *(*)()) F184_1908;
	{long i; for (i = 444; i < 446; i++) R1693[i] = (char *(*)()) F184_1908;}
	{long i; for (i = 446; i < 448; i++) R1693[i] = (char *(*)()) F187_1908;}
	R1693[448] = (char *(*)()) F192_1908;
	R1693[449] = (char *(*)()) F184_1908;
	R1693[450] = (char *(*)()) F187_1908;
	{long i; for (i = 451; i < 453; i++) R1693[i] = (char *(*)()) F184_1908;}
	R1693[453] = (char *(*)()) F186_1908;
	R1693[454] = (char *(*)()) F187_1908;
	R1693[455] = (char *(*)()) F188_1908;
	R1693[456] = (char *(*)()) F189_1908;
	R1693[457] = (char *(*)()) F190_1908;
	R1693[458] = (char *(*)()) F192_1908;
	R1693[459] = (char *(*)()) F185_1908;
	R1693[460] = (char *(*)()) F193_1908;
	R1693[461] = (char *(*)()) F194_1908;
	R1693[462] = (char *(*)()) F195_1908;
	R1693[463] = (char *(*)()) F196_1908;
	R1693[464] = (char *(*)()) F197_1908;
	R1693[465] = (char *(*)()) F191_1908;
	R1693[466] = (char *(*)()) F198_1908;
	R1693[467] = (char *(*)()) F184_1908;
	R1693[468] = (char *(*)()) F189_1908;
	R1693[469] = (char *(*)()) F187_1908;
	{long i; for (i = 470; i < 472; i++) R1693[i] = (char *(*)()) F184_1908;}
	{long i; for (i = 503; i < 506; i++) R1693[i] = (char *(*)()) F185_1908;}
	R1693[635] = (char *(*)()) F185_1908;
	R1693[637] = (char *(*)()) F191_1908;
	R1693[643] = (char *(*)()) F185_1908;
}

static EIF_TYPE_INDEX Y1696_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype147[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype148[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype149[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype150[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype151[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype152[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype153[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype154[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype155[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype156[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype157[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype158[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype159[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype160[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype161[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype162[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype163[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype164[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype165[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype166[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype167[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype168[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype169[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype170[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype171[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype172[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype173[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype174[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype175[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype176[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype177[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype179[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype180[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype181[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype182[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype183[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype184[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype185[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype186[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype187[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype188[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype189[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype190[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype191[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype192[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype193[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype194[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype195[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype196[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype197[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype198[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype199[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype200[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype201[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype202[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype203[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype204[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype205[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype206[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype207[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype208[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype209[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype210[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype211[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype212[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype213[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype214[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype215[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype216[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype217[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype218[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype219[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype220[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype221[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype222[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype223[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype224[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype225[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype226[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype227[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype228[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype229[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype230[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype231[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype232[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype233[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype234[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype235[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype236[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype237[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype238[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype239[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype240[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype241[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype242[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype243[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype244[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype245[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype246[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype247[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype248[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype249[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype250[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype251[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype252[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype253[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype254[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype255[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype256[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype257[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype258[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype259[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype260[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype261[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype262[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype263[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype264[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype265[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype266[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype267[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype268[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype269[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype270[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype271[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype272[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype273[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype274[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype275[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype276[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype277[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype278[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype279[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype280[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype281[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype282[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype283[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype284[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype285[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype286[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype287[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype288[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype289[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype290[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype291[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype292[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype293[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype294[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype295[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype296[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype297[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype298[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype299[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype300[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype301[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype302[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype303[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype304[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype305[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype306[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype307[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype308[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype309[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype310[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype311[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype312[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype313[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype314[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype315[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype316[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype317[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype318[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype319[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype320[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype321[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype322[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype323[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype324[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype325[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype326[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype327[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype328[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype329[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype330[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype331[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype332[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype333[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype334[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype335[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype336[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype337[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype338[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype339[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype340[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype341[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype342[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype343[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype344[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype345[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype346[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype347[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype348[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype349[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype350[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype351[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype352[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype353[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype354[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype355[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype356[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype357[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype358[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype359[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype360[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype361[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype362[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype363[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype364[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype365[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype366[] = {811,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype367[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype368[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype369[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype370[] = {749,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype371[] = {746,0xFFFF};
static EIF_TYPE_INDEX Y1696_pgtype372[] = {749,0xFFFF};
EIF_TYPE_INDEX *Y1696_gen_type [644];
EIF_TYPE_INDEX Y1696 [644];
void Y1696_init (void)
{
	egc_routines_types [1696] = Y1696;
	egc_routines_gen_types [1696] = Y1696_gen_type;
	egc_routines_offset [1696] = 183;
	Y1696_gen_type [0] = Y1696_pgtype0;
	Y1696_gen_type [1] = Y1696_pgtype1;
	Y1696_gen_type [2] = Y1696_pgtype2;
	Y1696_gen_type [3] = Y1696_pgtype3;
	Y1696_gen_type [4] = Y1696_pgtype4;
	Y1696_gen_type [5] = Y1696_pgtype5;
	Y1696_gen_type [6] = Y1696_pgtype6;
	Y1696_gen_type [7] = Y1696_pgtype7;
	Y1696_gen_type [8] = Y1696_pgtype8;
	Y1696_gen_type [9] = Y1696_pgtype9;
	Y1696_gen_type [10] = Y1696_pgtype10;
	Y1696_gen_type [11] = Y1696_pgtype11;
	Y1696_gen_type [12] = Y1696_pgtype12;
	Y1696_gen_type [13] = Y1696_pgtype13;
	Y1696_gen_type [14] = Y1696_pgtype14;
	Y1696_gen_type [15] = Y1696_pgtype15;
	Y1696_gen_type [16] = Y1696_pgtype16;
	Y1696_gen_type [17] = Y1696_pgtype17;
	Y1696_gen_type [18] = Y1696_pgtype18;
	Y1696_gen_type [19] = Y1696_pgtype19;
	Y1696_gen_type [20] = Y1696_pgtype20;
	Y1696_gen_type [21] = Y1696_pgtype21;
	Y1696_gen_type [22] = Y1696_pgtype22;
	Y1696_gen_type [23] = Y1696_pgtype23;
	Y1696_gen_type [24] = Y1696_pgtype24;
	Y1696_gen_type [25] = Y1696_pgtype25;
	Y1696_gen_type [26] = Y1696_pgtype26;
	Y1696_gen_type [27] = Y1696_pgtype27;
	Y1696_gen_type [28] = Y1696_pgtype28;
	Y1696_gen_type [29] = Y1696_pgtype29;
	Y1696_gen_type [30] = Y1696_pgtype30;
	Y1696_gen_type [31] = Y1696_pgtype31;
	Y1696_gen_type [32] = Y1696_pgtype32;
	Y1696_gen_type [33] = Y1696_pgtype33;
	Y1696_gen_type [34] = Y1696_pgtype34;
	Y1696_gen_type [35] = Y1696_pgtype35;
	Y1696_gen_type [36] = Y1696_pgtype36;
	Y1696_gen_type [37] = Y1696_pgtype37;
	Y1696_gen_type [38] = Y1696_pgtype38;
	Y1696_gen_type [39] = Y1696_pgtype39;
	Y1696_gen_type [40] = Y1696_pgtype40;
	Y1696_gen_type [41] = Y1696_pgtype41;
	Y1696_gen_type [42] = Y1696_pgtype42;
	Y1696_gen_type [43] = Y1696_pgtype43;
	Y1696_gen_type [44] = Y1696_pgtype44;
	Y1696_gen_type [45] = Y1696_pgtype45;
	Y1696_gen_type [46] = Y1696_pgtype46;
	Y1696_gen_type [47] = Y1696_pgtype47;
	Y1696_gen_type [48] = Y1696_pgtype48;
	Y1696_gen_type [49] = Y1696_pgtype49;
	Y1696_gen_type [50] = Y1696_pgtype50;
	Y1696_gen_type [51] = Y1696_pgtype51;
	Y1696_gen_type [52] = Y1696_pgtype52;
	Y1696_gen_type [53] = Y1696_pgtype53;
	Y1696_gen_type [54] = Y1696_pgtype54;
	Y1696_gen_type [55] = Y1696_pgtype55;
	Y1696_gen_type [56] = Y1696_pgtype56;
	Y1696_gen_type [57] = Y1696_pgtype57;
	Y1696_gen_type [58] = Y1696_pgtype58;
	Y1696_gen_type [59] = Y1696_pgtype59;
	Y1696_gen_type [60] = Y1696_pgtype60;
	Y1696_gen_type [61] = Y1696_pgtype61;
	Y1696_gen_type [62] = Y1696_pgtype62;
	Y1696_gen_type [63] = Y1696_pgtype63;
	Y1696_gen_type [64] = Y1696_pgtype64;
	Y1696_gen_type [65] = Y1696_pgtype65;
	Y1696_gen_type [66] = Y1696_pgtype66;
	Y1696_gen_type [67] = Y1696_pgtype67;
	Y1696_gen_type [68] = Y1696_pgtype68;
	Y1696_gen_type [69] = Y1696_pgtype69;
	Y1696_gen_type [70] = Y1696_pgtype70;
	Y1696_gen_type [71] = Y1696_pgtype71;
	Y1696_gen_type [72] = Y1696_pgtype72;
	Y1696_gen_type [73] = Y1696_pgtype73;
	Y1696_gen_type [74] = Y1696_pgtype74;
	Y1696_gen_type [75] = Y1696_pgtype75;
	Y1696_gen_type [76] = Y1696_pgtype76;
	Y1696_gen_type [77] = Y1696_pgtype77;
	Y1696_gen_type [78] = Y1696_pgtype78;
	Y1696_gen_type [79] = Y1696_pgtype79;
	Y1696_gen_type [80] = Y1696_pgtype80;
	Y1696_gen_type [81] = Y1696_pgtype81;
	Y1696_gen_type [82] = Y1696_pgtype82;
	Y1696_gen_type [83] = Y1696_pgtype83;
	Y1696_gen_type [84] = Y1696_pgtype84;
	Y1696_gen_type [85] = Y1696_pgtype85;
	Y1696_gen_type [86] = Y1696_pgtype86;
	Y1696_gen_type [87] = Y1696_pgtype87;
	Y1696_gen_type [88] = Y1696_pgtype88;
	Y1696_gen_type [89] = Y1696_pgtype89;
	Y1696_gen_type [90] = Y1696_pgtype90;
	Y1696_gen_type [91] = Y1696_pgtype91;
	Y1696_gen_type [92] = Y1696_pgtype92;
	Y1696_gen_type [93] = Y1696_pgtype93;
	Y1696_gen_type [94] = Y1696_pgtype94;
	Y1696_gen_type [95] = Y1696_pgtype95;
	Y1696_gen_type [96] = Y1696_pgtype96;
	Y1696_gen_type [97] = Y1696_pgtype97;
	Y1696_gen_type [98] = Y1696_pgtype98;
	Y1696_gen_type [99] = Y1696_pgtype99;
	Y1696_gen_type [100] = Y1696_pgtype100;
	Y1696_gen_type [101] = Y1696_pgtype101;
	Y1696_gen_type [102] = Y1696_pgtype102;
	Y1696_gen_type [103] = Y1696_pgtype103;
	Y1696_gen_type [104] = Y1696_pgtype104;
	Y1696_gen_type [105] = Y1696_pgtype105;
	Y1696_gen_type [106] = Y1696_pgtype106;
	Y1696_gen_type [107] = Y1696_pgtype107;
	Y1696_gen_type [108] = Y1696_pgtype108;
	Y1696_gen_type [109] = Y1696_pgtype109;
	Y1696_gen_type [110] = Y1696_pgtype110;
	Y1696_gen_type [111] = Y1696_pgtype111;
	Y1696_gen_type [112] = Y1696_pgtype112;
	Y1696_gen_type [113] = Y1696_pgtype113;
	Y1696_gen_type [114] = Y1696_pgtype114;
	Y1696_gen_type [115] = Y1696_pgtype115;
	Y1696_gen_type [116] = Y1696_pgtype116;
	Y1696_gen_type [117] = Y1696_pgtype117;
	Y1696_gen_type [118] = Y1696_pgtype118;
	Y1696_gen_type [119] = Y1696_pgtype119;
	Y1696_gen_type [120] = Y1696_pgtype120;
	Y1696_gen_type [121] = Y1696_pgtype121;
	Y1696_gen_type [122] = Y1696_pgtype122;
	Y1696_gen_type [123] = Y1696_pgtype123;
	Y1696_gen_type [124] = Y1696_pgtype124;
	Y1696_gen_type [125] = Y1696_pgtype125;
	Y1696_gen_type [126] = Y1696_pgtype126;
	Y1696_gen_type [127] = Y1696_pgtype127;
	Y1696_gen_type [128] = Y1696_pgtype128;
	Y1696_gen_type [129] = Y1696_pgtype129;
	Y1696_gen_type [130] = Y1696_pgtype130;
	Y1696_gen_type [131] = Y1696_pgtype131;
	Y1696_gen_type [132] = Y1696_pgtype132;
	Y1696_gen_type [133] = Y1696_pgtype133;
	Y1696_gen_type [134] = Y1696_pgtype134;
	Y1696_gen_type [135] = Y1696_pgtype135;
	Y1696_gen_type [136] = Y1696_pgtype136;
	Y1696_gen_type [137] = Y1696_pgtype137;
	Y1696_gen_type [138] = Y1696_pgtype138;
	Y1696_gen_type [139] = Y1696_pgtype139;
	Y1696_gen_type [140] = Y1696_pgtype140;
	Y1696_gen_type [141] = Y1696_pgtype141;
	Y1696_gen_type [142] = Y1696_pgtype142;
	Y1696_gen_type [143] = Y1696_pgtype143;
	Y1696_gen_type [144] = Y1696_pgtype144;
	Y1696_gen_type [145] = Y1696_pgtype145;
	Y1696_gen_type [146] = Y1696_pgtype146;
	Y1696_gen_type [147] = Y1696_pgtype147;
	Y1696_gen_type [148] = Y1696_pgtype148;
	Y1696_gen_type [149] = Y1696_pgtype149;
	Y1696_gen_type [150] = Y1696_pgtype150;
	Y1696_gen_type [151] = Y1696_pgtype151;
	Y1696_gen_type [152] = Y1696_pgtype152;
	Y1696_gen_type [153] = Y1696_pgtype153;
	Y1696_gen_type [154] = Y1696_pgtype154;
	Y1696_gen_type [155] = Y1696_pgtype155;
	Y1696_gen_type [156] = Y1696_pgtype156;
	Y1696_gen_type [157] = Y1696_pgtype157;
	Y1696_gen_type [158] = Y1696_pgtype158;
	Y1696_gen_type [159] = Y1696_pgtype159;
	Y1696_gen_type [160] = Y1696_pgtype160;
	Y1696_gen_type [161] = Y1696_pgtype161;
	Y1696_gen_type [162] = Y1696_pgtype162;
	Y1696_gen_type [163] = Y1696_pgtype163;
	Y1696_gen_type [164] = Y1696_pgtype164;
	Y1696_gen_type [165] = Y1696_pgtype165;
	Y1696_gen_type [166] = Y1696_pgtype166;
	Y1696_gen_type [167] = Y1696_pgtype167;
	Y1696_gen_type [168] = Y1696_pgtype168;
	Y1696_gen_type [169] = Y1696_pgtype169;
	Y1696_gen_type [170] = Y1696_pgtype170;
	Y1696_gen_type [171] = Y1696_pgtype171;
	Y1696_gen_type [172] = Y1696_pgtype172;
	Y1696_gen_type [173] = Y1696_pgtype173;
	Y1696_gen_type [174] = Y1696_pgtype174;
	Y1696_gen_type [175] = Y1696_pgtype175;
	Y1696_gen_type [176] = Y1696_pgtype176;
	Y1696_gen_type [177] = Y1696_pgtype177;
	Y1696_gen_type [178] = Y1696_pgtype178;
	Y1696_gen_type [179] = Y1696_pgtype179;
	Y1696_gen_type [180] = Y1696_pgtype180;
	Y1696_gen_type [181] = Y1696_pgtype181;
	Y1696_gen_type [182] = Y1696_pgtype182;
	Y1696_gen_type [183] = Y1696_pgtype183;
	Y1696_gen_type [184] = Y1696_pgtype184;
	Y1696_gen_type [185] = Y1696_pgtype185;
	Y1696_gen_type [186] = Y1696_pgtype186;
	Y1696_gen_type [187] = Y1696_pgtype187;
	Y1696_gen_type [188] = Y1696_pgtype188;
	Y1696_gen_type [189] = Y1696_pgtype189;
	Y1696_gen_type [190] = Y1696_pgtype190;
	Y1696_gen_type [191] = Y1696_pgtype191;
	Y1696_gen_type [192] = Y1696_pgtype192;
	Y1696_gen_type [193] = Y1696_pgtype193;
	Y1696_gen_type [194] = Y1696_pgtype194;
	Y1696_gen_type [195] = Y1696_pgtype195;
	Y1696_gen_type [196] = Y1696_pgtype196;
	Y1696_gen_type [197] = Y1696_pgtype197;
	Y1696_gen_type [198] = Y1696_pgtype198;
	Y1696_gen_type [199] = Y1696_pgtype199;
	Y1696_gen_type [200] = Y1696_pgtype200;
	Y1696_gen_type [201] = Y1696_pgtype201;
	Y1696_gen_type [202] = Y1696_pgtype202;
	Y1696_gen_type [203] = Y1696_pgtype203;
	Y1696_gen_type [204] = Y1696_pgtype204;
	Y1696_gen_type [205] = Y1696_pgtype205;
	Y1696_gen_type [206] = Y1696_pgtype206;
	Y1696_gen_type [207] = Y1696_pgtype207;
	Y1696_gen_type [208] = Y1696_pgtype208;
	Y1696_gen_type [209] = Y1696_pgtype209;
	Y1696_gen_type [210] = Y1696_pgtype210;
	Y1696_gen_type [211] = Y1696_pgtype211;
	Y1696_gen_type [212] = Y1696_pgtype212;
	Y1696_gen_type [213] = Y1696_pgtype213;
	Y1696_gen_type [214] = Y1696_pgtype214;
	Y1696_gen_type [215] = Y1696_pgtype215;
	Y1696_gen_type [216] = Y1696_pgtype216;
	Y1696_gen_type [217] = Y1696_pgtype217;
	Y1696_gen_type [218] = Y1696_pgtype218;
	Y1696_gen_type [219] = Y1696_pgtype219;
	Y1696_gen_type [220] = Y1696_pgtype220;
	Y1696_gen_type [221] = Y1696_pgtype221;
	Y1696_gen_type [222] = Y1696_pgtype222;
	Y1696_gen_type [223] = Y1696_pgtype223;
	Y1696_gen_type [224] = Y1696_pgtype224;
	Y1696_gen_type [225] = Y1696_pgtype225;
	Y1696_gen_type [226] = Y1696_pgtype226;
	Y1696_gen_type [227] = Y1696_pgtype227;
	Y1696_gen_type [228] = Y1696_pgtype228;
	Y1696_gen_type [229] = Y1696_pgtype229;
	Y1696_gen_type [230] = Y1696_pgtype230;
	Y1696_gen_type [231] = Y1696_pgtype231;
	Y1696_gen_type [232] = Y1696_pgtype232;
	Y1696_gen_type [233] = Y1696_pgtype233;
	Y1696_gen_type [234] = Y1696_pgtype234;
	Y1696_gen_type [235] = Y1696_pgtype235;
	Y1696_gen_type [236] = Y1696_pgtype236;
	Y1696_gen_type [237] = Y1696_pgtype237;
	Y1696_gen_type [238] = Y1696_pgtype238;
	Y1696_gen_type [239] = Y1696_pgtype239;
	Y1696_gen_type [240] = Y1696_pgtype240;
	Y1696_gen_type [318] = Y1696_pgtype241;
	Y1696_gen_type [319] = Y1696_pgtype242;
	Y1696_gen_type [320] = Y1696_pgtype243;
	Y1696_gen_type [321] = Y1696_pgtype244;
	Y1696_gen_type [322] = Y1696_pgtype245;
	Y1696_gen_type [323] = Y1696_pgtype246;
	Y1696_gen_type [324] = Y1696_pgtype247;
	Y1696_gen_type [325] = Y1696_pgtype248;
	Y1696_gen_type [326] = Y1696_pgtype249;
	Y1696_gen_type [327] = Y1696_pgtype250;
	Y1696_gen_type [328] = Y1696_pgtype251;
	Y1696_gen_type [329] = Y1696_pgtype252;
	Y1696_gen_type [330] = Y1696_pgtype253;
	Y1696_gen_type [331] = Y1696_pgtype254;
	Y1696_gen_type [332] = Y1696_pgtype255;
	Y1696_gen_type [333] = Y1696_pgtype256;
	Y1696_gen_type [334] = Y1696_pgtype257;
	Y1696_gen_type [335] = Y1696_pgtype258;
	Y1696_gen_type [336] = Y1696_pgtype259;
	Y1696_gen_type [337] = Y1696_pgtype260;
	Y1696_gen_type [338] = Y1696_pgtype261;
	Y1696_gen_type [339] = Y1696_pgtype262;
	Y1696_gen_type [340] = Y1696_pgtype263;
	Y1696_gen_type [341] = Y1696_pgtype264;
	Y1696_gen_type [342] = Y1696_pgtype265;
	Y1696_gen_type [343] = Y1696_pgtype266;
	Y1696_gen_type [344] = Y1696_pgtype267;
	Y1696_gen_type [345] = Y1696_pgtype268;
	Y1696_gen_type [346] = Y1696_pgtype269;
	Y1696_gen_type [347] = Y1696_pgtype270;
	Y1696_gen_type [348] = Y1696_pgtype271;
	Y1696_gen_type [349] = Y1696_pgtype272;
	Y1696_gen_type [350] = Y1696_pgtype273;
	Y1696_gen_type [351] = Y1696_pgtype274;
	Y1696_gen_type [352] = Y1696_pgtype275;
	Y1696_gen_type [353] = Y1696_pgtype276;
	Y1696_gen_type [354] = Y1696_pgtype277;
	Y1696_gen_type [355] = Y1696_pgtype278;
	Y1696_gen_type [356] = Y1696_pgtype279;
	Y1696_gen_type [357] = Y1696_pgtype280;
	Y1696_gen_type [358] = Y1696_pgtype281;
	Y1696_gen_type [359] = Y1696_pgtype282;
	Y1696_gen_type [360] = Y1696_pgtype283;
	Y1696_gen_type [361] = Y1696_pgtype284;
	Y1696_gen_type [362] = Y1696_pgtype285;
	Y1696_gen_type [363] = Y1696_pgtype286;
	Y1696_gen_type [364] = Y1696_pgtype287;
	Y1696_gen_type [365] = Y1696_pgtype288;
	Y1696_gen_type [366] = Y1696_pgtype289;
	Y1696_gen_type [367] = Y1696_pgtype290;
	Y1696_gen_type [368] = Y1696_pgtype291;
	Y1696_gen_type [369] = Y1696_pgtype292;
	Y1696_gen_type [370] = Y1696_pgtype293;
	Y1696_gen_type [371] = Y1696_pgtype294;
	Y1696_gen_type [372] = Y1696_pgtype295;
	Y1696_gen_type [373] = Y1696_pgtype296;
	Y1696_gen_type [374] = Y1696_pgtype297;
	Y1696_gen_type [375] = Y1696_pgtype298;
	Y1696_gen_type [376] = Y1696_pgtype299;
	Y1696_gen_type [377] = Y1696_pgtype300;
	Y1696_gen_type [378] = Y1696_pgtype301;
	Y1696_gen_type [379] = Y1696_pgtype302;
	Y1696_gen_type [380] = Y1696_pgtype303;
	Y1696_gen_type [381] = Y1696_pgtype304;
	Y1696_gen_type [382] = Y1696_pgtype305;
	Y1696_gen_type [383] = Y1696_pgtype306;
	Y1696_gen_type [384] = Y1696_pgtype307;
	Y1696_gen_type [385] = Y1696_pgtype308;
	Y1696_gen_type [386] = Y1696_pgtype309;
	Y1696_gen_type [387] = Y1696_pgtype310;
	Y1696_gen_type [388] = Y1696_pgtype311;
	Y1696_gen_type [389] = Y1696_pgtype312;
	Y1696_gen_type [390] = Y1696_pgtype313;
	Y1696_gen_type [391] = Y1696_pgtype314;
	Y1696_gen_type [392] = Y1696_pgtype315;
	Y1696_gen_type [393] = Y1696_pgtype316;
	Y1696_gen_type [394] = Y1696_pgtype317;
	Y1696_gen_type [395] = Y1696_pgtype318;
	Y1696_gen_type [396] = Y1696_pgtype319;
	Y1696_gen_type [397] = Y1696_pgtype320;
	Y1696_gen_type [398] = Y1696_pgtype321;
	Y1696_gen_type [399] = Y1696_pgtype322;
	Y1696_gen_type [415] = Y1696_pgtype323;
	Y1696_gen_type [416] = Y1696_pgtype324;
	Y1696_gen_type [417] = Y1696_pgtype325;
	Y1696_gen_type [418] = Y1696_pgtype326;
	Y1696_gen_type [419] = Y1696_pgtype327;
	Y1696_gen_type [420] = Y1696_pgtype328;
	Y1696_gen_type [421] = Y1696_pgtype329;
	Y1696_gen_type [422] = Y1696_pgtype330;
	Y1696_gen_type [423] = Y1696_pgtype331;
	Y1696_gen_type [424] = Y1696_pgtype332;
	Y1696_gen_type [425] = Y1696_pgtype333;
	Y1696_gen_type [426] = Y1696_pgtype334;
	Y1696_gen_type [427] = Y1696_pgtype335;
	Y1696_gen_type [428] = Y1696_pgtype336;
	Y1696_gen_type [429] = Y1696_pgtype337;
	Y1696_gen_type [442] = Y1696_pgtype338;
	Y1696_gen_type [444] = Y1696_pgtype339;
	Y1696_gen_type [445] = Y1696_pgtype340;
	Y1696_gen_type [446] = Y1696_pgtype341;
	Y1696_gen_type [447] = Y1696_pgtype342;
	Y1696_gen_type [448] = Y1696_pgtype343;
	Y1696_gen_type [449] = Y1696_pgtype344;
	Y1696_gen_type [450] = Y1696_pgtype345;
	Y1696_gen_type [451] = Y1696_pgtype346;
	Y1696_gen_type [452] = Y1696_pgtype347;
	Y1696_gen_type [453] = Y1696_pgtype348;
	Y1696_gen_type [454] = Y1696_pgtype349;
	Y1696_gen_type [455] = Y1696_pgtype350;
	Y1696_gen_type [456] = Y1696_pgtype351;
	Y1696_gen_type [457] = Y1696_pgtype352;
	Y1696_gen_type [458] = Y1696_pgtype353;
	Y1696_gen_type [459] = Y1696_pgtype354;
	Y1696_gen_type [460] = Y1696_pgtype355;
	Y1696_gen_type [461] = Y1696_pgtype356;
	Y1696_gen_type [462] = Y1696_pgtype357;
	Y1696_gen_type [463] = Y1696_pgtype358;
	Y1696_gen_type [464] = Y1696_pgtype359;
	Y1696_gen_type [465] = Y1696_pgtype360;
	Y1696_gen_type [466] = Y1696_pgtype361;
	Y1696_gen_type [467] = Y1696_pgtype362;
	Y1696_gen_type [468] = Y1696_pgtype363;
	Y1696_gen_type [469] = Y1696_pgtype364;
	Y1696_gen_type [470] = Y1696_pgtype365;
	Y1696_gen_type [471] = Y1696_pgtype366;
	Y1696_gen_type [503] = Y1696_pgtype367;
	Y1696_gen_type [504] = Y1696_pgtype368;
	Y1696_gen_type [505] = Y1696_pgtype369;
	Y1696_gen_type [635] = Y1696_pgtype370;
	Y1696_gen_type [637] = Y1696_pgtype371;
	Y1696_gen_type [643] = Y1696_pgtype372;
	{long i; for (i = 239; i < 241; i++) Y1696[i] = 770;};
	Y1696[333] = 770;
	Y1696[451] = 0;
	Y1696[471] = 811;
	{long i; for (i = 503; i < 506; i++) Y1696[i] = 749;};
	Y1696[635] = 749;
	Y1696[637] = 746;
	Y1696[643] = 749;
}

char *(*R1701[406])();
void R1701_init () {
	{long i; for (i = 0; i < 3; i++) R1701[i] = (char *(*)()) F422_2272_1701;}
	R1701[95] = (char *(*)()) F517_3022_1701;
	R1701[156] = (char *(*)()) F578_3338;
	R1701[157] = (char *(*)()) F579_3338_1701;
	R1701[158] = (char *(*)()) F580_3338_1701;
	R1701[159] = (char *(*)()) F581_3359_1701;
	R1701[160] = (char *(*)()) F582_3359_1701;
	R1701[161] = (char *(*)()) F583_3373;
	R1701[177] = (char *(*)()) F599_3586;
	R1701[178] = (char *(*)()) F600_3586_1701;
	R1701[179] = (char *(*)()) F601_3586_1701;
	R1701[180] = (char *(*)()) F602_3586_1701;
	R1701[181] = (char *(*)()) F603_3586_1701;
	R1701[182] = (char *(*)()) F604_3586_1701;
	R1701[183] = (char *(*)()) F605_3586_1701;
	R1701[184] = (char *(*)()) F606_3586_1701;
	R1701[185] = (char *(*)()) F607_3586_1701;
	R1701[186] = (char *(*)()) F608_3586_1701;
	R1701[187] = (char *(*)()) F609_3586_1701;
	R1701[188] = (char *(*)()) F610_3586_1701;
	R1701[189] = (char *(*)()) F611_3586_1701;
	R1701[190] = (char *(*)()) F612_3586_1701;
	R1701[191] = (char *(*)()) F613_3586_1701;
	R1701[204] = (char *(*)()) F626_4503;
	R1701[206] = (char *(*)()) F628_4633;
	R1701[207] = (char *(*)()) F629_4633;
	R1701[208] = (char *(*)()) F630_4633_1701;
	R1701[209] = (char *(*)()) F631_4633_1701;
	R1701[210] = (char *(*)()) F632_4633_1701;
	R1701[211] = (char *(*)()) F628_4633;
	R1701[212] = (char *(*)()) F630_4633_1701;
	R1701[213] = (char *(*)()) F628_4633;
	R1701[214] = (char *(*)()) F636_4711;
	R1701[215] = (char *(*)()) F637_4711_1701;
	R1701[216] = (char *(*)()) F638_4711_1701;
	R1701[217] = (char *(*)()) F639_4711_1701;
	R1701[218] = (char *(*)()) F640_4711_1701;
	R1701[219] = (char *(*)()) F641_4711_1701;
	R1701[220] = (char *(*)()) F642_4711_1701;
	R1701[221] = (char *(*)()) F643_4711_1701;
	R1701[222] = (char *(*)()) F644_4711_1701;
	R1701[223] = (char *(*)()) F645_4711_1701;
	R1701[224] = (char *(*)()) F646_4711_1701;
	R1701[225] = (char *(*)()) F647_4711_1701;
	R1701[226] = (char *(*)()) F648_4711_1701;
	R1701[227] = (char *(*)()) F649_4711_1701;
	R1701[228] = (char *(*)()) F650_4711_1701;
	R1701[229] = (char *(*)()) F651_4748;
	R1701[230] = (char *(*)()) F652_4748_1701;
	R1701[231] = (char *(*)()) F653_4748_1701;
	{long i; for (i = 232; i < 234; i++) R1701[i] = (char *(*)()) F654_4766;}
	{long i; for (i = 265; i < 268; i++) R1701[i] = (char *(*)()) F687_4232_1701;}
	R1701[397] = (char *(*)()) F819_6356_1701;
	R1701[399] = (char *(*)()) F821_6564_1701;
	R1701[405] = (char *(*)()) F687_4232_1701;
}
static void F422_2272_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F422_2272(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F517_3022_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F517_3022(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F579_3338_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F579_3338(Current, *(EIF_BOOLEAN *)arg1);
}
static void F580_3338_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F580_3338(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F581_3359_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F581_3359(Current, *(EIF_BOOLEAN *)arg1);
}
static void F582_3359_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F582_3359(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F600_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F600_3586(Current, *(EIF_POINTER *)arg1);
}
static void F601_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F601_3586(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F602_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F602_3586(Current, *(EIF_REAL_64 *)arg1);
}
static void F603_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F603_3586(Current, *(EIF_BOOLEAN *)arg1);
}
static void F604_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F604_3586(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F605_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_3586(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F606_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_3586(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F607_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_3586(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F608_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_3586(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F609_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_3586(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F610_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_3586(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F611_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_3586(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F612_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_3586(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F613_3586_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_3586(Current, *(EIF_REAL_32 *)arg1);
}
static void F630_4633_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F630_4633(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F631_4633_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F631_4633(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F632_4633_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F632_4633(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F637_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4711(Current, *(EIF_POINTER *)arg1);
}
static void F638_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4711(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F639_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4711(Current, *(EIF_REAL_64 *)arg1);
}
static void F640_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4711(Current, *(EIF_BOOLEAN *)arg1);
}
static void F641_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4711(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F642_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4711(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F643_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4711(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F644_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4711(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F645_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4711(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F646_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4711(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F647_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F647_4711(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F648_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F648_4711(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F649_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F649_4711(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F650_4711_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F650_4711(Current, *(EIF_REAL_32 *)arg1);
}
static void F652_4748_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F652_4748(Current, *(EIF_BOOLEAN *)arg1);
}
static void F653_4748_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F653_4748(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F687_4232_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F687_4232(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F819_6356_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F819_6356(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F821_6564_1701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F821_6564(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R1705[406])();
void R1705_init () {
	{long i; for (i = 0; i < 3; i++) R1705[i] = (char *(*)()) F422_2279;}
	R1705[95] = (char *(*)()) F517_3028;
	R1705[111] = (char *(*)()) F533_3126;
	R1705[112] = (char *(*)()) F534_3126;
	R1705[113] = (char *(*)()) F535_3126;
	R1705[114] = (char *(*)()) F536_3126;
	R1705[115] = (char *(*)()) F537_3126;
	R1705[116] = (char *(*)()) F538_3126;
	R1705[117] = (char *(*)()) F539_3126;
	R1705[118] = (char *(*)()) F540_3126;
	R1705[119] = (char *(*)()) F541_3126;
	R1705[120] = (char *(*)()) F542_3126;
	R1705[121] = (char *(*)()) F543_3126;
	R1705[122] = (char *(*)()) F544_3126;
	R1705[123] = (char *(*)()) F545_3126;
	R1705[124] = (char *(*)()) F546_3126;
	R1705[125] = (char *(*)()) F547_3126;
	R1705[141] = (char *(*)()) F563_3274;
	R1705[142] = (char *(*)()) F564_3274;
	R1705[143] = (char *(*)()) F565_3274;
	R1705[144] = (char *(*)()) F566_3274;
	R1705[145] = (char *(*)()) F567_3274;
	R1705[146] = (char *(*)()) F568_3274;
	R1705[147] = (char *(*)()) F569_3274;
	R1705[148] = (char *(*)()) F570_3274;
	R1705[149] = (char *(*)()) F571_3274;
	R1705[150] = (char *(*)()) F572_3274;
	R1705[151] = (char *(*)()) F573_3274;
	R1705[152] = (char *(*)()) F574_3274;
	R1705[153] = (char *(*)()) F575_3274;
	R1705[154] = (char *(*)()) F576_3274;
	R1705[155] = (char *(*)()) F577_3274;
	R1705[156] = (char *(*)()) F578_3347;
	R1705[157] = (char *(*)()) F579_3347;
	R1705[158] = (char *(*)()) F580_3347;
	R1705[159] = (char *(*)()) F579_3347;
	R1705[160] = (char *(*)()) F580_3347;
	R1705[161] = (char *(*)()) F578_3347;
	R1705[177] = (char *(*)()) F599_3566;
	R1705[178] = (char *(*)()) F600_3566;
	R1705[179] = (char *(*)()) F601_3566;
	R1705[180] = (char *(*)()) F602_3566;
	R1705[181] = (char *(*)()) F603_3566;
	R1705[182] = (char *(*)()) F604_3566;
	R1705[183] = (char *(*)()) F605_3566;
	R1705[184] = (char *(*)()) F606_3566;
	R1705[185] = (char *(*)()) F607_3566;
	R1705[186] = (char *(*)()) F608_3566;
	R1705[187] = (char *(*)()) F609_3566;
	R1705[188] = (char *(*)()) F610_3566;
	R1705[189] = (char *(*)()) F611_3566;
	R1705[190] = (char *(*)()) F612_3566;
	R1705[191] = (char *(*)()) F613_3566;
	R1705[204] = (char *(*)()) F626_4511;
	R1705[206] = (char *(*)()) F628_4576;
	R1705[207] = (char *(*)()) F629_4576;
	R1705[208] = (char *(*)()) F630_4576;
	R1705[209] = (char *(*)()) F631_4576;
	R1705[210] = (char *(*)()) F632_4576;
	R1705[211] = (char *(*)()) F628_4576;
	R1705[212] = (char *(*)()) F630_4576;
	R1705[213] = (char *(*)()) F628_4576;
	R1705[214] = (char *(*)()) F636_4727;
	R1705[215] = (char *(*)()) F637_4727;
	R1705[216] = (char *(*)()) F638_4727;
	R1705[217] = (char *(*)()) F639_4727;
	R1705[218] = (char *(*)()) F640_4727;
	R1705[219] = (char *(*)()) F641_4727;
	R1705[220] = (char *(*)()) F642_4727;
	R1705[221] = (char *(*)()) F643_4727;
	R1705[222] = (char *(*)()) F644_4727;
	R1705[223] = (char *(*)()) F645_4727;
	R1705[224] = (char *(*)()) F646_4727;
	R1705[225] = (char *(*)()) F647_4727;
	R1705[226] = (char *(*)()) F648_4727;
	R1705[227] = (char *(*)()) F649_4727;
	R1705[228] = (char *(*)()) F650_4727;
	R1705[229] = (char *(*)()) F636_4727;
	R1705[230] = (char *(*)()) F640_4727;
	R1705[231] = (char *(*)()) F638_4727;
	{long i; for (i = 232; i < 234; i++) R1705[i] = (char *(*)()) F654_4778;}
	{long i; for (i = 265; i < 268; i++) R1705[i] = (char *(*)()) F687_4267;}
	R1705[397] = (char *(*)()) F819_6369;
	R1705[399] = (char *(*)()) F821_6577;
	R1705[405] = (char *(*)()) F687_4267;
}

char *(*R1731[305])();
void R1731_init () {
	R1731[0] = (char *(*)()) F517_3010_1731;
	R1731[1] = (char *(*)()) F518_3058_1731;
	R1731[2] = (char *(*)()) F519_3058_1731;
	R1731[3] = (char *(*)()) F520_3058_1731;
	R1731[4] = (char *(*)()) F521_3058_1731;
	R1731[5] = (char *(*)()) F522_3058_1731;
	R1731[6] = (char *(*)()) F523_3058_1731;
	R1731[7] = (char *(*)()) F524_3058_1731;
	R1731[8] = (char *(*)()) F525_3058_1731;
	R1731[9] = (char *(*)()) F526_3058_1731;
	R1731[10] = (char *(*)()) F527_3058_1731;
	R1731[11] = (char *(*)()) F528_3058_1731;
	R1731[12] = (char *(*)()) F529_3058_1731;
	R1731[13] = (char *(*)()) F530_3058_1731;
	R1731[14] = (char *(*)()) F531_3058_1731;
	R1731[15] = (char *(*)()) F532_3058_1731;
	R1731[16] = (char *(*)()) F518_3058_1731;
	R1731[17] = (char *(*)()) F519_3058_1731;
	R1731[18] = (char *(*)()) F520_3058_1731;
	R1731[19] = (char *(*)()) F521_3058_1731;
	R1731[20] = (char *(*)()) F522_3058_1731;
	R1731[21] = (char *(*)()) F523_3058_1731;
	R1731[22] = (char *(*)()) F524_3058_1731;
	R1731[23] = (char *(*)()) F525_3058_1731;
	R1731[24] = (char *(*)()) F526_3058_1731;
	R1731[25] = (char *(*)()) F527_3058_1731;
	R1731[26] = (char *(*)()) F528_3058_1731;
	R1731[27] = (char *(*)()) F529_3058_1731;
	R1731[28] = (char *(*)()) F530_3058_1731;
	R1731[29] = (char *(*)()) F531_3058_1731;
	R1731[30] = (char *(*)()) F532_3058_1731;
	R1731[31] = (char *(*)()) F518_3058_1731;
	R1731[32] = (char *(*)()) F519_3058_1731;
	R1731[33] = (char *(*)()) F520_3058_1731;
	R1731[34] = (char *(*)()) F521_3058_1731;
	R1731[35] = (char *(*)()) F522_3058_1731;
	R1731[36] = (char *(*)()) F523_3058_1731;
	R1731[37] = (char *(*)()) F524_3058_1731;
	R1731[38] = (char *(*)()) F525_3058_1731;
	R1731[39] = (char *(*)()) F526_3058_1731;
	R1731[40] = (char *(*)()) F527_3058_1731;
	R1731[41] = (char *(*)()) F528_3058_1731;
	R1731[42] = (char *(*)()) F529_3058_1731;
	R1731[43] = (char *(*)()) F530_3058_1731;
	R1731[44] = (char *(*)()) F531_3058_1731;
	R1731[45] = (char *(*)()) F532_3058_1731;
	R1731[46] = (char *(*)()) F518_3058_1731;
	R1731[47] = (char *(*)()) F519_3058_1731;
	R1731[48] = (char *(*)()) F520_3058_1731;
	R1731[49] = (char *(*)()) F521_3058_1731;
	R1731[50] = (char *(*)()) F522_3058_1731;
	R1731[51] = (char *(*)()) F523_3058_1731;
	R1731[52] = (char *(*)()) F524_3058_1731;
	R1731[53] = (char *(*)()) F525_3058_1731;
	R1731[54] = (char *(*)()) F526_3058_1731;
	R1731[55] = (char *(*)()) F527_3058_1731;
	R1731[56] = (char *(*)()) F528_3058_1731;
	R1731[57] = (char *(*)()) F529_3058_1731;
	R1731[58] = (char *(*)()) F530_3058_1731;
	R1731[59] = (char *(*)()) F531_3058_1731;
	R1731[60] = (char *(*)()) F532_3058_1731;
	R1731[61] = (char *(*)()) F518_3058_1731;
	R1731[62] = (char *(*)()) F522_3058_1731;
	R1731[63] = (char *(*)()) F520_3058_1731;
	R1731[64] = (char *(*)()) F522_3058_1731;
	R1731[65] = (char *(*)()) F520_3058_1731;
	R1731[66] = (char *(*)()) F518_3058_1731;
	R1731[82] = (char *(*)()) F599_3535_1731;
	R1731[83] = (char *(*)()) F600_3535_1731;
	R1731[84] = (char *(*)()) F601_3535_1731;
	R1731[85] = (char *(*)()) F602_3535_1731;
	R1731[86] = (char *(*)()) F603_3535_1731;
	R1731[87] = (char *(*)()) F604_3535_1731;
	R1731[88] = (char *(*)()) F605_3535_1731;
	R1731[89] = (char *(*)()) F606_3535_1731;
	R1731[90] = (char *(*)()) F607_3535_1731;
	R1731[91] = (char *(*)()) F608_3535_1731;
	R1731[92] = (char *(*)()) F609_3535_1731;
	R1731[93] = (char *(*)()) F610_3535_1731;
	R1731[94] = (char *(*)()) F611_3535_1731;
	R1731[95] = (char *(*)()) F612_3535_1731;
	R1731[96] = (char *(*)()) F613_3535_1731;
	R1731[111] = (char *(*)()) F628_4528;
	R1731[112] = (char *(*)()) F629_4528_1731;
	R1731[113] = (char *(*)()) F630_4528_1731;
	R1731[114] = (char *(*)()) F631_4528_1731;
	R1731[115] = (char *(*)()) F632_4528_1731;
	R1731[116] = (char *(*)()) F628_4528;
	R1731[117] = (char *(*)()) F630_4528_1731;
	R1731[118] = (char *(*)()) F628_4528;
	R1731[119] = (char *(*)()) F636_4676_1731;
	R1731[120] = (char *(*)()) F637_4676_1731;
	R1731[121] = (char *(*)()) F638_4676_1731;
	R1731[122] = (char *(*)()) F639_4676_1731;
	R1731[123] = (char *(*)()) F640_4676_1731;
	R1731[124] = (char *(*)()) F641_4676_1731;
	R1731[125] = (char *(*)()) F642_4676_1731;
	R1731[126] = (char *(*)()) F643_4676_1731;
	R1731[127] = (char *(*)()) F644_4676_1731;
	R1731[128] = (char *(*)()) F645_4676_1731;
	R1731[129] = (char *(*)()) F646_4676_1731;
	R1731[130] = (char *(*)()) F647_4676_1731;
	R1731[131] = (char *(*)()) F648_4676_1731;
	R1731[132] = (char *(*)()) F649_4676_1731;
	R1731[133] = (char *(*)()) F650_4676_1731;
	R1731[134] = (char *(*)()) F636_4676_1731;
	R1731[135] = (char *(*)()) F640_4676_1731;
	R1731[136] = (char *(*)()) F638_4676_1731;
	{long i; for (i = 137; i < 139; i++) R1731[i] = (char *(*)()) F636_4676_1731;}
	R1731[302] = (char *(*)()) F819_6306_1731;
	R1731[304] = (char *(*)()) F821_6515_1731;
}
static EIF_REFERENCE F517_3010_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F517_3010(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F518_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F518_3058(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F519_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F519_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F520_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F520_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F521_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F521_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F522_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F522_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F523_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F523_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F524_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F524_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F525_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F525_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F526_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F526_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F527_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F527_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F528_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F528_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F529_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F529_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F530_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F530_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F531_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F531_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F532_3058_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F532_3058(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F599_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F599_3535(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F600_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F600_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F601_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F601_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F602_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F602_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F603_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F603_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F604_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F604_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F605_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F605_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F606_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F606_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F607_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F607_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F608_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F608_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F609_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F609_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F610_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F610_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F611_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F611_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F612_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F612_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F613_3535_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F613_3535(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F629_4528_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F629_4528(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F630_4528_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F630_4528(Current, arg1);
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
static EIF_REFERENCE F631_4528_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F631_4528(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F632_4528_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F632_4528(Current, *(EIF_POINTER *)arg1);
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
static EIF_REFERENCE F636_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F636_4676(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F637_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F637_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F638_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F638_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F639_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F639_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F640_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F640_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F641_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F641_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F642_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F642_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F643_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F643_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F644_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F644_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F645_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F645_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F646_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F646_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F647_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F647_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F648_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F648_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F649_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F649_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F650_4676_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F650_4676(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F819_6306_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F819_6306(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F821_6515_1731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F821_6515(Current, *(EIF_INTEGER_32 *)arg1);
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

char *(*R1732[302])();
void R1732_init () {
	R1732[0] = (char *(*)()) F518_3059_1732;
	R1732[1] = (char *(*)()) F519_3059_1732;
	R1732[2] = (char *(*)()) F520_3059_1732;
	R1732[3] = (char *(*)()) F521_3059_1732;
	R1732[4] = (char *(*)()) F522_3059_1732;
	R1732[5] = (char *(*)()) F523_3059_1732;
	R1732[6] = (char *(*)()) F524_3059_1732;
	R1732[7] = (char *(*)()) F525_3059_1732;
	R1732[8] = (char *(*)()) F526_3059_1732;
	R1732[9] = (char *(*)()) F527_3059_1732;
	R1732[10] = (char *(*)()) F528_3059_1732;
	R1732[11] = (char *(*)()) F529_3059_1732;
	R1732[12] = (char *(*)()) F530_3059_1732;
	R1732[13] = (char *(*)()) F531_3059_1732;
	R1732[14] = (char *(*)()) F532_3059_1732;
	R1732[15] = (char *(*)()) F518_3059_1732;
	R1732[16] = (char *(*)()) F519_3059_1732;
	R1732[17] = (char *(*)()) F520_3059_1732;
	R1732[18] = (char *(*)()) F521_3059_1732;
	R1732[19] = (char *(*)()) F522_3059_1732;
	R1732[20] = (char *(*)()) F523_3059_1732;
	R1732[21] = (char *(*)()) F524_3059_1732;
	R1732[22] = (char *(*)()) F525_3059_1732;
	R1732[23] = (char *(*)()) F526_3059_1732;
	R1732[24] = (char *(*)()) F527_3059_1732;
	R1732[25] = (char *(*)()) F528_3059_1732;
	R1732[26] = (char *(*)()) F529_3059_1732;
	R1732[27] = (char *(*)()) F530_3059_1732;
	R1732[28] = (char *(*)()) F531_3059_1732;
	R1732[29] = (char *(*)()) F532_3059_1732;
	R1732[30] = (char *(*)()) F518_3059_1732;
	R1732[31] = (char *(*)()) F519_3059_1732;
	R1732[32] = (char *(*)()) F520_3059_1732;
	R1732[33] = (char *(*)()) F521_3059_1732;
	R1732[34] = (char *(*)()) F522_3059_1732;
	R1732[35] = (char *(*)()) F523_3059_1732;
	R1732[36] = (char *(*)()) F524_3059_1732;
	R1732[37] = (char *(*)()) F525_3059_1732;
	R1732[38] = (char *(*)()) F526_3059_1732;
	R1732[39] = (char *(*)()) F527_3059_1732;
	R1732[40] = (char *(*)()) F528_3059_1732;
	R1732[41] = (char *(*)()) F529_3059_1732;
	R1732[42] = (char *(*)()) F530_3059_1732;
	R1732[43] = (char *(*)()) F531_3059_1732;
	R1732[44] = (char *(*)()) F532_3059_1732;
	R1732[45] = (char *(*)()) F518_3059_1732;
	R1732[46] = (char *(*)()) F519_3059_1732;
	R1732[47] = (char *(*)()) F520_3059_1732;
	R1732[48] = (char *(*)()) F521_3059_1732;
	R1732[49] = (char *(*)()) F522_3059_1732;
	R1732[50] = (char *(*)()) F523_3059_1732;
	R1732[51] = (char *(*)()) F524_3059_1732;
	R1732[52] = (char *(*)()) F525_3059_1732;
	R1732[53] = (char *(*)()) F526_3059_1732;
	R1732[54] = (char *(*)()) F527_3059_1732;
	R1732[55] = (char *(*)()) F528_3059_1732;
	R1732[56] = (char *(*)()) F529_3059_1732;
	R1732[57] = (char *(*)()) F530_3059_1732;
	R1732[58] = (char *(*)()) F531_3059_1732;
	R1732[59] = (char *(*)()) F532_3059_1732;
	R1732[60] = (char *(*)()) F518_3059_1732;
	R1732[61] = (char *(*)()) F522_3059_1732;
	R1732[62] = (char *(*)()) F520_3059_1732;
	R1732[63] = (char *(*)()) F522_3059_1732;
	R1732[64] = (char *(*)()) F520_3059_1732;
	R1732[65] = (char *(*)()) F518_3059_1732;
	R1732[81] = (char *(*)()) F599_3536_1732;
	R1732[82] = (char *(*)()) F600_3536_1732;
	R1732[83] = (char *(*)()) F601_3536_1732;
	R1732[84] = (char *(*)()) F602_3536_1732;
	R1732[85] = (char *(*)()) F603_3536_1732;
	R1732[86] = (char *(*)()) F604_3536_1732;
	R1732[87] = (char *(*)()) F605_3536_1732;
	R1732[88] = (char *(*)()) F606_3536_1732;
	R1732[89] = (char *(*)()) F607_3536_1732;
	R1732[90] = (char *(*)()) F608_3536_1732;
	R1732[91] = (char *(*)()) F609_3536_1732;
	R1732[92] = (char *(*)()) F610_3536_1732;
	R1732[93] = (char *(*)()) F611_3536_1732;
	R1732[94] = (char *(*)()) F612_3536_1732;
	R1732[95] = (char *(*)()) F613_3536_1732;
	R1732[118] = (char *(*)()) F636_4677_1732;
	R1732[119] = (char *(*)()) F637_4677_1732;
	R1732[120] = (char *(*)()) F638_4677_1732;
	R1732[121] = (char *(*)()) F639_4677_1732;
	R1732[122] = (char *(*)()) F640_4677_1732;
	R1732[123] = (char *(*)()) F641_4677_1732;
	R1732[124] = (char *(*)()) F642_4677_1732;
	R1732[125] = (char *(*)()) F643_4677_1732;
	R1732[126] = (char *(*)()) F644_4677_1732;
	R1732[127] = (char *(*)()) F645_4677_1732;
	R1732[128] = (char *(*)()) F646_4677_1732;
	R1732[129] = (char *(*)()) F647_4677_1732;
	R1732[130] = (char *(*)()) F648_4677_1732;
	R1732[131] = (char *(*)()) F649_4677_1732;
	R1732[132] = (char *(*)()) F650_4677_1732;
	R1732[133] = (char *(*)()) F636_4677_1732;
	R1732[134] = (char *(*)()) F640_4677_1732;
	R1732[135] = (char *(*)()) F638_4677_1732;
	{long i; for (i = 136; i < 138; i++) R1732[i] = (char *(*)()) F636_4677_1732;}
	R1732[301] = (char *(*)()) F819_6307_1732;
}
static EIF_REFERENCE F518_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F518_3059(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F519_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F519_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F520_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F520_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F521_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F521_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F522_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F522_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F523_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F523_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F524_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F524_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F525_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F525_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F526_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F526_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F527_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F527_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F528_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F528_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F529_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F529_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F530_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F530_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F531_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F531_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F532_3059_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F532_3059(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F599_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F599_3536(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F600_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F600_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F601_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F601_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F602_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F602_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F603_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F603_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F604_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F604_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F605_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F605_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F606_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F606_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F607_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F607_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F608_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F608_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F609_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F609_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F610_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F610_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F611_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F611_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F612_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F612_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F613_3536_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F613_3536(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F636_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F636_4677(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F637_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F637_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F638_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F638_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F639_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F639_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F640_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F640_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F641_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F641_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F642_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F642_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F643_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F643_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F644_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F644_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F645_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F645_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F646_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F646_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F647_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F647_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F648_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F648_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F649_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F649_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F650_4677_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F650_4677(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F819_6307_1732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F819_6307(Current, *(EIF_INTEGER_32 *)arg1);
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

char *(*R1734[221])();
void R1734_init () {
	R1734[0] = (char *(*)()) F599_3555_1734;
	R1734[1] = (char *(*)()) F600_3555_1734;
	R1734[2] = (char *(*)()) F601_3555_1734;
	R1734[3] = (char *(*)()) F602_3555_1734;
	R1734[4] = (char *(*)()) F603_3555_1734;
	R1734[5] = (char *(*)()) F604_3555_1734;
	R1734[6] = (char *(*)()) F605_3555_1734;
	R1734[7] = (char *(*)()) F606_3555_1734;
	R1734[8] = (char *(*)()) F607_3555_1734;
	R1734[9] = (char *(*)()) F608_3555_1734;
	R1734[10] = (char *(*)()) F609_3555_1734;
	R1734[11] = (char *(*)()) F610_3555_1734;
	R1734[12] = (char *(*)()) F611_3555_1734;
	R1734[13] = (char *(*)()) F612_3555_1734;
	R1734[14] = (char *(*)()) F613_3555_1734;
	R1734[29] = (char *(*)()) F628_4568;
	R1734[30] = (char *(*)()) F629_4568_1734;
	R1734[31] = (char *(*)()) F630_4568_1734;
	R1734[32] = (char *(*)()) F631_4568_1734;
	R1734[33] = (char *(*)()) F632_4568_1734;
	R1734[34] = (char *(*)()) F628_4568;
	R1734[35] = (char *(*)()) F630_4568_1734;
	R1734[36] = (char *(*)()) F628_4568;
	R1734[220] = (char *(*)()) F819_6328_1734;
}
static void F599_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F599_3555(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F600_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F600_3555(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F601_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F601_3555(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F602_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F602_3555(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F603_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F603_3555(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F604_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F604_3555(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F605_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F605_3555(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F606_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F606_3555(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F607_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F607_3555(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F608_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F608_3555(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F609_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F609_3555(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F610_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F610_3555(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F611_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F611_3555(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F612_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F612_3555(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F613_3555_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F613_3555(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F629_4568_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F629_4568(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F630_4568_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F630_4568(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F631_4568_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F631_4568(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F632_4568_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F632_4568(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F819_6328_1734 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F819_6328(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

static EIF_TYPE_INDEX Y1736_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype2[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype3[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype4[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype5[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype6[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype7[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype8[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype9[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype10[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype11[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype12[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype13[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype14[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype15[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype16[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype17[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype18[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype19[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype20[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype21[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype22[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype23[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype24[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype25[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype26[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype27[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype28[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype29[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype30[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype31[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype32[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype33[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype34[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype35[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype36[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype37[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype38[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype39[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype40[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype41[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype42[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype43[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype44[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype45[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype46[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype47[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype48[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype49[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype50[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype51[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype52[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype53[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype54[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype55[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype56[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype57[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype58[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype59[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype60[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype61[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype62[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype63[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype64[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype65[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype66[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype67[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype68[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype69[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype70[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype71[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype72[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype73[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype74[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype75[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype76[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype77[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype78[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype79[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype80[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype81[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype82[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype83[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype84[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype85[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype86[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype87[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype88[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype89[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype90[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype91[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype92[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype93[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype94[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype95[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype96[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype97[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype98[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype99[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype100[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype101[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype102[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype103[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype104[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype105[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype106[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype107[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype108[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype109[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype110[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype111[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype112[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype113[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype114[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype115[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype116[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype117[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype118[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype119[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype120[] = {815,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype121[] = {815,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype122[] = {818,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype123[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype124[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype125[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype126[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype127[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype128[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype129[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype130[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype131[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype132[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype133[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype134[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype135[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype136[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype137[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype138[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype139[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype140[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype141[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype142[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype143[] = {770,0xFFFF};
static EIF_TYPE_INDEX Y1736_pgtype144[] = {770,0xFFFF};
EIF_TYPE_INDEX *Y1736_gen_type [592];
EIF_TYPE_INDEX Y1736 [592];
void Y1736_init (void)
{
	egc_routines_types [1736] = Y1736;
	egc_routines_gen_types [1736] = Y1736_gen_type;
	egc_routines_offset [1736] = 229;
	Y1736_gen_type [0] = Y1736_pgtype0;
	Y1736_gen_type [1] = Y1736_pgtype1;
	Y1736_gen_type [2] = Y1736_pgtype2;
	Y1736_gen_type [3] = Y1736_pgtype3;
	Y1736_gen_type [4] = Y1736_pgtype4;
	Y1736_gen_type [5] = Y1736_pgtype5;
	Y1736_gen_type [6] = Y1736_pgtype6;
	Y1736_gen_type [7] = Y1736_pgtype7;
	Y1736_gen_type [8] = Y1736_pgtype8;
	Y1736_gen_type [9] = Y1736_pgtype9;
	Y1736_gen_type [10] = Y1736_pgtype10;
	Y1736_gen_type [11] = Y1736_pgtype11;
	Y1736_gen_type [12] = Y1736_pgtype12;
	Y1736_gen_type [13] = Y1736_pgtype13;
	Y1736_gen_type [14] = Y1736_pgtype14;
	Y1736_gen_type [15] = Y1736_pgtype15;
	Y1736_gen_type [16] = Y1736_pgtype16;
	Y1736_gen_type [17] = Y1736_pgtype17;
	Y1736_gen_type [272] = Y1736_pgtype18;
	Y1736_gen_type [273] = Y1736_pgtype19;
	Y1736_gen_type [274] = Y1736_pgtype20;
	Y1736_gen_type [275] = Y1736_pgtype21;
	Y1736_gen_type [276] = Y1736_pgtype22;
	Y1736_gen_type [277] = Y1736_pgtype23;
	Y1736_gen_type [278] = Y1736_pgtype24;
	Y1736_gen_type [279] = Y1736_pgtype25;
	Y1736_gen_type [280] = Y1736_pgtype26;
	Y1736_gen_type [281] = Y1736_pgtype27;
	Y1736_gen_type [282] = Y1736_pgtype28;
	Y1736_gen_type [283] = Y1736_pgtype29;
	Y1736_gen_type [284] = Y1736_pgtype30;
	Y1736_gen_type [285] = Y1736_pgtype31;
	Y1736_gen_type [286] = Y1736_pgtype32;
	Y1736_gen_type [287] = Y1736_pgtype33;
	Y1736_gen_type [288] = Y1736_pgtype34;
	Y1736_gen_type [289] = Y1736_pgtype35;
	Y1736_gen_type [290] = Y1736_pgtype36;
	Y1736_gen_type [291] = Y1736_pgtype37;
	Y1736_gen_type [292] = Y1736_pgtype38;
	Y1736_gen_type [293] = Y1736_pgtype39;
	Y1736_gen_type [294] = Y1736_pgtype40;
	Y1736_gen_type [295] = Y1736_pgtype41;
	Y1736_gen_type [296] = Y1736_pgtype42;
	Y1736_gen_type [297] = Y1736_pgtype43;
	Y1736_gen_type [298] = Y1736_pgtype44;
	Y1736_gen_type [299] = Y1736_pgtype45;
	Y1736_gen_type [300] = Y1736_pgtype46;
	Y1736_gen_type [301] = Y1736_pgtype47;
	Y1736_gen_type [302] = Y1736_pgtype48;
	Y1736_gen_type [303] = Y1736_pgtype49;
	Y1736_gen_type [304] = Y1736_pgtype50;
	Y1736_gen_type [305] = Y1736_pgtype51;
	Y1736_gen_type [306] = Y1736_pgtype52;
	Y1736_gen_type [307] = Y1736_pgtype53;
	Y1736_gen_type [308] = Y1736_pgtype54;
	Y1736_gen_type [309] = Y1736_pgtype55;
	Y1736_gen_type [310] = Y1736_pgtype56;
	Y1736_gen_type [311] = Y1736_pgtype57;
	Y1736_gen_type [312] = Y1736_pgtype58;
	Y1736_gen_type [313] = Y1736_pgtype59;
	Y1736_gen_type [314] = Y1736_pgtype60;
	Y1736_gen_type [315] = Y1736_pgtype61;
	Y1736_gen_type [316] = Y1736_pgtype62;
	Y1736_gen_type [317] = Y1736_pgtype63;
	Y1736_gen_type [318] = Y1736_pgtype64;
	Y1736_gen_type [319] = Y1736_pgtype65;
	Y1736_gen_type [320] = Y1736_pgtype66;
	Y1736_gen_type [321] = Y1736_pgtype67;
	Y1736_gen_type [322] = Y1736_pgtype68;
	Y1736_gen_type [323] = Y1736_pgtype69;
	Y1736_gen_type [324] = Y1736_pgtype70;
	Y1736_gen_type [325] = Y1736_pgtype71;
	Y1736_gen_type [326] = Y1736_pgtype72;
	Y1736_gen_type [327] = Y1736_pgtype73;
	Y1736_gen_type [328] = Y1736_pgtype74;
	Y1736_gen_type [329] = Y1736_pgtype75;
	Y1736_gen_type [330] = Y1736_pgtype76;
	Y1736_gen_type [331] = Y1736_pgtype77;
	Y1736_gen_type [332] = Y1736_pgtype78;
	Y1736_gen_type [333] = Y1736_pgtype79;
	Y1736_gen_type [334] = Y1736_pgtype80;
	Y1736_gen_type [335] = Y1736_pgtype81;
	Y1736_gen_type [336] = Y1736_pgtype82;
	Y1736_gen_type [337] = Y1736_pgtype83;
	Y1736_gen_type [338] = Y1736_pgtype84;
	Y1736_gen_type [339] = Y1736_pgtype85;
	Y1736_gen_type [340] = Y1736_pgtype86;
	Y1736_gen_type [341] = Y1736_pgtype87;
	Y1736_gen_type [342] = Y1736_pgtype88;
	Y1736_gen_type [343] = Y1736_pgtype89;
	Y1736_gen_type [344] = Y1736_pgtype90;
	Y1736_gen_type [345] = Y1736_pgtype91;
	Y1736_gen_type [346] = Y1736_pgtype92;
	Y1736_gen_type [347] = Y1736_pgtype93;
	Y1736_gen_type [348] = Y1736_pgtype94;
	Y1736_gen_type [349] = Y1736_pgtype95;
	Y1736_gen_type [350] = Y1736_pgtype96;
	Y1736_gen_type [351] = Y1736_pgtype97;
	Y1736_gen_type [352] = Y1736_pgtype98;
	Y1736_gen_type [353] = Y1736_pgtype99;
	Y1736_gen_type [369] = Y1736_pgtype100;
	Y1736_gen_type [370] = Y1736_pgtype101;
	Y1736_gen_type [371] = Y1736_pgtype102;
	Y1736_gen_type [372] = Y1736_pgtype103;
	Y1736_gen_type [373] = Y1736_pgtype104;
	Y1736_gen_type [374] = Y1736_pgtype105;
	Y1736_gen_type [375] = Y1736_pgtype106;
	Y1736_gen_type [376] = Y1736_pgtype107;
	Y1736_gen_type [377] = Y1736_pgtype108;
	Y1736_gen_type [378] = Y1736_pgtype109;
	Y1736_gen_type [379] = Y1736_pgtype110;
	Y1736_gen_type [380] = Y1736_pgtype111;
	Y1736_gen_type [381] = Y1736_pgtype112;
	Y1736_gen_type [382] = Y1736_pgtype113;
	Y1736_gen_type [383] = Y1736_pgtype114;
	Y1736_gen_type [398] = Y1736_pgtype115;
	Y1736_gen_type [399] = Y1736_pgtype116;
	Y1736_gen_type [400] = Y1736_pgtype117;
	Y1736_gen_type [401] = Y1736_pgtype118;
	Y1736_gen_type [402] = Y1736_pgtype119;
	Y1736_gen_type [403] = Y1736_pgtype120;
	Y1736_gen_type [404] = Y1736_pgtype121;
	Y1736_gen_type [405] = Y1736_pgtype122;
	Y1736_gen_type [406] = Y1736_pgtype123;
	Y1736_gen_type [407] = Y1736_pgtype124;
	Y1736_gen_type [408] = Y1736_pgtype125;
	Y1736_gen_type [409] = Y1736_pgtype126;
	Y1736_gen_type [410] = Y1736_pgtype127;
	Y1736_gen_type [411] = Y1736_pgtype128;
	Y1736_gen_type [412] = Y1736_pgtype129;
	Y1736_gen_type [413] = Y1736_pgtype130;
	Y1736_gen_type [414] = Y1736_pgtype131;
	Y1736_gen_type [415] = Y1736_pgtype132;
	Y1736_gen_type [416] = Y1736_pgtype133;
	Y1736_gen_type [417] = Y1736_pgtype134;
	Y1736_gen_type [418] = Y1736_pgtype135;
	Y1736_gen_type [419] = Y1736_pgtype136;
	Y1736_gen_type [420] = Y1736_pgtype137;
	Y1736_gen_type [421] = Y1736_pgtype138;
	Y1736_gen_type [422] = Y1736_pgtype139;
	Y1736_gen_type [423] = Y1736_pgtype140;
	Y1736_gen_type [424] = Y1736_pgtype141;
	Y1736_gen_type [425] = Y1736_pgtype142;
	Y1736_gen_type [589] = Y1736_pgtype143;
	Y1736_gen_type [591] = Y1736_pgtype144;
	{long i; for (i = 272; i < 354; i++) Y1736[i] = 770;};
	{long i; for (i = 369; i < 384; i++) Y1736[i] = 770;};
	{long i; for (i = 403; i < 405; i++) Y1736[i] = 815;};
	Y1736[405] = 818;
	{long i; for (i = 406; i < 426; i++) Y1736[i] = 770;};
	Y1736[589] = 770;
	Y1736[591] = 770;
}

char *(*R1737[406])();
void R1737_init () {
	{long i; for (i = 0; i < 3; i++) R1737[i] = (char *(*)()) F422_2263_1737;}
	R1737[156] = (char *(*)()) F578_3313;
	R1737[157] = (char *(*)()) F579_3313_1737;
	R1737[158] = (char *(*)()) F580_3313_1737;
	R1737[159] = (char *(*)()) F581_3357_1737;
	R1737[160] = (char *(*)()) F582_3357_1737;
	R1737[161] = (char *(*)()) F583_3371;
	R1737[204] = (char *(*)()) F626_4492;
	R1737[214] = (char *(*)()) F636_4675;
	R1737[215] = (char *(*)()) F637_4675_1737;
	R1737[216] = (char *(*)()) F638_4675_1737;
	R1737[217] = (char *(*)()) F639_4675_1737;
	R1737[218] = (char *(*)()) F640_4675_1737;
	R1737[219] = (char *(*)()) F641_4675_1737;
	R1737[220] = (char *(*)()) F642_4675_1737;
	R1737[221] = (char *(*)()) F643_4675_1737;
	R1737[222] = (char *(*)()) F644_4675_1737;
	R1737[223] = (char *(*)()) F645_4675_1737;
	R1737[224] = (char *(*)()) F646_4675_1737;
	R1737[225] = (char *(*)()) F647_4675_1737;
	R1737[226] = (char *(*)()) F648_4675_1737;
	R1737[227] = (char *(*)()) F649_4675_1737;
	R1737[228] = (char *(*)()) F650_4675_1737;
	R1737[229] = (char *(*)()) F636_4675;
	R1737[230] = (char *(*)()) F640_4675_1737;
	R1737[231] = (char *(*)()) F638_4675_1737;
	{long i; for (i = 232; i < 234; i++) R1737[i] = (char *(*)()) F636_4675;}
	{long i; for (i = 265; i < 268; i++) R1737[i] = (char *(*)()) F687_4150_1737;}
	R1737[405] = (char *(*)()) F687_4150_1737;
}
static EIF_REFERENCE F422_2263_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F579_3313_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F580_3313_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F581_3357_1737 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F581_3357(Current);
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
static EIF_REFERENCE F582_3357_1737 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F582_3357(Current);
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
static EIF_REFERENCE F637_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F638_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F639_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F640_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F641_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F642_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F643_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F644_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F645_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F646_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F647_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F648_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F649_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F650_4675_1737 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F687_4150_1737 (EIF_REFERENCE Current)
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

static EIF_TYPE_INDEX Y1737_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1737_pgtype139[] = {811,0,0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y1737_gen_type [580];
EIF_TYPE_INDEX Y1737 [580];
void Y1737_init (void)
{
	egc_routines_types [1737] = Y1737;
	egc_routines_gen_types [1737] = Y1737_gen_type;
	egc_routines_offset [1737] = 247;
	Y1737_gen_type [0] = Y1737_pgtype0;
	Y1737_gen_type [1] = Y1737_pgtype1;
	Y1737_gen_type [2] = Y1737_pgtype2;
	Y1737_gen_type [3] = Y1737_pgtype3;
	Y1737_gen_type [4] = Y1737_pgtype4;
	Y1737_gen_type [5] = Y1737_pgtype5;
	Y1737_gen_type [6] = Y1737_pgtype6;
	Y1737_gen_type [7] = Y1737_pgtype7;
	Y1737_gen_type [8] = Y1737_pgtype8;
	Y1737_gen_type [9] = Y1737_pgtype9;
	Y1737_gen_type [10] = Y1737_pgtype10;
	Y1737_gen_type [11] = Y1737_pgtype11;
	Y1737_gen_type [12] = Y1737_pgtype12;
	Y1737_gen_type [13] = Y1737_pgtype13;
	Y1737_gen_type [14] = Y1737_pgtype14;
	Y1737_gen_type [15] = Y1737_pgtype15;
	Y1737_gen_type [16] = Y1737_pgtype16;
	Y1737_gen_type [17] = Y1737_pgtype17;
	Y1737_gen_type [18] = Y1737_pgtype18;
	Y1737_gen_type [19] = Y1737_pgtype19;
	Y1737_gen_type [20] = Y1737_pgtype20;
	Y1737_gen_type [21] = Y1737_pgtype21;
	Y1737_gen_type [22] = Y1737_pgtype22;
	Y1737_gen_type [23] = Y1737_pgtype23;
	Y1737_gen_type [24] = Y1737_pgtype24;
	Y1737_gen_type [25] = Y1737_pgtype25;
	Y1737_gen_type [26] = Y1737_pgtype26;
	Y1737_gen_type [27] = Y1737_pgtype27;
	Y1737_gen_type [28] = Y1737_pgtype28;
	Y1737_gen_type [29] = Y1737_pgtype29;
	Y1737_gen_type [62] = Y1737_pgtype30;
	Y1737_gen_type [63] = Y1737_pgtype31;
	Y1737_gen_type [64] = Y1737_pgtype32;
	Y1737_gen_type [65] = Y1737_pgtype33;
	Y1737_gen_type [66] = Y1737_pgtype34;
	Y1737_gen_type [67] = Y1737_pgtype35;
	Y1737_gen_type [68] = Y1737_pgtype36;
	Y1737_gen_type [159] = Y1737_pgtype37;
	Y1737_gen_type [160] = Y1737_pgtype38;
	Y1737_gen_type [161] = Y1737_pgtype39;
	Y1737_gen_type [162] = Y1737_pgtype40;
	Y1737_gen_type [163] = Y1737_pgtype41;
	Y1737_gen_type [164] = Y1737_pgtype42;
	Y1737_gen_type [165] = Y1737_pgtype43;
	Y1737_gen_type [166] = Y1737_pgtype44;
	Y1737_gen_type [167] = Y1737_pgtype45;
	Y1737_gen_type [168] = Y1737_pgtype46;
	Y1737_gen_type [169] = Y1737_pgtype47;
	Y1737_gen_type [170] = Y1737_pgtype48;
	Y1737_gen_type [171] = Y1737_pgtype49;
	Y1737_gen_type [172] = Y1737_pgtype50;
	Y1737_gen_type [173] = Y1737_pgtype51;
	Y1737_gen_type [174] = Y1737_pgtype52;
	Y1737_gen_type [270] = Y1737_pgtype53;
	Y1737_gen_type [271] = Y1737_pgtype54;
	Y1737_gen_type [272] = Y1737_pgtype55;
	Y1737_gen_type [273] = Y1737_pgtype56;
	Y1737_gen_type [274] = Y1737_pgtype57;
	Y1737_gen_type [275] = Y1737_pgtype58;
	Y1737_gen_type [276] = Y1737_pgtype59;
	Y1737_gen_type [277] = Y1737_pgtype60;
	Y1737_gen_type [278] = Y1737_pgtype61;
	Y1737_gen_type [279] = Y1737_pgtype62;
	Y1737_gen_type [280] = Y1737_pgtype63;
	Y1737_gen_type [281] = Y1737_pgtype64;
	Y1737_gen_type [282] = Y1737_pgtype65;
	Y1737_gen_type [283] = Y1737_pgtype66;
	Y1737_gen_type [284] = Y1737_pgtype67;
	Y1737_gen_type [285] = Y1737_pgtype68;
	Y1737_gen_type [286] = Y1737_pgtype69;
	Y1737_gen_type [287] = Y1737_pgtype70;
	Y1737_gen_type [288] = Y1737_pgtype71;
	Y1737_gen_type [289] = Y1737_pgtype72;
	Y1737_gen_type [290] = Y1737_pgtype73;
	Y1737_gen_type [291] = Y1737_pgtype74;
	Y1737_gen_type [292] = Y1737_pgtype75;
	Y1737_gen_type [293] = Y1737_pgtype76;
	Y1737_gen_type [294] = Y1737_pgtype77;
	Y1737_gen_type [295] = Y1737_pgtype78;
	Y1737_gen_type [296] = Y1737_pgtype79;
	Y1737_gen_type [297] = Y1737_pgtype80;
	Y1737_gen_type [298] = Y1737_pgtype81;
	Y1737_gen_type [299] = Y1737_pgtype82;
	Y1737_gen_type [300] = Y1737_pgtype83;
	Y1737_gen_type [301] = Y1737_pgtype84;
	Y1737_gen_type [302] = Y1737_pgtype85;
	Y1737_gen_type [303] = Y1737_pgtype86;
	Y1737_gen_type [304] = Y1737_pgtype87;
	Y1737_gen_type [305] = Y1737_pgtype88;
	Y1737_gen_type [306] = Y1737_pgtype89;
	Y1737_gen_type [307] = Y1737_pgtype90;
	Y1737_gen_type [308] = Y1737_pgtype91;
	Y1737_gen_type [309] = Y1737_pgtype92;
	Y1737_gen_type [310] = Y1737_pgtype93;
	Y1737_gen_type [311] = Y1737_pgtype94;
	Y1737_gen_type [312] = Y1737_pgtype95;
	Y1737_gen_type [313] = Y1737_pgtype96;
	Y1737_gen_type [314] = Y1737_pgtype97;
	Y1737_gen_type [315] = Y1737_pgtype98;
	Y1737_gen_type [316] = Y1737_pgtype99;
	Y1737_gen_type [317] = Y1737_pgtype100;
	Y1737_gen_type [318] = Y1737_pgtype101;
	Y1737_gen_type [319] = Y1737_pgtype102;
	Y1737_gen_type [320] = Y1737_pgtype103;
	Y1737_gen_type [321] = Y1737_pgtype104;
	Y1737_gen_type [322] = Y1737_pgtype105;
	Y1737_gen_type [323] = Y1737_pgtype106;
	Y1737_gen_type [324] = Y1737_pgtype107;
	Y1737_gen_type [325] = Y1737_pgtype108;
	Y1737_gen_type [326] = Y1737_pgtype109;
	Y1737_gen_type [327] = Y1737_pgtype110;
	Y1737_gen_type [328] = Y1737_pgtype111;
	Y1737_gen_type [329] = Y1737_pgtype112;
	Y1737_gen_type [330] = Y1737_pgtype113;
	Y1737_gen_type [331] = Y1737_pgtype114;
	Y1737_gen_type [332] = Y1737_pgtype115;
	Y1737_gen_type [333] = Y1737_pgtype116;
	Y1737_gen_type [334] = Y1737_pgtype117;
	Y1737_gen_type [335] = Y1737_pgtype118;
	Y1737_gen_type [378] = Y1737_pgtype119;
	Y1737_gen_type [388] = Y1737_pgtype120;
	Y1737_gen_type [389] = Y1737_pgtype121;
	Y1737_gen_type [390] = Y1737_pgtype122;
	Y1737_gen_type [391] = Y1737_pgtype123;
	Y1737_gen_type [392] = Y1737_pgtype124;
	Y1737_gen_type [393] = Y1737_pgtype125;
	Y1737_gen_type [394] = Y1737_pgtype126;
	Y1737_gen_type [395] = Y1737_pgtype127;
	Y1737_gen_type [396] = Y1737_pgtype128;
	Y1737_gen_type [397] = Y1737_pgtype129;
	Y1737_gen_type [398] = Y1737_pgtype130;
	Y1737_gen_type [399] = Y1737_pgtype131;
	Y1737_gen_type [400] = Y1737_pgtype132;
	Y1737_gen_type [401] = Y1737_pgtype133;
	Y1737_gen_type [402] = Y1737_pgtype134;
	Y1737_gen_type [403] = Y1737_pgtype135;
	Y1737_gen_type [404] = Y1737_pgtype136;
	Y1737_gen_type [405] = Y1737_pgtype137;
	Y1737_gen_type [406] = Y1737_pgtype138;
	Y1737_gen_type [407] = Y1737_pgtype139;
	{long i; for (i = 175; i < 177; i++) Y1737[i] = 770;};
	Y1737[407] = 811;
	{long i; for (i = 439; i < 442; i++) Y1737[i] = 749;};
	Y1737[579] = 749;
}

char *(*R1742[138])();
void R1742_init () {
	R1742[0] = (char *(*)()) F518_3077;
	R1742[1] = (char *(*)()) F519_3077;
	R1742[2] = (char *(*)()) F520_3077;
	R1742[3] = (char *(*)()) F521_3077;
	R1742[4] = (char *(*)()) F522_3077;
	R1742[5] = (char *(*)()) F523_3077;
	R1742[6] = (char *(*)()) F524_3077;
	R1742[7] = (char *(*)()) F525_3077;
	R1742[8] = (char *(*)()) F526_3077;
	R1742[9] = (char *(*)()) F527_3077;
	R1742[10] = (char *(*)()) F528_3077;
	R1742[11] = (char *(*)()) F529_3077;
	R1742[12] = (char *(*)()) F530_3077;
	R1742[13] = (char *(*)()) F531_3077;
	R1742[14] = (char *(*)()) F532_3077;
	R1742[30] = (char *(*)()) F518_3077;
	R1742[31] = (char *(*)()) F519_3077;
	R1742[32] = (char *(*)()) F520_3077;
	R1742[33] = (char *(*)()) F521_3077;
	R1742[34] = (char *(*)()) F522_3077;
	R1742[35] = (char *(*)()) F523_3077;
	R1742[36] = (char *(*)()) F524_3077;
	R1742[37] = (char *(*)()) F525_3077;
	R1742[38] = (char *(*)()) F526_3077;
	R1742[39] = (char *(*)()) F527_3077;
	R1742[40] = (char *(*)()) F528_3077;
	R1742[41] = (char *(*)()) F529_3077;
	R1742[42] = (char *(*)()) F530_3077;
	R1742[43] = (char *(*)()) F531_3077;
	R1742[44] = (char *(*)()) F532_3077;
	R1742[60] = (char *(*)()) F578_3344;
	R1742[61] = (char *(*)()) F579_3344;
	R1742[62] = (char *(*)()) F580_3344;
	R1742[63] = (char *(*)()) F581_3361;
	R1742[64] = (char *(*)()) F582_3361;
	R1742[65] = (char *(*)()) F578_3345;
	R1742[118] = (char *(*)()) F636_4723;
	R1742[119] = (char *(*)()) F637_4723;
	R1742[120] = (char *(*)()) F638_4723;
	R1742[121] = (char *(*)()) F639_4723;
	R1742[122] = (char *(*)()) F640_4723;
	R1742[123] = (char *(*)()) F641_4723;
	R1742[124] = (char *(*)()) F642_4723;
	R1742[125] = (char *(*)()) F643_4723;
	R1742[126] = (char *(*)()) F644_4723;
	R1742[127] = (char *(*)()) F645_4723;
	R1742[128] = (char *(*)()) F646_4723;
	R1742[129] = (char *(*)()) F647_4723;
	R1742[130] = (char *(*)()) F648_4723;
	R1742[131] = (char *(*)()) F649_4723;
	R1742[132] = (char *(*)()) F650_4723;
	R1742[133] = (char *(*)()) F651_4751;
	R1742[134] = (char *(*)()) F652_4751;
	R1742[135] = (char *(*)()) F653_4751;
	{long i; for (i = 136; i < 138; i++) R1742[i] = (char *(*)()) F654_4772;}
}

char *(*R1743[78])();
void R1743_init () {
	R1743[0] = (char *(*)()) F578_3317;
	R1743[1] = (char *(*)()) F579_3317;
	R1743[2] = (char *(*)()) F580_3317;
	R1743[3] = (char *(*)()) F579_3317;
	R1743[4] = (char *(*)()) F580_3317;
	R1743[5] = (char *(*)()) F578_3317;
	R1743[58] = (char *(*)()) F636_4681;
	R1743[59] = (char *(*)()) F637_4681;
	R1743[60] = (char *(*)()) F638_4681;
	R1743[61] = (char *(*)()) F639_4681;
	R1743[62] = (char *(*)()) F640_4681;
	R1743[63] = (char *(*)()) F641_4681;
	R1743[64] = (char *(*)()) F642_4681;
	R1743[65] = (char *(*)()) F643_4681;
	R1743[66] = (char *(*)()) F644_4681;
	R1743[67] = (char *(*)()) F645_4681;
	R1743[68] = (char *(*)()) F646_4681;
	R1743[69] = (char *(*)()) F647_4681;
	R1743[70] = (char *(*)()) F648_4681;
	R1743[71] = (char *(*)()) F649_4681;
	R1743[72] = (char *(*)()) F650_4681;
	R1743[73] = (char *(*)()) F636_4681;
	R1743[74] = (char *(*)()) F640_4681;
	R1743[75] = (char *(*)()) F638_4681;
	{long i; for (i = 76; i < 78; i++) R1743[i] = (char *(*)()) F636_4681;}
}

static EIF_TYPE_INDEX Y1743_pgtype0[] = {616,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1743_pgtype1[] = {617,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1743_pgtype2[] = {618,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1743_pgtype3[] = {617,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1743_pgtype4[] = {618,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1743_pgtype5[] = {616,0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y1743_gen_type [393];
EIF_TYPE_INDEX Y1743 [393];
void Y1743_init (void)
{
	egc_routines_types [1743] = Y1743;
	egc_routines_gen_types [1743] = Y1743_gen_type;
	egc_routines_offset [1743] = 262;
	Y1743_gen_type [315] = Y1743_pgtype0;
	Y1743_gen_type [316] = Y1743_pgtype1;
	Y1743_gen_type [317] = Y1743_pgtype2;
	Y1743_gen_type [318] = Y1743_pgtype3;
	Y1743_gen_type [319] = Y1743_pgtype4;
	Y1743_gen_type [320] = Y1743_pgtype5;
	{long i; for (i = 0; i < 15; i++) Y1743[i] = 613;};
	{long i; for (i = 255; i < 315; i++) Y1743[i] = 613;};
	Y1743[315] = 616;
	Y1743[316] = 617;
	Y1743[317] = 618;
	Y1743[318] = 617;
	Y1743[319] = 618;
	Y1743[320] = 616;
	{long i; for (i = 373; i < 393; i++) Y1743[i] = 615;};
}

char *(*R1745[78])();
void R1745_init () {
	R1745[0] = (char *(*)()) F578_3336;
	R1745[1] = (char *(*)()) F579_3336;
	R1745[2] = (char *(*)()) F580_3336;
	R1745[3] = (char *(*)()) F579_3336;
	R1745[4] = (char *(*)()) F580_3336;
	R1745[5] = (char *(*)()) F578_3336;
	R1745[58] = (char *(*)()) F636_4706;
	R1745[59] = (char *(*)()) F637_4706;
	R1745[60] = (char *(*)()) F638_4706;
	R1745[61] = (char *(*)()) F639_4706;
	R1745[62] = (char *(*)()) F640_4706;
	R1745[63] = (char *(*)()) F641_4706;
	R1745[64] = (char *(*)()) F642_4706;
	R1745[65] = (char *(*)()) F643_4706;
	R1745[66] = (char *(*)()) F644_4706;
	R1745[67] = (char *(*)()) F645_4706;
	R1745[68] = (char *(*)()) F646_4706;
	R1745[69] = (char *(*)()) F647_4706;
	R1745[70] = (char *(*)()) F648_4706;
	R1745[71] = (char *(*)()) F649_4706;
	R1745[72] = (char *(*)()) F650_4706;
	R1745[73] = (char *(*)()) F636_4706;
	R1745[74] = (char *(*)()) F640_4706;
	R1745[75] = (char *(*)()) F638_4706;
	{long i; for (i = 76; i < 78; i++) R1745[i] = (char *(*)()) F636_4706;}
}

char *(*R1747[2])();
void R1747_init () {
	R1747[0] = (char *(*)()) F423_2289;
	R1747[1] = (char *(*)()) F424_2307;
}

char *(*R1748[311])();
void R1748_init () {
	R1748[0] = (char *(*)()) F517_3016;
	R1748[61] = (char *(*)()) F578_3320;
	R1748[62] = (char *(*)()) F579_3320;
	R1748[63] = (char *(*)()) F580_3320;
	R1748[64] = (char *(*)()) F579_3320;
	R1748[65] = (char *(*)()) F580_3320;
	R1748[66] = (char *(*)()) F578_3320;
	R1748[82] = (char *(*)()) F599_3541;
	R1748[83] = (char *(*)()) F600_3541;
	R1748[84] = (char *(*)()) F601_3541;
	R1748[85] = (char *(*)()) F602_3541;
	R1748[86] = (char *(*)()) F603_3541;
	R1748[87] = (char *(*)()) F604_3541;
	R1748[88] = (char *(*)()) F605_3541;
	R1748[89] = (char *(*)()) F606_3541;
	R1748[90] = (char *(*)()) F607_3541;
	R1748[91] = (char *(*)()) F608_3541;
	R1748[92] = (char *(*)()) F609_3541;
	R1748[93] = (char *(*)()) F610_3541;
	R1748[94] = (char *(*)()) F611_3541;
	R1748[95] = (char *(*)()) F612_3541;
	R1748[96] = (char *(*)()) F613_3541;
	R1748[109] = (char *(*)()) F626_4495;
	R1748[111] = (char *(*)()) F628_4540;
	R1748[112] = (char *(*)()) F629_4540;
	R1748[113] = (char *(*)()) F630_4540;
	R1748[114] = (char *(*)()) F631_4540;
	R1748[115] = (char *(*)()) F632_4540;
	R1748[116] = (char *(*)()) F628_4540;
	R1748[117] = (char *(*)()) F630_4540;
	R1748[118] = (char *(*)()) F628_4540;
	R1748[119] = (char *(*)()) F636_4692;
	R1748[120] = (char *(*)()) F637_4692;
	R1748[121] = (char *(*)()) F638_4692;
	R1748[122] = (char *(*)()) F639_4692;
	R1748[123] = (char *(*)()) F640_4692;
	R1748[124] = (char *(*)()) F641_4692;
	R1748[125] = (char *(*)()) F642_4692;
	R1748[126] = (char *(*)()) F643_4692;
	R1748[127] = (char *(*)()) F644_4692;
	R1748[128] = (char *(*)()) F645_4692;
	R1748[129] = (char *(*)()) F646_4692;
	R1748[130] = (char *(*)()) F647_4692;
	R1748[131] = (char *(*)()) F648_4692;
	R1748[132] = (char *(*)()) F649_4692;
	R1748[133] = (char *(*)()) F650_4692;
	R1748[134] = (char *(*)()) F636_4692;
	R1748[135] = (char *(*)()) F640_4692;
	R1748[136] = (char *(*)()) F638_4692;
	{long i; for (i = 137; i < 139; i++) R1748[i] = (char *(*)()) F636_4692;}
	{long i; for (i = 170; i < 173; i++) R1748[i] = (char *(*)()) F687_4166;}
	R1748[302] = (char *(*)()) F817_6255;
	R1748[304] = (char *(*)()) F820_6478;
	R1748[310] = (char *(*)()) F827_6647;
}

char *(*R1751[305])();
void R1751_init () {
	R1751[0] = (char *(*)()) F517_3015;
	R1751[82] = (char *(*)()) F599_3542;
	R1751[83] = (char *(*)()) F600_3542;
	R1751[84] = (char *(*)()) F601_3542;
	R1751[85] = (char *(*)()) F602_3542;
	R1751[86] = (char *(*)()) F603_3542;
	R1751[87] = (char *(*)()) F604_3542;
	R1751[88] = (char *(*)()) F605_3542;
	R1751[89] = (char *(*)()) F606_3542;
	R1751[90] = (char *(*)()) F607_3542;
	R1751[91] = (char *(*)()) F608_3542;
	R1751[92] = (char *(*)()) F609_3542;
	R1751[93] = (char *(*)()) F610_3542;
	R1751[94] = (char *(*)()) F611_3542;
	R1751[95] = (char *(*)()) F612_3542;
	R1751[96] = (char *(*)()) F613_3542;
	R1751[109] = (char *(*)()) F626_4496;
	R1751[119] = (char *(*)()) F636_4693;
	R1751[120] = (char *(*)()) F637_4693;
	R1751[121] = (char *(*)()) F638_4693;
	R1751[122] = (char *(*)()) F639_4693;
	R1751[123] = (char *(*)()) F640_4693;
	R1751[124] = (char *(*)()) F641_4693;
	R1751[125] = (char *(*)()) F642_4693;
	R1751[126] = (char *(*)()) F643_4693;
	R1751[127] = (char *(*)()) F644_4693;
	R1751[128] = (char *(*)()) F645_4693;
	R1751[129] = (char *(*)()) F646_4693;
	R1751[130] = (char *(*)()) F647_4693;
	R1751[131] = (char *(*)()) F648_4693;
	R1751[132] = (char *(*)()) F649_4693;
	R1751[133] = (char *(*)()) F650_4693;
	R1751[134] = (char *(*)()) F636_4693;
	R1751[135] = (char *(*)()) F640_4693;
	R1751[136] = (char *(*)()) F638_4693;
	{long i; for (i = 137; i < 139; i++) R1751[i] = (char *(*)()) F636_4693;}
	R1751[302] = (char *(*)()) F817_6254;
	R1751[304] = (char *(*)()) F820_6477;
}

char *(*R1755[475])();
void R1755_init () {
	R1755[0] = (char *(*)()) F347_1998;
	R1755[1] = (char *(*)()) F348_1998;
	R1755[2] = (char *(*)()) F349_1998;
	R1755[3] = (char *(*)()) F350_1998;
	R1755[4] = (char *(*)()) F351_1998;
	R1755[5] = (char *(*)()) F352_1998;
	R1755[6] = (char *(*)()) F353_1998;
	R1755[7] = (char *(*)()) F354_1998;
	R1755[8] = (char *(*)()) F355_1998;
	R1755[9] = (char *(*)()) F356_1998;
	R1755[10] = (char *(*)()) F357_1998;
	R1755[11] = (char *(*)()) F358_1998;
	R1755[12] = (char *(*)()) F359_1998;
	R1755[13] = (char *(*)()) F360_1998;
	R1755[14] = (char *(*)()) F361_1998;
	R1755[170] = (char *(*)()) F350_1998;
	R1755[252] = (char *(*)()) F347_1998;
	R1755[253] = (char *(*)()) F349_1998;
	R1755[254] = (char *(*)()) F350_1998;
	R1755[255] = (char *(*)()) F351_1998;
	R1755[256] = (char *(*)()) F352_1998;
	R1755[257] = (char *(*)()) F353_1998;
	R1755[258] = (char *(*)()) F355_1998;
	R1755[259] = (char *(*)()) F348_1998;
	R1755[260] = (char *(*)()) F356_1998;
	R1755[261] = (char *(*)()) F357_1998;
	R1755[262] = (char *(*)()) F358_1998;
	R1755[263] = (char *(*)()) F359_1998;
	R1755[264] = (char *(*)()) F360_1998;
	R1755[265] = (char *(*)()) F354_1998;
	R1755[266] = (char *(*)()) F361_1998;
	R1755[279] = (char *(*)()) F347_1998;
	R1755[289] = (char *(*)()) F347_1998;
	R1755[290] = (char *(*)()) F349_1998;
	R1755[291] = (char *(*)()) F350_1998;
	R1755[292] = (char *(*)()) F351_1998;
	R1755[293] = (char *(*)()) F352_1998;
	R1755[294] = (char *(*)()) F353_1998;
	R1755[295] = (char *(*)()) F355_1998;
	R1755[296] = (char *(*)()) F348_1998;
	R1755[297] = (char *(*)()) F356_1998;
	R1755[298] = (char *(*)()) F357_1998;
	R1755[299] = (char *(*)()) F358_1998;
	R1755[300] = (char *(*)()) F359_1998;
	R1755[301] = (char *(*)()) F360_1998;
	R1755[302] = (char *(*)()) F354_1998;
	R1755[303] = (char *(*)()) F361_1998;
	R1755[304] = (char *(*)()) F347_1998;
	R1755[305] = (char *(*)()) F352_1998;
	R1755[306] = (char *(*)()) F350_1998;
	{long i; for (i = 307; i < 309; i++) R1755[i] = (char *(*)()) F347_1998;}
	R1755[472] = (char *(*)()) F348_1998;
	R1755[474] = (char *(*)()) F354_1998;
}


#ifdef __cplusplus
}
#endif
