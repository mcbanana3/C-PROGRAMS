#include<stdio.h>

int main() {

    int min;

    scanf("%d", &min);

    min = min * 60;
    int sub = min/45;

    printf("%f\n", sub);

    return 0;
}