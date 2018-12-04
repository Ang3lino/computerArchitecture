/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
static const char *ng2 = "/home/angelos/Documents/git/computerArchitecture/finalBoss/src/alu.vhd";

char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


unsigned char work_a_2351365864_2791128713_sub_12783585563308011806_3112642893(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    int t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t23;
    char *t24;
    int t25;
    int t26;
    unsigned int t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    t6 = (t4 + 4U);
    t7 = ((IEEE_P_2592010699) + 3312);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((unsigned char *)t9) = (unsigned char)3;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t3 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = t17;
    t19 = 0;

LAB4:    if (t18 >= t19)
        goto LAB5;

LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t0 = t13;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t20 = (t6 + 56U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    t20 = (t3 + 0U);
    t23 = *((int *)t20);
    t24 = (t3 + 8U);
    t25 = *((int *)t24);
    t26 = (t18 - t23);
    t27 = (t26 * t25);
    t28 = (t3 + 4U);
    t29 = *((int *)t28);
    xsi_vhdl_check_range_of_index(t23, t29, t25, t18);
    t30 = (1U * t27);
    t31 = (0 + t30);
    t32 = (t2 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t22, t33);
    t35 = (t6 + 56U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB6:    if (t18 == t19)
        goto LAB7;

LAB8:    t17 = (t18 + -1);
    t18 = t17;
    goto LAB4;

LAB9:;
}

char *work_a_2351365864_2791128713_sub_2731174958379061163_3112642893(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, unsigned char t7)
{
    char t8[968];
    char t9[40];
    char t15[8];
    char t23[16];
    char t40[16];
    char t77[8];
    char t83[8];
    char t109[16];
    char *t0;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    char *t24;
    int t25;
    char *t26;
    int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    int t38;
    int t39;
    char *t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    int t95;
    char *t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned char t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned char t107;
    unsigned char t108;
    unsigned char t110;
    unsigned char t111;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t8 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((unsigned int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (0 - t20);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t18 = (t12 + 56U);
    t24 = *((char **)t18);
    t25 = *((int *)t24);
    t18 = (t23 + 0U);
    t26 = (t18 + 0U);
    *((int *)t26) = t25;
    t26 = (t18 + 4U);
    *((int *)t26) = 0;
    t26 = (t18 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - t25);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t18 + 12U);
    *((unsigned int *)t26) = t28;
    t26 = (t8 + 124U);
    t29 = ((IEEE_P_2592010699) + 4000);
    t30 = (t26 + 88U);
    *((char **)t30) = t29;
    t31 = (char *)alloca(t22);
    t32 = (t26 + 56U);
    *((char **)t32) = t31;
    xsi_type_set_default_value(t29, t31, t23);
    t33 = (t26 + 64U);
    *((char **)t33) = t23;
    t34 = (t26 + 80U);
    *((unsigned int *)t34) = t22;
    t35 = (t12 + 56U);
    t36 = *((char **)t35);
    t37 = *((int *)t36);
    t38 = (t37 - 1);
    t39 = (0 - t38);
    t28 = (t39 * -1);
    t28 = (t28 + 1);
    t28 = (t28 * 1U);
    t35 = (t12 + 56U);
    t41 = *((char **)t35);
    t42 = *((int *)t41);
    t43 = (t42 - 1);
    t35 = (t40 + 0U);
    t44 = (t35 + 0U);
    *((int *)t44) = t43;
    t44 = (t35 + 4U);
    *((int *)t44) = 0;
    t44 = (t35 + 8U);
    *((int *)t44) = -1;
    t45 = (0 - t43);
    t46 = (t45 * -1);
    t46 = (t46 + 1);
    t44 = (t35 + 12U);
    *((unsigned int *)t44) = t46;
    t44 = (t8 + 244U);
    t47 = ((IEEE_P_2592010699) + 4000);
    t48 = (t44 + 88U);
    *((char **)t48) = t47;
    t49 = (char *)alloca(t28);
    t50 = (t44 + 56U);
    *((char **)t50) = t49;
    xsi_type_set_default_value(t47, t49, t40);
    t51 = (t44 + 64U);
    *((char **)t51) = t40;
    t52 = (t44 + 80U);
    *((unsigned int *)t52) = t28;
    t53 = (t8 + 364U);
    t54 = ((IEEE_P_2592010699) + 4000);
    t55 = (t53 + 88U);
    *((char **)t55) = t54;
    t56 = (char *)alloca(t28);
    t57 = (t53 + 56U);
    *((char **)t57) = t56;
    xsi_type_set_default_value(t54, t56, t40);
    t58 = (t53 + 64U);
    *((char **)t58) = t40;
    t59 = (t53 + 80U);
    *((unsigned int *)t59) = t28;
    t60 = (t8 + 484U);
    t61 = ((IEEE_P_2592010699) + 4000);
    t62 = (t60 + 88U);
    *((char **)t62) = t61;
    t63 = (char *)alloca(t28);
    t64 = (t60 + 56U);
    *((char **)t64) = t63;
    xsi_type_set_default_value(t61, t63, t40);
    t65 = (t60 + 64U);
    *((char **)t65) = t40;
    t66 = (t60 + 80U);
    *((unsigned int *)t66) = t28;
    t67 = (t8 + 604U);
    t68 = ((IEEE_P_2592010699) + 4000);
    t69 = (t67 + 88U);
    *((char **)t69) = t68;
    t70 = (char *)alloca(t28);
    t71 = (t67 + 56U);
    *((char **)t71) = t70;
    xsi_type_set_default_value(t68, t70, t40);
    t72 = (t67 + 64U);
    *((char **)t72) = t40;
    t73 = (t67 + 80U);
    *((unsigned int *)t73) = t28;
    t74 = (t8 + 724U);
    t75 = ((IEEE_P_2592010699) + 3312);
    t76 = (t74 + 88U);
    *((char **)t76) = t75;
    t78 = (t74 + 56U);
    *((char **)t78) = t77;
    xsi_type_set_default_value(t75, t77, 0);
    t79 = (t74 + 80U);
    *((unsigned int *)t79) = 1U;
    t80 = (t8 + 844U);
    t81 = ((IEEE_P_2592010699) + 3312);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t9 + 4U);
    t87 = (t3 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t9 + 12U);
    *((char **)t88) = t4;
    t89 = (t9 + 20U);
    t90 = (t5 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t9 + 28U);
    *((char **)t91) = t6;
    t92 = (t9 + 36U);
    *((unsigned char *)t92) = t7;
    t93 = (t26 + 56U);
    t94 = *((char **)t93);
    t93 = (t23 + 0U);
    t95 = *((int *)t93);
    t96 = (t23 + 8U);
    t97 = *((int *)t96);
    t98 = (0 - t95);
    t46 = (t98 * t97);
    t99 = (1U * t46);
    t100 = (0 + t99);
    t101 = (t94 + t100);
    *((unsigned char *)t101) = t7;
    t10 = (t12 + 56U);
    t13 = *((char **)t10);
    t20 = *((int *)t13);
    t21 = (t20 - 1);
    t25 = 0;
    t27 = t21;

LAB6:    if (t25 <= t27)
        goto LAB7;

LAB9:    t10 = (t26 + 56U);
    t13 = *((char **)t10);
    t10 = (t23 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t13, t11);
    t14 = (t23 + 0U);
    t20 = *((int *)t14);
    t16 = (t23 + 4U);
    t21 = *((int *)t16);
    t17 = (t23 + 8U);
    t25 = *((int *)t17);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t20;
    t19 = (t18 + 4U);
    *((int *)t19) = t21;
    t19 = (t18 + 8U);
    *((int *)t19) = t25;
    t27 = (t21 - t20);
    t22 = (t27 * t25);
    t22 = (t22 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t22;

LAB1:    return t0;
LAB3:    *((char **)t86) = t3;
    goto LAB2;

LAB5:    *((char **)t89) = t5;
    goto LAB4;

LAB7:    t10 = (t6 + 0U);
    t37 = *((int *)t10);
    t14 = (t6 + 8U);
    t38 = *((int *)t14);
    t39 = (t25 - t37);
    t11 = (t39 * t38);
    t16 = (t6 + 4U);
    t42 = *((int *)t16);
    xsi_vhdl_check_range_of_index(t37, t42, t38, t25);
    t22 = (1U * t11);
    t28 = (0 + t22);
    t17 = (t5 + t28);
    t87 = *((unsigned char *)t17);
    t90 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t87, t7);
    t18 = (t44 + 56U);
    t19 = *((char **)t18);
    t18 = (t40 + 0U);
    t43 = *((int *)t18);
    t24 = (t40 + 8U);
    t45 = *((int *)t24);
    t95 = (t25 - t43);
    t46 = (t95 * t45);
    t29 = (t40 + 4U);
    t97 = *((int *)t29);
    xsi_vhdl_check_range_of_index(t43, t97, t45, t25);
    t99 = (1U * t46);
    t100 = (0 + t99);
    t30 = (t19 + t100);
    *((unsigned char *)t30) = t90;
    t10 = (t4 + 0U);
    t20 = *((int *)t10);
    t13 = (t4 + 8U);
    t21 = *((int *)t13);
    t37 = (t25 - t20);
    t11 = (t37 * t21);
    t14 = (t4 + 4U);
    t38 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t20, t38, t21, t25);
    t22 = (1U * t11);
    t28 = (0 + t22);
    t16 = (t3 + t28);
    t87 = *((unsigned char *)t16);
    t17 = (t44 + 56U);
    t18 = *((char **)t17);
    t17 = (t40 + 0U);
    t39 = *((int *)t17);
    t19 = (t40 + 8U);
    t42 = *((int *)t19);
    t43 = (t25 - t39);
    t46 = (t43 * t42);
    t24 = (t40 + 4U);
    t45 = *((int *)t24);
    xsi_vhdl_check_range_of_index(t39, t45, t42, t25);
    t99 = (1U * t46);
    t100 = (0 + t99);
    t29 = (t18 + t100);
    t90 = *((unsigned char *)t29);
    t102 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t87, t90);
    t30 = (t53 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 0U);
    t95 = *((int *)t30);
    t33 = (t40 + 8U);
    t97 = *((int *)t33);
    t98 = (t25 - t95);
    t103 = (t98 * t97);
    t34 = (t40 + 4U);
    t104 = *((int *)t34);
    xsi_vhdl_check_range_of_index(t95, t104, t97, t25);
    t105 = (1U * t103);
    t106 = (0 + t105);
    t35 = (t32 + t106);
    *((unsigned char *)t35) = t102;
    t10 = (t4 + 0U);
    t20 = *((int *)t10);
    t13 = (t4 + 8U);
    t21 = *((int *)t13);
    t37 = (t25 - t20);
    t11 = (t37 * t21);
    t14 = (t4 + 4U);
    t38 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t20, t38, t21, t25);
    t22 = (1U * t11);
    t28 = (0 + t22);
    t16 = (t3 + t28);
    t87 = *((unsigned char *)t16);
    t17 = (t44 + 56U);
    t18 = *((char **)t17);
    t17 = (t40 + 0U);
    t39 = *((int *)t17);
    t19 = (t40 + 8U);
    t42 = *((int *)t19);
    t43 = (t25 - t39);
    t46 = (t43 * t42);
    t24 = (t40 + 4U);
    t45 = *((int *)t24);
    xsi_vhdl_check_range_of_index(t39, t45, t42, t25);
    t99 = (1U * t46);
    t100 = (0 + t99);
    t29 = (t18 + t100);
    t90 = *((unsigned char *)t29);
    t102 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t87, t90);
    t30 = (t60 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 0U);
    t95 = *((int *)t30);
    t33 = (t40 + 8U);
    t97 = *((int *)t33);
    t98 = (t25 - t95);
    t103 = (t98 * t97);
    t34 = (t40 + 4U);
    t104 = *((int *)t34);
    xsi_vhdl_check_range_of_index(t95, t104, t97, t25);
    t105 = (1U * t103);
    t106 = (0 + t105);
    t35 = (t32 + t106);
    *((unsigned char *)t35) = t102;
    t10 = (t74 + 56U);
    t13 = *((char **)t10);
    t10 = (t13 + 0);
    *((unsigned char *)t10) = (unsigned char)2;
    t20 = (t25 - 1);
    t21 = 0;
    t37 = t20;

LAB10:    if (t21 <= t37)
        goto LAB11;

LAB13:    t10 = (t53 + 56U);
    t13 = *((char **)t10);
    t10 = (t40 + 0U);
    t20 = *((int *)t10);
    t11 = (t20 - t25);
    t14 = (t40 + 4U);
    t21 = *((int *)t14);
    t16 = (t40 + 8U);
    t37 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t20, t21, t37, t25, 0, -1);
    t22 = (t11 * 1U);
    t28 = (0 + t22);
    t17 = (t13 + t28);
    t18 = (t109 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t25;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t38 = (0 - t25);
    t46 = (t38 * -1);
    t46 = (t46 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t46;
    t87 = work_a_2351365864_2791128713_sub_12783585563308011806_3112642893(t1, t17, t109);
    t19 = (t80 + 56U);
    t24 = *((char **)t19);
    t19 = (t24 + 0);
    *((unsigned char *)t19) = t87;
    t10 = (t60 + 56U);
    t13 = *((char **)t10);
    t10 = (t40 + 0U);
    t20 = *((int *)t10);
    t14 = (t40 + 8U);
    t21 = *((int *)t14);
    t37 = (t25 - t20);
    t11 = (t37 * t21);
    t16 = (t40 + 4U);
    t38 = *((int *)t16);
    xsi_vhdl_check_range_of_index(t20, t38, t21, t25);
    t22 = (1U * t11);
    t28 = (0 + t22);
    t17 = (t13 + t28);
    t87 = *((unsigned char *)t17);
    t18 = (t74 + 56U);
    t19 = *((char **)t18);
    t90 = *((unsigned char *)t19);
    t102 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t87, t90);
    t18 = (t26 + 56U);
    t24 = *((char **)t18);
    t18 = (t23 + 0U);
    t39 = *((int *)t18);
    t29 = (t23 + 8U);
    t42 = *((int *)t29);
    t43 = (0 - t39);
    t46 = (t43 * t42);
    t99 = (1U * t46);
    t100 = (0 + t99);
    t30 = (t24 + t100);
    t107 = *((unsigned char *)t30);
    t32 = (t80 + 56U);
    t33 = *((char **)t32);
    t108 = *((unsigned char *)t33);
    t110 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t107, t108);
    t111 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t102, t110);
    t32 = (t26 + 56U);
    t34 = *((char **)t32);
    t45 = (t25 + 1);
    t32 = (t23 + 0U);
    t95 = *((int *)t32);
    t35 = (t23 + 8U);
    t97 = *((int *)t35);
    t98 = (t45 - t95);
    t103 = (t98 * t97);
    t36 = (t23 + 4U);
    t104 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t95, t104, t97, t45);
    t105 = (1U * t103);
    t106 = (0 + t105);
    t41 = (t34 + t106);
    *((unsigned char *)t41) = t111;

LAB8:    if (t25 == t27)
        goto LAB9;

LAB20:    t20 = (t25 + 1);
    t25 = t20;
    goto LAB6;

LAB11:    t10 = (t80 + 56U);
    t13 = *((char **)t10);
    t10 = (t13 + 0);
    *((unsigned char *)t10) = (unsigned char)3;
    t20 = (t21 + 1);
    t38 = t20;
    t39 = t25;

LAB14:    if (t38 <= t39)
        goto LAB15;

LAB17:    t10 = (t74 + 56U);
    t13 = *((char **)t10);
    t87 = *((unsigned char *)t13);
    t10 = (t60 + 56U);
    t14 = *((char **)t10);
    t10 = (t40 + 0U);
    t20 = *((int *)t10);
    t16 = (t40 + 8U);
    t38 = *((int *)t16);
    t39 = (t21 - t20);
    t11 = (t39 * t38);
    t17 = (t40 + 4U);
    t42 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t20, t42, t38, t21);
    t22 = (1U * t11);
    t28 = (0 + t22);
    t18 = (t14 + t28);
    t90 = *((unsigned char *)t18);
    t19 = (t80 + 56U);
    t24 = *((char **)t19);
    t102 = *((unsigned char *)t24);
    t107 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t90, t102);
    t108 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t87, t107);
    t19 = (t74 + 56U);
    t29 = *((char **)t19);
    t19 = (t29 + 0);
    *((unsigned char *)t19) = t108;

LAB12:    if (t21 == t37)
        goto LAB13;

LAB19:    t20 = (t21 + 1);
    t21 = t20;
    goto LAB10;

LAB15:    t10 = (t80 + 56U);
    t13 = *((char **)t10);
    t87 = *((unsigned char *)t13);
    t10 = (t53 + 56U);
    t14 = *((char **)t10);
    t10 = (t40 + 0U);
    t42 = *((int *)t10);
    t16 = (t40 + 8U);
    t43 = *((int *)t16);
    t45 = (t38 - t42);
    t11 = (t45 * t43);
    t17 = (t40 + 4U);
    t95 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t42, t95, t43, t38);
    t22 = (1U * t11);
    t28 = (0 + t22);
    t18 = (t14 + t28);
    t90 = *((unsigned char *)t18);
    t102 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t87, t90);
    t19 = (t80 + 56U);
    t24 = *((char **)t19);
    t19 = (t24 + 0);
    *((unsigned char *)t19) = t102;

LAB16:    if (t38 == t39)
        goto LAB17;

LAB18:    t20 = (t38 + 1);
    t38 = t20;
    goto LAB14;

LAB21:;
}

static void work_a_2351365864_2791128713_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(81, ng2);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5424);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2351365864_2791128713_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(83, ng2);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (16 - 16);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t10 = (16 - 1);
    t11 = (t10 - 16);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t8 = (t9 + t14);
    t15 = *((unsigned char *)t8);
    t16 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t15);
    t17 = (t0 + 5648);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t17, 0U, 1, 0LL);

LAB2:    t22 = (t0 + 5440);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2351365864_2791128713_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(84, ng2);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (16 - 1);
    t4 = (t3 - 15);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 5712);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_delta(t9, 1U, 1, 0LL);

LAB2:    t14 = (t0 + 5456);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2351365864_2791128713_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(85, ng2);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t4 = 1;
    if (16U == 16U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t12 = (t0 + 5776);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_delta(t12, 2U, 1, 0LL);

LAB2:    t17 = (t0 + 5472);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5776);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t7, 2U, 1, 0LL);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 16U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_2351365864_2791128713_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(86, ng2);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (16 - 16);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5840);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_delta(t8, 3U, 1, 0LL);

LAB2:    t13 = (t0 + 5488);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2351365864_2791128713_p_5(char *t0)
{
    char t26[16];
    char t37[16];
    char t38[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(100, ng2);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2528U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = t7;
    xsi_set_current_line(101, ng2);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (2 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2648U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = t7;
    xsi_set_current_line(103, ng2);
    t3 = (16 - 1);
    t1 = (t0 + 9123);
    *((int *)t1) = t3;
    t2 = (t0 + 9127);
    *((int *)t2) = 0;
    t10 = t3;
    t11 = 0;

LAB2:    if (t10 >= t11)
        goto LAB3;

LAB5:    xsi_set_current_line(107, ng2);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (3 - 1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t8 = (t0 + 9131);
    t3 = xsi_mem_cmp(t8, t1, 2U);
    if (t3 == 1)
        goto LAB8;

LAB12:    t12 = (t0 + 9133);
    t10 = xsi_mem_cmp(t12, t1, 2U);
    if (t10 == 1)
        goto LAB9;

LAB13:    t18 = (t0 + 9135);
    t11 = xsi_mem_cmp(t18, t1, 2U);
    if (t11 == 1)
        goto LAB10;

LAB14:
LAB11:    xsi_set_current_line(112, ng2);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 8960U);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 8848U);
    t12 = (t0 + 2648U);
    t15 = *((char **)t12);
    t7 = *((unsigned char *)t15);
    t12 = work_a_2351365864_2791128713_sub_2731174958379061163_3112642893(t0, t26, t2, t1, t9, t8, t7);
    t18 = (t26 + 12U);
    t4 = *((unsigned int *)t18);
    t4 = (t4 * 1U);
    t16 = (17U != t4);
    if (t16 == 1)
        goto LAB22;

LAB23:    t19 = (t0 + 5968);
    t25 = (t19 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t12, 17U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(113, ng2);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (16 - 1);
    t4 = (16 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t8 = (t38 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 15);
    t22 = (t10 * -1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    t9 = (t0 + 2768U);
    t12 = *((char **)t9);
    t9 = (t0 + 8960U);
    t15 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t37, t1, t38, t12, t9);
    t18 = (t0 + 2888U);
    t19 = *((char **)t18);
    t18 = (t0 + 8976U);
    t25 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t26, t15, t37, t19, t18);
    t27 = (t26 + 12U);
    t22 = *((unsigned int *)t27);
    t23 = (1U * t22);
    t7 = (16U != t23);
    if (t7 == 1)
        goto LAB24;

LAB25:    t28 = (t0 + 5904);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t25, 16U);
    xsi_driver_first_trans_fast(t28);

LAB7:    t1 = (t0 + 5504);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(104, ng2);
    t8 = (t0 + 2528U);
    t9 = *((char **)t8);
    t7 = *((unsigned char *)t9);
    t8 = (t0 + 1032U);
    t12 = *((char **)t8);
    t8 = (t0 + 9123);
    t13 = *((int *)t8);
    t14 = (t13 - 15);
    t4 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t8));
    t5 = (1U * t4);
    t6 = (0 + t5);
    t15 = (t12 + t6);
    t16 = *((unsigned char *)t15);
    t17 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t16);
    t18 = (t0 + 2768U);
    t19 = *((char **)t18);
    t18 = (t0 + 9123);
    t20 = *((int *)t18);
    t21 = (t20 - 15);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t18));
    t23 = (1U * t22);
    t24 = (0 + t23);
    t25 = (t19 + t24);
    *((unsigned char *)t25) = t17;
    xsi_set_current_line(105, ng2);
    t1 = (t0 + 2648U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t8 = *((char **)t1);
    t1 = (t0 + 9123);
    t3 = *((int *)t1);
    t13 = (t3 - 15);
    t4 = (t13 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t1));
    t5 = (1U * t4);
    t6 = (0 + t5);
    t9 = (t8 + t6);
    t16 = *((unsigned char *)t9);
    t17 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t16);
    t12 = (t0 + 2888U);
    t15 = *((char **)t12);
    t12 = (t0 + 9123);
    t14 = *((int *)t12);
    t20 = (t14 - 15);
    t22 = (t20 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t12));
    t23 = (1U * t22);
    t24 = (0 + t23);
    t18 = (t15 + t24);
    *((unsigned char *)t18) = t17;

LAB4:    t1 = (t0 + 9123);
    t10 = *((int *)t1);
    t2 = (t0 + 9127);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB5;

LAB6:    t3 = (t10 + -1);
    t10 = t3;
    t8 = (t0 + 9123);
    *((int *)t8) = t10;
    goto LAB2;

LAB8:    xsi_set_current_line(108, ng2);
    t25 = (t0 + 2768U);
    t27 = *((char **)t25);
    t25 = (t0 + 8960U);
    t28 = (t0 + 2888U);
    t29 = *((char **)t28);
    t28 = (t0 + 8976U);
    t30 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t26, t27, t25, t29, t28);
    t31 = (t26 + 12U);
    t22 = *((unsigned int *)t31);
    t23 = (1U * t22);
    t7 = (16U != t23);
    if (t7 == 1)
        goto LAB16;

LAB17:    t32 = (t0 + 5904);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t30, 16U);
    xsi_driver_first_trans_fast(t32);
    goto LAB7;

LAB9:    xsi_set_current_line(109, ng2);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 8960U);
    t8 = (t0 + 2888U);
    t9 = *((char **)t8);
    t8 = (t0 + 8976U);
    t12 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t26, t2, t1, t9, t8);
    t15 = (t26 + 12U);
    t4 = *((unsigned int *)t15);
    t5 = (1U * t4);
    t7 = (16U != t5);
    if (t7 == 1)
        goto LAB18;

LAB19:    t18 = (t0 + 5904);
    t19 = (t18 + 56U);
    t25 = *((char **)t19);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t12, 16U);
    xsi_driver_first_trans_fast(t18);
    goto LAB7;

LAB10:    xsi_set_current_line(110, ng2);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 8960U);
    t8 = (t0 + 2888U);
    t9 = *((char **)t8);
    t8 = (t0 + 8976U);
    t12 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t26, t2, t1, t9, t8);
    t15 = (t26 + 12U);
    t4 = *((unsigned int *)t15);
    t5 = (1U * t4);
    t7 = (16U != t5);
    if (t7 == 1)
        goto LAB20;

LAB21:    t18 = (t0 + 5904);
    t19 = (t18 + 56U);
    t25 = *((char **)t19);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t12, 16U);
    xsi_driver_first_trans_fast(t18);
    goto LAB7;

LAB15:;
LAB16:    xsi_size_not_matching(16U, t23, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(16U, t5, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(16U, t5, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(17U, t4, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(16U, t23, 0);
    goto LAB25;

}


extern void work_a_2351365864_2791128713_init()
{
	static char *pe[] = {(void *)work_a_2351365864_2791128713_p_0,(void *)work_a_2351365864_2791128713_p_1,(void *)work_a_2351365864_2791128713_p_2,(void *)work_a_2351365864_2791128713_p_3,(void *)work_a_2351365864_2791128713_p_4,(void *)work_a_2351365864_2791128713_p_5};
	static char *se[] = {(void *)work_a_2351365864_2791128713_sub_12783585563308011806_3112642893,(void *)work_a_2351365864_2791128713_sub_2731174958379061163_3112642893};
	xsi_register_didat("work_a_2351365864_2791128713", "isim/counter_tb_isim_beh.exe.sim/work/a_2351365864_2791128713.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
