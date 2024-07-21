#include<stdio.h>

int deal(int a, int b);

int main() {

    int t,a,b;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);

        deal(a,b);
    }

    return 0;
    
}

int deal(int a, int b) {

    if (100 - (a/100) < 200 - (b/100))
    {
        printf("FIRST\n");
    }

    else if (200 - (b/100) < 100 - (a/100))
    {
        printf("SECOND\n");
    }
    
    else if (200 - (b/100) == 100 - (a/100))
    {
        printf("BOTH\n");
    }
    
}