#include <stdio.h>
int main () {
    int num , temp;
    int product = 1;
    int has_odd_digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num ;
    
    if (temp < 0){
        temp = -temp;
    }
    while ( temp > 0) {
        int digit = temp % 10;
        if(digit % 2 != 0) {
            product *= digit;
            has_odd_digit = 1;
        }
        temp /= 10;
    }
    if(has_odd_digit) {
        printf("The product of the  odd digits is %d", product);
    }
    else{
        printf("There are no odd digits");
    }



    return 0;
}