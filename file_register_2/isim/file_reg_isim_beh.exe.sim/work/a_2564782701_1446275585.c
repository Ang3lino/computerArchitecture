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
static const char *ng0 = "/home/angelos/Documents/git/computerArchitecture/file_register_2/src/file_register.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_12303121079769504865_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_2564782701_1446275585_p_0(char *t0)
{
    char t20[16];
    char t21[16];
    char t22[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    int t23;
    unsigned int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2272U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1512U);
    t7 = *((char **)t3);
    t3 = (t0 + 1672U);
    t8 = *((char **)t3);
    t3 = (t0 + 8744U);
    t9 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t8, t3);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (16U * t11);
    t13 = (0U + t12);
    t14 = (t0 + 5112);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 16U);
    xsi_driver_first_trans_delta(t14, t13, 16U, 0LL);
    goto LAB6;

LAB8:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t19 = (t6 == (unsigned char)3);
    if (t19 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t1 = (t0 + 8680U);
    t9 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t4, t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t9);
    t12 = (16U * t11);
    t13 = (0 + t12);
    t7 = (t3 + t13);
    t8 = (t22 + 0U);
    t14 = (t8 + 0U);
    *((int *)t14) = 15;
    t14 = (t8 + 4U);
    *((int *)t14) = 0;
    t14 = (t8 + 8U);
    *((int *)t14) = -1;
    t23 = (0 - 15);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t14 = (t8 + 12U);
    *((unsigned int *)t14) = t24;
    t14 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t21, t7, t22, (unsigned char)0);
    t15 = (t21 + 12U);
    t24 = *((unsigned int *)t15);
    t24 = (t24 * 1U);
    t16 = (t0 + 1352U);
    t17 = *((char **)t16);
    t16 = (t0 + 8712U);
    t26 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t17, t16);
    t18 = xsi_vhdl_bitvec_srl(t18, t14, t24, t26);
    t25 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t20, t18, t21);
    t27 = (t20 + 12U);
    t30 = *((unsigned int *)t27);
    t30 = (t30 * 1U);
    t2 = (16U != t30);
    if (t2 == 1)
        goto LAB15;

LAB16:    t28 = (t0 + 1672U);
    t29 = *((char **)t28);
    t28 = (t0 + 8744U);
    t34 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t29, t28);
    t35 = (t34 - 0);
    t36 = (t35 * 1);
    t37 = (16U * t36);
    t38 = (0U + t37);
    t32 = (t0 + 5112);
    t33 = (t32 + 56U);
    t39 = *((char **)t33);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t25, 16U);
    xsi_driver_first_trans_delta(t32, t38, 16U, 0LL);

LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2792U);
    t7 = *((char **)t1);
    t1 = (t0 + 1032U);
    t8 = *((char **)t1);
    t1 = (t0 + 8680U);
    t9 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t8, t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t9);
    t12 = (16U * t11);
    t13 = (0 + t12);
    t14 = (t7 + t13);
    t15 = (t22 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 15;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t23 = (0 - 15);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t24;
    t16 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t21, t14, t22, (unsigned char)0);
    t17 = (t21 + 12U);
    t24 = *((unsigned int *)t17);
    t24 = (t24 * 1U);
    t18 = (t0 + 1352U);
    t25 = *((char **)t18);
    t18 = (t0 + 8712U);
    t26 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t25, t18);
    t27 = xsi_vhdl_bitvec_sll(t27, t16, t24, t26);
    t28 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t20, t27, t21);
    t29 = (t20 + 12U);
    t30 = *((unsigned int *)t29);
    t30 = (t30 * 1U);
    t31 = (16U != t30);
    if (t31 == 1)
        goto LAB13;

LAB14:    t32 = (t0 + 1672U);
    t33 = *((char **)t32);
    t32 = (t0 + 8744U);
    t34 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t33, t32);
    t35 = (t34 - 0);
    t36 = (t35 * 1);
    t37 = (16U * t36);
    t38 = (0U + t37);
    t39 = (t0 + 5112);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t28, 16U);
    xsi_driver_first_trans_delta(t39, t38, 16U, 0LL);
    goto LAB11;

LAB13:    xsi_size_not_matching(16U, t30, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t30, 0);
    goto LAB16;

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

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 8680U);
    t4 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5176);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5016);
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

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 8696U);
    t4 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5240);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5032);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2564782701_1446275585_init()
{
	static char *pe[] = {(void *)work_a_2564782701_1446275585_p_0,(void *)work_a_2564782701_1446275585_p_1,(void *)work_a_2564782701_1446275585_p_2};
	xsi_register_didat("work_a_2564782701_1446275585", "isim/file_reg_isim_beh.exe.sim/work/a_2564782701_1446275585.didat");
	xsi_register_executes(pe);
}
