#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    long sum = 0;

    if (argc < 2) {
        printf("Usage: %s number1 number2 ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char *end;
        errno = 0;
        long value = strtol(argv[i], &end, 10);

        if (errno != 0 || *end != '\0') {
            printf("Invalid integer: %s\n", argv[i]);
            return 1;
        }
        sum += value;
    }

    printf("Sum = %ld\n", sum);
    return 0;
}
