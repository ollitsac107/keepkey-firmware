/*
 * This file is part of the KeepKey project.
 *
 * Copyright (C) 2015 KeepKey LLC
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "keepkey/board/resources.h"

#include "keepkey/board/keepkey_flash.h"
#include "keepkey/variant/variant.h"

#include <string.h>



static const uint8_t kk_logo_1_data[1189] = 
{
        0xfc, 0xb5, 0xf7, 0xeb, 0x58, 0x34, 0x00, 0x03, 0xff, 0xff, 0xdd, 0x34, 0x00, 0xff, 0xe2, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x05, 0x00, 0xfe, 0x33, 0xf7, 0x02, 0xff, 0x04, 0x00, 0xfd, 0x11, 0x8f, 0xe2, 0x03, 0xff, 0xfd, 0xdd, 0x79, 0x07, 0x05, 0x00, 0xfd, 0x11, 0x8f, 0xe2, 0x03, 0xff, 0xfd, 0xdd, 0x79, 0x07, 0x03, 0x00, 0xf4, 0xb5, 0xf7, 0xeb, 0x58, 0x11, 0x8f, 0xdd, 0xff, 0xeb, 0xb5, 0x79, 0x07, 0x02, 0x00, 0x03, 0xff, 0x04, 0x00, 0xfe, 0x1c, 0xeb, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x1c, 0xdd, 0x07, 0xff, 0xfe, 0xb5, 0x07, 0x03, 0x00, 0xfe, 0x1c, 0xdd, 0x07, 0xff, 0xfe, 0xb5, 0x07, 0x02, 0x00, 0x03, 0xff, 0x02, 0xdd, 0x06, 0xff, 0xfd, 0xdd, 0x1c, 0x00, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x11, 0xdd, 0x04, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xcd, 0x03, 0xff, 0xfc, 0xb5, 0x8f, 0xa3, 0xeb, 0x02, 0xff, 0xff, 0x8f, 0x02, 0x00, 0xfe, 0x07, 0xcd, 0x03, 0xff, 0xfc, 0xb5, 0x8f, 0xa3, 0xeb, 0x02, 0xff, 0xff, 0x8f, 0x02, 0x00, 0xff, 0xe2, 0x0b, 0xff, 0xfe, 0xb5, 0x00, 0x03, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xcd, 0x03, 0xff, 0xff, 0x79, 0x03, 0x00, 0xff, 0x58, 0x02, 0xff, 0xfe, 0xf7, 0x33, 0x03, 0x00, 0xfe, 0x1c, 0xeb, 0x02, 0xff, 0xfd, 0x11, 0x00, 0x58, 0x02, 0xff, 0xfe, 0xf7, 0x33, 0x03, 0x00, 0xfe, 0x1c, 0xeb, 0x02, 0xff, 0xff, 0x11, 0x02, 0x00, 0x03, 0xff, 0xfe, 0xa3, 0x33, 0x02, 0x07, 0xfe, 0x33, 0xdd, 0x02, 0xff, 0xfe, 0xf7, 0x00, 0x03, 0xff, 0xfd, 0x00, 0x07, 0xb5, 0x03, 0xff, 0xff, 0x79, 0x04, 0x00, 0xff, 0xa3, 0x02, 0xff, 0xff, 0x8f, 0x05, 0x00, 0xff, 0xa3, 0x02, 0xff, 0xfd, 0x58, 0x00, 0xa3, 0x02, 0xff, 0xff, 0x8f, 0x05, 0x00, 0xff, 0xa3, 0x02, 0xff, 0xff, 0x58, 0x02, 0x00, 0x03, 0xff, 0x05, 0x00, 0xff, 0x58, 0x03, 0xff, 0xff, 0x00, 0x08, 0xff, 0xff, 0x79, 0x05, 0x00, 0xff, 0xdd, 0x02, 0xff, 0xff, 0x33, 0x05, 0x00, 0xff, 0x79, 0x02, 0xff, 0xfd, 0x8f, 0x00, 0xdd, 0x02, 0xff, 0xff, 0x33, 0x05, 0x00, 0xff, 0x79, 0x02, 0xff, 0xff, 0x8f, 0x02, 0x00, 0x03, 0xff, 0x05, 0x00, 0xff, 0x1c, 0x03, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff, 0x79, 0x06, 0x00, 0x0c, 0xff, 0xfe, 0xb5, 0x00, 0x0c, 0xff, 0xff, 0xb5, 0x02, 0x00, 0x03, 0xff, 0x05, 0x00, 0xff, 0x07, 0x03, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff, 0x79, 0x06, 0x00, 0x0c, 0xff, 0xfe, 0xa3, 0x00, 0x0c, 0xff, 0xff, 0xa3, 0x02, 0x00, 0x03, 0xff, 0x05, 0x00, 0xff, 0x07, 0x03, 0xff, 0xff, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x8f, 0x03, 0xff, 0xff, 0x79, 0x05, 0x00, 0xfd, 0xe2, 0xff, 0xf7, 0x0b, 0x00, 0xfd, 0xe2, 0xff, 0xf7, 0x0c, 0x00, 0x03, 0xff, 0x05, 0x00, 0xff, 0x1c, 0x03, 0xff, 0xff, 0x00, 0x03, 0xff, 0xfd, 0x00, 0x07, 0xb5, 0x03, 0xff, 0xff, 0x79, 0x04, 0x00, 0xff, 0xb5, 0x02, 0xff, 0xff, 0x11, 0x0a, 0x00, 0xff, 0xb5, 0x02, 0xff, 0xff, 0x11, 0x0b, 0x00, 0x03, 0xff, 0x05, 0x00, 0xff, 0x58, 0x03, 0xff, 0xff, 0x00, 0x03, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xcd, 0x03, 0xff, 0xff, 0x79, 0x03, 0x00, 0xff, 0x79, 0x02, 0xff, 0xff, 0x8f, 0x04, 0x00, 0xfc, 0x07, 0x58, 0x8f, 0x11, 0x02, 0x00, 0xff, 0x79, 0x02, 0xff, 0xff, 0x8f, 0x04, 0x00, 0xfc, 0x07, 0x58, 0x8f, 0x11, 0x03, 0x00, 0x03, 0xff, 0xfe, 0xa3, 0x33, 0x02, 0x07, 0xfe, 0x33, 0xdd, 0x02, 0xff, 0xfe, 0xf7, 0x00, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x11, 0xdd, 0x04, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xeb, 0x02, 0xff, 0xfb, 0xdd, 0xa3, 0x8f, 0xb5, 0xe2, 0x02, 0xff, 0xff, 0x8f, 0x02, 0x00, 0xfe, 0x07, 0xeb, 0x02, 0xff, 0xfb, 0xdd, 0xa3, 0x8f, 0xb5, 0xe2, 0x02, 0xff, 0xff, 0x8f, 0x03, 0x00, 0x0b, 0xff, 0xfe, 0xb5, 0x00, 0x03, 0xff, 0x04, 0x00, 0xfe, 0x1c, 0xeb, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x33, 0xf7, 0x08, 0xff, 0xff, 0xa3, 0x03, 0x00, 0xfe, 0x33, 0xf7, 0x08, 0xff, 0xff, 0xa3, 0x03, 0x00, 0x03, 0xff, 0xff, 0xdd, 0x06, 0xff, 0xfd, 0xdd, 0x1c, 0x00, 0x03, 0xff, 0x05, 0x00, 0xfe, 0x33, 0xf7, 0x02, 0xff, 0x04, 0x00, 0xf7, 0x1c, 0xa3, 0xe2, 0xff, 0xf7, 0xe2, 0xb5, 0x8f, 0x33, 0x05, 0x00, 0xf7, 0x1c, 0xa3, 0xe2, 0xff, 0xf7, 0xe2, 0xb5, 0x8f, 0x33, 0x04, 0x00, 0x03, 0xff, 0xf8, 0x11, 0x8f, 0xdd, 0xff, 0xeb, 0xb5, 0x79, 0x07, 0x02, 0x00, 0x03, 0xff, 0x28, 0x00, 0x03, 0xff, 0x0a, 0x00, 0x03, 0xff, 0x28, 0x00, 0x03, 0xff, 0x0a, 0x00, 0x03, 0xff, 0x28, 0x00, 0x03, 0xff, 0x0a, 0x00, 0x03, 0xff, 0x28, 0x00, 0x03, 0xff, 0x0a, 0x00, 0x03, 0xff, 0x05, 0x00, 0xfe, 0x33, 0xf7, 0x02, 0xff, 0x04, 0x00, 0xfd, 0x11, 0x8f, 0xe2, 0x03, 0xff, 0xfd, 0xdd, 0x79, 0x07, 0x02, 0x00, 0x05, 0xff, 0x04, 0x00, 0x05, 0xff, 0x02, 0x00, 0x03, 0xff, 0x0a, 0x00, 0x03, 0xff, 0x04, 0x00, 0xfe, 0x1c, 0xeb, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x1c, 0xdd, 0x07, 0xff, 0xfd, 0xb5, 0x07, 0x00, 0x05, 0xff, 0x04, 0x00, 0x05, 0xff, 0x02, 0x00, 0x03, 0xff, 0x0a, 0x00, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x11, 0xdd, 0x04, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xcd, 0x03, 0xff, 0xfc, 0xb5, 0x8f, 0xa3, 0xeb, 0x02, 0xff, 0xff, 0x8f, 0x03, 0x00, 0x03, 0xff, 0x06, 0x00, 0x03, 0xff, 0x02, 0x00, 0x03, 0xff, 0x0a, 0x00, 0x03, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xcd, 0x03, 0xff, 0xff, 0x79, 0x03, 0x00, 0xff, 0x58, 0x02, 0xff, 0xfe, 0xf7, 0x33, 0x03, 0x00, 0xfe, 0x1c, 0xeb, 0x02, 0xff, 0xff, 0x11, 0x02, 0x00, 0x03, 0xff, 0x06, 0x00, 0x03, 0xff, 0x0f, 0x00, 0x03, 0xff, 0xfd, 0x00, 0x07, 0xb5, 0x03, 0xff, 0xff, 0x79, 0x04, 0x00, 0xff, 0xa3, 0x02, 0xff, 0xff, 0x8f, 0x05, 0x00, 0xff, 0xa3, 0x02, 0xff, 0xff, 0x58, 0x02, 0x00, 0x03, 0xff, 0x06, 0x00, 0x03, 0xff, 0x0f, 0x00, 0x08, 0xff, 0xff, 0x79, 0x05, 0x00, 0xff, 0xdd, 0x02, 0xff, 0xff, 0x33, 0x05, 0x00, 0xff, 0x79, 0x02, 0xff, 0xff, 0x8f, 0x02, 0x00, 0x03, 0xff, 0x06, 0x00, 0x03, 0xff, 0x0f, 0x00, 0x07, 0xff, 0xff, 0x79, 0x06, 0x00, 0x0c, 0xff, 0xff, 0xb5, 0x02, 0x00, 0x03, 0xff, 0x06, 0x00, 0x03, 0xff, 0x0f, 0x00, 0x07, 0xff, 0xff, 0x79, 0x06, 0x00, 0x0c, 0xff, 0xff, 0xa3, 0x02, 0x00, 0x03, 0xff, 0x06, 0x00, 0x03, 0xff, 0x0f, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x8f, 0x03, 0xff, 0xff, 0x79, 0x05, 0x00, 0xfd, 0xe2, 0xff, 0xf7, 0x0c, 0x00, 0x03, 0xff, 0xff, 0x07, 0x05, 0x00, 0x03, 0xff, 0x0f, 0x00, 0x03, 0xff, 0xfd, 0x00, 0x07, 0xb5, 0x03, 0xff, 0xff, 0x79, 0x04, 0x00, 0xff, 0xb5, 0x02, 0xff, 0xff, 0x11, 0x0b, 0x00, 0xff, 0xeb, 0x02, 0xff, 0xff, 0x1c, 0x04, 0x00, 0xff, 0x11, 0x03, 0xff, 0x0f, 0x00, 0x03, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xcd, 0x03, 0xff, 0xff, 0x79, 0x03, 0x00, 0xff, 0x79, 0x02, 0xff, 0xff, 0x8f, 0x04, 0x00, 0xfc, 0x07, 0x58, 0x8f, 0x11, 0x03, 0x00, 0xff, 0xb5, 0x02, 0xff, 0xff, 0x58, 0x03, 0x00, 0xfe, 0x07, 0xb5, 0x03, 0xff, 0x0f, 0x00, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x11, 0xdd, 0x04, 0xff, 0x02, 0x00, 0xfe, 0x07, 0xeb, 0x02, 0xff, 0xfb, 0xdd, 0xa3, 0x8f, 0xb5, 0xe2, 0x02, 0xff, 0xff, 0x8f, 0x03, 0x00, 0xff, 0x79, 0x02, 0xff, 0xfb, 0xf7, 0xa3, 0x8f, 0xb5, 0xe2, 0x04, 0xff, 0x0f, 0x00, 0x03, 0xff, 0x04, 0x00, 0xfe, 0x1c, 0xeb, 0x03, 0xff, 0x03, 0x00, 0xfe, 0x33, 0xf7, 0x08, 0xff, 0xff, 0xa3, 0x03, 0x00, 0xfe, 0x07, 0xdd, 0x06, 0xff, 0xff, 0x8f, 0x03, 0xff, 0x0f, 0x00, 0x03, 0xff, 0x05, 0x00, 0xfe, 0x33, 0xf7, 0x02, 0xff, 0x04, 0x00, 0xf7, 0x1c, 0xa3, 0xe2, 0xff, 0xf7, 0xe2, 0xb5, 0x8f, 0x33, 0x05, 0x00, 0xf8, 0x11, 0xa3, 0xe2, 0xff, 0xeb, 0xb5, 0x58, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x35, 0x00, 0x03, 0xff, 0x34, 0x00, 0xff, 0xe2, 0x03, 0xff, 0x34, 0x00, 0x03, 0xff, 0xff, 0xdd, 0x34, 0x00, 0xfc, 0xb5, 0xf7, 0xeb, 0x58, 0x7f, 0x00, 0x37, 0x00
};
static const VariantImage kk_logo_1_image = {56, 49, sizeof(kk_logo_1_data), kk_logo_1_data};

const VariantAnimation kk_logo = {
    21, 
    {
        {100, 9, 25, 0, &kk_logo_1_image},
        {100, 9, 25, 5, &kk_logo_1_image},
        {100, 9, 25, 10, &kk_logo_1_image},
        {100, 9, 25, 15, &kk_logo_1_image},
        {100, 9, 25, 20, &kk_logo_1_image},
        {100, 9, 25, 25, &kk_logo_1_image},
        {100, 9, 25, 30, &kk_logo_1_image},
        {100, 9, 25, 35, &kk_logo_1_image},
        {100, 9, 25, 40, &kk_logo_1_image},
        {100, 9, 25, 45, &kk_logo_1_image},
        {100, 9, 25, 50, &kk_logo_1_image},
        {100, 9, 25, 55, &kk_logo_1_image},
        {100, 9, 25, 60, &kk_logo_1_image},
        {100, 9, 25, 65, &kk_logo_1_image},
        {100, 9, 25, 70, &kk_logo_1_image},
        {100, 9, 25, 75, &kk_logo_1_image},
        {100, 9, 25, 80, &kk_logo_1_image},
        {100, 9, 25, 85, &kk_logo_1_image},
        {100, 9, 25, 90, &kk_logo_1_image},
        {100, 9, 25, 95, &kk_logo_1_image},
        {100, 9, 25, 100, &kk_logo_1_image}
    }
};
const VariantAnimation kk_logo_reversed = {
    21, 
    {
        {100, 9, 25, 100, &kk_logo_1_image},
        {100, 9, 25, 95, &kk_logo_1_image},
        {100, 9, 25, 90, &kk_logo_1_image},
        {100, 9, 25, 85, &kk_logo_1_image},
        {100, 9, 25, 80, &kk_logo_1_image},
        {100, 9, 25, 75, &kk_logo_1_image},
        {100, 9, 25, 70, &kk_logo_1_image},
        {100, 9, 25, 65, &kk_logo_1_image},
        {100, 9, 25, 60, &kk_logo_1_image},
        {100, 9, 25, 55, &kk_logo_1_image},
        {100, 9, 25, 50, &kk_logo_1_image},
        {100, 9, 25, 45, &kk_logo_1_image},
        {100, 9, 25, 40, &kk_logo_1_image},
        {100, 9, 25, 35, &kk_logo_1_image},
        {100, 9, 25, 30, &kk_logo_1_image},
        {100, 9, 25, 25, &kk_logo_1_image},
        {100, 9, 25, 20, &kk_logo_1_image},
        {100, 9, 25, 15, &kk_logo_1_image},
        {100, 9, 25, 10, &kk_logo_1_image},
        {100, 9, 25, 5, &kk_logo_1_image},
        {100, 9, 25, 0, &kk_logo_1_image}
    }
};

const VariantAnimation kk_screensaver = {
    199,
    {
        {0, 9, 150, 60, &kk_logo_1_image},
        {2, 9, 150, 60, &kk_logo_1_image},
        {4, 9, 150, 60, &kk_logo_1_image},
        {6, 9, 150, 60, &kk_logo_1_image},
        {8, 9, 150, 60, &kk_logo_1_image},
        {10, 9, 150, 60, &kk_logo_1_image},
        {12, 9, 150, 60, &kk_logo_1_image},
        {14, 9, 150, 60, &kk_logo_1_image},
        {16, 9, 150, 60, &kk_logo_1_image},
        {18, 9, 150, 60, &kk_logo_1_image},
        {20, 9, 150, 60, &kk_logo_1_image},
        {22, 9, 150, 60, &kk_logo_1_image},
        {24, 9, 150, 60, &kk_logo_1_image},
        {26, 9, 150, 60, &kk_logo_1_image},
        {28, 9, 150, 60, &kk_logo_1_image},
        {30, 9, 150, 60, &kk_logo_1_image},
        {32, 9, 150, 60, &kk_logo_1_image},
        {34, 9, 150, 60, &kk_logo_1_image},
        {36, 9, 150, 60, &kk_logo_1_image},
        {38, 9, 150, 60, &kk_logo_1_image},
        {40, 9, 150, 60, &kk_logo_1_image},
        {42, 9, 150, 60, &kk_logo_1_image},
        {44, 9, 150, 60, &kk_logo_1_image},
        {46, 9, 150, 60, &kk_logo_1_image},
        {48, 9, 150, 60, &kk_logo_1_image},
        {50, 9, 150, 60, &kk_logo_1_image},
        {52, 9, 150, 60, &kk_logo_1_image},
        {54, 9, 150, 60, &kk_logo_1_image},
        {56, 9, 150, 60, &kk_logo_1_image},
        {58, 9, 150, 60, &kk_logo_1_image},
        {60, 9, 150, 60, &kk_logo_1_image},
        {62, 9, 150, 60, &kk_logo_1_image},
        {64, 9, 150, 60, &kk_logo_1_image},
        {66, 9, 150, 60, &kk_logo_1_image},
        {68, 9, 150, 60, &kk_logo_1_image},
        {70, 9, 150, 60, &kk_logo_1_image},
        {72, 9, 150, 60, &kk_logo_1_image},
        {74, 9, 150, 60, &kk_logo_1_image},
        {76, 9, 150, 60, &kk_logo_1_image},
        {78, 9, 150, 60, &kk_logo_1_image},
        {80, 9, 150, 60, &kk_logo_1_image},
        {82, 9, 150, 60, &kk_logo_1_image},
        {84, 9, 150, 60, &kk_logo_1_image},
        {86, 9, 150, 60, &kk_logo_1_image},
        {88, 9, 150, 60, &kk_logo_1_image},
        {90, 9, 150, 60, &kk_logo_1_image},
        {92, 9, 150, 60, &kk_logo_1_image},
        {94, 9, 150, 60, &kk_logo_1_image},
        {96, 9, 150, 60, &kk_logo_1_image},
        {98, 9, 150, 60, &kk_logo_1_image},
        {100, 9, 150, 60, &kk_logo_1_image},
        {102, 9, 150, 60, &kk_logo_1_image},
        {104, 9, 150, 60, &kk_logo_1_image},
        {106, 9, 150, 60, &kk_logo_1_image},
        {108, 9, 150, 60, &kk_logo_1_image},
        {110, 9, 150, 60, &kk_logo_1_image},
        {112, 9, 150, 60, &kk_logo_1_image},
        {114, 9, 150, 60, &kk_logo_1_image},
        {116, 9, 150, 60, &kk_logo_1_image},
        {118, 9, 150, 60, &kk_logo_1_image},
        {120, 9, 150, 60, &kk_logo_1_image},
        {122, 9, 150, 60, &kk_logo_1_image},
        {124, 9, 150, 60, &kk_logo_1_image},
        {126, 9, 150, 60, &kk_logo_1_image},
        {128, 9, 150, 60, &kk_logo_1_image},
        {130, 9, 150, 60, &kk_logo_1_image},
        {132, 9, 150, 60, &kk_logo_1_image},
        {134, 9, 150, 60, &kk_logo_1_image},
        {136, 9, 150, 60, &kk_logo_1_image},
        {138, 9, 150, 60, &kk_logo_1_image},
        {140, 9, 150, 60, &kk_logo_1_image},
        {142, 9, 150, 60, &kk_logo_1_image},
        {144, 9, 150, 60, &kk_logo_1_image},
        {146, 9, 150, 60, &kk_logo_1_image},
        {148, 9, 150, 60, &kk_logo_1_image},
        {150, 9, 150, 60, &kk_logo_1_image},
        {152, 9, 150, 60, &kk_logo_1_image},
        {154, 9, 150, 60, &kk_logo_1_image},
        {156, 9, 150, 60, &kk_logo_1_image},
        {158, 9, 150, 60, &kk_logo_1_image},
        {160, 9, 150, 60, &kk_logo_1_image},
        {162, 9, 150, 60, &kk_logo_1_image},
        {164, 9, 150, 60, &kk_logo_1_image},
        {166, 9, 150, 60, &kk_logo_1_image},
        {168, 9, 150, 60, &kk_logo_1_image},
        {170, 9, 150, 60, &kk_logo_1_image},
        {172, 9, 150, 60, &kk_logo_1_image},
        {174, 9, 150, 60, &kk_logo_1_image},
        {176, 9, 150, 60, &kk_logo_1_image},
        {178, 9, 150, 60, &kk_logo_1_image},
        {180, 9, 150, 60, &kk_logo_1_image},
        {182, 9, 150, 60, &kk_logo_1_image},
        {184, 9, 150, 60, &kk_logo_1_image},
        {186, 9, 150, 60, &kk_logo_1_image},
        {188, 9, 150, 60, &kk_logo_1_image},
        {190, 9, 150, 60, &kk_logo_1_image},
        {192, 9, 150, 60, &kk_logo_1_image},
        {194, 9, 150, 60, &kk_logo_1_image},
        {196, 9, 150, 60, &kk_logo_1_image},
        {198, 9, 150, 60, &kk_logo_1_image},
        {198, 9, 150, 60, &kk_logo_1_image},
        {196, 9, 150, 60, &kk_logo_1_image},
        {194, 9, 150, 60, &kk_logo_1_image},
        {192, 9, 150, 60, &kk_logo_1_image},
        {190, 9, 150, 60, &kk_logo_1_image},
        {188, 9, 150, 60, &kk_logo_1_image},
        {186, 9, 150, 60, &kk_logo_1_image},
        {184, 9, 150, 60, &kk_logo_1_image},
        {182, 9, 150, 60, &kk_logo_1_image},
        {180, 9, 150, 60, &kk_logo_1_image},
        {178, 9, 150, 60, &kk_logo_1_image},
        {176, 9, 150, 60, &kk_logo_1_image},
        {174, 9, 150, 60, &kk_logo_1_image},
        {172, 9, 150, 60, &kk_logo_1_image},
        {170, 9, 150, 60, &kk_logo_1_image},
        {168, 9, 150, 60, &kk_logo_1_image},
        {166, 9, 150, 60, &kk_logo_1_image},
        {164, 9, 150, 60, &kk_logo_1_image},
        {162, 9, 150, 60, &kk_logo_1_image},
        {160, 9, 150, 60, &kk_logo_1_image},
        {158, 9, 150, 60, &kk_logo_1_image},
        {156, 9, 150, 60, &kk_logo_1_image},
        {154, 9, 150, 60, &kk_logo_1_image},
        {152, 9, 150, 60, &kk_logo_1_image},
        {150, 9, 150, 60, &kk_logo_1_image},
        {148, 9, 150, 60, &kk_logo_1_image},
        {146, 9, 150, 60, &kk_logo_1_image},
        {144, 9, 150, 60, &kk_logo_1_image},
        {142, 9, 150, 60, &kk_logo_1_image},
        {140, 9, 150, 60, &kk_logo_1_image},
        {138, 9, 150, 60, &kk_logo_1_image},
        {136, 9, 150, 60, &kk_logo_1_image},
        {134, 9, 150, 60, &kk_logo_1_image},
        {132, 9, 150, 60, &kk_logo_1_image},
        {130, 9, 150, 60, &kk_logo_1_image},
        {128, 9, 150, 60, &kk_logo_1_image},
        {126, 9, 150, 60, &kk_logo_1_image},
        {124, 9, 150, 60, &kk_logo_1_image},
        {122, 9, 150, 60, &kk_logo_1_image},
        {120, 9, 150, 60, &kk_logo_1_image},
        {118, 9, 150, 60, &kk_logo_1_image},
        {116, 9, 150, 60, &kk_logo_1_image},
        {114, 9, 150, 60, &kk_logo_1_image},
        {112, 9, 150, 60, &kk_logo_1_image},
        {110, 9, 150, 60, &kk_logo_1_image},
        {108, 9, 150, 60, &kk_logo_1_image},
        {106, 9, 150, 60, &kk_logo_1_image},
        {104, 9, 150, 60, &kk_logo_1_image},
        {102, 9, 150, 60, &kk_logo_1_image},
        {100, 9, 150, 60, &kk_logo_1_image},
        {98, 9, 150, 60, &kk_logo_1_image},
        {96, 9, 150, 60, &kk_logo_1_image},
        {94, 9, 150, 60, &kk_logo_1_image},
        {92, 9, 150, 60, &kk_logo_1_image},
        {90, 9, 150, 60, &kk_logo_1_image},
        {88, 9, 150, 60, &kk_logo_1_image},
        {86, 9, 150, 60, &kk_logo_1_image},
        {84, 9, 150, 60, &kk_logo_1_image},
        {82, 9, 150, 60, &kk_logo_1_image},
        {80, 9, 150, 60, &kk_logo_1_image},
        {78, 9, 150, 60, &kk_logo_1_image},
        {76, 9, 150, 60, &kk_logo_1_image},
        {74, 9, 150, 60, &kk_logo_1_image},
        {72, 9, 150, 60, &kk_logo_1_image},
        {70, 9, 150, 60, &kk_logo_1_image},
        {68, 9, 150, 60, &kk_logo_1_image},
        {66, 9, 150, 60, &kk_logo_1_image},
        {64, 9, 150, 60, &kk_logo_1_image},
        {62, 9, 150, 60, &kk_logo_1_image},
        {60, 9, 150, 60, &kk_logo_1_image},
        {58, 9, 150, 60, &kk_logo_1_image},
        {56, 9, 150, 60, &kk_logo_1_image},
        {54, 9, 150, 60, &kk_logo_1_image},
        {52, 9, 150, 60, &kk_logo_1_image},
        {50, 9, 150, 60, &kk_logo_1_image},
        {48, 9, 150, 60, &kk_logo_1_image},
        {46, 9, 150, 60, &kk_logo_1_image},
        {44, 9, 150, 60, &kk_logo_1_image},
        {42, 9, 150, 60, &kk_logo_1_image},
        {40, 9, 150, 60, &kk_logo_1_image},
        {38, 9, 150, 60, &kk_logo_1_image},
        {36, 9, 150, 60, &kk_logo_1_image},
        {34, 9, 150, 60, &kk_logo_1_image},
        {32, 9, 150, 60, &kk_logo_1_image},
        {30, 9, 150, 60, &kk_logo_1_image},
        {28, 9, 150, 60, &kk_logo_1_image},
        {26, 9, 150, 60, &kk_logo_1_image},
        {24, 9, 150, 60, &kk_logo_1_image},
        {22, 9, 150, 60, &kk_logo_1_image},
        {20, 9, 150, 60, &kk_logo_1_image},
        {18, 9, 150, 60, &kk_logo_1_image},
        {16, 9, 150, 60, &kk_logo_1_image},
        {14, 9, 150, 60, &kk_logo_1_image},
        {12, 9, 150, 60, &kk_logo_1_image},
        {10, 9, 150, 60, &kk_logo_1_image},
        {8, 9, 150, 60, &kk_logo_1_image},
        {6, 9, 150, 60, &kk_logo_1_image},
        {4, 9, 150, 60, &kk_logo_1_image},
        {2, 9, 150, 60, &kk_logo_1_image},
        {0, 9, 150, 60, &kk_logo_1_image},
    }
};
