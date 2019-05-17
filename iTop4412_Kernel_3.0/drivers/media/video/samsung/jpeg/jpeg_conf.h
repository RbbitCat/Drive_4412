/* linux/drivers/media/video/samsung/jpeg/jpeg_conf.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 * http://www.samsung.com/
 *
 * Definition Quantization Table for Jpeg encoder/docoder
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __JPEG_CONF_H__
#define __JPEG_CONF_H__

/* coefficients of color space converter. */
#define COEF1_RGB_2_YUV         0x4d971e
#define COEF2_RGB_2_YUV         0x2c5783
#define COEF3_RGB_2_YUV         0x836e13

#if 0 //c210,Robin Wang
const unsigned char qtbl_luminance[4][64] = {
	{/* level 1 - high quality */
		8, 6, 6, 8, 12, 14, 16, 17,
		6, 6, 6, 8, 10, 13, 12, 15,
		6, 6, 7, 8, 13, 14, 18, 24,
		8, 8, 8, 14, 13, 19, 24, 35,
		12, 10, 13, 13, 20, 26, 34, 39,
		14, 13, 14, 19, 26, 34, 39, 39,
		16, 12, 18, 24, 34, 39, 39, 39,
		17, 15, 24, 35, 39, 39, 39, 39
	},
	{/* level 2 */
		12, 8, 8, 12, 17, 21, 24, 23,
		8, 9, 9, 11, 15, 19, 18, 23,
		8, 9, 10, 12, 19, 20, 27, 36,
		12, 11, 12, 21, 20, 28, 36, 53,
		17, 15, 19, 20, 30, 39, 51, 59,
		21, 19, 20, 28, 39, 51, 59, 59,
		24, 18, 27, 36, 51, 59, 59, 59,
		23, 23, 36, 53, 59, 59, 59, 59
	},
	{/* level 3 */
		16, 11, 11, 16, 23, 27, 31, 30,
		11, 12, 12, 15, 20, 23, 23, 30,
		11, 12, 13, 16, 23, 26, 35, 47,
		16, 15, 16, 23, 26, 37, 47, 64,
		23, 20, 23, 26, 39, 51, 64, 64,
		27, 23, 26, 37, 51, 64, 64, 64,
		31, 23, 35, 47, 64, 64, 64, 64,
		30, 30, 47, 64, 64, 64, 64, 64

	},
	{/*level 4 - low quality */
		20, 16, 25, 39, 50, 46, 62, 68,
		16, 18, 23, 38, 38, 53, 65, 68,
		25, 23, 31, 38, 53, 65, 68, 68,
		39, 38, 38, 53, 65, 68, 68, 68,
		50, 38, 53, 65, 68, 68, 68, 68,
		46, 53, 65, 68, 68, 68, 68, 68,
		62, 65, 68, 68, 68, 68, 68, 68,
		68, 68, 68, 68, 68, 68, 68, 68
	}
};

const unsigned char qtbl_chrominance[4][64] = {
	{/* level 1 - high quality */
		9, 8, 9, 11, 14, 17, 19, 24,
		8, 10, 9, 11, 14, 13, 17, 22,
		9, 9, 13, 14, 13, 15, 23, 26,
		11, 11, 14, 14, 15, 20, 26, 33,
		14, 14, 13, 15, 20, 24, 33, 39,
		17, 13, 15, 20, 24, 32, 39, 39,
		19, 17, 23, 26, 33, 39, 39, 39,
		24, 22, 26, 33, 39, 39, 39, 39
	},
	{/* level 2 */
		13, 11, 13, 16, 20, 20, 29, 37,
		11, 14, 14, 14, 16, 20, 26, 32,
		13, 14, 15, 17, 20, 23, 35, 40,
		16, 14, 17, 21, 23, 30, 40, 50,
		20, 16, 20, 23, 30, 37, 50, 59,
		20, 20, 23, 30, 37, 48, 59, 59,
		29, 26, 35, 40, 50, 59, 59, 59,
		37, 32, 40, 50, 59, 59, 59, 59
	},
	{/* level 3 */
		17, 15, 17, 21, 20, 26, 38, 48,
		15, 19, 18, 17, 20, 26, 35, 43,
		17, 18, 20, 22, 26, 30, 46, 53,
		21, 17, 22, 28, 30, 39, 53, 64,
		20, 20, 26, 30, 39, 48, 64, 64,
		26, 26, 30, 39, 48, 63, 64, 64,
		38, 35, 46, 53, 64, 64, 64, 64,
		48, 43, 53, 64, 64, 64, 64, 64


	},
	{/*level 4 - low quality */
		21, 25, 32, 38, 54, 68, 68, 68,
		25, 28, 24, 38, 54, 68, 68, 68,
		32, 24, 32, 43, 66, 68, 68, 68,
		38, 38, 43, 53, 68, 68, 68, 68,
		54, 54, 66, 68, 68, 68, 68, 68,
		68, 68, 68, 68, 68, 68, 68, 68,
		68, 68, 68, 68, 68, 68, 68, 68,
		68, 68, 68, 68, 68, 68, 68, 68

	}

};

const unsigned char qtbl0[64] = {
	0x10, 0x0B, 0x0A, 0x10, 0x18, 0x28, 0x33, 0x3D,
	0x0C, 0x0C, 0x0E, 0x13, 0x1A, 0x3A, 0x3C, 0x37,
	0x0E, 0x0D, 0x10, 0x18, 0x28, 0x39, 0x45, 0x38,
	0x0E, 0x11, 0x16, 0x1D, 0x33, 0x57, 0x50, 0x3E,
	0x12, 0x16, 0x25, 0x38, 0x44, 0x6D, 0x67, 0x4D,
	0x18, 0x23, 0x37, 0x40, 0x51, 0x68, 0x71, 0x5C,
	0x31, 0x40, 0x4E, 0x57, 0x67, 0x79, 0x78, 0x65,
	0x48, 0x5C, 0x5F, 0x62, 0x70, 0x64, 0x67, 0x63
};

/* Added Quantization Table */
const unsigned char std_chrominance_quant_tbl_plus[64] = {
	0x11, 0x12, 0x18, 0x2F, 0x63, 0x63, 0x63, 0x63,
	0x12, 0x15, 0x1A, 0x42, 0x63, 0x63, 0x63, 0x63,
	0x18, 0x1A, 0x38, 0x63, 0x63, 0x63, 0x63, 0x63,
	0x2F, 0x42, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
	0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
	0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
	0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
	0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63
};

/* Quantization Table0 */
unsigned char std_luminance_quant_tbl[64] = {
	1,   1,   2,   1,   1,   2,   2,   2,
	2,   3,   2,   2,   3,   3,   6,   4,
	3,   3,   3,   3,   7,   5,   8,   4,
	6,   8,   8,  10,   9,   8,   7,  11,
	8,  10,  14,  13,  11,  10,  10,  12,
	10,   8,   8,  11,  16,  12,  12,  13,
	15,  15,  15,  15,   9,  11,  16,  17,
	15,  14,  17,  13,  14,  14,  14,   1
};

/* uantization Table1 */
unsigned char std_chrominance_quant_tbl[64] = {
	4,   4,   4,   5,   4,   5,   9,   5,
	5,   9,  15,  10,   8,  10,  15,  26,
	19,   9,   9,  19,  26,  26,  26,  26,
	13,  26,  26,  26,  26,  26,  26,  26,
	26,  26,  26,  26,  26,  26,  26,  26,
	26,  26,  26,  26,  26,  26,  26,  26,
	26,  26,  26,  26,  26,  26,  26,  26,
	26,  26,  26,  26,  26,  26,  26,  26
};

/* Huffman Table */
unsigned char hdctbl0[16]  = {0, 1, 5, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
unsigned char hdctblg0[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb};

unsigned char hactbl0[16] = {0, 2, 1, 3, 3, 2, 4, 3, 5, 5, 4, 4, 0, 0, 1, 0x7d};
const unsigned char hactblg0[162] = {
	0x01, 0x02, 0x03, 0x00, 0x04, 0x11, 0x05, 0x12,
	0x21, 0x31, 0x41, 0x06, 0x13, 0x51, 0x61, 0x07,
	0x22, 0x71, 0x14, 0x32, 0x81, 0x91, 0xa1, 0x08,
	0x23, 0x42, 0xb1, 0xc1, 0x15, 0x52, 0xd1, 0xf0,
	0x24, 0x33, 0x62, 0x72, 0x82, 0x09, 0x0a, 0x16,
	0x17, 0x18, 0x19, 0x1a, 0x25, 0x26, 0x27, 0x28,
	0x29, 0x2a, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
	0x3a, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
	0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59,
	0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69,
	0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79,
	0x7a, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89,
	0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98,
	0x99, 0x9a, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7,
	0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6,
	0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5,
	0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4,
	0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe1, 0xe2,
	0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea,
	0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8,
	0xf9, 0xfa
};

/* Huffman Table0 */
unsigned char len_dc_luminance[16] = {
	0, 1, 5, 1, 1, 1, 1, 1,
	1, 0, 0, 0, 0, 0, 0, 0
};

unsigned char val_dc_luminance[12] = {
	0, 1, 2, 3, 4, 5,
	6, 7, 8, 9, 10, 11
};

unsigned char len_ac_luminance[16] = {
	0, 2, 1, 3, 3, 2, 4, 3,
	5, 5, 4, 4, 0, 0, 1, 0x7d
};

unsigned char val_ac_luminance[162] = {
	0x01, 0x02, 0x03, 0x00, 0x04, 0x11, 0x05, 0x12,
	0x21, 0x31, 0x41, 0x06, 0x13, 0x51, 0x61, 0x07,
	0x22, 0x71, 0x14, 0x32, 0x81, 0x91, 0xa1, 0x08,
	0x23, 0x42, 0xb1, 0xc1, 0x15, 0x52, 0xd1, 0xf0,
	0x24, 0x33, 0x62, 0x72, 0x82, 0x09, 0x0a, 0x16,
	0x17, 0x18, 0x19, 0x1a, 0x25, 0x26, 0x27, 0x28,
	0x29, 0x2a, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
	0x3a, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
	0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59,
	0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69,
	0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79,
	0x7a, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89,
	0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98,
	0x99, 0x9a, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7,
	0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6,
	0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5,
	0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4,
	0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe1, 0xe2,
	0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea,
	0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8,
	0xf9, 0xfa
};

/* Huffman Table1 */
unsigned char len_dc_chrominance[16] = {
	0, 3, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 0, 0, 0, 0, 0
};

unsigned char val_dc_chrominance[12] = {
	0, 1, 2, 3, 4, 5,
	6, 7, 8, 9, 10, 11
};

unsigned char len_ac_chrominance[16] = {
	0, 2, 1, 2, 4, 4, 3, 4,
	7, 5, 4, 4, 0, 1, 2, 0x77
};

unsigned char val_ac_chrominance[162] = {
	0x00, 0x01, 0x02, 0x03, 0x11, 0x04, 0x05, 0x21,
	0x31, 0x06, 0x12, 0x41, 0x51, 0x07, 0x61, 0x71,
	0x13, 0x22, 0x32, 0x81, 0x81, 0x08, 0x14, 0x42,
	0x91, 0xa1, 0xb1, 0xc1, 0x09, 0x23, 0x33, 0x52,
	0xf0, 0x15, 0x62, 0x72, 0xd1, 0x0a, 0x16, 0x24,
	0x34, 0xe1, 0x25, 0xf1, 0x17, 0x18, 0x19, 0x1a,
	0x26, 0x27, 0x28, 0x29, 0x2a, 0x35, 0x36, 0x37,
	0x38, 0x39, 0x3a, 0x43, 0x44, 0x45, 0x46, 0x47,
	0x48, 0x49, 0x4a, 0x53, 0x54, 0x55, 0x56, 0x57,
	0x58, 0x59, 0x5a, 0x63, 0x64, 0x65, 0x66, 0x67,
	0x68, 0x69, 0x6a, 0x73, 0x74, 0x75, 0x76, 0x77,
	0x78, 0x79, 0x7a, 0x82, 0x83, 0x84, 0x85, 0x86,
	0x87, 0x88, 0x89, 0x8a, 0x92, 0x93, 0x94, 0x95,
	0x96, 0x97, 0x98, 0x99, 0x9a, 0xa2, 0xa3, 0xa4,
	0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3,
	0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xc2,
	0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca,
	0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9,
	0xda, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8,
	0xe9, 0xea, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
	0xf8, 0xf9
};
#else
//c220

/// Q-table for JPEG
// ITU standard Q-table
static const u32 ITU_Q_tbl[4][16]=
{
	//table 0
	{ 
	0x100a0b10, 0x3d332818, 0x130e0c0c, 0x373c3a1a,
	0x18100d0e, 0x38453928, 0x1d16110e, 0x3e505733,
	0x38251612, 0x4d676d44, 0x40372318, 0x5c716851,
	0x574e4031, 0x65787967, 0x625f5c48, 0x63676470
	},
	//table 1
	{ 
	0x2f181211, 0x63636363, 0x421a1512, 0x63636363,
	0x63381a18, 0x63636363, 0x6363422f, 0x63636363,
	0x63636363, 0x63636363, 0x63636363, 0x63636363,
	0x63636363, 0x63636363, 0x63636363, 0x63636363
	},
	//table 2
	{ 
	0x100a0b10, 0x3d332818, 0x130e0c0c, 0x373c3a1a,
	0x18100d0e, 0x38453928, 0x1d16110e, 0x3e505733,
	0x38251612, 0x4d676d44, 0x40372318, 0x5c716851,
	0x574e4031, 0x65787967, 0x625f5c48, 0x63676470
	},
	//table 3
	{ 
	0x2f181211, 0x63636363, 0x421a1512, 0x63636363,
	0x63381a18, 0x63636363, 0x6363422f, 0x63636363,
	0x63636363, 0x63636363, 0x63636363, 0x63636363,
	0x63636363, 0x63636363, 0x63636363, 0x63636363
	}
};

//from http://www.impulseadventure.com/photo/jpeg-quantization.html
static const u32 CanonEOS1DMarkII_Q_tbl[4][16]=
{
	{ //table 0
		0x01010101,0x01010101, 0x01010101,0x01010201, 
		0x01010101,0x01020101, 0x01010101,0x01010203, 
		0x01010101,0x02020203, 0x01010102,0x03020203, 
		0x01010202,0x02020202, 0x01010101,0x02020202 
	},

	{ //table 1
		0x01010202,0x02020202, 0x01020202,0x01020202, 
		0x01010201,0x01020202, 0x01010101,0x02020202, 
		0x01020202,0x02020202, 0x02020202,0x02020202, 
		0x02020202,0x02020202, 0x02020202,0x02020202 
	},
	{0x0,}, {0x0,}
};

//ITU Luminace Huffman Table
//offset = 0x200
static u32 ITU_H_tbl_len_DC_luminance[4] ={ 0x00000000, 0x00000000, 0x00000000, 0x00000c00 };
//offset = 0x210
static u32 ITU_H_tbl_val_DC_luminance[3] ={ 0x03020100, 0x07060504, 0x0b0a0908 };

//ITU Chrominace Huffman Table
//offset = 0x220
static u32 ITU_H_tbl_len_DC_chrominance[4] ={ 0x00000000, 0x00000000, 0x00000000, 0x000c0000 };
//offset = 0x230
static u32 ITU_H_tbl_val_DC_chrominance[3] ={ 0x03020100, 0x07060504, 0x0b0a0908 };
//offset = 0x240
static u32 ITU_H_tbl_len_AC_luminance[4] ={ 0x00000000, 0x00000000, 0x00000000, 0xa2000000};
//offset = 0x250
static u32 ITU_H_tbl_val_AC_luminance[41] =
{
	0x00030201, 0x12051104, 0x06413121, 0x07615113,
	0x32147122, 0x08a19181, 0xc1b14223, 0xf0d15215,
	0x72623324, 0x160a0982, 0x1a191817, 0x28272625,
	0x35342a29, 0x39383736, 0x4544433a, 0x49484746,
	0x5554534a, 0x59585756, 0x6564635a, 0x69686766,
	0x7574736a, 0x79787776, 0x8584837a, 0x89888786,
	0x9493928a, 0x98979695, 0xa3a29a99, 0xa7a6a5a4,
	0xb2aaa9a8, 0xb6b5b4b3, 0xbab9b8b7, 0xc5c4c3c2,
	0xc9c8c7c6, 0xd4d3d2ca, 0xd8d7d6d5, 0xe2e1dad9,
	0xe6e5e4e3, 0xeae9e8e7, 0xf4f3f2f1, 0xf8f7f6f5,
	0x0000faf9   
};

//offset = 0x300
static u32 ITU_H_tbl_len_AC_chrominance[4] ={ 0x00000000, 0x00000000, 0x51000000, 0x00000051 };
//offset = 0x310
static u32 ITU_H_tbl_val_AC_chrominance[41] =
{
	0x00030201, 0x12051104, 0x06413121, 0x07615113,
	0x32147122, 0x08a19181, 0xc1b14223, 0xf0d15215,
	0x72623324, 0x160a0982, 0x1a191817, 0x28272625,
	0x35342a29, 0x39383736, 0x4544433a, 0x49484746,
	0x5554534a, 0x59585756, 0x6564635a, 0x69686766,
	0x7574736a, 0x79787776, 0x8584837a, 0x89888786,
	0x9493928a, 0x98979695, 0xa3a29a99, 0xa7a6a5a4,
	0xb2aaa9a8, 0xb6b5b4b3, 0xbab9b8b7, 0xc5c4c3c2,
	0xc9c8c7c6, 0xd4d3d2ca, 0xd8d7d6d5, 0xe2e1dad9,
	0xe6e5e4e3, 0xeae9e8e7, 0xf4f3f2f1, 0xf8f7f6f5,
	0x0000faf9
};


#endif
#endif /* __JPEG_CONF_H__ */