//(Q10)CHECK IF NUM IS POWER OF 2
#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if(n & (n - 1) != 0){
        printf("0\n");
    }

    else{
        printf("1\n");
    }

    return 0;

}