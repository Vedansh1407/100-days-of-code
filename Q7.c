// Name : Vedansh Agarwal
// Sap id : 590042489
//day 6

#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter two numbers :");
    scanf("%d %d", &n1 , &n2);
    printf("Before swapping : n1 = %d, n2 = %d", n1, n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("After swapping : n1 = %d, n2 = %d", n1, n2);
    return 0;
}