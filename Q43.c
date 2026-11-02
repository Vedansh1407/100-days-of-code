#include <stdio.h>

// Function to calculate the factorial of a digit
long long getFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, lastDigit;
    long long sum = 0;

    // Take input from the user
    printf("Enter a number to check: ");
    scanf("%d", &num);

    // Keep a copy of the original number
    originalNum = num;

    // Process each digit of the number
    while (num > 0) {
        lastDigit = num % 10;          // Extract the last digit
        sum += getFactorial(lastDigit); // Add its factorial to the sum
        num /= 10;                     // Remove the last digit
    }

    // Check if the sum of factorials matches the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}
