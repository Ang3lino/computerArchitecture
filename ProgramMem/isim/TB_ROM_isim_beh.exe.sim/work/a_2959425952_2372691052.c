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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/ProgramMem/TB_ROM.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3205433008_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3988856810_91900896(char *, char *, char *, char *, char *);


static void work_a_2959425952_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3416);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3416);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2959425952_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t23[8];
    char t24[8];
    char t25[16];
    char t27[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t26;

LAB0:    t1 = (t0 + 3856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2560U);
    t3 = (t0 + 6953);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (12 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2456U);
    t3 = (t0 + 6965);
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
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6979);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 8U);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 8U);
    t6 = (t0 + 6692U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6987);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 8U);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 8U);
    t6 = (t0 + 6692U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6995);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 8U);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 8U);
    t6 = (t0 + 6692U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 7003);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 8U);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 8U);
    t6 = (t0 + 6692U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7011);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 8U);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 8U);
    t6 = (t0 + 6692U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7019);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 8U);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 8U);
    t6 = (t0 + 6692U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 7027);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 8U);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 3024U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 8U);
    t6 = (t0 + 6692U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t16, t6, (unsigned char)0, t8);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2456U);
    t4 = (t0 + 2736U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t17 = *((int64 *)t3);
    t2 = (t0 + 3664);
    xsi_process_wait(t2, t17);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);

LAB8:    t2 = (t0 + 2560U);
    t18 = std_textio_endfile(t2);
    t19 = (!(t18));
    if (t19 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2560U);
    std_textio_file_close(t2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2456U);
    std_textio_file_close(t2);
    xsi_set_current_line(141, ng0);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 3664);
    t4 = (t0 + 2560U);
    t6 = (t0 + 2808U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2808U);
    t4 = (t0 + 2008U);
    t6 = *((char **)t4);
    t4 = (t0 + 6660U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4400);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    memcpy(t20, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t17 = *((int64 *)t3);
    t2 = (t0 + 3664);
    xsi_process_wait(t2, t17);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t9 = (24 - 24);
    t21 = (t9 * 1U);
    t22 = (0 + t21);
    t2 = (t3 + t22);
    t4 = (t0 + 2128U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t2, 5U);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    memcpy(t5, t6, 16U);
    t4 = (t0 + 6628U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t5, t4, (unsigned char)0, 9);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 2128U);
    t6 = *((char **)t4);
    memcpy(t23, t6, 5U);
    t4 = (t0 + 6676U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t23, t4, (unsigned char)0, 7);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t9 = (24 - 19);
    t21 = (t9 * 1U);
    t22 = (0 + t21);
    t4 = (t6 + t22);
    memcpy(t24, t4, 4U);
    t7 = (t25 + 0U);
    t20 = (t7 + 0U);
    *((int *)t20) = 19;
    t20 = (t7 + 4U);
    *((int *)t20) = 16;
    t20 = (t7 + 8U);
    *((int *)t20) = -1;
    t8 = (16 - 19);
    t26 = (t8 * -1);
    t26 = (t26 + 1);
    t20 = (t7 + 12U);
    *((unsigned int *)t20) = t26;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t24, t25, (unsigned char)0, 9);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t9 = (24 - 15);
    t21 = (t9 * 1U);
    t22 = (0 + t21);
    t4 = (t6 + t22);
    memcpy(t27, t4, 4U);
    t7 = (t25 + 0U);
    t20 = (t7 + 0U);
    *((int *)t20) = 15;
    t20 = (t7 + 4U);
    *((int *)t20) = 12;
    t20 = (t7 + 8U);
    *((int *)t20) = -1;
    t8 = (12 - 15);
    t26 = (t8 * -1);
    t26 = (t26 + 1);
    t20 = (t7 + 12U);
    *((unsigned int *)t20) = t26;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t27, t25, (unsigned char)0, 9);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t9 = (24 - 11);
    t21 = (t9 * 1U);
    t22 = (0 + t21);
    t4 = (t6 + t22);
    memcpy(t28, t4, 4U);
    t7 = (t25 + 0U);
    t20 = (t7 + 0U);
    *((int *)t20) = 11;
    t20 = (t7 + 4U);
    *((int *)t20) = 8;
    t20 = (t7 + 8U);
    *((int *)t20) = -1;
    t8 = (8 - 11);
    t26 = (t8 * -1);
    t26 = (t26 + 1);
    t20 = (t7 + 12U);
    *((unsigned int *)t20) = t26;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t28, t25, (unsigned char)0, 9);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t9 = (24 - 7);
    t21 = (t9 * 1U);
    t22 = (0 + t21);
    t4 = (t6 + t22);
    memcpy(t29, t4, 4U);
    t7 = (t25 + 0U);
    t20 = (t7 + 0U);
    *((int *)t20) = 7;
    t20 = (t7 + 4U);
    *((int *)t20) = 4;
    t20 = (t7 + 8U);
    *((int *)t20) = -1;
    t8 = (4 - 7);
    t26 = (t8 * -1);
    t26 = (t26 + 1);
    t20 = (t7 + 12U);
    *((unsigned int *)t20) = t26;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t29, t25, (unsigned char)0, 9);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2736U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t9 = (24 - 3);
    t21 = (t9 * 1U);
    t22 = (0 + t21);
    t4 = (t6 + t22);
    memcpy(t30, t4, 4U);
    t7 = (t25 + 0U);
    t20 = (t7 + 0U);
    *((int *)t20) = 3;
    t20 = (t7 + 4U);
    *((int *)t20) = 0;
    t20 = (t7 + 8U);
    *((int *)t20) = -1;
    t8 = (0 - 3);
    t26 = (t8 * -1);
    t26 = (t26 + 1);
    t20 = (t7 + 12U);
    *((unsigned int *)t20) = t26;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t30, t25, (unsigned char)0, 9);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3664);
    t3 = (t0 + 2456U);
    t4 = (t0 + 2736U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB8;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_2959425952_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2959425952_2372691052_p_0,(void *)work_a_2959425952_2372691052_p_1};
	xsi_register_didat("work_a_2959425952_2372691052", "isim/TB_ROM_isim_beh.exe.sim/work/a_2959425952_2372691052.didat");
	xsi_register_executes(pe);
}
