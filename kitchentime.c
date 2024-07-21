#include <stdio.h>

int main() {

    int t;
    int x[200];
    int y[200];
    int ans[200];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        ans[i] = y[i] - x[i];
    }
    
    for (int i = 0; i < t; i++)
    {
        printf("%d \n", ans[i]);
    }

	return 0;
}