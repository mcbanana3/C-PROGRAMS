#include<stdio.h>

int main(){

    int n;
    int arr[4];

    scanf("%d", &n);

    for (int i = 0; i < 4; i++)
    {
        arr[i] = n % 10;
        n = n / 10;
    }

    printf("%d%d%d%d", arr[0], arr[1], arr[2], arr[3]);

    return 0;
    
}