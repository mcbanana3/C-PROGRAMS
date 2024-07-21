#include<stdio.h>

int main() {

    int n;
    printf("Enter the Number (N) : ");
    scanf("%d", &n);

    for (int i = 0; i <=10 ; i++)
    {
        printf("%d \n", n*i);
    }

    return 0;
    
}