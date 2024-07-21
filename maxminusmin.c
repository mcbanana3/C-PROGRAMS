#include <stdio.h>

int main(void) {
	
    int t;
    int a[1000];
    int b[1000];
    int c[1000];
    int ans[1000];
    int max;
    int min;

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d %d", &a[0], &b[0], &c[0]);
    }
    
    for (int i = 0; i < t; i++)
    {
        if (a[i] >= b[i] && a[i] >= c[i]) {
            scanf("%d", &max);
        }

        else if (b[i] >= a[i] && b[i] >= c[i]) {
            scanf("%d", &max);
        }

        else {
            scanf("%d", &max);
        }
    
    }

    for (int i = 0; i < t; i++)
    {
        if (a[i] <= b[i] && a[i] <= c[i]) {
            scanf("%d", &min);
        }

        else if (b[i] <= a[i] && b[i] <= c[i]) {
            scanf("%d", &min);
        }

        else {
            scanf("%d", &min);
        }
    
    }

    for (int i = 0; i < t; i++)
    {
        ans[i] = max - min;
        printf("%d \n", ans[i]);
    }
    
    
	return 0;
}