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

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long val = mat[i][j];
            int isRowMin = 1;
            int isColMax = 1;

            // Check if minimum in its row
            for (int col = 0; col < c; col++) {
                if (mat[i][col] < val) {
                    isRowMin = 0;
                    break;
                }
            }

            // Check if maximum in its column
            if (isRowMin) {
                for (int row = 0; row < r; row++) {
                    if (mat[row][j] > val) {
                        isColMax = 0;
                        break;
                    }
                }
            }

            if (isRowMin && isColMax) {
                printf("%d %d %lld\n", i, j, val);
                return 0;
            }
        }
    }

    printf("None\n");
    return 0;
}