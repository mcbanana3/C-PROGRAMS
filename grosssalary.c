#include<stdio.h>

int main() {

    int basic_pay;

    scanf("%d", &basic_pay);

    float DA = (20/100) * basic_pay;
    float HRA = (10/100) * basic_pay;
    float Gross_salary = basic_pay + DA + HRA;
    float Net_salary = Gross_salary - (10/100);

    printf("The Gross Salary is : %f and the Net Salary is : %f\n", Gross_salary, Net_salary);

    return 0;

}