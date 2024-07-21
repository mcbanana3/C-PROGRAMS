#include<stdio.h>

int main() {

    int sum = 0;

    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }

    printf("The Sum is : %d", sum);

    return 0;
    
}