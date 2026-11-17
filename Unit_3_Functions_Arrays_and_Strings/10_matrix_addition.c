#include <stdio.h>

int main(void)
{
    int a[10][10], b[10][10], sum[10][10], r, c;

    printf("Enter rows and columns (1-10): ");
    scanf("%d %d", &r, &c);
    if (r < 1 || r > 10 || c < 1 || c > 10) return 1;

    printf("Enter first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);

    printf("Sum matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
