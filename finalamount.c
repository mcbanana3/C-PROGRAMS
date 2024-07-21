#include<stdio.h>

int main(){

    int x;

    scanf("%d", &x);

    if (x <= 100)
    {
        x = x;
    }

    else if (x > 100 && x <= 1000)
    {
        x = x - 25;
    }

    else if (x > 1000 && x <= 5000)
    {
        x = x - 100;
    }
    
    else if (x > 5000)
    {
        x = x - 500;
    }

    printf("%d", x);
    
    return 0;
    
}