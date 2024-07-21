#include <stdio.h>

int main(void) {
	
    int t;
    int x[1000];
    int y[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        if (x[i] > y[i])
        {
            printf("LOSS \n");
        }

        else if (x[i] < y[i])
        {
            printf("PROFIT \n");
        }

        else if (x[i] == y[i])
        {
            printf("NUETRAL \n");
        }
    
    }
    
	return 0;
}