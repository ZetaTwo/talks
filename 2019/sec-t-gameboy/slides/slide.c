#include <gb/gb.h>
#include "slide.h"

const UINT8 slide_0_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x35 };
const UINT8 slide_0_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35 };
const UINT8 slide_0_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x36 };
const string slide_0[] = {
	{ .length = 8, .text = slide_0_bullet_0 },
	{ .length = 8, .text = slide_0_bullet_1 }
};
const UINT8 slide_1_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x36 };
const UINT8 slide_1_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x37 };
const UINT8 slide_1_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x38 };
const string slide_1[] = {
	{ .length = 8, .text = slide_1_bullet_0 },
	{ .length = 8, .text = slide_1_bullet_1 }
};
const UINT8 slide_2_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x37 };
const UINT8 slide_2_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x39 };
const UINT8 slide_2_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x3a };
const string slide_2[] = {
	{ .length = 8, .text = slide_2_bullet_0 },
	{ .length = 8, .text = slide_2_bullet_1 }
};
const UINT8 slide_3_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x38 };
const UINT8 slide_3_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x3b };
const UINT8 slide_3_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x3c };
const string slide_3[] = {
	{ .length = 8, .text = slide_3_bullet_0 },
	{ .length = 8, .text = slide_3_bullet_1 }
};
const UINT8 slide_4_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x39 };
const UINT8 slide_4_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x3d };
const UINT8 slide_4_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x34 };
const string slide_4[] = {
	{ .length = 8, .text = slide_4_bullet_0 },
	{ .length = 9, .text = slide_4_bullet_1 }
};
const UINT8 slide_5_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x3a };
const UINT8 slide_5_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x35 };
const UINT8 slide_5_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x36 };
const string slide_5[] = {
	{ .length = 9, .text = slide_5_bullet_0 },
	{ .length = 9, .text = slide_5_bullet_1 }
};
const UINT8 slide_6_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x3b };
const UINT8 slide_6_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x37 };
const UINT8 slide_6_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x38 };
const string slide_6[] = {
	{ .length = 9, .text = slide_6_bullet_0 },
	{ .length = 9, .text = slide_6_bullet_1 }
};
const UINT8 slide_7_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x3c };
const UINT8 slide_7_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x39 };
const UINT8 slide_7_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x3a };
const string slide_7[] = {
	{ .length = 9, .text = slide_7_bullet_0 },
	{ .length = 9, .text = slide_7_bullet_1 }
};
const UINT8 slide_8_title[] = { 0x14, 0x1e, 0x2c, 0x2d, 0x00, 0x2c, 0x25, 0x22, 0x1d, 0x1e, 0x00, 0x3d };
const UINT8 slide_8_bullet_0[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x3b };
const UINT8 slide_8_bullet_1[] = { 0x02, 0x2e, 0x25, 0x25, 0x1e, 0x2d, 0x00, 0x35, 0x3c };
const string slide_8[] = {
	{ .length = 9, .text = slide_8_bullet_0 },
	{ .length = 9, .text = slide_8_bullet_1 }
};
const slide slides[] = { {
        .num_bullets = 2,
        .bullets = slide_0,
        .title = { .length = 12, .text = slide_0_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_1,
        .title = { .length = 12, .text = slide_1_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_2,
        .title = { .length = 12, .text = slide_2_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_3,
        .title = { .length = 12, .text = slide_3_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_4,
        .title = { .length = 12, .text = slide_4_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_5,
        .title = { .length = 12, .text = slide_5_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_6,
        .title = { .length = 12, .text = slide_6_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_7,
        .title = { .length = 12, .text = slide_7_title }
    }, {
        .num_bullets = 2,
        .bullets = slide_8,
        .title = { .length = 12, .text = slide_8_title }
    }
};
const deck the_deck = { .num_slides = 9, .slides = slides };
