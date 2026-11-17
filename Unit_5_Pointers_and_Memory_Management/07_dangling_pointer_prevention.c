#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof(*ptr));
    if (ptr == NULL) return 1;

    *ptr = 100;
    printf("Value = %d\n", *ptr);

    free(ptr);
    ptr = NULL; /* prevents accidental use of a dangling pointer */

    if (ptr == NULL)
        printf("Pointer is NULL after free; do not dereference it.\n");

    return 0;
}
