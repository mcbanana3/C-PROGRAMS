#include<stdio.h>

int main() {

    float i;
    scanf("%f", &i);

    float litres_left = (i - (80 * 0.25));

    printf("%f", litres_left);

    return 0;
    
}