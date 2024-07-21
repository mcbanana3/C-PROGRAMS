//(Q5)BITWISE RIGHT SHIFT
#include<stdio.h>

int main(){

    int a,ans,p;
    scanf("%d %d", &a, &p);
    ans = a >> p;

    for(int i = 7; i >= 0; i--){
        if(ans >> i & 1){
            printf("1");
        }

        else{
            printf("0");
        }
    }

    return 0;

}