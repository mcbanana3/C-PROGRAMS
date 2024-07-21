#include <stdio.h>

int main(void) {
	
    int t;
    int x[1000];
    int y[1000];
    int z[1000];
    int ans[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    }

    for (int i = 0; i < t; i++)
    {
        ans[i] = x[i] + y[i];
    }
    
    
    for (int i = 0; i < t; i++)
    {
        if (ans[i] == z[i])
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
	return 0;
}