#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int *array){
    if(n == 1){
        return;
    }

    int max = array[0];
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if(array[i] > max){
            max = array[i];
            index = i;
        }
    }

    swap(&array[index], &array[n-1]);
    sort(n-1, array);
}

int main(){

    int n;
    scanf("%d", &n);

    int array[n], index = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    sort(n, array);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
    
}