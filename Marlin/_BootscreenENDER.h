#pragma once

#define CUSTOM_BOOTSCREEN_TIMEOUT 1500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  88
#define CUSTOM_BOOTSCREEN_INVERTED

const unsigned char custom_start_bmp[] PROGMEM = {
  0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ###################################.####################################################
  0xFF,0xFF,0xFF,0xFF,0xEF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF, // ###################################.#######.############################################
  0xFF,0xFF,0xFF,0xFF,0xE7,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF, // ###################################..#####.#############################################
  0xFF,0xFF,0xFF,0xFF,0xE7,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF, // ###################################..#####.#############################################
  0xFF,0xFF,0xFF,0xFF,0xE3,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF, // ###################################...####.#############################################
  0xFF,0xFF,0xFF,0xFF,0xF3,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF, // ####################################..####..############################################
  0xFF,0xFF,0xFF,0xE1,0xE1,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF, // ###########################....####....###..############################################
  0xFF,0xFE,0x78,0x00,0x00,0x03,0xDD,0xFF,0xFF,0xFF,0xFF, // ###############..####.........................####.###.#################################
  0xFE,0xFF,0x80,0x7E,0x00,0x01,0xEE,0xFF,0xFF,0xFF,0xFF, // #######.#########........######................####.###.################################
  0xFE,0x7D,0xCF,0xFC,0x00,0x00,0xF7,0x7F,0xFF,0xFF,0xFF, // #######..#####.###..##########..................####.###.###############################
  0xFF,0x8E,0x06,0x00,0x00,0x00,0x7B,0xBF,0xFF,0xFF,0xFF, // #########...###......##..........................####.###.##############################
  0xFF,0xC0,0x00,0x00,0x00,0x00,0x7D,0xDF,0xFF,0xFF,0xFF, // ##########.......................................#####.###.#############################
  0xFF,0xFC,0x01,0xFE,0x00,0x00,0x3E,0xE7,0xFF,0xFF,0xFF, // ##############.........########...................#####.###..###########################
  0xFF,0xFF,0xFF,0xFC,0x00,0x03,0x1F,0x73,0xFF,0xFF,0xFF, // ##############################................##...#####.###..##########################
  0xFF,0xFF,0xFF,0xF8,0x00,0x01,0x8F,0x81,0xFF,0xFF,0xFF, // #############################..................##...#####......#########################
  0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x83,0xF9,0xFF,0xFF,0xFF, // ###########################.....................#.....#######..#########################
  0xFF,0xFF,0xFF,0x00,0xFC,0x00,0x00,0xF0,0xFF,0xFF,0xFF, // ########################........######..................####....########################
  0xFF,0xFF,0xE0,0x0F,0xFF,0xC0,0x00,0x00,0xFF,0xFF,0xFF, // ###################.........##############......................########################
  0xFF,0xFE,0x03,0xFF,0xFF,0xC0,0x00,0x00,0xFF,0xFF,0xFF, // ###############.......####################......................########################
  0xFF,0xFF,0xFF,0xFF,0xF9,0x00,0x00,0x00,0xFF,0xFF,0xFF, // #####################################..#........................########################
  0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x07,0xC0,0xFF,0xFF,0xFF, // ######################################...............#####......########################
  0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x07,0xE0,0xFF,0xFF,0xFF, // ########################################.............######.....########################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x07,0xF1,0xFF,0xFF,0xFF, // ###########################################..........#######...#########################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xF9,0xFF,0xFF,0xFF, // ##############################################.......########..#########################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xF9,0xFF,0xFF,0xFF, // ################################################......#######..#########################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xF9,0xFF,0xFF,0xFF, // #################################################.....#######..#########################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF, // ##################################################....##################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF, // ###################################################....#################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xBF,0xFF,0xFF,0xFF, // ####################################################....#.##############################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xF8,0x3F,0xFF,0xFF,0xFF, // #############################################.#######.....##############################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xF8,0x3F,0xFF,0xFF,0xFF, // #############################################..######.....##############################
  0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0xF0,0xFF,0xFF,0xFF,0xFF, // ########################################.######.####....################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0x8E,0x03,0xFF,0xFF,0xFF,0xFF, // #########################################...###.......##################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0xFF, // ###########################################........#####################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ########################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ########################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF, // ########################################################.###############################
  0xFF,0x00,0x00,0x7F,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF, // ########.................############################....###############################
  0xFF,0x80,0x00,0x7F,0xFF,0xFF,0xE0,0x7F,0xFF,0xFF,0xFF, // #########................##########################......###############################
  0xFF,0xC3,0xFC,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF, // ##########....########..#############################...################################
  0xFF,0xC3,0xFC,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF, // ##########....########..#############################...################################
  0xFF,0x87,0xFD,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF, // #########....#########.#############################...#################################
  0xFF,0x87,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF, // #########....#######################################...#################################
  0xFF,0x0F,0xE7,0xF3,0x0F,0xFC,0x23,0xFC,0x3F,0xFF,0xFF, // ########....#######..#######..##....##########....#...########....######################
  0xFF,0x0F,0xEF,0x80,0x07,0xF0,0x03,0xF0,0x1E,0x00,0x7F, // ########....#######.#####............#######..........######.......####..........#######
  0xFE,0x1F,0xCF,0x81,0x87,0xC7,0x87,0xC7,0x0C,0x00,0x7F, // #######....#######..#####......##....#####...####....#####...###....##...........#######
  0xFE,0x00,0x1F,0xC7,0xC7,0x8F,0xC7,0x9F,0x0F,0x0C,0xFF, // #######............#######...#####...####...######...####..#####....####....##..########
  0xFE,0x00,0x1F,0x87,0x8F,0x1F,0x8F,0x1F,0x0F,0x1F,0xFF, // #######............######....####...####...######...####...#####....####...#############
  0xFC,0x3F,0x9F,0x8F,0x8F,0x1F,0x8E,0x00,0x1E,0x3F,0xFF, // ######....#######..######...#####...####...######...###............####...##############
  0xFC,0x7F,0x3F,0x0F,0x1E,0x3F,0x1E,0x3F,0xFE,0x3F,0xFF, // ######...#######..######....####...####...######...####...#############...##############
  0xF8,0x7F,0xFF,0x1F,0x1C,0x3F,0x1C,0x7F,0xFC,0x7F,0xFF, // #####....###############...#####...###....######...###...#############...###############
  0xF8,0xFF,0xFF,0x1E,0x1C,0x7E,0x1C,0x7F,0xFC,0x7F,0xFF, // #####...################...####....###...######....###...#############...###############
  0xF0,0xFF,0xCE,0x3E,0x3C,0x7E,0x3C,0x7F,0xB8,0xFF,0xFF, // ####....##########..###...#####...####...######...####...########.###...################
  0xF0,0xFF,0x9E,0x3C,0x38,0x7C,0x38,0x7E,0x78,0xFF,0xFF, // ####....#########..####...####....###....#####....###....######..####...################
  0xE1,0xFF,0x3C,0x7C,0x78,0x7C,0x78,0x3C,0xF1,0xFF,0xFF, // ###....#########..####...#####...####....#####...####.....####..####...#################
  0xE1,0xF8,0x38,0x78,0x78,0x10,0x18,0x01,0xF1,0xFF,0xFF, // ###....######.....###....####....####......#.......##..........#####...#################
  0x00,0x00,0x60,0x20,0x3C,0x00,0x7C,0x07,0x80,0x7F,0xFF, // .................##.......#.......####...........#####.......####........###############
  0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFE,0x1F,0xFF,0xFF,0xFF  // #######################################....############....#############################
};
