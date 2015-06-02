#include <stdio.h> /* printf */

#include <Shape.h>
#include <Rectangle.h>
#include <Circle.h>

#define RECT_WIDTH 150
#define RECT_HEIGHT 70
#define CIRCLE_RADIUS 40

int main() {
	Rectangle *rect = Rectangle_create();
	Circle *circle = Circle_create();

	printf(" C oriented-object programming \n");
	printf("------------------------------------------\n");
	printf("- [Coop] Start the expirement \n");
	

	Rectangle_setWidth(rect, RECT_WIDTH);
	Rectangle_setHeight(rect, RECT_HEIGHT);
	Circle_setRadius(circle, CIRCLE_RADIUS);


	printf("- [Coop] Create rect a rectangle with a size %d x %d\n",
			 Rectangle_getWidth(rect), Rectangle_getHeight(rect));
	printf("- [Coop] Create circle a circle with a radius = %d\n",
			 Circle_getRadius(circle));

	printf("- [Coop] Calculate surface of rect = %f\n", 
			Shape_calculateSurface((Shape *) rect));
	printf("- [Coop] Calculate surface of circle = %f\n",
			Shape_calculateSurface((Shape *) circle));


	printf("- [Coop] End of the expirement \n");

	Circle_destroy(circle);
	Rectangle_destroy(rect);

	return 0;
}
