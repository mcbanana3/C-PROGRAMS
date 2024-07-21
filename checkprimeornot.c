#include<stdio.h>

int main(){

    int n, count = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }

        else{
            continue;
        }
    }

    if(count == 2){
        printf("PRIME\n");
    }

    else{
        printf("Composite\n");
    }

    return 0;
    
}