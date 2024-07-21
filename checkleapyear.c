#include<stdio.h>

int main(){

    int year;
    
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        printf("Its a Leap Year\n");
    }

    else{
        printf("Its not a leap year\n");
    }

    return 0;
    
}