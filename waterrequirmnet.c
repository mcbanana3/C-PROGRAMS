#include<stdio.h>

int main() {
    
    int t;
    int n;

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%d", n * 2);
    }

    return 0;
    
}