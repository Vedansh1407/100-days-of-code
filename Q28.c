// Name: Vedansh Agarwal
// Sap ID: 590042489




#include <stdio.h>
int main() {
    int product = 1;
    int even_n;
    printf("Enter a positive even integer: ");
    scanf("%d", &even_n);
    for (int i = 2; i <= even_n; i += 2) {
        product *= i;
    }
    printf("The product of the first %d positive even integers is: %d\n", even_n / 2, product);
    return 0;
}