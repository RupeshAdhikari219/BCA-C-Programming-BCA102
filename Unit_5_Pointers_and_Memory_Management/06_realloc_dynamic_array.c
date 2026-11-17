#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers = malloc(3 * sizeof(*numbers));
    if (numbers == NULL) return 1;

    for (int i = 0; i < 3; i++) numbers[i] = (i + 1) * 10;

    int *larger = realloc(numbers, 5 * sizeof(*numbers));
    if (larger == NULL) {
        free(numbers);
        return 1;
    }
    numbers = larger;

    numbers[3] = 40;
    numbers[4] = 50;

    for (int i = 0; i < 5; i++) printf("%d ", numbers[i]);
    printf("\n");

    free(numbers);
    numbers = NULL;
    return 0;
}
