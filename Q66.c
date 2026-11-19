#include <stdio.h>

int main() {
    int arr[100], n, key, i;

    printf("Enter the number of elements (max 99): ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted (ascending) order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Shift elements greater than key one position to the right
    i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert key at the vacated spot and increase array size
    arr[i + 1] = key;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
