#include <stdio.h>

int main(void)
{
    FILE *source = fopen("input.txt", "r");
    FILE *destination = fopen("copy.txt", "w");
    int ch;

    if (source == NULL || destination == NULL) {
        perror("Could not open input/output file");
        if (source != NULL) fclose(source);
        if (destination != NULL) fclose(destination);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    if (ferror(source) || ferror(destination)) {
        printf("An error occurred during copying.\n");
        fclose(source);
        fclose(destination);
        return 1;
    }

    fclose(source);
    fclose(destination);
    printf("Copied input.txt to copy.txt\n");
    return 0;
}
