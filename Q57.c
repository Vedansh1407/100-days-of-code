#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Read elements and add them to sum
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add current element to sum
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
