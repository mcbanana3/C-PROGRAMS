#include <stdio.h>

int main() {
	
    int t;
    int n[200];
    int m[200];
    int ans[200];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &n[i], &m[i]);
    }

    for (int i = 0; i < t; i++)
    {
        ans[i] = n[i] - m[i];
        if (n[i] - m[i] > 0)
        {
            printf("%d \n", ans[i]);
        }

        else {
            printf("0 \n");
        }
    
    }

	return 0;
}