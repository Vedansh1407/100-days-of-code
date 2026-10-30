#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum;
    int firstDigit, lastDigit, digitsCount;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    // Find total number of digits minus 1 using base-10 logarithm
    digitsCount = (int)log10(num);

    // Find the first digit
    firstDigit = (int)(num / pow(10, digitsCount));

    // Construct the swapped number
    // 1. Start with the last digit moved to the first position
    swappedNum = lastDigit * (int)round(pow(10, digitsCount));
    
    // 2. Add the middle digits (remove original first digit and last digit)
    swappedNum += num % (int)round(pow(10, digitsCount));
    swappedNum -= lastDigit;
    
    // 3. Add the original first digit to the end
    swappedNum += firstDigit;

    // Output the result
    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}

