#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Please enter valid integers.\n");
        return 1;
    }

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    hcf = a;

    if (hcf < 0) {
        hcf = -hcf;
    }

    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
