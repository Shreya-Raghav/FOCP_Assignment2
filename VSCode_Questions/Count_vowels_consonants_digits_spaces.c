#include <stdio.h>
#include <ctype.h>

int main() {
    char line[1005];
    printf("Enter a line of text: ");
    if (fgets(line, sizeof(line), stdin) == NULL) return 0;

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        char ch = line[i];
        if (ch == ' ') {
            spaces++;
        } else if (isdigit((unsigned char)ch)) {
            digits++;
        } else if (isalpha((unsigned char)ch)) {
            char lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}