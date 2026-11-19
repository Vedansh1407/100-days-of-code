#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string (ignoring trailing newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    str[length] = '\0'; // Remove trailing newline if present

    // Reverse the string in-place using two pointers
    int start = 0, end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
