#include <stdio.h>

int main(void)
{
    int n, a[100];
    printf("Enter array size (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
