#include <stdio.h>
int main() {
    int fine, days;
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);
    if (days < 0) {
        printf("Error: Number of days cannot be negative.\n");
        return 1;
    }
    else if (days == 0) {
        printf("No fine. The book is returned on time.\n");
        
    }
    else if (days < 5) {
        
    fine = days * 2;
    printf("The fine for returning the book late is: %d\n", fine);}
    else if (days < 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("The fine for returning the book late is: %d\n", fine);
    }
    else if (days < 20) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("The fine for returning the book late is: %d\n", fine);
    }
    else {
        printf("The book is returned too late. Please return it immediately.\n");
    }
    return 0;
}