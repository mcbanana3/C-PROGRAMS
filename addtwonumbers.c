#include<stdio.h>

int main() {

    int t;
    int a[10000], b[10000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d \n", a[i] + b[i]);
    }
    
    return 0;
    
}