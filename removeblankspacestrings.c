#include<stdio.h>
#include<string.h>

int main() {

    char str[200];
    int space = ' ';
    int lenght;

    printf("Enter a Word : ");
    scanf("%s", str);

    lenght = strlen(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == space)
        {
            for (int j = i; i < strlen(str); j++)
            {
                str[j] = str[j+1];
            }
            lenght--;
            i--;
        }
        
    }

    printf("String after removing space : %s", str);

    return 0;

}