#include<stdio.h>

int calc(int x, int y, int m);

int main() {

    int t,x,y,m;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &y,&m);
        calc(x,y,m);
    }

    return 0;

}

int calc(int x, int y, int m) {

    if ((x * m) < y)
    {
        printf("YES\n");
    }

    else if ((x * m) > y)
    {
        printf("No\n");
    }
    
}