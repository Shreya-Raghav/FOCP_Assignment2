#include <stdio.h>
#include <string.h>

int main() {
    char str[1005];
    printf("Enter a letters-only string: ");
    if (scanf("%1000s", str) != 1) return 0;

    int len = strlen(str);
    if (len == 0) return 0;

    int count = 1;
    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            printf("%c%d", str[i - 1], count);
            count = 1;
        }
    }
    printf("\n");
    return 0;
}