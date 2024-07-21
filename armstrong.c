#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int z = num,x = 0;
    while(num > 0){
        int r = num % 10;
        x = x + r * r * r;
        num = num/10;
    }

    if(z == x){
        printf("Armstrong");
    }

    else{
        printf("Not Armstrong");
    }

    return 0;
}