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
static const char *ng0 = "C:/Users/Collin/Fermilab/Main Project 1/GEL_CAPTAN/data_send.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1452692442_3212880686_p_0(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t2 = t1;
    memset(t2, (unsigned char)2, 64U);
    t5 = (t0 + 4504);
    t8 = (t5 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 64U);
    xsi_driver_first_trans_fast(t5);

LAB3:    t1 = (t0 + 4376);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2152U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4568);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1152U);
    t11 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t11 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(44, ng0);
    t13 = (t0 + 1832U);
    t14 = *((char **)t13);
    t13 = (t0 + 7096U);
    t15 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t14, t13, 1);
    t16 = (t12 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (64U != t18);
    if (t19 == 1)
        goto LAB14;

LAB15:    t20 = (t0 + 4504);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 64U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 4568);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB14:    xsi_size_not_matching(64U, t18, 0);
    goto LAB15;

}

static void work_a_1452692442_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t7 = (t0 + 4632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 3U);
    xsi_driver_first_trans_fast(t7);

LAB3:    t1 = (t0 + 4392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t7 = (t0 + 7112U);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t6, t8, t7, 1);
    t10 = (t6 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (3U != t12);
    if (t13 == 1)
        goto LAB8;

LAB9:    t14 = (t0 + 4632);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 3U);
    xsi_driver_first_trans_fast(t14);
    goto LAB6;

LAB8:    xsi_size_not_matching(3U, t12, 0);
    goto LAB9;

}

static void work_a_1452692442_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4696);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 4408);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1452692442_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(67, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 64U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4424);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1452692442_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1452692442_3212880686_p_0,(void *)work_a_1452692442_3212880686_p_1,(void *)work_a_1452692442_3212880686_p_2,(void *)work_a_1452692442_3212880686_p_3};
	xsi_register_didat("work_a_1452692442_3212880686", "isim/data_send_isim_beh.exe.sim/work/a_1452692442_3212880686.didat");
	xsi_register_executes(pe);
}
