// Name : Vedansh Agarwal
// Sap Id : 590042489



#include <stdio.h>
int main () {
    char ch ;
    printf("Enter any character : ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("%c is a lowercase character", ch);
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is an uppercase character", ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("%c is a digit", ch);
    }else{
        printf("it is a special character");
    }
    return 0;
}
