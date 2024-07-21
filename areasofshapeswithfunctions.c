#include<stdio.h>
#include<math.h>

float SquareArea(float side);
float CircleArea(float radius);
float RectangleArea(float a, float b);
float RhombusArea(float p, float q);
float TriangleArea(float b, float h);

int main() {

    float side;
    float radius;
    float a, b;
    float p, q;
    float br, h;

    printf("Enter the Side : ");
    scanf("%f", &side);

    printf("Enter the radius : ");
    scanf("%f", &radius);

    printf("Enter the Lenght : ");
    scanf("%f", &a);

    printf("Enter the Breath : ");
    scanf("%f", &b);

    printf("Enter the Diagonal(1) : ");
    scanf("%f", &p);

    printf("Enter the Diagonal(2) : ");
    scanf("%f", &q);

    printf("Enter the Triange (Breath) : ");
    scanf("%f", &br);

    printf("Enter the Height : ");
    scanf("%f", &h);

    printf("The Area of Rectangle is : %f \n", RectangleArea(a ,b));
    printf("The area of Circle is : %f \n", CircleArea(radius));
    printf("The Area of the Square is : %f \n", SquareArea(side));
    printf("The Area of the Rhombus is : %f \n", RhombusArea(p, q));
    printf("The Area of the Traingle is : %f \n", TriangleArea(br, h));

    return 0;
}

float SquareArea(float side) {
    return side * side;
}

float CircleArea(float radius) {
    return 3.14 * radius * radius;
}

float RectangleArea(float a, float b) {
    return a * b;
}

float RhombusArea(float p, float q) {
    return (p * q)/2;
}

float TriangleArea(float br, float h) {
    return (br * h)/2;
}