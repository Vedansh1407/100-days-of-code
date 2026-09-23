// Name: Vedansh Agarwal
//Sap id: 590042489
// C program to add two integers


#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    float sum = num1 + num2;
    float multiply = num1 * num2;
    float subtract = num1 - num2;
    float divide = (float)num1 / num2;
    printf("Sum: %.2f\n", sum);
    printf("Product: %.2f\n", multiply);
    printf("Difference: %.2f\n", subtract);
    printf("Quotient: %.2f\n", divide);
    return 0;
}