#include <stdio.h>
int main() {
    int units, price, total;
    printf("Enter the number of units used: ");
    scanf("%d", &units);
    if (units < 0){
        printf("Error: Number of units cannot be negative.\n");
        return 1;
    }
    else if (units <= 100) {
        price = units * 5;
        printf("The total price for %d units is: %d\n", units, price);
    }
    else if (units <= 200) {
        price = 5 * 100 + (units - 100) * 7;
        printf("The total price for %d units is: %d\n", units, price);
    }
    else if (units <= 300) {
        price = 5 + 100 * 7 + (units - 200) * 10;
        printf("The total price for %d units is: %d\n", units, price);
    }
    return 0;
}
    