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
static const char *ng0 = "D:/cbradford/RegisterSet-2.0/GEL_CAPTAN/throttle.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0082425283_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(36, ng0);

LAB3:    t1 = xsi_get_transient_memory(27U);
    memset(t1, 0, 27U);
    t2 = t1;
    memset(t2, (unsigned char)2, 27U);
    t3 = (t0 + 3480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 27U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0082425283_3212880686_p_1(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(27U);
    memset(t1, 0, 27U);
    t2 = t1;
    memset(t2, (unsigned char)2, 27U);
    t7 = (t0 + 3544);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 27U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3608);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 3400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(41, ng0);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t7 = (t0 + 5448U);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t6, t8, t7, 1);
    t10 = (t6 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (27U != t12);
    if (t13 == 1)
        goto LAB8;

LAB9:    t14 = (t0 + 3544);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 27U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5448U);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t7 = (t0 + 5464U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t8, t7);
    if (t3 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 3608);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB11:    goto LAB6;

LAB8:    xsi_size_not_matching(27U, t12, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    t9 = (t0 + 3608);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB11;

}


extern void work_a_0082425283_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0082425283_3212880686_p_0,(void *)work_a_0082425283_3212880686_p_1};
	xsi_register_didat("work_a_0082425283_3212880686", "isim/throttle_tb_isim_beh.exe.sim/work/a_0082425283_3212880686.didat");
	xsi_register_executes(pe);
}
