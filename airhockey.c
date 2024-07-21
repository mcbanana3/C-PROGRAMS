#include<stdio.h>

void Max(int a, int b);

int main() {

    int t;
    int a;
    int b;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        Max(a,b);
    }

    return 0;
    
}

void Max(int a, int b) {

    if (a <= b)
    {
        printf("%d \n", 7 - b);
    }

    else if (b < a)
    {
        printf("%d \n", 7 - a);
    }
    
}