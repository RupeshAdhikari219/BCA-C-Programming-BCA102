#include <stdio.h>

struct Record {
    int id;
    float marks;
};

int main(void)
{
    struct Record original = {101, 87.5f}, loaded;
    FILE *fp = fopen("record.bin", "wb");
    if (fp == NULL) {
        perror("record.bin");
        return 1;
    }

    if (fwrite(&original, sizeof(original), 1, fp) != 1) {
        printf("Write failed.\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    fp = fopen("record.bin", "rb");
    if (fp == NULL) {
        perror("record.bin");
        return 1;
    }

    if (fread(&loaded, sizeof(loaded), 1, fp) != 1) {
        printf("Read failed.\n");
        fclose(fp);
        return 1;
    }

    printf("ID = %d, Marks = %.2f\n", loaded.id, loaded.marks);
    fclose(fp);
    return 0;
}
