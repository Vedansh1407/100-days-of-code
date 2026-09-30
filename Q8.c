// Name : Vedansh Agarwal
// Sap id : 590042489
//day 6


#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    int sum = 0;

    for(int i = 0; i <= n; i++){
        
        sum = sum + i;
        
        
    }

    printf("Sum of first %d natural numbers is : %d\n", n, sum);
    return 0;
}