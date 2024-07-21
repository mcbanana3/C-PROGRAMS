#include<stdio.h>

void square(int n);

int main() {

    int number = 5;
    
    square(number);

    printf("Number is : %d\n", number);

    return 0;

}

void square(int n) {
    n = n * n;
    printf("square = %d \n", n);
}