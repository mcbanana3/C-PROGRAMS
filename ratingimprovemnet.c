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

    if (y <= x + 200 && y >= x)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }
    
}