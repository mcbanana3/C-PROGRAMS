#include<stdio.h>
#include<math.h>

int main() {

    float height, distance;

    scanf("%f", &distance);
    scanf("%f", &height);

    float angle = atan(height/distance)* (180/3.141592);

    printf("%f\n", angle);
    
    return 0;

}