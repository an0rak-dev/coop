/*******************************************************************************
 *                                 circle.c                                    *
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
#include <circle.h>

#define PI 3.14159265359

struct circle_table_t {
	int radius;
};

static float Circle_calculateSurface(const Shape *shape);

Circle* Circle_create() {
	Circle* result = (Circle*) malloc(sizeof(Circle));
	struct circle_table_t* table = (struct circle_table_t *) 
	  malloc(sizeof(struct circle_table_t));
	result->table = table;
	result->shape.calculateSurface = Circle_calculateSurface;
	return result;
}

void Circle_destroy(Circle* circle) {
	free(circle->table);
	free(circle);
}

int Circle_getRadius(const Circle* circle) {
	return circle->table->radius;
}

void Circle_setRadius(const Circle* circle, const int radius) {
	circle->table->radius = radius;
}

static float Circle_calculateSurface(const Shape *shape) {
	const Circle *circle = (const Circle *) shape;
	return (circle->table->radius * circle->table->radius) * PI;
}
