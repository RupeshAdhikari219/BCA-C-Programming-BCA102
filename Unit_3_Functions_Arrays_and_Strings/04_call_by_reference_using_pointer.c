#include <stdio.h>

void change(int *x)
{
    *x = 500; /* changes the original variable through its address */
}

int main(void)
{
    int number = 10;
    change(&number);
    printf("Value after function call = %d\n", number);
    return 0;
}
