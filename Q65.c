#include <stdio.h>

int main() {
    long long num;
    int freq = {0};

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle 0 and negative inputs
    if (num == 0) {
        freq = 1;
    } else if (num < 0) {
        num = -num;
    }

    // Count occurrences of each digit
    while (num > 0) {
        freq[num % 10]++;
        num /= 10;
    }

    // Find the maximum frequency
    int maxFreq = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    // Print all digits matching the maximum frequency
    printf("Most frequent digit(s) (appeared %d times): ", maxFreq);
    for (int i = 0; i < 10; i++) {
        if (freq [i] == maxFreq) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
