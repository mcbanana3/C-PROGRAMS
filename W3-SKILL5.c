#include<stdio.h>
#include<math.h>

int main() {

    float rad;
    float length;

    scanf("%f", &rad);
    scanf("%f", &length);

    double Area = ((3.14 * rad * (rad + sqrt(rad * rad + length * length))));

    printf("%lf", Area);

    return 0;

}