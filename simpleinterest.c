#include<stdio.h>

int main(){

    float principal_amount, total_amount, interest_rate, time;

    scanf("%f %f %f", &principal_amount, &interest_rate, &time);

    total_amount = principal_amount + ((principal_amount * interest_rate * time)/100);

    printf("%.2f\n", total_amount);

    return 0;

}