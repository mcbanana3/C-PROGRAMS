#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){

    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }

    printf("The Sum of Integers in CMA is %d\n", sum);

    return 0;
    
}