#include<stdio.h>

int main(){

    int n, rev = 0;
    scanf("%d", &n);

    int x = n;
    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    
    if(x == rev){
        printf("The number is a palindrome.");
    }

    else{
        printf("The number is not a palindrome.");
    }

    return 0;

}