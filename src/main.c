/*******************************************************************************
 *                                  main.c                                     *
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
