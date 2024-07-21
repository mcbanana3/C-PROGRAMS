//(Q9)SWAP NUMBERS USING BITIWSE
#include<stdio.h>

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a is %d and b is %d\n",a,b);

    return 0;

}