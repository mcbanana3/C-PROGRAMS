#include<stdio.h>

int fib(int n){

    if(n > 1){
        return fib(n-1) + fib(n - 2);
    }

    else if(n == 0){
        return 0;
    }

    else if(n == 1){
        return 1;
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int ans = fib(n);

    printf("%d\n", ans);

    return 0;

}