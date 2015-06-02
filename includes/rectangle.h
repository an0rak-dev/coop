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
