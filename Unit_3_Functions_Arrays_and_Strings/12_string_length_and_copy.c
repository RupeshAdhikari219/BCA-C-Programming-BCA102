#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[100], copy[100];

    printf("Enter a line: ");
    if (fgets(source, sizeof(source), stdin) == NULL) return 1;
    source[strcspn(source, "\n")] = '\0';

    strcpy(copy, source);
    printf("Length = %zu\n", strlen(source));
    printf("Copied string = %s\n", copy);
    return 0;
}
