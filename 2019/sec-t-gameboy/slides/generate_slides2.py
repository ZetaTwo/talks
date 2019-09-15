#!/usr/bin/env python3

import yaml
import sys
import string

LINE_WIDTH = 20
NUM_LINES = 18

FONT_8X8 = ''.join([chr(x) for x in range(32,127)])
assert(len(FONT_8X8) == 95)

def text_to_charlist(text, font):
    return [font.index(x) for x in text]

def text_to_c_charlist(text, font):
    return ', '.join(['%#04x' % x for x in text_to_charlist(text, font)])

def text_to_c_array(name, text, font):
    return 'const UINT8 %s[] = { %s };' % (name, text_to_c_charlist(text, font))


with open(sys.argv[1], 'r') as fin:
    slides = yaml.load(fin)

print('#include <gb/gb.h>')
print('#include "slide2.h"')
print('')

slide_num = 0
for slide in [[]] + slides['slides']:
    slide_data = []
    for line in slide:
        slide_data += ['%#04x' % FONT_8X8.index(x) for x in line.ljust(LINE_WIDTH, ' ')]
    for _ in range(NUM_LINES-len(slide)):
        slide_data += ['%#04x' % FONT_8X8.index(x) for x in ' '*LINE_WIDTH]
    assert(len(slide_data) == LINE_WIDTH*NUM_LINES)
    print('const UINT8 slide_%d[] = { %s };' % (slide_num, ', '.join(slide_data)))
    slide_num += 1

print('const UINT8 *slides[] = { %s };' % ', '.join(['slide_%d' % i for i in range(1+len(slides['slides']))]))
print('const UINT8 num_slides = %d;' % (len(slides['slides'])+1))
