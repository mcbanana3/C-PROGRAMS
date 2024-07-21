#include<stdio.h>

int main() {

    int num;
    int binary_digits[32];

    printf("Enter a Decimal Number : \n");
    scanf("%d", &num);

    printf("The Decimal Number is : %d\n", num);

    int i = 0;

    for (; num > 0; i++)
    {
        binary_digits[i] = num % 2;
        num = num/2;
    }

    for (int j = i - 1; j >= 0 ; j--)
    {
        printf("%d", binary_digits[j]);
    }

    return 0;

}