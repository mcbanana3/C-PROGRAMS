#include<stdio.h>

int main() {

    int t,n,x;
    int ans;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &x);
        ans = (4 * x)/n;
        printf("%d\n", ans);
    }

    return 0;

}