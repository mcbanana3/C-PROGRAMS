# include<stdio.h>

//This code is to find the Perimeter of the rectangle using lenght and breadth.

int main() {
    int Lenght, Breadth;
    printf("Enter Lenght");
    scanf("%d", &Lenght);

    printf("Enter Breadth");
    scanf("%d", &Breadth);

    printf("The Perimeter of Rectangle is : %d", 2 * (Lenght + Breadth));

    return 0;
}