#include<stdio.h>

int fact(int n){
    
    if(n == 1){
        return 1;
    }

    else{
        return n * fact(n - 1);
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int ans = fact(n);

    printf("%d\n", ans);

    return 0;
}