#include<stdio.h>
#include<string.h>

int main() {

    int numbers[10] = {1,1,2,3,8,4,6,5,4,8};
    int max = numbers[0];

    for (int i = 1; i <= 9; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        
    }

    printf("The highest number is : %d", max);
    
    return 0;

}