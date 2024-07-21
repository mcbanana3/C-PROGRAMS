#include<stdio.h>

int main() {

    int t;
    int x;
    int p, q;
    int ans;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &p, &q);
        ans = (p - q) * x;
        printf("%d \n", ans);
    }

    return 0;
    
}