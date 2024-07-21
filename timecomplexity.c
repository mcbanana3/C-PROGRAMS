#include<stdio.h>

int main() {

    int t;
    int a;
    int b;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);

        if (a > b)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }

    return 0;
    
}