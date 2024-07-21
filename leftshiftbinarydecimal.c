#include<stdio.h>

int main(){

    int n;
    int shifts;

    scanf("%d %d", &n, &shifts);

    int shifted_num = n << shifts;

    printf("The shifted Num in Decimal form is : %d\n", shifted_num);

    return 0;
}