#include<stdio.h>

int main() {

    int n;
    printf("Enter a Number (N) : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("It is a Prime Number");
    }

    else {
        printf("It is not a Prime Number");
    }

    return 0;
    
}