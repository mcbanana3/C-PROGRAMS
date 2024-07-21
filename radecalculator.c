#include<stdio.h>

int main() {

    int sub1, sub2, sub3, sub4;

    scanf("%d %d %d %d", &sub1, &sub2, &sub3, &sub4);

    float AVG = (sub1 + sub2 + sub3 + sub4)/4;

    if (AVG >= 95)
    {
        printf("A\n");
    }
    
    else if (AVG >=85 && AVG <=94)
    {
        printf("B\n");
    }
    
    else if (AVG >= 75 && AVG <= 84)
    {
        printf("C\n");
    }
    
    else if (AVG >= 61 && AVG <= 74)
    {
        printf("D\n");
    }
    
    else if (AVG >= 51 && AVG <= 60)
    {
        printf("E\n");
    }
    
    else{
        printf("F\n");
    }

    return 0;

}