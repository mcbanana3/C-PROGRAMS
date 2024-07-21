#include<stdio.h>

int main() {

    int a, b;

    printf("Enter a Number (A) : ");
    scanf("%d", &a);

    printf("Enter a Number (B) : ");
    scanf("%d", &b);

    printf("The smallest number is : %d ", (a>=b)*a + (b>=a)*b );

    //This is imp.

    return 0;
}