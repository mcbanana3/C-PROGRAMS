#include<stdio.h>

int main() {

    int age = 17;
    int *ptr = &age;

    //printf("%p \n", age);
    printf("%u\n", age);

    printf("%u\n", ptr);

    printf("%u \n", &ptr);

    return 0;
}