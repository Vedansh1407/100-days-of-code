// Name : Vedansh Agarwal
// Sap id : 590042489
//day 7


#include <stdio.h>
#include <math.h>
int main(){
    int p,r,t;
    float si, ci, ta;
    printf("Enter the principal amount :");
    scanf("%d", &p);
    printf("Enter the rate of interest :");
    scanf("%d", &r);
    printf("Enter the time period :");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    ci = p * (pow((1 + r / 100.0), t) - 1);
    ta = p + si;
    printf("Simple Interest is : %.2f\n", si);
    printf("Compound Interest is : %.2f\n", ci);
    printf("Total Amount is : %.2f\n", ta);
    return 0;
}