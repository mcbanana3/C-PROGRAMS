#include<stdio.h>
#include<string.h>

int main() {

    char first[20];
    char second[20];

    printf("Enter your First Name : ");
    scanf("%s", &first);

    printf("Enter your Family Name : ");
    scanf("%s", &second);

    printf("%d \n", strcmp(first, second));

    return 0;
    
}