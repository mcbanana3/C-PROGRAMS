#include<stdio.h>

int main() {

    char Name[] = "aryan";
    int strLen=0;

    for (int i = 0;; i++)
    {
        if ((Name[i] == '\0'))
        {
            break;
        }
        strLen++;
        
    }

    printf("The Total Number is : %d \n", strLen);

    for (int i = strLen; i >= 0; i--)
    {
        printf("%c", Name[i]);
    }
    
    return 0;
    
}