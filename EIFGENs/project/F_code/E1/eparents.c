#include "eif_eiffel.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ANY */
static EIF_TYPE_INDEX ptf0[] = {0xFFFF};
static struct eif_par_types par0 = {0, ptf0, (uint16) 0, (uint16) 0, (char) 0};

/* GAME_SDL_IMAGE_EXTERNAL */
static EIF_TYPE_INDEX ptf1[] = {0,0xFFFF};
static struct eif_par_types par1 = {1, ptf1, (uint16) 1, (uint16) 0, (char) 0};

/* ANIMATION */
static EIF_TYPE_INDEX ptf2[] = {0,0xFFFF};
static struct eif_par_types par2 = {2, ptf2, (uint16) 1, (uint16) 0, (char) 0};

/* FONT_FACTORY */
static EIF_TYPE_INDEX ptf3[] = {0,0xFFFF};
static struct eif_par_types par3 = {3, ptf3, (uint16) 1, (uint16) 0, (char) 0};

/* C_DATE */
static EIF_TYPE_INDEX ptf4[] = {0,0xFFFF};
static struct eif_par_types par4 = {4, ptf4, (uint16) 1, (uint16) 0, (char) 0};

/* CPF_EXTERNAL */
static EIF_TYPE_INDEX ptf5[] = {0,0xFFFF};
static struct eif_par_types par5 = {5, ptf5, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_KEYBOARD_EVENT */
static EIF_TYPE_INDEX ptf6[] = {0,0xFFFF};
static struct eif_par_types par6 = {6, ptf6, (uint16) 1, (uint16) 0, (char) 0};

/* PHYSIC */
static EIF_TYPE_INDEX ptf7[] = {0,0xFFFF};
static struct eif_par_types par7 = {7, ptf7, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SDL_EXTERNAL */
static EIF_TYPE_INDEX ptf8[] = {0,0xFFFF};
static struct eif_par_types par8 = {8, ptf8, (uint16) 1, (uint16) 0, (char) 0};

/* CONTROLLER */
static EIF_TYPE_INDEX ptf9[] = {0,0xFFFF};
static struct eif_par_types par9 = {9, ptf9, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_PLAYER */
static EIF_TYPE_INDEX ptf10[] = {0,0xFFFF};
static struct eif_par_types par10 = {10, ptf10, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_EXTERNAL */
static EIF_TYPE_INDEX ptf11[] = {0,0xFFFF};
static struct eif_par_types par11 = {11, ptf11, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_TEXT_EXTERNAL */
static EIF_TYPE_INDEX ptf12[] = {0,0xFFFF};
static struct eif_par_types par12 = {12, ptf12, (uint16) 1, (uint16) 0, (char) 0};

/* FRAME */
static EIF_TYPE_INDEX ptf13[] = {0,0xFFFF};
static struct eif_par_types par13 = {13, ptf13, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_TEXT_CONTROLLER */
static EIF_TYPE_INDEX ptf14[] = {0,0xFFFF};
static struct eif_par_types par14 = {14, ptf14, (uint16) 1, (uint16) 0, (char) 0};

/* SYSTEM_STRING_FACTORY */
static EIF_TYPE_INDEX ptf15[] = {0,0xFFFF};
static struct eif_par_types par15 = {15, ptf15, (uint16) 1, (uint16) 0, (char) 0};

/* NATIVE_ARRAY [G#1] */
static EIF_TYPE_INDEX ptf16[] = {0,0xFFFF};
static struct eif_par_types par16 = {16, ptf16, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [POINTER] */
static EIF_TYPE_INDEX ptf17[] = {0,0xFFFF};
static struct eif_par_types par17 = {17, ptf17, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_32] */
static EIF_TYPE_INDEX ptf18[] = {0,0xFFFF};
static struct eif_par_types par18 = {18, ptf18, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [REAL_64] */
static EIF_TYPE_INDEX ptf19[] = {0,0xFFFF};
static struct eif_par_types par19 = {19, ptf19, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [BOOLEAN] */
static EIF_TYPE_INDEX ptf20[] = {0,0xFFFF};
static struct eif_par_types par20 = {20, ptf20, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [NATURAL_64] */
static EIF_TYPE_INDEX ptf21[] = {0,0xFFFF};
static struct eif_par_types par21 = {21, ptf21, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [NATURAL_32] */
static EIF_TYPE_INDEX ptf22[] = {0,0xFFFF};
static struct eif_par_types par22 = {22, ptf22, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [CHARACTER_8] */
static EIF_TYPE_INDEX ptf23[] = {0,0xFFFF};
static struct eif_par_types par23 = {23, ptf23, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [NATURAL_16] */
static EIF_TYPE_INDEX ptf24[] = {0,0xFFFF};
static struct eif_par_types par24 = {24, ptf24, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [NATURAL_8] */
static EIF_TYPE_INDEX ptf25[] = {0,0xFFFF};
static struct eif_par_types par25 = {25, ptf25, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_64] */
static EIF_TYPE_INDEX ptf26[] = {0,0xFFFF};
static struct eif_par_types par26 = {26, ptf26, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_16] */
static EIF_TYPE_INDEX ptf27[] = {0,0xFFFF};
static struct eif_par_types par27 = {27, ptf27, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_8] */
static EIF_TYPE_INDEX ptf28[] = {0,0xFFFF};
static struct eif_par_types par28 = {28, ptf28, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [CHARACTER_32] */
static EIF_TYPE_INDEX ptf29[] = {0,0xFFFF};
static struct eif_par_types par29 = {29, ptf29, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [REAL_32] */
static EIF_TYPE_INDEX ptf30[] = {0,0xFFFF};
static struct eif_par_types par30 = {30, ptf30, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_EXECUTION_PARAMETERS */
static EIF_TYPE_INDEX ptf31[] = {0,0xFFFF};
static struct eif_par_types par31 = {31, ptf31, (uint16) 1, (uint16) 0, (char) 0};

/* reference FILE_UTILITIES */
static EIF_TYPE_INDEX ptf32[] = {0,0xFFFF};
static struct eif_par_types par32 = {32, ptf32, (uint16) 1, (uint16) 0, (char) 1};

/* FILE_UTILITIES */
static EIF_TYPE_INDEX ptf33[] = {32,0xFFFF};
static struct eif_par_types par33 = {33, ptf33, (uint16) 1, (uint16) 0, (char) 1};

/* STD_FILES */
static EIF_TYPE_INDEX ptf34[] = {0,0xFFFF};
static struct eif_par_types par34 = {34, ptf34, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_ENVIRONMENT */
static EIF_TYPE_INDEX ptf35[] = {0,0xFFFF};
static struct eif_par_types par35 = {35, ptf35, (uint16) 1, (uint16) 0, (char) 0};

/* VERSIONABLE */
static EIF_TYPE_INDEX ptf36[] = {0,0xFFFF};
static struct eif_par_types par36 = {36, ptf36, (uint16) 1, (uint16) 0, (char) 0};

/* CHARACTER_PROPERTY */
static EIF_TYPE_INDEX ptf37[] = {0,0xFFFF};
static struct eif_par_types par37 = {37, ptf37, (uint16) 1, (uint16) 0, (char) 0};

/* ISE_RUNTIME */
static EIF_TYPE_INDEX ptf38[] = {0,0xFFFF};
static struct eif_par_types par38 = {38, ptf38, (uint16) 1, (uint16) 0, (char) 0};

/* reference UTF_CONVERTER */
static EIF_TYPE_INDEX ptf39[] = {0,0xFFFF};
static struct eif_par_types par39 = {39, ptf39, (uint16) 1, (uint16) 0, (char) 1};

/* UTF_CONVERTER */
static EIF_TYPE_INDEX ptf40[] = {39,0xFFFF};
static struct eif_par_types par40 = {40, ptf40, (uint16) 1, (uint16) 0, (char) 1};

/* SYSTEM_STRING */
static EIF_TYPE_INDEX ptf41[] = {0,0xFFFF};
static struct eif_par_types par41 = {41, ptf41, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_LANGUAGE_CONSTANTS */
static EIF_TYPE_INDEX ptf42[] = {0,0xFFFF};
static struct eif_par_types par42 = {42, ptf42, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_TOOLS */
static EIF_TYPE_INDEX ptf43[] = {42,0xFFFF};
static struct eif_par_types par43 = {43, ptf43, (uint16) 1, (uint16) 0, (char) 0};

/* GROUP_ELEMENT */
static EIF_TYPE_INDEX ptf44[] = {0,0xFFFF};
static struct eif_par_types par44 = {44, ptf44, (uint16) 1, (uint16) 0, (char) 0};

/* FONT_FACTORY_SHARED */
static EIF_TYPE_INDEX ptf45[] = {0,0xFFFF};
static struct eif_par_types par45 = {45, ptf45, (uint16) 1, (uint16) 0, (char) 0};

/* CPF_RESSOURCE */
static EIF_TYPE_INDEX ptf46[] = {0,0xFFFF};
static struct eif_par_types par46 = {46, ptf46, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_COLOR */
static EIF_TYPE_INDEX ptf47[] = {0,0xFFFF};
static struct eif_par_types par47 = {47, ptf47, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_RANDOM_CONTROLLER */
static EIF_TYPE_INDEX ptf48[] = {0,0xFFFF};
static struct eif_par_types par48 = {48, ptf48, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SDL_CONTROLLER */
static EIF_TYPE_INDEX ptf49[] = {0,0xFFFF};
static struct eif_par_types par49 = {49, ptf49, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_LIB_CONTROLLER */
static EIF_TYPE_INDEX ptf50[] = {49,0xFFF7,48,0xFFFF};
static struct eif_par_types par50 = {50, ptf50, (uint16) 2, (uint16) 0, (char) 0};

/* EXCEP_CONST */
static EIF_TYPE_INDEX ptf51[] = {0,0xFFFF};
static struct eif_par_types par51 = {51, ptf51, (uint16) 1, (uint16) 0, (char) 0};

/* OBJECT_GRAPH_MARKER */
static EIF_TYPE_INDEX ptf52[] = {0,0xFFFF};
static struct eif_par_types par52 = {52, ptf52, (uint16) 1, (uint16) 0, (char) 0};

/* BASIC_ROUTINES */
static EIF_TYPE_INDEX ptf53[] = {0,0xFFFF};
static struct eif_par_types par53 = {53, ptf53, (uint16) 1, (uint16) 0, (char) 0};

/* REFACTORING_HELPER */
static EIF_TYPE_INDEX ptf54[] = {0,0xFFFF};
static struct eif_par_types par54 = {54, ptf54, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_UTILITY */
static EIF_TYPE_INDEX ptf55[] = {0,0xFFFF};
static struct eif_par_types par55 = {55, ptf55, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_CONSTANTS */
static EIF_TYPE_INDEX ptf56[] = {55,0xFFFF};
static struct eif_par_types par56 = {56, ptf56, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_MEASUREMENT */
static EIF_TYPE_INDEX ptf57[] = {56,0xFFFF};
static struct eif_par_types par57 = {57, ptf57, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_VALUE */
static EIF_TYPE_INDEX ptf58[] = {57,0xFFFF};
static struct eif_par_types par58 = {58, ptf58, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_CONSTANTS */
static EIF_TYPE_INDEX ptf59[] = {55,0xFFFF};
static struct eif_par_types par59 = {59, ptf59, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_MEASUREMENT */
static EIF_TYPE_INDEX ptf60[] = {59,0xFFFF};
static struct eif_par_types par60 = {60, ptf60, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_MEASUREMENT */
static EIF_TYPE_INDEX ptf61[] = {59,0xFFF7,56,0xFFFF};
static struct eif_par_types par61 = {61, ptf61, (uint16) 2, (uint16) 0, (char) 0};

/* DATE_TIME_VALUE */
static EIF_TYPE_INDEX ptf62[] = {61,0xFFFF};
static struct eif_par_types par62 = {62, ptf62, (uint16) 1, (uint16) 0, (char) 0};

/* CODE_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf63[] = {0,0xFFFF};
static struct eif_par_types par63 = {63, ptf63, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_MEDIA_FILE */
static EIF_TYPE_INDEX ptf64[] = {0,0xFFFF};
static struct eif_par_types par64 = {64, ptf64, (uint16) 1, (uint16) 0, (char) 0};

/* THREAD_ENVIRONMENT */
static EIF_TYPE_INDEX ptf65[] = {0,0xFFFF};
static struct eif_par_types par65 = {65, ptf65, (uint16) 1, (uint16) 0, (char) 0};

/* THREAD_CONTROL */
static EIF_TYPE_INDEX ptf66[] = {65,0xFFFF};
static struct eif_par_types par66 = {66, ptf66, (uint16) 1, (uint16) 0, (char) 0};

/* THREAD */
static EIF_TYPE_INDEX ptf67[] = {66,0xFFFF};
static struct eif_par_types par67 = {67, ptf67, (uint16) 1, (uint16) 0, (char) 0};

/* RT_EXTENSION_COMMON */
static EIF_TYPE_INDEX ptf68[] = {0,0xFFFF};
static struct eif_par_types par68 = {68, ptf68, (uint16) 1, (uint16) 0, (char) 0};

/* RT_EXTENSION_GENERAL */
static EIF_TYPE_INDEX ptf69[] = {68,0xFFFF};
static struct eif_par_types par69 = {69, ptf69, (uint16) 1, (uint16) 0, (char) 0};

/* RT_EXTENSION */
static EIF_TYPE_INDEX ptf70[] = {69,0xFFFF};
static struct eif_par_types par70 = {70, ptf70, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DBG_COMMON */
static EIF_TYPE_INDEX ptf71[] = {68,0xFFFF};
static struct eif_par_types par71 = {71, ptf71, (uint16) 1, (uint16) 0, (char) 0};

/* OBJECT_GRAPH_TRAVERSABLE */
static EIF_TYPE_INDEX ptf72[] = {0,0xFFFF};
static struct eif_par_types par72 = {72, ptf72, (uint16) 1, (uint16) 0, (char) 0};

/* OBJECT_GRAPH_BREADTH_FIRST_TRAVERSABLE */
static EIF_TYPE_INDEX ptf73[] = {72,0xFFFF};
static struct eif_par_types par73 = {73, ptf73, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTION_MANAGER */
static EIF_TYPE_INDEX ptf74[] = {0,0xFFFF};
static struct eif_par_types par74 = {74, ptf74, (uint16) 1, (uint16) 0, (char) 0};

/* ISE_EXCEPTION_MANAGER */
static EIF_TYPE_INDEX ptf75[] = {74,0xFFFF};
static struct eif_par_types par75 = {75, ptf75, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTOR_HELPER */
static EIF_TYPE_INDEX ptf76[] = {0,0xFFFF};
static struct eif_par_types par76 = {76, ptf76, (uint16) 1, (uint16) 0, (char) 0};

/* NUMERIC_INFORMATION */
static EIF_TYPE_INDEX ptf77[] = {0,0xFFFF};
static struct eif_par_types par77 = {77, ptf77, (uint16) 1, (uint16) 0, (char) 0};

/* INTEGER_OVERFLOW_CHECKER */
static EIF_TYPE_INDEX ptf78[] = {77,0xFFFF};
static struct eif_par_types par78 = {78, ptf78, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_TO_NUMERIC_CONVERTOR */
static EIF_TYPE_INDEX ptf79[] = {77,0xFFFF};
static struct eif_par_types par79 = {79, ptf79, (uint16) 1, (uint16) 0, (char) 0};

/* HEXADECIMAL_STRING_TO_INTEGER_CONVERTER */
static EIF_TYPE_INDEX ptf80[] = {79,0xFFFF};
static struct eif_par_types par80 = {80, ptf80, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_TO_REAL_CONVERTOR */
static EIF_TYPE_INDEX ptf81[] = {79,0xFFFF};
static struct eif_par_types par81 = {81, ptf81, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_TO_INTEGER_CONVERTOR */
static EIF_TYPE_INDEX ptf82[] = {79,0xFFFF};
static struct eif_par_types par82 = {82, ptf82, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTION_MANAGER_FACTORY */
static EIF_TYPE_INDEX ptf83[] = {0,0xFFFF};
static struct eif_par_types par83 = {83, ptf83, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTIONS */
static EIF_TYPE_INDEX ptf84[] = {51,0xFFF7,83,0xFFFF};
static struct eif_par_types par84 = {84, ptf84, (uint16) 2, (uint16) 0, (char) 0};

/* EXCEPTION */
static EIF_TYPE_INDEX ptf85[] = {83,0xFFFF};
static struct eif_par_types par85 = {85, ptf85, (uint16) 1, (uint16) 0, (char) 0};

/* DEVELOPER_EXCEPTION */
static EIF_TYPE_INDEX ptf86[] = {85,0xFFFF};
static struct eif_par_types par86 = {86, ptf86, (uint16) 1, (uint16) 0, (char) 0};

/* MACHINE_EXCEPTION */
static EIF_TYPE_INDEX ptf87[] = {85,0xFFFF};
static struct eif_par_types par87 = {87, ptf87, (uint16) 1, (uint16) 0, (char) 0};

/* HARDWARE_EXCEPTION */
static EIF_TYPE_INDEX ptf88[] = {87,0xFFFF};
static struct eif_par_types par88 = {88, ptf88, (uint16) 1, (uint16) 0, (char) 0};

/* FLOATING_POINT_FAILURE */
static EIF_TYPE_INDEX ptf89[] = {88,0xFFFF};
static struct eif_par_types par89 = {89, ptf89, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_SYSTEM_EXCEPTION */
static EIF_TYPE_INDEX ptf90[] = {87,0xFFFF};
static struct eif_par_types par90 = {90, ptf90, (uint16) 1, (uint16) 0, (char) 0};

/* COM_FAILURE */
static EIF_TYPE_INDEX ptf91[] = {90,0xFFFF};
static struct eif_par_types par91 = {91, ptf91, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_SYSTEM_FAILURE */
static EIF_TYPE_INDEX ptf92[] = {90,0xFFFF};
static struct eif_par_types par92 = {92, ptf92, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_SYSTEM_SIGNAL_FAILURE */
static EIF_TYPE_INDEX ptf93[] = {90,0xFFFF};
static struct eif_par_types par93 = {93, ptf93, (uint16) 1, (uint16) 0, (char) 0};

/* OBSOLETE_EXCEPTION */
static EIF_TYPE_INDEX ptf94[] = {85,0xFFFF};
static struct eif_par_types par94 = {94, ptf94, (uint16) 1, (uint16) 0, (char) 0};

/* RESUMPTION_FAILURE */
static EIF_TYPE_INDEX ptf95[] = {94,0xFFFF};
static struct eif_par_types par95 = {95, ptf95, (uint16) 1, (uint16) 0, (char) 0};

/* RESCUE_FAILURE */
static EIF_TYPE_INDEX ptf96[] = {94,0xFFFF};
static struct eif_par_types par96 = {96, ptf96, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTION_IN_SIGNAL_HANDLER_FAILURE */
static EIF_TYPE_INDEX ptf97[] = {94,0xFFFF};
static struct eif_par_types par97 = {97, ptf97, (uint16) 1, (uint16) 0, (char) 0};

/* SYS_EXCEPTION */
static EIF_TYPE_INDEX ptf98[] = {85,0xFFFF};
static struct eif_par_types par98 = {98, ptf98, (uint16) 1, (uint16) 0, (char) 0};

/* EIFFEL_RUNTIME_PANIC */
static EIF_TYPE_INDEX ptf99[] = {98,0xFFFF};
static struct eif_par_types par99 = {99, ptf99, (uint16) 1, (uint16) 0, (char) 0};

/* OLD_VIOLATION */
static EIF_TYPE_INDEX ptf100[] = {98,0xFFFF};
static struct eif_par_types par100 = {100, ptf100, (uint16) 1, (uint16) 0, (char) 0};

/* EIF_EXCEPTION */
static EIF_TYPE_INDEX ptf101[] = {98,0xFFFF};
static struct eif_par_types par101 = {101, ptf101, (uint16) 1, (uint16) 0, (char) 0};

/* EIFFEL_RUNTIME_EXCEPTION */
static EIF_TYPE_INDEX ptf102[] = {101,0xFFFF};
static struct eif_par_types par102 = {102, ptf102, (uint16) 1, (uint16) 0, (char) 0};

/* EXTERNAL_FAILURE */
static EIF_TYPE_INDEX ptf103[] = {102,0xFFFF};
static struct eif_par_types par103 = {103, ptf103, (uint16) 1, (uint16) 0, (char) 0};

/* NO_MORE_MEMORY */
static EIF_TYPE_INDEX ptf104[] = {102,0xFFFF};
static struct eif_par_types par104 = {104, ptf104, (uint16) 1, (uint16) 0, (char) 0};

/* DATA_EXCEPTION */
static EIF_TYPE_INDEX ptf105[] = {102,0xFFFF};
static struct eif_par_types par105 = {105, ptf105, (uint16) 1, (uint16) 0, (char) 0};

/* SERIALIZATION_FAILURE */
static EIF_TYPE_INDEX ptf106[] = {105,0xFFFF};
static struct eif_par_types par106 = {106, ptf106, (uint16) 1, (uint16) 0, (char) 0};

/* MISMATCH_FAILURE */
static EIF_TYPE_INDEX ptf107[] = {105,0xFFFF};
static struct eif_par_types par107 = {107, ptf107, (uint16) 1, (uint16) 0, (char) 0};

/* IO_FAILURE */
static EIF_TYPE_INDEX ptf108[] = {105,0xFFFF};
static struct eif_par_types par108 = {108, ptf108, (uint16) 1, (uint16) 0, (char) 0};

/* LANGUAGE_EXCEPTION */
static EIF_TYPE_INDEX ptf109[] = {101,0xFFFF};
static struct eif_par_types par109 = {109, ptf109, (uint16) 1, (uint16) 0, (char) 0};

/* VOID_TARGET */
static EIF_TYPE_INDEX ptf110[] = {109,0xFFFF};
static struct eif_par_types par110 = {110, ptf110, (uint16) 1, (uint16) 0, (char) 0};

/* VOID_ASSIGNED_TO_EXPANDED */
static EIF_TYPE_INDEX ptf111[] = {109,0xFFFF};
static struct eif_par_types par111 = {111, ptf111, (uint16) 1, (uint16) 0, (char) 0};

/* ROUTINE_FAILURE */
static EIF_TYPE_INDEX ptf112[] = {109,0xFFFF};
static struct eif_par_types par112 = {112, ptf112, (uint16) 1, (uint16) 0, (char) 0};

/* BAD_INSPECT_VALUE */
static EIF_TYPE_INDEX ptf113[] = {109,0xFFFF};
static struct eif_par_types par113 = {113, ptf113, (uint16) 1, (uint16) 0, (char) 0};

/* EIFFELSTUDIO_SPECIFIC_LANGUAGE_EXCEPTION */
static EIF_TYPE_INDEX ptf114[] = {109,0xFFFF};
static struct eif_par_types par114 = {114, ptf114, (uint16) 1, (uint16) 0, (char) 0};

/* CREATE_ON_DEFERRED */
static EIF_TYPE_INDEX ptf115[] = {114,0xFFFF};
static struct eif_par_types par115 = {115, ptf115, (uint16) 1, (uint16) 0, (char) 0};

/* ADDRESS_APPLIED_TO_MELTED_FEATURE */
static EIF_TYPE_INDEX ptf116[] = {114,0xFFFF};
static struct eif_par_types par116 = {116, ptf116, (uint16) 1, (uint16) 0, (char) 0};

/* ASSERTION_VIOLATION */
static EIF_TYPE_INDEX ptf117[] = {85,0xFFFF};
static struct eif_par_types par117 = {117, ptf117, (uint16) 1, (uint16) 0, (char) 0};

/* LOOP_INVARIANT_VIOLATION */
static EIF_TYPE_INDEX ptf118[] = {117,0xFFFF};
static struct eif_par_types par118 = {118, ptf118, (uint16) 1, (uint16) 0, (char) 0};

/* PRECONDITION_VIOLATION */
static EIF_TYPE_INDEX ptf119[] = {117,0xFFFF};
static struct eif_par_types par119 = {119, ptf119, (uint16) 1, (uint16) 0, (char) 0};

/* POSTCONDITION_VIOLATION */
static EIF_TYPE_INDEX ptf120[] = {117,0xFFFF};
static struct eif_par_types par120 = {120, ptf120, (uint16) 1, (uint16) 0, (char) 0};

/* VARIANT_VIOLATION */
static EIF_TYPE_INDEX ptf121[] = {117,0xFFFF};
static struct eif_par_types par121 = {121, ptf121, (uint16) 1, (uint16) 0, (char) 0};

/* CHECK_VIOLATION */
static EIF_TYPE_INDEX ptf122[] = {117,0xFFFF};
static struct eif_par_types par122 = {122, ptf122, (uint16) 1, (uint16) 0, (char) 0};

/* INVARIANT_VIOLATION */
static EIF_TYPE_INDEX ptf123[] = {117,0xFFFF};
static struct eif_par_types par123 = {123, ptf123, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_SEARCHER */
static EIF_TYPE_INDEX ptf124[] = {0,0xFFFF};
static struct eif_par_types par124 = {124, ptf124, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_8_SEARCHER */
static EIF_TYPE_INDEX ptf125[] = {124,0xFFFF};
static struct eif_par_types par125 = {125, ptf125, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_32_SEARCHER */
static EIF_TYPE_INDEX ptf126[] = {124,0xFFFF};
static struct eif_par_types par126 = {126, ptf126, (uint16) 1, (uint16) 0, (char) 0};

/* MATH_CONST */
static EIF_TYPE_INDEX ptf127[] = {0,0xFFFF};
static struct eif_par_types par127 = {127, ptf127, (uint16) 1, (uint16) 0, (char) 0};

/* DOUBLE_MATH */
static EIF_TYPE_INDEX ptf128[] = {127,0xFFFF};
static struct eif_par_types par128 = {128, ptf128, (uint16) 1, (uint16) 0, (char) 0};

/* BASIC_SCENE */
static EIF_TYPE_INDEX ptf129[] = {0,0xFFFF};
static struct eif_par_types par129 = {129, ptf129, (uint16) 1, (uint16) 0, (char) 0};

/* OPTION_SCENE */
static EIF_TYPE_INDEX ptf130[] = {129,0xFFFF};
static struct eif_par_types par130 = {130, ptf130, (uint16) 1, (uint16) 0, (char) 0};

/* MAIN_MENU_SCENE */
static EIF_TYPE_INDEX ptf131[] = {129,0xFFFF};
static struct eif_par_types par131 = {131, ptf131, (uint16) 1, (uint16) 0, (char) 0};

/* LEVEL_ONE_SCENE */
static EIF_TYPE_INDEX ptf132[] = {129,0xFFFF};
static struct eif_par_types par132 = {132, ptf132, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_OPENAL_ERROR_MANAGER */
static EIF_TYPE_INDEX ptf133[] = {0,0xFFFF};
static struct eif_par_types par133 = {133, ptf133, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_CONTROLLER */
static EIF_TYPE_INDEX ptf134[] = {133,0xFFF7,67,0xFFFF};
static struct eif_par_types par134 = {134, ptf134, (uint16) 2, (uint16) 0, (char) 0};

/* AUDIO_SOUND */
static EIF_TYPE_INDEX ptf135[] = {133,0xFFFF};
static struct eif_par_types par135 = {135, ptf135, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_SOUND_WAV_FILE */
static EIF_TYPE_INDEX ptf136[] = {135,0xFFFF};
static struct eif_par_types par136 = {136, ptf136, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_3D_OBJECT */
static EIF_TYPE_INDEX ptf137[] = {133,0xFFFF};
static struct eif_par_types par137 = {137, ptf137, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_LISTENER */
static EIF_TYPE_INDEX ptf138[] = {137,0xFFFF};
static struct eif_par_types par138 = {138, ptf138, (uint16) 1, (uint16) 0, (char) 0};

/* MEM_CONST */
static EIF_TYPE_INDEX ptf139[] = {0,0xFFFF};
static struct eif_par_types par139 = {139, ptf139, (uint16) 1, (uint16) 0, (char) 0};

/* PLATFORM */
static EIF_TYPE_INDEX ptf140[] = {0,0xFFFF};
static struct eif_par_types par140 = {140, ptf140, (uint16) 1, (uint16) 0, (char) 0};

/* MEMORY_STRUCTURE */
static EIF_TYPE_INDEX ptf141[] = {0,0xFFFF};
static struct eif_par_types par141 = {141, ptf141, (uint16) 1, (uint16) 0, (char) 0};

/* MEM_INFO */
static EIF_TYPE_INDEX ptf142[] = {141,0xFFF7,139,0xFFFF};
static struct eif_par_types par142 = {142, ptf142, (uint16) 2, (uint16) 0, (char) 0};

/* GC_INFO */
static EIF_TYPE_INDEX ptf143[] = {141,0xFFF7,139,0xFFFF};
static struct eif_par_types par143 = {143, ptf143, (uint16) 2, (uint16) 0, (char) 0};

/* STRING_HANDLER */
static EIF_TYPE_INDEX ptf144[] = {0,0xFFFF};
static struct eif_par_types par144 = {144, ptf144, (uint16) 1, (uint16) 0, (char) 0};

/* C_STRING */
static EIF_TYPE_INDEX ptf145[] = {144,0xFFFF};
static struct eif_par_types par145 = {145, ptf145, (uint16) 1, (uint16) 0, (char) 0};

/* ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf146[] = {0,0xFFFF};
static struct eif_par_types par146 = {146, ptf146, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf147[] = {0,0xFFFF};
static struct eif_par_types par147 = {147, ptf147, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf148[] = {0,0xFFFF};
static struct eif_par_types par148 = {148, ptf148, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf149[] = {0,0xFFFF};
static struct eif_par_types par149 = {149, ptf149, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf150[] = {0,0xFFFF};
static struct eif_par_types par150 = {150, ptf150, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf151[] = {0,0xFFFF};
static struct eif_par_types par151 = {151, ptf151, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf152[] = {0,0xFFFF};
static struct eif_par_types par152 = {152, ptf152, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf153[] = {0,0xFFFF};
static struct eif_par_types par153 = {153, ptf153, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf154[] = {0,0xFFFF};
static struct eif_par_types par154 = {154, ptf154, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf155[] = {0,0xFFFF};
static struct eif_par_types par155 = {155, ptf155, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf156[] = {0,0xFFFF};
static struct eif_par_types par156 = {156, ptf156, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf157[] = {0,0xFFFF};
static struct eif_par_types par157 = {157, ptf157, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf158[] = {0,0xFFFF};
static struct eif_par_types par158 = {158, ptf158, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf159[] = {0,0xFFFF};
static struct eif_par_types par159 = {159, ptf159, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf160[] = {0,0xFFFF};
static struct eif_par_types par160 = {160, ptf160, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE_ITERATION_CURSOR [G#1, G#2] */
static EIF_TYPE_INDEX ptf161[] = {146,0xFFF8,1,0xFFFF};
static struct eif_par_types par161 = {161, ptf161, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf162[] = {146,0xFFF8,1,0xFFFF};
static struct eif_par_types par162 = {162, ptf162, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf163[] = {149,770,0xFFFF};
static struct eif_par_types par163 = {163, ptf163, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf164[] = {149,770,0xFFFF};
static struct eif_par_types par164 = {164, ptf164, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf165[] = {154,764,0xFFFF};
static struct eif_par_types par165 = {165, ptf165, (uint16) 1, (uint16) 2, (char) 0};

/* PART_COMPARABLE */
static EIF_TYPE_INDEX ptf166[] = {0,0xFFFF};
static struct eif_par_types par166 = {166, ptf166, (uint16) 1, (uint16) 0, (char) 0};

/* INTERVAL [G#1] */
static EIF_TYPE_INDEX ptf167[] = {166,0xFFFF};
static struct eif_par_types par167 = {167, ptf167, (uint16) 1, (uint16) 1, (char) 0};

/* DURATION */
static EIF_TYPE_INDEX ptf168[] = {166,0xFFF7,44,0xFFFF};
static struct eif_par_types par168 = {168, ptf168, (uint16) 2, (uint16) 0, (char) 0};

/* DATE_DURATION */
static EIF_TYPE_INDEX ptf169[] = {168,0xFFF7,59,0xFFF7,60,0xFFFF};
static struct eif_par_types par169 = {169, ptf169, (uint16) 3, (uint16) 0, (char) 0};

/* DATE_TIME_DURATION */
static EIF_TYPE_INDEX ptf170[] = {168,0xFFF7,61,0xFFFF};
static struct eif_par_types par170 = {170, ptf170, (uint16) 2, (uint16) 0, (char) 0};

/* TIME_DURATION */
static EIF_TYPE_INDEX ptf171[] = {168,0xFFF7,57,0xFFF7,128,0xFFFF};
static struct eif_par_types par171 = {171, ptf171, (uint16) 3, (uint16) 0, (char) 0};

/* COMPARABLE */
static EIF_TYPE_INDEX ptf172[] = {166,0xFFFF};
static struct eif_par_types par172 = {172, ptf172, (uint16) 1, (uint16) 0, (char) 0};

/* ABSOLUTE */
static EIF_TYPE_INDEX ptf173[] = {172,0xFFFF};
static struct eif_par_types par173 = {173, ptf173, (uint16) 1, (uint16) 0, (char) 0};

/* CELL [G#1] */
static EIF_TYPE_INDEX ptf174[] = {0,0xFFFF};
static struct eif_par_types par174 = {174, ptf174, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [CHARACTER_32] */
static EIF_TYPE_INDEX ptf175[] = {0,0xFFFF};
static struct eif_par_types par175 = {175, ptf175, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [BOOLEAN] */
static EIF_TYPE_INDEX ptf176[] = {0,0xFFFF};
static struct eif_par_types par176 = {176, ptf176, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [NATURAL_64] */
static EIF_TYPE_INDEX ptf177[] = {0,0xFFFF};
static struct eif_par_types par177 = {177, ptf177, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [INTEGER_32] */
static EIF_TYPE_INDEX ptf178[] = {0,0xFFFF};
static struct eif_par_types par178 = {178, ptf178, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [INTEGER_8] */
static EIF_TYPE_INDEX ptf179[] = {0,0xFFFF};
static struct eif_par_types par179 = {179, ptf179, (uint16) 1, (uint16) 1, (char) 0};

/* LINKABLE [G#1] */
static EIF_TYPE_INDEX ptf180[] = {174,0xFFF8,1,0xFFFF};
static struct eif_par_types par180 = {180, ptf180, (uint16) 1, (uint16) 1, (char) 0};

/* LINKABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf181[] = {176,755,0xFFFF};
static struct eif_par_types par181 = {181, ptf181, (uint16) 1, (uint16) 1, (char) 0};

/* LINKABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf182[] = {178,770,0xFFFF};
static struct eif_par_types par182 = {182, ptf182, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [G#1] */
static EIF_TYPE_INDEX ptf183[] = {0,0xFFFF};
static struct eif_par_types par183 = {183, ptf183, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [CHARACTER_8] */
static EIF_TYPE_INDEX ptf184[] = {0,0xFFFF};
static struct eif_par_types par184 = {184, ptf184, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [POINTER] */
static EIF_TYPE_INDEX ptf185[] = {0,0xFFFF};
static struct eif_par_types par185 = {185, ptf185, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [INTEGER_32] */
static EIF_TYPE_INDEX ptf186[] = {0,0xFFFF};
static struct eif_par_types par186 = {186, ptf186, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [REAL_64] */
static EIF_TYPE_INDEX ptf187[] = {0,0xFFFF};
static struct eif_par_types par187 = {187, ptf187, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [BOOLEAN] */
static EIF_TYPE_INDEX ptf188[] = {0,0xFFFF};
static struct eif_par_types par188 = {188, ptf188, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [NATURAL_64] */
static EIF_TYPE_INDEX ptf189[] = {0,0xFFFF};
static struct eif_par_types par189 = {189, ptf189, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [CHARACTER_32] */
static EIF_TYPE_INDEX ptf190[] = {0,0xFFFF};
static struct eif_par_types par190 = {190, ptf190, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [NATURAL_32] */
static EIF_TYPE_INDEX ptf191[] = {0,0xFFFF};
static struct eif_par_types par191 = {191, ptf191, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [NATURAL_16] */
static EIF_TYPE_INDEX ptf192[] = {0,0xFFFF};
static struct eif_par_types par192 = {192, ptf192, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [NATURAL_8] */
static EIF_TYPE_INDEX ptf193[] = {0,0xFFFF};
static struct eif_par_types par193 = {193, ptf193, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [INTEGER_64] */
static EIF_TYPE_INDEX ptf194[] = {0,0xFFFF};
static struct eif_par_types par194 = {194, ptf194, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [INTEGER_16] */
static EIF_TYPE_INDEX ptf195[] = {0,0xFFFF};
static struct eif_par_types par195 = {195, ptf195, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [INTEGER_8] */
static EIF_TYPE_INDEX ptf196[] = {0,0xFFFF};
static struct eif_par_types par196 = {196, ptf196, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [REAL_32] */
static EIF_TYPE_INDEX ptf197[] = {0,0xFFFF};
static struct eif_par_types par197 = {197, ptf197, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [G#1] */
static EIF_TYPE_INDEX ptf198[] = {183,0xFFF8,1,0xFFFF};
static struct eif_par_types par198 = {198, ptf198, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [CHARACTER_8] */
static EIF_TYPE_INDEX ptf199[] = {184,749,0xFFFF};
static struct eif_par_types par199 = {199, ptf199, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [POINTER] */
static EIF_TYPE_INDEX ptf200[] = {185,809,0xFFFF};
static struct eif_par_types par200 = {200, ptf200, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_32] */
static EIF_TYPE_INDEX ptf201[] = {186,770,0xFFFF};
static struct eif_par_types par201 = {201, ptf201, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [REAL_64] */
static EIF_TYPE_INDEX ptf202[] = {187,758,0xFFFF};
static struct eif_par_types par202 = {202, ptf202, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [BOOLEAN] */
static EIF_TYPE_INDEX ptf203[] = {188,755,0xFFFF};
static struct eif_par_types par203 = {203, ptf203, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_64] */
static EIF_TYPE_INDEX ptf204[] = {189,776,0xFFFF};
static struct eif_par_types par204 = {204, ptf204, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [CHARACTER_32] */
static EIF_TYPE_INDEX ptf205[] = {190,746,0xFFFF};
static struct eif_par_types par205 = {205, ptf205, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_32] */
static EIF_TYPE_INDEX ptf206[] = {191,764,0xFFFF};
static struct eif_par_types par206 = {206, ptf206, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_16] */
static EIF_TYPE_INDEX ptf207[] = {192,767,0xFFFF};
static struct eif_par_types par207 = {207, ptf207, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_8] */
static EIF_TYPE_INDEX ptf208[] = {193,761,0xFFFF};
static struct eif_par_types par208 = {208, ptf208, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_64] */
static EIF_TYPE_INDEX ptf209[] = {194,752,0xFFFF};
static struct eif_par_types par209 = {209, ptf209, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_16] */
static EIF_TYPE_INDEX ptf210[] = {195,773,0xFFFF};
static struct eif_par_types par210 = {210, ptf210, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_8] */
static EIF_TYPE_INDEX ptf211[] = {196,740,0xFFFF};
static struct eif_par_types par211 = {211, ptf211, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [REAL_32] */
static EIF_TYPE_INDEX ptf212[] = {197,743,0xFFFF};
static struct eif_par_types par212 = {212, ptf212, (uint16) 1, (uint16) 1, (char) 0};

/* SET [INTEGER_32] */
static EIF_TYPE_INDEX ptf213[] = {201,770,0xFFFF};
static struct eif_par_types par213 = {213, ptf213, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [G#1] */
static EIF_TYPE_INDEX ptf214[] = {198,0xFFF8,1,0xFFFF};
static struct eif_par_types par214 = {214, ptf214, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [CHARACTER_8] */
static EIF_TYPE_INDEX ptf215[] = {199,749,0xFFFF};
static struct eif_par_types par215 = {215, ptf215, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [POINTER] */
static EIF_TYPE_INDEX ptf216[] = {200,809,0xFFFF};
static struct eif_par_types par216 = {216, ptf216, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_32] */
static EIF_TYPE_INDEX ptf217[] = {201,770,0xFFFF};
static struct eif_par_types par217 = {217, ptf217, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [REAL_64] */
static EIF_TYPE_INDEX ptf218[] = {202,758,0xFFFF};
static struct eif_par_types par218 = {218, ptf218, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [BOOLEAN] */
static EIF_TYPE_INDEX ptf219[] = {203,755,0xFFFF};
static struct eif_par_types par219 = {219, ptf219, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_64] */
static EIF_TYPE_INDEX ptf220[] = {204,776,0xFFFF};
static struct eif_par_types par220 = {220, ptf220, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [CHARACTER_32] */
static EIF_TYPE_INDEX ptf221[] = {205,746,0xFFFF};
static struct eif_par_types par221 = {221, ptf221, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_32] */
static EIF_TYPE_INDEX ptf222[] = {206,764,0xFFFF};
static struct eif_par_types par222 = {222, ptf222, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_16] */
static EIF_TYPE_INDEX ptf223[] = {207,767,0xFFFF};
static struct eif_par_types par223 = {223, ptf223, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_8] */
static EIF_TYPE_INDEX ptf224[] = {208,761,0xFFFF};
static struct eif_par_types par224 = {224, ptf224, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_64] */
static EIF_TYPE_INDEX ptf225[] = {209,752,0xFFFF};
static struct eif_par_types par225 = {225, ptf225, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_16] */
static EIF_TYPE_INDEX ptf226[] = {210,773,0xFFFF};
static struct eif_par_types par226 = {226, ptf226, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_8] */
static EIF_TYPE_INDEX ptf227[] = {211,740,0xFFFF};
static struct eif_par_types par227 = {227, ptf227, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [REAL_32] */
static EIF_TYPE_INDEX ptf228[] = {212,743,0xFFFF};
static struct eif_par_types par228 = {228, ptf228, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [G#1, G#2] */
static EIF_TYPE_INDEX ptf229[] = {214,0xFFF8,1,0xFFFF};
static struct eif_par_types par229 = {229, ptf229, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf230[] = {214,0xFFF8,1,0xFFFF};
static struct eif_par_types par230 = {230, ptf230, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [POINTER, INTEGER_32] */
static EIF_TYPE_INDEX ptf231[] = {216,809,0xFFFF};
static struct eif_par_types par231 = {231, ptf231, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf232[] = {217,770,0xFFFF};
static struct eif_par_types par232 = {232, ptf232, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf233[] = {217,770,0xFFFF};
static struct eif_par_types par233 = {233, ptf233, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [REAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf234[] = {218,758,0xFFFF};
static struct eif_par_types par234 = {234, ptf234, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [BOOLEAN, INTEGER_32] */
static EIF_TYPE_INDEX ptf235[] = {219,755,0xFFFF};
static struct eif_par_types par235 = {235, ptf235, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [NATURAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf236[] = {220,776,0xFFFF};
static struct eif_par_types par236 = {236, ptf236, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [NATURAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf237[] = {222,764,0xFFFF};
static struct eif_par_types par237 = {237, ptf237, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [CHARACTER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf238[] = {215,749,0xFFFF};
static struct eif_par_types par238 = {238, ptf238, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [NATURAL_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf239[] = {223,767,0xFFFF};
static struct eif_par_types par239 = {239, ptf239, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [NATURAL_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf240[] = {224,761,0xFFFF};
static struct eif_par_types par240 = {240, ptf240, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf241[] = {222,764,0xFFFF};
static struct eif_par_types par241 = {241, ptf241, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [INTEGER_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf242[] = {225,752,0xFFFF};
static struct eif_par_types par242 = {242, ptf242, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [INTEGER_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf243[] = {226,773,0xFFFF};
static struct eif_par_types par243 = {243, ptf243, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [INTEGER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf244[] = {227,740,0xFFFF};
static struct eif_par_types par244 = {244, ptf244, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [CHARACTER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf245[] = {221,746,0xFFFF};
static struct eif_par_types par245 = {245, ptf245, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [REAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf246[] = {228,743,0xFFFF};
static struct eif_par_types par246 = {246, ptf246, (uint16) 1, (uint16) 2, (char) 0};

/* ACTIVE [G#1] */
static EIF_TYPE_INDEX ptf247[] = {214,0xFFF8,1,0xFFFF};
static struct eif_par_types par247 = {247, ptf247, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf248[] = {215,749,0xFFFF};
static struct eif_par_types par248 = {248, ptf248, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [POINTER] */
static EIF_TYPE_INDEX ptf249[] = {216,809,0xFFFF};
static struct eif_par_types par249 = {249, ptf249, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_32] */
static EIF_TYPE_INDEX ptf250[] = {217,770,0xFFFF};
static struct eif_par_types par250 = {250, ptf250, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [REAL_64] */
static EIF_TYPE_INDEX ptf251[] = {218,758,0xFFFF};
static struct eif_par_types par251 = {251, ptf251, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [BOOLEAN] */
static EIF_TYPE_INDEX ptf252[] = {219,755,0xFFFF};
static struct eif_par_types par252 = {252, ptf252, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_64] */
static EIF_TYPE_INDEX ptf253[] = {220,776,0xFFFF};
static struct eif_par_types par253 = {253, ptf253, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf254[] = {221,746,0xFFFF};
static struct eif_par_types par254 = {254, ptf254, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_32] */
static EIF_TYPE_INDEX ptf255[] = {222,764,0xFFFF};
static struct eif_par_types par255 = {255, ptf255, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_16] */
static EIF_TYPE_INDEX ptf256[] = {223,767,0xFFFF};
static struct eif_par_types par256 = {256, ptf256, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_8] */
static EIF_TYPE_INDEX ptf257[] = {224,761,0xFFFF};
static struct eif_par_types par257 = {257, ptf257, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_64] */
static EIF_TYPE_INDEX ptf258[] = {225,752,0xFFFF};
static struct eif_par_types par258 = {258, ptf258, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_16] */
static EIF_TYPE_INDEX ptf259[] = {226,773,0xFFFF};
static struct eif_par_types par259 = {259, ptf259, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_8] */
static EIF_TYPE_INDEX ptf260[] = {227,740,0xFFFF};
static struct eif_par_types par260 = {260, ptf260, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [REAL_32] */
static EIF_TYPE_INDEX ptf261[] = {228,743,0xFFFF};
static struct eif_par_types par261 = {261, ptf261, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [G#1] */
static EIF_TYPE_INDEX ptf262[] = {247,0xFFF8,1,0xFFFF};
static struct eif_par_types par262 = {262, ptf262, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf263[] = {248,749,0xFFFF};
static struct eif_par_types par263 = {263, ptf263, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [POINTER] */
static EIF_TYPE_INDEX ptf264[] = {249,809,0xFFFF};
static struct eif_par_types par264 = {264, ptf264, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_32] */
static EIF_TYPE_INDEX ptf265[] = {250,770,0xFFFF};
static struct eif_par_types par265 = {265, ptf265, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [REAL_64] */
static EIF_TYPE_INDEX ptf266[] = {251,758,0xFFFF};
static struct eif_par_types par266 = {266, ptf266, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [BOOLEAN] */
static EIF_TYPE_INDEX ptf267[] = {252,755,0xFFFF};
static struct eif_par_types par267 = {267, ptf267, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_64] */
static EIF_TYPE_INDEX ptf268[] = {253,776,0xFFFF};
static struct eif_par_types par268 = {268, ptf268, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf269[] = {254,746,0xFFFF};
static struct eif_par_types par269 = {269, ptf269, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_32] */
static EIF_TYPE_INDEX ptf270[] = {255,764,0xFFFF};
static struct eif_par_types par270 = {270, ptf270, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_16] */
static EIF_TYPE_INDEX ptf271[] = {256,767,0xFFFF};
static struct eif_par_types par271 = {271, ptf271, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_8] */
static EIF_TYPE_INDEX ptf272[] = {257,761,0xFFFF};
static struct eif_par_types par272 = {272, ptf272, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_64] */
static EIF_TYPE_INDEX ptf273[] = {258,752,0xFFFF};
static struct eif_par_types par273 = {273, ptf273, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_16] */
static EIF_TYPE_INDEX ptf274[] = {259,773,0xFFFF};
static struct eif_par_types par274 = {274, ptf274, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_8] */
static EIF_TYPE_INDEX ptf275[] = {260,740,0xFFFF};
static struct eif_par_types par275 = {275, ptf275, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [REAL_32] */
static EIF_TYPE_INDEX ptf276[] = {261,743,0xFFFF};
static struct eif_par_types par276 = {276, ptf276, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [G#1] */
static EIF_TYPE_INDEX ptf277[] = {183,0xFFF8,1,0xFFFF};
static struct eif_par_types par277 = {277, ptf277, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [CHARACTER_8] */
static EIF_TYPE_INDEX ptf278[] = {184,749,0xFFFF};
static struct eif_par_types par278 = {278, ptf278, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [POINTER] */
static EIF_TYPE_INDEX ptf279[] = {185,809,0xFFFF};
static struct eif_par_types par279 = {279, ptf279, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_32] */
static EIF_TYPE_INDEX ptf280[] = {186,770,0xFFFF};
static struct eif_par_types par280 = {280, ptf280, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [REAL_64] */
static EIF_TYPE_INDEX ptf281[] = {187,758,0xFFFF};
static struct eif_par_types par281 = {281, ptf281, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [BOOLEAN] */
static EIF_TYPE_INDEX ptf282[] = {188,755,0xFFFF};
static struct eif_par_types par282 = {282, ptf282, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_64] */
static EIF_TYPE_INDEX ptf283[] = {189,776,0xFFFF};
static struct eif_par_types par283 = {283, ptf283, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [CHARACTER_32] */
static EIF_TYPE_INDEX ptf284[] = {190,746,0xFFFF};
static struct eif_par_types par284 = {284, ptf284, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_32] */
static EIF_TYPE_INDEX ptf285[] = {191,764,0xFFFF};
static struct eif_par_types par285 = {285, ptf285, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_16] */
static EIF_TYPE_INDEX ptf286[] = {192,767,0xFFFF};
static struct eif_par_types par286 = {286, ptf286, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_8] */
static EIF_TYPE_INDEX ptf287[] = {193,761,0xFFFF};
static struct eif_par_types par287 = {287, ptf287, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_64] */
static EIF_TYPE_INDEX ptf288[] = {194,752,0xFFFF};
static struct eif_par_types par288 = {288, ptf288, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_16] */
static EIF_TYPE_INDEX ptf289[] = {195,773,0xFFFF};
static struct eif_par_types par289 = {289, ptf289, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_8] */
static EIF_TYPE_INDEX ptf290[] = {196,740,0xFFFF};
static struct eif_par_types par290 = {290, ptf290, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [REAL_32] */
static EIF_TYPE_INDEX ptf291[] = {197,743,0xFFFF};
static struct eif_par_types par291 = {291, ptf291, (uint16) 1, (uint16) 1, (char) 0};

/* INFINITE [INTEGER_32] */
static EIF_TYPE_INDEX ptf292[] = {280,770,0xFFFF};
static struct eif_par_types par292 = {292, ptf292, (uint16) 1, (uint16) 1, (char) 0};

/* COUNTABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf293[] = {292,770,0xFFFF};
static struct eif_par_types par293 = {293, ptf293, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [G#1] */
static EIF_TYPE_INDEX ptf294[] = {277,0xFFF8,1,0xFFFF};
static struct eif_par_types par294 = {294, ptf294, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf295[] = {278,749,0xFFFF};
static struct eif_par_types par295 = {295, ptf295, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [POINTER] */
static EIF_TYPE_INDEX ptf296[] = {279,809,0xFFFF};
static struct eif_par_types par296 = {296, ptf296, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_32] */
static EIF_TYPE_INDEX ptf297[] = {280,770,0xFFFF};
static struct eif_par_types par297 = {297, ptf297, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [REAL_64] */
static EIF_TYPE_INDEX ptf298[] = {281,758,0xFFFF};
static struct eif_par_types par298 = {298, ptf298, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [BOOLEAN] */
static EIF_TYPE_INDEX ptf299[] = {282,755,0xFFFF};
static struct eif_par_types par299 = {299, ptf299, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_64] */
static EIF_TYPE_INDEX ptf300[] = {283,776,0xFFFF};
static struct eif_par_types par300 = {300, ptf300, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf301[] = {284,746,0xFFFF};
static struct eif_par_types par301 = {301, ptf301, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_32] */
static EIF_TYPE_INDEX ptf302[] = {285,764,0xFFFF};
static struct eif_par_types par302 = {302, ptf302, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_16] */
static EIF_TYPE_INDEX ptf303[] = {286,767,0xFFFF};
static struct eif_par_types par303 = {303, ptf303, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_8] */
static EIF_TYPE_INDEX ptf304[] = {287,761,0xFFFF};
static struct eif_par_types par304 = {304, ptf304, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_64] */
static EIF_TYPE_INDEX ptf305[] = {288,752,0xFFFF};
static struct eif_par_types par305 = {305, ptf305, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_16] */
static EIF_TYPE_INDEX ptf306[] = {289,773,0xFFFF};
static struct eif_par_types par306 = {306, ptf306, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_8] */
static EIF_TYPE_INDEX ptf307[] = {290,740,0xFFFF};
static struct eif_par_types par307 = {307, ptf307, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [REAL_32] */
static EIF_TYPE_INDEX ptf308[] = {291,743,0xFFFF};
static struct eif_par_types par308 = {308, ptf308, (uint16) 1, (uint16) 1, (char) 0};

/* DISPENSER [G#1] */
static EIF_TYPE_INDEX ptf309[] = {247,0xFFF8,1,0xFFF7,294,0xFFF8,1,0xFFFF};
static struct eif_par_types par309 = {309, ptf309, (uint16) 2, (uint16) 1, (char) 0};

/* DISPENSER [BOOLEAN] */
static EIF_TYPE_INDEX ptf310[] = {252,755,0xFFF7,299,755,0xFFFF};
static struct eif_par_types par310 = {310, ptf310, (uint16) 2, (uint16) 1, (char) 0};

/* DISPENSER [INTEGER_32] */
static EIF_TYPE_INDEX ptf311[] = {250,770,0xFFF7,297,770,0xFFFF};
static struct eif_par_types par311 = {311, ptf311, (uint16) 2, (uint16) 1, (char) 0};

/* STACK [G#1] */
static EIF_TYPE_INDEX ptf312[] = {309,0xFFF8,1,0xFFFF};
static struct eif_par_types par312 = {312, ptf312, (uint16) 1, (uint16) 1, (char) 0};

/* STACK [BOOLEAN] */
static EIF_TYPE_INDEX ptf313[] = {310,755,0xFFFF};
static struct eif_par_types par313 = {313, ptf313, (uint16) 1, (uint16) 1, (char) 0};

/* STACK [INTEGER_32] */
static EIF_TYPE_INDEX ptf314[] = {311,770,0xFFFF};
static struct eif_par_types par314 = {314, ptf314, (uint16) 1, (uint16) 1, (char) 0};

/* QUEUE [G#1] */
static EIF_TYPE_INDEX ptf315[] = {309,0xFFF8,1,0xFFFF};
static struct eif_par_types par315 = {315, ptf315, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [G#1] */
static EIF_TYPE_INDEX ptf316[] = {294,0xFFF8,1,0xFFFF};
static struct eif_par_types par316 = {316, ptf316, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [POINTER] */
static EIF_TYPE_INDEX ptf317[] = {296,809,0xFFFF};
static struct eif_par_types par317 = {317, ptf317, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_32] */
static EIF_TYPE_INDEX ptf318[] = {297,770,0xFFFF};
static struct eif_par_types par318 = {318, ptf318, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [REAL_64] */
static EIF_TYPE_INDEX ptf319[] = {298,758,0xFFFF};
static struct eif_par_types par319 = {319, ptf319, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [CHARACTER_8] */
static EIF_TYPE_INDEX ptf320[] = {295,749,0xFFFF};
static struct eif_par_types par320 = {320, ptf320, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [BOOLEAN] */
static EIF_TYPE_INDEX ptf321[] = {299,755,0xFFFF};
static struct eif_par_types par321 = {321, ptf321, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_64] */
static EIF_TYPE_INDEX ptf322[] = {300,776,0xFFFF};
static struct eif_par_types par322 = {322, ptf322, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_32] */
static EIF_TYPE_INDEX ptf323[] = {302,764,0xFFFF};
static struct eif_par_types par323 = {323, ptf323, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_16] */
static EIF_TYPE_INDEX ptf324[] = {303,767,0xFFFF};
static struct eif_par_types par324 = {324, ptf324, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_8] */
static EIF_TYPE_INDEX ptf325[] = {304,761,0xFFFF};
static struct eif_par_types par325 = {325, ptf325, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_64] */
static EIF_TYPE_INDEX ptf326[] = {305,752,0xFFFF};
static struct eif_par_types par326 = {326, ptf326, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_16] */
static EIF_TYPE_INDEX ptf327[] = {306,773,0xFFFF};
static struct eif_par_types par327 = {327, ptf327, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_8] */
static EIF_TYPE_INDEX ptf328[] = {307,740,0xFFFF};
static struct eif_par_types par328 = {328, ptf328, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [CHARACTER_32] */
static EIF_TYPE_INDEX ptf329[] = {301,746,0xFFFF};
static struct eif_par_types par329 = {329, ptf329, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [REAL_32] */
static EIF_TYPE_INDEX ptf330[] = {308,743,0xFFFF};
static struct eif_par_types par330 = {330, ptf330, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [G#1] */
static EIF_TYPE_INDEX ptf331[] = {294,0xFFF8,1,0xFFFF};
static struct eif_par_types par331 = {331, ptf331, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [CHARACTER_8] */
static EIF_TYPE_INDEX ptf332[] = {295,749,0xFFFF};
static struct eif_par_types par332 = {332, ptf332, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [POINTER] */
static EIF_TYPE_INDEX ptf333[] = {296,809,0xFFFF};
static struct eif_par_types par333 = {333, ptf333, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_32] */
static EIF_TYPE_INDEX ptf334[] = {297,770,0xFFFF};
static struct eif_par_types par334 = {334, ptf334, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [REAL_64] */
static EIF_TYPE_INDEX ptf335[] = {298,758,0xFFFF};
static struct eif_par_types par335 = {335, ptf335, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [BOOLEAN] */
static EIF_TYPE_INDEX ptf336[] = {299,755,0xFFFF};
static struct eif_par_types par336 = {336, ptf336, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_64] */
static EIF_TYPE_INDEX ptf337[] = {300,776,0xFFFF};
static struct eif_par_types par337 = {337, ptf337, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [CHARACTER_32] */
static EIF_TYPE_INDEX ptf338[] = {301,746,0xFFFF};
static struct eif_par_types par338 = {338, ptf338, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_32] */
static EIF_TYPE_INDEX ptf339[] = {302,764,0xFFFF};
static struct eif_par_types par339 = {339, ptf339, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_16] */
static EIF_TYPE_INDEX ptf340[] = {303,767,0xFFFF};
static struct eif_par_types par340 = {340, ptf340, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_8] */
static EIF_TYPE_INDEX ptf341[] = {304,761,0xFFFF};
static struct eif_par_types par341 = {341, ptf341, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_64] */
static EIF_TYPE_INDEX ptf342[] = {305,752,0xFFFF};
static struct eif_par_types par342 = {342, ptf342, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_16] */
static EIF_TYPE_INDEX ptf343[] = {306,773,0xFFFF};
static struct eif_par_types par343 = {343, ptf343, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_8] */
static EIF_TYPE_INDEX ptf344[] = {307,740,0xFFFF};
static struct eif_par_types par344 = {344, ptf344, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [REAL_32] */
static EIF_TYPE_INDEX ptf345[] = {308,743,0xFFFF};
static struct eif_par_types par345 = {345, ptf345, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [G#1] */
static EIF_TYPE_INDEX ptf346[] = {331,0xFFF8,1,0xFFFF};
static struct eif_par_types par346 = {346, ptf346, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf347[] = {332,749,0xFFFF};
static struct eif_par_types par347 = {347, ptf347, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [POINTER] */
static EIF_TYPE_INDEX ptf348[] = {333,809,0xFFFF};
static struct eif_par_types par348 = {348, ptf348, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf349[] = {334,770,0xFFFF};
static struct eif_par_types par349 = {349, ptf349, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [REAL_64] */
static EIF_TYPE_INDEX ptf350[] = {335,758,0xFFFF};
static struct eif_par_types par350 = {350, ptf350, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf351[] = {336,755,0xFFFF};
static struct eif_par_types par351 = {351, ptf351, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf352[] = {337,776,0xFFFF};
static struct eif_par_types par352 = {352, ptf352, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf353[] = {338,746,0xFFFF};
static struct eif_par_types par353 = {353, ptf353, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf354[] = {339,764,0xFFFF};
static struct eif_par_types par354 = {354, ptf354, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf355[] = {340,767,0xFFFF};
static struct eif_par_types par355 = {355, ptf355, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf356[] = {341,761,0xFFFF};
static struct eif_par_types par356 = {356, ptf356, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf357[] = {342,752,0xFFFF};
static struct eif_par_types par357 = {357, ptf357, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf358[] = {343,773,0xFFFF};
static struct eif_par_types par358 = {358, ptf358, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf359[] = {344,740,0xFFFF};
static struct eif_par_types par359 = {359, ptf359, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [REAL_32] */
static EIF_TYPE_INDEX ptf360[] = {345,743,0xFFFF};
static struct eif_par_types par360 = {360, ptf360, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [G#1] */
static EIF_TYPE_INDEX ptf361[] = {183,0xFFF8,1,0xFFFF};
static struct eif_par_types par361 = {361, ptf361, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf362[] = {184,749,0xFFFF};
static struct eif_par_types par362 = {362, ptf362, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [POINTER] */
static EIF_TYPE_INDEX ptf363[] = {185,809,0xFFFF};
static struct eif_par_types par363 = {363, ptf363, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf364[] = {186,770,0xFFFF};
static struct eif_par_types par364 = {364, ptf364, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [REAL_64] */
static EIF_TYPE_INDEX ptf365[] = {187,758,0xFFFF};
static struct eif_par_types par365 = {365, ptf365, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf366[] = {188,755,0xFFFF};
static struct eif_par_types par366 = {366, ptf366, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf367[] = {189,776,0xFFFF};
static struct eif_par_types par367 = {367, ptf367, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf368[] = {190,746,0xFFFF};
static struct eif_par_types par368 = {368, ptf368, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf369[] = {191,764,0xFFFF};
static struct eif_par_types par369 = {369, ptf369, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf370[] = {192,767,0xFFFF};
static struct eif_par_types par370 = {370, ptf370, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf371[] = {193,761,0xFFFF};
static struct eif_par_types par371 = {371, ptf371, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf372[] = {194,752,0xFFFF};
static struct eif_par_types par372 = {372, ptf372, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf373[] = {195,773,0xFFFF};
static struct eif_par_types par373 = {373, ptf373, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf374[] = {196,740,0xFFFF};
static struct eif_par_types par374 = {374, ptf374, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [REAL_32] */
static EIF_TYPE_INDEX ptf375[] = {197,743,0xFFFF};
static struct eif_par_types par375 = {375, ptf375, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [G#1] */
static EIF_TYPE_INDEX ptf376[] = {361,0xFFF8,1,0xFFFF};
static struct eif_par_types par376 = {376, ptf376, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf377[] = {362,749,0xFFFF};
static struct eif_par_types par377 = {377, ptf377, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [POINTER] */
static EIF_TYPE_INDEX ptf378[] = {363,809,0xFFFF};
static struct eif_par_types par378 = {378, ptf378, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_32] */
static EIF_TYPE_INDEX ptf379[] = {364,770,0xFFFF};
static struct eif_par_types par379 = {379, ptf379, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [REAL_64] */
static EIF_TYPE_INDEX ptf380[] = {365,758,0xFFFF};
static struct eif_par_types par380 = {380, ptf380, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [BOOLEAN] */
static EIF_TYPE_INDEX ptf381[] = {366,755,0xFFFF};
static struct eif_par_types par381 = {381, ptf381, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_64] */
static EIF_TYPE_INDEX ptf382[] = {367,776,0xFFFF};
static struct eif_par_types par382 = {382, ptf382, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf383[] = {368,746,0xFFFF};
static struct eif_par_types par383 = {383, ptf383, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_32] */
static EIF_TYPE_INDEX ptf384[] = {369,764,0xFFFF};
static struct eif_par_types par384 = {384, ptf384, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_16] */
static EIF_TYPE_INDEX ptf385[] = {370,767,0xFFFF};
static struct eif_par_types par385 = {385, ptf385, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_8] */
static EIF_TYPE_INDEX ptf386[] = {371,761,0xFFFF};
static struct eif_par_types par386 = {386, ptf386, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_64] */
static EIF_TYPE_INDEX ptf387[] = {372,752,0xFFFF};
static struct eif_par_types par387 = {387, ptf387, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_16] */
static EIF_TYPE_INDEX ptf388[] = {373,773,0xFFFF};
static struct eif_par_types par388 = {388, ptf388, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_8] */
static EIF_TYPE_INDEX ptf389[] = {374,740,0xFFFF};
static struct eif_par_types par389 = {389, ptf389, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [REAL_32] */
static EIF_TYPE_INDEX ptf390[] = {375,743,0xFFFF};
static struct eif_par_types par390 = {390, ptf390, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [G#1] */
static EIF_TYPE_INDEX ptf391[] = {376,0xFFF8,1,0xFFFF};
static struct eif_par_types par391 = {391, ptf391, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [POINTER] */
static EIF_TYPE_INDEX ptf392[] = {378,809,0xFFFF};
static struct eif_par_types par392 = {392, ptf392, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_32] */
static EIF_TYPE_INDEX ptf393[] = {379,770,0xFFFF};
static struct eif_par_types par393 = {393, ptf393, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [REAL_64] */
static EIF_TYPE_INDEX ptf394[] = {380,758,0xFFFF};
static struct eif_par_types par394 = {394, ptf394, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [BOOLEAN] */
static EIF_TYPE_INDEX ptf395[] = {381,755,0xFFFF};
static struct eif_par_types par395 = {395, ptf395, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf396[] = {377,749,0xFFFF};
static struct eif_par_types par396 = {396, ptf396, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_64] */
static EIF_TYPE_INDEX ptf397[] = {382,776,0xFFFF};
static struct eif_par_types par397 = {397, ptf397, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_32] */
static EIF_TYPE_INDEX ptf398[] = {384,764,0xFFFF};
static struct eif_par_types par398 = {398, ptf398, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_16] */
static EIF_TYPE_INDEX ptf399[] = {385,767,0xFFFF};
static struct eif_par_types par399 = {399, ptf399, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_8] */
static EIF_TYPE_INDEX ptf400[] = {386,761,0xFFFF};
static struct eif_par_types par400 = {400, ptf400, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_64] */
static EIF_TYPE_INDEX ptf401[] = {387,752,0xFFFF};
static struct eif_par_types par401 = {401, ptf401, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_16] */
static EIF_TYPE_INDEX ptf402[] = {388,773,0xFFFF};
static struct eif_par_types par402 = {402, ptf402, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_8] */
static EIF_TYPE_INDEX ptf403[] = {389,740,0xFFFF};
static struct eif_par_types par403 = {403, ptf403, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf404[] = {383,746,0xFFFF};
static struct eif_par_types par404 = {404, ptf404, (uint16) 1, (uint16) 1, (char) 0};

/* BILINEAR [REAL_32] */
static EIF_TYPE_INDEX ptf405[] = {390,743,0xFFFF};
static struct eif_par_types par405 = {405, ptf405, (uint16) 1, (uint16) 1, (char) 0};

/* SEQUENCE [G#1] */
static EIF_TYPE_INDEX ptf406[] = {247,0xFFF8,1,0xFFF7,391,0xFFF8,1,0xFFF7,294,0xFFF8,1,0xFFFF};
static struct eif_par_types par406 = {406, ptf406, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [POINTER] */
static EIF_TYPE_INDEX ptf407[] = {249,809,0xFFF7,392,809,0xFFF7,296,809,0xFFFF};
static struct eif_par_types par407 = {407, ptf407, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_32] */
static EIF_TYPE_INDEX ptf408[] = {250,770,0xFFF7,393,770,0xFFF7,297,770,0xFFFF};
static struct eif_par_types par408 = {408, ptf408, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [REAL_64] */
static EIF_TYPE_INDEX ptf409[] = {251,758,0xFFF7,394,758,0xFFF7,298,758,0xFFFF};
static struct eif_par_types par409 = {409, ptf409, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [BOOLEAN] */
static EIF_TYPE_INDEX ptf410[] = {252,755,0xFFF7,395,755,0xFFF7,299,755,0xFFFF};
static struct eif_par_types par410 = {410, ptf410, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf411[] = {248,749,0xFFF7,396,749,0xFFF7,295,749,0xFFFF};
static struct eif_par_types par411 = {411, ptf411, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_64] */
static EIF_TYPE_INDEX ptf412[] = {253,776,0xFFF7,397,776,0xFFF7,300,776,0xFFFF};
static struct eif_par_types par412 = {412, ptf412, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_32] */
static EIF_TYPE_INDEX ptf413[] = {255,764,0xFFF7,398,764,0xFFF7,302,764,0xFFFF};
static struct eif_par_types par413 = {413, ptf413, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_16] */
static EIF_TYPE_INDEX ptf414[] = {256,767,0xFFF7,399,767,0xFFF7,303,767,0xFFFF};
static struct eif_par_types par414 = {414, ptf414, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_8] */
static EIF_TYPE_INDEX ptf415[] = {257,761,0xFFF7,400,761,0xFFF7,304,761,0xFFFF};
static struct eif_par_types par415 = {415, ptf415, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_64] */
static EIF_TYPE_INDEX ptf416[] = {258,752,0xFFF7,401,752,0xFFF7,305,752,0xFFFF};
static struct eif_par_types par416 = {416, ptf416, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_16] */
static EIF_TYPE_INDEX ptf417[] = {259,773,0xFFF7,402,773,0xFFF7,306,773,0xFFFF};
static struct eif_par_types par417 = {417, ptf417, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_8] */
static EIF_TYPE_INDEX ptf418[] = {260,740,0xFFF7,403,740,0xFFF7,307,740,0xFFFF};
static struct eif_par_types par418 = {418, ptf418, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf419[] = {254,746,0xFFF7,404,746,0xFFF7,301,746,0xFFFF};
static struct eif_par_types par419 = {419, ptf419, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [REAL_32] */
static EIF_TYPE_INDEX ptf420[] = {261,743,0xFFF7,405,743,0xFFF7,308,743,0xFFFF};
static struct eif_par_types par420 = {420, ptf420, (uint16) 3, (uint16) 1, (char) 0};

/* COUNTABLE_SEQUENCE [INTEGER_32] */
static EIF_TYPE_INDEX ptf421[] = {293,770,0xFFF7,250,770,0xFFF7,379,770,0xFFFF};
static struct eif_par_types par421 = {421, ptf421, (uint16) 3, (uint16) 1, (char) 0};

/* RANDOM */
static EIF_TYPE_INDEX ptf422[] = {421,770,0xFFF7,128,0xFFFF};
static struct eif_par_types par422 = {422, ptf422, (uint16) 2, (uint16) 0, (char) 0};

/* PRIMES */
static EIF_TYPE_INDEX ptf423[] = {421,770,0xFFFF};
static struct eif_par_types par423 = {423, ptf423, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTOR_CONSTANTS */
static EIF_TYPE_INDEX ptf424[] = {0,0xFFFF};
static struct eif_par_types par424 = {424, ptf424, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTOR */
static EIF_TYPE_INDEX ptf425[] = {76,0xFFF7,424,0xFFFF};
static struct eif_par_types par425 = {425, ptf425, (uint16) 2, (uint16) 0, (char) 0};

/* REFLECTED_OBJECT */
static EIF_TYPE_INDEX ptf426[] = {424,0xFFFF};
static struct eif_par_types par426 = {426, ptf426, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTED_COPY_SEMANTICS_OBJECT */
static EIF_TYPE_INDEX ptf427[] = {426,0xFFF7,424,0xFFFF};
static struct eif_par_types par427 = {427, ptf427, (uint16) 2, (uint16) 0, (char) 0};

/* REFLECTED_REFERENCE_OBJECT */
static EIF_TYPE_INDEX ptf428[] = {426,0xFFF7,424,0xFFFF};
static struct eif_par_types par428 = {428, ptf428, (uint16) 2, (uint16) 0, (char) 0};

/* GAME_SURFACE */
static EIF_TYPE_INDEX ptf429[] = {0,0xFFFF};
static struct eif_par_types par429 = {429, ptf429, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SURFACE_TEXT */
static EIF_TYPE_INDEX ptf430[] = {429,0xFFFF};
static struct eif_par_types par430 = {430, ptf430, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SUB_SURFACE */
static EIF_TYPE_INDEX ptf431[] = {429,0xFFFF};
static struct eif_par_types par431 = {431, ptf431, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SURFACE_BMP_FILE */
static EIF_TYPE_INDEX ptf432[] = {429,0xFFF7,64,0xFFFF};
static struct eif_par_types par432 = {432, ptf432, (uint16) 2, (uint16) 0, (char) 0};

/* GAME_SURFACE_BMP_CPF */
static EIF_TYPE_INDEX ptf433[] = {429,0xFFF7,46,0xFFFF};
static struct eif_par_types par433 = {433, ptf433, (uint16) 2, (uint16) 0, (char) 0};

/* GAME_SCREEN */
static EIF_TYPE_INDEX ptf434[] = {429,0xFFFF};
static struct eif_par_types par434 = {434, ptf434, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SURFACE_IMG_FILE */
static EIF_TYPE_INDEX ptf435[] = {429,0xFFF7,64,0xFFFF};
static struct eif_par_types par435 = {435, ptf435, (uint16) 2, (uint16) 0, (char) 0};

/* DRAWABLE */
static EIF_TYPE_INDEX ptf436[] = {435,0xFFFF};
static struct eif_par_types par436 = {436, ptf436, (uint16) 1, (uint16) 0, (char) 0};

/* PERFORMER */
static EIF_TYPE_INDEX ptf437[] = {436,0xFFFF};
static struct eif_par_types par437 = {437, ptf437, (uint16) 1, (uint16) 0, (char) 0};

/* TEXT */
static EIF_TYPE_INDEX ptf438[] = {436,0xFFF7,45,0xFFFF};
static struct eif_par_types par438 = {438, ptf438, (uint16) 2, (uint16) 0, (char) 0};

/* ITERABLE [G#1] */
static EIF_TYPE_INDEX ptf439[] = {0,0xFFFF};
static struct eif_par_types par439 = {439, ptf439, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf440[] = {0,0xFFFF};
static struct eif_par_types par440 = {440, ptf440, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [POINTER] */
static EIF_TYPE_INDEX ptf441[] = {0,0xFFFF};
static struct eif_par_types par441 = {441, ptf441, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf442[] = {0,0xFFFF};
static struct eif_par_types par442 = {442, ptf442, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [REAL_64] */
static EIF_TYPE_INDEX ptf443[] = {0,0xFFFF};
static struct eif_par_types par443 = {443, ptf443, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf444[] = {0,0xFFFF};
static struct eif_par_types par444 = {444, ptf444, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf445[] = {0,0xFFFF};
static struct eif_par_types par445 = {445, ptf445, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf446[] = {0,0xFFFF};
static struct eif_par_types par446 = {446, ptf446, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf447[] = {0,0xFFFF};
static struct eif_par_types par447 = {447, ptf447, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf448[] = {0,0xFFFF};
static struct eif_par_types par448 = {448, ptf448, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf449[] = {0,0xFFFF};
static struct eif_par_types par449 = {449, ptf449, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf450[] = {0,0xFFFF};
static struct eif_par_types par450 = {450, ptf450, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf451[] = {0,0xFFFF};
static struct eif_par_types par451 = {451, ptf451, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf452[] = {0,0xFFFF};
static struct eif_par_types par452 = {452, ptf452, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [REAL_32] */
static EIF_TYPE_INDEX ptf453[] = {0,0xFFFF};
static struct eif_par_types par453 = {453, ptf453, (uint16) 1, (uint16) 1, (char) 0};

/* STRING_ITERATION_CURSOR */
static EIF_TYPE_INDEX ptf454[] = {147,746,0xFFF7,440,746,0xFFFF};
static struct eif_par_types par454 = {454, ptf454, (uint16) 2, (uint16) 0, (char) 0};

/* ARGUMENTS_32 */
static EIF_TYPE_INDEX ptf455[] = {439,823,0xFFFF};
static struct eif_par_types par455 = {455, ptf455, (uint16) 1, (uint16) 0, (char) 0};

/* ARGUMENTS */
static EIF_TYPE_INDEX ptf456[] = {439,818,0xFFFF};
static struct eif_par_types par456 = {456, ptf456, (uint16) 1, (uint16) 0, (char) 0};

/* APPLICATION */
static EIF_TYPE_INDEX ptf457[] = {456,0xFFFF};
static struct eif_par_types par457 = {457, ptf457, (uint16) 1, (uint16) 0, (char) 0};

/* TABLE_ITERABLE [G#1, G#2] */
static EIF_TYPE_INDEX ptf458[] = {439,0xFFF8,1,0xFFFF};
static struct eif_par_types par458 = {458, ptf458, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf459[] = {439,0xFFF8,1,0xFFFF};
static struct eif_par_types par459 = {459, ptf459, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf460[] = {442,770,0xFFFF};
static struct eif_par_types par460 = {460, ptf460, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf461[] = {442,770,0xFFFF};
static struct eif_par_types par461 = {461, ptf461, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf462[] = {447,764,0xFFFF};
static struct eif_par_types par462 = {462, ptf462, (uint16) 1, (uint16) 2, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf463[] = {146,0xFFF8,1,0xFFF7,439,0xFFF8,1,0xFFFF};
static struct eif_par_types par463 = {463, ptf463, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf464[] = {148,809,0xFFF7,441,809,0xFFFF};
static struct eif_par_types par464 = {464, ptf464, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf465[] = {149,770,0xFFF7,442,770,0xFFFF};
static struct eif_par_types par465 = {465, ptf465, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf466[] = {150,758,0xFFF7,443,758,0xFFFF};
static struct eif_par_types par466 = {466, ptf466, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf467[] = {151,755,0xFFF7,444,755,0xFFFF};
static struct eif_par_types par467 = {467, ptf467, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf468[] = {147,746,0xFFF7,440,746,0xFFFF};
static struct eif_par_types par468 = {468, ptf468, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf469[] = {152,749,0xFFF7,445,749,0xFFFF};
static struct eif_par_types par469 = {469, ptf469, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf470[] = {153,776,0xFFF7,446,776,0xFFFF};
static struct eif_par_types par470 = {470, ptf470, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf471[] = {154,764,0xFFF7,447,764,0xFFFF};
static struct eif_par_types par471 = {471, ptf471, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf472[] = {155,767,0xFFF7,448,767,0xFFFF};
static struct eif_par_types par472 = {472, ptf472, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf473[] = {156,761,0xFFF7,449,761,0xFFFF};
static struct eif_par_types par473 = {473, ptf473, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf474[] = {157,752,0xFFF7,450,752,0xFFFF};
static struct eif_par_types par474 = {474, ptf474, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf475[] = {158,773,0xFFF7,451,773,0xFFFF};
static struct eif_par_types par475 = {475, ptf475, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf476[] = {159,740,0xFFF7,452,740,0xFFFF};
static struct eif_par_types par476 = {476, ptf476, (uint16) 2, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf477[] = {160,743,0xFFF7,453,743,0xFFFF};
static struct eif_par_types par477 = {477, ptf477, (uint16) 2, (uint16) 1, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [G#1, G#2] */
static EIF_TYPE_INDEX ptf478[] = {463,0xFFF8,1,0xFFF7,161,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par478 = {478, ptf478, (uint16) 2, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf479[] = {463,0xFFF8,1,0xFFF7,162,0xFFF8,1,770,0xFFFF};
static struct eif_par_types par479 = {479, ptf479, (uint16) 2, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf480[] = {465,770,0xFFF7,163,770,0xFFF8,2,0xFFFF};
static struct eif_par_types par480 = {480, ptf480, (uint16) 2, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf481[] = {465,770,0xFFF7,164,770,770,0xFFFF};
static struct eif_par_types par481 = {481, ptf481, (uint16) 2, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf482[] = {471,764,0xFFF7,165,764,809,0xFFFF};
static struct eif_par_types par482 = {482, ptf482, (uint16) 2, (uint16) 2, (char) 0};

/* LINKED_LIST_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf483[] = {463,0xFFF8,1,0xFFFF};
static struct eif_par_types par483 = {483, ptf483, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf484[] = {467,755,0xFFFF};
static struct eif_par_types par484 = {484, ptf484, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf485[] = {465,770,0xFFFF};
static struct eif_par_types par485 = {485, ptf485, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [G#1] */
static EIF_TYPE_INDEX ptf486[] = {439,0xFFF8,1,0xFFFF};
static struct eif_par_types par486 = {486, ptf486, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [POINTER] */
static EIF_TYPE_INDEX ptf487[] = {441,809,0xFFFF};
static struct eif_par_types par487 = {487, ptf487, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf488[] = {442,770,0xFFFF};
static struct eif_par_types par488 = {488, ptf488, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [REAL_64] */
static EIF_TYPE_INDEX ptf489[] = {443,758,0xFFFF};
static struct eif_par_types par489 = {489, ptf489, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf490[] = {444,755,0xFFFF};
static struct eif_par_types par490 = {490, ptf490, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf491[] = {440,746,0xFFFF};
static struct eif_par_types par491 = {491, ptf491, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf492[] = {445,749,0xFFFF};
static struct eif_par_types par492 = {492, ptf492, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf493[] = {446,776,0xFFFF};
static struct eif_par_types par493 = {493, ptf493, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf494[] = {447,764,0xFFFF};
static struct eif_par_types par494 = {494, ptf494, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf495[] = {448,767,0xFFFF};
static struct eif_par_types par495 = {495, ptf495, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf496[] = {449,761,0xFFFF};
static struct eif_par_types par496 = {496, ptf496, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf497[] = {450,752,0xFFFF};
static struct eif_par_types par497 = {497, ptf497, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf498[] = {451,773,0xFFFF};
static struct eif_par_types par498 = {498, ptf498, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf499[] = {452,740,0xFFFF};
static struct eif_par_types par499 = {499, ptf499, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [REAL_32] */
static EIF_TYPE_INDEX ptf500[] = {453,743,0xFFFF};
static struct eif_par_types par500 = {500, ptf500, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf501[] = {230,0xFFF8,1,770,0xFFF7,486,0xFFF8,1,0xFFFF};
static struct eif_par_types par501 = {501, ptf501, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [POINTER, INTEGER_32] */
static EIF_TYPE_INDEX ptf502[] = {231,809,770,0xFFF7,487,809,0xFFFF};
static struct eif_par_types par502 = {502, ptf502, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf503[] = {233,770,770,0xFFF7,488,770,0xFFFF};
static struct eif_par_types par503 = {503, ptf503, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [REAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf504[] = {234,758,770,0xFFF7,489,758,0xFFFF};
static struct eif_par_types par504 = {504, ptf504, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [BOOLEAN, INTEGER_32] */
static EIF_TYPE_INDEX ptf505[] = {235,755,770,0xFFF7,490,755,0xFFFF};
static struct eif_par_types par505 = {505, ptf505, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [NATURAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf506[] = {236,776,770,0xFFF7,493,776,0xFFFF};
static struct eif_par_types par506 = {506, ptf506, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [NATURAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf507[] = {237,764,770,0xFFF7,494,764,0xFFFF};
static struct eif_par_types par507 = {507, ptf507, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [CHARACTER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf508[] = {238,749,770,0xFFF7,492,749,0xFFFF};
static struct eif_par_types par508 = {508, ptf508, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [NATURAL_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf509[] = {239,767,770,0xFFF7,495,767,0xFFFF};
static struct eif_par_types par509 = {509, ptf509, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [NATURAL_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf510[] = {240,761,770,0xFFF7,496,761,0xFFFF};
static struct eif_par_types par510 = {510, ptf510, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [INTEGER_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf511[] = {242,752,770,0xFFF7,497,752,0xFFFF};
static struct eif_par_types par511 = {511, ptf511, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [INTEGER_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf512[] = {243,773,770,0xFFF7,498,773,0xFFFF};
static struct eif_par_types par512 = {512, ptf512, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [INTEGER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf513[] = {244,740,770,0xFFF7,499,740,0xFFFF};
static struct eif_par_types par513 = {513, ptf513, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [CHARACTER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf514[] = {245,746,770,0xFFF7,491,746,0xFFFF};
static struct eif_par_types par514 = {514, ptf514, (uint16) 2, (uint16) 2, (char) 0};

/* INDEXABLE [REAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf515[] = {246,743,770,0xFFF7,500,743,0xFFFF};
static struct eif_par_types par515 = {515, ptf515, (uint16) 2, (uint16) 2, (char) 0};

/* INTEGER_INTERVAL */
static EIF_TYPE_INDEX ptf516[] = {349,770,0xFFF7,503,770,770,0xFFF7,213,770,0xFFFF};
static struct eif_par_types par516 = {516, ptf516, (uint16) 3, (uint16) 0, (char) 0};

/* CHAIN [G#1] */
static EIF_TYPE_INDEX ptf517[] = {262,0xFFF8,1,0xFFF7,501,0xFFF8,1,770,0xFFF7,406,0xFFF8,1,0xFFFF};
static struct eif_par_types par517 = {517, ptf517, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [POINTER] */
static EIF_TYPE_INDEX ptf518[] = {264,809,0xFFF7,502,809,770,0xFFF7,407,809,0xFFFF};
static struct eif_par_types par518 = {518, ptf518, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_32] */
static EIF_TYPE_INDEX ptf519[] = {265,770,0xFFF7,503,770,770,0xFFF7,408,770,0xFFFF};
static struct eif_par_types par519 = {519, ptf519, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [REAL_64] */
static EIF_TYPE_INDEX ptf520[] = {266,758,0xFFF7,504,758,770,0xFFF7,409,758,0xFFFF};
static struct eif_par_types par520 = {520, ptf520, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [BOOLEAN] */
static EIF_TYPE_INDEX ptf521[] = {267,755,0xFFF7,505,755,770,0xFFF7,410,755,0xFFFF};
static struct eif_par_types par521 = {521, ptf521, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_64] */
static EIF_TYPE_INDEX ptf522[] = {268,776,0xFFF7,506,776,770,0xFFF7,412,776,0xFFFF};
static struct eif_par_types par522 = {522, ptf522, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_32] */
static EIF_TYPE_INDEX ptf523[] = {270,764,0xFFF7,507,764,770,0xFFF7,413,764,0xFFFF};
static struct eif_par_types par523 = {523, ptf523, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [CHARACTER_8] */
static EIF_TYPE_INDEX ptf524[] = {263,749,0xFFF7,508,749,770,0xFFF7,411,749,0xFFFF};
static struct eif_par_types par524 = {524, ptf524, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_16] */
static EIF_TYPE_INDEX ptf525[] = {271,767,0xFFF7,509,767,770,0xFFF7,414,767,0xFFFF};
static struct eif_par_types par525 = {525, ptf525, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_8] */
static EIF_TYPE_INDEX ptf526[] = {272,761,0xFFF7,510,761,770,0xFFF7,415,761,0xFFFF};
static struct eif_par_types par526 = {526, ptf526, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_64] */
static EIF_TYPE_INDEX ptf527[] = {273,752,0xFFF7,511,752,770,0xFFF7,416,752,0xFFFF};
static struct eif_par_types par527 = {527, ptf527, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_16] */
static EIF_TYPE_INDEX ptf528[] = {274,773,0xFFF7,512,773,770,0xFFF7,417,773,0xFFFF};
static struct eif_par_types par528 = {528, ptf528, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_8] */
static EIF_TYPE_INDEX ptf529[] = {275,740,0xFFF7,513,740,770,0xFFF7,418,740,0xFFFF};
static struct eif_par_types par529 = {529, ptf529, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [CHARACTER_32] */
static EIF_TYPE_INDEX ptf530[] = {269,746,0xFFF7,514,746,770,0xFFF7,419,746,0xFFFF};
static struct eif_par_types par530 = {530, ptf530, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [REAL_32] */
static EIF_TYPE_INDEX ptf531[] = {276,743,0xFFF7,515,743,770,0xFFF7,420,743,0xFFFF};
static struct eif_par_types par531 = {531, ptf531, (uint16) 3, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [G#1] */
static EIF_TYPE_INDEX ptf532[] = {517,0xFFF8,1,0xFFF7,316,0xFFF8,1,0xFFFF};
static struct eif_par_types par532 = {532, ptf532, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [POINTER] */
static EIF_TYPE_INDEX ptf533[] = {518,809,0xFFF7,317,809,0xFFFF};
static struct eif_par_types par533 = {533, ptf533, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_32] */
static EIF_TYPE_INDEX ptf534[] = {519,770,0xFFF7,318,770,0xFFFF};
static struct eif_par_types par534 = {534, ptf534, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [REAL_64] */
static EIF_TYPE_INDEX ptf535[] = {520,758,0xFFF7,319,758,0xFFFF};
static struct eif_par_types par535 = {535, ptf535, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [BOOLEAN] */
static EIF_TYPE_INDEX ptf536[] = {521,755,0xFFF7,321,755,0xFFFF};
static struct eif_par_types par536 = {536, ptf536, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_64] */
static EIF_TYPE_INDEX ptf537[] = {522,776,0xFFF7,322,776,0xFFFF};
static struct eif_par_types par537 = {537, ptf537, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_32] */
static EIF_TYPE_INDEX ptf538[] = {523,764,0xFFF7,323,764,0xFFFF};
static struct eif_par_types par538 = {538, ptf538, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [CHARACTER_8] */
static EIF_TYPE_INDEX ptf539[] = {524,749,0xFFF7,320,749,0xFFFF};
static struct eif_par_types par539 = {539, ptf539, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_16] */
static EIF_TYPE_INDEX ptf540[] = {525,767,0xFFF7,324,767,0xFFFF};
static struct eif_par_types par540 = {540, ptf540, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_8] */
static EIF_TYPE_INDEX ptf541[] = {526,761,0xFFF7,325,761,0xFFFF};
static struct eif_par_types par541 = {541, ptf541, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_64] */
static EIF_TYPE_INDEX ptf542[] = {527,752,0xFFF7,326,752,0xFFFF};
static struct eif_par_types par542 = {542, ptf542, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_16] */
static EIF_TYPE_INDEX ptf543[] = {528,773,0xFFF7,327,773,0xFFFF};
static struct eif_par_types par543 = {543, ptf543, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_8] */
static EIF_TYPE_INDEX ptf544[] = {529,740,0xFFF7,328,740,0xFFFF};
static struct eif_par_types par544 = {544, ptf544, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [CHARACTER_32] */
static EIF_TYPE_INDEX ptf545[] = {530,746,0xFFF7,329,746,0xFFFF};
static struct eif_par_types par545 = {545, ptf545, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [REAL_32] */
static EIF_TYPE_INDEX ptf546[] = {531,743,0xFFF7,330,743,0xFFFF};
static struct eif_par_types par546 = {546, ptf546, (uint16) 2, (uint16) 1, (char) 0};

/* LIST [G#1] */
static EIF_TYPE_INDEX ptf547[] = {517,0xFFF8,1,0xFFFF};
static struct eif_par_types par547 = {547, ptf547, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [POINTER] */
static EIF_TYPE_INDEX ptf548[] = {518,809,0xFFFF};
static struct eif_par_types par548 = {548, ptf548, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf549[] = {519,770,0xFFFF};
static struct eif_par_types par549 = {549, ptf549, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [REAL_64] */
static EIF_TYPE_INDEX ptf550[] = {520,758,0xFFFF};
static struct eif_par_types par550 = {550, ptf550, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf551[] = {521,755,0xFFFF};
static struct eif_par_types par551 = {551, ptf551, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [NATURAL_64] */
static EIF_TYPE_INDEX ptf552[] = {522,776,0xFFFF};
static struct eif_par_types par552 = {552, ptf552, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [NATURAL_32] */
static EIF_TYPE_INDEX ptf553[] = {523,764,0xFFFF};
static struct eif_par_types par553 = {553, ptf553, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [CHARACTER_8] */
static EIF_TYPE_INDEX ptf554[] = {524,749,0xFFFF};
static struct eif_par_types par554 = {554, ptf554, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [NATURAL_16] */
static EIF_TYPE_INDEX ptf555[] = {525,767,0xFFFF};
static struct eif_par_types par555 = {555, ptf555, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [NATURAL_8] */
static EIF_TYPE_INDEX ptf556[] = {526,761,0xFFFF};
static struct eif_par_types par556 = {556, ptf556, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [INTEGER_64] */
static EIF_TYPE_INDEX ptf557[] = {527,752,0xFFFF};
static struct eif_par_types par557 = {557, ptf557, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [INTEGER_16] */
static EIF_TYPE_INDEX ptf558[] = {528,773,0xFFFF};
static struct eif_par_types par558 = {558, ptf558, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [INTEGER_8] */
static EIF_TYPE_INDEX ptf559[] = {529,740,0xFFFF};
static struct eif_par_types par559 = {559, ptf559, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [CHARACTER_32] */
static EIF_TYPE_INDEX ptf560[] = {530,746,0xFFFF};
static struct eif_par_types par560 = {560, ptf560, (uint16) 1, (uint16) 1, (char) 0};

/* LIST [REAL_32] */
static EIF_TYPE_INDEX ptf561[] = {531,743,0xFFFF};
static struct eif_par_types par561 = {561, ptf561, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [G#1] */
static EIF_TYPE_INDEX ptf562[] = {547,0xFFF8,1,0xFFF7,532,0xFFF8,1,0xFFFF};
static struct eif_par_types par562 = {562, ptf562, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [POINTER] */
static EIF_TYPE_INDEX ptf563[] = {548,809,0xFFF7,533,809,0xFFFF};
static struct eif_par_types par563 = {563, ptf563, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf564[] = {549,770,0xFFF7,534,770,0xFFFF};
static struct eif_par_types par564 = {564, ptf564, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [REAL_64] */
static EIF_TYPE_INDEX ptf565[] = {550,758,0xFFF7,535,758,0xFFFF};
static struct eif_par_types par565 = {565, ptf565, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf566[] = {551,755,0xFFF7,536,755,0xFFFF};
static struct eif_par_types par566 = {566, ptf566, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_64] */
static EIF_TYPE_INDEX ptf567[] = {552,776,0xFFF7,537,776,0xFFFF};
static struct eif_par_types par567 = {567, ptf567, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_32] */
static EIF_TYPE_INDEX ptf568[] = {553,764,0xFFF7,538,764,0xFFFF};
static struct eif_par_types par568 = {568, ptf568, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [CHARACTER_8] */
static EIF_TYPE_INDEX ptf569[] = {554,749,0xFFF7,539,749,0xFFFF};
static struct eif_par_types par569 = {569, ptf569, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_16] */
static EIF_TYPE_INDEX ptf570[] = {555,767,0xFFF7,540,767,0xFFFF};
static struct eif_par_types par570 = {570, ptf570, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_8] */
static EIF_TYPE_INDEX ptf571[] = {556,761,0xFFF7,541,761,0xFFFF};
static struct eif_par_types par571 = {571, ptf571, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_64] */
static EIF_TYPE_INDEX ptf572[] = {557,752,0xFFF7,542,752,0xFFFF};
static struct eif_par_types par572 = {572, ptf572, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_16] */
static EIF_TYPE_INDEX ptf573[] = {558,773,0xFFF7,543,773,0xFFFF};
static struct eif_par_types par573 = {573, ptf573, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_8] */
static EIF_TYPE_INDEX ptf574[] = {559,740,0xFFF7,544,740,0xFFFF};
static struct eif_par_types par574 = {574, ptf574, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [CHARACTER_32] */
static EIF_TYPE_INDEX ptf575[] = {560,746,0xFFF7,545,746,0xFFFF};
static struct eif_par_types par575 = {575, ptf575, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [REAL_32] */
static EIF_TYPE_INDEX ptf576[] = {561,743,0xFFF7,546,743,0xFFFF};
static struct eif_par_types par576 = {576, ptf576, (uint16) 2, (uint16) 1, (char) 0};

/* LINKED_LIST [G#1] */
static EIF_TYPE_INDEX ptf577[] = {562,0xFFF8,1,0xFFFF};
static struct eif_par_types par577 = {577, ptf577, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf578[] = {566,755,0xFFFF};
static struct eif_par_types par578 = {578, ptf578, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf579[] = {564,770,0xFFFF};
static struct eif_par_types par579 = {579, ptf579, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_STACK [BOOLEAN] */
static EIF_TYPE_INDEX ptf580[] = {313,755,0xFFF7,578,755,0xFFFF};
static struct eif_par_types par580 = {580, ptf580, (uint16) 2, (uint16) 1, (char) 0};

/* LINKED_STACK [INTEGER_32] */
static EIF_TYPE_INDEX ptf581[] = {314,770,0xFFF7,579,770,0xFFFF};
static struct eif_par_types par581 = {581, ptf581, (uint16) 2, (uint16) 1, (char) 0};

/* LINKED_QUEUE [G#1] */
static EIF_TYPE_INDEX ptf582[] = {315,0xFFF8,1,0xFFF7,577,0xFFF8,1,0xFFFF};
static struct eif_par_types par582 = {582, ptf582, (uint16) 2, (uint16) 1, (char) 0};

/* TO_SPECIAL [G#1] */
static EIF_TYPE_INDEX ptf583[] = {0,0xFFFF};
static struct eif_par_types par583 = {583, ptf583, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [POINTER] */
static EIF_TYPE_INDEX ptf584[] = {0,0xFFFF};
static struct eif_par_types par584 = {584, ptf584, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_32] */
static EIF_TYPE_INDEX ptf585[] = {0,0xFFFF};
static struct eif_par_types par585 = {585, ptf585, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [REAL_64] */
static EIF_TYPE_INDEX ptf586[] = {0,0xFFFF};
static struct eif_par_types par586 = {586, ptf586, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [BOOLEAN] */
static EIF_TYPE_INDEX ptf587[] = {0,0xFFFF};
static struct eif_par_types par587 = {587, ptf587, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_64] */
static EIF_TYPE_INDEX ptf588[] = {0,0xFFFF};
static struct eif_par_types par588 = {588, ptf588, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_32] */
static EIF_TYPE_INDEX ptf589[] = {0,0xFFFF};
static struct eif_par_types par589 = {589, ptf589, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [CHARACTER_8] */
static EIF_TYPE_INDEX ptf590[] = {0,0xFFFF};
static struct eif_par_types par590 = {590, ptf590, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_16] */
static EIF_TYPE_INDEX ptf591[] = {0,0xFFFF};
static struct eif_par_types par591 = {591, ptf591, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_8] */
static EIF_TYPE_INDEX ptf592[] = {0,0xFFFF};
static struct eif_par_types par592 = {592, ptf592, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_64] */
static EIF_TYPE_INDEX ptf593[] = {0,0xFFFF};
static struct eif_par_types par593 = {593, ptf593, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_16] */
static EIF_TYPE_INDEX ptf594[] = {0,0xFFFF};
static struct eif_par_types par594 = {594, ptf594, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_8] */
static EIF_TYPE_INDEX ptf595[] = {0,0xFFFF};
static struct eif_par_types par595 = {595, ptf595, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [CHARACTER_32] */
static EIF_TYPE_INDEX ptf596[] = {0,0xFFFF};
static struct eif_par_types par596 = {596, ptf596, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [REAL_32] */
static EIF_TYPE_INDEX ptf597[] = {0,0xFFFF};
static struct eif_par_types par597 = {597, ptf597, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAY [G#1] */
static EIF_TYPE_INDEX ptf598[] = {346,0xFFF8,1,0xFFF7,501,0xFFF8,1,770,0xFFF7,583,0xFFF8,1,0xFFFF};
static struct eif_par_types par598 = {598, ptf598, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [POINTER] */
static EIF_TYPE_INDEX ptf599[] = {348,809,0xFFF7,502,809,770,0xFFF7,584,809,0xFFFF};
static struct eif_par_types par599 = {599, ptf599, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [INTEGER_32] */
static EIF_TYPE_INDEX ptf600[] = {349,770,0xFFF7,503,770,770,0xFFF7,585,770,0xFFFF};
static struct eif_par_types par600 = {600, ptf600, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [REAL_64] */
static EIF_TYPE_INDEX ptf601[] = {350,758,0xFFF7,504,758,770,0xFFF7,586,758,0xFFFF};
static struct eif_par_types par601 = {601, ptf601, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [BOOLEAN] */
static EIF_TYPE_INDEX ptf602[] = {351,755,0xFFF7,505,755,770,0xFFF7,587,755,0xFFFF};
static struct eif_par_types par602 = {602, ptf602, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [NATURAL_64] */
static EIF_TYPE_INDEX ptf603[] = {352,776,0xFFF7,506,776,770,0xFFF7,588,776,0xFFFF};
static struct eif_par_types par603 = {603, ptf603, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [NATURAL_32] */
static EIF_TYPE_INDEX ptf604[] = {354,764,0xFFF7,507,764,770,0xFFF7,589,764,0xFFFF};
static struct eif_par_types par604 = {604, ptf604, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [CHARACTER_8] */
static EIF_TYPE_INDEX ptf605[] = {347,749,0xFFF7,508,749,770,0xFFF7,590,749,0xFFFF};
static struct eif_par_types par605 = {605, ptf605, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [NATURAL_16] */
static EIF_TYPE_INDEX ptf606[] = {355,767,0xFFF7,509,767,770,0xFFF7,591,767,0xFFFF};
static struct eif_par_types par606 = {606, ptf606, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [NATURAL_8] */
static EIF_TYPE_INDEX ptf607[] = {356,761,0xFFF7,510,761,770,0xFFF7,592,761,0xFFFF};
static struct eif_par_types par607 = {607, ptf607, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [INTEGER_64] */
static EIF_TYPE_INDEX ptf608[] = {357,752,0xFFF7,511,752,770,0xFFF7,593,752,0xFFFF};
static struct eif_par_types par608 = {608, ptf608, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [INTEGER_16] */
static EIF_TYPE_INDEX ptf609[] = {358,773,0xFFF7,512,773,770,0xFFF7,594,773,0xFFFF};
static struct eif_par_types par609 = {609, ptf609, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [INTEGER_8] */
static EIF_TYPE_INDEX ptf610[] = {359,740,0xFFF7,513,740,770,0xFFF7,595,740,0xFFFF};
static struct eif_par_types par610 = {610, ptf610, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [CHARACTER_32] */
static EIF_TYPE_INDEX ptf611[] = {353,746,0xFFF7,514,746,770,0xFFF7,596,746,0xFFFF};
static struct eif_par_types par611 = {611, ptf611, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAY [REAL_32] */
static EIF_TYPE_INDEX ptf612[] = {360,743,0xFFF7,515,743,770,0xFFF7,597,743,0xFFFF};
static struct eif_par_types par612 = {612, ptf612, (uint16) 3, (uint16) 1, (char) 0};

/* CURSOR */
static EIF_TYPE_INDEX ptf613[] = {0,0xFFFF};
static struct eif_par_types par613 = {613, ptf613, (uint16) 1, (uint16) 0, (char) 0};

/* HASH_TABLE_CURSOR */
static EIF_TYPE_INDEX ptf614[] = {613,0xFFFF};
static struct eif_par_types par614 = {614, ptf614, (uint16) 1, (uint16) 0, (char) 0};

/* ARRAYED_LIST_CURSOR */
static EIF_TYPE_INDEX ptf615[] = {613,0xFFFF};
static struct eif_par_types par615 = {615, ptf615, (uint16) 1, (uint16) 0, (char) 0};

/* LINKED_LIST_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf616[] = {613,0xFFFF};
static struct eif_par_types par616 = {616, ptf616, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf617[] = {613,0xFFFF};
static struct eif_par_types par617 = {617, ptf617, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf618[] = {613,0xFFFF};
static struct eif_par_types par618 = {618, ptf618, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_STRING_HANDLER */
static EIF_TYPE_INDEX ptf619[] = {0,0xFFFF};
static struct eif_par_types par619 = {619, ptf619, (uint16) 1, (uint16) 0, (char) 0};

/* NATIVE_STRING */
static EIF_TYPE_INDEX ptf620[] = {619,0xFFFF};
static struct eif_par_types par620 = {620, ptf620, (uint16) 1, (uint16) 0, (char) 0};

/* EXECUTION_ENVIRONMENT */
static EIF_TYPE_INDEX ptf621[] = {619,0xFFFF};
static struct eif_par_types par621 = {621, ptf621, (uint16) 1, (uint16) 0, (char) 0};

/* FILE_INFO */
static EIF_TYPE_INDEX ptf622[] = {592,761,0xFFF7,619,0xFFFF};
static struct eif_par_types par622 = {622, ptf622, (uint16) 2, (uint16) 0, (char) 0};

/* UNIX_FILE_INFO */
static EIF_TYPE_INDEX ptf623[] = {622,0xFFFF};
static struct eif_par_types par623 = {623, ptf623, (uint16) 1, (uint16) 0, (char) 0};

/* MISMATCH_CORRECTOR */
static EIF_TYPE_INDEX ptf624[] = {0,0xFFFF};
static struct eif_par_types par624 = {624, ptf624, (uint16) 1, (uint16) 0, (char) 0};

/* ARRAYED_QUEUE [G#1] */
static EIF_TYPE_INDEX ptf625[] = {315,0xFFF8,1,0xFFF7,346,0xFFF8,1,0xFFF7,624,0xFFFF};
static struct eif_par_types par625 = {625, ptf625, (uint16) 3, (uint16) 1, (char) 0};

/* DATE_VALUE */
static EIF_TYPE_INDEX ptf626[] = {60,0xFFF7,624,0xFFFF};
static struct eif_par_types par626 = {626, ptf626, (uint16) 2, (uint16) 0, (char) 0};

/* HASH_TABLE [G#1, G#2] */
static EIF_TYPE_INDEX ptf627[] = {316,0xFFF8,1,0xFFF7,229,0xFFF8,1,0xFFF8,2,0xFFF7,458,0xFFF8,1,0xFFF8,2,0xFFF7,486,0xFFF8,1,0xFFF7,624,0xFFFF};
static struct eif_par_types par627 = {627, ptf627, (uint16) 5, (uint16) 2, (char) 0};

/* HASH_TABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf628[] = {316,0xFFF8,1,0xFFF7,230,0xFFF8,1,770,0xFFF7,459,0xFFF8,1,770,0xFFF7,486,0xFFF8,1,0xFFF7,624,0xFFFF};
static struct eif_par_types par628 = {628, ptf628, (uint16) 5, (uint16) 2, (char) 0};

/* HASH_TABLE [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf629[] = {318,770,0xFFF7,232,770,0xFFF8,2,0xFFF7,460,770,0xFFF8,2,0xFFF7,488,770,0xFFF7,624,0xFFFF};
static struct eif_par_types par629 = {629, ptf629, (uint16) 5, (uint16) 2, (char) 0};

/* HASH_TABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf630[] = {318,770,0xFFF7,233,770,770,0xFFF7,461,770,770,0xFFF7,488,770,0xFFF7,624,0xFFFF};
static struct eif_par_types par630 = {630, ptf630, (uint16) 5, (uint16) 2, (char) 0};

/* HASH_TABLE [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf631[] = {323,764,0xFFF7,241,764,809,0xFFF7,462,764,809,0xFFF7,494,764,0xFFF7,624,0xFFFF};
static struct eif_par_types par631 = {631, ptf631, (uint16) 5, (uint16) 2, (char) 0};

/* STRING_TABLE [G#1] */
static EIF_TYPE_INDEX ptf632[] = {627,0xFFF8,1,815,0xFFFF};
static struct eif_par_types par632 = {632, ptf632, (uint16) 1, (uint16) 1, (char) 0};

/* STRING_TABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf633[] = {629,770,815,0xFFFF};
static struct eif_par_types par633 = {633, ptf633, (uint16) 1, (uint16) 1, (char) 0};

/* MISMATCH_INFORMATION */
static EIF_TYPE_INDEX ptf634[] = {627,0,818,0xFFFF};
static struct eif_par_types par634 = {634, ptf634, (uint16) 1, (uint16) 0, (char) 0};

/* ARRAYED_LIST [G#1] */
static EIF_TYPE_INDEX ptf635[] = {583,0xFFF8,1,0xFFF7,346,0xFFF8,1,0xFFF7,562,0xFFF8,1,0xFFF7,624,0xFFFF};
static struct eif_par_types par635 = {635, ptf635, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [POINTER] */
static EIF_TYPE_INDEX ptf636[] = {584,809,0xFFF7,348,809,0xFFF7,563,809,0xFFF7,624,0xFFFF};
static struct eif_par_types par636 = {636, ptf636, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf637[] = {585,770,0xFFF7,349,770,0xFFF7,564,770,0xFFF7,624,0xFFFF};
static struct eif_par_types par637 = {637, ptf637, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [REAL_64] */
static EIF_TYPE_INDEX ptf638[] = {586,758,0xFFF7,350,758,0xFFF7,565,758,0xFFF7,624,0xFFFF};
static struct eif_par_types par638 = {638, ptf638, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf639[] = {587,755,0xFFF7,351,755,0xFFF7,566,755,0xFFF7,624,0xFFFF};
static struct eif_par_types par639 = {639, ptf639, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_64] */
static EIF_TYPE_INDEX ptf640[] = {588,776,0xFFF7,352,776,0xFFF7,567,776,0xFFF7,624,0xFFFF};
static struct eif_par_types par640 = {640, ptf640, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_32] */
static EIF_TYPE_INDEX ptf641[] = {589,764,0xFFF7,354,764,0xFFF7,568,764,0xFFF7,624,0xFFFF};
static struct eif_par_types par641 = {641, ptf641, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [CHARACTER_8] */
static EIF_TYPE_INDEX ptf642[] = {590,749,0xFFF7,347,749,0xFFF7,569,749,0xFFF7,624,0xFFFF};
static struct eif_par_types par642 = {642, ptf642, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_16] */
static EIF_TYPE_INDEX ptf643[] = {591,767,0xFFF7,355,767,0xFFF7,570,767,0xFFF7,624,0xFFFF};
static struct eif_par_types par643 = {643, ptf643, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_8] */
static EIF_TYPE_INDEX ptf644[] = {592,761,0xFFF7,356,761,0xFFF7,571,761,0xFFF7,624,0xFFFF};
static struct eif_par_types par644 = {644, ptf644, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_64] */
static EIF_TYPE_INDEX ptf645[] = {593,752,0xFFF7,357,752,0xFFF7,572,752,0xFFF7,624,0xFFFF};
static struct eif_par_types par645 = {645, ptf645, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_16] */
static EIF_TYPE_INDEX ptf646[] = {594,773,0xFFF7,358,773,0xFFF7,573,773,0xFFF7,624,0xFFFF};
static struct eif_par_types par646 = {646, ptf646, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_8] */
static EIF_TYPE_INDEX ptf647[] = {595,740,0xFFF7,359,740,0xFFF7,574,740,0xFFF7,624,0xFFFF};
static struct eif_par_types par647 = {647, ptf647, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [CHARACTER_32] */
static EIF_TYPE_INDEX ptf648[] = {596,746,0xFFF7,353,746,0xFFF7,575,746,0xFFF7,624,0xFFFF};
static struct eif_par_types par648 = {648, ptf648, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_LIST [REAL_32] */
static EIF_TYPE_INDEX ptf649[] = {597,743,0xFFF7,360,743,0xFFF7,576,743,0xFFF7,624,0xFFFF};
static struct eif_par_types par649 = {649, ptf649, (uint16) 4, (uint16) 1, (char) 0};

/* ARRAYED_STACK [G#1] */
static EIF_TYPE_INDEX ptf650[] = {312,0xFFF8,1,0xFFF7,635,0xFFF8,1,0xFFFF};
static struct eif_par_types par650 = {650, ptf650, (uint16) 2, (uint16) 1, (char) 0};

/* ARRAYED_STACK [BOOLEAN] */
static EIF_TYPE_INDEX ptf651[] = {313,755,0xFFF7,639,755,0xFFFF};
static struct eif_par_types par651 = {651, ptf651, (uint16) 2, (uint16) 1, (char) 0};

/* ARRAYED_STACK [INTEGER_32] */
static EIF_TYPE_INDEX ptf652[] = {314,770,0xFFF7,637,770,0xFFFF};
static struct eif_par_types par652 = {652, ptf652, (uint16) 2, (uint16) 1, (char) 0};

/* INTERACTIVE_LIST [G#1] */
static EIF_TYPE_INDEX ptf653[] = {635,0xFFF8,1,0xFFFF};
static struct eif_par_types par653 = {653, ptf653, (uint16) 1, (uint16) 1, (char) 0};

/* ACTION_SEQUENCE [G#1] */
static EIF_TYPE_INDEX ptf654[] = {653,811,0,0xFFF8,1,0xFFFF};
static struct eif_par_types par654 = {654, ptf654, (uint16) 1, (uint16) 1, (char) 0};

/* DEBUG_OUTPUT */
static EIF_TYPE_INDEX ptf655[] = {0,0xFFFF};
static struct eif_par_types par655 = {655, ptf655, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_CODE */
static EIF_TYPE_INDEX ptf656[] = {63,0xFFF7,655,0xFFFF};
static struct eif_par_types par656 = {656, ptf656, (uint16) 2, (uint16) 0, (char) 0};

/* ABSTRACT_SPECIAL */
static EIF_TYPE_INDEX ptf657[] = {655,0xFFFF};
static struct eif_par_types par657 = {657, ptf657, (uint16) 1, (uint16) 0, (char) 0};

/* SPECIAL [G#1] */
static EIF_TYPE_INDEX ptf658[] = {657,0xFFF7,486,0xFFF8,1,0xFFFF};
static struct eif_par_types par658 = {658, ptf658, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [POINTER] */
static EIF_TYPE_INDEX ptf659[] = {657,0xFFF7,487,809,0xFFFF};
static struct eif_par_types par659 = {659, ptf659, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [INTEGER_32] */
static EIF_TYPE_INDEX ptf660[] = {657,0xFFF7,488,770,0xFFFF};
static struct eif_par_types par660 = {660, ptf660, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [REAL_64] */
static EIF_TYPE_INDEX ptf661[] = {657,0xFFF7,489,758,0xFFFF};
static struct eif_par_types par661 = {661, ptf661, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [BOOLEAN] */
static EIF_TYPE_INDEX ptf662[] = {657,0xFFF7,490,755,0xFFFF};
static struct eif_par_types par662 = {662, ptf662, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [NATURAL_64] */
static EIF_TYPE_INDEX ptf663[] = {657,0xFFF7,493,776,0xFFFF};
static struct eif_par_types par663 = {663, ptf663, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [NATURAL_32] */
static EIF_TYPE_INDEX ptf664[] = {657,0xFFF7,494,764,0xFFFF};
static struct eif_par_types par664 = {664, ptf664, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [CHARACTER_8] */
static EIF_TYPE_INDEX ptf665[] = {657,0xFFF7,492,749,0xFFFF};
static struct eif_par_types par665 = {665, ptf665, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [NATURAL_16] */
static EIF_TYPE_INDEX ptf666[] = {657,0xFFF7,495,767,0xFFFF};
static struct eif_par_types par666 = {666, ptf666, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [NATURAL_8] */
static EIF_TYPE_INDEX ptf667[] = {657,0xFFF7,496,761,0xFFFF};
static struct eif_par_types par667 = {667, ptf667, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [INTEGER_64] */
static EIF_TYPE_INDEX ptf668[] = {657,0xFFF7,497,752,0xFFFF};
static struct eif_par_types par668 = {668, ptf668, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [INTEGER_16] */
static EIF_TYPE_INDEX ptf669[] = {657,0xFFF7,498,773,0xFFFF};
static struct eif_par_types par669 = {669, ptf669, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [INTEGER_8] */
static EIF_TYPE_INDEX ptf670[] = {657,0xFFF7,499,740,0xFFFF};
static struct eif_par_types par670 = {670, ptf670, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [CHARACTER_32] */
static EIF_TYPE_INDEX ptf671[] = {657,0xFFF7,491,746,0xFFFF};
static struct eif_par_types par671 = {671, ptf671, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL [REAL_32] */
static EIF_TYPE_INDEX ptf672[] = {657,0xFFF7,500,743,0xFFFF};
static struct eif_par_types par672 = {672, ptf672, (uint16) 2, (uint16) 1, (char) 0};

/* NUMERIC */
static EIF_TYPE_INDEX ptf673[] = {655,0xFFFF};
static struct eif_par_types par673 = {673, ptf673, (uint16) 1, (uint16) 0, (char) 0};

/* DISPOSABLE */
static EIF_TYPE_INDEX ptf674[] = {0,0xFFFF};
static struct eif_par_types par674 = {674, ptf674, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SDL_COLOR */
static EIF_TYPE_INDEX ptf675[] = {47,0xFFF7,674,0xFFFF};
static struct eif_par_types par675 = {675, ptf675, (uint16) 2, (uint16) 0, (char) 0};

/* GAME_FONT */
static EIF_TYPE_INDEX ptf676[] = {674,0xFFFF};
static struct eif_par_types par676 = {676, ptf676, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_EVENT_CONTROLLER */
static EIF_TYPE_INDEX ptf677[] = {674,0xFFFF};
static struct eif_par_types par677 = {677, ptf677, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_JOYSTICK */
static EIF_TYPE_INDEX ptf678[] = {674,0xFFFF};
static struct eif_par_types par678 = {678, ptf678, (uint16) 1, (uint16) 0, (char) 0};

/* AUDIO_SOURCE */
static EIF_TYPE_INDEX ptf679[] = {137,0xFFF7,674,0xFFFF};
static struct eif_par_types par679 = {679, ptf679, (uint16) 2, (uint16) 0, (char) 0};

/* MUTEX */
static EIF_TYPE_INDEX ptf680[] = {674,0xFFF7,65,0xFFFF};
static struct eif_par_types par680 = {680, ptf680, (uint16) 2, (uint16) 0, (char) 0};

/* MANAGED_POINTER */
static EIF_TYPE_INDEX ptf681[] = {674,0xFFF7,140,0xFFFF};
static struct eif_par_types par681 = {681, ptf681, (uint16) 2, (uint16) 0, (char) 0};

/* MEMORY */
static EIF_TYPE_INDEX ptf682[] = {674,0xFFF7,139,0xFFFF};
static struct eif_par_types par682 = {682, ptf682, (uint16) 2, (uint16) 0, (char) 0};

/* CPF_FILE */
static EIF_TYPE_INDEX ptf683[] = {674,0xFFFF};
static struct eif_par_types par683 = {683, ptf683, (uint16) 1, (uint16) 0, (char) 0};

/* CPF_PACKAGE_FILE */
static EIF_TYPE_INDEX ptf684[] = {683,0xFFFF};
static struct eif_par_types par684 = {684, ptf684, (uint16) 1, (uint16) 0, (char) 0};

/* IO_MEDIUM */
static EIF_TYPE_INDEX ptf685[] = {674,0xFFF7,144,0xFFFF};
static struct eif_par_types par685 = {685, ptf685, (uint16) 2, (uint16) 0, (char) 0};

/* FILE */
static EIF_TYPE_INDEX ptf686[] = {320,749,0xFFF7,411,749,0xFFF7,685,0xFFF7,619,0xFFFF};
static struct eif_par_types par686 = {686, ptf686, (uint16) 4, (uint16) 0, (char) 0};

/* RAW_FILE */
static EIF_TYPE_INDEX ptf687[] = {686,0xFFFF};
static struct eif_par_types par687 = {687, ptf687, (uint16) 1, (uint16) 0, (char) 0};

/* PLAIN_TEXT_FILE */
static EIF_TYPE_INDEX ptf688[] = {686,0xFFFF};
static struct eif_par_types par688 = {688, ptf688, (uint16) 1, (uint16) 0, (char) 0};

/* HASHABLE */
static EIF_TYPE_INDEX ptf689[] = {0,0xFFFF};
static struct eif_par_types par689 = {689, ptf689, (uint16) 1, (uint16) 0, (char) 0};

/* PATH */
static EIF_TYPE_INDEX ptf690[] = {689,0xFFF7,172,0xFFF7,619,0xFFF7,655,0xFFFF};
static struct eif_par_types par690 = {690, ptf690, (uint16) 4, (uint16) 0, (char) 0};

/* TYPE [G#1] */
static EIF_TYPE_INDEX ptf691[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par691 = {691, ptf691, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [ANY]] */
static EIF_TYPE_INDEX ptf692[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par692 = {692, ptf692, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [REAL_32]] */
static EIF_TYPE_INDEX ptf693[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par693 = {693, ptf693, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [INTEGER_8]] */
static EIF_TYPE_INDEX ptf694[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par694 = {694, ptf694, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [POINTER]] */
static EIF_TYPE_INDEX ptf695[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par695 = {695, ptf695, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [UTF_CONVERTER] */
static EIF_TYPE_INDEX ptf696[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par696 = {696, ptf696, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [POINTER] */
static EIF_TYPE_INDEX ptf697[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par697 = {697, ptf697, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [POINTER] */
static EIF_TYPE_INDEX ptf698[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par698 = {698, ptf698, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [NATURAL_32]] */
static EIF_TYPE_INDEX ptf699[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par699 = {699, ptf699, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_32] */
static EIF_TYPE_INDEX ptf700[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par700 = {700, ptf700, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_32] */
static EIF_TYPE_INDEX ptf701[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par701 = {701, ptf701, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [INTEGER_64]] */
static EIF_TYPE_INDEX ptf702[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par702 = {702, ptf702, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [REAL_64] */
static EIF_TYPE_INDEX ptf703[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par703 = {703, ptf703, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [REAL_64] */
static EIF_TYPE_INDEX ptf704[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par704 = {704, ptf704, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [REAL_64]] */
static EIF_TYPE_INDEX ptf705[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par705 = {705, ptf705, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [CHARACTER_32]] */
static EIF_TYPE_INDEX ptf706[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par706 = {706, ptf706, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [BOOLEAN] */
static EIF_TYPE_INDEX ptf707[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par707 = {707, ptf707, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [BOOLEAN] */
static EIF_TYPE_INDEX ptf708[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par708 = {708, ptf708, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [BOOLEAN]] */
static EIF_TYPE_INDEX ptf709[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par709 = {709, ptf709, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [REAL_32] */
static EIF_TYPE_INDEX ptf710[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par710 = {710, ptf710, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [REAL_32] */
static EIF_TYPE_INDEX ptf711[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par711 = {711, ptf711, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_64] */
static EIF_TYPE_INDEX ptf712[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par712 = {712, ptf712, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_64] */
static EIF_TYPE_INDEX ptf713[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par713 = {713, ptf713, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [NATURAL_64]] */
static EIF_TYPE_INDEX ptf714[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par714 = {714, ptf714, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_32] */
static EIF_TYPE_INDEX ptf715[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par715 = {715, ptf715, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_32] */
static EIF_TYPE_INDEX ptf716[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par716 = {716, ptf716, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf717[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par717 = {717, ptf717, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf718[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par718 = {718, ptf718, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [CHARACTER_8]] */
static EIF_TYPE_INDEX ptf719[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par719 = {719, ptf719, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_16] */
static EIF_TYPE_INDEX ptf720[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par720 = {720, ptf720, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_16] */
static EIF_TYPE_INDEX ptf721[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par721 = {721, ptf721, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [NATURAL_16]] */
static EIF_TYPE_INDEX ptf722[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par722 = {722, ptf722, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_8] */
static EIF_TYPE_INDEX ptf723[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par723 = {723, ptf723, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_8] */
static EIF_TYPE_INDEX ptf724[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par724 = {724, ptf724, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [NATURAL_8]] */
static EIF_TYPE_INDEX ptf725[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par725 = {725, ptf725, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [FILE_UTILITIES] */
static EIF_TYPE_INDEX ptf726[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par726 = {726, ptf726, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_64] */
static EIF_TYPE_INDEX ptf727[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par727 = {727, ptf727, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_64] */
static EIF_TYPE_INDEX ptf728[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par728 = {728, ptf728, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [INTEGER_32]] */
static EIF_TYPE_INDEX ptf729[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par729 = {729, ptf729, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_16] */
static EIF_TYPE_INDEX ptf730[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par730 = {730, ptf730, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_16] */
static EIF_TYPE_INDEX ptf731[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par731 = {731, ptf731, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_8] */
static EIF_TYPE_INDEX ptf732[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par732 = {732, ptf732, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_8] */
static EIF_TYPE_INDEX ptf733[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par733 = {733, ptf733, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [TYPED_POINTER [INTEGER_16]] */
static EIF_TYPE_INDEX ptf734[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par734 = {734, ptf734, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf735[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par735 = {735, ptf735, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf736[] = {689,0xFFF7,166,0xFFF7,655,0xFFFF};
static struct eif_par_types par736 = {736, ptf736, (uint16) 3, (uint16) 1, (char) 0};

/* TUPLE */
static EIF_TYPE_INDEX ptf737[] = {689,0xFFF7,624,0xFFF7,486,0,0xFFFF};
static struct eif_par_types par737 = {737, ptf737, (uint16) 3, (uint16) 0, (char) 0};

/* INTEGER_8_REF */
static EIF_TYPE_INDEX ptf738[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par738 = {738, ptf738, (uint16) 3, (uint16) 0, (char) 0};

/* reference INTEGER_8 */
static EIF_TYPE_INDEX ptf739[] = {738,0xFFFF};
static struct eif_par_types par739 = {739, ptf739, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_8 */
static EIF_TYPE_INDEX ptf740[] = {739,0xFFFF};
static struct eif_par_types par740 = {740, ptf740, (uint16) 1, (uint16) 0, (char) 1};

/* REAL_32_REF */
static EIF_TYPE_INDEX ptf741[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par741 = {741, ptf741, (uint16) 3, (uint16) 0, (char) 0};

/* reference REAL_32 */
static EIF_TYPE_INDEX ptf742[] = {741,0xFFFF};
static struct eif_par_types par742 = {742, ptf742, (uint16) 1, (uint16) 0, (char) 1};

/* REAL_32 */
static EIF_TYPE_INDEX ptf743[] = {742,0xFFFF};
static struct eif_par_types par743 = {743, ptf743, (uint16) 1, (uint16) 0, (char) 1};

/* CHARACTER_32_REF */
static EIF_TYPE_INDEX ptf744[] = {172,0xFFF7,689,0xFFFF};
static struct eif_par_types par744 = {744, ptf744, (uint16) 2, (uint16) 0, (char) 0};

/* reference CHARACTER_32 */
static EIF_TYPE_INDEX ptf745[] = {744,0xFFFF};
static struct eif_par_types par745 = {745, ptf745, (uint16) 1, (uint16) 0, (char) 1};

/* CHARACTER_32 */
static EIF_TYPE_INDEX ptf746[] = {745,0xFFFF};
static struct eif_par_types par746 = {746, ptf746, (uint16) 1, (uint16) 0, (char) 1};

/* CHARACTER_8_REF */
static EIF_TYPE_INDEX ptf747[] = {172,0xFFF7,689,0xFFFF};
static struct eif_par_types par747 = {747, ptf747, (uint16) 2, (uint16) 0, (char) 0};

/* reference CHARACTER_8 */
static EIF_TYPE_INDEX ptf748[] = {747,0xFFFF};
static struct eif_par_types par748 = {748, ptf748, (uint16) 1, (uint16) 0, (char) 1};

/* CHARACTER_8 */
static EIF_TYPE_INDEX ptf749[] = {748,0xFFFF};
static struct eif_par_types par749 = {749, ptf749, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_64_REF */
static EIF_TYPE_INDEX ptf750[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par750 = {750, ptf750, (uint16) 3, (uint16) 0, (char) 0};

/* reference INTEGER_64 */
static EIF_TYPE_INDEX ptf751[] = {750,0xFFFF};
static struct eif_par_types par751 = {751, ptf751, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_64 */
static EIF_TYPE_INDEX ptf752[] = {751,0xFFFF};
static struct eif_par_types par752 = {752, ptf752, (uint16) 1, (uint16) 0, (char) 1};

/* BOOLEAN_REF */
static EIF_TYPE_INDEX ptf753[] = {689,0xFFFF};
static struct eif_par_types par753 = {753, ptf753, (uint16) 1, (uint16) 0, (char) 0};

/* reference BOOLEAN */
static EIF_TYPE_INDEX ptf754[] = {753,0xFFFF};
static struct eif_par_types par754 = {754, ptf754, (uint16) 1, (uint16) 0, (char) 1};

/* BOOLEAN */
static EIF_TYPE_INDEX ptf755[] = {754,0xFFFF};
static struct eif_par_types par755 = {755, ptf755, (uint16) 1, (uint16) 0, (char) 1};

/* REAL_64_REF */
static EIF_TYPE_INDEX ptf756[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par756 = {756, ptf756, (uint16) 3, (uint16) 0, (char) 0};

/* reference REAL_64 */
static EIF_TYPE_INDEX ptf757[] = {756,0xFFFF};
static struct eif_par_types par757 = {757, ptf757, (uint16) 1, (uint16) 0, (char) 1};

/* REAL_64 */
static EIF_TYPE_INDEX ptf758[] = {757,0xFFFF};
static struct eif_par_types par758 = {758, ptf758, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_8_REF */
static EIF_TYPE_INDEX ptf759[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par759 = {759, ptf759, (uint16) 3, (uint16) 0, (char) 0};

/* reference NATURAL_8 */
static EIF_TYPE_INDEX ptf760[] = {759,0xFFFF};
static struct eif_par_types par760 = {760, ptf760, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_8 */
static EIF_TYPE_INDEX ptf761[] = {760,0xFFFF};
static struct eif_par_types par761 = {761, ptf761, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_32_REF */
static EIF_TYPE_INDEX ptf762[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par762 = {762, ptf762, (uint16) 3, (uint16) 0, (char) 0};

/* reference NATURAL_32 */
static EIF_TYPE_INDEX ptf763[] = {762,0xFFFF};
static struct eif_par_types par763 = {763, ptf763, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_32 */
static EIF_TYPE_INDEX ptf764[] = {763,0xFFFF};
static struct eif_par_types par764 = {764, ptf764, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_16_REF */
static EIF_TYPE_INDEX ptf765[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par765 = {765, ptf765, (uint16) 3, (uint16) 0, (char) 0};

/* reference NATURAL_16 */
static EIF_TYPE_INDEX ptf766[] = {765,0xFFFF};
static struct eif_par_types par766 = {766, ptf766, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_16 */
static EIF_TYPE_INDEX ptf767[] = {766,0xFFFF};
static struct eif_par_types par767 = {767, ptf767, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_32_REF */
static EIF_TYPE_INDEX ptf768[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par768 = {768, ptf768, (uint16) 3, (uint16) 0, (char) 0};

/* reference INTEGER_32 */
static EIF_TYPE_INDEX ptf769[] = {768,0xFFFF};
static struct eif_par_types par769 = {769, ptf769, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_32 */
static EIF_TYPE_INDEX ptf770[] = {769,0xFFFF};
static struct eif_par_types par770 = {770, ptf770, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_16_REF */
static EIF_TYPE_INDEX ptf771[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par771 = {771, ptf771, (uint16) 3, (uint16) 0, (char) 0};

/* reference INTEGER_16 */
static EIF_TYPE_INDEX ptf772[] = {771,0xFFFF};
static struct eif_par_types par772 = {772, ptf772, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_16 */
static EIF_TYPE_INDEX ptf773[] = {772,0xFFFF};
static struct eif_par_types par773 = {773, ptf773, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_64_REF */
static EIF_TYPE_INDEX ptf774[] = {673,0xFFF7,172,0xFFF7,689,0xFFFF};
static struct eif_par_types par774 = {774, ptf774, (uint16) 3, (uint16) 0, (char) 0};

/* reference NATURAL_64 */
static EIF_TYPE_INDEX ptf775[] = {774,0xFFFF};
static struct eif_par_types par775 = {775, ptf775, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_64 */
static EIF_TYPE_INDEX ptf776[] = {775,0xFFFF};
static struct eif_par_types par776 = {776, ptf776, (uint16) 1, (uint16) 0, (char) 1};

/* POINTER_REF */
static EIF_TYPE_INDEX ptf777[] = {689,0xFFF7,54,0xFFFF};
static struct eif_par_types par777 = {777, ptf777, (uint16) 2, (uint16) 0, (char) 0};

/* reference TYPED_POINTER [G#1] */
static EIF_TYPE_INDEX ptf778[] = {777,0xFFFF};
static struct eif_par_types par778 = {778, ptf778, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [G#1] */
static EIF_TYPE_INDEX ptf779[] = {778,0xFFF8,1,0xFFFF};
static struct eif_par_types par779 = {779, ptf779, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [REAL_32] */
static EIF_TYPE_INDEX ptf780[] = {777,0xFFFF};
static struct eif_par_types par780 = {780, ptf780, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [REAL_32] */
static EIF_TYPE_INDEX ptf781[] = {780,743,0xFFFF};
static struct eif_par_types par781 = {781, ptf781, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_8] */
static EIF_TYPE_INDEX ptf782[] = {777,0xFFFF};
static struct eif_par_types par782 = {782, ptf782, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [INTEGER_8] */
static EIF_TYPE_INDEX ptf783[] = {782,740,0xFFFF};
static struct eif_par_types par783 = {783, ptf783, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [POINTER] */
static EIF_TYPE_INDEX ptf784[] = {777,0xFFFF};
static struct eif_par_types par784 = {784, ptf784, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [POINTER] */
static EIF_TYPE_INDEX ptf785[] = {784,809,0xFFFF};
static struct eif_par_types par785 = {785, ptf785, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_32] */
static EIF_TYPE_INDEX ptf786[] = {777,0xFFFF};
static struct eif_par_types par786 = {786, ptf786, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [NATURAL_32] */
static EIF_TYPE_INDEX ptf787[] = {786,764,0xFFFF};
static struct eif_par_types par787 = {787, ptf787, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_64] */
static EIF_TYPE_INDEX ptf788[] = {777,0xFFFF};
static struct eif_par_types par788 = {788, ptf788, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [INTEGER_64] */
static EIF_TYPE_INDEX ptf789[] = {788,752,0xFFFF};
static struct eif_par_types par789 = {789, ptf789, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [REAL_64] */
static EIF_TYPE_INDEX ptf790[] = {777,0xFFFF};
static struct eif_par_types par790 = {790, ptf790, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [REAL_64] */
static EIF_TYPE_INDEX ptf791[] = {790,758,0xFFFF};
static struct eif_par_types par791 = {791, ptf791, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [CHARACTER_32] */
static EIF_TYPE_INDEX ptf792[] = {777,0xFFFF};
static struct eif_par_types par792 = {792, ptf792, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [CHARACTER_32] */
static EIF_TYPE_INDEX ptf793[] = {792,746,0xFFFF};
static struct eif_par_types par793 = {793, ptf793, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [BOOLEAN] */
static EIF_TYPE_INDEX ptf794[] = {777,0xFFFF};
static struct eif_par_types par794 = {794, ptf794, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [BOOLEAN] */
static EIF_TYPE_INDEX ptf795[] = {794,755,0xFFFF};
static struct eif_par_types par795 = {795, ptf795, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_64] */
static EIF_TYPE_INDEX ptf796[] = {777,0xFFFF};
static struct eif_par_types par796 = {796, ptf796, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [NATURAL_64] */
static EIF_TYPE_INDEX ptf797[] = {796,776,0xFFFF};
static struct eif_par_types par797 = {797, ptf797, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [CHARACTER_8] */
static EIF_TYPE_INDEX ptf798[] = {777,0xFFFF};
static struct eif_par_types par798 = {798, ptf798, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [CHARACTER_8] */
static EIF_TYPE_INDEX ptf799[] = {798,749,0xFFFF};
static struct eif_par_types par799 = {799, ptf799, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_16] */
static EIF_TYPE_INDEX ptf800[] = {777,0xFFFF};
static struct eif_par_types par800 = {800, ptf800, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [NATURAL_16] */
static EIF_TYPE_INDEX ptf801[] = {800,767,0xFFFF};
static struct eif_par_types par801 = {801, ptf801, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_8] */
static EIF_TYPE_INDEX ptf802[] = {777,0xFFFF};
static struct eif_par_types par802 = {802, ptf802, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [NATURAL_8] */
static EIF_TYPE_INDEX ptf803[] = {802,761,0xFFFF};
static struct eif_par_types par803 = {803, ptf803, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_32] */
static EIF_TYPE_INDEX ptf804[] = {777,0xFFFF};
static struct eif_par_types par804 = {804, ptf804, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [INTEGER_32] */
static EIF_TYPE_INDEX ptf805[] = {804,770,0xFFFF};
static struct eif_par_types par805 = {805, ptf805, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_16] */
static EIF_TYPE_INDEX ptf806[] = {777,0xFFFF};
static struct eif_par_types par806 = {806, ptf806, (uint16) 1, (uint16) 1, (char) 1};

/* TYPED_POINTER [INTEGER_16] */
static EIF_TYPE_INDEX ptf807[] = {806,773,0xFFFF};
static struct eif_par_types par807 = {807, ptf807, (uint16) 1, (uint16) 1, (char) 1};

/* reference POINTER */
static EIF_TYPE_INDEX ptf808[] = {777,0xFFFF};
static struct eif_par_types par808 = {808, ptf808, (uint16) 1, (uint16) 0, (char) 1};

/* POINTER */
static EIF_TYPE_INDEX ptf809[] = {808,0xFFFF};
static struct eif_par_types par809 = {809, ptf809, (uint16) 1, (uint16) 0, (char) 1};

/* ROUTINE [G#1, G#2] */
static EIF_TYPE_INDEX ptf810[] = {689,0xFFF7,425,0xFFFF};
static struct eif_par_types par810 = {810, ptf810, (uint16) 2, (uint16) 2, (char) 0};

/* PROCEDURE [G#1, G#2] */
static EIF_TYPE_INDEX ptf811[] = {810,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par811 = {811, ptf811, (uint16) 1, (uint16) 2, (char) 0};

/* FUNCTION [G#1, G#2, G#3] */
static EIF_TYPE_INDEX ptf812[] = {810,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par812 = {812, ptf812, (uint16) 1, (uint16) 3, (char) 0};

/* FUNCTION [G#1, G#2, BOOLEAN] */
static EIF_TYPE_INDEX ptf813[] = {810,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par813 = {813, ptf813, (uint16) 1, (uint16) 3, (char) 0};

/* PREDICATE [G#1, G#2] */
static EIF_TYPE_INDEX ptf814[] = {813,0xFFF8,1,0xFFF8,2,755,0xFFFF};
static struct eif_par_types par814 = {814, ptf814, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_STRING_GENERAL */
static EIF_TYPE_INDEX ptf815[] = {172,0xFFF7,689,0xFFF7,144,0xFFFF};
static struct eif_par_types par815 = {815, ptf815, (uint16) 3, (uint16) 0, (char) 0};

/* READABLE_STRING_8 */
static EIF_TYPE_INDEX ptf816[] = {815,0xFFF7,492,749,0xFFFF};
static struct eif_par_types par816 = {816, ptf816, (uint16) 2, (uint16) 0, (char) 0};

/* STRING_GENERAL */
static EIF_TYPE_INDEX ptf817[] = {815,0xFFFF};
static struct eif_par_types par817 = {817, ptf817, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_8 */
static EIF_TYPE_INDEX ptf818[] = {816,0xFFF7,817,0xFFF7,508,749,770,0xFFF7,347,749,0xFFF7,590,749,0xFFF7,624,0xFFFF};
static struct eif_par_types par818 = {818, ptf818, (uint16) 6, (uint16) 0, (char) 0};

/* READABLE_STRING_32 */
static EIF_TYPE_INDEX ptf819[] = {815,0xFFF7,491,746,0xFFFF};
static struct eif_par_types par819 = {819, ptf819, (uint16) 2, (uint16) 0, (char) 0};

/* STRING_32 */
static EIF_TYPE_INDEX ptf820[] = {819,0xFFF7,817,0xFFF7,514,746,770,0xFFF7,353,746,0xFFF7,596,746,0xFFF7,624,0xFFFF};
static struct eif_par_types par820 = {820, ptf820, (uint16) 6, (uint16) 0, (char) 0};

/* IMMUTABLE_STRING_GENERAL */
static EIF_TYPE_INDEX ptf821[] = {815,0xFFFF};
static struct eif_par_types par821 = {821, ptf821, (uint16) 1, (uint16) 0, (char) 0};

/* IMMUTABLE_STRING_8 */
static EIF_TYPE_INDEX ptf822[] = {816,0xFFF7,821,0xFFFF};
static struct eif_par_types par822 = {822, ptf822, (uint16) 2, (uint16) 0, (char) 0};

/* IMMUTABLE_STRING_32 */
static EIF_TYPE_INDEX ptf823[] = {819,0xFFF7,821,0xFFF7,624,0xFFFF};
static struct eif_par_types par823 = {823, ptf823, (uint16) 3, (uint16) 0, (char) 0};

/* GAME_SDL_SURFACE_IMP */
static EIF_TYPE_INDEX ptf824[] = {0,0xFFF7,674,0xFFFF};
static struct eif_par_types par824 = {824, ptf824, (uint16) 2, (uint16) 0, (char) 0};

/* THREAD_ATTRIBUTES */
static EIF_TYPE_INDEX ptf825[] = {0,0xFFF7,141,0xFFFF};
static struct eif_par_types par825 = {825, ptf825, (uint16) 2, (uint16) 0, (char) 0};

/* CONSOLE */
static EIF_TYPE_INDEX ptf826[] = {688,0xFFF7,0,0xFFFF};
static struct eif_par_types par826 = {826, ptf826, (uint16) 2, (uint16) 0, (char) 0};

/* RT_DBG_INTERNAL */
static EIF_TYPE_INDEX ptf827[] = {0,0xFFF7,424,0xFFFF};
static struct eif_par_types par827 = {827, ptf827, (uint16) 2, (uint16) 0, (char) 0};

/* RT_DBG_CALL_RECORD */
static EIF_TYPE_INDEX ptf828[] = {655,0xFFF7,827,0xFFF7,71,0xFFFF};
static struct eif_par_types par828 = {828, ptf828, (uint16) 3, (uint16) 0, (char) 0};

/* RT_DBG_EXECUTION_RECORDER */
static EIF_TYPE_INDEX ptf829[] = {71,0xFFF7,827,0xFFFF};
static struct eif_par_types par829 = {829, ptf829, (uint16) 2, (uint16) 0, (char) 0};

/* RT_DBG_VALUE_RECORD */
static EIF_TYPE_INDEX ptf830[] = {655,0xFFF7,71,0xFFF7,827,0xFFFF};
static struct eif_par_types par830 = {830, ptf830, (uint16) 3, (uint16) 0, (char) 0};

/* RT_DBG_LOCAL_RECORD [G#1] */
static EIF_TYPE_INDEX ptf831[] = {830,0xFFFF};
static struct eif_par_types par831 = {831, ptf831, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_8] */
static EIF_TYPE_INDEX ptf832[] = {830,0xFFFF};
static struct eif_par_types par832 = {832, ptf832, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [CHARACTER_32] */
static EIF_TYPE_INDEX ptf833[] = {830,0xFFFF};
static struct eif_par_types par833 = {833, ptf833, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [REAL_64] */
static EIF_TYPE_INDEX ptf834[] = {830,0xFFFF};
static struct eif_par_types par834 = {834, ptf834, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [REAL_32] */
static EIF_TYPE_INDEX ptf835[] = {830,0xFFFF};
static struct eif_par_types par835 = {835, ptf835, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_8] */
static EIF_TYPE_INDEX ptf836[] = {830,0xFFFF};
static struct eif_par_types par836 = {836, ptf836, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [BOOLEAN] */
static EIF_TYPE_INDEX ptf837[] = {830,0xFFFF};
static struct eif_par_types par837 = {837, ptf837, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_64] */
static EIF_TYPE_INDEX ptf838[] = {830,0xFFFF};
static struct eif_par_types par838 = {838, ptf838, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_32] */
static EIF_TYPE_INDEX ptf839[] = {830,0xFFFF};
static struct eif_par_types par839 = {839, ptf839, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [POINTER] */
static EIF_TYPE_INDEX ptf840[] = {830,0xFFFF};
static struct eif_par_types par840 = {840, ptf840, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_16] */
static EIF_TYPE_INDEX ptf841[] = {830,0xFFFF};
static struct eif_par_types par841 = {841, ptf841, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [CHARACTER_8] */
static EIF_TYPE_INDEX ptf842[] = {830,0xFFFF};
static struct eif_par_types par842 = {842, ptf842, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_16] */
static EIF_TYPE_INDEX ptf843[] = {830,0xFFFF};
static struct eif_par_types par843 = {843, ptf843, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_64] */
static EIF_TYPE_INDEX ptf844[] = {830,0xFFFF};
static struct eif_par_types par844 = {844, ptf844, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_32] */
static EIF_TYPE_INDEX ptf845[] = {830,0xFFFF};
static struct eif_par_types par845 = {845, ptf845, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [G#1] */
static EIF_TYPE_INDEX ptf846[] = {830,0xFFFF};
static struct eif_par_types par846 = {846, ptf846, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [REAL_32] */
static EIF_TYPE_INDEX ptf847[] = {830,0xFFFF};
static struct eif_par_types par847 = {847, ptf847, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_32] */
static EIF_TYPE_INDEX ptf848[] = {830,0xFFFF};
static struct eif_par_types par848 = {848, ptf848, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_64] */
static EIF_TYPE_INDEX ptf849[] = {830,0xFFFF};
static struct eif_par_types par849 = {849, ptf849, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [REAL_64] */
static EIF_TYPE_INDEX ptf850[] = {830,0xFFFF};
static struct eif_par_types par850 = {850, ptf850, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [POINTER] */
static EIF_TYPE_INDEX ptf851[] = {830,0xFFFF};
static struct eif_par_types par851 = {851, ptf851, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [CHARACTER_32] */
static EIF_TYPE_INDEX ptf852[] = {830,0xFFFF};
static struct eif_par_types par852 = {852, ptf852, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [BOOLEAN] */
static EIF_TYPE_INDEX ptf853[] = {830,0xFFFF};
static struct eif_par_types par853 = {853, ptf853, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_8] */
static EIF_TYPE_INDEX ptf854[] = {830,0xFFFF};
static struct eif_par_types par854 = {854, ptf854, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_16] */
static EIF_TYPE_INDEX ptf855[] = {830,0xFFFF};
static struct eif_par_types par855 = {855, ptf855, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_8] */
static EIF_TYPE_INDEX ptf856[] = {830,0xFFFF};
static struct eif_par_types par856 = {856, ptf856, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_64] */
static EIF_TYPE_INDEX ptf857[] = {830,0xFFFF};
static struct eif_par_types par857 = {857, ptf857, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_16] */
static EIF_TYPE_INDEX ptf858[] = {830,0xFFFF};
static struct eif_par_types par858 = {858, ptf858, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [CHARACTER_8] */
static EIF_TYPE_INDEX ptf859[] = {830,0xFFFF};
static struct eif_par_types par859 = {859, ptf859, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_32] */
static EIF_TYPE_INDEX ptf860[] = {830,0xFFFF};
static struct eif_par_types par860 = {860, ptf860, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [G#1] */
static EIF_TYPE_INDEX ptf861[] = {830,0xFFFF};
static struct eif_par_types par861 = {861, ptf861, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [POINTER] */
static EIF_TYPE_INDEX ptf862[] = {830,0xFFFF};
static struct eif_par_types par862 = {862, ptf862, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [BOOLEAN] */
static EIF_TYPE_INDEX ptf863[] = {830,0xFFFF};
static struct eif_par_types par863 = {863, ptf863, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [REAL_32] */
static EIF_TYPE_INDEX ptf864[] = {830,0xFFFF};
static struct eif_par_types par864 = {864, ptf864, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [CHARACTER_8] */
static EIF_TYPE_INDEX ptf865[] = {830,0xFFFF};
static struct eif_par_types par865 = {865, ptf865, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_64] */
static EIF_TYPE_INDEX ptf866[] = {830,0xFFFF};
static struct eif_par_types par866 = {866, ptf866, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_32] */
static EIF_TYPE_INDEX ptf867[] = {830,0xFFFF};
static struct eif_par_types par867 = {867, ptf867, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_16] */
static EIF_TYPE_INDEX ptf868[] = {830,0xFFFF};
static struct eif_par_types par868 = {868, ptf868, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_8] */
static EIF_TYPE_INDEX ptf869[] = {830,0xFFFF};
static struct eif_par_types par869 = {869, ptf869, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_64] */
static EIF_TYPE_INDEX ptf870[] = {830,0xFFFF};
static struct eif_par_types par870 = {870, ptf870, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_32] */
static EIF_TYPE_INDEX ptf871[] = {830,0xFFFF};
static struct eif_par_types par871 = {871, ptf871, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [REAL_64] */
static EIF_TYPE_INDEX ptf872[] = {830,0xFFFF};
static struct eif_par_types par872 = {872, ptf872, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_16] */
static EIF_TYPE_INDEX ptf873[] = {830,0xFFFF};
static struct eif_par_types par873 = {873, ptf873, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_8] */
static EIF_TYPE_INDEX ptf874[] = {830,0xFFFF};
static struct eif_par_types par874 = {874, ptf874, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [CHARACTER_32] */
static EIF_TYPE_INDEX ptf875[] = {830,0xFFFF};
static struct eif_par_types par875 = {875, ptf875, (uint16) 1, (uint16) 1, (char) 0};

/* DATE_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf876[] = {59,0xFFF7,626,0xFFF7,0,0xFFFF};
static struct eif_par_types par876 = {876, ptf876, (uint16) 3, (uint16) 0, (char) 0};

/* DATE */
static EIF_TYPE_INDEX ptf877[] = {173,0xFFF7,626,0xFFF7,876,0xFFF7,655,0xFFFF};
static struct eif_par_types par877 = {877, ptf877, (uint16) 4, (uint16) 0, (char) 0};

/* FIND_SEPARATOR_FACILITY */
static EIF_TYPE_INDEX ptf878[] = {53,0xFFF7,63,0xFFF7,0,0xFFFF};
static struct eif_par_types par878 = {878, ptf878, (uint16) 3, (uint16) 0, (char) 0};

/* DATE_TIME_CODE_STRING */
static EIF_TYPE_INDEX ptf879[] = {878,0xFFFF};
static struct eif_par_types par879 = {879, ptf879, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf880[] = {56,0xFFF7,58,0xFFF7,0,0xFFFF};
static struct eif_par_types par880 = {880, ptf880, (uint16) 3, (uint16) 0, (char) 0};

/* TIME */
static EIF_TYPE_INDEX ptf881[] = {173,0xFFF7,58,0xFFF7,880,0xFFF7,655,0xFFFF};
static struct eif_par_types par881 = {881, ptf881, (uint16) 4, (uint16) 0, (char) 0};

/* DATE_TIME_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf882[] = {876,0xFFF7,880,0xFFF7,0,0xFFFF};
static struct eif_par_types par882 = {882, ptf882, (uint16) 3, (uint16) 0, (char) 0};

/* DATE_TIME */
static EIF_TYPE_INDEX ptf883[] = {173,0xFFF7,62,0xFFF7,882,0xFFF7,655,0xFFFF};
static struct eif_par_types par883 = {883, ptf883, (uint16) 4, (uint16) 0, (char) 0};

/* DATE_TIME_PARSER */
static EIF_TYPE_INDEX ptf884[] = {882,0xFFF7,878,0xFFFF};
static struct eif_par_types par884 = {884, ptf884, (uint16) 2, (uint16) 0, (char) 0};

int egc_partab_size_init = 884;
struct eif_par_types *egc_partab_init[] = {
&par0,
&par1,
&par2,
&par3,
&par4,
&par5,
&par6,
&par7,
&par8,
&par9,
&par10,
&par11,
&par12,
&par13,
&par14,
&par15,
&par16,
&par17,
&par18,
&par19,
&par20,
&par21,
&par22,
&par23,
&par24,
&par25,
&par26,
&par27,
&par28,
&par29,
&par30,
&par31,
&par32,
&par33,
&par34,
&par35,
&par36,
&par37,
&par38,
&par39,
&par40,
&par41,
&par42,
&par43,
&par44,
&par45,
&par46,
&par47,
&par48,
&par49,
&par50,
&par51,
&par52,
&par53,
&par54,
&par55,
&par56,
&par57,
&par58,
&par59,
&par60,
&par61,
&par62,
&par63,
&par64,
&par65,
&par66,
&par67,
&par68,
&par69,
&par70,
&par71,
&par72,
&par73,
&par74,
&par75,
&par76,
&par77,
&par78,
&par79,
&par80,
&par81,
&par82,
&par83,
&par84,
&par85,
&par86,
&par87,
&par88,
&par89,
&par90,
&par91,
&par92,
&par93,
&par94,
&par95,
&par96,
&par97,
&par98,
&par99,
&par100,
&par101,
&par102,
&par103,
&par104,
&par105,
&par106,
&par107,
&par108,
&par109,
&par110,
&par111,
&par112,
&par113,
&par114,
&par115,
&par116,
&par117,
&par118,
&par119,
&par120,
&par121,
&par122,
&par123,
&par124,
&par125,
&par126,
&par127,
&par128,
&par129,
&par130,
&par131,
&par132,
&par133,
&par134,
&par135,
&par136,
&par137,
&par138,
&par139,
&par140,
&par141,
&par142,
&par143,
&par144,
&par145,
&par146,
&par147,
&par148,
&par149,
&par150,
&par151,
&par152,
&par153,
&par154,
&par155,
&par156,
&par157,
&par158,
&par159,
&par160,
&par161,
&par162,
&par163,
&par164,
&par165,
&par166,
&par167,
&par168,
&par169,
&par170,
&par171,
&par172,
&par173,
&par174,
&par175,
&par176,
&par177,
&par178,
&par179,
&par180,
&par181,
&par182,
&par183,
&par184,
&par185,
&par186,
&par187,
&par188,
&par189,
&par190,
&par191,
&par192,
&par193,
&par194,
&par195,
&par196,
&par197,
&par198,
&par199,
&par200,
&par201,
&par202,
&par203,
&par204,
&par205,
&par206,
&par207,
&par208,
&par209,
&par210,
&par211,
&par212,
&par213,
&par214,
&par215,
&par216,
&par217,
&par218,
&par219,
&par220,
&par221,
&par222,
&par223,
&par224,
&par225,
&par226,
&par227,
&par228,
&par229,
&par230,
&par231,
&par232,
&par233,
&par234,
&par235,
&par236,
&par237,
&par238,
&par239,
&par240,
&par241,
&par242,
&par243,
&par244,
&par245,
&par246,
&par247,
&par248,
&par249,
&par250,
&par251,
&par252,
&par253,
&par254,
&par255,
&par256,
&par257,
&par258,
&par259,
&par260,
&par261,
&par262,
&par263,
&par264,
&par265,
&par266,
&par267,
&par268,
&par269,
&par270,
&par271,
&par272,
&par273,
&par274,
&par275,
&par276,
&par277,
&par278,
&par279,
&par280,
&par281,
&par282,
&par283,
&par284,
&par285,
&par286,
&par287,
&par288,
&par289,
&par290,
&par291,
&par292,
&par293,
&par294,
&par295,
&par296,
&par297,
&par298,
&par299,
&par300,
&par301,
&par302,
&par303,
&par304,
&par305,
&par306,
&par307,
&par308,
&par309,
&par310,
&par311,
&par312,
&par313,
&par314,
&par315,
&par316,
&par317,
&par318,
&par319,
&par320,
&par321,
&par322,
&par323,
&par324,
&par325,
&par326,
&par327,
&par328,
&par329,
&par330,
&par331,
&par332,
&par333,
&par334,
&par335,
&par336,
&par337,
&par338,
&par339,
&par340,
&par341,
&par342,
&par343,
&par344,
&par345,
&par346,
&par347,
&par348,
&par349,
&par350,
&par351,
&par352,
&par353,
&par354,
&par355,
&par356,
&par357,
&par358,
&par359,
&par360,
&par361,
&par362,
&par363,
&par364,
&par365,
&par366,
&par367,
&par368,
&par369,
&par370,
&par371,
&par372,
&par373,
&par374,
&par375,
&par376,
&par377,
&par378,
&par379,
&par380,
&par381,
&par382,
&par383,
&par384,
&par385,
&par386,
&par387,
&par388,
&par389,
&par390,
&par391,
&par392,
&par393,
&par394,
&par395,
&par396,
&par397,
&par398,
&par399,
&par400,
&par401,
&par402,
&par403,
&par404,
&par405,
&par406,
&par407,
&par408,
&par409,
&par410,
&par411,
&par412,
&par413,
&par414,
&par415,
&par416,
&par417,
&par418,
&par419,
&par420,
&par421,
&par422,
&par423,
&par424,
&par425,
&par426,
&par427,
&par428,
&par429,
&par430,
&par431,
&par432,
&par433,
&par434,
&par435,
&par436,
&par437,
&par438,
&par439,
&par440,
&par441,
&par442,
&par443,
&par444,
&par445,
&par446,
&par447,
&par448,
&par449,
&par450,
&par451,
&par452,
&par453,
&par454,
&par455,
&par456,
&par457,
&par458,
&par459,
&par460,
&par461,
&par462,
&par463,
&par464,
&par465,
&par466,
&par467,
&par468,
&par469,
&par470,
&par471,
&par472,
&par473,
&par474,
&par475,
&par476,
&par477,
&par478,
&par479,
&par480,
&par481,
&par482,
&par483,
&par484,
&par485,
&par486,
&par487,
&par488,
&par489,
&par490,
&par491,
&par492,
&par493,
&par494,
&par495,
&par496,
&par497,
&par498,
&par499,
&par500,
&par501,
&par502,
&par503,
&par504,
&par505,
&par506,
&par507,
&par508,
&par509,
&par510,
&par511,
&par512,
&par513,
&par514,
&par515,
&par516,
&par517,
&par518,
&par519,
&par520,
&par521,
&par522,
&par523,
&par524,
&par525,
&par526,
&par527,
&par528,
&par529,
&par530,
&par531,
&par532,
&par533,
&par534,
&par535,
&par536,
&par537,
&par538,
&par539,
&par540,
&par541,
&par542,
&par543,
&par544,
&par545,
&par546,
&par547,
&par548,
&par549,
&par550,
&par551,
&par552,
&par553,
&par554,
&par555,
&par556,
&par557,
&par558,
&par559,
&par560,
&par561,
&par562,
&par563,
&par564,
&par565,
&par566,
&par567,
&par568,
&par569,
&par570,
&par571,
&par572,
&par573,
&par574,
&par575,
&par576,
&par577,
&par578,
&par579,
&par580,
&par581,
&par582,
&par583,
&par584,
&par585,
&par586,
&par587,
&par588,
&par589,
&par590,
&par591,
&par592,
&par593,
&par594,
&par595,
&par596,
&par597,
&par598,
&par599,
&par600,
&par601,
&par602,
&par603,
&par604,
&par605,
&par606,
&par607,
&par608,
&par609,
&par610,
&par611,
&par612,
&par613,
&par614,
&par615,
&par616,
&par617,
&par618,
&par619,
&par620,
&par621,
&par622,
&par623,
&par624,
&par625,
&par626,
&par627,
&par628,
&par629,
&par630,
&par631,
&par632,
&par633,
&par634,
&par635,
&par636,
&par637,
&par638,
&par639,
&par640,
&par641,
&par642,
&par643,
&par644,
&par645,
&par646,
&par647,
&par648,
&par649,
&par650,
&par651,
&par652,
&par653,
&par654,
&par655,
&par656,
&par657,
&par658,
&par659,
&par660,
&par661,
&par662,
&par663,
&par664,
&par665,
&par666,
&par667,
&par668,
&par669,
&par670,
&par671,
&par672,
&par673,
&par674,
&par675,
&par676,
&par677,
&par678,
&par679,
&par680,
&par681,
&par682,
&par683,
&par684,
&par685,
&par686,
&par687,
&par688,
&par689,
&par690,
&par691,
&par692,
&par693,
&par694,
&par695,
&par696,
&par697,
&par698,
&par699,
&par700,
&par701,
&par702,
&par703,
&par704,
&par705,
&par706,
&par707,
&par708,
&par709,
&par710,
&par711,
&par712,
&par713,
&par714,
&par715,
&par716,
&par717,
&par718,
&par719,
&par720,
&par721,
&par722,
&par723,
&par724,
&par725,
&par726,
&par727,
&par728,
&par729,
&par730,
&par731,
&par732,
&par733,
&par734,
&par735,
&par736,
&par737,
&par738,
&par739,
&par740,
&par741,
&par742,
&par743,
&par744,
&par745,
&par746,
&par747,
&par748,
&par749,
&par750,
&par751,
&par752,
&par753,
&par754,
&par755,
&par756,
&par757,
&par758,
&par759,
&par760,
&par761,
&par762,
&par763,
&par764,
&par765,
&par766,
&par767,
&par768,
&par769,
&par770,
&par771,
&par772,
&par773,
&par774,
&par775,
&par776,
&par777,
&par778,
&par779,
&par780,
&par781,
&par782,
&par783,
&par784,
&par785,
&par786,
&par787,
&par788,
&par789,
&par790,
&par791,
&par792,
&par793,
&par794,
&par795,
&par796,
&par797,
&par798,
&par799,
&par800,
&par801,
&par802,
&par803,
&par804,
&par805,
&par806,
&par807,
&par808,
&par809,
&par810,
&par811,
&par812,
&par813,
&par814,
&par815,
&par816,
&par817,
&par818,
&par819,
&par820,
&par821,
&par822,
&par823,
&par824,
&par825,
&par826,
&par827,
&par828,
&par829,
&par830,
&par831,
&par832,
&par833,
&par834,
&par835,
&par836,
&par837,
&par838,
&par839,
&par840,
&par841,
&par842,
&par843,
&par844,
&par845,
&par846,
&par847,
&par848,
&par849,
&par850,
&par851,
&par852,
&par853,
&par854,
&par855,
&par856,
&par857,
&par858,
&par859,
&par860,
&par861,
&par862,
&par863,
&par864,
&par865,
&par866,
&par867,
&par868,
&par869,
&par870,
&par871,
&par872,
&par873,
&par874,
&par875,
&par876,
&par877,
&par878,
&par879,
&par880,
&par881,
&par882,
&par883,
&par884,
NULL};

#ifdef __cplusplus
}
#endif
