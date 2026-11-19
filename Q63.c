#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    // Read first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy elements of arr1 into merged
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of arr2 into merged starting at index n1
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print the merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
