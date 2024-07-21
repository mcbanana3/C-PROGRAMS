#include<stdio.h>

int main() {
    
    int x;
    int a, b;

    scanf("%d", &x);

    scanf("%d", &a);
    scanf("%d", &b);

    if (x >= a + b)
    {
        printf("YES \n");
    }
    
    else {
        printf("NO \n");
    }

    return 0;
    
}