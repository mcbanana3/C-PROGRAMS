#include<stdio.h>

int main() {

    float price[3];

    printf("Enter the Price of three Products : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total Price of 1st Product is : %f \n", price[0] + (0.18*price[0]));
    printf("Total Price of 2nd Product is : %f \n", price[1] + (0.18*price[1]));
    printf("Total Price of 3rd Product is : %f \n", price[2] + (0.18*price[2]));

    return 0;

}