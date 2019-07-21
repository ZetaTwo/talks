#include <gb/gb.h>

typedef struct {
    const UINT8 length;
    const UINT8* text;
} string;

typedef struct {
    const UINT8 num_bullets;
    const string* bullets;
    const string title;
} slide;

typedef struct {
    const UINT8 num_slides;
    const slide* slides;
} deck;

extern const deck the_deck;
