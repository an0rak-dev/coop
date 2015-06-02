#ifndef SHAPE_H
#define SHAPE_H

typedef struct shape_t {
	float (*calculateSurface)(const struct shape_t *shape);
} Shape;

extern float Shape_calculateSurface(const Shape* shape);

#endif
