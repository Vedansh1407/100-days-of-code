#include <stdio.h>

int main() {
    int total_rows = 7;
    int spaces = 3;     // Starting spaces for the first row
    int stars = 1;      // Starting stars for the first row

    // Outer loop controls each row
    for (int i = 1; i <= total_rows; i++) {
        
        // 1. Inner loop to print leading spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // 2. Inner loop to print stars horizontally
        for (int k = 0; k < stars; k++) {
            printf("*");
        }

        // Move to the next line after completing the current row
        printf("\n");

        // Update spaces and stars for the next row
        if (i < 4) {
            spaces--;  // Top half: spaces decrease (3 -> 2 -> 1 -> 0)
            stars += 2; // Top half: stars increase (1 -> 3 -> 5 -> 7)
        } else {
            spaces++;  // Bottom half: spaces increase (0 -> 1 -> 2 -> 3)
            stars -= 2; // Bottom half: stars decrease (7 -> 5 -> 3 -> 1)
        }
    }

    return 0;
}
