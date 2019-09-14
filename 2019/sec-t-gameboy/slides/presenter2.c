#include <gb/gb.h>

#include "fonts/8x8.h"

#include "slide2.h"

void clear_screen(void) {
    set_bkg_tiles(0, 0, 20, 18, slides[0]);
}

void set_slide(UINT8 slide_idx) {
    /*for(UINT8 i = 0; i < 30; i++) {
        //scroll_bkg(-i, -i);
        SCX_REG = 4*i;
        //SCY_REG = 2*i;
        wait_vbl_done();
    }*/
    SCX_REG = 0;
    SCY_REG = 0;

    //HIDE_BKG;
    set_bkg_tiles(0, 0, 20, 18, slides[slide_idx]);
    //SHOW_BKG;
}

void init(void) {
    set_bkg_data(0, 94, tile_8x8);
    clear_screen();
    SHOW_BKG;
}

void main()
{
    init();

    UINT8 current_slide;
    while(1) {
        set_slide(current_slide+1);
        current_slide = (current_slide+1) % (num_slides-1);
        waitpad(J_A);
        waitpadup();
    }    
}
