#include<stdio.h>

int main() {

    int distance, time;
    scanf("%d %d", &distance, &time);

    float speed = distance/time;

    printf("%f\n", speed);

    return 0;
    
}