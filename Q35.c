# include <stdio.h>

int main() {
    int number , i;
    printf("Enter a positive integer:");
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("You entered: %d\n", number);
    for (i = 1; i <= number; ++i) {
         if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}