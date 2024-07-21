#include<stdio.h>

int area(int l, int b){
    int area = l * b;
    return area;
}

int perimeter(int l, int b){
    int peri = 2*(l + b);
    return peri;
}

int main(){

    int lenght, breadth;

    scanf("%d %d", &lenght, &breadth);

    int Area = area(lenght, breadth);

    int peri = perimeter(lenght, breadth);

    printf("The Area is %d and the perimeter is %d\n", Area, peri);

    return 0;

}