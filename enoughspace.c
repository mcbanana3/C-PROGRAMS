#include <stdio.h>

int main(void) {
	
    int t;
    int n[1000];
    int x[1000];
    int y[1000];
    int ans[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d %d", &n[i], &x[i], &y[i]);
    }

    for (int i = 0; i < t; i++)
    {
        ans[i] = (x[i] * 1) + (y[i] * 2);
    }
    
    for (int i = 0; i < t; i++)
    {
        if (ans[i] <= n[i])
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
	return 0;
}