#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop controls the starting number for each row
    for (int i = rows; i >= 1; i--) {
        
        // Inner loop 1: Prints the leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        
        // Inner loop 2: Prints the numbers from 'i' up to 5
        for (int k = i; k <= rows; k++) {
            printf("%d", k);
        }
        
        // Move to the next line after completing the row
        printf("\n");
    }

    return 0;
}
