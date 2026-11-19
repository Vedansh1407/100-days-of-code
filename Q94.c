#include <stdio.h>

int main() {
    char str[200];
    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        // Check if current character is a word delimiter or end of string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
            currStart = i + 1;

            if (str[i] == '\0') {
                break;
            }
        } else {
            currLen++;
        }
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf(" (Length: %d)\n", maxLen);

    return 0;
}
