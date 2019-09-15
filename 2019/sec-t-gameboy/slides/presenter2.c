#include <gb/gb.h>

#include "fonts/8x8.h"

#include "slide2.h"
#include "midnightlogo.h"
#include "hfslogo.h"
#include "calcscreenshot.h"

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

    set_bkg_tiles(0, 0, 20, 18, slides[slide_idx]);
}

void init(void) {
    set_bkg_data(0, 94, tile_8x8);
    clear_screen();
    SHOW_BKG;
}

void slide_mode(void) {
    HIDE_BKG;
    set_bkg_data(0, 94, tile_8x8);
    set_slide(0);
    SHOW_BKG;
}

void main()
{
    init();

    HIDE_BKG;
    set_bkg_data(0, midnight_logo_data_len, midnight_logo_data);
    set_bkg_tiles(0, 0, 20, 18, midnight_logo);
    SHOW_BKG;
    waitpad(J_A);
    waitpadup();

    HIDE_BKG;
    set_bkg_data(0, hfs_logo_data_len, hfs_logo_data);
    set_bkg_tiles(0, 0, 20, 18, hfs_logo);
    SHOW_BKG;
    waitpad(J_A);
    waitpadup();

    HIDE_BKG;
    set_bkg_data(0, calc_data_len, calc_data);
    set_bkg_tiles(0, 0, 20, 18, calc);
    SHOW_BKG;
    waitpad(J_A);
    waitpadup();

    slide_mode();

    UINT8 current_slide;
    while(1) {
        set_slide(current_slide+1);
        current_slide = (current_slide+1) % (num_slides-1);
        waitpad(J_A);
        waitpadup();
    }    
}
