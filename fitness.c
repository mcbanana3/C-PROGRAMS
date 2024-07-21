#include<stdio.h>

int main() {

    int t;
    int x[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d \n", x[i] * 5 * 2);
    }
    
    return 0;

}