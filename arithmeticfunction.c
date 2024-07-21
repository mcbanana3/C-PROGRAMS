#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {

    int x,y;

    scanf("%d%d", &x, &y);
    add(x,y);
    sub(x,y);
    multiply(x,y);
    divide(x,y);

    return 0 ;
}

int add(int a, int b) {

    int sum = a + b;
    printf("The Sum is : %d\n", sum);
}

int sub(int a, int b) {

    int sum = a - b;
    printf("The Subtraction is : %d\n", sum);
}

int multiply(int a, int b) {

    int sum = a * b;
    printf("The Multiplication is : %d\n", sum);
}

int divide(int a, int b) {

    float sum = a / b;
    printf("The Division is : %f\n", sum);
}