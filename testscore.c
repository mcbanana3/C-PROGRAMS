#include<stdio.h>

int main() {

    int n,x,y,t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d",&n, &x, &y);
        
    if (y % x == 0)
    {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }

    }

    return 0;
    
}