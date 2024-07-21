#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int digit1 = num/1000;
    int digit2 = (num/100) % 10;
    int digit3 = (num/10) % 10;
    int digit4 = num % 10;

    printf("%d %d %d %d\n", digit1, digit2, digit3,digit4);
    printf("%d %d %d\n", digit1, digit2,digit3);
    printf("%d %d\n", digit1, digit2);
    printf("%d\n", digit1);

    return 0;
    
}