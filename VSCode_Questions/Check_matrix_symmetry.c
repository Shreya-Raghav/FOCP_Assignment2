#include <stdio.h>

int main() {
    int n;
    printf("Enter matrix size n: ");
    if (scanf("%d", &n) != 1) return 0;

    long long mat[100][100];
    printf("Enter %d x %d matrix elements:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &mat[i][j]);
        }
    }

    int isSymmetric = 1;
    for (int i = 0; i < n && isSymmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    printf("%s\n", isSymmetric ? "YES" : "NO");
    return 0;
}