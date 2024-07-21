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
        if (x[i] > 24)
        {
            printf("YES \n");
        }

        else
        {
            printf("NO \n");
        }
        
    }
    
	return 0;
}