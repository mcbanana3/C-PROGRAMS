#include<stdio.h>
#include<math.h>

int main() {

    int a , b;

    printf("Enter a Number (A) : ");
    scanf("%d", &a);

    printf("Enter a Number (B) : ");
    scanf("%d", &b);

    printf("The smallest number is : %d ", (a<=b)*a + (b<=a)*b);

    return 0;
}