#include <gb/gb.h>

#include "fonts/8x8.h"

#include "slide2.h"
#include "midnightlogo.h"
#include "hfslogo.h"
#include "calcscreenshot.h"
#include "front.h"

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

int getjoypad(void) {
    while(1) {
        switch(joypad()) {
            case J_LEFT:
            return J_LEFT;
            break;
            case J_RIGHT:
            return J_RIGHT;
            break;
            default:
            break;
        }
    }
}

void show_image(UINT8 len, UINT8* data, UINT8* map) {
    HIDE_BKG;
    set_bkg_data(0, len, data);
    set_bkg_tiles(0, 0, 20, 18, map);
    SHOW_BKG;
}

void main()
{
    init();

    slide_mode();

    UINT8 current_slide = 0;

    while(1) {
        switch(current_slide+1) {
            case 1:
            show_image(front_data_len, front_data, front);
            break;
            case 3:
            show_image(hfs_logo_data_len, hfs_logo_data, hfs_logo);
            break;
            case 5:
            show_image(midnight_logo_data_len, midnight_logo_data, midnight_logo);
            break;
            case 8:
            show_image(calc_data_len, calc_data, calc);
            break;
            case 10:
            show_image(calccrash_data_len, calccrash_data, calccrash);
            break;
            case 11:
            show_image(calcflag_data_len, calcflag_data, calcflag);
            break;
            default:
            slide_mode();
            set_slide(current_slide+1);
            break;
        }

        switch (getjoypad())
        {
        case J_LEFT:
            current_slide = (current_slide-1+(num_slides-1)) % (num_slides-1);
            break;
        case J_RIGHT:
            current_slide = (current_slide+1) % (num_slides-1);
            break;
        default:
            break;
        }
        waitpadup();
    }    
}
