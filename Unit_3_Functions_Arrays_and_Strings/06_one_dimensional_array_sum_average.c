#include <stdio.h>

int main(void)
{
    int n, values[100];
    long sum = 0;

    printf("How many numbers (1-100)? ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    for (int i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
        sum += values[i];
    }

    printf("Sum = %ld\nAverage = %.2f\n", sum, (double)sum / n);
    return 0;
}
