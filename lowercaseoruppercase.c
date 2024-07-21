#include<stdio.h>

int main() {

    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'B') {
        printf("Uppercase");
    }

    else if (ch>= 'a' && ch <= 'z') {
        printf("Lowercase");
    }

    else {
        printf("Not a Character");
    }
    
    return 0;
    
}