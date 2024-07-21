#include<stdio.h>

int main(){

    int no_racers;
    printf("Enter No of racers : ");
    scanf("%d", &no_racers);

    int racers_time[no_racers];

    for (int i = 0; i < no_racers; i++)
    {
        scanf("%d", &racers_time[i]);
    }

    for (int i = 1; i < no_racers; i++)
    {
        for (int j = 0; j < no_racers - i; j++)
        {
            if(racers_time[j] > racers_time[j+1]){
                int temp = racers_time[j];
                racers_time[j] = racers_time[j+1];
                racers_time[j+1] = temp;
            }
        }
    }

    printf("The Sorted Array is : \n");

    for (int i = 0; i < no_racers; i++)
    {
        printf("%d ", racers_time[i]);
    }
    
    return 0;
    
}