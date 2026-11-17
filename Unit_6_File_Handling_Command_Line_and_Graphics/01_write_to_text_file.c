#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("message.txt", "w");
    if (fp == NULL) {
        perror("message.txt");
        return 1;
    }

    fprintf(fp, "Learning file handling in C.\n");
    fprintf(fp, "This is a text file.\n");

    if (fclose(fp) != 0) {
        perror("fclose");
        return 1;
    }
    printf("Data written to message.txt\n");
    return 0;
}
