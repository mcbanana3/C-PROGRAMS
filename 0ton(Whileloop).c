#include<stdio.h>

int main() {

    int n;
    printf("Enter the Number (N) : ");
    scanf("%d", &n);

    int i=0;

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
    
}