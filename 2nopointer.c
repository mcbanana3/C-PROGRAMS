#include<stdio.h>

int main() {

    int a, b;
    int *ptr, *pttr;

    printf("Enter a Number (A) : ");
    scanf("%d", &a);

    printf("Enter a Number (B) : ");
    scanf("%d", &b);
    
    ptr = &a;
    pttr = &b;

    if (*ptr > *pttr)
    {
        printf("The maximum number is : %d \n", *ptr);
    }
    
    else {
        printf("The maximum number is : %d \n", *pttr);
    }

    return 0;
}