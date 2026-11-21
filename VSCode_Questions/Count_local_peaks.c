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

    int peaks = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long val = mat[i][j];
            int isPeak = 1;

            if (i > 0 && mat[i - 1][j] >= val) isPeak = 0;       // Up
            if (i < r - 1 && mat[i + 1][j] >= val) isPeak = 0;   // Down
            if (j > 0 && mat[i][j - 1] >= val) isPeak = 0;       // Left
            if (j < c - 1 && mat[i][j + 1] >= val) isPeak = 0;   // Right

            if (isPeak) {
                peaks++;
            }
        }
    }

    printf("%d\n", peaks);
    return 0;
}