#include<stdio.h>
#include<string.h>

int main() {

    char str[200];

    printf("Enter a Word : ");
    scanf("%s", str);

    printf("The String Length is : %d \n", strlen(str));

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (char)(str[i]-32);
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (char)(str[i]+32);
        }
        
    }

    printf("The new Word is : %s \n", str);

    return 0;

}
    