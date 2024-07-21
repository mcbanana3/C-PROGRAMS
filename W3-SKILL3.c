#include<stdio.h>
#include<math.h>

int main() {

    double rad, height;

    scanf("%lf", &rad);
    scanf("%lf", &height);

    double SA = 6.28 * rad * (rad + height);

    printf("%lf", SA);

    return 0;

}