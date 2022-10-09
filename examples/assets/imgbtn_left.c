#include "../../lvgl.h"

#if LV_BUILD_EXAMPLES

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGBTN_LEFT
    #define LV_ATTRIBUTE_IMG_IMGBTN_LEFT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGBTN_LEFT uint8_t imgbtn_left_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
    /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit, Alpha 8 bit */
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x68, 0x03, 0x68, 0x14, 0x68, 0x23,
    0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x68, 0x40, 0x68, 0xb0, 0x64, 0xe0, 0x64, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x70, 0x68, 0xfc, 0x68, 0xff, 0xd6, 0xff, 0xff, 0xff,
    0x68, 0x00, 0x00, 0x00, 0x68, 0x73, 0x68, 0xff, 0xb1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x00, 0x00, 0x68, 0x40, 0x68, 0xfc, 0xb2, 0xff, 0xff, 0xff, 0xfa, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x03, 0x68, 0xb0, 0x68, 0xff, 0xff, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x14, 0x64, 0xe0, 0xd6, 0xff, 0xfa, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x24, 0x64, 0xff, 0xfa, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x64, 0xff, 0xf9, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x64, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x64, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xd1, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0xac, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x27, 0x68, 0xff, 0x8c, 0xff, 0xd1, 0xff, 0xf9, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
    0x68, 0x23, 0x68, 0xff, 0xac, 0xff, 0x8c, 0xff, 0xd1, 0xff, 0xf9, 0xff, 0xf9, 0xff, 0xf5, 0xff,
    0x68, 0x17, 0x68, 0xe4, 0x8c, 0xff, 0xac, 0xff, 0x8c, 0xff, 0xac, 0xff, 0xd1, 0xff, 0xf5, 0xff,
    0x68, 0x07, 0x68, 0xb8, 0x68, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0x8c, 0xff, 0x8c, 0xff,
    0x00, 0x00, 0x44, 0x5f, 0x44, 0xff, 0x68, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff,
    0x00, 0x00, 0x00, 0x04, 0x44, 0xc8, 0x44, 0xff, 0x8c, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff,
    0x00, 0x00, 0x00, 0x0c, 0x00, 0x40, 0x44, 0xc4, 0x44, 0xff, 0x68, 0xff, 0x8c, 0xff, 0xac, 0xff,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x34, 0x00, 0x54, 0x24, 0x9b, 0x44, 0xfc, 0x44, 0xff, 0x44, 0xff,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x24, 0x00, 0x4f, 0x00, 0x54, 0x00, 0x5b, 0x24, 0x8b, 0x24, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x3b, 0x00, 0x57, 0x00, 0x58, 0x00, 0x58, 0x00, 0x57,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1b, 0x00, 0x40, 0x00, 0x54, 0x00, 0x58, 0x00, 0x58,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x18, 0x00, 0x34, 0x00, 0x48, 0x00, 0x50,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0b, 0x00, 0x1b, 0x00, 0x27,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16
    /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x03, 0xc0, 0x61, 0x14, 0xc0, 0x61, 0x23,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x40, 0xc0, 0x61, 0xb0, 0x80, 0x59, 0xe0, 0x60, 0x59, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x70, 0xc0, 0x61, 0xfc, 0x01, 0x6a, 0xff, 0xf0, 0xb4, 0xff, 0x3b, 0xf7, 0xff,
    0x80, 0x69, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x73, 0xc0, 0x61, 0xff, 0x2c, 0xa4, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xff, 0xff, 0x17, 0xff, 0xff,
    0x00, 0x00, 0x00, 0xc0, 0x61, 0x40, 0xc0, 0x61, 0xfc, 0x2c, 0xa4, 0xff, 0xde, 0xff, 0xff, 0xcc, 0xed, 0xff, 0x47, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xa0, 0x61, 0x03, 0xc0, 0x61, 0xb0, 0x01, 0x6a, 0xff, 0x7b, 0xff, 0xff, 0x47, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x14, 0x80, 0x59, 0xe0, 0x10, 0xb5, 0xff, 0xec, 0xf5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x24, 0x60, 0x59, 0xff, 0x53, 0xe6, 0xff, 0x04, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0xab, 0xed, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x26, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x25, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x26, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x28, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x66, 0xc4, 0xff, 0x47, 0xed, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0xa0, 0x59, 0xff, 0x02, 0x93, 0xff, 0x89, 0xe5, 0xff, 0x26, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x27, 0xa0, 0x59, 0xff, 0xe2, 0x92, 0xff, 0x05, 0xb4, 0xff, 0x8a, 0xed, 0xff, 0x47, 0xe5, 0xff, 0x25, 0xe5, 0xff, 0x05, 0xe5, 0xff,
    0xc0, 0x61, 0x23, 0x80, 0x51, 0xff, 0x42, 0x9b, 0xff, 0xe1, 0x92, 0xff, 0x05, 0xb4, 0xff, 0x8a, 0xed, 0xff, 0xa9, 0xed, 0xff, 0x68, 0xed, 0xff,
    0xc0, 0x61, 0x17, 0x80, 0x51, 0xe4, 0xe2, 0x8a, 0xff, 0x43, 0x9b, 0xff, 0xe2, 0x92, 0xff, 0x02, 0x93, 0xff, 0x66, 0xc4, 0xff, 0x49, 0xe5, 0xff,
    0xa0, 0x61, 0x07, 0xa0, 0x59, 0xb8, 0xa0, 0x59, 0xff, 0x63, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x02, 0x93, 0xff, 0xe1, 0x92, 0xff, 0xc1, 0x8a, 0xff,
    0x00, 0x00, 0x00, 0x80, 0x51, 0x5f, 0x40, 0x49, 0xff, 0x62, 0x72, 0xff, 0x63, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x41, 0xc8, 0x20, 0x41, 0xff, 0xc2, 0x82, 0xff, 0x43, 0x9b, 0xff, 0x63, 0x9b, 0xff, 0x43, 0x9b, 0xff,
    0x40, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x40, 0xe0, 0x30, 0xc4, 0x20, 0x41, 0xff, 0xe1, 0x59, 0xff, 0xc2, 0x82, 0xff, 0x43, 0x9b, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x34, 0x00, 0x00, 0x54, 0xc0, 0x28, 0x9b, 0x20, 0x41, 0xfc, 0x20, 0x41, 0xff, 0x20, 0x41, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x24, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x54, 0x00, 0x00, 0x5b, 0xa0, 0x20, 0x8b, 0xe0, 0x30, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x57, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x57,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x40, 0x00, 0x00, 0x54, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x18, 0x00, 0x00, 0x34, 0x00, 0x00, 0x48, 0x00, 0x00, 0x50,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x27,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 32
    /*Pixel format:  Blue: 8 bit, Green: 8 bit, Red: 8 bit, Alpha: 8 bit*/























    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x61, 0x03, 0x00, 0x38, 0x5f, 0x14, 0x00, 0x38, 0x5f, 0x23,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x5f, 0x40, 0x00, 0x37, 0x5e, 0xb0, 0x00, 0x30, 0x58, 0xe0, 0x00, 0x2c, 0x55, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x5f, 0x70, 0x00, 0x38, 0x5f, 0xfc, 0x0a, 0x40, 0x66, 0xff, 0x7f, 0x9e, 0xb3, 0xff, 0xdc, 0xe6, 0xee, 0xff,
    0x00, 0x32, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x5f, 0x73, 0x00, 0x38, 0x5f, 0xff, 0x60, 0x84, 0x9e, 0xff, 0xfb, 0xfc, 0xfc, 0xff, 0xe3, 0xf7, 0xff, 0xff, 0xba, 0xe1, 0xf6, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x5f, 0x40, 0x00, 0x38, 0x5f, 0xfc, 0x62, 0x85, 0x9e, 0xff, 0xf1, 0xf9, 0xfd, 0xff, 0x61, 0xba, 0xe9, 0xff, 0x35, 0xa7, 0xe3, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x36, 0x5d, 0x03, 0x00, 0x37, 0x5e, 0xb0, 0x0a, 0x40, 0x65, 0xff, 0xda, 0xed, 0xf8, 0xff, 0x3a, 0xa9, 0xe4, 0xff, 0x28, 0xa1, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x14, 0x00, 0x2f, 0x58, 0xe0, 0x84, 0xa0, 0xb4, 0xff, 0x63, 0xbe, 0xee, 0xff, 0x27, 0xa1, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x24, 0x00, 0x2e, 0x56, 0xff, 0x97, 0xc9, 0xe4, 0xff, 0x22, 0x9f, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x2f, 0x56, 0xff, 0x56, 0xb5, 0xe7, 0xff, 0x27, 0xa1, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2f, 0xa4, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x31, 0x56, 0xff, 0x2b, 0xa3, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x30, 0x56, 0xff, 0x34, 0xa6, 0xe2, 0xff, 0x29, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x30, 0x56, 0xff, 0x3d, 0xa6, 0xdd, 0xff, 0x29, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5f, 0x27, 0x00, 0x32, 0x58, 0xff, 0x31, 0x8c, 0xbe, 0xff, 0x36, 0xaa, 0xe5, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5e, 0x27, 0x00, 0x35, 0x5b, 0xff, 0x0f, 0x61, 0x94, 0xff, 0x4a, 0xaf, 0xe4, 0xff, 0x2e, 0xa4, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x38, 0x5e, 0x27, 0x00, 0x34, 0x58, 0xff, 0x0d, 0x5d, 0x8f, 0xff, 0x27, 0x7f, 0xb2, 0xff, 0x4d, 0xb2, 0xe6, 0xff, 0x35, 0xa7, 0xe3, 0xff, 0x2c, 0xa3, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
    0x00, 0x37, 0x5f, 0x23, 0x00, 0x31, 0x54, 0xff, 0x14, 0x69, 0x9b, 0xff, 0x0c, 0x5c, 0x8e, 0xff, 0x27, 0x7f, 0xb2, 0xff, 0x4f, 0xb1, 0xe5, 0xff, 0x4c, 0xb3, 0xe9, 0xff, 0x44, 0xad, 0xe5, 0xff,
    0x00, 0x38, 0x5e, 0x17, 0x00, 0x31, 0x54, 0xe4, 0x12, 0x5c, 0x87, 0xff, 0x15, 0x67, 0x97, 0xff, 0x0d, 0x5d, 0x8f, 0xff, 0x0f, 0x61, 0x94, 0xff, 0x30, 0x8b, 0xbe, 0xff, 0x48, 0xaa, 0xde, 0xff,
    0x00, 0x36, 0x60, 0x07, 0x00, 0x33, 0x57, 0xb8, 0x04, 0x36, 0x56, 0xff, 0x1a, 0x6d, 0x9c, 0xff, 0x16, 0x68, 0x97, 0xff, 0x11, 0x61, 0x92, 0xff, 0x0c, 0x5c, 0x8d, 0xff, 0x09, 0x58, 0x89, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x50, 0x5f, 0x00, 0x2a, 0x48, 0xff, 0x0d, 0x4b, 0x70, 0xff, 0x18, 0x6b, 0x99, 0xff, 0x18, 0x6a, 0x98, 0xff, 0x17, 0x69, 0x97, 0xff, 0x17, 0x68, 0x97, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x26, 0x41, 0xc8, 0x01, 0x26, 0x41, 0xff, 0x11, 0x57, 0x7e, 0xff, 0x18, 0x6a, 0x97, 0xff, 0x18, 0x6b, 0x99, 0xff, 0x18, 0x6a, 0x98, 0xff,
    0x00, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x02, 0x04, 0x40, 0x00, 0x1e, 0x34, 0xc4, 0x00, 0x24, 0x3f, 0xff, 0x08, 0x3c, 0x5c, 0xff, 0x11, 0x57, 0x7f, 0xff, 0x18, 0x69, 0x96, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x54, 0x00, 0x18, 0x29, 0x9b, 0x00, 0x23, 0x3e, 0xfc, 0x00, 0x24, 0x3e, 0xff, 0x00, 0x24, 0x3e, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x54, 0x00, 0x01, 0x02, 0x5b, 0x00, 0x14, 0x22, 0x8b, 0x00, 0x1b, 0x2f, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x57,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x58,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x50,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x27,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
};

const lv_img_dsc_t imgbtn_left = {
    .header.always_zero = 0,
    .header.w = 8,
    .header.h = 50,
    .data_size = 400 * LV_COLOR_FORMAT_NATIVE_ALPHA_SIZE,
    .header.cf = LV_COLOR_FORMAT_NATIVE_ALPHA,
    .data = imgbtn_left_map,
};

#endif /* LV_BUILD_EXAMPLES */
