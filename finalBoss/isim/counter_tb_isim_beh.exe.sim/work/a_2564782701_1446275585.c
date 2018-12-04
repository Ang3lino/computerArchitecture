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
static const char *ng0 = "/home/angelos/Documents/git/computerArchitecture/finalBoss/src/file_register.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_12303121079769504865_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_2564782701_1446275585_p_0(char *t0)
{
    char t8[16];
    char t9[16];
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3328U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 16U);

LAB3:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2272U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 5120);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 8776U);
    t12 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t5, t1);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t12);
    t15 = (16U * t14);
    t16 = (0 + t15);
    t10 = (t2 + t16);
    t11 = (t18 + 0U);
    t17 = (t11 + 0U);
    *((int *)t17) = 15;
    t17 = (t11 + 4U);
    *((int *)t17) = 0;
    t17 = (t11 + 8U);
    *((int *)t17) = -1;
    t21 = (0 - 15);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t17 = (t11 + 12U);
    *((unsigned int *)t17) = t22;
    t17 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t9, t10, t18, (unsigned char)0);
    t19 = (t9 + 12U);
    t22 = *((unsigned int *)t19);
    t22 = (t22 * 1U);
    t20 = (t0 + 1352U);
    t23 = *((char **)t20);
    t20 = (t0 + 8808U);
    t26 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t23, t20);
    t24 = xsi_vhdl_bitvec_srl(t24, t17, t22, t26);
    t25 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t8, t24, t9);
    t27 = (t0 + 3328U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    t29 = (t8 + 12U);
    t32 = *((unsigned int *)t29);
    t32 = (t32 * 1U);
    memcpy(t27, t25, t32);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2792U);
    t10 = *((char **)t1);
    t1 = (t0 + 1032U);
    t11 = *((char **)t1);
    t1 = (t0 + 8776U);
    t12 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t11, t1);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t12);
    t15 = (16U * t14);
    t16 = (0 + t15);
    t17 = (t10 + t16);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 15;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 15);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t9, t17, t18, (unsigned char)0);
    t23 = (t9 + 12U);
    t22 = *((unsigned int *)t23);
    t22 = (t22 * 1U);
    t24 = (t0 + 1352U);
    t25 = *((char **)t24);
    t24 = (t0 + 8808U);
    t26 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t25, t24);
    t27 = xsi_vhdl_bitvec_sll(t27, t20, t22, t26);
    t28 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t8, t27, t9);
    t29 = (t0 + 3328U);
    t30 = *((char **)t29);
    t29 = (t30 + 0);
    t31 = (t8 + 12U);
    t32 = *((unsigned int *)t31);
    t32 = (t32 * 1U);
    memcpy(t29, t28, t32);
    goto LAB6;

LAB8:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3328U);
    t10 = *((char **)t2);
    t2 = (t0 + 1672U);
    t11 = *((char **)t2);
    t2 = (t0 + 8840U);
    t12 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t11, t2);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    t15 = (16U * t14);
    t16 = (0U + t15);
    t17 = (t0 + 5232);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t10, 16U);
    xsi_driver_first_trans_delta(t17, t16, 16U, 0LL);
    goto LAB9;

LAB11:    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t3 = t7;
    goto LAB13;

}

static void work_a_2564782701_1446275585_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(54, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 8776U);
    t4 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5296);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5136);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2564782701_1446275585_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 8792U);
    t4 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5360);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5152);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2564782701_1446275585_init()
{
	static char *pe[] = {(void *)work_a_2564782701_1446275585_p_0,(void *)work_a_2564782701_1446275585_p_1,(void *)work_a_2564782701_1446275585_p_2};
	xsi_register_didat("work_a_2564782701_1446275585", "isim/counter_tb_isim_beh.exe.sim/work/a_2564782701_1446275585.didat");
	xsi_register_executes(pe);
}
