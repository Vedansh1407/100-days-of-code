#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Rotations must have the exact same length
    if (len1 != len2) {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself: temp = str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        printf("Yes, '%s' is a rotation of '%s'.\n", str2, str1);
    } else {
        printf("No, '%s' is NOT a rotation of '%s'.\n", str2, str1);
    }

    return 0;
}
