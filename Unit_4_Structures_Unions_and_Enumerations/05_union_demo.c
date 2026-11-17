#include <stdio.h>
#include <string.h>

union Data {
    int number;
    float decimal;
    char word[20];
};

int main(void)
{
    union Data value;

    value.number = 25;
    printf("Integer member = %d\n", value.number);

    value.decimal = 3.14f; /* overwrites the same memory */
    printf("Float member = %.2f\n", value.decimal);

    strcpy(value.word, "C-language");
    printf("String member = %s\n", value.word);

    printf("Size of union = %zu bytes\n", sizeof(value));
    return 0;
}
