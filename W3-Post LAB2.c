#include<stdio.h>
#include<math.h>

int main() {

    int x1, x2, y1, y2;

    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    int slope = ((y2 - y1)/(x2-x1));

    printf("%d\n", slope);

    return 0;

}