#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct time{
    int hour;
    int min;
    int sec;
};

int main(){

    struct time start_time, end_time;

    printf("Enter the Start Time (hh:mm:ss) : \n");
    scanf("%d:%d:%d", &start_time.hour, &start_time.min, &start_time.sec);
    printf("Enter the End Time (hh:mm:ss) : \n");
    scanf("%d:%d:%d", &end_time.hour, &end_time.min, &end_time.sec);

    int chour = abs(start_time.hour - end_time.hour);
    int cmin = abs(start_time.min - end_time.sec);
    int csec = abs(start_time.sec - end_time.sec);

    if(chour == 0){
        printf("%d minutes %d Seconds\n", cmin, csec);
    }

    else if(cmin == 0 && chour == 0){
        printf("%d Seconds\n", csec);
    }

    else{
        printf("%d Hours %d Minutes %d Seconds\n", chour, cmin, csec);
    }

    return 0;
}