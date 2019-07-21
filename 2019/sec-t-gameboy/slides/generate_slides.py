#!/usr/bin/env python3

import yaml
import sys
import string

ALPHA_FONT = ' ' + string.ascii_uppercase.replace('W','') + string.ascii_lowercase + string.digits
assert(len(ALPHA_FONT) == 61+1)

def text_to_charlist(text, font):
    return [font.index(x) for x in text]

def text_to_c_charlist(text, font):
    return ', '.join(['%#04x' % x for x in text_to_charlist(text, font)])

def text_to_c_array(name, text, font):
    return 'const UINT8 %s[] = { %s };' % (name, text_to_c_charlist(text, font))


with open(sys.argv[1], 'r') as fin:
    slides = yaml.load(fin)

print('#include <gb/gb.h>')
print('#include "slide.h"')
print('')

slide_num = 0
for slide in slides['slides']:
    print(text_to_c_array('slide_%d_title' % slide_num, slide['title'], ALPHA_FONT))
    bullet_num = 0
    for bullet in slide['bullets']:
        print(text_to_c_array('slide_%d_bullet_%d' % (slide_num, bullet_num), bullet, ALPHA_FONT))
        bullet_num += 1
    bullet_num = 0
    print('const string slide_%d[] = {' % slide_num)
    print('\t' + ',\n\t'.join(['{ .length = %d, .text = slide_%d_bullet_%d }' % (len(bullet), slide_num, j) for bullet, j in zip(slide['bullets'], range(len(slide['bullets'])))]))
    print('};')

    slide_num += 1

print('const slide slides[] = { ', end='')
slide_num = 0
slide_data = []
for slide in slides['slides']:
    slide_data.append("""{
        .num_bullets = %d,
        .bullets = slide_%d,
        .title = { .length = %d, .text = slide_%d_title }
    }""" % (len(slide['bullets']), slide_num, len(slide['title']), slide_num))
    slide_num += 1
print(', '.join(slide_data))
print('};')

print('const deck the_deck = { .num_slides = %d, .slides = slides };' % len(slides['slides']))
#print('deck deck = { .length = %d, .slides = { %s }};' % (len(slides['slides']), ', '.join(['&slide_%d' % x for x in range(len(slides['slides']))])))
