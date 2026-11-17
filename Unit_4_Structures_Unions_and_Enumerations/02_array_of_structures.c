#include <stdio.h>

struct Student {
    int roll;
    char name[40];
};

int main(void)
{
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter roll and name for student %d: ", i + 1);
        scanf("%d %39s", &students[i].roll, students[i].name);
    }

    printf("\nStudent list:\n");
    for (int i = 0; i < 3; i++)
        printf("%d - %s\n", students[i].roll, students[i].name);

    return 0;
}
