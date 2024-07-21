#include<stdio.h>

void Calculate(int a, int b, int *sum, int *avg, int *product);

int main() {

    int a, b;
    int sum, product, avg;
 
    printf("Enter a Number (A) : ");
    scanf("%d", &a);

    printf("Enter a Number (B) : ");
    scanf("%d", &b);

    Calculate(a, b, &sum, &product, &avg);

    printf("sum is : %d ,Product is : %d,Average is %d", sum, product, avg);
    
    return 0;
}

void Calculate(int a, int b, int *sum,int *avg, int *product) {
    *sum = a + b;
    *product = a * b;
    *avg = (a+b)/2;
}