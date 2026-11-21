#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter integer n: ");
    if (scanf("%d", &n) != 1 || n < 2) return 0;

    long long arr[1000];
    printf("Enter %d distinct integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long minDiff = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = arr[i] - arr[j];
            if (diff < 0) diff = -diff;
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("%lld\n", minDiff);
    return 0;
}