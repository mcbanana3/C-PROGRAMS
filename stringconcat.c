#include<stdio.h>
#include<string.h>

int main(){

    char str1[50], str2[50];
    gets(str1);
    gets(str2);

    int len1 = strlen(str1), len2 = strlen(str2);

    for(int i = len1, j = 0; j < len2; i++, j++)
    {
        str1[i] = str2[j];
    }

    str1[len1+len2] = '\0';
    
    printf("The concatenated string is : %s\n", str1);

    return 0;
}