#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Store the number of digits of num in n
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute sum of nth power of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        // round() is used to handle floating-point inaccuracies from pow()
        result += round(pow(remainder, n));
        originalNum /= 10;
    }

    // Check if the number is equal to the result
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
