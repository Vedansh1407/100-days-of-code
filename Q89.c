#include <stdio.h>

int main() {
    char str[100], target;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find its frequency: ");
    scanf(" %c", &target);

    // Count occurrences of target in str
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", target, count);

    return 0;
}
