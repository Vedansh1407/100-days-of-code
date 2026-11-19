#include <stdio.h>

int main() {
    int matrix[10][10];
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

    printf("\nDiagonal Traversal:\n");

    // There are (rows + cols - 1) diagonals in total
    // Each diagonal has a constant index sum: d = i + j
    for (int d = 0; d < rows + cols - 1; d++) {
        // Determine starting row and column for diagonal d
        int r = (d < rows) ? d : rows - 1;
        int c = (d < rows) ? 0 : d - (rows - 1);

        // Move upward-right along the diagonal
        while (r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
        printf("\n");
    }

    return 0;
}
