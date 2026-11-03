#include <stdio.h>

int main() {
    // Array storing the number of stars for each of the 5 segments
    int pattern[] = {1, 3, 5, 3, 1};
    int total_segments = 5;

    // Loop through each segment
    for (int i = 0; i < total_segments; i++) {
        int stars_in_segment = pattern[i];
        
        // Loop to print the vertical stars in the current segment
        for (int j = 0; j < stars_in_segment; j++) {
            printf("*\n");
        }
        
        // Print a blank line between segments (except after the last one)
        if (i < total_segments - 1) {
            printf("\n");
        }
    }

    return 0;
}
