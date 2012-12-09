/* Copyright (c) 2010, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#include "sn12m0pz.h"
/* Initialisation settings */

const struct reg_struct_init iu060f_reg_pat_init[1] = {{
	/* PLL setting */
	0x4B, /* reg 0x302B*/
	/* MIPI Enable Setting */
	0x04, /* reg 0x30E5*/
	0x00, /* reg 0x3300*/
	/* Global Setting */
	0x00, /* image_orientation*/
	0x80, /* reg 0x300A*/
	0x08, /* reg 0x3014*/
	0x37, /* reg 0x3015*/
	0x60, /* reg 0x3017*/
	0x01, /* reg 0x301C*/
	0x28, /* reg 0x3031*/
	0x00, /* reg 0x3040*/
	0x60, /* reg 0x3041*/
	0x24, /* reg 0x3051*/
	0x34, /* reg 0x3053*/
	0x3B, /* reg 0x3055*/
	0xC0, /* reg 0x3057*/
	0x30, /* reg 0x3060*/
	0x00, /* reg 0x3065*/
	0x88, /* reg 0x30AA*/
	0x1C, /* reg 0x30AB*/
	0x32, /* reg 0x30B0*/
	0x83, /* reg 0x30B2*/
	0x04, /* reg 0x30D3*/
	0xC0, /* reg 0x30D8*/
	0x50, /* reg 0x3106*/
	0xA5, /* reg 0x3108*/
	0xA9, /* reg 0x310A*/
	0x0C, /* reg 0x310C*/
	0x55, /* reg 0x310E*/
	0xCC, /* reg 0x3126*/
	0x83, /* reg 0x312E*/
	0xC7, /* reg 0x313C*/
	0x07, /* reg 0x313E*/
	0x32, /* reg 0x3140*/
	0x35, /* reg 0x3142*/
	0x35, /* reg 0x3144*/
	0x73, /* reg 0x3148*/
	0x80, /* reg 0x314A*/
	0xBE, /* reg 0x3166*/
	0xBD, /* reg 0x3168*/
	0x82, /* reg 0x316F*/
	0xBC, /* reg 0x3171*/
	0x82, /* reg 0x3173*/
	0xBC, /* reg 0x3175*/
	0x0C, /* reg 0x3177*/
	0x2C, /* reg 0x3179*/
	0x83, /* reg 0x317B*/
	0xAF, /* reg 0x317D*/
	0x83, /* reg 0x317F*/
	0xAF, /* reg 0x3181*/
	0x06, /* reg 0x3184*/
	0xBA, /* reg 0x3185*/
	0xBE, /* reg 0x3187*/
	0xD8, /* reg 0x31A4*/
	0x17, /* reg 0x31A6*/
	0xCF, /* reg 0x31AC*/
	0xF1, /* reg 0x31AE*/
	0xD8, /* reg 0x31B4*/
	0x17, /* reg 0x31B6*/
	0x09, /* reg 0x3254 */
	0xC5, /* reg 0x3256 */
	0x84, /* reg 0x3258 */
	0x6C, /* reg 0x325A */
	0x0B, /* reg 0x3260 */
	0x09, /* reg 0x3262 */
	0x05, /* reg 0x3304*/
	0x04, /* reg 0x3305*/
	0x15, /* reg 0x3306*/
	0x03, /* reg 0x3307*/
	0x13, /* reg 0x3308*/
	0x05, /* reg 0x3309*/
	0x0B, /* reg 0x330A*/
	0x04, /* reg 0x330B*/
	0x0B, /* reg 0x330C*/
	0x06  /* reg 0x330D*/
}
};

/* Preview / Snapshot register settings */
const struct reg_struct iu060f_reg_pat[3] = {
	{ /* Preview */
		0x22, /*0x1b*/ /* fps*/

		/* Global Setting */
		0x01, /* coarse_integration_time_msb*/
		0xFF, /* coarse_integration_time_lsb*/

		/* Mode Setting */
		/* V: 1/2 V-addition (1,3),
		H: 1/2 H-averaging (1,3) */

		0x06, /* frame_length_lines_msb     0x0340*/
		0x02, /* frame_length_lines_lsb     0x0341*/
		0x10, /* line_length_pck_msb        0x0342*/
		0x70, /* line_length_pck_lsb        0x0343*/
		0x07, /* x_output_size_msb          0x034C*/
		0xe0, /* x_output_size_lsb          0x034D*/
		0x05, /* y_output_size_msb          0x034E*/
		0xe8, /* y_output_size_lsb          0x034F*/
		0x01, /* x_even_inc_lsb             0x0381*/
		0x03, /* x_odd_inc_lsb              0x0383*/
		0x01, /* y_even_inc_lsb             0x0385*/
		0x03, /* y_odd_inc_lsb              0x0387*/
		0x46, /* reg 0x3016 VMODEADD        0x3016*/
		0x86, /* reg 0x30E8 HADDAVE         0x30E8*/
		0x01, /* reg 0x3301 RGLANESEL       0x3301*/

		0x00,  /* 0x0344 */
		0x00,  /* 0x0345 */
		0x00,  /* 0x0346 */
		0x00,  /* 0x0347 */
		0x0F,  /* 0x0348 */
		0xBF,  /* 0x0349 */
		0x0B,  /* 0x034A */
		0xCF,  /* 0x034B */
	},
	{ /* Snapshot */
		0x14, /* pll_multiplier_lsb    // 20/10 fps*/
		/* 0x14 for pclk 96MHz at 7.5 fps */

		/* Global Setting */
		0x0B, /* coarse_integration_time_msb*/
		0xFF, /* coarse_integration_time_lsb*/

		/* Mode Setting */
		/* Full */
		0x0C,/*frame_length_lines_msb 0x0340*/
		0x02,/*frame_length_lines_lsb 0x0341*/
		0x10,/*line_length_pck_msb 0x0342*/
		0x70,/* line_length_pck_lsb 0x0343*/
		0x0F,/* x_output_size_msb   0x034C*/
		0xC0, /* x_output_size_lsb  0x034D*/
		0x0B, /* y_output_size_msb  0x034E*/
		0xD0, /* y_output_size_lsb  0x034F*/
		0x01, /* x_even_inc_lsb     0x0381*/
		0x01, /* x_odd_inc_lsb      0x0383*/
		0x01, /* y_even_inc_lsb                     0x0385*/
		0x01, /* y_odd_inc_lsb                      0x0387*/
		0x06, /* reg 0x3016 VMODEADD                0x3016*/
		0x06, /* reg 0x30E8 HADDAVE                 0x30E8*/
		0x00, /* reg 0x3301 RGLANESEL               0x3301*/

		0x00,  /* 0x0344 */
		0x00,  /* 0x0345 */
		0x00,  /* 0x0346 */
		0x00,  /* 0x0347 */
		0x0F,  /* 0x0348 */
		0xBF,  /* 0x0349 */
		0x0B,  /* 0x034A */
		0xCF,  /* 0x034B */
	},
	/* 120 fps settings */
	{
		0x1B, /*0x1B fps*/
		/* Global Setting */
		0x00, /* coarse_integration_time_msb*/
		0xFE, /* coarse_integration_time_lsb*/

		/* Mode Setting */
		/* V: 1/8 V-addition (9,7),
		H: Full */

		0x01, /* frame_length_lines_msb     0x0340*/
		0x01, /* frame_length_lines_lsb     0x0341*/
		0x10, /* line_length_pck_msb        0x0342*/
		0x70, /* line_length_pck_lsb        0x0343*/
		0x0f, /* x_output_size_msb          0x034C*/
		0xc0, /* x_output_size_lsb          0x034D*/
		0x00, /* y_output_size_msb          0x034E*/
		0xF8, /* y_output_size_lsb          0x034F*/
		0x01, /* x_even_inc_lsb             0x0381*/
		0x01, /* x_odd_inc_lsb              0x0383*/
		0x09, /* y_even_inc_lsb             0x0385*/
		0x07, /* y_odd_inc_lsb              0x0387*/
		0x46, /* reg 0x3016 VMODEADD        0x3016*/
		0x86, /* reg 0x30E8 HADDAVE         0x30E8*/
		0x00, /* reg 0x3301 RGLANESEL       0x3301*/
		/* add for 120fps support */
		0x00, /* 0x0344*/
		0x00, /* 0x0345*/
		0x02, /* 0x0346*/
		0x10, /* 0x0347*/
		0x0F, /* 0x0348*/
		0xBF, /* 0x0349*/
		0x09, /* 0x034A*/
		0xCF, /* 0x034B*/
	}
};
struct sn12m0pz_reg sn12m0pz_regs = {
	.reg_pat = &iu060f_reg_pat[0],
	.reg_pat_init = &iu060f_reg_pat_init[0],
};

