#include<stdio.h>

int main() {

    int x,y;
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);

        if (y <= x)
        {
            printf("%d\n", y);
        }

        else {
            printf("%d\n", x);
        }
        
    }

    return 0;
    
}