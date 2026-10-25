#include <stdio.h>
#include <stdlib.h> // Required for abs()

int main() {
    int num, original_num;
    int sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    original_num = num;
    
    
    num = abs(num);

    
    while (num > 0) {
        sum += num % 10;  
        num /= 10;        
    }

    printf("The sum of digits of %d is %d\n", original_num, sum);

    return 0;
}
