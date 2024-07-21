#include<stdio.h>

int Calc(int x, int y);

int main() {

    int x, y, t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        Calc(x,y);
    }

    return 0;
    
}

int Calc(int x, int y) {

    if ((x * 15) >= (2 * y))
    {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }

}