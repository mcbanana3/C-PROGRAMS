#include<stdio.h>

int main() {

    int x,y,z;
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        scanf("%d %d %d", &x, &y, &z);

        if ((x * 10) < y)
        {
            printf("%d\n", (x * 10) * z);
        }

        else if ((x * 10) > y)
        {
            printf("%d\n", y * z);
        }

        else if ((x * 10) == y)
        {
            printf("%d\n", y * z);
        }
        
    }

    return 0;
    
}