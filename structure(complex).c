#include<stdio.h>
#include<string.h>

struct complex
{
    int real;
    int imaginary;
};

int main() {

    struct complex c1 = {5, 5};
    struct complex *ptr = &c1;

    printf("Real Number is : %d \n", ptr->real);
    printf("Imaginary Number is : %d \n", ptr->imaginary);

    return 0;

}