#include<stdio.h>

int main() {

    int a[100];
    int b[100];
    int n, m, AB;

    printf("");
    scanf("%d %d", &a[0], &b[0]);

    n = a[0] + b[0];

    m = a[0] * b[0];

    AB = n - m;

    printf("%d", AB);
    
    return 0;

}