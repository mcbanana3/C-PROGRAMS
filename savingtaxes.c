#include<stdio.h>

int main() {

    int t;
    int x[100], y[100];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d \n", x[i] - y[i]);
    }

    return 0;
}