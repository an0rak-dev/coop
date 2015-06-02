/*******************************************************************************
 *                                 circle.h                                    *
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

#ifndef CIRCLE_H
#define CIRCLE_H

#include <stdlib.h> /* malloc / free */
#include "shape.h"

struct circle_table_t;

typedef struct circle_t {
	/* Mother class */
	Shape shape; 
	struct circle_table_t *table;
} Circle;

extern Circle* Circle_create();
extern void Circle_destroy(Circle* circle);

extern int Circle_getRadius(const Circle* circle);
extern void Circle_setRadius(const Circle* circle, const int radius);

#endif
