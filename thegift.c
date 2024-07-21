#include<stdio.h>

int main() {

    int x,n,m;

    scanf("%d %d %d", &x, &n, &m);

    if ((x + m) > n)
    {
        printf("YES\n");
    }
    
    else {
        printf("NO\n");
    }

    return 0;

}