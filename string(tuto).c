#include<stdio.h>
#include<string.h>

// void printstring(char arr[]);

int main() {

    // char firstName[] = "Aryan";
    // char lastname[] = "Y";

    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    char *canchange = "Hello World";
    puts(canchange);
    canchange = "Hello";
    puts(canchange);

    // printstring(firstName);
    // printstring(lastname);

    return 0;

}

// void printstring(char arr[]) {
//     for (int i = 0;arr[i] != '\0' ; i++)
//     {
//         printf("%c \n", arr[i]);
//     }
    
// }