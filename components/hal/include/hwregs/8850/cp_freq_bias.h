/* Copyright (C) 2018 RDA Technologies Limited and/or its affiliates("RDA").
 * All rights reserved.
 *
 * This software is supplied "AS IS" without any warranties.
 * RDA assumes no responsibility or liability for the use of the software,
 * conveys no license or title under any patent, copyright, or mask work
 * right to the product. RDA reserves the right to make changes in the
 * software without notification.  RDA also make no representation or
 * warranty that such application will be suitable for the specified use
 * without further testing or modification.
 */

#ifndef _CP_FREQ_BIAS_H_
#define _CP_FREQ_BIAS_H_

// Auto generated by dtools(see dtools.txt for its version).
// Don't edit it manually!

#define REG_CP_FREQ_BIAS_BASE (0x12080000)

typedef volatile struct
{
    uint32_t raw_int_sts;              // 0x00000000
    uint32_t int_en;                   // 0x00000004
    uint32_t masked_int_sts;           // 0x00000008
    uint32_t int_clr;                  // 0x0000000c
    uint32_t freq_bias_ctrl_0;         // 0x00000010
    uint32_t freq_bias_ctrl_1;         // 0x00000014
    uint32_t freq_bias_ctrl_2;         // 0x00000018
    uint32_t freq_bias_ctrl_3;         // 0x0000001c
    uint32_t freq_bias_ctrl_4;         // 0x00000020
    uint32_t freq_bias_ctrl_5;         // 0x00000024
    uint32_t freq_bias_ctrl_6;         // 0x00000028
    uint32_t freq_bias_ctrl_7;         // 0x0000002c
    uint32_t freq_bias_ctrl_8;         // 0x00000030
    uint32_t freq_bias_ctrl_9;         // 0x00000034
    uint32_t freq_bias_soft_val;       // 0x00000038
    uint32_t freq_bias_upd_cnter;      // 0x0000003c
    uint32_t freq_bias_temp_upd_cnter; // 0x00000040
    uint32_t freq_bias_ctrl_10;        // 0x00000044
    uint32_t freq_bias_ctrl_11;        // 0x00000048
    uint32_t freq_bias_ctrl_12;        // 0x0000004c
    uint32_t freq_bias_ctrl_13;        // 0x00000050
    uint32_t freq_bias_ctrl_14;        // 0x00000054
    uint32_t __88[10];                 // 0x00000058
    uint32_t freq_bias_status0;        // 0x00000080
    uint32_t freq_bias_status1;        // 0x00000084
    uint32_t freq_bias_status2;        // 0x00000088
    uint32_t freq_bias_status3;        // 0x0000008c
    uint32_t freq_bias_status4;        // 0x00000090
    uint32_t freq_bias_ctrl_15;        // 0x00000094
    uint32_t freq_bias_ctrl_16;        // 0x00000098
    uint32_t freq_bias_ctrl_17;        // 0x0000009c
    uint32_t freq_bias_ctrl_18;        // 0x000000a0
    uint32_t freq_bias_ctrl_19;        // 0x000000a4
    uint32_t freq_bias_ctrl_20;        // 0x000000a8
    uint32_t freq_bias_ctrl_21;        // 0x000000ac
    uint32_t freq_bias_ctrl_22;        // 0x000000b0
    uint32_t freq_bias_ctrl_23;        // 0x000000b4
    uint32_t freq_bias_ctrl_24;        // 0x000000b8
    uint32_t freq_bias_ctrl_25;        // 0x000000bc
    uint32_t freq_bias_ctrl_26;        // 0x000000c0
    uint32_t freq_bias_ctrl_27;        // 0x000000c4
    uint32_t freq_bias_ctrl_28;        // 0x000000c8
    uint32_t freq_bias_ctrl_29;        // 0x000000cc
    uint32_t freq_bias_ctrl_30;        // 0x000000d0
    uint32_t freq_bias_ctrl_31;        // 0x000000d4
    uint32_t freq_bias_ctrl_32;        // 0x000000d8
    uint32_t freq_bias_ctrl_33;        // 0x000000dc
    uint32_t freq_bias_rpt0;           // 0x000000e0
    uint32_t freq_bias_rpt1;           // 0x000000e4
    uint32_t freq_bias_rpt2;           // 0x000000e8
    uint32_t freq_bias_rpt3;           // 0x000000ec
    uint32_t freq_bias_rpt4;           // 0x000000f0
} HWP_CP_FREQ_BIAS_T;

#define hwp_cpFreqBias ((HWP_CP_FREQ_BIAS_T *)REG_ACCESS_ADDRESS(REG_CP_FREQ_BIAS_BASE))

// freq_bias_ctrl_0
typedef union {
    uint32_t v;
    struct
    {
        uint32_t cal_en_temp : 1;         // [0]
        uint32_t osc_cal_en_temp : 1;     // [1]
        uint32_t __2_2 : 1;               // [2]
        uint32_t thm_adc_dump_en : 1;     // [3]
        uint32_t filter_en_temp : 1;      // [4]
        uint32_t osc_temp_filter_en : 1;  // [5]
        uint32_t __7_6 : 2;               // [7:6]
        uint32_t edge_sel_temp : 1;       // [8]
        uint32_t srst_inter_thm : 1;      // [9]
        uint32_t osc_edge_sel_temp : 1;   // [10]
        uint32_t srst_osc_inter_thm : 1;  // [11]
        uint32_t freq_bias_src_mode : 1;  // [12]
        uint32_t freq_bias_mode1 : 1;     // [13]
        uint32_t switch_enb : 1;          // [14]
        uint32_t input_flag : 1;          // [15]
        uint32_t temp_comp_shift : 4;     // [19:16]
        uint32_t osc_temp_comp_shift : 4; // [23:20]
        uint32_t freq_bias_mode : 1;      // [24]
        uint32_t osc_src_mode : 1;        // [25]
        uint32_t ext_chan_sel_mode : 1;   // [26]
        uint32_t ext_chan_sel_sw : 1;     // [27]
        uint32_t frac_freq_div_en : 1;    // [28]
        uint32_t __31_29 : 3;             // [31:29]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_0_T;

// freq_bias_ctrl_1
typedef union {
    uint32_t v;
    struct
    {
        uint32_t intergration_len_temp : 20; // [19:0]
        uint32_t __31_20 : 12;               // [31:20]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_1_T;

// freq_bias_ctrl_2
typedef union {
    uint32_t v;
    struct
    {
        uint32_t c0_temp : 16; // [15:0]
        uint32_t __31_16 : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_2_T;

// freq_bias_ctrl_3
typedef union {
    uint32_t v;
    struct
    {
        uint32_t c1_temp : 16; // [15:0]
        uint32_t __31_16 : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_3_T;

// freq_bias_ctrl_4
typedef union {
    uint32_t v;
    struct
    {
        uint32_t c2_temp : 16; // [15:0]
        uint32_t __31_16 : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_4_T;

// freq_bias_ctrl_5
typedef union {
    uint32_t v;
    struct
    {
        uint32_t c3_temp : 16; // [15:0]
        uint32_t __31_16 : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_5_T;

// freq_bias_ctrl_7
typedef union {
    uint32_t v;
    struct
    {
        uint32_t ext_conf_en : 1;            // [0]
        uint32_t ext_conf_sync_order : 1;    // [1]
        uint32_t ext_conf_clk_init_val : 1;  // [2]
        uint32_t __3_3 : 1;                  // [3]
        uint32_t ext_conf_best_pos : 5;      // [8:4]
        uint32_t __11_9 : 3;                 // [11:9]
        uint32_t ext_conf_first_pls_pos : 4; // [15:12]
        uint32_t ext_conf_cnter_max : 5;     // [20:16]
        uint32_t __23_21 : 3;                // [23:21]
        uint32_t ext_conf_clk_init_pos : 4;  // [27:24]
        uint32_t ext_conf_clk_inv_pos : 4;   // [31:28]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_7_T;

// freq_bias_ctrl_8
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_temp_offset : 20; // [19:0]
        uint32_t __31_20 : 12;         // [31:20]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_8_T;

// freq_bias_ctrl_9
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_c0_temp : 16; // [15:0]
        uint32_t __31_16 : 16;     // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_9_T;

// freq_bias_soft_val
typedef union {
    uint32_t v;
    struct
    {
        uint32_t freq_bias_soft_val : 26;    // [25:0]
        uint32_t __30_26 : 5;                // [30:26]
        uint32_t freq_bias_soft_val_upd : 1; // [31]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_SOFT_VAL_T;

// freq_bias_ctrl_10
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_c1_temp : 16; // [15:0]
        uint32_t __31_16 : 16;     // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_10_T;

// freq_bias_ctrl_11
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_c2_temp : 16; // [15:0]
        uint32_t __31_16 : 16;     // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_11_T;

// freq_bias_ctrl_12
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_c3_temp : 16; // [15:0]
        uint32_t __31_16 : 16;     // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_12_T;

// freq_bias_ctrl_13
typedef union {
    uint32_t v;
    struct
    {
        uint32_t adc_delay_num : 20; // [19:0]
        uint32_t tsx_data_num : 6;   // [25:20]
        uint32_t osc_data_num : 6;   // [31:26]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_13_T;

// freq_bias_ctrl_14
typedef union {
    uint32_t v;
    struct
    {
        uint32_t ext_conf_frac_en : 1;         // [0]
        uint32_t ext_conf_frac_sync_order : 1; // [1]
        uint32_t ext_conf_frac_clk_sel : 1;    // [2]
        uint32_t __3_3 : 1;                    // [3]
        uint32_t ext_conf_frac_cnter_max : 4;  // [7:4]
        uint32_t ext_conf_first_pls_pos : 4;   // [11:8]
        uint32_t ext_conf_toggle_pos : 4;      // [15:12]
        uint32_t ext_conf_toggle_neg : 4;      // [19:16]
        uint32_t __31_20 : 12;                 // [31:20]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_14_T;

// freq_bias_status0
typedef union {
    uint32_t v;
    struct
    {
        uint32_t freq_bias : 26;        // [25:0], read only
        uint32_t __30_26 : 5;           // [30:26]
        uint32_t freq_raw_bias_upd : 1; // [31], read only
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_STATUS0_T;

// freq_bias_status1
typedef union {
    uint32_t v;
    struct
    {
        uint32_t freq_bias_temp : 20;       // [19:0], read only
        uint32_t __30_20 : 11;              // [30:20]
        uint32_t freq_bias_integer_upd : 1; // [31], read only
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_STATUS1_T;

// freq_bias_status2
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_freq_bias : 26;        // [25:0], read only
        uint32_t __30_26 : 5;               // [30:26]
        uint32_t osc_freq_raw_bias_upd : 1; // [31], read only
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_STATUS2_T;

// freq_bias_status3
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_freq_bias_temp : 20;       // [19:0], read only
        uint32_t __30_20 : 11;                  // [30:20]
        uint32_t osc_freq_bias_integer_upd : 1; // [31], read only
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_STATUS3_T;

// freq_bias_status4
typedef union {
    uint32_t v;
    struct
    {
        uint32_t freq_bias_sum : 26;    // [25:0], read only
        uint32_t __30_26 : 5;           // [30:26]
        uint32_t freq_bias_sum_upd : 1; // [31], read only
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_STATUS4_T;

// freq_bias_ctrl_15
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_alpha : 16;       // [15:0]
        uint32_t osc_rate_deltat : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_15_T;

// freq_bias_ctrl_16
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_t2reset_cnt_clr : 1; // [0]
        uint32_t osc_t2reset_num : 6;     // [6:1]
        uint32_t osc_freq_bias_sel : 1;   // [7]
        uint32_t __31_8 : 24;             // [31:8]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_16_T;

// freq_bias_ctrl_17
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_alpha : 16;       // [15:0]
        uint32_t tsx_rate_deltat : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_17_T;

// freq_bias_ctrl_18
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_t2reset_cnt_clr : 1; // [0]
        uint32_t __1_1 : 1;               // [1]
        uint32_t tsx_smth_coef : 5;       // [6:2]
        uint32_t tsx_ratehys_coef : 12;   // [18:7]
        uint32_t tsx_fcalth_coef : 12;    // [30:19]
        uint32_t tsx_freq_bias_sel : 1;   // [31]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_18_T;

// freq_bias_ctrl_19
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_fcalth_osft : 26; // [25:0]
        uint32_t tsx_t2reset_num : 6;  // [31:26]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_19_T;

// freq_bias_ctrl_20
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_age_th : 16;     // [15:0]
        uint32_t tsx_age_th_inv : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_20_T;

// freq_bias_ctrl_21
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_ratehys_ofst : 16;    // [15:0]
        uint32_t tsx_maxtemp_rate_th : 16; // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_21_T;

// freq_bias_ctrl_32
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_rate_tab_val20 : 16; // [15:0]
        uint32_t __31_16 : 16;            // [31:16]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_32_T;

// freq_bias_ctrl_33
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_temp_th : 20; // [19:0]
        uint32_t tsx_smth_sft : 3; // [22:20]
        uint32_t __31_23 : 9;      // [31:23]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_CTRL_33_T;

// freq_bias_rpt0
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_temp : 20; // [19:0], read only
        uint32_t __31_20 : 12;  // [31:20]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_RPT0_T;

// freq_bias_rpt1
typedef union {
    uint32_t v;
    struct
    {
        uint32_t osc_temp2 : 28; // [27:0], read only
        uint32_t __31_28 : 4;    // [31:28]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_RPT1_T;

// freq_bias_rpt2
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_temp : 20; // [19:0], read only
        uint32_t __31_20 : 12;  // [31:20]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_RPT2_T;

// freq_bias_rpt3
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_temp2 : 28; // [27:0], read only
        uint32_t __31_28 : 4;    // [31:28]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_RPT3_T;

// freq_bias_rpt4
typedef union {
    uint32_t v;
    struct
    {
        uint32_t tsx_fcal : 26; // [25:0], read only
        uint32_t __31_26 : 6;   // [31:26]
    } b;
} REG_CP_FREQ_BIAS_FREQ_BIAS_RPT4_T;

// freq_bias_ctrl_0
#define CP_FREQ_BIAS_CAL_EN_TEMP (1 << 0)
#define CP_FREQ_BIAS_OSC_CAL_EN_TEMP (1 << 1)
#define CP_FREQ_BIAS_THM_ADC_DUMP_EN (1 << 3)
#define CP_FREQ_BIAS_FILTER_EN_TEMP (1 << 4)
#define CP_FREQ_BIAS_OSC_TEMP_FILTER_EN (1 << 5)
#define CP_FREQ_BIAS_EDGE_SEL_TEMP (1 << 8)
#define CP_FREQ_BIAS_SRST_INTER_THM (1 << 9)
#define CP_FREQ_BIAS_OSC_EDGE_SEL_TEMP (1 << 10)
#define CP_FREQ_BIAS_SRST_OSC_INTER_THM (1 << 11)
#define CP_FREQ_BIAS_FREQ_BIAS_SRC_MODE (1 << 12)
#define CP_FREQ_BIAS_FREQ_BIAS_MODE1 (1 << 13)
#define CP_FREQ_BIAS_SWITCH_ENB (1 << 14)
#define CP_FREQ_BIAS_INPUT_FLAG (1 << 15)
#define CP_FREQ_BIAS_TEMP_COMP_SHIFT(n) (((n)&0xf) << 16)
#define CP_FREQ_BIAS_OSC_TEMP_COMP_SHIFT(n) (((n)&0xf) << 20)
#define CP_FREQ_BIAS_FREQ_BIAS_MODE (1 << 24)
#define CP_FREQ_BIAS_OSC_SRC_MODE (1 << 25)
#define CP_FREQ_BIAS_EXT_CHAN_SEL_MODE (1 << 26)
#define CP_FREQ_BIAS_EXT_CHAN_SEL_SW (1 << 27)
#define CP_FREQ_BIAS_FRAC_FREQ_DIV_EN (1 << 28)

// freq_bias_ctrl_1
#define CP_FREQ_BIAS_INTERGRATION_LEN_TEMP(n) (((n)&0xfffff) << 0)

// freq_bias_ctrl_2
#define CP_FREQ_BIAS_C0_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_3
#define CP_FREQ_BIAS_C1_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_4
#define CP_FREQ_BIAS_C2_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_5
#define CP_FREQ_BIAS_C3_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_7
#define CP_FREQ_BIAS_EXT_CONF_EN (1 << 0)
#define CP_FREQ_BIAS_EXT_CONF_SYNC_ORDER (1 << 1)
#define CP_FREQ_BIAS_EXT_CONF_CLK_INIT_VAL (1 << 2)
#define CP_FREQ_BIAS_EXT_CONF_BEST_POS(n) (((n)&0x1f) << 4)
#define CP_FREQ_BIAS_FREQ_BIAS_CTRL_7_EXT_CONF_FIRST_PLS_POS(n) (((n)&0xf) << 12)
#define CP_FREQ_BIAS_EXT_CONF_CNTER_MAX(n) (((n)&0x1f) << 16)
#define CP_FREQ_BIAS_EXT_CONF_CLK_INIT_POS(n) (((n)&0xf) << 24)
#define CP_FREQ_BIAS_EXT_CONF_CLK_INV_POS(n) (((n)&0xf) << 28)

// freq_bias_ctrl_8
#define CP_FREQ_BIAS_OSC_TEMP_OFFSET(n) (((n)&0xfffff) << 0)

// freq_bias_ctrl_9
#define CP_FREQ_BIAS_OSC_C0_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_soft_val
#define CP_FREQ_BIAS_FREQ_BIAS_SOFT_VAL(n) (((n)&0x3ffffff) << 0)
#define CP_FREQ_BIAS_FREQ_BIAS_SOFT_VAL_UPD (1 << 31)

// freq_bias_ctrl_10
#define CP_FREQ_BIAS_OSC_C1_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_11
#define CP_FREQ_BIAS_OSC_C2_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_12
#define CP_FREQ_BIAS_OSC_C3_TEMP(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_13
#define CP_FREQ_BIAS_ADC_DELAY_NUM(n) (((n)&0xfffff) << 0)
#define CP_FREQ_BIAS_TSX_DATA_NUM(n) (((n)&0x3f) << 20)
#define CP_FREQ_BIAS_OSC_DATA_NUM(n) (((n)&0x3f) << 26)

// freq_bias_ctrl_14
#define CP_FREQ_BIAS_EXT_CONF_FRAC_EN (1 << 0)
#define CP_FREQ_BIAS_EXT_CONF_FRAC_SYNC_ORDER (1 << 1)
#define CP_FREQ_BIAS_EXT_CONF_FRAC_CLK_SEL (1 << 2)
#define CP_FREQ_BIAS_EXT_CONF_FRAC_CNTER_MAX(n) (((n)&0xf) << 4)
#define CP_FREQ_BIAS_FREQ_BIAS_CTRL_14_EXT_CONF_FIRST_PLS_POS(n) (((n)&0xf) << 8)
#define CP_FREQ_BIAS_EXT_CONF_TOGGLE_POS(n) (((n)&0xf) << 12)
#define CP_FREQ_BIAS_EXT_CONF_TOGGLE_NEG(n) (((n)&0xf) << 16)

// freq_bias_status0
#define CP_FREQ_BIAS_FREQ_BIAS(n) (((n)&0x3ffffff) << 0)
#define CP_FREQ_BIAS_FREQ_RAW_BIAS_UPD (1 << 31)

// freq_bias_status1
#define CP_FREQ_BIAS_FREQ_BIAS_TEMP(n) (((n)&0xfffff) << 0)
#define CP_FREQ_BIAS_FREQ_BIAS_INTEGER_UPD (1 << 31)

// freq_bias_status2
#define CP_FREQ_BIAS_OSC_FREQ_BIAS(n) (((n)&0x3ffffff) << 0)
#define CP_FREQ_BIAS_OSC_FREQ_RAW_BIAS_UPD (1 << 31)

// freq_bias_status3
#define CP_FREQ_BIAS_OSC_FREQ_BIAS_TEMP(n) (((n)&0xfffff) << 0)
#define CP_FREQ_BIAS_OSC_FREQ_BIAS_INTEGER_UPD (1 << 31)

// freq_bias_status4
#define CP_FREQ_BIAS_FREQ_BIAS_SUM(n) (((n)&0x3ffffff) << 0)
#define CP_FREQ_BIAS_FREQ_BIAS_SUM_UPD (1 << 31)

// freq_bias_ctrl_15
#define CP_FREQ_BIAS_OSC_ALPHA(n) (((n)&0xffff) << 0)
#define CP_FREQ_BIAS_OSC_RATE_DELTAT(n) (((n)&0xffff) << 16)

// freq_bias_ctrl_16
#define CP_FREQ_BIAS_OSC_T2RESET_CNT_CLR (1 << 0)
#define CP_FREQ_BIAS_OSC_T2RESET_NUM(n) (((n)&0x3f) << 1)
#define CP_FREQ_BIAS_OSC_FREQ_BIAS_SEL (1 << 7)

// freq_bias_ctrl_17
#define CP_FREQ_BIAS_TSX_ALPHA(n) (((n)&0xffff) << 0)
#define CP_FREQ_BIAS_TSX_RATE_DELTAT(n) (((n)&0xffff) << 16)

// freq_bias_ctrl_18
#define CP_FREQ_BIAS_TSX_T2RESET_CNT_CLR (1 << 0)
#define CP_FREQ_BIAS_TSX_SMTH_COEF(n) (((n)&0x1f) << 2)
#define CP_FREQ_BIAS_TSX_RATEHYS_COEF(n) (((n)&0xfff) << 7)
#define CP_FREQ_BIAS_TSX_FCALTH_COEF(n) (((n)&0xfff) << 19)
#define CP_FREQ_BIAS_TSX_FREQ_BIAS_SEL (1 << 31)

// freq_bias_ctrl_19
#define CP_FREQ_BIAS_TSX_FCALTH_OSFT(n) (((n)&0x3ffffff) << 0)
#define CP_FREQ_BIAS_TSX_T2RESET_NUM(n) (((n)&0x3f) << 26)

// freq_bias_ctrl_20
#define CP_FREQ_BIAS_TSX_AGE_TH(n) (((n)&0xffff) << 0)
#define CP_FREQ_BIAS_TSX_AGE_TH_INV(n) (((n)&0xffff) << 16)

// freq_bias_ctrl_21
#define CP_FREQ_BIAS_TSX_RATEHYS_OFST(n) (((n)&0xffff) << 0)
#define CP_FREQ_BIAS_TSX_MAXTEMP_RATE_TH(n) (((n)&0xffff) << 16)

// freq_bias_ctrl_32
#define CP_FREQ_BIAS_TSX_RATE_TAB_VAL20(n) (((n)&0xffff) << 0)

// freq_bias_ctrl_33
#define CP_FREQ_BIAS_TSX_TEMP_TH(n) (((n)&0xfffff) << 0)
#define CP_FREQ_BIAS_TSX_SMTH_SFT(n) (((n)&0x7) << 20)

// freq_bias_rpt0
#define CP_FREQ_BIAS_OSC_TEMP(n) (((n)&0xfffff) << 0)

// freq_bias_rpt1
#define CP_FREQ_BIAS_OSC_TEMP2(n) (((n)&0xfffffff) << 0)

// freq_bias_rpt2
#define CP_FREQ_BIAS_TSX_TEMP(n) (((n)&0xfffff) << 0)

// freq_bias_rpt3
#define CP_FREQ_BIAS_TSX_TEMP2(n) (((n)&0xfffffff) << 0)

// freq_bias_rpt4
#define CP_FREQ_BIAS_TSX_FCAL(n) (((n)&0x3ffffff) << 0)

#endif // _CP_FREQ_BIAS_H_
