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
  
 3D Vector Interface

 Copyright (C) 2014 Tobias Simon, Ilmenau University of Technology

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details. */


#ifndef __VEC3_H__
#define __VEC3_H__


/* generic 3d vector */
typedef union
{
   struct
   {  /* device coordinates: */
      float x; /* pitch direction */
      float y; /* roll direction */
      float z; /* yaw direction */
   };
   struct
   {  /* global coordinates: */
      float n; /* north */
      float e; /* east */
      float u; /* up */
   };
   float vec[3];
}
vec3_t;


/* copy vector vi to vo */
void vec3_copy(vec3_t *vo, const vec3_t *vi);

/* scalar product */
void vec3_mul_scalar(vec3_t *out, const vec3_t *in, const float scalar);

/* vector length */
float vec3_len(const vec3_t *in);


#endif /* __VEC3_H__ */

