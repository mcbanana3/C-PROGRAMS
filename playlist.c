#include<stdio.h>

int calc(int n, int x);

int main() {

    int t,n,x;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &x);
        calc(n,x);
    }
    

    return 0;

}

int calc(int n, int x) {

    printf("%d\n", x * (3/n));

}