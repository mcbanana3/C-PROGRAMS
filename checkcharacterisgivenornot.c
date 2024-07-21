#include<stdio.h>
#include<string.h>

int main() {

    char check;
    char word[100];

    printf("Enter a Character to check : ");
    scanf("%c", &check);

    printf("Enter a Word to check : ");
    scanf("%s", &word);

    printf("The string Lenght is : %d \n", strlen(word));

    for (int i = 0; i < strlen(word); i++)
    {
        if (check == word[i])
        {
            printf("The character is present.");
            break;
        }
        printf("The charac ter is not present.");
        break;
    }

    return 0;
    
}