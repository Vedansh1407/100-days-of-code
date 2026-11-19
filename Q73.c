#include <stdio.h>

int main() {
    int matrix;
    int rowSum; // 1D array to store the sum of each row
    int rows, cols;

    printf("Enter number of rows and columns (max 10x10): ");
    scanf("%d %d", &rows, &cols);

    // Read elements into the matrix
    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row and store it in rowSum[]
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for the current row
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the stored row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
