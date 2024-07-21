#include<stdio.h>

int main() {

    int t,x,y;
    int ans;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        ans = (x * 10) + (y * 5);
        printf("%d\n", ans);
    }

    return 0;

}