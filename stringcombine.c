#include<stdio.h>
#include<string.h>

int main() {

    char first[20];
    char Second[20];

    printf("Enter your Name : ");
    scanf("%s", &first);

    printf("Enter your Friend's Name : ");
    scanf("%s", &Second);

    printf("The sentence is : %s", strcat(first, Second));

    return 0;
    
}