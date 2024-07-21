#include <stdio.h>

int main()
{
    int a[10000], b[10000], c[10000];
    int t;

    printf("");
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if(a[i] > b[i] && a[i] > c[i])
    {
        if(b[i] > c[i]) 
            printf("%d \n", b[i]);
        else
            printf("%d \n", c[i]);
    }
    else if(b[i] > c[i] && b[i] > a[i])
    {
        if(c[i] > a[i])
            printf("%d \n", c[i]);
        else
            printf("%d \n", a[i]);
    }
    else if(a[i] > b[i])
            printf("%d \n", a[i]);
        else
            printf("%d \n", b[i]);
    }
    
    return 0;
}