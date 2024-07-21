#include<stdio.h>

int main() {

    int n;
    printf("Enter the number (N) : ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; //Sum += i
    }

    printf("The sum is : %d", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d \n", i);
    }
    

    return 0;
    
}