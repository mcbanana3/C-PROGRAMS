#include<stdio.h>

int main() {

    int t;
    int g, b;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &g, &b);
        printf("%d", b - g);
    }
    
    return 0;

}