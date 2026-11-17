#include <stdio.h>

int global_value = 100; /* global variable */

void show_counter(void)
{
    static int calls = 0; /* retains its value between function calls */
    int local_value = 10; /* created each time this function is called */

    calls++;
    printf("Call %d: local=%d, global=%d\n",
           calls, local_value, global_value);
}

int main(void)
{
    show_counter();
    show_counter();
    show_counter();
    return 0;
}
