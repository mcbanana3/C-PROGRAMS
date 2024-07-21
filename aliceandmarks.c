#include<stdio.h>

int main() {

    int x;
    int y;

    scanf("%d %d", &x, &y);

    if (x >= (2 * y))
    {
        printf("YES \n");
    }
    
    else {
        printf("NO \n");
    }

    return 0;
    
}