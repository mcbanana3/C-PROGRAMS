#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;

    scanf("%d", &n);

    int *array;

    array = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n/2; i++)
    {
        int temp = array[n - 1 - i];
        array[n - 1 - i] = array[i];
        array[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
    
}