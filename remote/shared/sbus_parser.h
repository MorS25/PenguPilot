/*___________________________________________________
 |  _____                       _____ _ _       _    |
 | |  __ \                     |  __ (_) |     | |   |
 | | |__) |__ _ __   __ _ _   _| |__) || | ___ | |_  |
 | |  ___/ _ \ '_ \ / _` | | | |  ___/ | |/ _ \| __| |
 | | |  |  __/ | | | (_| | |_| | |   | | | (_) | |_  |
 | |_|   \___|_| |_|\__, |\__,_|_|   |_|_|\___/ \__| |
 |                   __/ |                           |
 |  GNU/Linux based |___/  Multi-Rotor UAV Autopilot |
 |___________________________________________________|
  
 S.Bus Parser Interface
 Tested on FrSky; might work with others

 Copyright (C) 2014 Tobias Simon, Ilmenau University of Technology

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details. */


#ifndef __SBUS_PARSER_H__
#define __SBUS_PARSER_H__


#include <stdint.h>
#include <stdbool.h>

#include "remote.h"


typedef struct
{
   bool valid;
   uint8_t buffer[128];
   float channels[MAX_CHANNELS];
   size_t frame_idx;
   bool zero_char_seen;
}
sbus_parser_t;


void sbus_parser_init(sbus_parser_t *parser);

bool sbus_parser_process(sbus_parser_t *parser, uint8_t c);


#endif /* __SBUS_PARSER_H__ */
