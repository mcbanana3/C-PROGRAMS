#include<stdio.h>

int main() {

    int lenght, perimeter;
    int Area;

    scanf("%d %d", &lenght, &perimeter);

    int Breadth = (perimeter/2)-lenght;

    Area = lenght * Breadth;

    printf("%d\n", Area);

    return 0;

}