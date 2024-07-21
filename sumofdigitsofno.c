#include<stdio.h>

int main() {

    int n, sum,r;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
    
}