#include<stdio.h>
#include<stdbool.h>

bool checkPerfectNumber(int num){

    int sum = 0;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            sum = sum + i;
            printf("%d ", i);
        }
    }

    if(sum == num){
        return true;
    }

    else{
        return false;
    }
}

int main(){

    int num;
    scanf("%d", &num);

    if (checkPerfectNumber(num) == true)
    {
        printf("true\n");
    }

    else{
        printf("false\n");
    }

    return 0;
}