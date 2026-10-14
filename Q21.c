#include <stdio.h>

int main() {
    int month, year;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch(month) {
        case 1:
            printf("Month: January, Days: 31\n");
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("Month: February, Days: 29\n");
            else
                printf("Month: February, Days: 28\n");
            break;
        case 3:
            printf("Month: March, Days: 31\n");
            break;
        case 4:
            printf("Month: April, Days: 30\n");
            break;
        case 5:
            printf("Month: May, Days: 31\n");
            break;
        case 6:
            printf("Month: June, Days: 30\n");
            break;
        case 7:
            printf("Month: July, Days: 31\n");
            break;
        case 8:
            printf("Month: August, Days: 31\n");
            break;
        case 9:
            printf("Month: September, Days: 30\n");
            break;
        case 10:
            printf("Month: October, Days: 31\n");
            break;
        case 11:
            printf("Month: November, Days: 30\n");
            break;
        case 12:
            printf("Month: December, Days: 31\n");
            break;
        default:
            printf("Invalid month number!\n");
    }
    return 0;
}
