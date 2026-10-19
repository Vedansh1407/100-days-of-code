// Name: Vedansh Agarwal
// Sap ID: 590042489


#include <stdio.h>
int main() {
    int sum = 0;
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of the first %d positive integers is: %d\n", n, sum);
    return 0;
}