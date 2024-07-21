#include<stdio.h>
#include<stdlib.h>

int main() {

    int *ptr;

    ptr = (int*) calloc(500, sizeof(int));

    printf("The Natural Numbers are : ");

    for (int i = 1; i <= 500; i++)
    {
        printf("%d \n", &ptr[i]);
    }

    return 0;
}