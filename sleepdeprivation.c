#include<stdio.h>

int main() {
    
    int t;
    int a;

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);

        if (a < 7)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }

    return 0;
    
}