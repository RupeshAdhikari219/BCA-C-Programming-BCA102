#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("message.txt", "r");
    int ch;

    if (fp == NULL) {
        perror("message.txt");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    if (ferror(fp)) {
        perror("Error while reading");
        fclose(fp);
        return 1;
    }

    fclose(fp);
    return 0;
}
