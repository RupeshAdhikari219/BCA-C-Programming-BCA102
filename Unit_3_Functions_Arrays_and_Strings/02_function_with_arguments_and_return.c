#include <stdio.h>

int add(int a, int b); /* function prototype */

int main(void)
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Sum = %d\n", add(x, y));
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
