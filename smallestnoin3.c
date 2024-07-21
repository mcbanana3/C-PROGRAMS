#include<stdio.h>

int main() {

    int a, b, c;
    printf("Enter a Number (A) : ");
    scanf("%d", &a);

    printf("Enter a Number (B) : ");
    scanf("%d", &b);

    printf("Enter a Number (C) : ");
    scanf("%d", &c);

    printf("The Smallest Number is : %d", (a<=b&&a<c)*a + (b<a&&b<=c)*b + (c<=a&&c<a)*c + (b<a&&c<=b)*c);

    return 0;
}