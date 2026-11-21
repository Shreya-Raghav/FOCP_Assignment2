#include <stdio.h>

int isPerfectSquare(long long n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    
    for (long long i = 1; i * i <= n; i++) {
        if (i * i == n) return 1;
    }
    return 0;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("%d\n", isPerfectSquare(n));
    }
    return 0;
}