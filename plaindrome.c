#include<stdio.h>

int main(){

    int n, rev = 0;
    scanf("%d", &n);
    int temp = n;

    while(temp != 0){
        int r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }

    if(rev == n){
        printf("Palindrome\n");
    }

    else{
        printf("Not Palindrome\n");
    }

    return 0;
    
}