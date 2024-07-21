#include<stdio.h>

int main() {

    int income, Total_expenses;
    scanf("%d %d", &income, &Total_expenses);

    float Mil = income - Total_expenses;

    printf("%f\n", Mil);

    return 0;
    
}