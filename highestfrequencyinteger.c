#include<stdio.h>
#include<string.h>

int main() {

    int numbers[10] = {1,2,3,3,4,5,6,4,5,6};
    int max = 0;
    int freq[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i <= 9; i++)
    {
       freq[numbers[i]]++;
    }

    for (int i = 0; i <= 9; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
        }
        
    }

    printf("The highest number is %d", max);

    return 0;
    
}