#include<stdio.h>

int calc(int t,int x,int n);

int main() {
    
    int t,x,n;

    calc(t,x,n);

    return 0;

}

int calc(int t,int x,int n) {
    
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &x);
        printf("%d\n", x / n);
    }

}