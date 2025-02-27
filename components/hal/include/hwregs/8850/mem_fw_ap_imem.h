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

#ifndef _MEM_FW_AP_IMEM_H_
#define _MEM_FW_AP_IMEM_H_

// Auto generated by dtools(see dtools.txt for its version).
// Don't edit it manually!

#define REG_MEM_FW_AP_IMEM_BASE (0x51324000)

typedef volatile struct
{
    uint32_t port0_default_r_addr_0; // 0x00000000
    uint32_t port0_default_w_addr_0; // 0x00000004
    uint32_t __8[62];                // 0x00000008
    uint32_t clk_gate_bypass;        // 0x00000100
    uint32_t __260[63];              // 0x00000104
    uint32_t port_int_w_en;          // 0x00000200
    uint32_t port_int_w_clr;         // 0x00000204
    uint32_t port_int_w_raw;         // 0x00000208
    uint32_t port_int_w_fin;         // 0x0000020c
    uint32_t port_int_r_en;          // 0x00000210
    uint32_t port_int_r_clr;         // 0x00000214
    uint32_t port_int_r_raw;         // 0x00000218
    uint32_t port_int_r_fin;         // 0x0000021c
    uint32_t __544[120];             // 0x00000220
    uint32_t port_0_w_debug_addr;    // 0x00000400
    uint32_t port_0_w_debug_id;      // 0x00000404
    uint32_t port_0_r_debug_addr;    // 0x00000408
    uint32_t port_0_r_debug_id;      // 0x0000040c
    uint32_t __1040[252];            // 0x00000410
    uint32_t seg_default_first_addr; // 0x00000800
    uint32_t seg_default_last_addr;  // 0x00000804
    uint32_t seg_default_mst_r_id0;  // 0x00000808
    uint32_t seg_default_mst_r_id1;  // 0x0000080c
    uint32_t seg_default_mst_r_id2;  // 0x00000810
    uint32_t seg_default_mst_r_id3;  // 0x00000814
    uint32_t seg_default_mst_r_id4;  // 0x00000818
    uint32_t seg_default_mst_r_id5;  // 0x0000081c
    uint32_t seg_default_mst_r_id6;  // 0x00000820
    uint32_t seg_default_mst_r_id7;  // 0x00000824
    uint32_t seg_default_mst_w_id0;  // 0x00000828
    uint32_t seg_default_mst_w_id1;  // 0x0000082c
    uint32_t seg_default_mst_w_id2;  // 0x00000830
    uint32_t seg_default_mst_w_id3;  // 0x00000834
    uint32_t seg_default_mst_w_id4;  // 0x00000838
    uint32_t seg_default_mst_w_id5;  // 0x0000083c
    uint32_t seg_default_mst_w_id6;  // 0x00000840
    uint32_t seg_default_mst_w_id7;  // 0x00000844
    uint32_t __2120[494];            // 0x00000848
    uint32_t seg_0_first_addr;       // 0x00001000
    uint32_t seg_0_last_addr;        // 0x00001004
    uint32_t seg_0_mst_r_id0;        // 0x00001008
    uint32_t seg_0_mst_r_id1;        // 0x0000100c
    uint32_t seg_0_mst_r_id2;        // 0x00001010
    uint32_t seg_0_mst_r_id3;        // 0x00001014
    uint32_t seg_0_mst_r_id4;        // 0x00001018
    uint32_t seg_0_mst_r_id5;        // 0x0000101c
    uint32_t seg_0_mst_r_id6;        // 0x00001020
    uint32_t seg_0_mst_r_id7;        // 0x00001024
    uint32_t seg_0_mst_w_id0;        // 0x00001028
    uint32_t seg_0_mst_w_id1;        // 0x0000102c
    uint32_t seg_0_mst_w_id2;        // 0x00001030
    uint32_t seg_0_mst_w_id3;        // 0x00001034
    uint32_t seg_0_mst_w_id4;        // 0x00001038
    uint32_t seg_0_mst_w_id5;        // 0x0000103c
    uint32_t seg_0_mst_w_id6;        // 0x00001040
    uint32_t seg_0_mst_w_id7;        // 0x00001044
    uint32_t __4168[14];             // 0x00001048
    uint32_t seg_1_first_addr;       // 0x00001080
    uint32_t seg_1_last_addr;        // 0x00001084
    uint32_t seg_1_mst_r_id0;        // 0x00001088
    uint32_t seg_1_mst_r_id1;        // 0x0000108c
    uint32_t seg_1_mst_r_id2;        // 0x00001090
    uint32_t seg_1_mst_r_id3;        // 0x00001094
    uint32_t seg_1_mst_r_id4;        // 0x00001098
    uint32_t seg_1_mst_r_id5;        // 0x0000109c
    uint32_t seg_1_mst_r_id6;        // 0x000010a0
    uint32_t seg_1_mst_r_id7;        // 0x000010a4
    uint32_t seg_1_mst_w_id0;        // 0x000010a8
    uint32_t seg_1_mst_w_id1;        // 0x000010ac
    uint32_t seg_1_mst_w_id2;        // 0x000010b0
    uint32_t seg_1_mst_w_id3;        // 0x000010b4
    uint32_t seg_1_mst_w_id4;        // 0x000010b8
    uint32_t seg_1_mst_w_id5;        // 0x000010bc
    uint32_t seg_1_mst_w_id6;        // 0x000010c0
    uint32_t seg_1_mst_w_id7;        // 0x000010c4
    uint32_t __4296[14];             // 0x000010c8
    uint32_t seg_2_first_addr;       // 0x00001100
    uint32_t seg_2_last_addr;        // 0x00001104
    uint32_t seg_2_mst_r_id0;        // 0x00001108
    uint32_t seg_2_mst_r_id1;        // 0x0000110c
    uint32_t seg_2_mst_r_id2;        // 0x00001110
    uint32_t seg_2_mst_r_id3;        // 0x00001114
    uint32_t seg_2_mst_r_id4;        // 0x00001118
    uint32_t seg_2_mst_r_id5;        // 0x0000111c
    uint32_t seg_2_mst_r_id6;        // 0x00001120
    uint32_t seg_2_mst_r_id7;        // 0x00001124
    uint32_t seg_2_mst_w_id0;        // 0x00001128
    uint32_t seg_2_mst_w_id1;        // 0x0000112c
    uint32_t seg_2_mst_w_id2;        // 0x00001130
    uint32_t seg_2_mst_w_id3;        // 0x00001134
    uint32_t seg_2_mst_w_id4;        // 0x00001138
    uint32_t seg_2_mst_w_id5;        // 0x0000113c
    uint32_t seg_2_mst_w_id6;        // 0x00001140
    uint32_t seg_2_mst_w_id7;        // 0x00001144
    uint32_t __4424[14];             // 0x00001148
    uint32_t seg_3_first_addr;       // 0x00001180
    uint32_t seg_3_last_addr;        // 0x00001184
    uint32_t seg_3_mst_r_id0;        // 0x00001188
    uint32_t seg_3_mst_r_id1;        // 0x0000118c
    uint32_t seg_3_mst_r_id2;        // 0x00001190
    uint32_t seg_3_mst_r_id3;        // 0x00001194
    uint32_t seg_3_mst_r_id4;        // 0x00001198
    uint32_t seg_3_mst_r_id5;        // 0x0000119c
    uint32_t seg_3_mst_r_id6;        // 0x000011a0
    uint32_t seg_3_mst_r_id7;        // 0x000011a4
    uint32_t seg_3_mst_w_id0;        // 0x000011a8
    uint32_t seg_3_mst_w_id1;        // 0x000011ac
    uint32_t seg_3_mst_w_id2;        // 0x000011b0
    uint32_t seg_3_mst_w_id3;        // 0x000011b4
    uint32_t seg_3_mst_w_id4;        // 0x000011b8
    uint32_t seg_3_mst_w_id5;        // 0x000011bc
    uint32_t seg_3_mst_w_id6;        // 0x000011c0
    uint32_t seg_3_mst_w_id7;        // 0x000011c4
    uint32_t __4552[14];             // 0x000011c8
    uint32_t seg_4_first_addr;       // 0x00001200
    uint32_t seg_4_last_addr;        // 0x00001204
    uint32_t seg_4_mst_r_id0;        // 0x00001208
    uint32_t seg_4_mst_r_id1;        // 0x0000120c
    uint32_t seg_4_mst_r_id2;        // 0x00001210
    uint32_t seg_4_mst_r_id3;        // 0x00001214
    uint32_t seg_4_mst_r_id4;        // 0x00001218
    uint32_t seg_4_mst_r_id5;        // 0x0000121c
    uint32_t seg_4_mst_r_id6;        // 0x00001220
    uint32_t seg_4_mst_r_id7;        // 0x00001224
    uint32_t seg_4_mst_w_id0;        // 0x00001228
    uint32_t seg_4_mst_w_id1;        // 0x0000122c
    uint32_t seg_4_mst_w_id2;        // 0x00001230
    uint32_t seg_4_mst_w_id3;        // 0x00001234
    uint32_t seg_4_mst_w_id4;        // 0x00001238
    uint32_t seg_4_mst_w_id5;        // 0x0000123c
    uint32_t seg_4_mst_w_id6;        // 0x00001240
    uint32_t seg_4_mst_w_id7;        // 0x00001244
    uint32_t __4680[14];             // 0x00001248
    uint32_t seg_5_first_addr;       // 0x00001280
    uint32_t seg_5_last_addr;        // 0x00001284
    uint32_t seg_5_mst_r_id0;        // 0x00001288
    uint32_t seg_5_mst_r_id1;        // 0x0000128c
    uint32_t seg_5_mst_r_id2;        // 0x00001290
    uint32_t seg_5_mst_r_id3;        // 0x00001294
    uint32_t seg_5_mst_r_id4;        // 0x00001298
    uint32_t seg_5_mst_r_id5;        // 0x0000129c
    uint32_t seg_5_mst_r_id6;        // 0x000012a0
    uint32_t seg_5_mst_r_id7;        // 0x000012a4
    uint32_t seg_5_mst_w_id0;        // 0x000012a8
    uint32_t seg_5_mst_w_id1;        // 0x000012ac
    uint32_t seg_5_mst_w_id2;        // 0x000012b0
    uint32_t seg_5_mst_w_id3;        // 0x000012b4
    uint32_t seg_5_mst_w_id4;        // 0x000012b8
    uint32_t seg_5_mst_w_id5;        // 0x000012bc
    uint32_t seg_5_mst_w_id6;        // 0x000012c0
    uint32_t seg_5_mst_w_id7;        // 0x000012c4
} HWP_MEM_FW_AP_IMEM_T;

#define hwp_memFwApImem ((HWP_MEM_FW_AP_IMEM_T *)REG_ACCESS_ADDRESS(REG_MEM_FW_AP_IMEM_BASE))

// port0_default_r_addr_0
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port0_default_r_addr_0 : 13; // [12:0]
        uint32_t __31_13 : 19;                // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_PORT0_DEFAULT_R_ADDR_0_T;

// port0_default_w_addr_0
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port0_default_w_addr_0 : 13; // [12:0]
        uint32_t __31_13 : 19;                // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_PORT0_DEFAULT_W_ADDR_0_T;

// clk_gate_bypass
typedef union {
    uint32_t v;
    struct
    {
        uint32_t clk_gate_bypass : 1; // [0]
        uint32_t fw_resp_en : 1;      // [1]
        uint32_t __31_2 : 30;         // [31:2]
    } b;
} REG_MEM_FW_AP_IMEM_CLK_GATE_BYPASS_T;

// port_int_w_en
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_w_en : 1; // [0]
        uint32_t __31_1 : 31;     // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_W_EN_T;

// port_int_w_clr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_w_clr : 1; // [0], write clear
        uint32_t __31_1 : 31;      // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_W_CLR_T;

// port_int_w_raw
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_w_raw : 1; // [0], read only
        uint32_t __31_1 : 31;      // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_W_RAW_T;

// port_int_w_fin
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_w_fin : 1; // [0], read only
        uint32_t __31_1 : 31;      // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_W_FIN_T;

// port_int_r_en
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_r_en : 1; // [0]
        uint32_t __31_1 : 31;     // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_R_EN_T;

// port_int_r_clr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_r_clr : 1; // [0], write clear
        uint32_t __31_1 : 31;      // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_R_CLR_T;

// port_int_r_raw
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_r_raw : 1; // [0], read only
        uint32_t __31_1 : 31;      // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_R_RAW_T;

// port_int_r_fin
typedef union {
    uint32_t v;
    struct
    {
        uint32_t port_0_r_fin : 1; // [0], read only
        uint32_t __31_1 : 31;      // [31:1]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_INT_R_FIN_T;

// port_0_w_debug_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t w_addr_0 : 13; // [12:0], read only
        uint32_t __31_13 : 19;  // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_0_W_DEBUG_ADDR_T;

// port_0_w_debug_id
typedef union {
    uint32_t v;
    struct
    {
        uint32_t w_id_0 : 8;  // [7:0], read only
        uint32_t __31_8 : 24; // [31:8]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_0_W_DEBUG_ID_T;

// port_0_r_debug_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t r_addr_0 : 13; // [12:0], read only
        uint32_t __31_13 : 19;  // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_0_R_DEBUG_ADDR_T;

// port_0_r_debug_id
typedef union {
    uint32_t v;
    struct
    {
        uint32_t r_id_0 : 8;  // [7:0], read only
        uint32_t __31_8 : 24; // [31:8]
    } b;
} REG_MEM_FW_AP_IMEM_PORT_0_R_DEBUG_ID_T;

// seg_default_first_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t first_addr : 13; // [12:0]
        uint32_t __31_13 : 19;    // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_DEFAULT_FIRST_ADDR_T;

// seg_default_last_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t last_addr : 13; // [12:0]
        uint32_t __31_13 : 19;   // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_DEFAULT_LAST_ADDR_T;

// seg_0_first_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t first_addr : 13; // [12:0]
        uint32_t __31_13 : 19;    // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_0_FIRST_ADDR_T;

// seg_0_last_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t last_addr : 13; // [12:0]
        uint32_t __31_13 : 19;   // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_0_LAST_ADDR_T;

// seg_1_first_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t first_addr : 13; // [12:0]
        uint32_t __31_13 : 19;    // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_1_FIRST_ADDR_T;

// seg_1_last_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t last_addr : 13; // [12:0]
        uint32_t __31_13 : 19;   // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_1_LAST_ADDR_T;

// seg_2_first_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t first_addr : 13; // [12:0]
        uint32_t __31_13 : 19;    // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_2_FIRST_ADDR_T;

// seg_2_last_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t last_addr : 13; // [12:0]
        uint32_t __31_13 : 19;   // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_2_LAST_ADDR_T;

// seg_3_first_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t first_addr : 13; // [12:0]
        uint32_t __31_13 : 19;    // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_3_FIRST_ADDR_T;

// seg_3_last_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t last_addr : 13; // [12:0]
        uint32_t __31_13 : 19;   // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_3_LAST_ADDR_T;

// seg_4_first_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t first_addr : 13; // [12:0]
        uint32_t __31_13 : 19;    // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_4_FIRST_ADDR_T;

// seg_4_last_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t last_addr : 13; // [12:0]
        uint32_t __31_13 : 19;   // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_4_LAST_ADDR_T;

// seg_5_first_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t first_addr : 13; // [12:0]
        uint32_t __31_13 : 19;    // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_5_FIRST_ADDR_T;

// seg_5_last_addr
typedef union {
    uint32_t v;
    struct
    {
        uint32_t last_addr : 13; // [12:0]
        uint32_t __31_13 : 19;   // [31:13]
    } b;
} REG_MEM_FW_AP_IMEM_SEG_5_LAST_ADDR_T;

// port0_default_r_addr_0
#define MEM_FW_AP_IMEM_PORT0_DEFAULT_R_ADDR_0(n) (((n)&0x1fff) << 0)

// port0_default_w_addr_0
#define MEM_FW_AP_IMEM_PORT0_DEFAULT_W_ADDR_0(n) (((n)&0x1fff) << 0)

// clk_gate_bypass
#define MEM_FW_AP_IMEM_CLK_GATE_BYPASS (1 << 0)
#define MEM_FW_AP_IMEM_FW_RESP_EN (1 << 1)

// port_int_w_en
#define MEM_FW_AP_IMEM_PORT_0_W_EN (1 << 0)

// port_int_w_clr
#define MEM_FW_AP_IMEM_PORT_0_W_CLR (1 << 0)

// port_int_w_raw
#define MEM_FW_AP_IMEM_PORT_0_W_RAW (1 << 0)

// port_int_w_fin
#define MEM_FW_AP_IMEM_PORT_0_W_FIN (1 << 0)

// port_int_r_en
#define MEM_FW_AP_IMEM_PORT_0_R_EN (1 << 0)

// port_int_r_clr
#define MEM_FW_AP_IMEM_PORT_0_R_CLR (1 << 0)

// port_int_r_raw
#define MEM_FW_AP_IMEM_PORT_0_R_RAW (1 << 0)

// port_int_r_fin
#define MEM_FW_AP_IMEM_PORT_0_R_FIN (1 << 0)

// port_0_w_debug_addr
#define MEM_FW_AP_IMEM_W_ADDR_0(n) (((n)&0x1fff) << 0)

// port_0_w_debug_id
#define MEM_FW_AP_IMEM_W_ID_0(n) (((n)&0xff) << 0)

// port_0_r_debug_addr
#define MEM_FW_AP_IMEM_R_ADDR_0(n) (((n)&0x1fff) << 0)

// port_0_r_debug_id
#define MEM_FW_AP_IMEM_R_ID_0(n) (((n)&0xff) << 0)

// seg_default_first_addr
#define MEM_FW_AP_IMEM_FIRST_ADDR(n) (((n)&0x1fff) << 0)

// seg_default_last_addr
#define MEM_FW_AP_IMEM_LAST_ADDR(n) (((n)&0x1fff) << 0)

// seg_0_first_addr
#define MEM_FW_AP_IMEM_FIRST_ADDR(n) (((n)&0x1fff) << 0)

// seg_0_last_addr
#define MEM_FW_AP_IMEM_LAST_ADDR(n) (((n)&0x1fff) << 0)

// seg_1_first_addr
#define MEM_FW_AP_IMEM_FIRST_ADDR(n) (((n)&0x1fff) << 0)

// seg_1_last_addr
#define MEM_FW_AP_IMEM_LAST_ADDR(n) (((n)&0x1fff) << 0)

// seg_2_first_addr
#define MEM_FW_AP_IMEM_FIRST_ADDR(n) (((n)&0x1fff) << 0)

// seg_2_last_addr
#define MEM_FW_AP_IMEM_LAST_ADDR(n) (((n)&0x1fff) << 0)

// seg_3_first_addr
#define MEM_FW_AP_IMEM_FIRST_ADDR(n) (((n)&0x1fff) << 0)

// seg_3_last_addr
#define MEM_FW_AP_IMEM_LAST_ADDR(n) (((n)&0x1fff) << 0)

// seg_4_first_addr
#define MEM_FW_AP_IMEM_FIRST_ADDR(n) (((n)&0x1fff) << 0)

// seg_4_last_addr
#define MEM_FW_AP_IMEM_LAST_ADDR(n) (((n)&0x1fff) << 0)

// seg_5_first_addr
#define MEM_FW_AP_IMEM_FIRST_ADDR(n) (((n)&0x1fff) << 0)

// seg_5_last_addr
#define MEM_FW_AP_IMEM_LAST_ADDR(n) (((n)&0x1fff) << 0)

#endif // _MEM_FW_AP_IMEM_H_
