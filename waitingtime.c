#include <stdio.h>

int main(void) {
	
    int t;
    int k[1000];
    int x[1000];
    int ans[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &k[i], &x[i]);
    }

    for (int i = 0; i < t; i++)
    {
        ans[i] = (k[i] * 7) - x[i];
        printf("%d \n", ans[i]);
    }
    
	return 0;
}