// Width: 160, height: 144
// Number of unique colors: 4
// Number of unique tiles: 112
#include <gb/gb.h>
#include "midnightlogo.h"
const UINT8 front_data_len = 112;
const UINT8 front_data[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x4c, 0x4c, 0xfe, 0xfe, 0x4c, 0x4c,
	0x4c, 0x4c, 0xfe, 0xfe, 0x4c, 0x4c, 0x00, 0x00,
	0x3c, 0x3c, 0x42, 0x42, 0x80, 0x80, 0x9e, 0x9e,
	0x82, 0x82, 0x42, 0x42, 0x3c, 0x3c, 0x00, 0x00,
	0x10, 0x10, 0x28, 0x28, 0x28, 0x28, 0x44, 0x44,
	0x7c, 0x7c, 0x82, 0x82, 0x82, 0x82, 0x00, 0x00,
	0x82, 0x82, 0xc6, 0xc6, 0xaa, 0xaa, 0x92, 0x92,
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x00, 0x00,
	0xfe, 0xfe, 0x80, 0x80, 0x80, 0x80, 0xfc, 0xfc,
	0x80, 0x80, 0x80, 0x80, 0xfe, 0xfe, 0x00, 0x00,
	0xf8, 0xf8, 0x84, 0x84, 0x84, 0x84, 0xfc, 0xfc,
	0x82, 0x82, 0x82, 0x82, 0xfc, 0xfc, 0x00, 0x00,
	0x38, 0x38, 0x44, 0x44, 0x82, 0x82, 0x82, 0x82,
	0x82, 0x82, 0x44, 0x44, 0x38, 0x38, 0x00, 0x00,
	0x82, 0x82, 0x44, 0x44, 0x28, 0x28, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0xfe, 0xfe,
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x00, 0x00,
	0x3c, 0x3c, 0x42, 0x42, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x42, 0x42, 0x3c, 0x3c, 0x00, 0x00,
	0x84, 0x84, 0x88, 0x88, 0x90, 0x90, 0xb0, 0xb0,
	0xc8, 0xc8, 0x84, 0x84, 0x82, 0x82, 0x00, 0x00,
	0xf8, 0xf8, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0xf8, 0xf8, 0x00, 0x00,
	0x82, 0x82, 0xc2, 0xc2, 0xa2, 0xa2, 0x92, 0x92,
	0x8a, 0x8a, 0x86, 0x86, 0x82, 0x82, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x84, 0x84,
	0x84, 0x84, 0x84, 0x84, 0x78, 0x78, 0x00, 0x00,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x7c, 0x7c,
	0x84, 0x84, 0x84, 0x84, 0x7c, 0x7c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x84, 0x84,
	0xfc, 0xfc, 0x80, 0x80, 0x7c, 0x7c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x9c, 0x9c, 0xa0, 0xa0,
	0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00,
	0xfe, 0xfe, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x84, 0x84,
	0x80, 0x80, 0x84, 0x84, 0x78, 0x78, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xf0, 0xf0,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x7c, 0x84, 0x84,
	0x84, 0x84, 0x7c, 0x7c, 0x04, 0x04, 0x04, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x78, 0x78, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x80, 0x80,
	0x78, 0x78, 0x04, 0x04, 0xf8, 0xf8, 0x00, 0x00,
	0xfc, 0xfc, 0x82, 0x82, 0x82, 0x82, 0xfc, 0xfc,
	0x88, 0x88, 0x84, 0x84, 0x82, 0x82, 0x00, 0x00,
	0x00, 0x00, 0x20, 0x20, 0xf8, 0xf8, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x18, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x08, 0x08,
	0x78, 0x78, 0x88, 0x88, 0x7c, 0x7c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x82, 0x82, 0x92, 0x92,
	0x92, 0x92, 0xaa, 0xaa, 0x44, 0x44, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x8c, 0x8c, 0xb0, 0xb0,
	0xc0, 0xc0, 0xb0, 0xb0, 0x8c, 0x8c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x7c, 0x84, 0x84,
	0x84, 0x84, 0x7c, 0x7c, 0x04, 0x04, 0xf8, 0xf8,
	0x30, 0x30, 0x68, 0x68, 0x68, 0x68, 0x32, 0x32,
	0x5a, 0x5a, 0xcc, 0xcc, 0x7a, 0x7a, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xf8, 0xf8,
	0x84, 0x84, 0x84, 0x84, 0xf8, 0xf8, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xec, 0xec, 0x92, 0x92,
	0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x78, 0x78, 0x08, 0x08, 0xf0, 0xf0,
	0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x84, 0x84,
	0x84, 0x84, 0xf8, 0xf8, 0x80, 0x80, 0x80, 0x80,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xc0, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x1f, 0x00, 0x7f, 0x00, 0xff, 0x00, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xc0, 0x00, 0xf0, 0x00, 0xfc, 0x00, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x0f, 0x00, 0x3f,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x00, 0xe0, 0x00, 0xf8,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
	0x00, 0xff, 0x1f, 0xff, 0x1f, 0xf0, 0x5f, 0xf0,
	0x1f, 0xf0, 0x1f, 0xf0, 0x1f, 0xf0, 0x1f, 0xff,
	0x00, 0xfe, 0xf0, 0xfe, 0xf0, 0x1e, 0xf0, 0x1e,
	0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0xfe,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x41, 0x43, 0x43,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07,
	0x00, 0x1f, 0x00, 0x7f, 0x00, 0xff, 0x00, 0xff,
	0x00, 0x1f, 0x00, 0x7f, 0x00, 0xff, 0x00, 0xff,
	0x01, 0xfe, 0x01, 0xfe, 0x01, 0xfe, 0x00, 0xff,
	0x07, 0xf8, 0x05, 0xfa, 0x04, 0xfb, 0x04, 0xfb,
	0xc1, 0x3e, 0x00, 0xff, 0x9c, 0x63, 0x10, 0xef,
	0xc0, 0x3f, 0x00, 0xff, 0x1c, 0xe3, 0x14, 0xeb,
	0x7f, 0x80, 0x00, 0xff, 0x01, 0xfe, 0x41, 0xbe,
	0x00, 0xc0, 0x00, 0xf0, 0x00, 0xfc, 0x00, 0xff,
	0x00, 0xff, 0x40, 0xbf, 0xc4, 0x3b, 0x1c, 0xe3,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x0f, 0x00, 0x3f,
	0x00, 0xff, 0x02, 0xfd, 0x0e, 0xf1, 0x04, 0xfb,
	0x03, 0xfc, 0x08, 0xf7, 0x08, 0xf7, 0xc0, 0x3f,
	0xc2, 0x3d, 0x19, 0xe6, 0x34, 0xcb, 0x60, 0x9f,
	0x00, 0xfe, 0xc0, 0x3f, 0xa0, 0x5f, 0xa0, 0x5f,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0x00, 0x00, 0x80, 0x00, 0xe0, 0x00, 0xf8,
	0x00, 0xfe, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
	0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05,
	0x00, 0xff, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x60, 0x60, 0x60, 0xf8, 0xf8, 0xf8, 0xf8,
	0x00, 0xfe, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x6c, 0x6c,
	0x43, 0x43, 0x43, 0x43, 0x43, 0x41, 0x43, 0x40,
	0x43, 0x40, 0x43, 0x40, 0x40, 0x40, 0x40, 0x40,
	0xc0, 0xff, 0xf0, 0xff, 0xfc, 0xff, 0xff, 0xff,
	0xff, 0xdf, 0x7f, 0x4f, 0x3f, 0x0d, 0x37, 0x04,
	0x14, 0xeb, 0x14, 0xeb, 0x1c, 0xe3, 0x00, 0xff,
	0xc1, 0xfe, 0xf0, 0xff, 0xfc, 0xff, 0xff, 0xff,
	0x01, 0xfe, 0x00, 0xff, 0x40, 0xbf, 0x40, 0xbf,
	0xec, 0x13, 0x04, 0xfb, 0x05, 0xfa, 0x01, 0xfe,
	0xc1, 0x3e, 0x00, 0xff, 0x1e, 0xe1, 0x04, 0xfb,
	0x05, 0xfa, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x7c, 0x83, 0x40, 0xbf, 0x00, 0xff, 0x01, 0xfe,
	0xc3, 0x3c, 0xc0, 0x3f, 0x44, 0xbb, 0x14, 0xeb,
	0x00, 0xff, 0x00, 0xff, 0x7c, 0x83, 0xc4, 0x3b,
	0x1d, 0xe2, 0x01, 0xfe, 0x1f, 0xe0, 0x00, 0xff,
	0x00, 0xc0, 0x00, 0xf0, 0x00, 0xfc, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x7c, 0x83, 0x40, 0xbf,
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x00, 0xff, 0x80, 0xff, 0xe0, 0xff, 0xf8, 0xff,
	0xfe, 0xff, 0xff, 0x7f, 0xff, 0x6f, 0xbf, 0x27,
	0xd0, 0x2f, 0xb2, 0x4d, 0x06, 0xf9, 0x08, 0xf7,
	0x00, 0xff, 0x80, 0xff, 0xe0, 0xff, 0xf8, 0xff,
	0x80, 0x7f, 0x80, 0x7f, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x03, 0xff, 0x0f, 0xff, 0x3f, 0xff,
	0x00, 0xfe, 0x03, 0xff, 0x0f, 0xff, 0x3f, 0xff,
	0xff, 0xfe, 0xff, 0xfc, 0xff, 0xec, 0xfb, 0xc8,
	0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00,
	0x1b, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xdf, 0x7f, 0x4f, 0x3f, 0x0d, 0x37, 0x04,
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xc1, 0xfe, 0xf0, 0xff, 0xfc, 0xff, 0xff, 0xff,
	0xff, 0xdf, 0x7f, 0x4f, 0x3f, 0x0d, 0x37, 0x04,
	0xdc, 0x23, 0x04, 0xfb, 0x04, 0xfb, 0x00, 0xff,
	0xc0, 0xff, 0xf0, 0xff, 0xfc, 0xff, 0xff, 0xff,
	0x1d, 0xe2, 0x01, 0xfe, 0x01, 0xfe, 0xc0, 0x3f,
	0x44, 0xbb, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0xc1, 0x3e, 0x00, 0xff, 0xd0, 0x2f, 0x10, 0xef,
	0x1c, 0xe3, 0x00, 0xff, 0x01, 0xfe, 0x00, 0xff,
	0xf1, 0x0e, 0x03, 0xfc, 0x1d, 0xe2, 0x1f, 0xe0,
	0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x07, 0xff,
	0xc0, 0x3f, 0x40, 0xbf, 0xc1, 0x3f, 0x07, 0xff,
	0x1f, 0xff, 0x7f, 0xff, 0xff, 0xfd, 0xff, 0xf9,
	0x00, 0xc0, 0x60, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xc0, 0xe0, 0x80, 0xe0, 0x80, 0x60, 0x00,
	0x1f, 0x06, 0x1b, 0x02, 0x01, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xfe, 0xff, 0xff, 0x7f, 0xff, 0x6f, 0xbf, 0x27,
	0x1f, 0x06, 0x1b, 0x02, 0x01, 0x00, 0x01, 0x00,
	0x00, 0xff, 0x03, 0xff, 0x0f, 0xff, 0x3f, 0xff,
	0xff, 0xfe, 0xff, 0xfc, 0xff, 0xec, 0xfb, 0xc8,
	0xff, 0xfe, 0xff, 0xfc, 0xff, 0xec, 0xfb, 0xc8,
	0xf0, 0xc0, 0xb0, 0x80, 0x00, 0x00, 0x00, 0x00,
	0xf0, 0xc0, 0xb0, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0xfe, 0xfe,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x07, 0xff,
	0xdf, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xf9,
	0x1f, 0xff, 0x7f, 0xff, 0xff, 0xfd, 0xff, 0xf9,
	0xfe, 0xd8, 0xf6, 0x90, 0xe0, 0x80, 0x60, 0x00,
	0xfe, 0xd8, 0xf6, 0x90, 0xe0, 0x80, 0x60, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x1f, 0x07, 0x1b, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xfe, 0xf8, 0x76, 0x70, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18,
	0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60,
	0x78, 0x78, 0x84, 0x84, 0x80, 0x80, 0x7c, 0x7c,
	0x02, 0x02, 0x82, 0x82, 0x7c, 0x7c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x00, 0x00,
	0x00, 0x00, 0x7c, 0x7c, 0xc6, 0xc6, 0x0e, 0x0e,
	0x78, 0x78, 0xe0, 0xe0, 0xfe, 0xfe, 0x00, 0x00,
	0x00, 0x00, 0x38, 0x38, 0x4c, 0x4c, 0xc6, 0xc6,
	0xc6, 0xc6, 0x64, 0x64, 0x38, 0x38, 0x00, 0x00,
	0x00, 0x00, 0x30, 0x30, 0x70, 0x70, 0x30, 0x30,
	0x30, 0x30, 0x30, 0x30, 0xfc, 0xfc, 0x00, 0x00,
	0x00, 0x00, 0x7c, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6,
	0x7e, 0x7e, 0x06, 0x06, 0x7c, 0x7c, 0x00, 0x00,
};
const UINT8 front[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x00, 0x09, 0x03, 0x0a, 0x0b, 0x0c, 0x0d, 0x02, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0e, 0x04, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x00, 0x14, 0x11, 0x15, 0x16, 0x13, 0x17, 0x18, 0x19, 0x11, 0x1a, 0x00,
	0x00, 0x0e, 0x1b, 0x11, 0x1c, 0x12, 0x0f, 0x00, 0x09, 0x1d, 0x12, 0x10, 0x1e, 0x1d, 0x12, 0x11, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x1d, 0x1f, 0x17, 0x13, 0x20, 0x00, 0x21, 0x00, 0x22, 0x12, 0x11, 0x1d, 0x1f, 0x17, 0x13, 0x20, 0x00, 0x00,
	0x00, 0x1d, 0x00, 0x02, 0x1d, 0x23, 0x11, 0x00, 0x06, 0x0f, 0x24, 0x00, 0x25, 0x1e, 0x13, 0x1d, 0x22, 0x26, 0x11, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x28, 0x29, 0x2a, 0x00, 0x2b, 0x2c, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x2e, 0x2f, 0x00, 0x00, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x2d, 0x00, 0x00, 0x00,
	0x00, 0x2e, 0x39, 0x3a, 0x3b, 0x3c, 0x2f, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x2d, 0x00,
	0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x30, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a,
	0x00, 0x5b, 0x5c, 0x49, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x00, 0x00, 0x52, 0x53, 0x41, 0x64, 0x65, 0x66, 0x00,
	0x00, 0x00, 0x00, 0x67, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x68, 0x00, 0x00, 0x00,
	0x00, 0x69, 0x06, 0x24, 0x00, 0x0a, 0x1d, 0x12, 0x26, 0x00, 0x6a, 0x6b, 0x11, 0x13, 0x1a, 0x1a, 0x0f, 0x13, 0x00, 0x00,
	0x00, 0x69, 0x6a, 0x05, 0x0a, 0x0e, 0x14, 0x00, 0x6c, 0x6d, 0x6e, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
