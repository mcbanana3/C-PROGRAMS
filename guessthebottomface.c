#include<stdio.h>

int main() {
    
    int t;
    int x;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);

        printf("%d\n", 7 - x);
        
    }

    return 0;
    
}