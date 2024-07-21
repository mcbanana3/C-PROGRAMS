#include<stdio.h>

#define N 4

int main(){

    int alp = 65;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < (N-i)-1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i+1; k++)
        {
            printf("%c ", alp++);
        }

        printf("\n");
    }

    return 0;
    
}