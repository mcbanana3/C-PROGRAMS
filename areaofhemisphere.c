#include<stdio.h>

int main(){

    int radius;

    scanf("%d", &radius);

    float area = (3/2) * 3.14 * pow(radius,2);

    printf("%f\n", area);

    return 0;
}