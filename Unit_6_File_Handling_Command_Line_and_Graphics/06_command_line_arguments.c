#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of command-line arguments (including program name): %d\n", argc);

    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    return 0;
}
