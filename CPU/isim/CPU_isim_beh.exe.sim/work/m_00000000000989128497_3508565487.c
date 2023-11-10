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
static const char *ng0 = "C:/Users/MM/Desktop/CPU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void Always_41_0(char *t0)
{
    char t13[8];
    char t39[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB12:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB13:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(42, ng0);

LAB8:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2384);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 11);
    goto LAB7;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB14:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB13;

LAB15:    xsi_set_current_line(46, ng0);

LAB18:    xsi_set_current_line(47, ng0);
    t27 = (t0 + 1344U);
    t28 = *((char **)t27);
    t27 = (t28 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB62;

LAB60:    if (*((unsigned int *)t2) == 0)
        goto LAB59;

LAB61:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB62:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB64;

LAB63:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB21:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    goto LAB17;

LAB19:    xsi_set_current_line(47, ng0);

LAB22:    xsi_set_current_line(49, ng0);

LAB23:    xsi_set_current_line(51, ng0);
    t34 = (t0 + 1664U);
    t35 = *((char **)t34);

LAB24:    t34 = ((char*)((ng2)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t34, 3);
    if (t36 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng3)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t36 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t36 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng5)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t36 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng6)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t36 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng7)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t36 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng8)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t36 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng9)));
    t36 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t36 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB21;

LAB25:    xsi_set_current_line(53, ng0);
    t37 = (t0 + 1824U);
    t38 = *((char **)t37);
    memcpy(t39, t38, 8);
    t37 = (t0 + 2384);
    xsi_vlogvar_assign_value(t37, t39, 0, 0, 11);
    goto LAB41;

LAB27:    xsi_set_current_line(54, ng0);

LAB42:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 1824U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 11, t5, 11, t12, 5);
    t11 = (t0 + 2384);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 11);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    goto LAB41;

LAB29:    xsi_set_current_line(58, ng0);

LAB43:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 1824U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 11, t5, 11, t12, 5);
    t11 = (t0 + 2384);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 11);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    goto LAB41;

LAB31:    xsi_set_current_line(62, ng0);

LAB44:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 1824U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 11, t5, 11, t12, 5);
    t11 = (t0 + 2384);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 11);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    goto LAB41;

LAB33:    xsi_set_current_line(66, ng0);

LAB45:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t39, 0, 8);
    t11 = (t39 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    *((unsigned int *)t39) = t7;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB47;

LAB46:    t15 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t15 & 2047U);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 2047U);
    t27 = (t0 + 1824U);
    t28 = *((char **)t27);
    memset(t40, 0, 8);
    t27 = (t40 + 4);
    t34 = (t28 + 4);
    t17 = *((unsigned int *)t28);
    t18 = (~(t17));
    *((unsigned int *)t40) = t18;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t34) != 0)
        goto LAB49;

LAB48:    t23 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t23 & 2047U);
    t24 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t24 & 2047U);
    t25 = *((unsigned int *)t39);
    t26 = *((unsigned int *)t40);
    t29 = (t25 | t26);
    *((unsigned int *)t41) = t29;
    t37 = (t39 + 4);
    t38 = (t40 + 4);
    t42 = (t41 + 4);
    t30 = *((unsigned int *)t37);
    t31 = *((unsigned int *)t38);
    t32 = (t30 | t31);
    *((unsigned int *)t42) = t32;
    t33 = *((unsigned int *)t42);
    t43 = (t33 != 0);
    if (t43 == 1)
        goto LAB50;

LAB51:
LAB52:    memset(t13, 0, 8);
    t60 = (t13 + 4);
    t61 = (t41 + 4);
    t62 = *((unsigned int *)t41);
    t63 = (~(t62));
    *((unsigned int *)t13) = t63;
    *((unsigned int *)t60) = 0;
    if (*((unsigned int *)t61) != 0)
        goto LAB54;

LAB53:    t68 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t68 & 2047U);
    t69 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t69 & 2047U);
    t70 = (t0 + 2384);
    xsi_vlogvar_assign_value(t70, t13, 0, 0, 11);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    goto LAB41;

LAB35:    xsi_set_current_line(70, ng0);

LAB55:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    *((unsigned int *)t13) = t7;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB57;

LAB56:    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 2047U);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 2047U);
    t27 = (t0 + 2384);
    xsi_vlogvar_assign_value(t27, t13, 0, 0, 11);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    goto LAB41;

LAB37:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2224);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 11);
    goto LAB41;

LAB39:    xsi_set_current_line(75, ng0);

LAB58:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 11);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    goto LAB41;

LAB47:    t8 = *((unsigned int *)t39);
    t9 = *((unsigned int *)t12);
    *((unsigned int *)t39) = (t8 | t9);
    t10 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t10 | t14);
    goto LAB46;

LAB49:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t34);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = *((unsigned int *)t27);
    t22 = *((unsigned int *)t34);
    *((unsigned int *)t27) = (t21 | t22);
    goto LAB48;

LAB50:    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t44 | t45);
    t46 = (t39 + 4);
    t47 = (t40 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (~(t48));
    t50 = *((unsigned int *)t39);
    t51 = (t50 & t49);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t40);
    t55 = (t54 & t53);
    t56 = (~(t51));
    t57 = (~(t55));
    t58 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t58 & t56);
    t59 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t59 & t57);
    goto LAB52;

LAB54:    t64 = *((unsigned int *)t13);
    t65 = *((unsigned int *)t61);
    *((unsigned int *)t13) = (t64 | t65);
    t66 = *((unsigned int *)t60);
    t67 = *((unsigned int *)t61);
    *((unsigned int *)t60) = (t66 | t67);
    goto LAB53;

LAB57:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t8 | t9);
    t10 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t10 | t14);
    goto LAB56;

LAB59:    *((unsigned int *)t13) = 1;
    goto LAB62;

LAB64:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB63;

LAB65:    xsi_set_current_line(83, ng0);

LAB68:    xsi_set_current_line(84, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 2384);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 11);
    goto LAB67;

}


extern void work_m_00000000000989128497_3508565487_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000000989128497_3508565487", "isim/CPU_isim_beh.exe.sim/work/m_00000000000989128497_3508565487.didat");
	xsi_register_executes(pe);
}
