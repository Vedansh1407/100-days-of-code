#include <stdio.h>

int main() {
    int matrix;
    int rows, cols, isSymmetric = 1;

    printf("Enter number of rows and columns (max 10x10): ");
    scanf("%d %d", &rows, &cols);

    // A symmetric matrix must be a square matrix
    if (rows != cols) {
        printf("The matrix is not symmetric (must be a square matrix).\n");
        return 0;
    }

    // Read elements into the matrix
    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix[i][j] equals matrix[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
