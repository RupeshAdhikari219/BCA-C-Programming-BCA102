#include <stdio.h>

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Addition       = %.2f\n", a + b);
    printf("Subtraction    = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);

    if (b != 0)
        printf("Division       = %.2f\n", a / b);
    else
        printf("Division by zero is undefined.\n");

    return 0;
}
