#include <stdio.h>

int main(void)
{
    int values[] = {10, 20, 30, 40, 50};
    int *ptr = values;

    for (int i = 0; i < 5; i++)
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));

    return 0;
}
