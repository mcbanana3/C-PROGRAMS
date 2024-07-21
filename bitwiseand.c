#include<stdio.h>

int main(){

    int a,b, binary[100], i;

    scanf("%d %d", &a, &b);

    int ans = a & b;

    for (i = 0; ans > 0; i++)
    {
        binary[i] = ans % 2;
        ans = ans/2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
    
}