#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int min = array[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if(array[i] > min){
            min = array[i];
            index = i;
        }
    }

    array[index] = INT_MIN;

    printf("The First Highesh Number is %d\n", min);
   
    min = array[0];
    for (int i = 0; i < n; i++)
    {
        if(array[i] > min){
            min = array[i];
        }
    }

    printf("The Second Highest Number is %d\n", min);

    return 0;
    
}