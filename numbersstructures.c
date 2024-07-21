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

int main() {

    FILE * nofile;

    nofile = fopen("no.txt", "r");

    int no_num;
    int choice1, choice2;
    char symbol;
    int no_operations;

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

    numbers add_result;
    numbers add_result_notzero;

    if (symbol == '+')
    {
        int carry = 0;

        for (int i = 0; i < 500; i++)
        {
            add_result.no_elements[i] = (num_Array[choice1].no_elements[i] + num_Array[choice2].no_elements[i] + carry) % 10;
            carry = ((num_Array[choice1].no_elements[i] + num_Array[choice2].no_elements[i] + carry) / 10);
            printf("%d", add_result.no_elements[i]);
        }

        printf("\n");

        revint(add_result.no_elements);

        printf("\n");

        printf("The Addition is : \n");

        printf("\n");

        int i = 0;
        
        for (; i < 500; i++)
        {
            if (add_result.no_elements[i] > 0)
            {
                break;
            }
        }

        for (int j=0; i < 500; j++, i++)
        {
            add_result_notzero.no_elements[j] = add_result.no_elements[i];
            printf("%d", add_result_notzero.no_elements[j]);
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