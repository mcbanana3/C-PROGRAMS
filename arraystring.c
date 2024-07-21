#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;
    int sum = 0;

    scanf("%d", &n);

    int *Arr = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + Arr[i];
    }

    printf("%d\n", sum);

    return 0;

}