#include <stdio.h>

typedef enum {
    MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY,
    FRIDAY, SATURDAY, SUNDAY
} Day;

int main(void)
{
    Day today = WEDNESDAY;
    printf("Day number = %d\n", today);
    return 0;
}
