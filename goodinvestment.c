#include<stdio.h>

int main() {

    int t;
    int x;
    int y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);

        if (x < (y * 2))
        {
            printf("NO \n");
        }

        else if (x >= (y * 2))
        {
            printf("YES \n");
        }
        
    }

    return 0;
    
}