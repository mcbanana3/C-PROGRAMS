#include<stdio.h>

int summ(int num){
    if (num == 0){ 
        return 0;    
    }

    return (num % 10) + summ(num/10);
}

int main(){

    int num;
    scanf("%d", &num);

    int sum = summ(num);

    printf("The ssum of digits is %d\n", sum);

    return 0;

}