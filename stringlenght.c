#include<stdio.h>

int main(){

    int len;
    char str[50];

    gets(str);

    for (len = 0; str[len] != '\0'; len++);

    printf("%d\n", len);

    return 0;
}