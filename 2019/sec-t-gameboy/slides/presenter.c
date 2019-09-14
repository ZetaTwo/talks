#include <gb/gb.h>

#include "fonts/alpha.h"

#include "slide.h"

// set_next_slide
// 
// 
const unsigned char tile_blank[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const UINT8 clear[] = {0};


void clear_screen(void) {
    for(UINT8 y = 0; y < (SCREENHEIGHT/8); y++) {
        for(UINT8 x = 0; x < (SCREENWIDTH/8); x++) {
            set_bkg_tiles(x, y, 1, 1, clear);
        }
    }
}

void set_slide(UINT8 slide_idx) {
    for(UINT8 i = 0; i < 30; i++) {
        //scroll_bkg(-i, -i);
        SCX_REG = 4*i;
        //SCY_REG = 2*i;
        wait_vbl_done();
    }
    SCX_REG = 0;
    SCY_REG = 0;

    HIDE_BKG;
    clear_screen();

    const slide *new_slide = &the_deck.slides[slide_idx];
    set_bkg_tiles(1, 1, new_slide->title.length, 1, new_slide->title.text);
    for(UINT8 bullet_idx = 0; bullet_idx < new_slide->num_bullets; bullet_idx++) {
        set_bkg_tiles(2, 3 + 2*bullet_idx, new_slide->bullets[bullet_idx].length, 1, new_slide->bullets[bullet_idx].text);
    }
    SHOW_BKG;
}

void init(void) {
    set_bkg_data(0, 1, tile_blank);
    set_bkg_data(1, 61, tile_alpha);
    clear_screen();
    SHOW_BKG;
}

void main()
{
    init();

    UINT8 current_slide = 0;
    while(1) {
        set_slide(current_slide);
        current_slide = (current_slide+1) % the_deck.num_slides;
        waitpad(J_A);
        waitpadup();
    }    
}
