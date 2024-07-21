#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct numbersstructures
{
    int no_elements[500];
    char no_elements_digits[200];
}numbers; 

void revstr(char *Array);

void revint(int *array);

void Addition(int *Array1, int *Array2, int *Array3);

void print_Array(int *Array);

void shift_digits(int *Array, int n);

int main() {

    FILE * nofile;

    nofile = fopen("no.txt", "r");

    int no_num;
    int choice1, choice2;
    char symbol;

    fscanf(nofile, "%d\n", &no_num);
    printf("The Number of Numbers are : %d\n", no_num);

    printf("\n");

    numbers* num_Array = (numbers*)malloc(sizeof(numbers)*no_num);

    for (int i = 0; i < no_num; i++)
    {
        fgets(num_Array[i].no_elements_digits, 1000, nofile);
        num_Array[i].no_elements_digits[strlen(num_Array[i].no_elements_digits)-1]='\0';
    }

    printf("\n");

    printf("The Number Stored in Strings are (straight): \n");

    printf("\n");
    
    for (int i = 0; i < no_num; i++)
    {
        printf("%s\n", num_Array[i].no_elements_digits);
    }

    printf("\n");

    printf("The Number Stored in Strings are (Reverse): \n");

    for (int i = 0; i < no_num; i++)
    {
        revstr(num_Array[i].no_elements_digits);
        printf("%s\n", num_Array[i].no_elements_digits);
    }

    printf("The Number Stored in Integers are : \n");

    printf("\n");

    for (int i = 0; i < no_num; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            num_Array[i].no_elements[j] = 0;
        }

        for (int j = 0; j < strlen(num_Array[i].no_elements_digits) ; j++)
        {
            num_Array[i].no_elements[j] = (num_Array[i].no_elements_digits[j] - '0');
        }
    }

    for (int i = 0; i < no_num; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            printf("%d", num_Array[i].no_elements[j]);
        }
        printf("\n");
    }

    printf("\n");
    
    fscanf(nofile, "%d%c%d\n", &choice1, &symbol, &choice2);
    printf("The Operation is : %d%c%d\n", choice1, symbol, choice2);

    printf("\n");

    choice1 = choice1 - 1;
    choice2 = choice2 - 1;

    numbers multiply_result;
    numbers first_digit;
    numbers second_digit;
    numbers third_digit;

    if (symbol == '*')
    {
        for (int i = 0; i < 500; i++)
        {
            first_digit.no_elements[i] = 0;
        }

        for (int i = 0; i < 500; i++)
        {
            int carry = 0;

            for (int j = 0; j < 500; j++)
            {
                second_digit.no_elements[j] = ((num_Array[choice2].no_elements[i] * num_Array[choice1].no_elements[j]) + carry) % 10;
                carry = ((num_Array[choice2].no_elements[i] * num_Array[choice1].no_elements[j]) + carry) / 10;
            }

            shift_digits(second_digit.no_elements, i);

            Addition(first_digit.no_elements, second_digit.no_elements , third_digit.no_elements);

            for (int j = 0; j < 500; j++)
            {
                first_digit.no_elements[j] = third_digit.no_elements[j];
            }
        }
        
        revint(first_digit.no_elements);

        printf("\n");

        int i = 0;
        
        for (; i < 500; i++)
        {
            if (first_digit.no_elements[i] > 0)
            {
                break;
            }
        }

        for (; i < 500; i++)
        {
            multiply_result.no_elements[i] = first_digit.no_elements[i];
            printf("%d", multiply_result.no_elements[i]);
        }

    }

    fclose(nofile);

    return 0;

}

void revstr(char *Array) {

    for (int i = 0; i < strlen(Array)/2; i++)
    {
        char temp = Array[strlen(Array) - 1 - i];
        Array[strlen(Array) - 1 - i] = Array[i];
        Array[i] = temp;
    }                                                                                 
}

void revint(int *array) {

    for (int i = 0; i < 500/2; i++)
    {
        int temp = array[500 - 1 -i];
        array[500 - 1 - i] = array[i];
        array[i] = temp;
    }
    
}

void Addition(int *Array1, int *Array2, int *Array3) {

    int carry = 0;

    for (int i = 0; i < 500; i++)
    {
        Array3[i] = (Array1[i] + Array2[i] + carry) % 10;
        carry = ((Array1[i] + Array2[i] + carry) / 10);
    }
    
}

void print_Array(int *Array) {

    for (int i = 0; i < 500; i++)
    {
        printf("%d", Array[i]);
    }
    printf("\n");
}

void shift_digits(int *Array, int n) {

    int temp[500] = {0};
    
    for (int i = 0, j = n ; i < (500-n); i++, j++)
    {
        temp[j] = Array[i];
    }

    for (int i = 0; i < 500; i++)
    {
        Array[i] = temp[i];
    }
    
    
}