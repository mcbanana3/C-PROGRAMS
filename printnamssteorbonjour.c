#include<stdio.h>

void namaste();
void bonjour();

int main() {

    char ch;
    printf("Enter (f) for French and (I) for indian : ");
    scanf("%c", &ch);

    if (ch == 'i') {
        namaste();
    }

    else if (ch == 'f') {
        bonjour();
    }

    else {
        printf("Not a Valid Character");
    }

    return 0;
    
}

void namaste() {

    printf("namaste \n");

}

void bonjour() {

    printf("bonjour \n");

}