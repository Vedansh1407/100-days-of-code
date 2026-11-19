#include <stdio.h>

int main() {
    int arr[100], n, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Read elements and check if even or odd
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total even numbers = %d\n", evenCount);
    printf("Total odd numbers = %d\n", oddCount);

    return 0;
}
