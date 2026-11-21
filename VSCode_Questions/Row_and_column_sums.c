#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns (r c): ");
    if (scanf("%d %d", &r, &c) != 2) return 0;

    long long mat[100][100];
    printf("Enter %d x %d matrix elements:\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &mat[i][j]);
        }
    }

    // Row sums
    for (int i = 0; i < r; i++) {
        long long rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("%lld%s", rowSum, (i == r - 1) ? "" : " ");
    }
    printf("\n");

    // Column sums
    for (int j = 0; j < c; j++) {
        long long colSum = 0;
        for (int i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("%lld%s", colSum, (j == c - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}