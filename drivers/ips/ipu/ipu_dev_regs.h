#ifndef __IPU_DEV_REGS_H__
#define __IPU_DEV_REGS_H__

/* reg address info */
#define X2_IPS_INT_MASK         0x0
#define X2_IPS_INT_STAT         0x4

#define IPU_CTRL                0x000
#define IPU_Y_BASE_ADDR_0       0x004
#define IPU_C_BASE_ADDR_0       0x008
#define IPU_Y_BASE_ADDR_1       0x00C
#define IPU_C_BASE_ADDR_1       0x010
#define IPU_VIDEO_IN            0x014
#define IPU_COLOR_BAR_Y_SET     0x018
#define IPU_COLOR_BAR_U_SET     0x01C
#define IPU_COLOR_BAR_V_SET     0x020
#define IPU_CROP_ST             0x024
#define IPU_CROP_ED             0x028
#define IPU_SCALAR_SRC          0x02C
#define IPU_SCALAR_TGT          0x030
#define IPU_SCALAR_STEP         0x034
#define IPU_SCALAR_BYPASS       0x038
#define IPU_CONFIG_DONE         0x03c
#define IPU_FRAME_ID            0x040

#define PYMID_DS_CTRL           0x100
#define PYMID_US_CTRL           0x104
#define PYMID_SRC_Y_ADDR        0x108
#define PYMID_SRC_C_ADDR        0x10C
#define PYMID_Y_ADDR_P0         0x110
#define PYMID_C_ADDR_P0         0x114
#define PYMID_Y_ADDR_P1         0x118
#define PYMID_Y_ADDR_P2         0x11C
#define PYMID_Y_ADDR_P3         0x120
#define PYMID_Y_ADDR_P4         0x124
#define PYMID_Y_ADDR_P5         0x128
#define PYMID_Y_ADDR_P6         0x12C
#define PYMID_Y_ADDR_P7         0x130
#define PYMID_Y_ADDR_P8         0x134
#define PYMID_Y_ADDR_P9         0x138
#define PYMID_Y_ADDR_P10        0x13C
#define PYMID_Y_ADDR_P11        0x140
#define PYMID_Y_ADDR_P12        0x144
#define PYMID_Y_ADDR_P13        0x148
#define PYMID_Y_ADDR_P14        0x14C
#define PYMID_Y_ADDR_P15        0x150
#define PYMID_Y_ADDR_P16        0x154
#define PYMID_Y_ADDR_P17        0x158
#define PYMID_Y_ADDR_P18        0x15C
#define PYMID_Y_ADDR_P19        0x160
#define PYMID_Y_ADDR_P20        0x164
#define PYMID_Y_ADDR_P21        0x168
#define PYMID_Y_ADDR_P22        0x16C
#define PYMID_Y_ADDR_P23        0x170
#define PYMID_C_ADDR_P1         0x174
#define PYMID_C_ADDR_P2         0x178
#define PYMID_C_ADDR_P3         0x17C
#define PYMID_C_ADDR_P4         0x180
#define PYMID_C_ADDR_P5         0x184
#define PYMID_C_ADDR_P6         0x188
#define PYMID_C_ADDR_P7         0x18C
#define PYMID_C_ADDR_P8         0x190
#define PYMID_C_ADDR_P9         0x194
#define PYMID_C_ADDR_P10        0x198
#define PYMID_C_ADDR_P11        0x19C
#define PYMID_C_ADDR_P12        0x1A0
#define PYMID_C_ADDR_P13        0x1A4
#define PYMID_C_ADDR_P14        0x1A8
#define PYMID_C_ADDR_P15        0x1AC
#define PYMID_C_ADDR_P16        0x1B0
#define PYMID_C_ADDR_P17        0x1B4
#define PYMID_C_ADDR_P18        0x1B8
#define PYMID_C_ADDR_P19        0x1BC
#define PYMID_C_ADDR_P20        0x1C0
#define PYMID_C_ADDR_P21        0x1C4
#define PYMID_C_ADDR_P22        0x1C8
#define PYMID_C_ADDR_P23        0x1CC
#define PYMID_Y_ADDR_U0         0x1D0
#define PYMID_Y_ADDR_U1         0x1D4
#define PYMID_Y_ADDR_U2         0x1D8
#define PYMID_Y_ADDR_U3         0x1DC
#define PYMID_Y_ADDR_U4         0x1E0
#define PYMID_Y_ADDR_U5         0x1E4
#define PYMID_C_ADDR_U0         0x1E8
#define PYMID_C_ADDR_U1         0x1EC
#define PYMID_C_ADDR_U2         0x1F0
#define PYMID_C_ADDR_U3         0x1F4
#define PYMID_C_ADDR_U4         0x1F8
#define PYMID_C_ADDR_U5         0x1FC

#define PYMID_SRC_IMG           0x200
#define PYMID_FACTOR1           0x204
#define PYMID_FACTOR2           0x208
#define PYMID_FACTOR3           0x20C
#define PYMID_FACTOR4           0x210
#define PYMID_ROI0_P1           0x214
#define PYMID_ROI1_P1           0x218
#define PYMID_ROI0_P2           0x21C
#define PYMID_ROI1_P2           0x220
#define PYMID_ROI0_P3           0x224
#define PYMID_ROI1_P3           0x228
#define PYMID_ROI0_P5           0x22C
#define PYMID_ROI1_P5           0x230
#define PYMID_ROI0_P6           0x234
#define PYMID_ROI1_P6           0x238
#define PYMID_ROI0_P7           0x23C
#define PYMID_ROI1_P7           0x240
#define PYMID_ROI0_P9           0x244
#define PYMID_ROI1_P9           0x248
#define PYMID_ROI0_P10          0x24C
#define PYMID_ROI1_P10          0x250
#define PYMID_ROI0_P11          0x254
#define PYMID_ROI1_P11          0x258
#define PYMID_ROI0_P13          0x25C
#define PYMID_ROI1_P13          0x260
#define PYMID_ROI0_P14          0x264
#define PYMID_ROI1_P14          0x268
#define PYMID_ROI0_P15          0x26C
#define PYMID_ROI1_P15          0x270
#define PYMID_ROI0_P17          0x274
#define PYMID_ROI1_P17          0x278
#define PYMID_ROI0_P18          0x27C
#define PYMID_ROI1_P18          0x280
#define PYMID_ROI0_P19          0x284
#define PYMID_ROI1_P19          0x288
#define PYMID_ROI0_P21          0x28C
#define PYMID_ROI1_P21          0x290
#define PYMID_ROI0_P22          0x294
#define PYMID_ROI1_P22          0x298
#define PYMID_ROI0_P23          0x29C
#define PYMID_ROI1_P23          0x2A0
#define PYMID_ROI0_U0           0x2A4
#define PYMID_ROI1_U0           0x2A8
#define PYMID_ROI0_U1           0x2AC
#define PYMID_ROI1_U1           0x2B0
#define PYMID_ROI0_U2           0x2B4
#define PYMID_ROI1_U2           0x2B8
#define PYMID_ROI0_U3           0x2BC
#define PYMID_ROI1_U3           0x2C0
#define PYMID_ROI0_U4           0x2C4
#define PYMID_ROI1_U4           0x2C8
#define PYMID_ROI0_U5           0x2CC
#define PYMID_ROI1_U5           0x2D0
#define PYMID_US_FACTOR1        0x2D4
#define PYMID_US_FACTOR2        0x2D8
#define PYMID_SRC_WIDTH_P1      0x2DC
#define PYMID_SRC_WIDTH_P2      0x2E0
#define PYMID_SRC_WIDTH_P3      0x2E4
#define PYMID_SRC_WIDTH_P4      0x2E8
#define PYMID_SRC_WIDTH_P5      0x2EC
#define PYMID_SRC_WIDTH_P6      0x2F0
#define PYMID_SRC_WIDTH_P7      0x2F4
#define PYMID_SRC_WIDTH_P8      0x2F8
#define PYMID_SRC_WIDTH_P9      0x2FC

#define PYMID_SRC_WIDTH_U1      0x300
#define PYMID_SRC_WIDTH_U2      0x304
#define PYMID_SRC_WIDTH_U3      0x308

#endif
