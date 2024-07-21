#include<stdio.h>

int main() {

    int x[100], y[100];
    int t;

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (x[i] + y[i] > 6)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    

    return 0;
    
}