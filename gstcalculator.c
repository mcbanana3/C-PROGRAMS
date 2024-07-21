#include<stdio.h>

void calculateprice(float value);

int main() {

    float value;
    printf("Enter a Amount : ");
    scanf("%f", &value);

    calculateprice(value);

    printf("The Value is %f \n", value);

    printf("The GST is 18 percent ont total value \n");

    return 0;

}

void calculateprice(float value) {

    value = value + (0.18 * value);

    printf("Final Price is : %f \n", value);
    
}