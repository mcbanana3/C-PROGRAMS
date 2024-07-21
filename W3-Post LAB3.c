#include<stdio.h>
#include<math.h>

int main() {

    int x1, x2, y1, y2;

    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    float distance = sqrt(((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));

    printf("%f", distance);

    return 0;

}