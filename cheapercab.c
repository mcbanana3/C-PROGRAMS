#include<stdio.h>

int Calc(int x, int y);

int main() {

    int t,x,y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        Calc(x,y);
    }

    return 0;

}

int Calc(int x, int y) {

    if (x < y)
    {
        printf("First\n");
    }

    else if (y < x)
    {
        printf("Second\n");
    }

    else if (x == y)
    {
        printf("Any\n");
    }
    
}