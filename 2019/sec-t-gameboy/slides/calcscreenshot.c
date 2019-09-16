// Width: 160, height: 144
// Number of unique colors: 4
// Number of unique tiles: 41
#include <gb/gb.h>
#include "midnightlogo.h"
const UINT8 calc_data_len = 41;
const UINT8 calc_data[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0f, 0x07, 0x08, 0x04, 0x08, 0x04, 0x08,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xf8, 0xf0, 0x08, 0x10, 0x08, 0x10, 0x08,
	0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08,
	0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08,
	0x00, 0x00, 0x3e, 0x00, 0x5d, 0x00, 0x63, 0x00,
	0x63, 0x00, 0x63, 0x00, 0x63, 0x00, 0x5d, 0x00,
	0x00, 0x00, 0x3e, 0x3e, 0x5d, 0x7f, 0x63, 0x63,
	0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x5d, 0x41,
	0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08,
	0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08,
	0x7f, 0x00, 0x63, 0x00, 0x63, 0x00, 0x63, 0x00,
	0x63, 0x00, 0x5d, 0x00, 0x3e, 0x00, 0x00, 0x00,
	0x7f, 0x41, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
	0x63, 0x63, 0x5d, 0x7f, 0x3e, 0x3e, 0x00, 0x00,
	0x04, 0x08, 0x04, 0x08, 0x07, 0x08, 0x00, 0x0f,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x08, 0x10, 0x08, 0xf0, 0x08, 0x00, 0xf8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00,
	0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00,
	0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00,
	0x00, 0x02, 0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02,
	0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02,
	0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00,
	0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00,
	0xff, 0x10, 0xff, 0x30, 0xff, 0x10, 0xff, 0x10,
	0xff, 0x10, 0xff, 0x10, 0xff, 0x7c, 0xff, 0x00,
	0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02,
	0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02,
	0xff, 0x7c, 0xff, 0x82, 0xff, 0x02, 0xff, 0x1c,
	0xff, 0x60, 0xff, 0x80, 0xff, 0xfe, 0xff, 0x00,
	0xff, 0xfe, 0xff, 0x04, 0xff, 0x18, 0xff, 0x04,
	0xff, 0x02, 0xff, 0x82, 0xff, 0x7c, 0xff, 0x00,
	0xff, 0x10, 0xff, 0x10, 0xff, 0x10, 0xff, 0xfe,
	0xff, 0x10, 0xff, 0x10, 0xff, 0x10, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00,
	0xff, 0x1f, 0xff, 0x20, 0xff, 0x20, 0xff, 0x20,
	0xff, 0x20, 0xff, 0x20, 0xff, 0x1f, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x80, 0xff, 0x00, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x80, 0xff, 0x00, 0xff, 0x00,
	0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00,
	0x7f, 0x00, 0x7f, 0x00, 0x00, 0xff, 0x00, 0x00,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
	0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02, 0xfc, 0x02,
	0xfc, 0x02, 0xfc, 0x02, 0x00, 0xfe, 0x00, 0x00,
	0xff, 0x0c, 0xff, 0x14, 0xff, 0x24, 0xff, 0x44,
	0xff, 0x84, 0xff, 0xfe, 0xff, 0x04, 0xff, 0x00,
	0xff, 0xfc, 0xff, 0x80, 0xff, 0xfc, 0xff, 0x02,
	0xff, 0x02, 0xff, 0x82, 0xff, 0x7c, 0xff, 0x00,
	0xff, 0x7c, 0xff, 0x80, 0xff, 0x80, 0xff, 0xfc,
	0xff, 0x82, 0xff, 0x82, 0xff, 0x7c, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xfc,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00,
	0xff, 0x1f, 0xff, 0x20, 0xff, 0x20, 0xff, 0x24,
	0xff, 0x22, 0xff, 0x21, 0xff, 0x1e, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80,
	0xff, 0x80, 0xff, 0x00, 0xff, 0x80, 0xff, 0x00,
	0xff, 0xfe, 0xff, 0x82, 0xff, 0x04, 0xff, 0x08,
	0xff, 0x10, 0xff, 0x10, 0xff, 0x10, 0xff, 0x00,
	0xff, 0x7c, 0xff, 0x82, 0xff, 0x82, 0xff, 0x7c,
	0xff, 0x82, 0xff, 0x82, 0xff, 0x7c, 0xff, 0x00,
	0xff, 0x7c, 0xff, 0x82, 0xff, 0x82, 0xff, 0x7e,
	0xff, 0x02, 0xff, 0x02, 0xff, 0x7c, 0xff, 0x00,
	0xff, 0x82, 0xff, 0x44, 0xff, 0x28, 0xff, 0x10,
	0xff, 0x28, 0xff, 0x44, 0xff, 0x82, 0xff, 0x00,
	0xff, 0x7c, 0xff, 0xc6, 0xff, 0x8a, 0xff, 0x92,
	0xff, 0xa2, 0xff, 0xc2, 0xff, 0x7c, 0xff, 0x00,
	0xff, 0x02, 0xff, 0x04, 0xff, 0x08, 0xff, 0x10,
	0xff, 0x20, 0xff, 0x40, 0xff, 0x80, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x3f, 0xff, 0x00,
	0xff, 0x00, 0xff, 0x3f, 0xff, 0x00, 0xff, 0x00,
};
const UINT8 calc[] = {
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02,
	0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x06,
	0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x06,
	0x09, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b,
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0c, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0c, 0x0d, 0x0e, 0x0e, 0x0e, 0x0f, 0x0c,
	0x0c, 0x10, 0x11, 0x12, 0x10, 0x13, 0x12, 0x10, 0x14, 0x12, 0x10, 0x15, 0x12, 0x0c, 0x10, 0x16, 0x17, 0x18, 0x12, 0x0c,
	0x0c, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x0c, 0x19, 0x1a, 0x1a, 0x1a, 0x1b, 0x0c,
	0x0c, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0c, 0x0d, 0x0e, 0x0e, 0x0e, 0x0f, 0x0c,
	0x0c, 0x10, 0x1c, 0x12, 0x10, 0x1d, 0x12, 0x10, 0x1e, 0x12, 0x10, 0x1f, 0x12, 0x0c, 0x10, 0x16, 0x20, 0x21, 0x12, 0x0c,
	0x0c, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x0c, 0x19, 0x1a, 0x1a, 0x1a, 0x1b, 0x0c,
	0x0c, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0d, 0x0e, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0c, 0x10, 0x22, 0x12, 0x10, 0x23, 0x12, 0x10, 0x24, 0x12, 0x10, 0x25, 0x12, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0c, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x19, 0x1a, 0x1b, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x0d, 0x0e, 0x0f, 0x0c, 0x0c, 0x0c, 0x0d, 0x0e, 0x0f, 0x0c, 0x0d, 0x0e, 0x0e, 0x0e, 0x0f, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x10, 0x26, 0x12, 0x0c, 0x0c, 0x0c, 0x10, 0x27, 0x12, 0x0c, 0x10, 0x16, 0x28, 0x16, 0x12, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x19, 0x1a, 0x1b, 0x0c, 0x0c, 0x0c, 0x19, 0x1a, 0x1b, 0x0c, 0x19, 0x1a, 0x1a, 0x1a, 0x1b, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
};
