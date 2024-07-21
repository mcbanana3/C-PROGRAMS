#include<stdio.h>
#include<math.h>

int main() {

    int loan_amount;
    float interest_rate, duration;

    scanf("%d %f %f", &loan_amount, &interest_rate, &duration);
    
    interest_rate = interest_rate/100;

    float Monthly_payment = (loan_amount * interest_rate * pow(1 + interest_rate, duration)/((pow(1 + interest_rate, duration - 1))));

    printf("%f\n", Monthly_payment);

    return 0;
    
}