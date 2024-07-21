#include<stdio.h>

int main(){

    int initial_num;
    scanf("%d", &initial_num);

    int last_digit = initial_num % 10;

    if(last_digit % 3 == 0 || last_digit % 5 == 0){
        printf("Yes\n");
    }

    else{
        printf("No\n");
    }

    return 0;
}