#include<stdio.h>

int main() {

    int t;
    int n, x, y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &n, &x, &y);
        
        if (n <= (x*y))
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
    return 0;

}