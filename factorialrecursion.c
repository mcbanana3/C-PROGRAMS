#include<stdio.h>

int square(int n){
    if(n == 1){
        return 1;
    }

    return (n * n) + square(n-1);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", square(n));

    return 0;

}