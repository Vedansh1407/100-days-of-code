// Name : Vedansh Agarwal
// Sap id : 590042489
//day 5


#include <stdio.h>
int main(){
    int n1 , n2;
    printf("Enter any two integers : ");
    scanf("%d %d", &n1, &n2);
    printf("the two numbers are %d %d ", n1, n2);
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("\nAfter swapping the two numbers are %d %d ", n1, n2);
    
    return 0;
}