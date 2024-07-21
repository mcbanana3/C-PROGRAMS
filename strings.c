#include<stdio.h>

int main() {

    char Name[30];
    int strLen=0;
    printf("Enter Your Name : ");
    scanf("%s", &Name);

    for (int i = 0;; i++)
    {
        if ((Name[i] == '\0'))
        {
            break;
        }
        strLen++;
        
    }

    printf("The Total Number is : %d", strLen);

    return 0;
    
}