#include <stdio.h>

int main() {
    int n;
    long long target;
    printf("Enter n and target: ");
    if (scanf("%d %lld", &n, &target) != 2) return 0;

    long long arr[1000];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}