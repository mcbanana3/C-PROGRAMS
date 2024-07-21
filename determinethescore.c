#include <stdio.h>

int main() {

    int t;
    int x[200];
    int n[100];
    int p[100], q[100];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &x[i], &n[i]);
    }

    for (int i = 0; i < t; i++)
    {
        p[i] = x[i] / 10;
        q[i] = p[i] * n[i];
    }
    
    for (int i = 0; i < t; i++)
    {
        printf("%d \n", q[i]);
    }
	
    return 0;
}
