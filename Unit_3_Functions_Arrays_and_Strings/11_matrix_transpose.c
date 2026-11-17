#include <stdio.h>

int main(void)
{
    int a[10][10], r, c;
    printf("Enter rows and columns (1-10): ");
    scanf("%d %d", &r, &c);
    if (r < 1 || r > 10 || c < 1 || c > 10) return 1;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    printf("Transpose:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
