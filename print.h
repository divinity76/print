#pragma once

#include <stdio.h>

#define _ARG_C_(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99,_100,_101,_102,_103,_104,_105,_106,_107,_108,_109,_110,_111,_112,_113,_114,_115,_116,_117,_118,_119,_120,_121,_122,_123,_124, m, ...) m
#define _ARG_C(...) _ARG_C_(__VA_ARGS__, 125,124,123,122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1)
#define _ARG_T(V) __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(double)), 1, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(float)), 1, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(char)), 2, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(unsigned char)), 3, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(int)), 3, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(short)), 3, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(unsigned int)), 4, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(long)), 5, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(unsigned long)), 6, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(char*)), 7, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(char[])), 7, __builtin_choose_expr(__builtin_types_compatible_p(__typeof__(V), __typeof__(void*)), 8, (0) ))))))))))))

#define __PASTE_(a,b) a ## b
#define __PASTE(a,b) __PASTE_(a,b)
#define __EVAL1(_1) _ARG_T(_1)
#define __EVAL2(_1,_2) _ARG_T(_1),_ARG_T(_2)
#define __EVAL3(_1,_2,_3) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3)
#define __EVAL4(_1,_2,_3,_4) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4)
#define __EVAL5(_1,_2,_3,_4,_5) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5)
#define __EVAL6(_1,_2,_3,_4,_5,_6) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6)
#define __EVAL7(_1,_2,_3,_4,_5,_6,_7) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7)
#define __EVAL8(_1,_2,_3,_4,_5,_6,_7,_8) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8)
#define __EVAL9(_1,_2,_3,_4,_5,_6,_7,_8,_9) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9)
#define __EVAL10(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10)
#define __EVAL11(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11)
#define __EVAL12(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12)
#define __EVAL13(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13)
#define __EVAL14(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14)
#define __EVAL15(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15)
#define __EVAL16(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16)
#define __EVAL17(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17)
#define __EVAL18(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18)
#define __EVAL19(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19)
#define __EVAL20(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20)
#define __EVAL21(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21)
#define __EVAL22(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22)
#define __EVAL23(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23)
#define __EVAL24(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24)
#define __EVAL25(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25)
#define __EVAL26(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26)
#define __EVAL27(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27)
#define __EVAL28(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28)
#define __EVAL29(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29)
#define __EVAL30(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30)
#define __EVAL31(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31)
#define __EVAL32(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32)
#define __EVAL33(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33)
#define __EVAL34(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34)
#define __EVAL35(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35)
#define __EVAL36(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36)
#define __EVAL37(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37)
#define __EVAL38(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38)
#define __EVAL39(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39)
#define __EVAL40(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40)
#define __EVAL41(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41)
#define __EVAL42(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42)
#define __EVAL43(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43)
#define __EVAL44(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44)
#define __EVAL45(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45)
#define __EVAL46(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46)
#define __EVAL47(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47)
#define __EVAL48(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48)
#define __EVAL49(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49)
#define __EVAL50(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50)
#define __EVAL51(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51)
#define __EVAL52(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52)
#define __EVAL53(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53)
#define __EVAL54(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54)
#define __EVAL55(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55)
#define __EVAL56(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56)
#define __EVAL57(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56),_ARG_T(_57)
#define __EVAL58(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56),_ARG_T(_57),_ARG_T(_58)
#define __EVAL59(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56),_ARG_T(_57),_ARG_T(_58),_ARG_T(_59)
#define __EVAL60(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56),_ARG_T(_57),_ARG_T(_58),_ARG_T(_59),_ARG_T(_60)
#define __EVAL61(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56),_ARG_T(_57),_ARG_T(_58),_ARG_T(_59),_ARG_T(_60),_ARG_T(_61)
#define __EVAL62(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56),_ARG_T(_57),_ARG_T(_58),_ARG_T(_59),_ARG_T(_60),_ARG_T(_61),_ARG_T(_62)
#define __EVAL63(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63) _ARG_T(_1),_ARG_T(_2),_ARG_T(_3),_ARG_T(_4),_ARG_T(_5),_ARG_T(_6),_ARG_T(_7),_ARG_T(_8),_ARG_T(_9),_ARG_T(_10),_ARG_T(_11),_ARG_T(_12),_ARG_T(_13),_ARG_T(_14),_ARG_T(_15),_ARG_T(_16),_ARG_T(_17),_ARG_T(_18),_ARG_T(_19),_ARG_T(_20),_ARG_T(_21),_ARG_T(_22),_ARG_T(_23),_ARG_T(_24),_ARG_T(_25),_ARG_T(_26),_ARG_T(_27),_ARG_T(_28),_ARG_T(_29),_ARG_T(_30),_ARG_T(_31),_ARG_T(_32),_ARG_T(_33),_ARG_T(_34),_ARG_T(_35),_ARG_T(_36),_ARG_T(_37),_ARG_T(_38),_ARG_T(_39),_ARG_T(_40),_ARG_T(_41),_ARG_T(_42),_ARG_T(_43),_ARG_T(_44),_ARG_T(_45),_ARG_T(_46),_ARG_T(_47),_ARG_T(_48),_ARG_T(_49),_ARG_T(_50),_ARG_T(_51),_ARG_T(_52),_ARG_T(_53),_ARG_T(_54),_ARG_T(_55),_ARG_T(_56),_ARG_T(_57),_ARG_T(_58),_ARG_T(_59),_ARG_T(_60),_ARG_T(_61),_ARG_T(_62),_ARG_T(_63)
#define __EVAL_(_,...) _(__VA_ARGS__)

static void __print(int m, int c, ...)
{
	enum {
		print = 1 << 0,
		println = 1 << 1,
		fprint = 1 << 2,
		sprint = 1 << 3,
		snprint = 1 << 4
	};

	short types[12], i;
	char buf[12], *s;
	__SIZE_TYPE__ l;
	FILE* fp = NULL;

	__builtin_va_list ap;
	__builtin_va_start(ap, c);

	if (m & fprint)
		fp = __builtin_va_arg(ap, FILE*);
	else if (m & sprint)
		s = __builtin_va_arg(ap, char*);
	else if (m & snprint) {
		s = __builtin_va_arg(ap, char*);
		l = __builtin_va_arg(ap, __SIZE_TYPE__);
	}

	for (i = 0; i < c; i++)
		types[i] = __builtin_va_arg(ap, int);

	for (i = 0; i < c; i++) {
		switch (types[i]) {
			case 1:
				snprintf(buf, sizeof(buf), "%f", __builtin_va_arg(ap, double));
				break;
			case 2:
				snprintf(buf, sizeof(buf), "%c", __builtin_va_arg(ap, int));
				break;
			case 3:
				snprintf(buf, sizeof(buf), "%i", __builtin_va_arg(ap, int));
				break;
			case 4:
				snprintf(buf, sizeof(buf), "%u", __builtin_va_arg(ap, unsigned));
				break;
			case 5:
				snprintf(buf, sizeof(buf), "%li", __builtin_va_arg(ap, long));
				break;
			case 6:
				snprintf(buf, sizeof(buf), "%lu", __builtin_va_arg(ap, unsigned long));
				break;
			case 7:
				snprintf(buf, sizeof(buf), "%s", __builtin_va_arg(ap, char*));
				break;
			case 8:
				snprintf(buf, sizeof(buf), "%p", __builtin_va_arg(ap, void*));
				break;
		}

		switch (m) {
			case print:
			case println:
				fputs(buf, stdout);
				break;
			case fprint:
				fputs(buf, fp);
				break;
			case sprint:
				sprintf(s, "%s", buf);
			case snprint:
				snprintf(s, l, "%s", buf);
		}
	}

	if (m & println)
		fputs("\n", stdout);

	__builtin_va_end(ap);
}

/* Write output to stdout */
#define print(...) __print(1 << 0, _ARG_C(__VA_ARGS__), __EVAL_(__PASTE(__EVAL, _ARG_C(__VA_ARGS__)), __VA_ARGS__), __VA_ARGS__)

#define println(...) __print(1 << 1, _ARG_C(__VA_ARGS__), __EVAL_(__PASTE(__EVAL, _ARG_C(__VA_ARGS__)), __VA_ARGS__), __VA_ARGS__)

/* Write output to STREAM */
#define fprint(__stream, ...) __print(1 << 2, _ARG_C(__VA_ARGS__), __stream, __EVAL_(__PASTE(__EVAL, _ARG_C(__VA_ARGS__)), __VA_ARGS__), __VA_ARGS__)

/* Write output to string */
#define sprint(__s, ...) __print(1 << 3, _ARG_C(__VA_ARGS__), __s, __EVAL_(__PASTE(__EVAL, _ARG_C(__VA_ARGS__)), __VA_ARGS__), __VA_ARGS__)

#define snprint(__s, __maxlen, ...) __print(1 << 4, _ARG_C(__VA_ARGS__), __s, __maxlen, __EVAL_(__PASTE(__EVAL, _ARG_C(__VA_ARGS__)), __VA_ARGS__), __VA_ARGS__)
