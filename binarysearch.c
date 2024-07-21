#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);

    int array[n], target;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    scanf("%d", &target);

    int first = 0, last = n - 1;
    int middle = (first+last)/2;

    while (first<=last)
    {
        if (array[middle] == target)
        {
            printf("Target is present at index %d\n", middle);
            break;
        }

        else if(array[middle] < target){
            first = middle+1;
        }

        else{
            last = middle-1;
        }

        middle = (first+last)/2;

        if(first>last){
            printf("Target is not present in the array.\n");
            exit(1);
        }
        
    }
    
    return 0;
    
}