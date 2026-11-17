#include <stdio.h>

int main(void)
{
    printf("Numbers 1 to 10, skipping 4 and stopping at 8:\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 4)
            continue; /* skip this iteration */
        if (i == 8)
            break;    /* leave the loop */
        printf("%d ", i);
    }
    printf("\n");

    /* goto is demonstrated for syllabus coverage; avoid it in normal flow. */
    goto end;
    printf("This line is skipped.\n");

end:
    printf("Reached the label using goto.\n");
    return 0;
}
