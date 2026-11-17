#include <stdio.h>

int main(void)
{
    int n, a[100];
    printf("Enter array size (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > largest) largest = a[i];

    printf("Largest element = %d\n", largest);
    return 0;
}
