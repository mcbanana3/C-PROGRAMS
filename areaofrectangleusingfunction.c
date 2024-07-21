#include<stdio.h>

void Area_Rectangle(int x, int y);

void Area_Circle(int rad);

int main() {

    int length, breadth, radius;

    scanf("%d%d%d", &length, &breadth, &radius);

    Area_Rectangle(length,breadth);
    Area_Circle(radius);
    
    return 0;

}

void Area_Rectangle(int x, int y) {

    int Area = x * y;
    printf("The Area of Rectangle is : %d\n", Area);
}

void Area_Circle(int rad) {

    float Area = 3.14 * rad * rad;
    printf("The Area of Circle is : %f\n", Area);
}