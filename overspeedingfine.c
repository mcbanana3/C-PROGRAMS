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
        if (x[i] <= 70)
        {
            printf("0 \n");
        }

        else if (x[i] > 70 && x[i] <= 100)
        {
            printf("500 \n");
        }

        else if (x[i] > 100)
        {
            printf("2000 \n");
        }
        
    }
    
	return 0;
}