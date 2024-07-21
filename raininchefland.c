#include <stdio.h>

int main(void) {
	
    int t;
    int x[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (x[i] < 3)
        { 
            printf("LIGHT \n");
        }

        else if (x[i] >= 3 && x[i] < 7)
        {
            printf("MODERATE \n");
        }
        
        else if (x[i] >= 7)
        {
            printf("HEAVY \n");
        }
        
    }
    
	return 0;
}