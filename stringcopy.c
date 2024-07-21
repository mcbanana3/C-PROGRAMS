#include<stdio.h>
#include<string.h>

int main() {

    char FirstName[20];
    char LastName[20];

    printf("Enter your First Name : ");
    scanf("%s", &FirstName);

    printf("Enter your Last Name : ");
    scanf("%s", &LastName);

    strcpy(FirstName,LastName);

    puts(FirstName);

    return 0;

}