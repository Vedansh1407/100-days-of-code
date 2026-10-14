#include <stdio.h>

int main() {
    float cost_price, selling_price, amount, percentage;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &selling_price);

    if (cost_price <= 0 || selling_price < 0) {
        printf("Error: Invalid prices entered.\n");
        return 1;
    }

    if (selling_price > cost_price) {
        amount = selling_price - cost_price;
        percentage = (amount / cost_price) * 100;
        printf("Profit: Amount = %.2f | Percentage = %.2f%%\n", amount, percentage);
    } 
    else if (cost_price > selling_price) {
        amount = cost_price - selling_price;
        percentage = (amount / cost_price) * 100;
        printf("Loss: Amount = %.2f | Percentage = %.2f%%\n", amount, percentage);
    } 
    else {
        printf("No Profit, No Loss (Break-even).\n");
    }

    return 0;
}
