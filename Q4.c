// Name : Vedansh Agarwal
// Sap id : 590042489
//day 4


#include <stdio.h>
int main(){
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float pi = 3.14;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}