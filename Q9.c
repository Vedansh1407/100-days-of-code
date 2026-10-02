// Name : Vedansh Agarwal
// Sap id : 590042489
//day 7


#include <stdio.h>
int main(){
    int time , hour , minute , second;
    printf("Enter the time in seconds :");
    scanf("%d", &time);
    hour = time / 3600;
    minute = (time  % 3600) / 60;
    second = time % 60;
    printf("Time in hour : minute : second format is %d : %d : %d\n", hour, minute, second);

    return 0;
}