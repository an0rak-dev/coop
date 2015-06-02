/*******************************************************************************
 *                                rectangle.h                                  *
 *                                                                             *
 * Copyright 2015 by Sylvain Nieuwlandt                                        *
 *                                                                             *
 *  Licensed under the Apache License, Version 2.0 (the "License");            *
 *  you may not use this file except in compliance with the License.           *
 *  You may obtain a copy of the License at                                    *
 *                                                                             *
 *      http://www.apache.org/licenses/LICENSE-2.0                             *
 *                                                                             *
 *  Unless required by applicable law or agreed to in writing, software        *
 *  distributed under the License is distributed on an "AS IS" BASIS,          *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
 *  See the License for the specific language governing permissions and        *
 *  limitations under the License.                                             *
 ******************************************************************************/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <stdlib.h>  /* malloc/free */
#include "shape.h"

struct rectangle_table_t;

typedef struct rectangle_t{
	Shape shape; /* Mother class */
	struct rectangle_table_t *table;
} Rectangle;

extern Rectangle* Rectangle_create();
extern void Rectangle_destroy(Rectangle* rect);

extern int Rectangle_getWidth(const Rectangle* rect);
extern int Rectangle_getHeight(const Rectangle* rect);

extern void Rectangle_setWidth(const Rectangle* rect, const int width);
extern void Rectangle_setHeight(const Rectangle* rect, const int height);

#endif
