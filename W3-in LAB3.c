#include<stdio.h>
#include<math.h>

int main() {

    int side1;
    int side2;

    scanf("%d", &side1);
    scanf("%d", &side2);

    float hypotenuse = sqrt((side1 * side1) + (side2 * side2));

    printf("%f\n", hypotenuse);

    return 0;

}