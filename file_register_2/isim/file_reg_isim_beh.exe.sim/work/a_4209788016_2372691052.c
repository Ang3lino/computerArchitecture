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
static const char *ng0 = "/home/angelos/Documents/git/computerArchitecture/file_register_2/src/file_register_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_17544701978858283880_3536714472(char *, char *, int , int );
void ieee_p_3564397177_sub_1675032430035817134_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_2258168291854845616_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2518136782373626985_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2863978933202788330_91900896(char *, char *, char *, char *, char *);


static void work_a_4209788016_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4209788016_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t19[8];
    char t27[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char t31[16];
    char t32[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t20;
    int64 t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3960U);
    t3 = (t0 + 11260);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 14;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (14 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3856U);
    t3 = (t0 + 11274);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 15;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (15 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 11289);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 11294);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 11299);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 11304);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 11309);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 11314);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 11319);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t16, t6, (unsigned char)0, t8);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 11324);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t17, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t17, t6, (unsigned char)0, t8);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 11329);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t18, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t18, t6, (unsigned char)0, t8);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 11334);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 4416U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t19, t7, 5U);
    t6 = (t0 + 10912U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t19, t6, (unsigned char)0, t8);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 3856U);
    t4 = (t0 + 4136U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(153, ng0);
    t20 = (100 * 1000LL);
    t2 = (t0 + 5048);
    xsi_process_wait(t2, t20);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t20 = *((int64 *)t3);
    t21 = (t20 * 10);
    t2 = (t0 + 5048);
    xsi_process_wait(t2, t21);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(158, ng0);

LAB12:    t2 = (t0 + 3960U);
    t22 = std_textio_endfile(t2);
    t23 = (!(t22));
    if (t23 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3960U);
    std_textio_file_close(t2);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 3856U);
    std_textio_file_close(t2);
    xsi_set_current_line(207, ng0);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 5048);
    t4 = (t0 + 3960U);
    t6 = (t0 + 4208U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t5, t8, 4);
    t4 = (t5 + 12U);
    t9 = *((unsigned int *)t4);
    t9 = (t9 * 1U);
    t22 = (4U != t9);
    if (t22 == 1)
        goto LAB16;

LAB17:    t6 = (t0 + 5864);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t5, t8, 4);
    t4 = (t5 + 12U);
    t9 = *((unsigned int *)t4);
    t9 = (t9 * 1U);
    t22 = (4U != t9);
    if (t22 == 1)
        goto LAB18;

LAB19:    t6 = (t0 + 5928);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t5, t8, 4);
    t4 = (t5 + 12U);
    t9 = *((unsigned int *)t4);
    t9 = (t9 * 1U);
    t22 = (4U != t9);
    if (t22 == 1)
        goto LAB20;

LAB21:    t6 = (t0 + 5992);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t5, t8, 4);
    t4 = (t5 + 12U);
    t9 = *((unsigned int *)t4);
    t9 = (t9 * 1U);
    t22 = (4U != t9);
    if (t22 == 1)
        goto LAB22;

LAB23:    t6 = (t0 + 6056);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3168U);
    t6 = *((char **)t4);
    t4 = (t0 + 10944U);
    ieee_p_3564397177_sub_2863978933202788330_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t2 = (t0 + 6120);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    memcpy(t24, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3288U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t22 = *((unsigned char *)t3);
    t2 = (t0 + 6184);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    *((unsigned char *)t24) = t22;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3288U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t22 = *((unsigned char *)t3);
    t2 = (t0 + 6248);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    *((unsigned char *)t24) = t22;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4208U);
    t4 = (t0 + 3288U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t22 = *((unsigned char *)t3);
    t2 = (t0 + 6312);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t24 = *((char **)t7);
    *((unsigned char *)t24) = t22;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(186, ng0);

LAB26:    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB14:;
LAB16:    xsi_size_not_matching(4U, t9, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(4U, t9, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(4U, t9, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(4U, t9, 0);
    goto LAB23;

LAB24:    t4 = (t0 + 5560);
    *((int *)t4) = 0;
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 1032U);
    t6 = *((char **)t4);
    memcpy(t27, t6, 4U);
    t4 = (t0 + 10800U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t27, t4, (unsigned char)0, 6);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    memcpy(t28, t6, 4U);
    t4 = (t0 + 10816U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t28, t4, (unsigned char)0, 6);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 1512U);
    t6 = *((char **)t4);
    memcpy(t29, t6, 4U);
    t4 = (t0 + 10848U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t29, t4, (unsigned char)0, 6);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    memcpy(t30, t6, 4U);
    t4 = (t0 + 10832U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t30, t4, (unsigned char)0, 6);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 1672U);
    t6 = *((char **)t4);
    memcpy(t5, t6, 16U);
    t4 = (t0 + 10864U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t5, t4, (unsigned char)0, 6);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 1992U);
    t6 = *((char **)t4);
    t22 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t22, (unsigned char)0, 6);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 2152U);
    t6 = *((char **)t4);
    t22 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t22, (unsigned char)0, 6);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 1832U);
    t6 = *((char **)t4);
    t22 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t22, (unsigned char)0, 6);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 2472U);
    t6 = *((char **)t4);
    memcpy(t31, t6, 16U);
    t4 = (t0 + 10880U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t31, t4, (unsigned char)0, 6);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 4136U);
    t4 = (t0 + 2632U);
    t6 = *((char **)t4);
    memcpy(t32, t6, 16U);
    t4 = (t0 + 10896U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t32, t4, (unsigned char)0, 6);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 5048);
    t3 = (t0 + 3856U);
    t4 = (t0 + 4136U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB12;

LAB25:    t3 = (t0 + 2272U);
    t22 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t22 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    goto LAB2;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}


extern void work_a_4209788016_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4209788016_2372691052_p_0,(void *)work_a_4209788016_2372691052_p_1};
	xsi_register_didat("work_a_4209788016_2372691052", "isim/file_reg_isim_beh.exe.sim/work/a_4209788016_2372691052.didat");
	xsi_register_executes(pe);
}
