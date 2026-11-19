#include <stdio.h>

int main() {
    char str[100];
    int seen[26] = {0}; // Tracks whether each lowercase letter 'a'-'z' has appeared
    char firstRepeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Scan the string from left to right
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a'; // Map 'a'-'z' to 0-25
            if (seen[index] == 1) {
                firstRepeating = str[i];
                break; // Stop at the first repeating character
            }
            seen[index] = 1;
        }
    }

    if (firstRepeating != '\0') {
        printf("First repeating lowercase alphabet: '%c'\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
