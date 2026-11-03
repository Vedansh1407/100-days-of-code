#include <stdio.h>

int main() {
    // Outer loop controls the 5 blocks
    for (int i = 0; i < 5; i++) {
        // Inner loop prints 5 stars per block
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        // Print a space between blocks, omitting it for the final block
        if (i < 4) {
            printf("\n");
        }
    }
    printf("\n"); // Newline at the end
    return 0;
}
