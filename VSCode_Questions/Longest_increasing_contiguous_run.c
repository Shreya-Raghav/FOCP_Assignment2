#include <stdio.h>

int main() {
    int n;
    printf("Enter integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("0\n");
        return 0;
    }

    long long arr[1000];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    int maxLen = 1;
    int currLen = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currLen++;
            if (currLen > maxLen) {
                maxLen = currLen;
            }
        } else {
            currLen = 1;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}