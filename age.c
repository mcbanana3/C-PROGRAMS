#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("The Youngest Student's Age is %d and the Oldest Student's Age is %d\n", array[0], array[n-1]);

    return 0;
    
}