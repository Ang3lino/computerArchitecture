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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_1759744759;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *WORK_P_4024463346;
char *IEEE_P_1242562249;
char *WORK_P_0450891074;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_0450891074_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_4024463346_init();
    work_p_1759744759_init();
    ieee_p_1242562249_init();
    work_a_0188985259_3212880686_init();
    work_a_1985133471_1446275585_init();
    work_a_3353191842_1446275585_init();
    work_a_3853510154_3212880686_init();
    work_a_3222946569_1446275585_init();
    work_a_2564782701_1446275585_init();
    work_a_2351365864_2791128713_init();
    work_a_2876187827_2372691052_init();
    work_a_3237701279_2647518972_init();
    work_a_3772128646_1446275585_init();
    work_a_1774854872_3212880686_init();
    work_a_0508150645_2372691052_init();


    xsi_register_tops("work_a_0508150645_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_1759744759 = xsi_get_engine_memory("work_p_1759744759");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_4024463346 = xsi_get_engine_memory("work_p_4024463346");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_0450891074 = xsi_get_engine_memory("work_p_0450891074");

    return xsi_run_simulation(argc, argv);

}
