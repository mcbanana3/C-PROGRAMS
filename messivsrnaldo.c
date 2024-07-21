#include<stdio.h>

int calculate(int a , int b, int x, int y);

int main() {

    int a , b, x, y;

    scanf("%d %d %d %d", &a, &b, &x, &y);

    calculate(a, b, x, y);

    return 0;

}

int calculate(int a , int b, int x, int y) {

    if ((a * 2) + (b * 1) > (x * 2) + (y * 1))
    {
        printf("Messi\n");
    }

    else if ((x * 2) + (y * 1) > (a * 2) + (b * 1))
    {
        printf("Ronaldo\n");
    }

    else if ((a * 2) + (b * 1) == (x * 2) + (y*1))
    {
        printf("Equal\n");
    }
    
}