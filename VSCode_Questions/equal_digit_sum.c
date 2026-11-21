#include <stdio.h>

int digitSum(long long num) {
    if (num < 0) num = -num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter integer n: ");
    if (scanf("%d", &n) != 1) return 0;

    long long arr[1000];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (digitSum(arr[i]) == digitSum(arr[j])) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}