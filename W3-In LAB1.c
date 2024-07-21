#include<stdio.h>

int main() {

    float Principal_Amount;
    float interest_rate;
    int duration;

    scanf("%f", &Principal_Amount);

    scanf("%f", &interest_rate);

    scanf("%d", &duration);

    float maturity_amount = (Principal_Amount + Principal_Amount * (interest_rate/100)* duration);

    printf("%f\n", maturity_amount);

    return 0;

}