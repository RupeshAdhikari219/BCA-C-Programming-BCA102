#include <stdio.h>

int main(void)
{
    int whole = 7;
    double implicit_result = whole / 2.0; /* implicit conversion */
    double explicit_result = (double) whole / 2; /* explicit cast */

    printf("Implicit conversion result = %.2f\n", implicit_result);
    printf("Explicit conversion result = %.2f\n", explicit_result);
    return 0;
}
