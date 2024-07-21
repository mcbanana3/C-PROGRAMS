#include<stdio.h>
#include<stdlib.h>

int main() {

    int n, m , p, q;
    int *ptr;

    printf("Enter a number (N) : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (n % 2 != 0)
        {
            printf("It is a prime Number \n");
            break;
        }

        else {
            printf("It is not a Prime Number. \n");
            break;
        }
        
    }
    
    return 0;

}