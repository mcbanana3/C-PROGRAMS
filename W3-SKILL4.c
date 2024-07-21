#include<stdio.h>
#include<math.h>

int main() {

    int no_sides;
    float length;

    scanf("%d", &no_sides);
    scanf("%f", &length);

    double Area = (no_sides * length * length)/(4 * tan(3.14/no_sides));

    printf("%lf", Area);

    return 0;

}