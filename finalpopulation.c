#include<stdio.h>

int main() {

    int t;
    int x;
    int y;
    int z;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        scanf("%d %d %d", &x, &y, &z);
        printf("%d", (x - y) + z);
    }

    return 0;
    
}