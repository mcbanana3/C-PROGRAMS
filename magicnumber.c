#include<stdio.h>

int main(){

    int num, sum = 0;
    scanf("%d",&num);

    while(num > 0){
        sum = sum + num % 10;
        num = num / 10;
    }

    while(sum > 9){
        int temp = sum;
        sum = 0;
        while(temp > 0){
            sum = sum + temp % 10;
            temp = temp / 10;
        }
    }

    if(sum == 1){
        printf("The number is a Magic Number.");
    }

    else{
        printf("The number is not a Magic Number.");
    }
    return 0;

}