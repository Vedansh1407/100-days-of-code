#include <stdio.h>
#include <math.h>

int main() {
    int num, root;

    // Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Negative numbers cannot be perfect squares in real numbers
    if (num < 0) {
        printf("%d is not a perfect square.\n", num);
    } else {
        // Calculate the square root and truncate to an integer
        root = (int)sqrt(num);

        // Check if the square of the root equals the original number
        if (root * root == num) {
            printf("%d is a perfect square (%d * %d = %d).\n", num, root, root, num);
        } else {
            printf("%d is not a perfect square.\n", num);
        }
    }

    return 0;
}
