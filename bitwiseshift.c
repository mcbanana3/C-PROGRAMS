#include<stdio.h>

int main(){

    int number, positions;

    printf("Enter the Number : ");
    scanf("%d", &number);

    printf("Enter the number of Positions : ");
    scanf("%d", &positions);

    number = number << positions;

    if (number >= 50)
    {
        printf("Greater than or Equal to 50\n");
    }

    else{
        printf("Less than 50\n");
    }

    return 0;
    
}