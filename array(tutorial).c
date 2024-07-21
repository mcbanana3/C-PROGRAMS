#include<stdio.h>

int main() {

    int marks [3];

    printf("Enter Physics Marks : ");
    scanf("%d", &marks[0]);

    printf("Enter Maths Marks : ");
    scanf("%d", &marks[1]);

    printf("Enter Chemistry Marks : ");
    scanf("%d", &marks[2]);

    printf("Physics = %d, chem = %d, maths = %d \n", marks[0], marks[1], marks[2]);

    return 0;
    
}