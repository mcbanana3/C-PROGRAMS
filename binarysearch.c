#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int front = 0, last = n - 1;
    int target, mid;
    scanf("%d", &target);

    while(front <= last){
        mid = (front+last)/2;

        if(array[mid] == target){
            printf("Key Found\n");
            break;
        }

        else if(target > array[mid]){
            front = mid + 1;
        }

        else{
            last = mid - 1;
        }
    }

    if(front > mid){
        printf("Key Not Found\n");
    }

    return 0;
    
}