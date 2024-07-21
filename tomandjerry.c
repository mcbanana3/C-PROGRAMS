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
        if (x[i] < y[i])
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
	return 0;
}