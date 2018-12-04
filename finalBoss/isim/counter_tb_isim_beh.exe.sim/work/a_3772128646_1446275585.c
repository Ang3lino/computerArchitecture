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
static const char *ng0 = "/home/angelos/Documents/git/computerArchitecture/finalBoss/src/stack.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_3772128646_1446275585_p_0(char *t0)
{
    char t23[16];
    char t24[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    int t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t1 = (t0 + 2288U);
    t5 = *((char **)t1);
    t20 = *((int *)t5);
    t21 = (t20 - 0);
    t6 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t20);
    t7 = (16U * t6);
    t22 = (0 + t7);
    t1 = (t2 + t22);
    t8 = (t0 + 3784);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t1, 16U);
    xsi_driver_first_trans_fast_port(t8);
    t1 = (t0 + 3704);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2288U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(35, ng0);
    t1 = xsi_get_transient_memory(128U);
    memset(t1, 0, 128U);
    t2 = t1;
    t6 = (16U * 1U);
    t5 = t2;
    memset(t5, (unsigned char)2, t6);
    t3 = (t6 != 0);
    if (t3 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2408U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 128U);
    goto LAB3;

LAB5:    t7 = (128U / t6);
    xsi_mem_set_data(t2, t2, t6, t7);
    goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB15;

LAB16:    t10 = (unsigned char)0;

LAB17:    if (t10 == 1)
        goto LAB12;

LAB13:    t4 = (unsigned char)0;

LAB14:    if (t4 != 0)
        goto LAB9;

LAB11:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB23;

LAB24:    t4 = (unsigned char)0;

LAB25:    if (t4 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB31;

LAB32:    t4 = (unsigned char)0;

LAB33:    if (t4 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB39;

LAB40:    t4 = (unsigned char)0;

LAB41:    if (t4 == 1)
        goto LAB36;

LAB37:    t3 = (unsigned char)0;

LAB38:    if (t3 != 0)
        goto LAB34;

LAB35:
LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1032U);
    t17 = *((char **)t2);
    t2 = (t0 + 2408U);
    t18 = *((char **)t2);
    t2 = (t0 + 2288U);
    t19 = *((char **)t2);
    t20 = *((int *)t19);
    t21 = (t20 - 0);
    t6 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t20);
    t7 = (16U * t6);
    t22 = (0 + t7);
    t2 = (t18 + t22);
    memcpy(t2, t17, 16U);
    goto LAB10;

LAB12:    t2 = (t0 + 1832U);
    t9 = *((char **)t2);
    t15 = *((unsigned char *)t9);
    t16 = (t15 == (unsigned char)2);
    t4 = t16;
    goto LAB14;

LAB15:    t2 = (t0 + 1672U);
    t8 = *((char **)t2);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2288U);
    t9 = *((char **)t1);
    t20 = *((int *)t9);
    t21 = (t20 + 1);
    t1 = (t0 + 2288U);
    t17 = *((char **)t1);
    t1 = (t17 + 0);
    *((int *)t1) = t21;
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2408U);
    t5 = *((char **)t1);
    t1 = (t0 + 2288U);
    t8 = *((char **)t1);
    t20 = *((int *)t8);
    t21 = (t20 - 0);
    t6 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t20);
    t7 = (16U * t6);
    t22 = (0 + t7);
    t1 = (t5 + t22);
    memcpy(t1, t2, 16U);
    goto LAB10;

LAB20:    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)2);
    t3 = t15;
    goto LAB22;

LAB23:    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t4 = t13;
    goto LAB25;

LAB26:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2288U);
    t9 = *((char **)t1);
    t20 = *((int *)t9);
    t21 = (t20 - 1);
    t1 = (t0 + 2288U);
    t17 = *((char **)t1);
    t1 = (t17 + 0);
    *((int *)t1) = t21;
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t1 = (t0 + 2288U);
    t5 = *((char **)t1);
    t20 = *((int *)t5);
    t21 = (t20 - 0);
    t6 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t20);
    t7 = (16U * t6);
    t22 = (0 + t7);
    t1 = (t2 + t22);
    t8 = (t24 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t25 = (0 - 15);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t26;
    t9 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t23, t1, t24, 1);
    t17 = (t0 + 2408U);
    t18 = *((char **)t17);
    t17 = (t0 + 2288U);
    t19 = *((char **)t17);
    t27 = *((int *)t19);
    t28 = (t27 - 0);
    t26 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t27);
    t29 = (16U * t26);
    t30 = (0 + t29);
    t17 = (t18 + t30);
    t31 = (t23 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    memcpy(t17, t9, t33);
    goto LAB10;

LAB28:    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB30;

LAB31:    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t4 = t13;
    goto LAB33;

LAB34:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2408U);
    t9 = *((char **)t1);
    t1 = (t0 + 2288U);
    t17 = *((char **)t1);
    t20 = *((int *)t17);
    t21 = (t20 - 0);
    t6 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t20);
    t7 = (16U * t6);
    t22 = (0 + t7);
    t1 = (t9 + t22);
    t18 = (t24 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 15;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t25 = (0 - 15);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t26;
    t19 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t23, t1, t24, 1);
    t31 = (t0 + 2408U);
    t34 = *((char **)t31);
    t31 = (t0 + 2288U);
    t35 = *((char **)t31);
    t27 = *((int *)t35);
    t28 = (t27 - 0);
    t26 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t27);
    t29 = (16U * t26);
    t30 = (0 + t29);
    t31 = (t34 + t30);
    t36 = (t23 + 12U);
    t32 = *((unsigned int *)t36);
    t33 = (1U * t32);
    memcpy(t31, t19, t33);
    goto LAB10;

LAB36:    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)2);
    t3 = t15;
    goto LAB38;

LAB39:    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t4 = t13;
    goto LAB41;

}


extern void work_a_3772128646_1446275585_init()
{
	static char *pe[] = {(void *)work_a_3772128646_1446275585_p_0};
	xsi_register_didat("work_a_3772128646_1446275585", "isim/counter_tb_isim_beh.exe.sim/work/a_3772128646_1446275585.didat");
	xsi_register_executes(pe);
}
