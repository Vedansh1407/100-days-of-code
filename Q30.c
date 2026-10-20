#include <stdio.h>
int main() {
    int n, original, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
        
    }
    printf("Reversed number of %d is %d", original, reversed);
    return 0;
}