#include<stdio.h>
#include<math.h>

int main() {

    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);

    float s = (side1 + side2 + side3 / 2);
    float Area = sqrt(s*(s-side1)*s*(s-side2)*s*(s-side3));

    printf("%d\n", Area);
    
    return 0;
    
}