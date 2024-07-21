#include <stdio.h>

int main(void) {
	
    int t;
    int x[1000];
    int y[1000];
    int choc[1000];
    int candy[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < t; i++)
    {
        choc[i] = (x[i] * 2);
        candy[i] = (y[i] * 5);
    }
    
    
    for (int i = 0; i < t; i++)
    {
        if (choc[i] > candy[i])
        {
            printf("Chocolate \n");
        }

        else if (candy[i] > choc[i])
        {
            printf("Candy \n");
        }

        else if (choc[i] = candy[i])
        {
            printf("Either \n");
        }
        
        
    }
    
	return 0;
}