#include<stdio.h>

int main() {
    
    int i;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("Enter the value of (I) : ");
    scanf("%d", &i);

    printf("The value of I from (Pointer) to (Pointer) is : %d", **pptr);

    return 0;
}

//4 int input ascending order.......