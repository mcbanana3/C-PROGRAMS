#include<stdio.h>

int main() {
    
    int t;
    int x;
    int y;

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);

        if ((y - x) < 0)
        {
            printf("0 \n");
        }

        else {
            printf("%d\n", y - x);
        }

    }

    return 0;
    
}