/*******************************************************************************
 *                                 rectangle.c                                 *
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

#include <rectangle.h>

struct rectangle_table_t {
	int width;
	int height;
};

static float Rectangle_calculateSurface(const Shape* shape);

Rectangle* Rectangle_create() {
	Rectangle* result = (Rectangle *) malloc(sizeof(Rectangle));
	struct rectangle_table_t* table = (struct rectangle_table_t*)
	  malloc(sizeof(struct rectangle_table_t));
	result->table = table;
	result->shape.calculateSurface = Rectangle_calculateSurface;
	return result;
}

void Rectangle_destroy(Rectangle* rect) {
	free(rect->table);
	free(rect);
}

int Rectangle_getWidth(const Rectangle* rect) {
	return rect->table->width;
}

int Rectangle_getHeight(const Rectangle* rect) {
	return rect->table->height;
}

void Rectangle_setWidth(const Rectangle* rect, const int width) {
	rect->table->width = width;
}

void Rectangle_setHeight(const Rectangle* rect, const int height) {
	rect->table->height = height;
}

static float Rectangle_calculateSurface(const Shape* shape) {
	const Rectangle* rect = (const Rectangle *)shape;
	return rect->table->width * rect->table->height;
}
