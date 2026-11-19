#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, sum = 0;

    printf("Enter number of rows and columns (max 10x10): ");
    scanf("%d %d", &rows, &cols);

    // Read elements and add them to sum
    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Accumulate sum
        }
    }

    printf("Sum of all matrix elements = %d\n", sum);

    return 0;
}
