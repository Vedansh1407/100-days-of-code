#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, isDistinct = 1;

    printf("Enter number of rows and columns (max 10x10): ");
    scanf("%d %d", &rows, &cols);

    // Read elements into the matrix
    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Length of the main diagonal
    int diagLen = (rows < cols) ? rows : cols;

    // Compare each diagonal element matrix[i][i] with subsequent diagonal elements
    for (int i = 0; i < diagLen - 1; i++) {
        for (int j = i + 1; j < diagLen; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("All main diagonal elements are distinct.\n");
    } else {
        printf("Main diagonal elements are not distinct (duplicates found).\n");
    }

    return 0;
}
