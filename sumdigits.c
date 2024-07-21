#include<stdio.h>

int main(){

    int date, sum = 0;
    scanf("%d", &date);

    while (date > 0)
    {
        int r = date % 10;
        sum = sum + r;
        date = date / 10;
    }

    while(sum > 9){
        int temp = sum;
        sum = 0;
        while (temp > 0)
        {
            int r = temp % 10;
            sum = sum + r;
            temp = temp / 10;
        }
    }

    printf("%d\n", sum);
    
    return 0;

}