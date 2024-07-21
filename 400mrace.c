#include<stdio.h>

int main() {

    int t,x,y,z;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        if (x < y && x < z)
        {
            printf("ALICE\n");
        }

        else if (y < x && y < z)
        {
            printf("BOB\n");
        }
        
        else if (z < x && z < y)
        {
            printf("CHARLIE\n");
        }
        
    }

    return 0;

}