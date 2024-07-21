#include<stdio.h>
#include<math.h>

int fib(int n);

int main() {

    int n = 6;

    fib(n);

    return 0;
}

int fib(int n) {

    if (n==0 || n == 1)
    {
        if (n == 0)
        {
            return 1;
        }
        
    }
    
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n -2);
    int fibN= fibnm1 + fibnm2;

    printf("fib of %d is : %d", n, fibN);

    return fibN;
}