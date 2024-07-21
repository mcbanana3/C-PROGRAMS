#include<stdio.h>

int main() {

    int original_price, discount_percentage;
    scanf("%d %d", &original_price, &discount_percentage);

    float Mil = original_price - ((original_price*discount_percentage)/100);

    printf("%f\n", Mil);

    return 0;
    
}