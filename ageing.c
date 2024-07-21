#include <stdio.h>

int main(void) {
	
    int t;
    int x[1000];
    int ans[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &x[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        ans[i] = x[i] - 10;
        printf("%d \n", ans[i]);
    }
    
	return 0;
}