#include<stdio.h>

int main() {

    int x,y;
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i--)
    {

        scanf("%d %d", &x, &y);

        if (y <= (1.07 * x))
        {
            printf("YES\n");
        }

        else {
            printf("NO\n");
        }
        
    }

    return 0;
    
}