#include<stdio.h>

int main() {

    char ch[100];

    FILE *fptr;

    fptr = fopen("test.txt", "r");

    fscanf(fptr, "%s", &ch);
    printf("character = %s", ch);

    fclose(fptr);

    return 0;
}