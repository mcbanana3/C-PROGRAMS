#include<stdio.h>
#include<math.h>

int main() {

    int num;
    int modulus_num;
    int decimal_num;

    printf("Enter a Binary Number : \n");
    scanf("%d", &num);

    printf("The Binary Number Entered is : %d.\n", num);

    for (int i = 0; i > num; i++)
    {
        modulus_num = num % 10;
        decimal_num = decimal_num + (modulus_num * (pow(2,i)));
    }

    printf("The Decimal Number is : %d\n", decimal_num);

    return 0;

}