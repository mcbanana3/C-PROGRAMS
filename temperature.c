#include<stdio.h>

int main(){

    int degree;

    scanf("%d", &degree);

    if(degree >= 30){
        printf("Hot\n");
    }

    else if(degree >= 20 && degree <= 29){
        printf("warm\n");
    }

    else if(degree < 20){
        printf("Cold\n");
    }

    return 0;
    
}