#include <stdio.h>

int main() {
	
    int t;
    int X[200];
    int Y[200];
    int ans[200];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &X[i], &Y[i]);
    }

    for (int i = 0; i < t; i++)
    {
        ans[i] = X[i] - Y[i];
        printf("%d \n", ans[i]);
    }

	return 0;
}