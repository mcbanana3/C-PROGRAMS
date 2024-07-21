#include<stdio.h>
#include<stdlib.h>

int main() {

    int x, y;

    scanf("%d %d", &x, &y);

    int ans = abs(x-y);

    printf("%d\n", ans);

    return 0;
    
}