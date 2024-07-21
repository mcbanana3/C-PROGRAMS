#include<stdio.h>
#include<string.h>

struct vector
{
    int x;
    int y;
};

int calculate(struct vector v1, struct vector v2, struct vector sum);

int main() {

    struct vector v1 = {5, 3};
    struct vector v2 = {3, 7};
    struct vector sum = {0, 0};

    calculate(v1, v2, sum);

    return 0;

}

int calculate(struct vector v1, struct vector v2, struct vector sum) {

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("The sum of the (X) vector is : %d \n", sum.x);
    printf("The sum of the (Y) vector is : %d \n", sum.y);

}