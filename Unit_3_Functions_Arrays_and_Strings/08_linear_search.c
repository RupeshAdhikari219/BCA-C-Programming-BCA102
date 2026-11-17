#include <stdio.h>

int main(void)
{
    int n, a[100], key, found = 0;
    printf("Enter array size (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Value not found.\n");
    return 0;
}
