#include<stdio.h>

int main() {

    int Marks;
    printf("Enter your Marks (0-100) : ");
    scanf("%d", &Marks);

    Marks <=30 ? printf("Fail \n") : printf("Pass \n");

    return 0;
}