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
