#include <stdio.h>

int main(void)
{
    int a = 12, b = 5;

    printf("Arithmetic: %d + %d = %d\n", a, b, a + b);
    printf("Relational: a > b = %d\n", a > b);
    printf("Logical: (a > 10 && b < 10) = %d\n", a > 10 && b < 10);
    printf("Bitwise: a & b = %d\n", a & b);
    printf("Assignment: a += 3 gives %d\n", a += 3);
    printf("Conditional: %s\n", (a > b) ? "a is greater" : "b is greater");
    printf("sizeof(a) = %zu\n", sizeof(a));
    return 0;
}
