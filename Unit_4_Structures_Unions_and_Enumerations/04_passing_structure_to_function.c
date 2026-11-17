#include <stdio.h>

struct Rectangle {
    float length, breadth;
};

float area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int main(void)
{
    struct Rectangle rectangle;
    printf("Enter length and breadth: ");
    scanf("%f %f", &rectangle.length, &rectangle.breadth);

    printf("Area = %.2f\n", area(rectangle));
    return 0;
}
