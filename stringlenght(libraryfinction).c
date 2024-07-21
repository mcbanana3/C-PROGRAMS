#include<stdio.h>
#include<string.h>

int main() {

    char Name[20];
    printf("Enter your Name : ");
    scanf("%s", &Name);

    printf("The string Lenght is : %d", strlen(Name));

    return 0;
    
}