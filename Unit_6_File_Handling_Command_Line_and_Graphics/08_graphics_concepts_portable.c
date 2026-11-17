/*
 * Portable alternative for practicing the geometry calculations used in
 * graphics programming. This program does not draw on a graphics screen.
 * A graphics.h / BGI example requires a separately configured graphics library.
 */
#include <stdio.h>

int main(void)
{
    double radius;
    const double PI = 3.141592653589793;

    printf("Enter circle radius: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    printf("Circle circumference = %.2f\n", 2 * PI * radius);
    printf("Circle area = %.2f\n", PI * radius * radius);
    printf("Graphics concept: a circle is defined by its center and radius.\n");
    return 0;
}
