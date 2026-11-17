#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
