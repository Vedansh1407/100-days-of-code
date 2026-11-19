#include <stdio.h>

int main() {
    int arr[100], n;
    int posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive numbers = %d\n", posCount);
    printf("Negative numbers = %d\n", negCount);
    printf("Zeroes = %d\n", zeroCount);

    return 0;
}
