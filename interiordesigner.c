#include<stdio.h>

int main() {

    int t;
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        if ((x1 + y1) <= (x2 + y2))
        {
            printf("%d \n", x1 + y1);
        }

        else if ((x2 + y2) <= (x1 + y1))
        {
            printf("%d \n", x2 + y2);
        }
        
    }

    return 0;
    
}