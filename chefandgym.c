#include<stdio.h>

int main() {

    int t,x,y,z;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        if (x + y <= z)
        {
            printf("2\n");
        }
        
        else if (z >= x)
        {
            printf("1\n");
        }
        
        else {
            printf("0\n");
        }

    }

    return 0;
    
}