#include <stdio.h>
int main (){
    char character ;
    printf("Enter any alphabet : ");
    scanf("%c" , &character);
    if ( character == 'a' || character == 'e' ||character == 'i' || character == 'o'|| character == 'u' || character == 'A' || character == 'E' ||character == 'I' || character == 'O'|| character == 'U'){
        printf("%c is a vowel", character);
    }else{
        printf("%c is not a vowel", character);
    }
        return 0;

}