/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include "mtk_cpufreq_struct.h"
#include "mtk_cpufreq_config.h"


/* G75 */
/* for DVFS OPP table L */
#define CPU_DVFS_FREQ0_LL_G75 	2100000		/* KHz */
#define CPU_DVFS_FREQ1_LL_G75 	1950000		/* KHz */
#define CPU_DVFS_FREQ2_LL_G75 	1900000		/* KHz */
#define CPU_DVFS_FREQ3_LL_G75 	1850000		/* KHz */
#define CPU_DVFS_FREQ4_LL_G75 	1800000		/* KHz */
#define CPU_DVFS_FREQ5_LL_G75 	1700000		/* KHz */
#define CPU_DVFS_FREQ6_LL_G75 	1625000		/* KHz */
#define CPU_DVFS_FREQ7_LL_G75 	1500000		/* KHz */
#define CPU_DVFS_FREQ8_LL_G75 	1375000		/* KHz */
#define CPU_DVFS_FREQ9_LL_G75 	1275000		/* KHz */
#define CPU_DVFS_FREQ10_LL_G75	1175000		/* KHz */
#define CPU_DVFS_FREQ11_LL_G75	1075000		/* KHz */
#define CPU_DVFS_FREQ12_LL_G75	974000		/* KHz */
#define CPU_DVFS_FREQ13_LL_G75	875000		/* KHz */
#define CPU_DVFS_FREQ14_LL_G75	774000		/* KHz */
#define CPU_DVFS_FREQ15_LL_G75	500000		/* KHz */

/* for DVFS OPP table B */
#define CPU_DVFS_FREQ0_L_G75		2300000		/* KHz */
#define CPU_DVFS_FREQ1_L_G75		2133000		/* KHz */
#define CPU_DVFS_FREQ2_L_G75		2066000		/* KHz */
#define CPU_DVFS_FREQ3_L_G75		2000000		/* KHz */
#define CPU_DVFS_FREQ4_L_G75		1933000		/* KHz */
#define CPU_DVFS_FREQ5_L_G75		1866000		/* KHz */
#define CPU_DVFS_FREQ6_L_G75		1800000		/* KHz */
#define CPU_DVFS_FREQ7_L_G75		1681000		/* KHz */
#define CPU_DVFS_FREQ8_L_G75		1532000		/* KHz */
#define CPU_DVFS_FREQ9_L_G75		1473000		/* KHz */
#define CPU_DVFS_FREQ10_L_G75		1384000		/* KHz */
#define CPU_DVFS_FREQ11_L_G75		1295000		/* KHz */
#define CPU_DVFS_FREQ12_L_G75		1176000		/* KHz */
#define CPU_DVFS_FREQ13_L_G75		1057000		/* KHz */
#define CPU_DVFS_FREQ14_L_G75		 939000		/* KHz */
#define CPU_DVFS_FREQ15_L_G75		 850000		/* KHz */

/* for DVFS OPP table CCI */
#define CPU_DVFS_FREQ0_CCI_G75	1396000		/* KHz */
#define CPU_DVFS_FREQ1_CCI_G75	1343000		/* KHz */
#define CPU_DVFS_FREQ2_CCI_G75	1290000		/* KHz */
#define CPU_DVFS_FREQ3_CCI_G75	1263000		/* KHz */
#define CPU_DVFS_FREQ4_CCI_G75	1187000		/* KHz */
#define CPU_DVFS_FREQ5_CCI_G75	1120000		/* KHz */
#define CPU_DVFS_FREQ6_CCI_G75	1049000		/* KHz */
#define CPU_DVFS_FREQ7_CCI_G75	997000		/* KHz */
#define CPU_DVFS_FREQ8_CCI_G75	944000		/* KHz */
#define CPU_DVFS_FREQ9_CCI_G75	856000		/* KHz */
#define CPU_DVFS_FREQ10_CCI_G75	821000		/* KHz */
#define CPU_DVFS_FREQ11_CCI_G75	751000		/* KHz */
#define CPU_DVFS_FREQ12_CCI_G75	680000		/* KHz */
#define CPU_DVFS_FREQ13_CCI_G75	610000		/* KHz */
#define CPU_DVFS_FREQ14_CCI_G75	558000		/* KHz */
#define CPU_DVFS_FREQ15_CCI_G75	500000		/* KHz */

/* for DVFS OPP table L */
#define CPU_DVFS_VOLT0_VPROC1_G75	108125		/* 10uV */
#define CPU_DVFS_VOLT1_VPROC1_G75	105625		/* 10uV */
#define CPU_DVFS_VOLT2_VPROC1_G75	103125		/* 10uV */
#define CPU_DVFS_VOLT3_VPROC1_G75	100625		/* 10uV */
#define CPU_DVFS_VOLT4_VPROC1_G75	 85625		/* 10uV */
#define CPU_DVFS_VOLT5_VPROC1_G75	 84375		/* 10uV */
#define CPU_DVFS_VOLT6_VPROC1_G75	 83125		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC1_G75	 80000		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC1_G75	 77500		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC1_G75	 76250		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC1_G75	 74375		/* 10uV */
#define CPU_DVFS_VOLT11_VPROC1_G75	 73125		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC1_G75	 71875		/* 10uV */
#define CPU_DVFS_VOLT13_VPROC1_G75	 70000		/* 10uV */
#define CPU_DVFS_VOLT14_VPROC1_G75	 67500		/* 10uV */
#define CPU_DVFS_VOLT15_VPROC1_G75	 65000		/* 10uV */

/* for DVFS OPP table B */
#define CPU_DVFS_VOLT0_VPROC2_G75	 111375		/* 10uV */
#define CPU_DVFS_VOLT1_VPROC2_G75	 110125		/* 10uV */
#define CPU_DVFS_VOLT2_VPROC2_G75	 108250		/* 10uV */
#define CPU_DVFS_VOLT3_VPROC2_G75	 107000		/* 10uV */
#define CPU_DVFS_VOLT4_VPROC2_G75	103125		/* 10uV */
#define CPU_DVFS_VOLT5_VPROC2_G75	100000		/* 10uV */
#define CPU_DVFS_VOLT6_VPROC2_G75	 96875		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC2_G75	 93125		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC2_G75	 90000		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC2_G75	 86875		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC2_G75	 84375		/* 10uV */
#define CPU_DVFS_VOLT11_VPROC2_G75	 80000		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC2_G75	 76875		/* 10uV */
#define CPU_DVFS_VOLT13_VPROC2_G75	 73125		/* 10uV */
#define CPU_DVFS_VOLT14_VPROC2_G75	 70000		/* 10uV */
#define CPU_DVFS_VOLT15_VPROC2_G75	 67500		/* 10uV */


/* for DVFS OPP table CCI */
#define CPU_DVFS_VOLT0_VPROC3_G75	108125		/* 10uV */
#define CPU_DVFS_VOLT1_VPROC3_G75	105000		/* 10uV */
#define CPU_DVFS_VOLT2_VPROC3_G75	101875		/* 10uV */
#define CPU_DVFS_VOLT3_VPROC3_G75	100000		/* 10uV */
#define CPU_DVFS_VOLT4_VPROC3_G75	 83750		/* 10uV */
#define CPU_DVFS_VOLT5_VPROC3_G75	 81875		/* 10uV */
#define CPU_DVFS_VOLT6_VPROC3_G75	 80000		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC3_G75	 78125		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC3_G75	 76250		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC3_G75	 75000		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC3_G75	 73125		/* 10uV */
#define CPU_DVFS_VOLT11_VPROC3_G75	 71875		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC3_G75	 70625		/* 10uV */
#define CPU_DVFS_VOLT13_VPROC3_G75	 69375		/* 10uV */
#define CPU_DVFS_VOLT14_VPROC3_G75	 67500		/* 10uV */
#define CPU_DVFS_VOLT15_VPROC3_G75	 65000		/* 10uV */

/* DVFS OPP table */
#define OPP_TBL(cluster, seg, lv, vol)	\
static struct mt_cpu_freq_info opp_tbl_##cluster##_e##lv##_0[] = {	\
	OP                                                              \
(CPU_DVFS_FREQ0_##cluster##_##seg, CPU_DVFS_VOLT0_VPROC##vol##_##seg),	\
	OP                                                              \
(CPU_DVFS_FREQ1_##cluster##_##seg, CPU_DVFS_VOLT1_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ2_##cluster##_##seg, CPU_DVFS_VOLT2_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ3_##cluster##_##seg, CPU_DVFS_VOLT3_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ4_##cluster##_##seg, CPU_DVFS_VOLT4_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ5_##cluster##_##seg, CPU_DVFS_VOLT5_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ6_##cluster##_##seg, CPU_DVFS_VOLT6_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ7_##cluster##_##seg, CPU_DVFS_VOLT7_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ8_##cluster##_##seg, CPU_DVFS_VOLT8_VPROC##vol##_##seg),	\
	OP                                                               \
(CPU_DVFS_FREQ9_##cluster##_##seg, CPU_DVFS_VOLT9_VPROC##vol##_##seg),	\
	OP                                                                \
(CPU_DVFS_FREQ10_##cluster##_##seg, CPU_DVFS_VOLT10_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ11_##cluster##_##seg, CPU_DVFS_VOLT11_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ12_##cluster##_##seg, CPU_DVFS_VOLT12_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ13_##cluster##_##seg, CPU_DVFS_VOLT13_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ14_##cluster##_##seg, CPU_DVFS_VOLT14_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ15_##cluster##_##seg, CPU_DVFS_VOLT15_VPROC##vol##_##seg), \
}

/* G75 */
OPP_TBL(LL, G75, 6, 1);
OPP_TBL(L, G75, 6, 2);
OPP_TBL(CCI, G75, 6, 3);

struct opp_tbl_info opp_tbls[NR_MT_CPU_DVFS][NUM_CPU_LEVEL] = {
	/* LL */
	{

		[CPU_LEVEL_6] = { opp_tbl_LL_e6_0,
				ARRAY_SIZE(opp_tbl_LL_e6_0) },
	},
	/* L */
	{

		[CPU_LEVEL_6] = { opp_tbl_L_e6_0,
				ARRAY_SIZE(opp_tbl_L_e6_0) },
	},
	/* CCI */
	{

		[CPU_LEVEL_6] = { opp_tbl_CCI_e6_0,
				ARRAY_SIZE(opp_tbl_CCI_e6_0) },
	},
};


static struct mt_cpu_freq_method opp_tbl_method_LL_G75[] = {
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_L_G75[] = {
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_CCI_G75[] = {
	/* POS,	CLK */
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
};

struct opp_tbl_m_info opp_tbls_m[NR_MT_CPU_DVFS][NUM_CPU_LEVEL] = {
	/* LL */
	{
		
		[CPU_LEVEL_6] = { opp_tbl_method_LL_G75 },
	},
	/* L */
	{
		
		[CPU_LEVEL_6] = { opp_tbl_method_L_G75 },
	},
	/* CCI */
	{
	
		[CPU_LEVEL_6] = { opp_tbl_method_CCI_G75 },
	},
};

