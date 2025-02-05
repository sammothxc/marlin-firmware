/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2024 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            8
#define STATUS_LOGO_WIDTH       40

const unsigned char status_logo_bmp[] PROGMEM = {
  B01110101,B10100011,B00001011,B10110001,B10001111, // .###.#.##.#...##....#.###.##...##...####
  B01110101,B10110110,B11111011,B01101111,B01110111, // .###.#.##.##.##.#####.##.##.####.###.###
  B01110101,B10110110,B11111010,B11101111,B01110111, // .###.#.##.##.##.#####.#.###.####.###.###
  B01010100,B00110111,B00011001,B11100001,B00001111, // .#.#.#....##.###...##..####....#....####
  B01010101,B10110111,B11101010,B11101111,B01011111, // .#.#.#.##.##.######.#.#.###.####.#.#####
  B01010101,B10110111,B11101011,B01101111,B01101111, // .#.#.#.##.##.######.#.##.##.####.##.####
  B10101101,B10100010,B00011011,B10110001,B01110111, // #.#.##.##.#...#....##.###.##...#.###.###
  B11111111,B11111111,B11111111,B11111111,B11111111, // ########################################
  B10111110,B11111111,B11111111,B11111111,B11111111, // #.#####.################################
  B10011100,B11101110,B11000111,B00011011,B10110000, // #..###..###.###.##...###...##.###.##....
  B10000000,B11101110,B10111010,B11101011,B01101111, // #.......###.###.#.###.#.###.#.##.##.####
  B10000000,B11101110,B10111010,B11101010,B11101111, // #.......###.###.#.###.#.###.#.#.###.####
  B10100010,B11101010,B10111010,B00011001,B11110001, // #.#...#.###.#.#.#.###.#....##..#####...#
  B10001000,B11101010,B10111010,B10111010,B11111110, // #...#...###.#.#.#.###.#.#.###.#.#######.
  B11000001,B11101010,B10111010,B11011011,B01111110, // ##.....####.#.#.#.###.#.##.##.##.######.
  B11111111,B11110101,B11000110,B11101011,B10100001  // ############.#.###...##.###.#.###.#....#
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
