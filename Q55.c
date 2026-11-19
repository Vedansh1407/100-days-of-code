#include <stdio.h>

int main() {
    int n, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Start from 2 because 1 is not a prime number
    for (int i = 2; i <= n; i++) {
        isPrime = 1; // Assume i is prime

        // Check divisibility from 2 up to square root of i
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
