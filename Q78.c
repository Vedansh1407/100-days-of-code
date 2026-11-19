#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, sum = 0;

    printf("Enter the size of the square matrix (n x n, max 10): ");
    scanf("%d", &n);

    // Read elements into the matrix
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Add main diagonal elements (where row index == column index)
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
