#include<stdio.h>

int main() {

    int w,x,y,z;
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        scanf("%d %d %d %d", &w, &x, &y, &z);

        if ((w + (y * z)) > x)
        {
            printf("OVERFLOW\n");
        }

        else if ((w + (y * z)) == x)
        {
            printf("FILLED\n");
        }
        
        else if ((w + (y * z)) < x)
        {
            printf("Unfilled\n");
        }
        
    }

    return 0;
    
}