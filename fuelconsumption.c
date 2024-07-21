#include<stdio.h>

int main() {

    int distance, consumption;
    scanf("%d %d", &distance, &consumption);

    float Mil = distance/consumption;

    printf("%f\n", Mil);

    return 0;
    
}