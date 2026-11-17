#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("random.txt", "w+");
    long position;

    if (fp == NULL) {
        perror("random.txt");
        return 1;
    }

    fputs("ABCDEFGHIJ", fp);
    position = ftell(fp);
    printf("Position after writing = %ld\n", position);

    if (fseek(fp, 4, SEEK_SET) != 0) {
        printf("fseek failed.\n");
        fclose(fp);
        return 1;
    }

    printf("Character at index 4 = %c\n", fgetc(fp));

    rewind(fp);
    printf("First character after rewind = %c\n", fgetc(fp));

    fclose(fp);
    return 0;
}
