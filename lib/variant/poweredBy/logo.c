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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.  You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "keepkey/board/resources.h"

#include <string.h>

const uint8_t poweredBy_logo_1_data[2912] =
{
    0xfe, 0x4, 0x1f, 0x2, 0x2b, 0xff, 0x19, 0x5, 0x0, 0xfe, 0x16, 0x26, 0x2, 0x25, 0xff, 0x14, 0x3, 0x0, 0xfc, 0xc, 0x2d, 0x33, 0x1c, 0x2, 0x0, 0xf4, 0x10, 0x28, 0xe, 0x5, 0x25, 0xe, 0x1, 0x28, 0x1d, 0x0, 0x2, 0x28, 0x2, 0x25, 0xfb, 0x26, 0x6, 0x0, 0x16, 0x26, 0x2, 0x25, 0xff, 0x12, 0x2, 0x0, 0xfb, 0x1a, 0x26, 0x25, 0x26, 0x1a, 0x2, 0x0, 0xff, 0x28, 0x2, 0x25, 0xff, 0x1a, 0x6, 0x0, 0xfe, 0x1, 0x1f, 0x3, 0x25, 0xf5, 0xf, 0x0, 0x3, 0x28, 0x1d, 0x0, 0xd, 0x25, 0x15, 0x43, 0xf4, 0x2, 0xfd, 0xfe, 0xeb, 0x75, 0x4, 0x0, 0xf7, 0x91, 0xfb, 0xff, 0xfd, 0xe0, 0x2f, 0x0, 0x23, 0xe0, 0x2, 0xff, 0xf0, 0xf4, 0x75, 0x0, 0x2b, 0xff, 0x86, 0x3b, 0xf6, 0x7a, 0x2d, 0xff, 0x86, 0x0, 0x10, 0xff, 0xfb, 0x2, 0xff, 0xea, 0x27, 0x0, 0x92, 0xf8, 0xff, 0xfc, 0xde, 0x19, 0x0, 0xab, 0xfa, 0xfe, 0xf1, 0xaf, 0x0, 0x4, 0xff, 0xfc, 0xff, 0xef, 0xa5, 0x2, 0x4, 0x0, 0xf3, 0x8, 0xca, 0xf8, 0xff, 0xfd, 0xe2, 0x5, 0x0, 0xc6, 0xfa, 0xa, 0x8d, 0xf8, 0x2, 0x4c, 0x5, 0xff, 0xff, 0x25, 0x3, 0x0, 0xcd, 0x96, 0xff, 0x34, 0x96, 0xff, 0x79, 0x1, 0xb2, 0xfd, 0x7c, 0x3f, 0xd7, 0xff, 0x24, 0x0, 0xec, 0xd5, 0x6c, 0xff, 0xac, 0x7b, 0xff, 0x20, 0x0, 0x11, 0xff, 0x9b, 0x6e, 0x64, 0x19, 0x0, 0x97, 0xff, 0x41, 0xa7, 0xff, 0x6b, 0x0, 0xb1, 0xfd, 0x83, 0x64, 0x48, 0x0, 0x4, 0xff, 0xb3, 0x2f, 0xb5, 0xff, 0x4e, 0x4, 0x0, 0xf1, 0x9, 0xd1, 0xf4, 0x4c, 0xa1, 0xff, 0x2c, 0x0, 0x15, 0xff, 0xb8, 0xf3, 0xc5, 0x0, 0x4d, 0x5, 0xff, 0xff, 0x76, 0x3, 0x0, 0xf7, 0x96, 0xff, 0xd0, 0xe7, 0xff, 0x5a, 0x7, 0xd3, 0xf5, 0x2, 0x0, 0xd8, 0x79, 0xfe, 0x50, 0x1, 0xa9, 0xff, 0xb7, 0xd9, 0xd3, 0xca, 0xe1, 0x4, 0x0, 0x11, 0xff, 0xea, 0xf4, 0xfc, 0x26, 0x0, 0x97, 0xff, 0xd1, 0xe9, 0xff, 0x43, 0x0, 0xb1, 0xff, 0xe8, 0xf4, 0x9d, 0x0, 0x4, 0xff, 0xa0, 0x0, 0x1d, 0xff, 0x8c, 0x4, 0x0, 0xfa, 0x9, 0xd1, 0xff, 0xf9, 0xff, 0xa9, 0x3, 0x0, 0xf9, 0x90, 0xff, 0xf5, 0xe, 0x0, 0x3a, 0xdd, 0x4, 0xff, 0xff, 0x7c, 0x3, 0x0, 0xfe, 0x96, 0xff, 0x2, 0xb8, 0xf4, 0x73, 0x0, 0x4, 0xbe, 0xfa, 0x3f, 0x19, 0xaf, 0xff, 0x32, 0x0, 0x69, 0x2, 0xff, 0xdf, 0x88, 0xc5, 0xff, 0xa3, 0x1, 0x0, 0x11, 0xff, 0xcd, 0x63, 0x71, 0x1b, 0x0, 0x97, 0xff, 0xe6, 0xff, 0xbd, 0x2, 0x0, 0xb1, 0xfd, 0x9c, 0x7a, 0x5f, 0x0, 0x4, 0xff, 0xaa, 0x11, 0x83, 0xff, 0x77, 0x4, 0x0, 0xf9, 0x9, 0xd1, 0xf8, 0x6f, 0x7d, 0xff, 0x19, 0x2, 0x0, 0xfd, 0x28, 0xff, 0x98, 0x4, 0x0, 0xff, 0xc7, 0x3, 0xff, 0xff, 0x7c, 0x3, 0x0, 0xfe, 0x9c, 0xff, 0x5, 0x0, 0xff, 0x45, 0x2, 0xff, 0xfd, 0xf1, 0xff, 0x82, 0x2, 0x0, 0xff, 0x25, 0x2, 0xff, 0xfc, 0x38, 0x90, 0xff, 0x62, 0x2, 0x0, 0xe5, 0x12, 0xff, 0xf9, 0xda, 0xe6, 0x25, 0x0, 0x9a, 0xff, 0x38, 0xf5, 0xed, 0x13, 0x0, 0xb5, 0xff, 0xef, 0xee, 0xa4, 0x0, 0x4, 0xff, 0xf8, 0xed, 0xff, 0xfa, 0x20, 0x4, 0x0, 0xf9, 0x9, 0xd6, 0xff, 0xf0, 0xef, 0xff, 0x15, 0x2, 0x0, 0xfd, 0x28, 0xff, 0x9a, 0x4, 0x0, 0xff, 0xac, 0x3, 0xff, 0xff, 0x7c, 0x3, 0x0, 0xfe, 0x34, 0x5f, 0x6, 0x0, 0xff, 0x1c, 0x2, 0x8c, 0xff, 0x32, 0x4, 0x0, 0xfa, 0x90, 0x99, 0x1, 0x39, 0x94, 0x15, 0x2, 0x0, 0xfe, 0x9, 0x9c, 0x2, 0x92, 0xea, 0x97, 0x17, 0x0, 0x57, 0x9a, 0x7, 0x71, 0x99, 0x2e, 0x0, 0x66, 0x94, 0x92, 0x94, 0x66, 0x0, 0x2, 0xd9, 0xcc, 0xcb, 0xa1, 0x16, 0x5, 0x0, 0xfe, 0x5, 0x78, 0x3, 0x92, 0xff, 0x42, 0x3, 0x0, 0xfd, 0x17, 0x94, 0x57, 0x4, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x4a, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x4a, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x4a, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x7, 0x0, 0xfe, 0xa, 0x72, 0x2, 0x80, 0xfe, 0x7c, 0xc, 0x5, 0x0, 0xf6, 0x2, 0x19, 0x4a, 0x8f, 0xb3, 0xbb, 0xa8, 0x74, 0x28, 0x8, 0xa, 0x0, 0xf6, 0x5, 0x1c, 0x5c, 0x99, 0xb7, 0xba, 0xa1, 0x62, 0x1c, 0x3, 0x4, 0x0, 0xfa, 0x3, 0x6a, 0xc0, 0xc5, 0x71, 0x9, 0x2, 0x0, 0xf8, 0x7, 0x22, 0x69, 0xa2, 0xb9, 0xa7, 0x60, 0x19, 0x6, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x7, 0x0, 0xff, 0xc1, 0x3, 0xff, 0xfe, 0xfc, 0x19, 0x4, 0x0, 0xfd, 0xb, 0xb2, 0xf1, 0x7, 0xff, 0xfe, 0xd2, 0x3d, 0x8, 0x0, 0xfd, 0x36, 0xca, 0xfb, 0x6, 0xff, 0xfd, 0xfb, 0xbf, 0x16, 0x3, 0x0, 0xfe, 0xd, 0xdc, 0x3, 0xff, 0xfb, 0xbb, 0x0, 0x41, 0xd0, 0xfe, 0x5, 0xff, 0xfd, 0xf4, 0xa5, 0x3, 0x4, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x5, 0x0, 0xfe, 0x2, 0xa6, 0x4, 0xff, 0xfe, 0xf8, 0x18, 0x3, 0x0, 0xff, 0x27, 0xc, 0xff, 0xff, 0x31, 0x6, 0x0, 0xff, 0x4b, 0xb, 0xff, 0xfe, 0xf0, 0x1c, 0x2, 0x0, 0xfe, 0xc, 0xd8, 0x4, 0xff, 0xff, 0x54, 0xa, 0xff, 0xff, 0xae, 0x4, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x5, 0x0, 0xff, 0x8d, 0x4, 0xff, 0xfd, 0xe3, 0xd6, 0x15, 0x2, 0x0, 0xfe, 0x2, 0xe2, 0xc, 0xff, 0xfe, 0xf7, 0x15, 0x4, 0x0, 0xff, 0x30, 0xd, 0xff, 0xff, 0xc7, 0x2, 0x0, 0xfe, 0xd, 0xe7, 0x4, 0xff, 0xff, 0xfd, 0x3, 0xff, 0xfe, 0xf5, 0xeb, 0x6, 0xff, 0xff, 0x5d, 0x3, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x4, 0x0, 0xff, 0x75, 0x4, 0xff, 0xff, 0xa1, 0x5, 0x0, 0xff, 0x9a, 0x4, 0xff, 0xf9, 0xd2, 0x51, 0x4, 0x0, 0x18, 0x94, 0xfb, 0x3, 0xff, 0xff, 0x93, 0x3, 0x0, 0xfe, 0x2, 0xe2, 0x3, 0xff, 0xfd, 0xfa, 0xb6, 0x36, 0x2, 0x0, 0xfe, 0x2b, 0xba, 0x4, 0xff, 0xff, 0x50, 0x3, 0x0, 0xff, 0xb5, 0x4, 0xff, 0xfd, 0xfa, 0xa2, 0x13, 0x3, 0x0, 0xfe, 0x87, 0xfb, 0x3, 0xff, 0xff, 0xf0, 0x3, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x3, 0x0, 0xfe, 0x4f, 0xfe, 0x3, 0xff, 0xff, 0xa1, 0x5, 0x0, 0xff, 0x1a, 0x4, 0xff, 0xfe, 0x7e, 0x1, 0x5, 0x0, 0xfe, 0x60, 0xfd, 0x2, 0xff, 0xfe, 0xd5, 0x9, 0x2, 0x0, 0xfe, 0x3e, 0xfc, 0x2, 0xff, 0xfe, 0xf7, 0x48, 0x6, 0x0, 0xff, 0x83, 0x3, 0xff, 0xff, 0xca, 0x3, 0x0, 0xff, 0x38, 0x3, 0xff, 0xfe, 0xfa, 0x4e, 0x6, 0x0, 0xff, 0x57, 0x4, 0xff, 0xff, 0x20, 0x2, 0x0, 0xff, 0xad, 0x3, 0xff, 0xfc, 0x85, 0xc, 0x10, 0x3f, 0x4, 0xff, 0xfe, 0xd7, 0x5, 0x5, 0x0, 0xff, 0x69, 0x3, 0xff, 0xff, 0xba, 0x7, 0x0, 0xfe, 0x2, 0xf3, 0x2, 0xff, 0xfe, 0xfc, 0x11, 0x2, 0x0, 0xff, 0x87, 0x3, 0xff, 0xff, 0x91, 0x7, 0x0, 0xfe, 0x1c, 0xef, 0x2, 0xff, 0xfe, 0xe7, 0x12, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xd9, 0x7, 0x0, 0xfe, 0x4, 0xec, 0x2, 0xff, 0xfe, 0xfe, 0x36, 0x2, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0xf4, 0x2, 0xe9, 0xff, 0xfb, 0x3, 0xff, 0xfe, 0xd3, 0xc, 0x5, 0x0, 0xfe, 0x1, 0x9b, 0x2, 0xff, 0xfe, 0xfe, 0x4b, 0x8, 0x0, 0xff, 0xcd, 0x3, 0xff, 0xff, 0x2c, 0x2, 0x0, 0xff, 0xc8, 0x3, 0xff, 0xff, 0x1, 0x7, 0x0, 0xfe, 0x8, 0xdd, 0x2, 0xff, 0xfe, 0xf1, 0x24, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb7, 0x7, 0x0, 0xfe, 0x5, 0xdf, 0x2, 0xff, 0xfe, 0xfe, 0x3a, 0x2, 0x0, 0xff, 0xad, 0x9, 0xff, 0xfe, 0xed, 0x22, 0x6, 0x0, 0xfe, 0x2, 0xb7, 0x2, 0xff, 0xfe, 0xfe, 0x7e, 0x7, 0x6d, 0xfe, 0x66, 0xe1, 0x3, 0xff, 0xff, 0x4a, 0x2, 0x0, 0xff, 0xf2, 0x2, 0xff, 0xfe, 0xed, 0x64, 0x7, 0x6d, 0xfe, 0x75, 0xeb, 0x2, 0xff, 0xfe, 0xf6, 0x2d, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0x7, 0x0, 0xfe, 0x5, 0xdf, 0x2, 0xff, 0xfe, 0xfe, 0x3a, 0x2, 0x0, 0xff, 0xad, 0x9, 0xff, 0xff, 0x9b, 0x7, 0x0, 0xfe, 0x3, 0xc4, 0x10, 0xff, 0xff, 0x4e, 0x2, 0x0, 0x10, 0xff, 0xfe, 0xf7, 0x2e, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0x7, 0x0, 0xfe, 0x5, 0xdf, 0x2, 0xff, 0xfe, 0xfe, 0x3a, 0x2, 0x0, 0xff, 0xad, 0x9, 0xff, 0xfe, 0xfa, 0x35, 0x6, 0x0, 0xfe, 0x3, 0xc4, 0x3, 0xff, 0xff, 0xfc, 0xb, 0xfb, 0xfe, 0xff, 0x3a, 0x2, 0x0, 0x4, 0xff, 0xc, 0xfb, 0xfe, 0xf0, 0x28, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0x7, 0x0, 0xfe, 0x5, 0xdf, 0x2, 0xff, 0xfe, 0xfe, 0x3a, 0x2, 0x0, 0xff, 0xad, 0x3, 0xff, 0xfc, 0xdc, 0xba, 0xbb, 0xec, 0x3, 0xff, 0xfe, 0xe2, 0x4, 0x5, 0x0, 0xfe, 0x3, 0xba, 0x2, 0xff, 0xfe, 0xfe, 0x70, 0xb, 0x41, 0xfe, 0x43, 0x9, 0x2, 0x0, 0xff, 0xf6, 0x3, 0xff, 0xfe, 0x3b, 0x40, 0xa, 0x41, 0xfe, 0x3d, 0x8, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0x7, 0x0, 0xfe, 0x5, 0xdf, 0x2, 0xff, 0xfe, 0xfe, 0x3a, 0x2, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x79, 0x2, 0x0, 0xff, 0x1b, 0x4, 0xff, 0xff, 0xd0, 0x5, 0x0, 0xfe, 0x1, 0xa5, 0x3, 0xff, 0xff, 0x65, 0xf, 0x0, 0xff, 0xd7, 0x3, 0xff, 0xff, 0x2e, 0xf, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb9, 0x7, 0x0, 0xfe, 0x5, 0xe0, 0x2, 0xff, 0xfe, 0xfe, 0x3a, 0x2, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x3, 0x0, 0xfe, 0x3e, 0xfc, 0x3, 0xff, 0xff, 0x82, 0x5, 0x0, 0xff, 0x7a, 0x3, 0xff, 0xff, 0xcf, 0xf, 0x0, 0xff, 0x9c, 0x3, 0xff, 0xff, 0xad, 0x9, 0x0, 0xff, 0xa, 0x5, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xe2, 0x7, 0x0, 0xfe, 0x2, 0xf9, 0x2, 0xff, 0xfe, 0xfe, 0x35, 0x2, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x4, 0x0, 0xff, 0x88, 0x4, 0xff, 0xff, 0x43, 0x4, 0x0, 0xff, 0x32, 0x4, 0xff, 0xfe, 0xb8, 0x4, 0x5, 0x0, 0xfc, 0x4, 0x55, 0xf3, 0x14, 0x4, 0x0, 0xff, 0x4e, 0x4, 0xff, 0xfe, 0x6b, 0x2, 0x5, 0x0, 0xfc, 0xc, 0x89, 0xed, 0xd, 0x4, 0x0, 0xff, 0x37, 0x3, 0xff, 0xfd, 0xfe, 0x70, 0x4, 0x5, 0x0, 0xff, 0x96, 0x3, 0xff, 0xfe, 0xfe, 0x19, 0x2, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x5, 0x0, 0xff, 0xa7, 0x3, 0xff, 0xfc, 0xf8, 0x63, 0x50, 0x8, 0x2, 0x0, 0xff, 0xc6, 0x4, 0xff, 0xf9, 0xe1, 0x95, 0x5e, 0x54, 0x68, 0x99, 0xd6, 0x2, 0xff, 0xff, 0xcc, 0x4, 0x0, 0xfe, 0x10, 0xf0, 0x4, 0xff, 0xf9, 0xce, 0x85, 0x58, 0x55, 0x70, 0xa5, 0xe3, 0x2, 0xff, 0xff, 0x80, 0x4, 0x0, 0xff, 0x37, 0x5, 0xff, 0xfa, 0xc6, 0x7b, 0x49, 0x44, 0x6b, 0xc2, 0x4, 0xff, 0xff, 0xd5, 0x3, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x5, 0x0, 0xfe, 0x7, 0xd5, 0x4, 0xff, 0xfe, 0xfb, 0x19, 0x2, 0x0, 0xfe, 0x10, 0xfa, 0xd, 0xff, 0xff, 0x6b, 0x4, 0x0, 0xff, 0x5a, 0xe, 0xff, 0xff, 0x1e, 0x3, 0x0, 0xff, 0x37, 0xf, 0xff, 0xff, 0x28, 0x3, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x6, 0x0, 0xff, 0x28, 0x4, 0xff, 0xfe, 0xf7, 0x18, 0x3, 0x0, 0xff, 0x4b, 0xb, 0xff, 0xfd, 0xe0, 0x5d, 0x9, 0x5, 0x0, 0xff, 0x76, 0xb, 0xff, 0xfe, 0xc4, 0x47, 0x4, 0x0, 0xff, 0x37, 0x3, 0xff, 0xfe, 0xd7, 0xec, 0x9, 0xff, 0xff, 0x71, 0x4, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x7, 0x0, 0xfe, 0x3b, 0xff, 0x2, 0xfa, 0xfe, 0xf2, 0x18, 0x4, 0x0, 0xfc, 0x18, 0xd3, 0xf9, 0xfe, 0x3, 0xff, 0xfc, 0xfc, 0xf7, 0xdb, 0x56, 0x9, 0x0, 0xfd, 0x47, 0xed, 0xfb, 0x4, 0xff, 0xfc, 0xfb, 0xf8, 0xc8, 0x31, 0x6, 0x0, 0xff, 0x37, 0x3, 0xff, 0xfc, 0xb7, 0x14, 0xdd, 0xfc, 0x4, 0xff, 0xfd, 0xfc, 0xf0, 0x49, 0x5, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x8, 0x0, 0xff, 0x2a, 0x2, 0x34, 0xfe, 0x32, 0x5, 0x6, 0x0, 0xf9, 0x2f, 0x58, 0x6d, 0x72, 0x63, 0x48, 0x21, 0xc, 0x0, 0xfd, 0x1, 0x3a, 0x5e, 0x2, 0x70, 0xfd, 0x5e, 0x41, 0x16, 0x8, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0x2, 0x0, 0xf9, 0x38, 0x69, 0x8b, 0x90, 0x76, 0x49, 0x9, 0x6, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x36, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x36, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x36, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x36, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x8, 0x0, 0xff, 0x4, 0x3, 0x5, 0x8, 0x0, 0xf9, 0x1, 0x3, 0x4, 0x5, 0x4, 0x3, 0x1, 0x5, 0x0, 0xff, 0x1, 0x5, 0x3, 0xff, 0x2, 0x6, 0x0, 0x6, 0x1, 0x3, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x7, 0x0, 0xfe, 0x3b, 0xe4, 0x2, 0xe9, 0xfe, 0xe2, 0x16, 0x6, 0x0, 0xf7, 0x5b, 0xa4, 0xcb, 0xe2, 0xe8, 0xe1, 0xc8, 0x97, 0x3c, 0x4, 0x0, 0xfe, 0x2b, 0xc4, 0x4, 0xc9, 0xff, 0x94, 0x6, 0x0, 0xfe, 0x7e, 0xa9, 0x3, 0xa8, 0xfe, 0xa4, 0x21, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x6, 0x0, 0xff, 0x25, 0x4, 0xff, 0xfe, 0xf7, 0x18, 0x4, 0x0, 0xfe, 0x18, 0xe3, 0x9, 0xff, 0xfe, 0x9c, 0x4, 0x2, 0x0, 0xfe, 0x37, 0xf9, 0x4, 0xff, 0xff, 0xbc, 0x6, 0x0, 0xff, 0xbf, 0x4, 0xff, 0xfe, 0xf9, 0x32, 0x2, 0x0, 0xff, 0x37, 0x3, 0xff, 0xff, 0xb8, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x5, 0x0, 0xfe, 0x10, 0xe2, 0x5, 0xff, 0xff, 0x19, 0x3, 0x0, 0xfe, 0x40, 0xfc, 0xb, 0xff, 0xff, 0xa9, 0x2, 0x0, 0xfe, 0x38, 0xfe, 0x4, 0xff, 0xff, 0xbc, 0x6, 0x0, 0xff, 0xc7, 0x4, 0xff, 0xfe, 0xf9, 0x32, 0x2, 0x0, 0xff, 0x38, 0x3, 0xff, 0xff, 0xbc, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x5, 0x0, 0xff, 0xe2, 0x3, 0xff, 0xfc, 0xf7, 0x6d, 0x63, 0xa, 0x2, 0x0, 0xfe, 0x4, 0xe6, 0x4, 0xff, 0xfa, 0xfd, 0xde, 0xad, 0xc0, 0xfb, 0xfe, 0x3, 0xff, 0xfa, 0x6c, 0x0, 0x24, 0xa3, 0xbe, 0xfe, 0x2, 0xff, 0xff, 0xbc, 0x6, 0x0, 0xfd, 0x4c, 0x70, 0xeb, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x2, 0x0, 0xfb, 0x24, 0xad, 0xa7, 0xa9, 0x78, 0xf, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x2, 0x0, 0xfd, 0x1, 0x0, 0xb9, 0x3, 0xff, 0xfe, 0xf6, 0x31, 0x5, 0x0, 0xff, 0x8f, 0x4, 0xff, 0xfe, 0xa3, 0x21, 0x4, 0x0, 0xff, 0x75, 0x3, 0xff, 0xfe, 0xd2, 0x7, 0x2, 0x0, 0xfe, 0x3c, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0xa, 0xde, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x7c, 0x3, 0x0, 0xff, 0x94, 0x3, 0xff, 0xfe, 0xfb, 0x48, 0x5, 0x0, 0xff, 0xa, 0x4, 0xff, 0xff, 0xb1, 0x7, 0x0, 0xff, 0xaf, 0x3, 0xff, 0xff, 0x18, 0x2, 0x0, 0xfe, 0x44, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xfc, 0xaa, 0x55, 0x57, 0x91, 0x4, 0xff, 0xff, 0x6b, 0x6, 0x0, 0xff, 0x51, 0x3, 0xff, 0xfe, 0xee, 0x3, 0x7, 0x0, 0xff, 0x2b, 0x3, 0xff, 0xff, 0x65, 0x2, 0x0, 0xfe, 0x44, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0xa, 0xff, 0xff, 0x7a, 0x7, 0x0, 0xff, 0x82, 0x3, 0xff, 0xff, 0x9f, 0x8, 0x0, 0xff, 0x5, 0x3, 0xff, 0xff, 0x9f, 0x2, 0x0, 0xfe, 0x44, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x9, 0xff, 0xff, 0xac, 0x7, 0x0, 0xfe, 0x1, 0x9c, 0x3, 0xff, 0xff, 0xef, 0x8, 0xdf, 0xff, 0xe1, 0x3, 0xff, 0xff, 0xbc, 0x2, 0x0, 0xfe, 0x44, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x9, 0xff, 0xff, 0xd3, 0x7, 0x0, 0xfe, 0x1, 0xa5, 0x10, 0xff, 0xff, 0xc2, 0x2, 0x0, 0xfe, 0x44, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x2, 0xff, 0xff, 0xfe, 0x7, 0xff, 0xff, 0x82, 0x6, 0x0, 0xfe, 0x1, 0xa2, 0x3, 0xff, 0xff, 0xf2, 0xb, 0xe4, 0xfe, 0xe8, 0x9c, 0x2, 0x0, 0xfe, 0x44, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xfc, 0x6a, 0x37, 0x39, 0xbc, 0x4, 0xff, 0xff, 0x4a, 0x6, 0x0, 0xff, 0x93, 0x3, 0xff, 0xff, 0x8e, 0xc, 0x2, 0xff, 0x1, 0x2, 0x0, 0xfe, 0x44, 0xfd, 0x2, 0xff, 0xff, 0xbc, 0x7, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x3d, 0x2, 0x0, 0xfe, 0x6, 0xd8, 0x3, 0xff, 0xfe, 0xfb, 0x28, 0x5, 0x0, 0xff, 0x6f, 0x3, 0xff, 0xff, 0xc8, 0xf, 0x0, 0xfe, 0x43, 0xfd, 0x2, 0xff, 0xfe, 0xc1, 0x1, 0x6, 0x0, 0xfe, 0x13, 0xe6, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x3f, 0x3, 0x0, 0xfe, 0x16, 0xef, 0x3, 0xff, 0xff, 0xd8, 0x5, 0x0, 0xff, 0x33, 0x4, 0xff, 0xff, 0x56, 0x8, 0x0, 0xfe, 0x16, 0x2, 0x4, 0x0, 0xfe, 0x3a, 0xfa, 0x2, 0xff, 0xfe, 0xe7, 0x13, 0x6, 0x0, 0xff, 0x5b, 0x3, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x3f, 0x4, 0x0, 0xff, 0x54, 0x4, 0xff, 0xff, 0xb2, 0x5, 0x0, 0xff, 0xe1, 0x4, 0xff, 0xfe, 0x75, 0xa, 0x4, 0x0, 0xfc, 0x23, 0x7f, 0xfd, 0xa4, 0x4, 0x0, 0xfe, 0x1e, 0xf2, 0x3, 0xff, 0xfe, 0xc0, 0x35, 0x3, 0x0, 0xfe, 0x2a, 0x8a, 0x4, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x3f, 0x5, 0x0, 0xff, 0x6e, 0x3, 0xff, 0xfc, 0xfe, 0xe5, 0xd7, 0x15, 0x2, 0x0, 0xff, 0x32, 0x4, 0xff, 0xf9, 0xfe, 0xfa, 0xc3, 0x9f, 0xae, 0xe9, 0xfc, 0x3, 0xff, 0xff, 0x56, 0x4, 0x0, 0xff, 0xc9, 0x4, 0xff, 0xfb, 0xfc, 0xfa, 0xec, 0xf8, 0xfb, 0x5, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x3f, 0x6, 0x0, 0xff, 0xb3, 0x4, 0xff, 0xfe, 0xf9, 0x18, 0x3, 0x0, 0xff, 0x9b, 0xd, 0xff, 0xfe, 0x97, 0x2, 0x3, 0x0, 0xfe, 0x19, 0xf4, 0xa, 0xff, 0xff, 0xf7, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0xad, 0x3, 0xff, 0xff, 0x3f, 0x6, 0x0, 0xfe, 0x2, 0xf0, 0x3, 0xff, 0xfe, 0xf7, 0x18, 0x4, 0x0, 0xff, 0xaa, 0xa, 0xff, 0xfe, 0xe1, 0x2f, 0x6, 0x0, 0xfe, 0x2d, 0xf7, 0x7, 0xff, 0xfd, 0xf1, 0x39, 0xde, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xfb, 0x77, 0xb2, 0xb0, 0xb9, 0x2c, 0x7, 0x0, 0xfe, 0x1d, 0xb2, 0x2, 0xb0, 0xfe, 0xab, 0x11, 0x5, 0x0, 0xfd, 0x53, 0xb7, 0xe9, 0x3, 0xff, 0xfc, 0xef, 0xcb, 0x97, 0x44, 0x9, 0x0, 0xf5, 0xd, 0x82, 0xc5, 0xe7, 0xea, 0xd7, 0xb0, 0x67, 0x0, 0xd, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x16, 0x0, 0xff, 0x1, 0x3, 0x2, 0xff, 0x1, 0x8, 0x0, 0x4, 0x2, 0x7, 0x0, 0xf9, 0x3, 0x7, 0xa, 0xb, 0xa, 0x8, 0x5, 0xd, 0x0, 0xff, 0x4, 0x2, 0x7, 0xfe, 0x6, 0x2, 0x2, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x49, 0x0, 0xfe, 0x10, 0xdf, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x49, 0x0, 0xfe, 0xf, 0xde, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x48, 0x0, 0xfd, 0x24, 0x6a, 0xf8, 0x2, 0xff, 0xfe, 0xf9, 0x32, 0x48, 0x0, 0xff, 0xba, 0x4, 0xff, 0xfe, 0xf9, 0x32, 0x48, 0x0, 0xff, 0xbf, 0x4, 0xff, 0xfe, 0xf5, 0x28, 0x48, 0x0, 0xff, 0xc2, 0x4, 0xff, 0xff, 0xc6, 0x49, 0x0, 0xfb, 0x58, 0xad, 0xbc, 0xb5, 0x7c, 0x7f, 0x0, 0x35, 0x0
};
static const VariantImage poweredBy_logo_1_image = {79, 64, 2912, poweredBy_logo_1_data};

const VariantAnimation poweredBy_logo = {
    21,
    {
        {87, 0, 25, 0, &poweredBy_logo_1_image},
        {87, 0, 25, 5, &poweredBy_logo_1_image},
        {87, 0, 25, 10, &poweredBy_logo_1_image},
        {87, 0, 25, 15, &poweredBy_logo_1_image},
        {87, 0, 25, 20, &poweredBy_logo_1_image},
        {87, 0, 25, 25, &poweredBy_logo_1_image},
        {87, 0, 25, 30, &poweredBy_logo_1_image},
        {87, 0, 25, 35, &poweredBy_logo_1_image},
        {87, 0, 25, 40, &poweredBy_logo_1_image},
        {87, 0, 25, 45, &poweredBy_logo_1_image},
        {87, 0, 25, 50, &poweredBy_logo_1_image},
        {87, 0, 25, 55, &poweredBy_logo_1_image},
        {87, 0, 25, 60, &poweredBy_logo_1_image},
        {87, 0, 25, 65, &poweredBy_logo_1_image},
        {87, 0, 25, 70, &poweredBy_logo_1_image},
        {87, 0, 25, 75, &poweredBy_logo_1_image},
        {87, 0, 25, 80, &poweredBy_logo_1_image},
        {87, 0, 25, 85, &poweredBy_logo_1_image},
        {87, 0, 25, 90, &poweredBy_logo_1_image},
        {87, 0, 25, 95, &poweredBy_logo_1_image},
        {87, 0, 25, 100, &poweredBy_logo_1_image},
    }
};
const VariantAnimation poweredBy_logo_reversed = {
    21,
    {
        {87, 0, 25, 100, &poweredBy_logo_1_image},
        {87, 0, 25, 95, &poweredBy_logo_1_image},
        {87, 0, 25, 90, &poweredBy_logo_1_image},
        {87, 0, 25, 85, &poweredBy_logo_1_image},
        {87, 0, 25, 80, &poweredBy_logo_1_image},
        {87, 0, 25, 75, &poweredBy_logo_1_image},
        {87, 0, 25, 70, &poweredBy_logo_1_image},
        {87, 0, 25, 65, &poweredBy_logo_1_image},
        {87, 0, 25, 60, &poweredBy_logo_1_image},
        {87, 0, 25, 55, &poweredBy_logo_1_image},
        {87, 0, 25, 50, &poweredBy_logo_1_image},
        {87, 0, 25, 45, &poweredBy_logo_1_image},
        {87, 0, 25, 40, &poweredBy_logo_1_image},
        {87, 0, 25, 35, &poweredBy_logo_1_image},
        {87, 0, 25, 30, &poweredBy_logo_1_image},
        {87, 0, 25, 25, &poweredBy_logo_1_image},
        {87, 0, 25, 20, &poweredBy_logo_1_image},
        {87, 0, 25, 15, &poweredBy_logo_1_image},
        {87, 0, 25, 10, &poweredBy_logo_1_image},
        {87, 0, 25, 5, &poweredBy_logo_1_image},
        {87, 0, 25, 0, &poweredBy_logo_1_image}
    }
};


