#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    char name[40];
    struct Date admission_date;
};

int main(void)
{
    struct Student s = {101, "Aarav", {15, 7, 2026}};

    printf("Roll: %d\nName: %s\nAdmission: %02d-%02d-%d\n",
           s.roll, s.name,
           s.admission_date.day,
           s.admission_date.month,
           s.admission_date.year);
    return 0;
}
