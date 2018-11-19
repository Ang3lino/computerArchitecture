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
static const char *ng0 = "/home/angelos/Documents/git/computerArchitecture/stack2/src/stack_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1675032430035817134_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_2258168291854845616_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2518136782373626985_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2863978933202788330_91900896(char *, char *, char *, char *, char *);


static void work_a_2534346133_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2534346133_2372691052_p_1(char *t0)
{
    char t5[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3216U);
    t3 = (t0 + 9197);
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
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3320U);
    t3 = (t0 + 9211);
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
    xsi_set_current_line(115, ng0);
    t10 = (100 * 1000LL);
    t2 = (t0 + 4408);
    xsi_process_wait(t2, t10);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB8:    t2 = (t0 + 3216U);
    t11 = std_textio_endfile(t2);
    t12 = (!(t11));
    if (t12 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3216U);
    std_textio_file_close(t2);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3320U);
    std_textio_file_close(t2);
    xsi_set_current_line(150, ng0);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(119, ng0);

LAB14:    t3 = (t0 + 4920);
    *((int *)t3) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    t6 = (t0 + 4920);
    *((int *)t6) = 0;
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3216U);
    t4 = (t0 + 3496U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3496U);
    t4 = (t0 + 2528U);
    t6 = *((char **)t4);
    t4 = (t0 + 8896U);
    ieee_p_3564397177_sub_2863978933202788330_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    memcpy(t14, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3496U);
    t4 = (t0 + 2648U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t2 = (t0 + 5224);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3496U);
    t4 = (t0 + 2648U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t2 = (t0 + 5288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3496U);
    t4 = (t0 + 2648U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t2 = (t0 + 5352);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3496U);
    t4 = (t0 + 2648U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t2 = (t0 + 5416);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3568U);
    t4 = (t0 + 1832U);
    t6 = *((char **)t4);
    memcpy(t5, t6, 16U);
    t4 = (t0 + 8848U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t5, t4, (unsigned char)0, 5);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3568U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 2);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3568U);
    t4 = (t0 + 1512U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3568U);
    t4 = (t0 + 1672U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 2);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3568U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 2);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3568U);
    t4 = (t0 + 1992U);
    t6 = *((char **)t4);
    memcpy(t15, t6, 16U);
    t4 = (t0 + 8864U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t15, t4, (unsigned char)0, 5);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3320U);
    t4 = (t0 + 3568U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB8;

LAB13:    t4 = (t0 + 992U);
    t13 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t13 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_2534346133_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2534346133_2372691052_p_0,(void *)work_a_2534346133_2372691052_p_1};
	xsi_register_didat("work_a_2534346133_2372691052", "isim/stack_tb_isim_beh.exe.sim/work/a_2534346133_2372691052.didat");
	xsi_register_executes(pe);
}
