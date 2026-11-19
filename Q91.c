#include <stdio.h>

int main() {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Copy only non-vowel characters forward
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j++] = str[i];
        }
    }

    // Null-terminate the modified string
    str[j] = '\0';

    printf("String without vowels: %s", str);

    return 0;
}
