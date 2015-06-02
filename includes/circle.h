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
