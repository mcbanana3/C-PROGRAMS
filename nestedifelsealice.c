#include<stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    if (num % 2 == 0)
    {
        if (num % 4 == 0)
        {
            printf("The number is Even and divisible by 4\n");
        }

        else{
            printf("The number is Even but not divisible by 4\n");
        }
        
    }

    else{
        
        if (num % 3 == 0)
        {
            printf("The number is Odd and divisible by 3\n");
        }

        else {
            printf("The number is Odd but not divisible by 3\n");
        }
        
    }

    return 0;
    
}