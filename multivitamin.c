#include <stdio.h>
#include <stdbool.h>

int Calculate(int x, int y);

int main() {

    int n;
    int u;

    scanf("%d %d", &n, &u);

    printf("%d\n", Calculate(n, u));

    return 0;
    
}

int Calculate(int x, int y) {

    int ans = x - y;
    return ans;
    
}