// Width: 160, height: 144
// Number of unique colors: 2
// Number of unique tiles: 23
#include <gb/gb.h>
#include "midnightlogo.h"
const UINT8 calccrash_data_len = 23;
const UINT8 calccrash_data[] = {
	0x00, 0x00, 0x54, 0x54, 0x38, 0x38, 0xfe, 0xfe,
	0x38, 0x38, 0x54, 0x54, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0x72, 0x72, 0x38, 0x38,
	0x1c, 0x1c, 0x4e, 0x4e, 0x3c, 0x3c, 0x00, 0x00,
	0x18, 0x18, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x0c, 0x0c, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0x46, 0x46, 0x3e, 0x3e,
	0x66, 0x66, 0x66, 0x66, 0x3e, 0x3e, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0x62, 0x62, 0x60, 0x60,
	0x60, 0x60, 0x62, 0x62, 0x3c, 0x3c, 0x00, 0x00,
	0x60, 0x60, 0x64, 0x64, 0x68, 0x68, 0x70, 0x70,
	0x78, 0x78, 0x6c, 0x6c, 0x66, 0x66, 0x00, 0x00,
	0x00, 0x00, 0xfc, 0xfc, 0xd6, 0xd6, 0xd6, 0xd6,
	0xd6, 0xd6, 0xd6, 0xd6, 0xc6, 0xc6, 0x00, 0x00,
	0x60, 0x60, 0x7c, 0x7c, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00,
	0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x7c, 0x7c, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00,
	0x00, 0x00, 0x3e, 0x3e, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x3e, 0x3e, 0x46, 0x46, 0x3c, 0x3c,
	0x06, 0x06, 0x3e, 0x3e, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x3e, 0x3e, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0x66, 0x66, 0x7e, 0x7e,
	0x60, 0x60, 0x62, 0x62, 0x3c, 0x3c, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
	0x06, 0x06, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30,
	0x18, 0x18, 0x0c, 0x0c, 0x06, 0x06, 0x00, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x3e, 0x3e, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x3c, 0x3c, 0x00, 0x00,
	0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xd6, 0xd6,
	0xd6, 0xd6, 0xd6, 0xd6, 0xfc, 0xfc, 0x00, 0x00,
	0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c,
	0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0x00, 0x00,
	0x00, 0x00, 0x6c, 0x6c, 0x70, 0x70, 0x60, 0x60,
	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00,
	0x3c, 0x3c, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x7e,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00,
	0x60, 0x60, 0x7c, 0x7c, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x7c, 0x7c, 0x00, 0x00,
};
const UINT8 calccrash[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x01, 0x02, 0x07, 0x04, 0x02, 0x08, 0x09, 0x0a, 0x0b, 0x01, 0x0c,
	0x0d, 0x03, 0x0d, 0x05, 0x03, 0x0d, 0x0c, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x01, 0x0f, 0x10, 0x0a, 0x06, 0x0a, 0x11, 0x12,
	0x0a, 0x13, 0x01, 0x03, 0x0d, 0x14, 0x07, 0x09, 0x0a, 0x04, 0x03, 0x0d, 0x0c, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x15, 0x16, 0x11, 0x14, 0x03, 0x0d, 0x0c, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
