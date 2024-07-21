#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n - i; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("The Second Largest Element is : %d\n", array[n-2]);

    return 0;
}