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
        ans[i] = (x[i] * 4) + (y[i] * 2) + (z[i] * 0);
        printf("%d \n", ans[i]);
    }
    
	return 0;
}