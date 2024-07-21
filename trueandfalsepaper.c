#include<stdio.h>

int main() {

    int t,k,n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        printf("%d\n", n - k);
    }

    return 0;

}