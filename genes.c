#include<stdio.h>

int main() {
    
    char x;
    char y;

    scanf("%c %c", &x, &y);

    if (x == 'R' && y == 'R')
    {
        printf("R\n");
    }
    
    else if (x == 'B' && y == 'G')
    {
        printf("B\n");
    }
    
    else if (x == 'G' && y == 'G')
    {
        printf("G\n");
    }

    else if (x == 'R' && y == 'B')
    {
        printf("B\n");
    }

    return 0;
    
}