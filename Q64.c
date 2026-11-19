#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; // Stores frequency of digits 0-9

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle 0 as a special case
    if (num == 0) {
        freq[0] = 1;
    }

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Extract each digit and increment its frequency
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    int maxFreq = 0, mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }

    printf("Most frequent digit: %d (appears %d times)\n", mostFrequentDigit, maxFreq);

    return 0;
}
