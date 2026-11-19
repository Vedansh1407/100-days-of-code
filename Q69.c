#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least 2 elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Single pass to find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}
