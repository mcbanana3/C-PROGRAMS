#include<stdio.h>
#include<string.h>

int main(){

    char str[50], str1[50];
    gets(str);
    gets(str1);

    strcat(str, str1);

    printf("%s", str);

    return 0;
}