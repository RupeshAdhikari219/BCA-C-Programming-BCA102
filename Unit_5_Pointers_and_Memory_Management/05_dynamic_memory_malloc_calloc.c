#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("How many integers? ");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) return 1;

    int *a = malloc((size_t)n * sizeof(*a));
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Values: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    free(a);
    a = NULL;
    return 0;
}
