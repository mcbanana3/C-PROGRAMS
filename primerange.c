#include<stdio.h>

int isPrime(int n);

//TO print Prime Numbers in a Range

int main() {

    int n1;
    int n2;

    printf("Enter a number (N1) : ");
    scanf("%d", &n1);

    printf("Enter a number (N2) : ");
    scanf("%d", &n2);

    printf("The number between %d & %d : ", n1,n2);

    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        
    }

    //Executing but not getting any answer.
    

    return 0;

}

int isPrime(int n) {

    for (int  i = 2; i <= (n-1); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        
    }

    return 1;
    
}