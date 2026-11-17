#include <stdio.h>

int main(void)
{
    char word[] = "PROGRAM";
    char *ptr = word;

    while (*ptr != '\0') {
        putchar(*ptr);
        ptr++;
    }
    putchar('\n');
    return 0;
}
