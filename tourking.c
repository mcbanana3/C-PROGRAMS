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
        ans[i] = (n[i] * 5) + (m[i] * 7);
        printf("%d \n", ans[i]);
    }

	return 0;
}